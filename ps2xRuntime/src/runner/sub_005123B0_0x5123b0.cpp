#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005123B0
// Address: 0x5123b0 - 0x513920
void sub_005123B0_0x5123b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005123B0_0x5123b0");
#endif

    switch (ctx->pc) {
        case 0x5123b0u: goto label_5123b0;
        case 0x5123b4u: goto label_5123b4;
        case 0x5123b8u: goto label_5123b8;
        case 0x5123bcu: goto label_5123bc;
        case 0x5123c0u: goto label_5123c0;
        case 0x5123c4u: goto label_5123c4;
        case 0x5123c8u: goto label_5123c8;
        case 0x5123ccu: goto label_5123cc;
        case 0x5123d0u: goto label_5123d0;
        case 0x5123d4u: goto label_5123d4;
        case 0x5123d8u: goto label_5123d8;
        case 0x5123dcu: goto label_5123dc;
        case 0x5123e0u: goto label_5123e0;
        case 0x5123e4u: goto label_5123e4;
        case 0x5123e8u: goto label_5123e8;
        case 0x5123ecu: goto label_5123ec;
        case 0x5123f0u: goto label_5123f0;
        case 0x5123f4u: goto label_5123f4;
        case 0x5123f8u: goto label_5123f8;
        case 0x5123fcu: goto label_5123fc;
        case 0x512400u: goto label_512400;
        case 0x512404u: goto label_512404;
        case 0x512408u: goto label_512408;
        case 0x51240cu: goto label_51240c;
        case 0x512410u: goto label_512410;
        case 0x512414u: goto label_512414;
        case 0x512418u: goto label_512418;
        case 0x51241cu: goto label_51241c;
        case 0x512420u: goto label_512420;
        case 0x512424u: goto label_512424;
        case 0x512428u: goto label_512428;
        case 0x51242cu: goto label_51242c;
        case 0x512430u: goto label_512430;
        case 0x512434u: goto label_512434;
        case 0x512438u: goto label_512438;
        case 0x51243cu: goto label_51243c;
        case 0x512440u: goto label_512440;
        case 0x512444u: goto label_512444;
        case 0x512448u: goto label_512448;
        case 0x51244cu: goto label_51244c;
        case 0x512450u: goto label_512450;
        case 0x512454u: goto label_512454;
        case 0x512458u: goto label_512458;
        case 0x51245cu: goto label_51245c;
        case 0x512460u: goto label_512460;
        case 0x512464u: goto label_512464;
        case 0x512468u: goto label_512468;
        case 0x51246cu: goto label_51246c;
        case 0x512470u: goto label_512470;
        case 0x512474u: goto label_512474;
        case 0x512478u: goto label_512478;
        case 0x51247cu: goto label_51247c;
        case 0x512480u: goto label_512480;
        case 0x512484u: goto label_512484;
        case 0x512488u: goto label_512488;
        case 0x51248cu: goto label_51248c;
        case 0x512490u: goto label_512490;
        case 0x512494u: goto label_512494;
        case 0x512498u: goto label_512498;
        case 0x51249cu: goto label_51249c;
        case 0x5124a0u: goto label_5124a0;
        case 0x5124a4u: goto label_5124a4;
        case 0x5124a8u: goto label_5124a8;
        case 0x5124acu: goto label_5124ac;
        case 0x5124b0u: goto label_5124b0;
        case 0x5124b4u: goto label_5124b4;
        case 0x5124b8u: goto label_5124b8;
        case 0x5124bcu: goto label_5124bc;
        case 0x5124c0u: goto label_5124c0;
        case 0x5124c4u: goto label_5124c4;
        case 0x5124c8u: goto label_5124c8;
        case 0x5124ccu: goto label_5124cc;
        case 0x5124d0u: goto label_5124d0;
        case 0x5124d4u: goto label_5124d4;
        case 0x5124d8u: goto label_5124d8;
        case 0x5124dcu: goto label_5124dc;
        case 0x5124e0u: goto label_5124e0;
        case 0x5124e4u: goto label_5124e4;
        case 0x5124e8u: goto label_5124e8;
        case 0x5124ecu: goto label_5124ec;
        case 0x5124f0u: goto label_5124f0;
        case 0x5124f4u: goto label_5124f4;
        case 0x5124f8u: goto label_5124f8;
        case 0x5124fcu: goto label_5124fc;
        case 0x512500u: goto label_512500;
        case 0x512504u: goto label_512504;
        case 0x512508u: goto label_512508;
        case 0x51250cu: goto label_51250c;
        case 0x512510u: goto label_512510;
        case 0x512514u: goto label_512514;
        case 0x512518u: goto label_512518;
        case 0x51251cu: goto label_51251c;
        case 0x512520u: goto label_512520;
        case 0x512524u: goto label_512524;
        case 0x512528u: goto label_512528;
        case 0x51252cu: goto label_51252c;
        case 0x512530u: goto label_512530;
        case 0x512534u: goto label_512534;
        case 0x512538u: goto label_512538;
        case 0x51253cu: goto label_51253c;
        case 0x512540u: goto label_512540;
        case 0x512544u: goto label_512544;
        case 0x512548u: goto label_512548;
        case 0x51254cu: goto label_51254c;
        case 0x512550u: goto label_512550;
        case 0x512554u: goto label_512554;
        case 0x512558u: goto label_512558;
        case 0x51255cu: goto label_51255c;
        case 0x512560u: goto label_512560;
        case 0x512564u: goto label_512564;
        case 0x512568u: goto label_512568;
        case 0x51256cu: goto label_51256c;
        case 0x512570u: goto label_512570;
        case 0x512574u: goto label_512574;
        case 0x512578u: goto label_512578;
        case 0x51257cu: goto label_51257c;
        case 0x512580u: goto label_512580;
        case 0x512584u: goto label_512584;
        case 0x512588u: goto label_512588;
        case 0x51258cu: goto label_51258c;
        case 0x512590u: goto label_512590;
        case 0x512594u: goto label_512594;
        case 0x512598u: goto label_512598;
        case 0x51259cu: goto label_51259c;
        case 0x5125a0u: goto label_5125a0;
        case 0x5125a4u: goto label_5125a4;
        case 0x5125a8u: goto label_5125a8;
        case 0x5125acu: goto label_5125ac;
        case 0x5125b0u: goto label_5125b0;
        case 0x5125b4u: goto label_5125b4;
        case 0x5125b8u: goto label_5125b8;
        case 0x5125bcu: goto label_5125bc;
        case 0x5125c0u: goto label_5125c0;
        case 0x5125c4u: goto label_5125c4;
        case 0x5125c8u: goto label_5125c8;
        case 0x5125ccu: goto label_5125cc;
        case 0x5125d0u: goto label_5125d0;
        case 0x5125d4u: goto label_5125d4;
        case 0x5125d8u: goto label_5125d8;
        case 0x5125dcu: goto label_5125dc;
        case 0x5125e0u: goto label_5125e0;
        case 0x5125e4u: goto label_5125e4;
        case 0x5125e8u: goto label_5125e8;
        case 0x5125ecu: goto label_5125ec;
        case 0x5125f0u: goto label_5125f0;
        case 0x5125f4u: goto label_5125f4;
        case 0x5125f8u: goto label_5125f8;
        case 0x5125fcu: goto label_5125fc;
        case 0x512600u: goto label_512600;
        case 0x512604u: goto label_512604;
        case 0x512608u: goto label_512608;
        case 0x51260cu: goto label_51260c;
        case 0x512610u: goto label_512610;
        case 0x512614u: goto label_512614;
        case 0x512618u: goto label_512618;
        case 0x51261cu: goto label_51261c;
        case 0x512620u: goto label_512620;
        case 0x512624u: goto label_512624;
        case 0x512628u: goto label_512628;
        case 0x51262cu: goto label_51262c;
        case 0x512630u: goto label_512630;
        case 0x512634u: goto label_512634;
        case 0x512638u: goto label_512638;
        case 0x51263cu: goto label_51263c;
        case 0x512640u: goto label_512640;
        case 0x512644u: goto label_512644;
        case 0x512648u: goto label_512648;
        case 0x51264cu: goto label_51264c;
        case 0x512650u: goto label_512650;
        case 0x512654u: goto label_512654;
        case 0x512658u: goto label_512658;
        case 0x51265cu: goto label_51265c;
        case 0x512660u: goto label_512660;
        case 0x512664u: goto label_512664;
        case 0x512668u: goto label_512668;
        case 0x51266cu: goto label_51266c;
        case 0x512670u: goto label_512670;
        case 0x512674u: goto label_512674;
        case 0x512678u: goto label_512678;
        case 0x51267cu: goto label_51267c;
        case 0x512680u: goto label_512680;
        case 0x512684u: goto label_512684;
        case 0x512688u: goto label_512688;
        case 0x51268cu: goto label_51268c;
        case 0x512690u: goto label_512690;
        case 0x512694u: goto label_512694;
        case 0x512698u: goto label_512698;
        case 0x51269cu: goto label_51269c;
        case 0x5126a0u: goto label_5126a0;
        case 0x5126a4u: goto label_5126a4;
        case 0x5126a8u: goto label_5126a8;
        case 0x5126acu: goto label_5126ac;
        case 0x5126b0u: goto label_5126b0;
        case 0x5126b4u: goto label_5126b4;
        case 0x5126b8u: goto label_5126b8;
        case 0x5126bcu: goto label_5126bc;
        case 0x5126c0u: goto label_5126c0;
        case 0x5126c4u: goto label_5126c4;
        case 0x5126c8u: goto label_5126c8;
        case 0x5126ccu: goto label_5126cc;
        case 0x5126d0u: goto label_5126d0;
        case 0x5126d4u: goto label_5126d4;
        case 0x5126d8u: goto label_5126d8;
        case 0x5126dcu: goto label_5126dc;
        case 0x5126e0u: goto label_5126e0;
        case 0x5126e4u: goto label_5126e4;
        case 0x5126e8u: goto label_5126e8;
        case 0x5126ecu: goto label_5126ec;
        case 0x5126f0u: goto label_5126f0;
        case 0x5126f4u: goto label_5126f4;
        case 0x5126f8u: goto label_5126f8;
        case 0x5126fcu: goto label_5126fc;
        case 0x512700u: goto label_512700;
        case 0x512704u: goto label_512704;
        case 0x512708u: goto label_512708;
        case 0x51270cu: goto label_51270c;
        case 0x512710u: goto label_512710;
        case 0x512714u: goto label_512714;
        case 0x512718u: goto label_512718;
        case 0x51271cu: goto label_51271c;
        case 0x512720u: goto label_512720;
        case 0x512724u: goto label_512724;
        case 0x512728u: goto label_512728;
        case 0x51272cu: goto label_51272c;
        case 0x512730u: goto label_512730;
        case 0x512734u: goto label_512734;
        case 0x512738u: goto label_512738;
        case 0x51273cu: goto label_51273c;
        case 0x512740u: goto label_512740;
        case 0x512744u: goto label_512744;
        case 0x512748u: goto label_512748;
        case 0x51274cu: goto label_51274c;
        case 0x512750u: goto label_512750;
        case 0x512754u: goto label_512754;
        case 0x512758u: goto label_512758;
        case 0x51275cu: goto label_51275c;
        case 0x512760u: goto label_512760;
        case 0x512764u: goto label_512764;
        case 0x512768u: goto label_512768;
        case 0x51276cu: goto label_51276c;
        case 0x512770u: goto label_512770;
        case 0x512774u: goto label_512774;
        case 0x512778u: goto label_512778;
        case 0x51277cu: goto label_51277c;
        case 0x512780u: goto label_512780;
        case 0x512784u: goto label_512784;
        case 0x512788u: goto label_512788;
        case 0x51278cu: goto label_51278c;
        case 0x512790u: goto label_512790;
        case 0x512794u: goto label_512794;
        case 0x512798u: goto label_512798;
        case 0x51279cu: goto label_51279c;
        case 0x5127a0u: goto label_5127a0;
        case 0x5127a4u: goto label_5127a4;
        case 0x5127a8u: goto label_5127a8;
        case 0x5127acu: goto label_5127ac;
        case 0x5127b0u: goto label_5127b0;
        case 0x5127b4u: goto label_5127b4;
        case 0x5127b8u: goto label_5127b8;
        case 0x5127bcu: goto label_5127bc;
        case 0x5127c0u: goto label_5127c0;
        case 0x5127c4u: goto label_5127c4;
        case 0x5127c8u: goto label_5127c8;
        case 0x5127ccu: goto label_5127cc;
        case 0x5127d0u: goto label_5127d0;
        case 0x5127d4u: goto label_5127d4;
        case 0x5127d8u: goto label_5127d8;
        case 0x5127dcu: goto label_5127dc;
        case 0x5127e0u: goto label_5127e0;
        case 0x5127e4u: goto label_5127e4;
        case 0x5127e8u: goto label_5127e8;
        case 0x5127ecu: goto label_5127ec;
        case 0x5127f0u: goto label_5127f0;
        case 0x5127f4u: goto label_5127f4;
        case 0x5127f8u: goto label_5127f8;
        case 0x5127fcu: goto label_5127fc;
        case 0x512800u: goto label_512800;
        case 0x512804u: goto label_512804;
        case 0x512808u: goto label_512808;
        case 0x51280cu: goto label_51280c;
        case 0x512810u: goto label_512810;
        case 0x512814u: goto label_512814;
        case 0x512818u: goto label_512818;
        case 0x51281cu: goto label_51281c;
        case 0x512820u: goto label_512820;
        case 0x512824u: goto label_512824;
        case 0x512828u: goto label_512828;
        case 0x51282cu: goto label_51282c;
        case 0x512830u: goto label_512830;
        case 0x512834u: goto label_512834;
        case 0x512838u: goto label_512838;
        case 0x51283cu: goto label_51283c;
        case 0x512840u: goto label_512840;
        case 0x512844u: goto label_512844;
        case 0x512848u: goto label_512848;
        case 0x51284cu: goto label_51284c;
        case 0x512850u: goto label_512850;
        case 0x512854u: goto label_512854;
        case 0x512858u: goto label_512858;
        case 0x51285cu: goto label_51285c;
        case 0x512860u: goto label_512860;
        case 0x512864u: goto label_512864;
        case 0x512868u: goto label_512868;
        case 0x51286cu: goto label_51286c;
        case 0x512870u: goto label_512870;
        case 0x512874u: goto label_512874;
        case 0x512878u: goto label_512878;
        case 0x51287cu: goto label_51287c;
        case 0x512880u: goto label_512880;
        case 0x512884u: goto label_512884;
        case 0x512888u: goto label_512888;
        case 0x51288cu: goto label_51288c;
        case 0x512890u: goto label_512890;
        case 0x512894u: goto label_512894;
        case 0x512898u: goto label_512898;
        case 0x51289cu: goto label_51289c;
        case 0x5128a0u: goto label_5128a0;
        case 0x5128a4u: goto label_5128a4;
        case 0x5128a8u: goto label_5128a8;
        case 0x5128acu: goto label_5128ac;
        case 0x5128b0u: goto label_5128b0;
        case 0x5128b4u: goto label_5128b4;
        case 0x5128b8u: goto label_5128b8;
        case 0x5128bcu: goto label_5128bc;
        case 0x5128c0u: goto label_5128c0;
        case 0x5128c4u: goto label_5128c4;
        case 0x5128c8u: goto label_5128c8;
        case 0x5128ccu: goto label_5128cc;
        case 0x5128d0u: goto label_5128d0;
        case 0x5128d4u: goto label_5128d4;
        case 0x5128d8u: goto label_5128d8;
        case 0x5128dcu: goto label_5128dc;
        case 0x5128e0u: goto label_5128e0;
        case 0x5128e4u: goto label_5128e4;
        case 0x5128e8u: goto label_5128e8;
        case 0x5128ecu: goto label_5128ec;
        case 0x5128f0u: goto label_5128f0;
        case 0x5128f4u: goto label_5128f4;
        case 0x5128f8u: goto label_5128f8;
        case 0x5128fcu: goto label_5128fc;
        case 0x512900u: goto label_512900;
        case 0x512904u: goto label_512904;
        case 0x512908u: goto label_512908;
        case 0x51290cu: goto label_51290c;
        case 0x512910u: goto label_512910;
        case 0x512914u: goto label_512914;
        case 0x512918u: goto label_512918;
        case 0x51291cu: goto label_51291c;
        case 0x512920u: goto label_512920;
        case 0x512924u: goto label_512924;
        case 0x512928u: goto label_512928;
        case 0x51292cu: goto label_51292c;
        case 0x512930u: goto label_512930;
        case 0x512934u: goto label_512934;
        case 0x512938u: goto label_512938;
        case 0x51293cu: goto label_51293c;
        case 0x512940u: goto label_512940;
        case 0x512944u: goto label_512944;
        case 0x512948u: goto label_512948;
        case 0x51294cu: goto label_51294c;
        case 0x512950u: goto label_512950;
        case 0x512954u: goto label_512954;
        case 0x512958u: goto label_512958;
        case 0x51295cu: goto label_51295c;
        case 0x512960u: goto label_512960;
        case 0x512964u: goto label_512964;
        case 0x512968u: goto label_512968;
        case 0x51296cu: goto label_51296c;
        case 0x512970u: goto label_512970;
        case 0x512974u: goto label_512974;
        case 0x512978u: goto label_512978;
        case 0x51297cu: goto label_51297c;
        case 0x512980u: goto label_512980;
        case 0x512984u: goto label_512984;
        case 0x512988u: goto label_512988;
        case 0x51298cu: goto label_51298c;
        case 0x512990u: goto label_512990;
        case 0x512994u: goto label_512994;
        case 0x512998u: goto label_512998;
        case 0x51299cu: goto label_51299c;
        case 0x5129a0u: goto label_5129a0;
        case 0x5129a4u: goto label_5129a4;
        case 0x5129a8u: goto label_5129a8;
        case 0x5129acu: goto label_5129ac;
        case 0x5129b0u: goto label_5129b0;
        case 0x5129b4u: goto label_5129b4;
        case 0x5129b8u: goto label_5129b8;
        case 0x5129bcu: goto label_5129bc;
        case 0x5129c0u: goto label_5129c0;
        case 0x5129c4u: goto label_5129c4;
        case 0x5129c8u: goto label_5129c8;
        case 0x5129ccu: goto label_5129cc;
        case 0x5129d0u: goto label_5129d0;
        case 0x5129d4u: goto label_5129d4;
        case 0x5129d8u: goto label_5129d8;
        case 0x5129dcu: goto label_5129dc;
        case 0x5129e0u: goto label_5129e0;
        case 0x5129e4u: goto label_5129e4;
        case 0x5129e8u: goto label_5129e8;
        case 0x5129ecu: goto label_5129ec;
        case 0x5129f0u: goto label_5129f0;
        case 0x5129f4u: goto label_5129f4;
        case 0x5129f8u: goto label_5129f8;
        case 0x5129fcu: goto label_5129fc;
        case 0x512a00u: goto label_512a00;
        case 0x512a04u: goto label_512a04;
        case 0x512a08u: goto label_512a08;
        case 0x512a0cu: goto label_512a0c;
        case 0x512a10u: goto label_512a10;
        case 0x512a14u: goto label_512a14;
        case 0x512a18u: goto label_512a18;
        case 0x512a1cu: goto label_512a1c;
        case 0x512a20u: goto label_512a20;
        case 0x512a24u: goto label_512a24;
        case 0x512a28u: goto label_512a28;
        case 0x512a2cu: goto label_512a2c;
        case 0x512a30u: goto label_512a30;
        case 0x512a34u: goto label_512a34;
        case 0x512a38u: goto label_512a38;
        case 0x512a3cu: goto label_512a3c;
        case 0x512a40u: goto label_512a40;
        case 0x512a44u: goto label_512a44;
        case 0x512a48u: goto label_512a48;
        case 0x512a4cu: goto label_512a4c;
        case 0x512a50u: goto label_512a50;
        case 0x512a54u: goto label_512a54;
        case 0x512a58u: goto label_512a58;
        case 0x512a5cu: goto label_512a5c;
        case 0x512a60u: goto label_512a60;
        case 0x512a64u: goto label_512a64;
        case 0x512a68u: goto label_512a68;
        case 0x512a6cu: goto label_512a6c;
        case 0x512a70u: goto label_512a70;
        case 0x512a74u: goto label_512a74;
        case 0x512a78u: goto label_512a78;
        case 0x512a7cu: goto label_512a7c;
        case 0x512a80u: goto label_512a80;
        case 0x512a84u: goto label_512a84;
        case 0x512a88u: goto label_512a88;
        case 0x512a8cu: goto label_512a8c;
        case 0x512a90u: goto label_512a90;
        case 0x512a94u: goto label_512a94;
        case 0x512a98u: goto label_512a98;
        case 0x512a9cu: goto label_512a9c;
        case 0x512aa0u: goto label_512aa0;
        case 0x512aa4u: goto label_512aa4;
        case 0x512aa8u: goto label_512aa8;
        case 0x512aacu: goto label_512aac;
        case 0x512ab0u: goto label_512ab0;
        case 0x512ab4u: goto label_512ab4;
        case 0x512ab8u: goto label_512ab8;
        case 0x512abcu: goto label_512abc;
        case 0x512ac0u: goto label_512ac0;
        case 0x512ac4u: goto label_512ac4;
        case 0x512ac8u: goto label_512ac8;
        case 0x512accu: goto label_512acc;
        case 0x512ad0u: goto label_512ad0;
        case 0x512ad4u: goto label_512ad4;
        case 0x512ad8u: goto label_512ad8;
        case 0x512adcu: goto label_512adc;
        case 0x512ae0u: goto label_512ae0;
        case 0x512ae4u: goto label_512ae4;
        case 0x512ae8u: goto label_512ae8;
        case 0x512aecu: goto label_512aec;
        case 0x512af0u: goto label_512af0;
        case 0x512af4u: goto label_512af4;
        case 0x512af8u: goto label_512af8;
        case 0x512afcu: goto label_512afc;
        case 0x512b00u: goto label_512b00;
        case 0x512b04u: goto label_512b04;
        case 0x512b08u: goto label_512b08;
        case 0x512b0cu: goto label_512b0c;
        case 0x512b10u: goto label_512b10;
        case 0x512b14u: goto label_512b14;
        case 0x512b18u: goto label_512b18;
        case 0x512b1cu: goto label_512b1c;
        case 0x512b20u: goto label_512b20;
        case 0x512b24u: goto label_512b24;
        case 0x512b28u: goto label_512b28;
        case 0x512b2cu: goto label_512b2c;
        case 0x512b30u: goto label_512b30;
        case 0x512b34u: goto label_512b34;
        case 0x512b38u: goto label_512b38;
        case 0x512b3cu: goto label_512b3c;
        case 0x512b40u: goto label_512b40;
        case 0x512b44u: goto label_512b44;
        case 0x512b48u: goto label_512b48;
        case 0x512b4cu: goto label_512b4c;
        case 0x512b50u: goto label_512b50;
        case 0x512b54u: goto label_512b54;
        case 0x512b58u: goto label_512b58;
        case 0x512b5cu: goto label_512b5c;
        case 0x512b60u: goto label_512b60;
        case 0x512b64u: goto label_512b64;
        case 0x512b68u: goto label_512b68;
        case 0x512b6cu: goto label_512b6c;
        case 0x512b70u: goto label_512b70;
        case 0x512b74u: goto label_512b74;
        case 0x512b78u: goto label_512b78;
        case 0x512b7cu: goto label_512b7c;
        case 0x512b80u: goto label_512b80;
        case 0x512b84u: goto label_512b84;
        case 0x512b88u: goto label_512b88;
        case 0x512b8cu: goto label_512b8c;
        case 0x512b90u: goto label_512b90;
        case 0x512b94u: goto label_512b94;
        case 0x512b98u: goto label_512b98;
        case 0x512b9cu: goto label_512b9c;
        case 0x512ba0u: goto label_512ba0;
        case 0x512ba4u: goto label_512ba4;
        case 0x512ba8u: goto label_512ba8;
        case 0x512bacu: goto label_512bac;
        case 0x512bb0u: goto label_512bb0;
        case 0x512bb4u: goto label_512bb4;
        case 0x512bb8u: goto label_512bb8;
        case 0x512bbcu: goto label_512bbc;
        case 0x512bc0u: goto label_512bc0;
        case 0x512bc4u: goto label_512bc4;
        case 0x512bc8u: goto label_512bc8;
        case 0x512bccu: goto label_512bcc;
        case 0x512bd0u: goto label_512bd0;
        case 0x512bd4u: goto label_512bd4;
        case 0x512bd8u: goto label_512bd8;
        case 0x512bdcu: goto label_512bdc;
        case 0x512be0u: goto label_512be0;
        case 0x512be4u: goto label_512be4;
        case 0x512be8u: goto label_512be8;
        case 0x512becu: goto label_512bec;
        case 0x512bf0u: goto label_512bf0;
        case 0x512bf4u: goto label_512bf4;
        case 0x512bf8u: goto label_512bf8;
        case 0x512bfcu: goto label_512bfc;
        case 0x512c00u: goto label_512c00;
        case 0x512c04u: goto label_512c04;
        case 0x512c08u: goto label_512c08;
        case 0x512c0cu: goto label_512c0c;
        case 0x512c10u: goto label_512c10;
        case 0x512c14u: goto label_512c14;
        case 0x512c18u: goto label_512c18;
        case 0x512c1cu: goto label_512c1c;
        case 0x512c20u: goto label_512c20;
        case 0x512c24u: goto label_512c24;
        case 0x512c28u: goto label_512c28;
        case 0x512c2cu: goto label_512c2c;
        case 0x512c30u: goto label_512c30;
        case 0x512c34u: goto label_512c34;
        case 0x512c38u: goto label_512c38;
        case 0x512c3cu: goto label_512c3c;
        case 0x512c40u: goto label_512c40;
        case 0x512c44u: goto label_512c44;
        case 0x512c48u: goto label_512c48;
        case 0x512c4cu: goto label_512c4c;
        case 0x512c50u: goto label_512c50;
        case 0x512c54u: goto label_512c54;
        case 0x512c58u: goto label_512c58;
        case 0x512c5cu: goto label_512c5c;
        case 0x512c60u: goto label_512c60;
        case 0x512c64u: goto label_512c64;
        case 0x512c68u: goto label_512c68;
        case 0x512c6cu: goto label_512c6c;
        case 0x512c70u: goto label_512c70;
        case 0x512c74u: goto label_512c74;
        case 0x512c78u: goto label_512c78;
        case 0x512c7cu: goto label_512c7c;
        case 0x512c80u: goto label_512c80;
        case 0x512c84u: goto label_512c84;
        case 0x512c88u: goto label_512c88;
        case 0x512c8cu: goto label_512c8c;
        case 0x512c90u: goto label_512c90;
        case 0x512c94u: goto label_512c94;
        case 0x512c98u: goto label_512c98;
        case 0x512c9cu: goto label_512c9c;
        case 0x512ca0u: goto label_512ca0;
        case 0x512ca4u: goto label_512ca4;
        case 0x512ca8u: goto label_512ca8;
        case 0x512cacu: goto label_512cac;
        case 0x512cb0u: goto label_512cb0;
        case 0x512cb4u: goto label_512cb4;
        case 0x512cb8u: goto label_512cb8;
        case 0x512cbcu: goto label_512cbc;
        case 0x512cc0u: goto label_512cc0;
        case 0x512cc4u: goto label_512cc4;
        case 0x512cc8u: goto label_512cc8;
        case 0x512cccu: goto label_512ccc;
        case 0x512cd0u: goto label_512cd0;
        case 0x512cd4u: goto label_512cd4;
        case 0x512cd8u: goto label_512cd8;
        case 0x512cdcu: goto label_512cdc;
        case 0x512ce0u: goto label_512ce0;
        case 0x512ce4u: goto label_512ce4;
        case 0x512ce8u: goto label_512ce8;
        case 0x512cecu: goto label_512cec;
        case 0x512cf0u: goto label_512cf0;
        case 0x512cf4u: goto label_512cf4;
        case 0x512cf8u: goto label_512cf8;
        case 0x512cfcu: goto label_512cfc;
        case 0x512d00u: goto label_512d00;
        case 0x512d04u: goto label_512d04;
        case 0x512d08u: goto label_512d08;
        case 0x512d0cu: goto label_512d0c;
        case 0x512d10u: goto label_512d10;
        case 0x512d14u: goto label_512d14;
        case 0x512d18u: goto label_512d18;
        case 0x512d1cu: goto label_512d1c;
        case 0x512d20u: goto label_512d20;
        case 0x512d24u: goto label_512d24;
        case 0x512d28u: goto label_512d28;
        case 0x512d2cu: goto label_512d2c;
        case 0x512d30u: goto label_512d30;
        case 0x512d34u: goto label_512d34;
        case 0x512d38u: goto label_512d38;
        case 0x512d3cu: goto label_512d3c;
        case 0x512d40u: goto label_512d40;
        case 0x512d44u: goto label_512d44;
        case 0x512d48u: goto label_512d48;
        case 0x512d4cu: goto label_512d4c;
        case 0x512d50u: goto label_512d50;
        case 0x512d54u: goto label_512d54;
        case 0x512d58u: goto label_512d58;
        case 0x512d5cu: goto label_512d5c;
        case 0x512d60u: goto label_512d60;
        case 0x512d64u: goto label_512d64;
        case 0x512d68u: goto label_512d68;
        case 0x512d6cu: goto label_512d6c;
        case 0x512d70u: goto label_512d70;
        case 0x512d74u: goto label_512d74;
        case 0x512d78u: goto label_512d78;
        case 0x512d7cu: goto label_512d7c;
        case 0x512d80u: goto label_512d80;
        case 0x512d84u: goto label_512d84;
        case 0x512d88u: goto label_512d88;
        case 0x512d8cu: goto label_512d8c;
        case 0x512d90u: goto label_512d90;
        case 0x512d94u: goto label_512d94;
        case 0x512d98u: goto label_512d98;
        case 0x512d9cu: goto label_512d9c;
        case 0x512da0u: goto label_512da0;
        case 0x512da4u: goto label_512da4;
        case 0x512da8u: goto label_512da8;
        case 0x512dacu: goto label_512dac;
        case 0x512db0u: goto label_512db0;
        case 0x512db4u: goto label_512db4;
        case 0x512db8u: goto label_512db8;
        case 0x512dbcu: goto label_512dbc;
        case 0x512dc0u: goto label_512dc0;
        case 0x512dc4u: goto label_512dc4;
        case 0x512dc8u: goto label_512dc8;
        case 0x512dccu: goto label_512dcc;
        case 0x512dd0u: goto label_512dd0;
        case 0x512dd4u: goto label_512dd4;
        case 0x512dd8u: goto label_512dd8;
        case 0x512ddcu: goto label_512ddc;
        case 0x512de0u: goto label_512de0;
        case 0x512de4u: goto label_512de4;
        case 0x512de8u: goto label_512de8;
        case 0x512decu: goto label_512dec;
        case 0x512df0u: goto label_512df0;
        case 0x512df4u: goto label_512df4;
        case 0x512df8u: goto label_512df8;
        case 0x512dfcu: goto label_512dfc;
        case 0x512e00u: goto label_512e00;
        case 0x512e04u: goto label_512e04;
        case 0x512e08u: goto label_512e08;
        case 0x512e0cu: goto label_512e0c;
        case 0x512e10u: goto label_512e10;
        case 0x512e14u: goto label_512e14;
        case 0x512e18u: goto label_512e18;
        case 0x512e1cu: goto label_512e1c;
        case 0x512e20u: goto label_512e20;
        case 0x512e24u: goto label_512e24;
        case 0x512e28u: goto label_512e28;
        case 0x512e2cu: goto label_512e2c;
        case 0x512e30u: goto label_512e30;
        case 0x512e34u: goto label_512e34;
        case 0x512e38u: goto label_512e38;
        case 0x512e3cu: goto label_512e3c;
        case 0x512e40u: goto label_512e40;
        case 0x512e44u: goto label_512e44;
        case 0x512e48u: goto label_512e48;
        case 0x512e4cu: goto label_512e4c;
        case 0x512e50u: goto label_512e50;
        case 0x512e54u: goto label_512e54;
        case 0x512e58u: goto label_512e58;
        case 0x512e5cu: goto label_512e5c;
        case 0x512e60u: goto label_512e60;
        case 0x512e64u: goto label_512e64;
        case 0x512e68u: goto label_512e68;
        case 0x512e6cu: goto label_512e6c;
        case 0x512e70u: goto label_512e70;
        case 0x512e74u: goto label_512e74;
        case 0x512e78u: goto label_512e78;
        case 0x512e7cu: goto label_512e7c;
        case 0x512e80u: goto label_512e80;
        case 0x512e84u: goto label_512e84;
        case 0x512e88u: goto label_512e88;
        case 0x512e8cu: goto label_512e8c;
        case 0x512e90u: goto label_512e90;
        case 0x512e94u: goto label_512e94;
        case 0x512e98u: goto label_512e98;
        case 0x512e9cu: goto label_512e9c;
        case 0x512ea0u: goto label_512ea0;
        case 0x512ea4u: goto label_512ea4;
        case 0x512ea8u: goto label_512ea8;
        case 0x512eacu: goto label_512eac;
        case 0x512eb0u: goto label_512eb0;
        case 0x512eb4u: goto label_512eb4;
        case 0x512eb8u: goto label_512eb8;
        case 0x512ebcu: goto label_512ebc;
        case 0x512ec0u: goto label_512ec0;
        case 0x512ec4u: goto label_512ec4;
        case 0x512ec8u: goto label_512ec8;
        case 0x512eccu: goto label_512ecc;
        case 0x512ed0u: goto label_512ed0;
        case 0x512ed4u: goto label_512ed4;
        case 0x512ed8u: goto label_512ed8;
        case 0x512edcu: goto label_512edc;
        case 0x512ee0u: goto label_512ee0;
        case 0x512ee4u: goto label_512ee4;
        case 0x512ee8u: goto label_512ee8;
        case 0x512eecu: goto label_512eec;
        case 0x512ef0u: goto label_512ef0;
        case 0x512ef4u: goto label_512ef4;
        case 0x512ef8u: goto label_512ef8;
        case 0x512efcu: goto label_512efc;
        case 0x512f00u: goto label_512f00;
        case 0x512f04u: goto label_512f04;
        case 0x512f08u: goto label_512f08;
        case 0x512f0cu: goto label_512f0c;
        case 0x512f10u: goto label_512f10;
        case 0x512f14u: goto label_512f14;
        case 0x512f18u: goto label_512f18;
        case 0x512f1cu: goto label_512f1c;
        case 0x512f20u: goto label_512f20;
        case 0x512f24u: goto label_512f24;
        case 0x512f28u: goto label_512f28;
        case 0x512f2cu: goto label_512f2c;
        case 0x512f30u: goto label_512f30;
        case 0x512f34u: goto label_512f34;
        case 0x512f38u: goto label_512f38;
        case 0x512f3cu: goto label_512f3c;
        case 0x512f40u: goto label_512f40;
        case 0x512f44u: goto label_512f44;
        case 0x512f48u: goto label_512f48;
        case 0x512f4cu: goto label_512f4c;
        case 0x512f50u: goto label_512f50;
        case 0x512f54u: goto label_512f54;
        case 0x512f58u: goto label_512f58;
        case 0x512f5cu: goto label_512f5c;
        case 0x512f60u: goto label_512f60;
        case 0x512f64u: goto label_512f64;
        case 0x512f68u: goto label_512f68;
        case 0x512f6cu: goto label_512f6c;
        case 0x512f70u: goto label_512f70;
        case 0x512f74u: goto label_512f74;
        case 0x512f78u: goto label_512f78;
        case 0x512f7cu: goto label_512f7c;
        case 0x512f80u: goto label_512f80;
        case 0x512f84u: goto label_512f84;
        case 0x512f88u: goto label_512f88;
        case 0x512f8cu: goto label_512f8c;
        case 0x512f90u: goto label_512f90;
        case 0x512f94u: goto label_512f94;
        case 0x512f98u: goto label_512f98;
        case 0x512f9cu: goto label_512f9c;
        case 0x512fa0u: goto label_512fa0;
        case 0x512fa4u: goto label_512fa4;
        case 0x512fa8u: goto label_512fa8;
        case 0x512facu: goto label_512fac;
        case 0x512fb0u: goto label_512fb0;
        case 0x512fb4u: goto label_512fb4;
        case 0x512fb8u: goto label_512fb8;
        case 0x512fbcu: goto label_512fbc;
        case 0x512fc0u: goto label_512fc0;
        case 0x512fc4u: goto label_512fc4;
        case 0x512fc8u: goto label_512fc8;
        case 0x512fccu: goto label_512fcc;
        case 0x512fd0u: goto label_512fd0;
        case 0x512fd4u: goto label_512fd4;
        case 0x512fd8u: goto label_512fd8;
        case 0x512fdcu: goto label_512fdc;
        case 0x512fe0u: goto label_512fe0;
        case 0x512fe4u: goto label_512fe4;
        case 0x512fe8u: goto label_512fe8;
        case 0x512fecu: goto label_512fec;
        case 0x512ff0u: goto label_512ff0;
        case 0x512ff4u: goto label_512ff4;
        case 0x512ff8u: goto label_512ff8;
        case 0x512ffcu: goto label_512ffc;
        case 0x513000u: goto label_513000;
        case 0x513004u: goto label_513004;
        case 0x513008u: goto label_513008;
        case 0x51300cu: goto label_51300c;
        case 0x513010u: goto label_513010;
        case 0x513014u: goto label_513014;
        case 0x513018u: goto label_513018;
        case 0x51301cu: goto label_51301c;
        case 0x513020u: goto label_513020;
        case 0x513024u: goto label_513024;
        case 0x513028u: goto label_513028;
        case 0x51302cu: goto label_51302c;
        case 0x513030u: goto label_513030;
        case 0x513034u: goto label_513034;
        case 0x513038u: goto label_513038;
        case 0x51303cu: goto label_51303c;
        case 0x513040u: goto label_513040;
        case 0x513044u: goto label_513044;
        case 0x513048u: goto label_513048;
        case 0x51304cu: goto label_51304c;
        case 0x513050u: goto label_513050;
        case 0x513054u: goto label_513054;
        case 0x513058u: goto label_513058;
        case 0x51305cu: goto label_51305c;
        case 0x513060u: goto label_513060;
        case 0x513064u: goto label_513064;
        case 0x513068u: goto label_513068;
        case 0x51306cu: goto label_51306c;
        case 0x513070u: goto label_513070;
        case 0x513074u: goto label_513074;
        case 0x513078u: goto label_513078;
        case 0x51307cu: goto label_51307c;
        case 0x513080u: goto label_513080;
        case 0x513084u: goto label_513084;
        case 0x513088u: goto label_513088;
        case 0x51308cu: goto label_51308c;
        case 0x513090u: goto label_513090;
        case 0x513094u: goto label_513094;
        case 0x513098u: goto label_513098;
        case 0x51309cu: goto label_51309c;
        case 0x5130a0u: goto label_5130a0;
        case 0x5130a4u: goto label_5130a4;
        case 0x5130a8u: goto label_5130a8;
        case 0x5130acu: goto label_5130ac;
        case 0x5130b0u: goto label_5130b0;
        case 0x5130b4u: goto label_5130b4;
        case 0x5130b8u: goto label_5130b8;
        case 0x5130bcu: goto label_5130bc;
        case 0x5130c0u: goto label_5130c0;
        case 0x5130c4u: goto label_5130c4;
        case 0x5130c8u: goto label_5130c8;
        case 0x5130ccu: goto label_5130cc;
        case 0x5130d0u: goto label_5130d0;
        case 0x5130d4u: goto label_5130d4;
        case 0x5130d8u: goto label_5130d8;
        case 0x5130dcu: goto label_5130dc;
        case 0x5130e0u: goto label_5130e0;
        case 0x5130e4u: goto label_5130e4;
        case 0x5130e8u: goto label_5130e8;
        case 0x5130ecu: goto label_5130ec;
        case 0x5130f0u: goto label_5130f0;
        case 0x5130f4u: goto label_5130f4;
        case 0x5130f8u: goto label_5130f8;
        case 0x5130fcu: goto label_5130fc;
        case 0x513100u: goto label_513100;
        case 0x513104u: goto label_513104;
        case 0x513108u: goto label_513108;
        case 0x51310cu: goto label_51310c;
        case 0x513110u: goto label_513110;
        case 0x513114u: goto label_513114;
        case 0x513118u: goto label_513118;
        case 0x51311cu: goto label_51311c;
        case 0x513120u: goto label_513120;
        case 0x513124u: goto label_513124;
        case 0x513128u: goto label_513128;
        case 0x51312cu: goto label_51312c;
        case 0x513130u: goto label_513130;
        case 0x513134u: goto label_513134;
        case 0x513138u: goto label_513138;
        case 0x51313cu: goto label_51313c;
        case 0x513140u: goto label_513140;
        case 0x513144u: goto label_513144;
        case 0x513148u: goto label_513148;
        case 0x51314cu: goto label_51314c;
        case 0x513150u: goto label_513150;
        case 0x513154u: goto label_513154;
        case 0x513158u: goto label_513158;
        case 0x51315cu: goto label_51315c;
        case 0x513160u: goto label_513160;
        case 0x513164u: goto label_513164;
        case 0x513168u: goto label_513168;
        case 0x51316cu: goto label_51316c;
        case 0x513170u: goto label_513170;
        case 0x513174u: goto label_513174;
        case 0x513178u: goto label_513178;
        case 0x51317cu: goto label_51317c;
        case 0x513180u: goto label_513180;
        case 0x513184u: goto label_513184;
        case 0x513188u: goto label_513188;
        case 0x51318cu: goto label_51318c;
        case 0x513190u: goto label_513190;
        case 0x513194u: goto label_513194;
        case 0x513198u: goto label_513198;
        case 0x51319cu: goto label_51319c;
        case 0x5131a0u: goto label_5131a0;
        case 0x5131a4u: goto label_5131a4;
        case 0x5131a8u: goto label_5131a8;
        case 0x5131acu: goto label_5131ac;
        case 0x5131b0u: goto label_5131b0;
        case 0x5131b4u: goto label_5131b4;
        case 0x5131b8u: goto label_5131b8;
        case 0x5131bcu: goto label_5131bc;
        case 0x5131c0u: goto label_5131c0;
        case 0x5131c4u: goto label_5131c4;
        case 0x5131c8u: goto label_5131c8;
        case 0x5131ccu: goto label_5131cc;
        case 0x5131d0u: goto label_5131d0;
        case 0x5131d4u: goto label_5131d4;
        case 0x5131d8u: goto label_5131d8;
        case 0x5131dcu: goto label_5131dc;
        case 0x5131e0u: goto label_5131e0;
        case 0x5131e4u: goto label_5131e4;
        case 0x5131e8u: goto label_5131e8;
        case 0x5131ecu: goto label_5131ec;
        case 0x5131f0u: goto label_5131f0;
        case 0x5131f4u: goto label_5131f4;
        case 0x5131f8u: goto label_5131f8;
        case 0x5131fcu: goto label_5131fc;
        case 0x513200u: goto label_513200;
        case 0x513204u: goto label_513204;
        case 0x513208u: goto label_513208;
        case 0x51320cu: goto label_51320c;
        case 0x513210u: goto label_513210;
        case 0x513214u: goto label_513214;
        case 0x513218u: goto label_513218;
        case 0x51321cu: goto label_51321c;
        case 0x513220u: goto label_513220;
        case 0x513224u: goto label_513224;
        case 0x513228u: goto label_513228;
        case 0x51322cu: goto label_51322c;
        case 0x513230u: goto label_513230;
        case 0x513234u: goto label_513234;
        case 0x513238u: goto label_513238;
        case 0x51323cu: goto label_51323c;
        case 0x513240u: goto label_513240;
        case 0x513244u: goto label_513244;
        case 0x513248u: goto label_513248;
        case 0x51324cu: goto label_51324c;
        case 0x513250u: goto label_513250;
        case 0x513254u: goto label_513254;
        case 0x513258u: goto label_513258;
        case 0x51325cu: goto label_51325c;
        case 0x513260u: goto label_513260;
        case 0x513264u: goto label_513264;
        case 0x513268u: goto label_513268;
        case 0x51326cu: goto label_51326c;
        case 0x513270u: goto label_513270;
        case 0x513274u: goto label_513274;
        case 0x513278u: goto label_513278;
        case 0x51327cu: goto label_51327c;
        case 0x513280u: goto label_513280;
        case 0x513284u: goto label_513284;
        case 0x513288u: goto label_513288;
        case 0x51328cu: goto label_51328c;
        case 0x513290u: goto label_513290;
        case 0x513294u: goto label_513294;
        case 0x513298u: goto label_513298;
        case 0x51329cu: goto label_51329c;
        case 0x5132a0u: goto label_5132a0;
        case 0x5132a4u: goto label_5132a4;
        case 0x5132a8u: goto label_5132a8;
        case 0x5132acu: goto label_5132ac;
        case 0x5132b0u: goto label_5132b0;
        case 0x5132b4u: goto label_5132b4;
        case 0x5132b8u: goto label_5132b8;
        case 0x5132bcu: goto label_5132bc;
        case 0x5132c0u: goto label_5132c0;
        case 0x5132c4u: goto label_5132c4;
        case 0x5132c8u: goto label_5132c8;
        case 0x5132ccu: goto label_5132cc;
        case 0x5132d0u: goto label_5132d0;
        case 0x5132d4u: goto label_5132d4;
        case 0x5132d8u: goto label_5132d8;
        case 0x5132dcu: goto label_5132dc;
        case 0x5132e0u: goto label_5132e0;
        case 0x5132e4u: goto label_5132e4;
        case 0x5132e8u: goto label_5132e8;
        case 0x5132ecu: goto label_5132ec;
        case 0x5132f0u: goto label_5132f0;
        case 0x5132f4u: goto label_5132f4;
        case 0x5132f8u: goto label_5132f8;
        case 0x5132fcu: goto label_5132fc;
        case 0x513300u: goto label_513300;
        case 0x513304u: goto label_513304;
        case 0x513308u: goto label_513308;
        case 0x51330cu: goto label_51330c;
        case 0x513310u: goto label_513310;
        case 0x513314u: goto label_513314;
        case 0x513318u: goto label_513318;
        case 0x51331cu: goto label_51331c;
        case 0x513320u: goto label_513320;
        case 0x513324u: goto label_513324;
        case 0x513328u: goto label_513328;
        case 0x51332cu: goto label_51332c;
        case 0x513330u: goto label_513330;
        case 0x513334u: goto label_513334;
        case 0x513338u: goto label_513338;
        case 0x51333cu: goto label_51333c;
        case 0x513340u: goto label_513340;
        case 0x513344u: goto label_513344;
        case 0x513348u: goto label_513348;
        case 0x51334cu: goto label_51334c;
        case 0x513350u: goto label_513350;
        case 0x513354u: goto label_513354;
        case 0x513358u: goto label_513358;
        case 0x51335cu: goto label_51335c;
        case 0x513360u: goto label_513360;
        case 0x513364u: goto label_513364;
        case 0x513368u: goto label_513368;
        case 0x51336cu: goto label_51336c;
        case 0x513370u: goto label_513370;
        case 0x513374u: goto label_513374;
        case 0x513378u: goto label_513378;
        case 0x51337cu: goto label_51337c;
        case 0x513380u: goto label_513380;
        case 0x513384u: goto label_513384;
        case 0x513388u: goto label_513388;
        case 0x51338cu: goto label_51338c;
        case 0x513390u: goto label_513390;
        case 0x513394u: goto label_513394;
        case 0x513398u: goto label_513398;
        case 0x51339cu: goto label_51339c;
        case 0x5133a0u: goto label_5133a0;
        case 0x5133a4u: goto label_5133a4;
        case 0x5133a8u: goto label_5133a8;
        case 0x5133acu: goto label_5133ac;
        case 0x5133b0u: goto label_5133b0;
        case 0x5133b4u: goto label_5133b4;
        case 0x5133b8u: goto label_5133b8;
        case 0x5133bcu: goto label_5133bc;
        case 0x5133c0u: goto label_5133c0;
        case 0x5133c4u: goto label_5133c4;
        case 0x5133c8u: goto label_5133c8;
        case 0x5133ccu: goto label_5133cc;
        case 0x5133d0u: goto label_5133d0;
        case 0x5133d4u: goto label_5133d4;
        case 0x5133d8u: goto label_5133d8;
        case 0x5133dcu: goto label_5133dc;
        case 0x5133e0u: goto label_5133e0;
        case 0x5133e4u: goto label_5133e4;
        case 0x5133e8u: goto label_5133e8;
        case 0x5133ecu: goto label_5133ec;
        case 0x5133f0u: goto label_5133f0;
        case 0x5133f4u: goto label_5133f4;
        case 0x5133f8u: goto label_5133f8;
        case 0x5133fcu: goto label_5133fc;
        case 0x513400u: goto label_513400;
        case 0x513404u: goto label_513404;
        case 0x513408u: goto label_513408;
        case 0x51340cu: goto label_51340c;
        case 0x513410u: goto label_513410;
        case 0x513414u: goto label_513414;
        case 0x513418u: goto label_513418;
        case 0x51341cu: goto label_51341c;
        case 0x513420u: goto label_513420;
        case 0x513424u: goto label_513424;
        case 0x513428u: goto label_513428;
        case 0x51342cu: goto label_51342c;
        case 0x513430u: goto label_513430;
        case 0x513434u: goto label_513434;
        case 0x513438u: goto label_513438;
        case 0x51343cu: goto label_51343c;
        case 0x513440u: goto label_513440;
        case 0x513444u: goto label_513444;
        case 0x513448u: goto label_513448;
        case 0x51344cu: goto label_51344c;
        case 0x513450u: goto label_513450;
        case 0x513454u: goto label_513454;
        case 0x513458u: goto label_513458;
        case 0x51345cu: goto label_51345c;
        case 0x513460u: goto label_513460;
        case 0x513464u: goto label_513464;
        case 0x513468u: goto label_513468;
        case 0x51346cu: goto label_51346c;
        case 0x513470u: goto label_513470;
        case 0x513474u: goto label_513474;
        case 0x513478u: goto label_513478;
        case 0x51347cu: goto label_51347c;
        case 0x513480u: goto label_513480;
        case 0x513484u: goto label_513484;
        case 0x513488u: goto label_513488;
        case 0x51348cu: goto label_51348c;
        case 0x513490u: goto label_513490;
        case 0x513494u: goto label_513494;
        case 0x513498u: goto label_513498;
        case 0x51349cu: goto label_51349c;
        case 0x5134a0u: goto label_5134a0;
        case 0x5134a4u: goto label_5134a4;
        case 0x5134a8u: goto label_5134a8;
        case 0x5134acu: goto label_5134ac;
        case 0x5134b0u: goto label_5134b0;
        case 0x5134b4u: goto label_5134b4;
        case 0x5134b8u: goto label_5134b8;
        case 0x5134bcu: goto label_5134bc;
        case 0x5134c0u: goto label_5134c0;
        case 0x5134c4u: goto label_5134c4;
        case 0x5134c8u: goto label_5134c8;
        case 0x5134ccu: goto label_5134cc;
        case 0x5134d0u: goto label_5134d0;
        case 0x5134d4u: goto label_5134d4;
        case 0x5134d8u: goto label_5134d8;
        case 0x5134dcu: goto label_5134dc;
        case 0x5134e0u: goto label_5134e0;
        case 0x5134e4u: goto label_5134e4;
        case 0x5134e8u: goto label_5134e8;
        case 0x5134ecu: goto label_5134ec;
        case 0x5134f0u: goto label_5134f0;
        case 0x5134f4u: goto label_5134f4;
        case 0x5134f8u: goto label_5134f8;
        case 0x5134fcu: goto label_5134fc;
        case 0x513500u: goto label_513500;
        case 0x513504u: goto label_513504;
        case 0x513508u: goto label_513508;
        case 0x51350cu: goto label_51350c;
        case 0x513510u: goto label_513510;
        case 0x513514u: goto label_513514;
        case 0x513518u: goto label_513518;
        case 0x51351cu: goto label_51351c;
        case 0x513520u: goto label_513520;
        case 0x513524u: goto label_513524;
        case 0x513528u: goto label_513528;
        case 0x51352cu: goto label_51352c;
        case 0x513530u: goto label_513530;
        case 0x513534u: goto label_513534;
        case 0x513538u: goto label_513538;
        case 0x51353cu: goto label_51353c;
        case 0x513540u: goto label_513540;
        case 0x513544u: goto label_513544;
        case 0x513548u: goto label_513548;
        case 0x51354cu: goto label_51354c;
        case 0x513550u: goto label_513550;
        case 0x513554u: goto label_513554;
        case 0x513558u: goto label_513558;
        case 0x51355cu: goto label_51355c;
        case 0x513560u: goto label_513560;
        case 0x513564u: goto label_513564;
        case 0x513568u: goto label_513568;
        case 0x51356cu: goto label_51356c;
        case 0x513570u: goto label_513570;
        case 0x513574u: goto label_513574;
        case 0x513578u: goto label_513578;
        case 0x51357cu: goto label_51357c;
        case 0x513580u: goto label_513580;
        case 0x513584u: goto label_513584;
        case 0x513588u: goto label_513588;
        case 0x51358cu: goto label_51358c;
        case 0x513590u: goto label_513590;
        case 0x513594u: goto label_513594;
        case 0x513598u: goto label_513598;
        case 0x51359cu: goto label_51359c;
        case 0x5135a0u: goto label_5135a0;
        case 0x5135a4u: goto label_5135a4;
        case 0x5135a8u: goto label_5135a8;
        case 0x5135acu: goto label_5135ac;
        case 0x5135b0u: goto label_5135b0;
        case 0x5135b4u: goto label_5135b4;
        case 0x5135b8u: goto label_5135b8;
        case 0x5135bcu: goto label_5135bc;
        case 0x5135c0u: goto label_5135c0;
        case 0x5135c4u: goto label_5135c4;
        case 0x5135c8u: goto label_5135c8;
        case 0x5135ccu: goto label_5135cc;
        case 0x5135d0u: goto label_5135d0;
        case 0x5135d4u: goto label_5135d4;
        case 0x5135d8u: goto label_5135d8;
        case 0x5135dcu: goto label_5135dc;
        case 0x5135e0u: goto label_5135e0;
        case 0x5135e4u: goto label_5135e4;
        case 0x5135e8u: goto label_5135e8;
        case 0x5135ecu: goto label_5135ec;
        case 0x5135f0u: goto label_5135f0;
        case 0x5135f4u: goto label_5135f4;
        case 0x5135f8u: goto label_5135f8;
        case 0x5135fcu: goto label_5135fc;
        case 0x513600u: goto label_513600;
        case 0x513604u: goto label_513604;
        case 0x513608u: goto label_513608;
        case 0x51360cu: goto label_51360c;
        case 0x513610u: goto label_513610;
        case 0x513614u: goto label_513614;
        case 0x513618u: goto label_513618;
        case 0x51361cu: goto label_51361c;
        case 0x513620u: goto label_513620;
        case 0x513624u: goto label_513624;
        case 0x513628u: goto label_513628;
        case 0x51362cu: goto label_51362c;
        case 0x513630u: goto label_513630;
        case 0x513634u: goto label_513634;
        case 0x513638u: goto label_513638;
        case 0x51363cu: goto label_51363c;
        case 0x513640u: goto label_513640;
        case 0x513644u: goto label_513644;
        case 0x513648u: goto label_513648;
        case 0x51364cu: goto label_51364c;
        case 0x513650u: goto label_513650;
        case 0x513654u: goto label_513654;
        case 0x513658u: goto label_513658;
        case 0x51365cu: goto label_51365c;
        case 0x513660u: goto label_513660;
        case 0x513664u: goto label_513664;
        case 0x513668u: goto label_513668;
        case 0x51366cu: goto label_51366c;
        case 0x513670u: goto label_513670;
        case 0x513674u: goto label_513674;
        case 0x513678u: goto label_513678;
        case 0x51367cu: goto label_51367c;
        case 0x513680u: goto label_513680;
        case 0x513684u: goto label_513684;
        case 0x513688u: goto label_513688;
        case 0x51368cu: goto label_51368c;
        case 0x513690u: goto label_513690;
        case 0x513694u: goto label_513694;
        case 0x513698u: goto label_513698;
        case 0x51369cu: goto label_51369c;
        case 0x5136a0u: goto label_5136a0;
        case 0x5136a4u: goto label_5136a4;
        case 0x5136a8u: goto label_5136a8;
        case 0x5136acu: goto label_5136ac;
        case 0x5136b0u: goto label_5136b0;
        case 0x5136b4u: goto label_5136b4;
        case 0x5136b8u: goto label_5136b8;
        case 0x5136bcu: goto label_5136bc;
        case 0x5136c0u: goto label_5136c0;
        case 0x5136c4u: goto label_5136c4;
        case 0x5136c8u: goto label_5136c8;
        case 0x5136ccu: goto label_5136cc;
        case 0x5136d0u: goto label_5136d0;
        case 0x5136d4u: goto label_5136d4;
        case 0x5136d8u: goto label_5136d8;
        case 0x5136dcu: goto label_5136dc;
        case 0x5136e0u: goto label_5136e0;
        case 0x5136e4u: goto label_5136e4;
        case 0x5136e8u: goto label_5136e8;
        case 0x5136ecu: goto label_5136ec;
        case 0x5136f0u: goto label_5136f0;
        case 0x5136f4u: goto label_5136f4;
        case 0x5136f8u: goto label_5136f8;
        case 0x5136fcu: goto label_5136fc;
        case 0x513700u: goto label_513700;
        case 0x513704u: goto label_513704;
        case 0x513708u: goto label_513708;
        case 0x51370cu: goto label_51370c;
        case 0x513710u: goto label_513710;
        case 0x513714u: goto label_513714;
        case 0x513718u: goto label_513718;
        case 0x51371cu: goto label_51371c;
        case 0x513720u: goto label_513720;
        case 0x513724u: goto label_513724;
        case 0x513728u: goto label_513728;
        case 0x51372cu: goto label_51372c;
        case 0x513730u: goto label_513730;
        case 0x513734u: goto label_513734;
        case 0x513738u: goto label_513738;
        case 0x51373cu: goto label_51373c;
        case 0x513740u: goto label_513740;
        case 0x513744u: goto label_513744;
        case 0x513748u: goto label_513748;
        case 0x51374cu: goto label_51374c;
        case 0x513750u: goto label_513750;
        case 0x513754u: goto label_513754;
        case 0x513758u: goto label_513758;
        case 0x51375cu: goto label_51375c;
        case 0x513760u: goto label_513760;
        case 0x513764u: goto label_513764;
        case 0x513768u: goto label_513768;
        case 0x51376cu: goto label_51376c;
        case 0x513770u: goto label_513770;
        case 0x513774u: goto label_513774;
        case 0x513778u: goto label_513778;
        case 0x51377cu: goto label_51377c;
        case 0x513780u: goto label_513780;
        case 0x513784u: goto label_513784;
        case 0x513788u: goto label_513788;
        case 0x51378cu: goto label_51378c;
        case 0x513790u: goto label_513790;
        case 0x513794u: goto label_513794;
        case 0x513798u: goto label_513798;
        case 0x51379cu: goto label_51379c;
        case 0x5137a0u: goto label_5137a0;
        case 0x5137a4u: goto label_5137a4;
        case 0x5137a8u: goto label_5137a8;
        case 0x5137acu: goto label_5137ac;
        case 0x5137b0u: goto label_5137b0;
        case 0x5137b4u: goto label_5137b4;
        case 0x5137b8u: goto label_5137b8;
        case 0x5137bcu: goto label_5137bc;
        case 0x5137c0u: goto label_5137c0;
        case 0x5137c4u: goto label_5137c4;
        case 0x5137c8u: goto label_5137c8;
        case 0x5137ccu: goto label_5137cc;
        case 0x5137d0u: goto label_5137d0;
        case 0x5137d4u: goto label_5137d4;
        case 0x5137d8u: goto label_5137d8;
        case 0x5137dcu: goto label_5137dc;
        case 0x5137e0u: goto label_5137e0;
        case 0x5137e4u: goto label_5137e4;
        case 0x5137e8u: goto label_5137e8;
        case 0x5137ecu: goto label_5137ec;
        case 0x5137f0u: goto label_5137f0;
        case 0x5137f4u: goto label_5137f4;
        case 0x5137f8u: goto label_5137f8;
        case 0x5137fcu: goto label_5137fc;
        case 0x513800u: goto label_513800;
        case 0x513804u: goto label_513804;
        case 0x513808u: goto label_513808;
        case 0x51380cu: goto label_51380c;
        case 0x513810u: goto label_513810;
        case 0x513814u: goto label_513814;
        case 0x513818u: goto label_513818;
        case 0x51381cu: goto label_51381c;
        case 0x513820u: goto label_513820;
        case 0x513824u: goto label_513824;
        case 0x513828u: goto label_513828;
        case 0x51382cu: goto label_51382c;
        case 0x513830u: goto label_513830;
        case 0x513834u: goto label_513834;
        case 0x513838u: goto label_513838;
        case 0x51383cu: goto label_51383c;
        case 0x513840u: goto label_513840;
        case 0x513844u: goto label_513844;
        case 0x513848u: goto label_513848;
        case 0x51384cu: goto label_51384c;
        case 0x513850u: goto label_513850;
        case 0x513854u: goto label_513854;
        case 0x513858u: goto label_513858;
        case 0x51385cu: goto label_51385c;
        case 0x513860u: goto label_513860;
        case 0x513864u: goto label_513864;
        case 0x513868u: goto label_513868;
        case 0x51386cu: goto label_51386c;
        case 0x513870u: goto label_513870;
        case 0x513874u: goto label_513874;
        case 0x513878u: goto label_513878;
        case 0x51387cu: goto label_51387c;
        case 0x513880u: goto label_513880;
        case 0x513884u: goto label_513884;
        case 0x513888u: goto label_513888;
        case 0x51388cu: goto label_51388c;
        case 0x513890u: goto label_513890;
        case 0x513894u: goto label_513894;
        case 0x513898u: goto label_513898;
        case 0x51389cu: goto label_51389c;
        case 0x5138a0u: goto label_5138a0;
        case 0x5138a4u: goto label_5138a4;
        case 0x5138a8u: goto label_5138a8;
        case 0x5138acu: goto label_5138ac;
        case 0x5138b0u: goto label_5138b0;
        case 0x5138b4u: goto label_5138b4;
        case 0x5138b8u: goto label_5138b8;
        case 0x5138bcu: goto label_5138bc;
        case 0x5138c0u: goto label_5138c0;
        case 0x5138c4u: goto label_5138c4;
        case 0x5138c8u: goto label_5138c8;
        case 0x5138ccu: goto label_5138cc;
        case 0x5138d0u: goto label_5138d0;
        case 0x5138d4u: goto label_5138d4;
        case 0x5138d8u: goto label_5138d8;
        case 0x5138dcu: goto label_5138dc;
        case 0x5138e0u: goto label_5138e0;
        case 0x5138e4u: goto label_5138e4;
        case 0x5138e8u: goto label_5138e8;
        case 0x5138ecu: goto label_5138ec;
        case 0x5138f0u: goto label_5138f0;
        case 0x5138f4u: goto label_5138f4;
        case 0x5138f8u: goto label_5138f8;
        case 0x5138fcu: goto label_5138fc;
        case 0x513900u: goto label_513900;
        case 0x513904u: goto label_513904;
        case 0x513908u: goto label_513908;
        case 0x51390cu: goto label_51390c;
        case 0x513910u: goto label_513910;
        case 0x513914u: goto label_513914;
        case 0x513918u: goto label_513918;
        case 0x51391cu: goto label_51391c;
        default: break;
    }

    ctx->pc = 0x5123b0u;

label_5123b0:
    // 0x5123b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5123b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5123b4:
    // 0x5123b4: 0x3e00008  jr          $ra
label_5123b8:
    if (ctx->pc == 0x5123B8u) {
        ctx->pc = 0x5123B8u;
            // 0x5123b8: 0x8c420cc0  lw          $v0, 0xCC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
        ctx->pc = 0x5123BCu;
        goto label_5123bc;
    }
    ctx->pc = 0x5123B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5123B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5123B4u;
            // 0x5123b8: 0x8c420cc0  lw          $v0, 0xCC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5123BCu;
label_5123bc:
    // 0x5123bc: 0x0  nop
    ctx->pc = 0x5123bcu;
    // NOP
label_5123c0:
    // 0x5123c0: 0x2403620c  addiu       $v1, $zero, 0x620C
    ctx->pc = 0x5123c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25100));
label_5123c4:
    // 0x5123c4: 0x3e00008  jr          $ra
label_5123c8:
    if (ctx->pc == 0x5123C8u) {
        ctx->pc = 0x5123C8u;
            // 0x5123c8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x5123CCu;
        goto label_5123cc;
    }
    ctx->pc = 0x5123C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5123C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5123C4u;
            // 0x5123c8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5123CCu;
label_5123cc:
    // 0x5123cc: 0x0  nop
    ctx->pc = 0x5123ccu;
    // NOP
label_5123d0:
    // 0x5123d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5123d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5123d4:
    // 0x5123d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5123d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5123d8:
    // 0x5123d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5123d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5123dc:
    // 0x5123dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5123dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5123e0:
    // 0x5123e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5123e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5123e4:
    // 0x5123e4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_5123e8:
    if (ctx->pc == 0x5123E8u) {
        ctx->pc = 0x5123E8u;
            // 0x5123e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5123ECu;
        goto label_5123ec;
    }
    ctx->pc = 0x5123E4u;
    {
        const bool branch_taken_0x5123e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5123E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5123E4u;
            // 0x5123e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5123e4) {
            ctx->pc = 0x512440u;
            goto label_512440;
        }
    }
    ctx->pc = 0x5123ECu;
label_5123ec:
    // 0x5123ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5123ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5123f0:
    // 0x5123f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5123f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5123f4:
    // 0x5123f4: 0x24635460  addiu       $v1, $v1, 0x5460
    ctx->pc = 0x5123f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21600));
label_5123f8:
    // 0x5123f8: 0x24425498  addiu       $v0, $v0, 0x5498
    ctx->pc = 0x5123f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21656));
label_5123fc:
    // 0x5123fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5123fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_512400:
    // 0x512400: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_512404:
    if (ctx->pc == 0x512404u) {
        ctx->pc = 0x512404u;
            // 0x512404: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x512408u;
        goto label_512408;
    }
    ctx->pc = 0x512400u;
    {
        const bool branch_taken_0x512400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x512404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512400u;
            // 0x512404: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512400) {
            ctx->pc = 0x512428u;
            goto label_512428;
        }
    }
    ctx->pc = 0x512408u;
label_512408:
    // 0x512408: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x512408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_51240c:
    // 0x51240c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51240cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_512410:
    // 0x512410: 0x24632190  addiu       $v1, $v1, 0x2190
    ctx->pc = 0x512410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8592));
label_512414:
    // 0x512414: 0x244221c8  addiu       $v0, $v0, 0x21C8
    ctx->pc = 0x512414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8648));
label_512418:
    // 0x512418: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x512418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_51241c:
    // 0x51241c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51241cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_512420:
    // 0x512420: 0xc0aefbc  jal         func_2BBEF0
label_512424:
    if (ctx->pc == 0x512424u) {
        ctx->pc = 0x512424u;
            // 0x512424: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x512428u;
        goto label_512428;
    }
    ctx->pc = 0x512420u;
    SET_GPR_U32(ctx, 31, 0x512428u);
    ctx->pc = 0x512424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512420u;
            // 0x512424: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBEF0u;
    if (runtime->hasFunction(0x2BBEF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512428u; }
        if (ctx->pc != 0x512428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBEF0_0x2bbef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512428u; }
        if (ctx->pc != 0x512428u) { return; }
    }
    ctx->pc = 0x512428u;
label_512428:
    // 0x512428: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x512428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_51242c:
    // 0x51242c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51242cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_512430:
    // 0x512430: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_512434:
    if (ctx->pc == 0x512434u) {
        ctx->pc = 0x512434u;
            // 0x512434: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512438u;
        goto label_512438;
    }
    ctx->pc = 0x512430u;
    {
        const bool branch_taken_0x512430 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x512430) {
            ctx->pc = 0x512434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512430u;
            // 0x512434: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x512444u;
            goto label_512444;
        }
    }
    ctx->pc = 0x512438u;
label_512438:
    // 0x512438: 0xc0400a8  jal         func_1002A0
label_51243c:
    if (ctx->pc == 0x51243Cu) {
        ctx->pc = 0x51243Cu;
            // 0x51243c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512440u;
        goto label_512440;
    }
    ctx->pc = 0x512438u;
    SET_GPR_U32(ctx, 31, 0x512440u);
    ctx->pc = 0x51243Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512438u;
            // 0x51243c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512440u; }
        if (ctx->pc != 0x512440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512440u; }
        if (ctx->pc != 0x512440u) { return; }
    }
    ctx->pc = 0x512440u;
label_512440:
    // 0x512440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x512440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_512444:
    // 0x512444: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x512444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_512448:
    // 0x512448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x512448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51244c:
    // 0x51244c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51244cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_512450:
    // 0x512450: 0x3e00008  jr          $ra
label_512454:
    if (ctx->pc == 0x512454u) {
        ctx->pc = 0x512454u;
            // 0x512454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x512458u;
        goto label_512458;
    }
    ctx->pc = 0x512450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512450u;
            // 0x512454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512458u;
label_512458:
    // 0x512458: 0x0  nop
    ctx->pc = 0x512458u;
    // NOP
label_51245c:
    // 0x51245c: 0x0  nop
    ctx->pc = 0x51245cu;
    // NOP
label_512460:
    // 0x512460: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x512460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_512464:
    // 0x512464: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_512468:
    if (ctx->pc == 0x512468u) {
        ctx->pc = 0x51246Cu;
        goto label_51246c;
    }
    ctx->pc = 0x512464u;
    {
        const bool branch_taken_0x512464 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x512464) {
            ctx->pc = 0x512498u;
            goto label_512498;
        }
    }
    ctx->pc = 0x51246Cu;
label_51246c:
    // 0x51246c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x51246cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_512470:
    // 0x512470: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x512470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_512474:
    // 0x512474: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x512474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_512478:
    // 0x512478: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x512478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_51247c:
    // 0x51247c: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x51247cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_512480:
    // 0x512480: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x512480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_512484:
    // 0x512484: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x512484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_512488:
    // 0x512488: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x512488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_51248c:
    // 0x51248c: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x51248cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
label_512490:
    // 0x512490: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_512494:
    if (ctx->pc == 0x512494u) {
        ctx->pc = 0x512494u;
            // 0x512494: 0xaca00064  sw          $zero, 0x64($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x512498u;
        goto label_512498;
    }
    ctx->pc = 0x512490u;
    {
        const bool branch_taken_0x512490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x512494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512490u;
            // 0x512494: 0xaca00064  sw          $zero, 0x64($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512490) {
            ctx->pc = 0x512474u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_512474;
        }
    }
    ctx->pc = 0x512498u;
label_512498:
    // 0x512498: 0x3e00008  jr          $ra
label_51249c:
    if (ctx->pc == 0x51249Cu) {
        ctx->pc = 0x5124A0u;
        goto label_5124a0;
    }
    ctx->pc = 0x512498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5124A0u;
label_5124a0:
    // 0x5124a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5124a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_5124a4:
    // 0x5124a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5124a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5124a8:
    // 0x5124a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5124a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_5124ac:
    // 0x5124ac: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x5124acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5124b0:
    // 0x5124b0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x5124b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_5124b4:
    // 0x5124b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5124b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5124b8:
    // 0x5124b8: 0x50a3000f  beql        $a1, $v1, . + 4 + (0xF << 2)
label_5124bc:
    if (ctx->pc == 0x5124BCu) {
        ctx->pc = 0x5124BCu;
            // 0x5124bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x5124C0u;
        goto label_5124c0;
    }
    ctx->pc = 0x5124B8u;
    {
        const bool branch_taken_0x5124b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5124b8) {
            ctx->pc = 0x5124BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5124B8u;
            // 0x5124bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5124F8u;
            goto label_5124f8;
        }
    }
    ctx->pc = 0x5124C0u;
label_5124c0:
    // 0x5124c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5124c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5124c4:
    // 0x5124c4: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_5124c8:
    if (ctx->pc == 0x5124C8u) {
        ctx->pc = 0x5124CCu;
        goto label_5124cc;
    }
    ctx->pc = 0x5124C4u;
    {
        const bool branch_taken_0x5124c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5124c4) {
            ctx->pc = 0x5124F4u;
            goto label_5124f4;
        }
    }
    ctx->pc = 0x5124CCu;
label_5124cc:
    // 0x5124cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5124ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5124d0:
    // 0x5124d0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_5124d4:
    if (ctx->pc == 0x5124D4u) {
        ctx->pc = 0x5124D4u;
            // 0x5124d4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x5124D8u;
        goto label_5124d8;
    }
    ctx->pc = 0x5124D0u;
    {
        const bool branch_taken_0x5124d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5124d0) {
            ctx->pc = 0x5124D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5124D0u;
            // 0x5124d4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5124E0u;
            goto label_5124e0;
        }
    }
    ctx->pc = 0x5124D8u;
label_5124d8:
    // 0x5124d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_5124dc:
    if (ctx->pc == 0x5124DCu) {
        ctx->pc = 0x5124E0u;
        goto label_5124e0;
    }
    ctx->pc = 0x5124D8u;
    {
        const bool branch_taken_0x5124d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5124d8) {
            ctx->pc = 0x5124F4u;
            goto label_5124f4;
        }
    }
    ctx->pc = 0x5124E0u;
label_5124e0:
    // 0x5124e0: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x5124e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_5124e4:
    // 0x5124e4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x5124e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_5124e8:
    // 0x5124e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x5124e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_5124ec:
    // 0x5124ec: 0x320f809  jalr        $t9
label_5124f0:
    if (ctx->pc == 0x5124F0u) {
        ctx->pc = 0x5124F0u;
            // 0x5124f0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x5124F4u;
        goto label_5124f4;
    }
    ctx->pc = 0x5124ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5124F4u);
        ctx->pc = 0x5124F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5124ECu;
            // 0x5124f0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5124F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5124F4u; }
            if (ctx->pc != 0x5124F4u) { return; }
        }
        }
    }
    ctx->pc = 0x5124F4u;
label_5124f4:
    // 0x5124f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x5124f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_5124f8:
    // 0x5124f8: 0x3e00008  jr          $ra
label_5124fc:
    if (ctx->pc == 0x5124FCu) {
        ctx->pc = 0x5124FCu;
            // 0x5124fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x512500u;
        goto label_512500;
    }
    ctx->pc = 0x5124F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5124FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5124F8u;
            // 0x5124fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512500u;
label_512500:
    // 0x512500: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x512500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_512504:
    // 0x512504: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x512504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_512508:
    // 0x512508: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x512508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_51250c:
    // 0x51250c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x51250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_512510:
    // 0x512510: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x512510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_512514:
    // 0x512514: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x512514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_512518:
    // 0x512518: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x512518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_51251c:
    // 0x51251c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51251cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_512520:
    // 0x512520: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x512520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_512524:
    // 0x512524: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x512524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_512528:
    // 0x512528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x512528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51252c:
    // 0x51252c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x51252cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_512530:
    // 0x512530: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_512534:
    if (ctx->pc == 0x512534u) {
        ctx->pc = 0x512534u;
            // 0x512534: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512538u;
        goto label_512538;
    }
    ctx->pc = 0x512530u;
    {
        const bool branch_taken_0x512530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x512534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512530u;
            // 0x512534: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512530) {
            ctx->pc = 0x512594u;
            goto label_512594;
        }
    }
    ctx->pc = 0x512538u;
label_512538:
    // 0x512538: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x512538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_51253c:
    // 0x51253c: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
label_512540:
    if (ctx->pc == 0x512540u) {
        ctx->pc = 0x512540u;
            // 0x512540: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x512544u;
        goto label_512544;
    }
    ctx->pc = 0x51253Cu;
    {
        const bool branch_taken_0x51253c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x51253c) {
            ctx->pc = 0x512540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51253Cu;
            // 0x512540: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x512588u;
            goto label_512588;
        }
    }
    ctx->pc = 0x512544u;
label_512544:
    // 0x512544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x512544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_512548:
    // 0x512548: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_51254c:
    if (ctx->pc == 0x51254Cu) {
        ctx->pc = 0x512550u;
        goto label_512550;
    }
    ctx->pc = 0x512548u;
    {
        const bool branch_taken_0x512548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x512548) {
            ctx->pc = 0x512558u;
            goto label_512558;
        }
    }
    ctx->pc = 0x512550u;
label_512550:
    // 0x512550: 0x10000053  b           . + 4 + (0x53 << 2)
label_512554:
    if (ctx->pc == 0x512554u) {
        ctx->pc = 0x512558u;
        goto label_512558;
    }
    ctx->pc = 0x512550u;
    {
        const bool branch_taken_0x512550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x512550) {
            ctx->pc = 0x5126A0u;
            goto label_5126a0;
        }
    }
    ctx->pc = 0x512558u;
label_512558:
    // 0x512558: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x512558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_51255c:
    // 0x51255c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x51255cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_512560:
    // 0x512560: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x512560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_512564:
    // 0x512564: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x512564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_512568:
    // 0x512568: 0x1065004d  beq         $v1, $a1, . + 4 + (0x4D << 2)
label_51256c:
    if (ctx->pc == 0x51256Cu) {
        ctx->pc = 0x512570u;
        goto label_512570;
    }
    ctx->pc = 0x512568u;
    {
        const bool branch_taken_0x512568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x512568) {
            ctx->pc = 0x5126A0u;
            goto label_5126a0;
        }
    }
    ctx->pc = 0x512570u;
label_512570:
    // 0x512570: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x512570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_512574:
    // 0x512574: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x512574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_512578:
    // 0x512578: 0x320f809  jalr        $t9
label_51257c:
    if (ctx->pc == 0x51257Cu) {
        ctx->pc = 0x512580u;
        goto label_512580;
    }
    ctx->pc = 0x512578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x512580u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x512580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x512580u; }
            if (ctx->pc != 0x512580u) { return; }
        }
        }
    }
    ctx->pc = 0x512580u;
label_512580:
    // 0x512580: 0x10000047  b           . + 4 + (0x47 << 2)
label_512584:
    if (ctx->pc == 0x512584u) {
        ctx->pc = 0x512588u;
        goto label_512588;
    }
    ctx->pc = 0x512580u;
    {
        const bool branch_taken_0x512580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x512580) {
            ctx->pc = 0x5126A0u;
            goto label_5126a0;
        }
    }
    ctx->pc = 0x512588u;
label_512588:
    // 0x512588: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x512588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_51258c:
    // 0x51258c: 0x320f809  jalr        $t9
label_512590:
    if (ctx->pc == 0x512590u) {
        ctx->pc = 0x512594u;
        goto label_512594;
    }
    ctx->pc = 0x51258Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x512594u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x512594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x512594u; }
            if (ctx->pc != 0x512594u) { return; }
        }
        }
    }
    ctx->pc = 0x512594u;
label_512594:
    // 0x512594: 0x8ef60070  lw          $s6, 0x70($s7)
    ctx->pc = 0x512594u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 112)));
label_512598:
    // 0x512598: 0x12c00041  beqz        $s6, . + 4 + (0x41 << 2)
label_51259c:
    if (ctx->pc == 0x51259Cu) {
        ctx->pc = 0x5125A0u;
        goto label_5125a0;
    }
    ctx->pc = 0x512598u;
    {
        const bool branch_taken_0x512598 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x512598) {
            ctx->pc = 0x5126A0u;
            goto label_5126a0;
        }
    }
    ctx->pc = 0x5125A0u;
label_5125a0:
    // 0x5125a0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x5125a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5125a4:
    // 0x5125a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5125a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5125a8:
    // 0x5125a8: 0x8ee30074  lw          $v1, 0x74($s7)
    ctx->pc = 0x5125a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 116)));
label_5125ac:
    // 0x5125ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5125acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5125b0:
    // 0x5125b0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x5125b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_5125b4:
    // 0x5125b4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x5125b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5125b8:
    // 0x5125b8: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x5125b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_5125bc:
    // 0x5125bc: 0x1064000e  beq         $v1, $a0, . + 4 + (0xE << 2)
label_5125c0:
    if (ctx->pc == 0x5125C0u) {
        ctx->pc = 0x5125C4u;
        goto label_5125c4;
    }
    ctx->pc = 0x5125BCu;
    {
        const bool branch_taken_0x5125bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x5125bc) {
            ctx->pc = 0x5125F8u;
            goto label_5125f8;
        }
    }
    ctx->pc = 0x5125C4u;
label_5125c4:
    // 0x5125c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_5125c8:
    if (ctx->pc == 0x5125C8u) {
        ctx->pc = 0x5125CCu;
        goto label_5125cc;
    }
    ctx->pc = 0x5125C4u;
    {
        const bool branch_taken_0x5125c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5125c4) {
            ctx->pc = 0x5125D8u;
            goto label_5125d8;
        }
    }
    ctx->pc = 0x5125CCu;
label_5125cc:
    // 0x5125cc: 0x10000030  b           . + 4 + (0x30 << 2)
label_5125d0:
    if (ctx->pc == 0x5125D0u) {
        ctx->pc = 0x5125D4u;
        goto label_5125d4;
    }
    ctx->pc = 0x5125CCu;
    {
        const bool branch_taken_0x5125cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5125cc) {
            ctx->pc = 0x512690u;
            goto label_512690;
        }
    }
    ctx->pc = 0x5125D4u;
label_5125d4:
    // 0x5125d4: 0x0  nop
    ctx->pc = 0x5125d4u;
    // NOP
label_5125d8:
    // 0x5125d8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5125d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5125dc:
    // 0x5125dc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x5125dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5125e0:
    // 0x5125e0: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x5125e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_5125e4:
    // 0x5125e4: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x5125e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_5125e8:
    // 0x5125e8: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
label_5125ec:
    if (ctx->pc == 0x5125ECu) {
        ctx->pc = 0x5125F0u;
        goto label_5125f0;
    }
    ctx->pc = 0x5125E8u;
    {
        const bool branch_taken_0x5125e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x5125e8) {
            ctx->pc = 0x512690u;
            goto label_512690;
        }
    }
    ctx->pc = 0x5125F0u;
label_5125f0:
    // 0x5125f0: 0x10000027  b           . + 4 + (0x27 << 2)
label_5125f4:
    if (ctx->pc == 0x5125F4u) {
        ctx->pc = 0x5125F4u;
            // 0x5125f4: 0xae240060  sw          $a0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
        ctx->pc = 0x5125F8u;
        goto label_5125f8;
    }
    ctx->pc = 0x5125F0u;
    {
        const bool branch_taken_0x5125f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5125F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5125F0u;
            // 0x5125f4: 0xae240060  sw          $a0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5125f0) {
            ctx->pc = 0x512690u;
            goto label_512690;
        }
    }
    ctx->pc = 0x5125F8u;
label_5125f8:
    // 0x5125f8: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x5125f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_5125fc:
    // 0x5125fc: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_512600:
    if (ctx->pc == 0x512600u) {
        ctx->pc = 0x512604u;
        goto label_512604;
    }
    ctx->pc = 0x5125FCu;
    {
        const bool branch_taken_0x5125fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5125fc) {
            ctx->pc = 0x512690u;
            goto label_512690;
        }
    }
    ctx->pc = 0x512604u;
label_512604:
    // 0x512604: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x512604u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_512608:
    // 0x512608: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x512608u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51260c:
    // 0x51260c: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x51260cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
label_512610:
    // 0x512610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x512610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_512614:
    // 0x512614: 0x2828004  sllv        $s0, $v0, $s4
    ctx->pc = 0x512614u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
label_512618:
    // 0x512618: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x512618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_51261c:
    // 0x51261c: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x51261cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_512620:
    // 0x512620: 0xc0dec44  jal         func_37B110
label_512624:
    if (ctx->pc == 0x512624u) {
        ctx->pc = 0x512624u;
            // 0x512624: 0xafb0009c  sw          $s0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 16));
        ctx->pc = 0x512628u;
        goto label_512628;
    }
    ctx->pc = 0x512620u;
    SET_GPR_U32(ctx, 31, 0x512628u);
    ctx->pc = 0x512624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512620u;
            // 0x512624: 0xafb0009c  sw          $s0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B110u;
    if (runtime->hasFunction(0x37B110u)) {
        auto targetFn = runtime->lookupFunction(0x37B110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512628u; }
        if (ctx->pc != 0x512628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B110_0x37b110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512628u; }
        if (ctx->pc != 0x512628u) { return; }
    }
    ctx->pc = 0x512628u;
label_512628:
    // 0x512628: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_51262c:
    if (ctx->pc == 0x51262Cu) {
        ctx->pc = 0x512630u;
        goto label_512630;
    }
    ctx->pc = 0x512628u;
    {
        const bool branch_taken_0x512628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x512628) {
            ctx->pc = 0x512680u;
            goto label_512680;
        }
    }
    ctx->pc = 0x512630u;
label_512630:
    // 0x512630: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x512630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_512634:
    // 0x512634: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x512634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_512638:
    // 0x512638: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x512638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_51263c:
    // 0x51263c: 0x8ca40af0  lw          $a0, 0xAF0($a1)
    ctx->pc = 0x51263cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2800)));
label_512640:
    // 0x512640: 0x2484038e  addiu       $a0, $a0, 0x38E
    ctx->pc = 0x512640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 910));
label_512644:
    // 0x512644: 0xaca40af0  sw          $a0, 0xAF0($a1)
    ctx->pc = 0x512644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2800), GPR_U32(ctx, 4));
label_512648:
    // 0x512648: 0x8ca40af8  lw          $a0, 0xAF8($a1)
    ctx->pc = 0x512648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2808)));
label_51264c:
    // 0x51264c: 0x2484016c  addiu       $a0, $a0, 0x16C
    ctx->pc = 0x51264cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 364));
label_512650:
    // 0x512650: 0xaca40af8  sw          $a0, 0xAF8($a1)
    ctx->pc = 0x512650u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2808), GPR_U32(ctx, 4));
label_512654:
    // 0x512654: 0xaca30b14  sw          $v1, 0xB14($a1)
    ctx->pc = 0x512654u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2836), GPR_U32(ctx, 3));
label_512658:
    // 0x512658: 0x8ca30da0  lw          $v1, 0xDA0($a1)
    ctx->pc = 0x512658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
label_51265c:
    // 0x51265c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x51265cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_512660:
    // 0x512660: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_512664:
    if (ctx->pc == 0x512664u) {
        ctx->pc = 0x512668u;
        goto label_512668;
    }
    ctx->pc = 0x512660u;
    {
        const bool branch_taken_0x512660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x512660) {
            ctx->pc = 0x512680u;
            goto label_512680;
        }
    }
    ctx->pc = 0x512668u;
label_512668:
    // 0x512668: 0xc0bbec8  jal         func_2EFB20
label_51266c:
    if (ctx->pc == 0x51266Cu) {
        ctx->pc = 0x51266Cu;
            // 0x51266c: 0x24a40ab0  addiu       $a0, $a1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2736));
        ctx->pc = 0x512670u;
        goto label_512670;
    }
    ctx->pc = 0x512668u;
    SET_GPR_U32(ctx, 31, 0x512670u);
    ctx->pc = 0x51266Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512668u;
            // 0x51266c: 0x24a40ab0  addiu       $a0, $a1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EFB20u;
    if (runtime->hasFunction(0x2EFB20u)) {
        auto targetFn = runtime->lookupFunction(0x2EFB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512670u; }
        if (ctx->pc != 0x512670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EFB20_0x2efb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512670u; }
        if (ctx->pc != 0x512670u) { return; }
    }
    ctx->pc = 0x512670u;
label_512670:
    // 0x512670: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x512670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_512674:
    // 0x512674: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x512674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_512678:
    // 0x512678: 0xc0e054c  jal         func_381530
label_51267c:
    if (ctx->pc == 0x51267Cu) {
        ctx->pc = 0x51267Cu;
            // 0x51267c: 0xafb00098  sw          $s0, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 16));
        ctx->pc = 0x512680u;
        goto label_512680;
    }
    ctx->pc = 0x512678u;
    SET_GPR_U32(ctx, 31, 0x512680u);
    ctx->pc = 0x51267Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512678u;
            // 0x51267c: 0xafb00098  sw          $s0, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381530u;
    if (runtime->hasFunction(0x381530u)) {
        auto targetFn = runtime->lookupFunction(0x381530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512680u; }
        if (ctx->pc != 0x512680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381530_0x381530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512680u; }
        if (ctx->pc != 0x512680u) { return; }
    }
    ctx->pc = 0x512680u;
label_512680:
    // 0x512680: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x512680u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_512684:
    // 0x512684: 0x2e830008  sltiu       $v1, $s4, 0x8
    ctx->pc = 0x512684u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_512688:
    // 0x512688: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_51268c:
    if (ctx->pc == 0x51268Cu) {
        ctx->pc = 0x51268Cu;
            // 0x51268c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x512690u;
        goto label_512690;
    }
    ctx->pc = 0x512688u;
    {
        const bool branch_taken_0x512688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x51268Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512688u;
            // 0x51268c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512688) {
            ctx->pc = 0x512610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_512610;
        }
    }
    ctx->pc = 0x512690u;
label_512690:
    // 0x512690: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x512690u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_512694:
    // 0x512694: 0x2b6182b  sltu        $v1, $s5, $s6
    ctx->pc = 0x512694u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_512698:
    // 0x512698: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
label_51269c:
    if (ctx->pc == 0x51269Cu) {
        ctx->pc = 0x51269Cu;
            // 0x51269c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x5126A0u;
        goto label_5126a0;
    }
    ctx->pc = 0x512698u;
    {
        const bool branch_taken_0x512698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x51269Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512698u;
            // 0x51269c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512698) {
            ctx->pc = 0x5125A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5125a8;
        }
    }
    ctx->pc = 0x5126A0u;
label_5126a0:
    // 0x5126a0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x5126a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_5126a4:
    // 0x5126a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x5126a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_5126a8:
    // 0x5126a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x5126a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_5126ac:
    // 0x5126ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x5126acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5126b0:
    // 0x5126b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5126b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5126b4:
    // 0x5126b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5126b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5126b8:
    // 0x5126b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5126b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5126bc:
    // 0x5126bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5126bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5126c0:
    // 0x5126c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5126c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5126c4:
    // 0x5126c4: 0x3e00008  jr          $ra
label_5126c8:
    if (ctx->pc == 0x5126C8u) {
        ctx->pc = 0x5126C8u;
            // 0x5126c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x5126CCu;
        goto label_5126cc;
    }
    ctx->pc = 0x5126C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5126C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5126C4u;
            // 0x5126c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5126CCu;
label_5126cc:
    // 0x5126cc: 0x0  nop
    ctx->pc = 0x5126ccu;
    // NOP
label_5126d0:
    // 0x5126d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x5126d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_5126d4:
    // 0x5126d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x5126d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_5126d8:
    // 0x5126d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5126d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5126dc:
    // 0x5126dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5126dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5126e0:
    // 0x5126e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x5126e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5126e4:
    // 0x5126e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5126e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5126e8:
    // 0x5126e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x5126e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_5126ec:
    // 0x5126ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5126ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5126f0:
    // 0x5126f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5126f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5126f4:
    // 0x5126f4: 0x8cc30d78  lw          $v1, 0xD78($a2)
    ctx->pc = 0x5126f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3448)));
label_5126f8:
    // 0x5126f8: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x5126f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_5126fc:
    // 0x5126fc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_512700:
    if (ctx->pc == 0x512700u) {
        ctx->pc = 0x512700u;
            // 0x512700: 0x30640001  andi        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x512704u;
        goto label_512704;
    }
    ctx->pc = 0x5126FCu;
    {
        const bool branch_taken_0x5126fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x512700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5126FCu;
            // 0x512700: 0x30640001  andi        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5126fc) {
            ctx->pc = 0x512710u;
            goto label_512710;
        }
    }
    ctx->pc = 0x512704u;
label_512704:
    // 0x512704: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_512708:
    if (ctx->pc == 0x512708u) {
        ctx->pc = 0x512708u;
            // 0x512708: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->pc = 0x51270Cu;
        goto label_51270c;
    }
    ctx->pc = 0x512704u;
    {
        const bool branch_taken_0x512704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x512704) {
            ctx->pc = 0x512708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512704u;
            // 0x512708: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x512714u;
            goto label_512714;
        }
    }
    ctx->pc = 0x51270Cu;
label_51270c:
    // 0x51270c: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x51270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_512710:
    // 0x512710: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x512710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_512714:
    // 0x512714: 0x548300a2  bnel        $a0, $v1, . + 4 + (0xA2 << 2)
label_512718:
    if (ctx->pc == 0x512718u) {
        ctx->pc = 0x512718u;
            // 0x512718: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x51271Cu;
        goto label_51271c;
    }
    ctx->pc = 0x512714u;
    {
        const bool branch_taken_0x512714 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x512714) {
            ctx->pc = 0x512718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512714u;
            // 0x512718: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5129A0u;
            goto label_5129a0;
        }
    }
    ctx->pc = 0x51271Cu;
label_51271c:
    // 0x51271c: 0x8e630d70  lw          $v1, 0xD70($s3)
    ctx->pc = 0x51271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
label_512720:
    // 0x512720: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x512720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_512724:
    // 0x512724: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_512728:
    if (ctx->pc == 0x512728u) {
        ctx->pc = 0x51272Cu;
        goto label_51272c;
    }
    ctx->pc = 0x512724u;
    {
        const bool branch_taken_0x512724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x512724) {
            ctx->pc = 0x512734u;
            goto label_512734;
        }
    }
    ctx->pc = 0x51272Cu;
label_51272c:
    // 0x51272c: 0x1000009b  b           . + 4 + (0x9B << 2)
label_512730:
    if (ctx->pc == 0x512730u) {
        ctx->pc = 0x512734u;
        goto label_512734;
    }
    ctx->pc = 0x51272Cu;
    {
        const bool branch_taken_0x51272c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51272c) {
            ctx->pc = 0x51299Cu;
            goto label_51299c;
        }
    }
    ctx->pc = 0x512734u;
label_512734:
    // 0x512734: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x512734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_512738:
    // 0x512738: 0x8c633da0  lw          $v1, 0x3DA0($v1)
    ctx->pc = 0x512738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15776)));
label_51273c:
    // 0x51273c: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_512740:
    if (ctx->pc == 0x512740u) {
        ctx->pc = 0x512740u;
            // 0x512740: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x512744u;
        goto label_512744;
    }
    ctx->pc = 0x51273Cu;
    {
        const bool branch_taken_0x51273c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51273c) {
            ctx->pc = 0x512740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51273Cu;
            // 0x512740: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51277Cu;
            goto label_51277c;
        }
    }
    ctx->pc = 0x512744u;
label_512744:
    // 0x512744: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x512744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_512748:
    // 0x512748: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x512748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_51274c:
    // 0x51274c: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x51274cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_512750:
    // 0x512750: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x512750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_512754:
    // 0x512754: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_512758:
    if (ctx->pc == 0x512758u) {
        ctx->pc = 0x51275Cu;
        goto label_51275c;
    }
    ctx->pc = 0x512754u;
    {
        const bool branch_taken_0x512754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x512754) {
            ctx->pc = 0x512778u;
            goto label_512778;
        }
    }
    ctx->pc = 0x51275Cu;
label_51275c:
    // 0x51275c: 0x2c810008  sltiu       $at, $a0, 0x8
    ctx->pc = 0x51275cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_512760:
    // 0x512760: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_512764:
    if (ctx->pc == 0x512764u) {
        ctx->pc = 0x512768u;
        goto label_512768;
    }
    ctx->pc = 0x512760u;
    {
        const bool branch_taken_0x512760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x512760) {
            ctx->pc = 0x512778u;
            goto label_512778;
        }
    }
    ctx->pc = 0x512768u;
label_512768:
    // 0x512768: 0x8e640db0  lw          $a0, 0xDB0($s3)
    ctx->pc = 0x512768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3504)));
label_51276c:
    // 0x51276c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x51276cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_512770:
    // 0x512770: 0x1083008a  beq         $a0, $v1, . + 4 + (0x8A << 2)
label_512774:
    if (ctx->pc == 0x512774u) {
        ctx->pc = 0x512778u;
        goto label_512778;
    }
    ctx->pc = 0x512770u;
    {
        const bool branch_taken_0x512770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x512770) {
            ctx->pc = 0x51299Cu;
            goto label_51299c;
        }
    }
    ctx->pc = 0x512778u;
label_512778:
    // 0x512778: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x512778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_51277c:
    // 0x51277c: 0xc04f278  jal         func_13C9E0
label_512780:
    if (ctx->pc == 0x512780u) {
        ctx->pc = 0x512780u;
            // 0x512780: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x512784u;
        goto label_512784;
    }
    ctx->pc = 0x51277Cu;
    SET_GPR_U32(ctx, 31, 0x512784u);
    ctx->pc = 0x512780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51277Cu;
            // 0x512780: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512784u; }
        if (ctx->pc != 0x512784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512784u; }
        if (ctx->pc != 0x512784u) { return; }
    }
    ctx->pc = 0x512784u;
label_512784:
    // 0x512784: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x512784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_512788:
    // 0x512788: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x512788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_51278c:
    // 0x51278c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x51278cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_512790:
    // 0x512790: 0xc04cca0  jal         func_133280
label_512794:
    if (ctx->pc == 0x512794u) {
        ctx->pc = 0x512794u;
            // 0x512794: 0x24c6bd80  addiu       $a2, $a2, -0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950272));
        ctx->pc = 0x512798u;
        goto label_512798;
    }
    ctx->pc = 0x512790u;
    SET_GPR_U32(ctx, 31, 0x512798u);
    ctx->pc = 0x512794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512790u;
            // 0x512794: 0x24c6bd80  addiu       $a2, $a2, -0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512798u; }
        if (ctx->pc != 0x512798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512798u; }
        if (ctx->pc != 0x512798u) { return; }
    }
    ctx->pc = 0x512798u;
label_512798:
    // 0x512798: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x512798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_51279c:
    // 0x51279c: 0xc04cc44  jal         func_133110
label_5127a0:
    if (ctx->pc == 0x5127A0u) {
        ctx->pc = 0x5127A0u;
            // 0x5127a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5127A4u;
        goto label_5127a4;
    }
    ctx->pc = 0x51279Cu;
    SET_GPR_U32(ctx, 31, 0x5127A4u);
    ctx->pc = 0x5127A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51279Cu;
            // 0x5127a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5127A4u; }
        if (ctx->pc != 0x5127A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5127A4u; }
        if (ctx->pc != 0x5127A4u) { return; }
    }
    ctx->pc = 0x5127A4u;
label_5127a4:
    // 0x5127a4: 0x26640820  addiu       $a0, $s3, 0x820
    ctx->pc = 0x5127a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
label_5127a8:
    // 0x5127a8: 0xc04cc08  jal         func_133020
label_5127ac:
    if (ctx->pc == 0x5127ACu) {
        ctx->pc = 0x5127ACu;
            // 0x5127ac: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x5127B0u;
        goto label_5127b0;
    }
    ctx->pc = 0x5127A8u;
    SET_GPR_U32(ctx, 31, 0x5127B0u);
    ctx->pc = 0x5127ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5127A8u;
            // 0x5127ac: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5127B0u; }
        if (ctx->pc != 0x5127B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5127B0u; }
        if (ctx->pc != 0x5127B0u) { return; }
    }
    ctx->pc = 0x5127B0u;
label_5127b0:
    // 0x5127b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x5127b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5127b4:
    // 0x5127b4: 0x0  nop
    ctx->pc = 0x5127b4u;
    // NOP
label_5127b8:
    // 0x5127b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x5127b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5127bc:
    // 0x5127bc: 0x45010077  bc1t        . + 4 + (0x77 << 2)
label_5127c0:
    if (ctx->pc == 0x5127C0u) {
        ctx->pc = 0x5127C4u;
        goto label_5127c4;
    }
    ctx->pc = 0x5127BCu;
    {
        const bool branch_taken_0x5127bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5127bc) {
            ctx->pc = 0x51299Cu;
            goto label_51299c;
        }
    }
    ctx->pc = 0x5127C4u;
label_5127c4:
    // 0x5127c4: 0x8e620a68  lw          $v0, 0xA68($s3)
    ctx->pc = 0x5127c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2664)));
label_5127c8:
    // 0x5127c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_5127cc:
    if (ctx->pc == 0x5127CCu) {
        ctx->pc = 0x5127CCu;
            // 0x5127cc: 0x26630a50  addiu       $v1, $s3, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2640));
        ctx->pc = 0x5127D0u;
        goto label_5127d0;
    }
    ctx->pc = 0x5127C8u;
    {
        const bool branch_taken_0x5127c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5127CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5127C8u;
            // 0x5127cc: 0x26630a50  addiu       $v1, $s3, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5127c8) {
            ctx->pc = 0x512804u;
            goto label_512804;
        }
    }
    ctx->pc = 0x5127D0u;
label_5127d0:
    // 0x5127d0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x5127d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_5127d4:
    // 0x5127d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5127d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5127d8:
    // 0x5127d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5127d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5127dc:
    // 0x5127dc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x5127dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_5127e0:
    // 0x5127e0: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x5127e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_5127e4:
    // 0x5127e4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x5127e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_5127e8:
    // 0x5127e8: 0x320f809  jalr        $t9
label_5127ec:
    if (ctx->pc == 0x5127ECu) {
        ctx->pc = 0x5127F0u;
        goto label_5127f0;
    }
    ctx->pc = 0x5127E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5127F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5127F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5127F0u; }
            if (ctx->pc != 0x5127F0u) { return; }
        }
        }
    }
    ctx->pc = 0x5127F0u;
label_5127f0:
    // 0x5127f0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x5127f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_5127f4:
    // 0x5127f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5127f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5127f8:
    // 0x5127f8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x5127f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_5127fc:
    // 0x5127fc: 0x320f809  jalr        $t9
label_512800:
    if (ctx->pc == 0x512800u) {
        ctx->pc = 0x512800u;
            // 0x512800: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x512804u;
        goto label_512804;
    }
    ctx->pc = 0x5127FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x512804u);
        ctx->pc = 0x512800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5127FCu;
            // 0x512800: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x512804u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x512804u; }
            if (ctx->pc != 0x512804u) { return; }
        }
        }
    }
    ctx->pc = 0x512804u;
label_512804:
    // 0x512804: 0x8e630db0  lw          $v1, 0xDB0($s3)
    ctx->pc = 0x512804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3504)));
label_512808:
    // 0x512808: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x512808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_51280c:
    // 0x51280c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_512810:
    if (ctx->pc == 0x512810u) {
        ctx->pc = 0x512810u;
            // 0x512810: 0x8e700d74  lw          $s0, 0xD74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
        ctx->pc = 0x512814u;
        goto label_512814;
    }
    ctx->pc = 0x51280Cu;
    {
        const bool branch_taken_0x51280c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x51280c) {
            ctx->pc = 0x512810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51280Cu;
            // 0x512810: 0x8e700d74  lw          $s0, 0xD74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x512834u;
            goto label_512834;
        }
    }
    ctx->pc = 0x512814u;
label_512814:
    // 0x512814: 0xc0c1c38  jal         func_3070E0
label_512818:
    if (ctx->pc == 0x512818u) {
        ctx->pc = 0x512818u;
            // 0x512818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51281Cu;
        goto label_51281c;
    }
    ctx->pc = 0x512814u;
    SET_GPR_U32(ctx, 31, 0x51281Cu);
    ctx->pc = 0x512818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512814u;
            // 0x512818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3070E0u;
    if (runtime->hasFunction(0x3070E0u)) {
        auto targetFn = runtime->lookupFunction(0x3070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51281Cu; }
        if (ctx->pc != 0x51281Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003070E0_0x3070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51281Cu; }
        if (ctx->pc != 0x51281Cu) { return; }
    }
    ctx->pc = 0x51281Cu;
label_51281c:
    // 0x51281c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x51281cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_512820:
    // 0x512820: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x512820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_512824:
    // 0x512824: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x512824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_512828:
    // 0x512828: 0x320f809  jalr        $t9
label_51282c:
    if (ctx->pc == 0x51282Cu) {
        ctx->pc = 0x51282Cu;
            // 0x51282c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x512830u;
        goto label_512830;
    }
    ctx->pc = 0x512828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x512830u);
        ctx->pc = 0x51282Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512828u;
            // 0x51282c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x512830u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x512830u; }
            if (ctx->pc != 0x512830u) { return; }
        }
        }
    }
    ctx->pc = 0x512830u;
label_512830:
    // 0x512830: 0x8e700d74  lw          $s0, 0xD74($s3)
    ctx->pc = 0x512830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_512834:
    // 0x512834: 0x26640440  addiu       $a0, $s3, 0x440
    ctx->pc = 0x512834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
label_512838:
    // 0x512838: 0x26720580  addiu       $s2, $s3, 0x580
    ctx->pc = 0x512838u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
label_51283c:
    // 0x51283c: 0xc0754b4  jal         func_1D52D0
label_512840:
    if (ctx->pc == 0x512840u) {
        ctx->pc = 0x512840u;
            // 0x512840: 0x26710560  addiu       $s1, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->pc = 0x512844u;
        goto label_512844;
    }
    ctx->pc = 0x51283Cu;
    SET_GPR_U32(ctx, 31, 0x512844u);
    ctx->pc = 0x512840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51283Cu;
            // 0x512840: 0x26710560  addiu       $s1, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512844u; }
        if (ctx->pc != 0x512844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512844u; }
        if (ctx->pc != 0x512844u) { return; }
    }
    ctx->pc = 0x512844u;
label_512844:
    // 0x512844: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x512844u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_512848:
    // 0x512848: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x512848u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_51284c:
    // 0x51284c: 0xae670dbc  sw          $a3, 0xDBC($s3)
    ctx->pc = 0x51284cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3516), GPR_U32(ctx, 7));
label_512850:
    // 0x512850: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x512850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_512854:
    // 0x512854: 0xae670694  sw          $a3, 0x694($s3)
    ctx->pc = 0x512854u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 7));
label_512858:
    // 0x512858: 0x266402e0  addiu       $a0, $s3, 0x2E0
    ctx->pc = 0x512858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
label_51285c:
    // 0x51285c: 0x8e630550  lw          $v1, 0x550($s3)
    ctx->pc = 0x51285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1360)));
label_512860:
    // 0x512860: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x512860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_512864:
    // 0x512864: 0x24c6bd90  addiu       $a2, $a2, -0x4270
    ctx->pc = 0x512864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950288));
label_512868:
    // 0x512868: 0xac67002c  sw          $a3, 0x2C($v1)
    ctx->pc = 0x512868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 7));
label_51286c:
    // 0x51286c: 0xae600dc4  sw          $zero, 0xDC4($s3)
    ctx->pc = 0x51286cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3524), GPR_U32(ctx, 0));
label_512870:
    // 0x512870: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x512870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
label_512874:
    // 0x512874: 0xae40010c  sw          $zero, 0x10C($s2)
    ctx->pc = 0x512874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
label_512878:
    // 0x512878: 0xc04cca0  jal         func_133280
label_51287c:
    if (ctx->pc == 0x51287Cu) {
        ctx->pc = 0x51287Cu;
            // 0x51287c: 0xae0202b0  sw          $v0, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
        ctx->pc = 0x512880u;
        goto label_512880;
    }
    ctx->pc = 0x512878u;
    SET_GPR_U32(ctx, 31, 0x512880u);
    ctx->pc = 0x51287Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512878u;
            // 0x51287c: 0xae0202b0  sw          $v0, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512880u; }
        if (ctx->pc != 0x512880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512880u; }
        if (ctx->pc != 0x512880u) { return; }
    }
    ctx->pc = 0x512880u;
label_512880:
    // 0x512880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x512880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_512884:
    // 0x512884: 0xc075318  jal         func_1D4C60
label_512888:
    if (ctx->pc == 0x512888u) {
        ctx->pc = 0x512888u;
            // 0x512888: 0x266502e0  addiu       $a1, $s3, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
        ctx->pc = 0x51288Cu;
        goto label_51288c;
    }
    ctx->pc = 0x512884u;
    SET_GPR_U32(ctx, 31, 0x51288Cu);
    ctx->pc = 0x512888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512884u;
            // 0x512888: 0x266502e0  addiu       $a1, $s3, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51288Cu; }
        if (ctx->pc != 0x51288Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51288Cu; }
        if (ctx->pc != 0x51288Cu) { return; }
    }
    ctx->pc = 0x51288Cu;
label_51288c:
    // 0x51288c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51288cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_512890:
    // 0x512890: 0x26640840  addiu       $a0, $s3, 0x840
    ctx->pc = 0x512890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
label_512894:
    // 0x512894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x512894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_512898:
    // 0x512898: 0xc0c6250  jal         func_318940
label_51289c:
    if (ctx->pc == 0x51289Cu) {
        ctx->pc = 0x51289Cu;
            // 0x51289c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5128A0u;
        goto label_5128a0;
    }
    ctx->pc = 0x512898u;
    SET_GPR_U32(ctx, 31, 0x5128A0u);
    ctx->pc = 0x51289Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512898u;
            // 0x51289c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5128A0u; }
        if (ctx->pc != 0x5128A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5128A0u; }
        if (ctx->pc != 0x5128A0u) { return; }
    }
    ctx->pc = 0x5128A0u;
label_5128a0:
    // 0x5128a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5128a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5128a4:
    // 0x5128a4: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x5128a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
label_5128a8:
    // 0x5128a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x5128a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_5128ac:
    // 0x5128ac: 0xc04cbd8  jal         func_132F60
label_5128b0:
    if (ctx->pc == 0x5128B0u) {
        ctx->pc = 0x5128B0u;
            // 0x5128b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5128B4u;
        goto label_5128b4;
    }
    ctx->pc = 0x5128ACu;
    SET_GPR_U32(ctx, 31, 0x5128B4u);
    ctx->pc = 0x5128B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5128ACu;
            // 0x5128b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5128B4u; }
        if (ctx->pc != 0x5128B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5128B4u; }
        if (ctx->pc != 0x5128B4u) { return; }
    }
    ctx->pc = 0x5128B4u;
label_5128b4:
    // 0x5128b4: 0x26700ab0  addiu       $s0, $s3, 0xAB0
    ctx->pc = 0x5128b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2736));
label_5128b8:
    // 0x5128b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5128b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5128bc:
    // 0x5128bc: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x5128bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_5128c0:
    // 0x5128c0: 0xc04a576  jal         func_1295D8
label_5128c4:
    if (ctx->pc == 0x5128C4u) {
        ctx->pc = 0x5128C4u;
            // 0x5128c4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x5128C8u;
        goto label_5128c8;
    }
    ctx->pc = 0x5128C0u;
    SET_GPR_U32(ctx, 31, 0x5128C8u);
    ctx->pc = 0x5128C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5128C0u;
            // 0x5128c4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5128C8u; }
        if (ctx->pc != 0x5128C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5128C8u; }
        if (ctx->pc != 0x5128C8u) { return; }
    }
    ctx->pc = 0x5128C8u;
label_5128c8:
    // 0x5128c8: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x5128c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_5128cc:
    // 0x5128cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5128ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5128d0:
    // 0x5128d0: 0xc04a576  jal         func_1295D8
label_5128d4:
    if (ctx->pc == 0x5128D4u) {
        ctx->pc = 0x5128D4u;
            // 0x5128d4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x5128D8u;
        goto label_5128d8;
    }
    ctx->pc = 0x5128D0u;
    SET_GPR_U32(ctx, 31, 0x5128D8u);
    ctx->pc = 0x5128D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5128D0u;
            // 0x5128d4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5128D8u; }
        if (ctx->pc != 0x5128D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5128D8u; }
        if (ctx->pc != 0x5128D8u) { return; }
    }
    ctx->pc = 0x5128D8u;
label_5128d8:
    // 0x5128d8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5128d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5128dc:
    // 0x5128dc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x5128dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_5128e0:
    // 0x5128e0: 0xc04cc04  jal         func_133010
label_5128e4:
    if (ctx->pc == 0x5128E4u) {
        ctx->pc = 0x5128E4u;
            // 0x5128e4: 0x24a5bda0  addiu       $a1, $a1, -0x4260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950304));
        ctx->pc = 0x5128E8u;
        goto label_5128e8;
    }
    ctx->pc = 0x5128E0u;
    SET_GPR_U32(ctx, 31, 0x5128E8u);
    ctx->pc = 0x5128E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5128E0u;
            // 0x5128e4: 0x24a5bda0  addiu       $a1, $a1, -0x4260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5128E8u; }
        if (ctx->pc != 0x5128E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5128E8u; }
        if (ctx->pc != 0x5128E8u) { return; }
    }
    ctx->pc = 0x5128E8u;
label_5128e8:
    // 0x5128e8: 0xc6800068  lwc1        $f0, 0x68($s4)
    ctx->pc = 0x5128e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5128ec:
    // 0x5128ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x5128ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_5128f0:
    // 0x5128f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5128f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5128f4:
    // 0x5128f4: 0xe6600de4  swc1        $f0, 0xDE4($s3)
    ctx->pc = 0x5128f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
label_5128f8:
    // 0x5128f8: 0xc68d0070  lwc1        $f13, 0x70($s4)
    ctx->pc = 0x5128f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_5128fc:
    // 0x5128fc: 0xc04cbd8  jal         func_132F60
label_512900:
    if (ctx->pc == 0x512900u) {
        ctx->pc = 0x512900u;
            // 0x512900: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x512904u;
        goto label_512904;
    }
    ctx->pc = 0x5128FCu;
    SET_GPR_U32(ctx, 31, 0x512904u);
    ctx->pc = 0x512900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5128FCu;
            // 0x512900: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512904u; }
        if (ctx->pc != 0x512904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512904u; }
        if (ctx->pc != 0x512904u) { return; }
    }
    ctx->pc = 0x512904u;
label_512904:
    // 0x512904: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x512904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
label_512908:
    // 0x512908: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x512908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51290c:
    // 0x51290c: 0xc04cca0  jal         func_133280
label_512910:
    if (ctx->pc == 0x512910u) {
        ctx->pc = 0x512910u;
            // 0x512910: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x512914u;
        goto label_512914;
    }
    ctx->pc = 0x51290Cu;
    SET_GPR_U32(ctx, 31, 0x512914u);
    ctx->pc = 0x512910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51290Cu;
            // 0x512910: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512914u; }
        if (ctx->pc != 0x512914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512914u; }
        if (ctx->pc != 0x512914u) { return; }
    }
    ctx->pc = 0x512914u;
label_512914:
    // 0x512914: 0xc680006c  lwc1        $f0, 0x6C($s4)
    ctx->pc = 0x512914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_512918:
    // 0x512918: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x512918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_51291c:
    // 0x51291c: 0x2442bd40  addiu       $v0, $v0, -0x42C0
    ctx->pc = 0x51291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950208));
label_512920:
    // 0x512920: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x512920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_512924:
    // 0x512924: 0x266602c0  addiu       $a2, $s3, 0x2C0
    ctx->pc = 0x512924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_512928:
    // 0x512928: 0xe6600690  swc1        $f0, 0x690($s3)
    ctx->pc = 0x512928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1680), bits); }
label_51292c:
    // 0x51292c: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x51292cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_512930:
    // 0x512930: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x512930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_512934:
    // 0x512934: 0xc04cc90  jal         func_133240
label_512938:
    if (ctx->pc == 0x512938u) {
        ctx->pc = 0x512938u;
            // 0x512938: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x51293Cu;
        goto label_51293c;
    }
    ctx->pc = 0x512934u;
    SET_GPR_U32(ctx, 31, 0x51293Cu);
    ctx->pc = 0x512938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512934u;
            // 0x512938: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51293Cu; }
        if (ctx->pc != 0x51293Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51293Cu; }
        if (ctx->pc != 0x51293Cu) { return; }
    }
    ctx->pc = 0x51293Cu;
label_51293c:
    // 0x51293c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x51293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_512940:
    // 0x512940: 0xc04cc44  jal         func_133110
label_512944:
    if (ctx->pc == 0x512944u) {
        ctx->pc = 0x512944u;
            // 0x512944: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512948u;
        goto label_512948;
    }
    ctx->pc = 0x512940u;
    SET_GPR_U32(ctx, 31, 0x512948u);
    ctx->pc = 0x512944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512940u;
            // 0x512944: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512948u; }
        if (ctx->pc != 0x512948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512948u; }
        if (ctx->pc != 0x512948u) { return; }
    }
    ctx->pc = 0x512948u;
label_512948:
    // 0x512948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x512948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51294c:
    // 0x51294c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x51294cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_512950:
    // 0x512950: 0xc075378  jal         func_1D4DE0
label_512954:
    if (ctx->pc == 0x512954u) {
        ctx->pc = 0x512954u;
            // 0x512954: 0x26660830  addiu       $a2, $s3, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2096));
        ctx->pc = 0x512958u;
        goto label_512958;
    }
    ctx->pc = 0x512950u;
    SET_GPR_U32(ctx, 31, 0x512958u);
    ctx->pc = 0x512954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512950u;
            // 0x512954: 0x26660830  addiu       $a2, $s3, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512958u; }
        if (ctx->pc != 0x512958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512958u; }
        if (ctx->pc != 0x512958u) { return; }
    }
    ctx->pc = 0x512958u;
label_512958:
    // 0x512958: 0xc6610880  lwc1        $f1, 0x880($s3)
    ctx->pc = 0x512958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51295c:
    // 0x51295c: 0x2664087c  addiu       $a0, $s3, 0x87C
    ctx->pc = 0x51295cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2172));
label_512960:
    // 0x512960: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x512960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_512964:
    // 0x512964: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x512964u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_512968:
    // 0x512968: 0xc0c753c  jal         func_31D4F0
label_51296c:
    if (ctx->pc == 0x51296Cu) {
        ctx->pc = 0x51296Cu;
            // 0x51296c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x512970u;
        goto label_512970;
    }
    ctx->pc = 0x512968u;
    SET_GPR_U32(ctx, 31, 0x512970u);
    ctx->pc = 0x51296Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512968u;
            // 0x51296c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512970u; }
        if (ctx->pc != 0x512970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512970u; }
        if (ctx->pc != 0x512970u) { return; }
    }
    ctx->pc = 0x512970u;
label_512970:
    // 0x512970: 0xc66c0880  lwc1        $f12, 0x880($s3)
    ctx->pc = 0x512970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_512974:
    // 0x512974: 0x2664092c  addiu       $a0, $s3, 0x92C
    ctx->pc = 0x512974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2348));
label_512978:
    // 0x512978: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x512978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_51297c:
    // 0x51297c: 0xc0c753c  jal         func_31D4F0
label_512980:
    if (ctx->pc == 0x512980u) {
        ctx->pc = 0x512980u;
            // 0x512980: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x512984u;
        goto label_512984;
    }
    ctx->pc = 0x51297Cu;
    SET_GPR_U32(ctx, 31, 0x512984u);
    ctx->pc = 0x512980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51297Cu;
            // 0x512980: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512984u; }
        if (ctx->pc != 0x512984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512984u; }
        if (ctx->pc != 0x512984u) { return; }
    }
    ctx->pc = 0x512984u;
label_512984:
    // 0x512984: 0x8e650d98  lw          $a1, 0xD98($s3)
    ctx->pc = 0x512984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_512988:
    // 0x512988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x512988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51298c:
    // 0x51298c: 0x8e830064  lw          $v1, 0x64($s4)
    ctx->pc = 0x51298cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_512990:
    // 0x512990: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x512990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_512994:
    // 0x512994: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x512994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_512998:
    // 0x512998: 0xae830064  sw          $v1, 0x64($s4)
    ctx->pc = 0x512998u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 3));
label_51299c:
    // 0x51299c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x51299cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_5129a0:
    // 0x5129a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5129a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5129a4:
    // 0x5129a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5129a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5129a8:
    // 0x5129a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5129a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5129ac:
    // 0x5129ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5129acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5129b0:
    // 0x5129b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5129b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5129b4:
    // 0x5129b4: 0x3e00008  jr          $ra
label_5129b8:
    if (ctx->pc == 0x5129B8u) {
        ctx->pc = 0x5129B8u;
            // 0x5129b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x5129BCu;
        goto label_5129bc;
    }
    ctx->pc = 0x5129B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5129B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5129B4u;
            // 0x5129b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5129BCu;
label_5129bc:
    // 0x5129bc: 0x0  nop
    ctx->pc = 0x5129bcu;
    // NOP
label_5129c0:
    // 0x5129c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5129c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5129c4:
    // 0x5129c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5129c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5129c8:
    // 0x5129c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5129c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5129cc:
    // 0x5129cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5129ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5129d0:
    // 0x5129d0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x5129d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_5129d4:
    // 0x5129d4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_5129d8:
    if (ctx->pc == 0x5129D8u) {
        ctx->pc = 0x5129D8u;
            // 0x5129d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x5129DCu;
        goto label_5129dc;
    }
    ctx->pc = 0x5129D4u;
    {
        const bool branch_taken_0x5129d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5129d4) {
            ctx->pc = 0x5129D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5129D4u;
            // 0x5129d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5129FCu;
            goto label_5129fc;
        }
    }
    ctx->pc = 0x5129DCu;
label_5129dc:
    // 0x5129dc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5129e0:
    if (ctx->pc == 0x5129E0u) {
        ctx->pc = 0x5129E0u;
            // 0x5129e0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x5129E4u;
        goto label_5129e4;
    }
    ctx->pc = 0x5129DCu;
    {
        const bool branch_taken_0x5129dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5129dc) {
            ctx->pc = 0x5129E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5129DCu;
            // 0x5129e0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5129F8u;
            goto label_5129f8;
        }
    }
    ctx->pc = 0x5129E4u;
label_5129e4:
    // 0x5129e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5129e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5129e8:
    // 0x5129e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5129e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5129ec:
    // 0x5129ec: 0x320f809  jalr        $t9
label_5129f0:
    if (ctx->pc == 0x5129F0u) {
        ctx->pc = 0x5129F0u;
            // 0x5129f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5129F4u;
        goto label_5129f4;
    }
    ctx->pc = 0x5129ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5129F4u);
        ctx->pc = 0x5129F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5129ECu;
            // 0x5129f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5129F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5129F4u; }
            if (ctx->pc != 0x5129F4u) { return; }
        }
        }
    }
    ctx->pc = 0x5129F4u;
label_5129f4:
    // 0x5129f4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x5129f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_5129f8:
    // 0x5129f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5129f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5129fc:
    // 0x5129fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5129fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_512a00:
    // 0x512a00: 0x3e00008  jr          $ra
label_512a04:
    if (ctx->pc == 0x512A04u) {
        ctx->pc = 0x512A04u;
            // 0x512a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x512A08u;
        goto label_512a08;
    }
    ctx->pc = 0x512A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512A00u;
            // 0x512a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512A08u;
label_512a08:
    // 0x512a08: 0x0  nop
    ctx->pc = 0x512a08u;
    // NOP
label_512a0c:
    // 0x512a0c: 0x0  nop
    ctx->pc = 0x512a0cu;
    // NOP
label_512a10:
    // 0x512a10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x512a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_512a14:
    // 0x512a14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x512a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_512a18:
    // 0x512a18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x512a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_512a1c:
    // 0x512a1c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x512a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_512a20:
    // 0x512a20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x512a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_512a24:
    // 0x512a24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x512a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_512a28:
    // 0x512a28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x512a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_512a2c:
    // 0x512a2c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x512a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_512a30:
    // 0x512a30: 0xc0a7a88  jal         func_29EA20
label_512a34:
    if (ctx->pc == 0x512A34u) {
        ctx->pc = 0x512A34u;
            // 0x512a34: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x512A38u;
        goto label_512a38;
    }
    ctx->pc = 0x512A30u;
    SET_GPR_U32(ctx, 31, 0x512A38u);
    ctx->pc = 0x512A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512A30u;
            // 0x512a34: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512A38u; }
        if (ctx->pc != 0x512A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512A38u; }
        if (ctx->pc != 0x512A38u) { return; }
    }
    ctx->pc = 0x512A38u;
label_512a38:
    // 0x512a38: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x512a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_512a3c:
    // 0x512a3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x512a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_512a40:
    // 0x512a40: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_512a44:
    if (ctx->pc == 0x512A44u) {
        ctx->pc = 0x512A44u;
            // 0x512a44: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x512A48u;
        goto label_512a48;
    }
    ctx->pc = 0x512A40u;
    {
        const bool branch_taken_0x512a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x512A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512A40u;
            // 0x512a44: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512a40) {
            ctx->pc = 0x512A7Cu;
            goto label_512a7c;
        }
    }
    ctx->pc = 0x512A48u;
label_512a48:
    // 0x512a48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x512a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_512a4c:
    // 0x512a4c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x512a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_512a50:
    // 0x512a50: 0x8c420d38  lw          $v0, 0xD38($v0)
    ctx->pc = 0x512a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3384)));
label_512a54:
    // 0x512a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x512a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_512a58:
    // 0x512a58: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x512a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_512a5c:
    // 0x512a5c: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x512a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_512a60:
    // 0x512a60: 0xc08afe0  jal         func_22BF80
label_512a64:
    if (ctx->pc == 0x512A64u) {
        ctx->pc = 0x512A64u;
            // 0x512a64: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x512A68u;
        goto label_512a68;
    }
    ctx->pc = 0x512A60u;
    SET_GPR_U32(ctx, 31, 0x512A68u);
    ctx->pc = 0x512A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512A60u;
            // 0x512a64: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512A68u; }
        if (ctx->pc != 0x512A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512A68u; }
        if (ctx->pc != 0x512A68u) { return; }
    }
    ctx->pc = 0x512A68u;
label_512a68:
    // 0x512a68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x512a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_512a6c:
    // 0x512a6c: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x512a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_512a70:
    // 0x512a70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x512a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_512a74:
    // 0x512a74: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x512a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_512a78:
    // 0x512a78: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x512a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_512a7c:
    // 0x512a7c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x512a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_512a80:
    // 0x512a80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x512a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_512a84:
    // 0x512a84: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x512a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_512a88:
    // 0x512a88: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x512a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_512a8c:
    // 0x512a8c: 0xc08c798  jal         func_231E60
label_512a90:
    if (ctx->pc == 0x512A90u) {
        ctx->pc = 0x512A90u;
            // 0x512a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512A94u;
        goto label_512a94;
    }
    ctx->pc = 0x512A8Cu;
    SET_GPR_U32(ctx, 31, 0x512A94u);
    ctx->pc = 0x512A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512A8Cu;
            // 0x512a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512A94u; }
        if (ctx->pc != 0x512A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512A94u; }
        if (ctx->pc != 0x512A94u) { return; }
    }
    ctx->pc = 0x512A94u;
label_512a94:
    // 0x512a94: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x512a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_512a98:
    // 0x512a98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x512a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_512a9c:
    // 0x512a9c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x512a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_512aa0:
    // 0x512aa0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x512aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_512aa4:
    // 0x512aa4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x512aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_512aa8:
    // 0x512aa8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x512aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_512aac:
    // 0x512aac: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x512aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_512ab0:
    // 0x512ab0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x512ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_512ab4:
    // 0x512ab4: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x512ab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_512ab8:
    // 0x512ab8: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x512ab8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_512abc:
    // 0x512abc: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x512abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_512ac0:
    // 0x512ac0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x512ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_512ac4:
    // 0x512ac4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x512ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_512ac8:
    // 0x512ac8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x512ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_512acc:
    // 0x512acc: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x512accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_512ad0:
    // 0x512ad0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x512ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_512ad4:
    // 0x512ad4: 0xc0a3830  jal         func_28E0C0
label_512ad8:
    if (ctx->pc == 0x512AD8u) {
        ctx->pc = 0x512AD8u;
            // 0x512ad8: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x512ADCu;
        goto label_512adc;
    }
    ctx->pc = 0x512AD4u;
    SET_GPR_U32(ctx, 31, 0x512ADCu);
    ctx->pc = 0x512AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512AD4u;
            // 0x512ad8: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512ADCu; }
        if (ctx->pc != 0x512ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512ADCu; }
        if (ctx->pc != 0x512ADCu) { return; }
    }
    ctx->pc = 0x512ADCu;
label_512adc:
    // 0x512adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x512adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_512ae0:
    // 0x512ae0: 0xc08af10  jal         func_22BC40
label_512ae4:
    if (ctx->pc == 0x512AE4u) {
        ctx->pc = 0x512AE4u;
            // 0x512ae4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x512AE8u;
        goto label_512ae8;
    }
    ctx->pc = 0x512AE0u;
    SET_GPR_U32(ctx, 31, 0x512AE8u);
    ctx->pc = 0x512AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512AE0u;
            // 0x512ae4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512AE8u; }
        if (ctx->pc != 0x512AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512AE8u; }
        if (ctx->pc != 0x512AE8u) { return; }
    }
    ctx->pc = 0x512AE8u;
label_512ae8:
    // 0x512ae8: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x512ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_512aec:
    // 0x512aec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x512aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_512af0:
    // 0x512af0: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x512af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_512af4:
    // 0x512af4: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x512af4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_512af8:
    // 0x512af8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x512af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_512afc:
    // 0x512afc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x512afcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_512b00:
    // 0x512b00: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x512b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_512b04:
    // 0x512b04: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x512b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_512b08:
    // 0x512b08: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x512b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_512b0c:
    // 0x512b0c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x512b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_512b10:
    // 0x512b10: 0x460408c3  div.s       $f3, $f1, $f4
    ctx->pc = 0x512b10u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[4];
label_512b14:
    // 0x512b14: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x512b14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_512b18:
    // 0x512b18: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x512b18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_512b1c:
    // 0x512b1c: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x512b1cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
label_512b20:
    // 0x512b20: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x512b20u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_512b24:
    // 0x512b24: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x512b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_512b28:
    // 0x512b28: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x512b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_512b2c:
    // 0x512b2c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x512b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_512b30:
    // 0x512b30: 0x460408c3  div.s       $f3, $f1, $f4
    ctx->pc = 0x512b30u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[4];
label_512b34:
    // 0x512b34: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x512b34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_512b38:
    // 0x512b38: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x512b38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_512b3c:
    // 0x512b3c: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x512b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_512b40:
    // 0x512b40: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x512b40u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
label_512b44:
    // 0x512b44: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x512b44u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_512b48:
    // 0x512b48: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x512b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_512b4c:
    // 0x512b4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x512b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_512b50:
    // 0x512b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x512b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_512b54:
    // 0x512b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x512b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_512b58:
    // 0x512b58: 0x3e00008  jr          $ra
label_512b5c:
    if (ctx->pc == 0x512B5Cu) {
        ctx->pc = 0x512B5Cu;
            // 0x512b5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x512B60u;
        goto label_512b60;
    }
    ctx->pc = 0x512B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512B58u;
            // 0x512b5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512B60u;
label_512b60:
    // 0x512b60: 0x3e00008  jr          $ra
label_512b64:
    if (ctx->pc == 0x512B64u) {
        ctx->pc = 0x512B64u;
            // 0x512b64: 0x2402620c  addiu       $v0, $zero, 0x620C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25100));
        ctx->pc = 0x512B68u;
        goto label_512b68;
    }
    ctx->pc = 0x512B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512B60u;
            // 0x512b64: 0x2402620c  addiu       $v0, $zero, 0x620C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25100));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512B68u;
label_512b68:
    // 0x512b68: 0x0  nop
    ctx->pc = 0x512b68u;
    // NOP
label_512b6c:
    // 0x512b6c: 0x0  nop
    ctx->pc = 0x512b6cu;
    // NOP
label_512b70:
    // 0x512b70: 0x80aef7c  j           func_2BBDF0
label_512b74:
    if (ctx->pc == 0x512B74u) {
        ctx->pc = 0x512B74u;
            // 0x512b74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x512B78u;
        goto label_512b78;
    }
    ctx->pc = 0x512B70u;
    ctx->pc = 0x512B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512B70u;
            // 0x512b74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x2BBDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x512B78u;
label_512b78:
    // 0x512b78: 0x0  nop
    ctx->pc = 0x512b78u;
    // NOP
label_512b7c:
    // 0x512b7c: 0x0  nop
    ctx->pc = 0x512b7cu;
    // NOP
label_512b80:
    // 0x512b80: 0x81448f4  j           func_5123D0
label_512b84:
    if (ctx->pc == 0x512B84u) {
        ctx->pc = 0x512B84u;
            // 0x512b84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x512B88u;
        goto label_512b88;
    }
    ctx->pc = 0x512B80u;
    ctx->pc = 0x512B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512B80u;
            // 0x512b84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5123D0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_5123d0;
    ctx->pc = 0x512B88u;
label_512b88:
    // 0x512b88: 0x0  nop
    ctx->pc = 0x512b88u;
    // NOP
label_512b8c:
    // 0x512b8c: 0x0  nop
    ctx->pc = 0x512b8cu;
    // NOP
label_512b90:
    // 0x512b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x512b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_512b94:
    // 0x512b94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x512b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_512b98:
    // 0x512b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x512b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_512b9c:
    // 0x512b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x512b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_512ba0:
    // 0x512ba0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x512ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_512ba4:
    // 0x512ba4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_512ba8:
    if (ctx->pc == 0x512BA8u) {
        ctx->pc = 0x512BA8u;
            // 0x512ba8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512BACu;
        goto label_512bac;
    }
    ctx->pc = 0x512BA4u;
    {
        const bool branch_taken_0x512ba4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x512BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512BA4u;
            // 0x512ba8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512ba4) {
            ctx->pc = 0x512BE8u;
            goto label_512be8;
        }
    }
    ctx->pc = 0x512BACu;
label_512bac:
    // 0x512bac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x512bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_512bb0:
    // 0x512bb0: 0x24425500  addiu       $v0, $v0, 0x5500
    ctx->pc = 0x512bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21760));
label_512bb4:
    // 0x512bb4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_512bb8:
    if (ctx->pc == 0x512BB8u) {
        ctx->pc = 0x512BB8u;
            // 0x512bb8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x512BBCu;
        goto label_512bbc;
    }
    ctx->pc = 0x512BB4u;
    {
        const bool branch_taken_0x512bb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x512BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512BB4u;
            // 0x512bb8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512bb4) {
            ctx->pc = 0x512BD0u;
            goto label_512bd0;
        }
    }
    ctx->pc = 0x512BBCu;
label_512bbc:
    // 0x512bbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x512bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_512bc0:
    // 0x512bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x512bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_512bc4:
    // 0x512bc4: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x512bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
label_512bc8:
    // 0x512bc8: 0xc075bf8  jal         func_1D6FE0
label_512bcc:
    if (ctx->pc == 0x512BCCu) {
        ctx->pc = 0x512BCCu;
            // 0x512bcc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x512BD0u;
        goto label_512bd0;
    }
    ctx->pc = 0x512BC8u;
    SET_GPR_U32(ctx, 31, 0x512BD0u);
    ctx->pc = 0x512BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512BC8u;
            // 0x512bcc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512BD0u; }
        if (ctx->pc != 0x512BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512BD0u; }
        if (ctx->pc != 0x512BD0u) { return; }
    }
    ctx->pc = 0x512BD0u;
label_512bd0:
    // 0x512bd0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x512bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_512bd4:
    // 0x512bd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x512bd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_512bd8:
    // 0x512bd8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_512bdc:
    if (ctx->pc == 0x512BDCu) {
        ctx->pc = 0x512BDCu;
            // 0x512bdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512BE0u;
        goto label_512be0;
    }
    ctx->pc = 0x512BD8u;
    {
        const bool branch_taken_0x512bd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x512bd8) {
            ctx->pc = 0x512BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512BD8u;
            // 0x512bdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x512BECu;
            goto label_512bec;
        }
    }
    ctx->pc = 0x512BE0u;
label_512be0:
    // 0x512be0: 0xc0400a8  jal         func_1002A0
label_512be4:
    if (ctx->pc == 0x512BE4u) {
        ctx->pc = 0x512BE4u;
            // 0x512be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512BE8u;
        goto label_512be8;
    }
    ctx->pc = 0x512BE0u;
    SET_GPR_U32(ctx, 31, 0x512BE8u);
    ctx->pc = 0x512BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512BE0u;
            // 0x512be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512BE8u; }
        if (ctx->pc != 0x512BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512BE8u; }
        if (ctx->pc != 0x512BE8u) { return; }
    }
    ctx->pc = 0x512BE8u;
label_512be8:
    // 0x512be8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x512be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_512bec:
    // 0x512bec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x512becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_512bf0:
    // 0x512bf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x512bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_512bf4:
    // 0x512bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x512bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_512bf8:
    // 0x512bf8: 0x3e00008  jr          $ra
label_512bfc:
    if (ctx->pc == 0x512BFCu) {
        ctx->pc = 0x512BFCu;
            // 0x512bfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x512C00u;
        goto label_512c00;
    }
    ctx->pc = 0x512BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512BF8u;
            // 0x512bfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512C00u;
label_512c00:
    // 0x512c00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x512c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_512c04:
    // 0x512c04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x512c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_512c08:
    // 0x512c08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x512c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_512c0c:
    // 0x512c0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x512c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_512c10:
    // 0x512c10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x512c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_512c14:
    // 0x512c14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x512c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_512c18:
    // 0x512c18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x512c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_512c1c:
    // 0x512c1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x512c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_512c20:
    // 0x512c20: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x512c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_512c24:
    // 0x512c24: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_512c28:
    if (ctx->pc == 0x512C28u) {
        ctx->pc = 0x512C28u;
            // 0x512c28: 0xc64100a8  lwc1        $f1, 0xA8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x512C2Cu;
        goto label_512c2c;
    }
    ctx->pc = 0x512C24u;
    {
        const bool branch_taken_0x512c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x512c24) {
            ctx->pc = 0x512C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512C24u;
            // 0x512c28: 0xc64100a8  lwc1        $f1, 0xA8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x512C44u;
            goto label_512c44;
        }
    }
    ctx->pc = 0x512C2Cu;
label_512c2c:
    // 0x512c2c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x512c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_512c30:
    // 0x512c30: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x512c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_512c34:
    // 0x512c34: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x512c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_512c38:
    // 0x512c38: 0x54830070  bnel        $a0, $v1, . + 4 + (0x70 << 2)
label_512c3c:
    if (ctx->pc == 0x512C3Cu) {
        ctx->pc = 0x512C3Cu;
            // 0x512c3c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x512C40u;
        goto label_512c40;
    }
    ctx->pc = 0x512C38u;
    {
        const bool branch_taken_0x512c38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x512c38) {
            ctx->pc = 0x512C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512C38u;
            // 0x512c3c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x512DFCu;
            goto label_512dfc;
        }
    }
    ctx->pc = 0x512C40u;
label_512c40:
    // 0x512c40: 0xc64100a8  lwc1        $f1, 0xA8($s2)
    ctx->pc = 0x512c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_512c44:
    // 0x512c44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x512c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_512c48:
    // 0x512c48: 0x0  nop
    ctx->pc = 0x512c48u;
    // NOP
label_512c4c:
    // 0x512c4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x512c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_512c50:
    // 0x512c50: 0x45000069  bc1f        . + 4 + (0x69 << 2)
label_512c54:
    if (ctx->pc == 0x512C54u) {
        ctx->pc = 0x512C58u;
        goto label_512c58;
    }
    ctx->pc = 0x512C50u;
    {
        const bool branch_taken_0x512c50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x512c50) {
            ctx->pc = 0x512DF8u;
            goto label_512df8;
        }
    }
    ctx->pc = 0x512C58u;
label_512c58:
    // 0x512c58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x512c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_512c5c:
    // 0x512c5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x512c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_512c60:
    // 0x512c60: 0x8c71e378  lw          $s1, -0x1C88($v1)
    ctx->pc = 0x512c60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_512c64:
    // 0x512c64: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x512c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_512c68:
    // 0x512c68: 0x8c50e370  lw          $s0, -0x1C90($v0)
    ctx->pc = 0x512c68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_512c6c:
    // 0x512c6c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x512c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_512c70:
    // 0x512c70: 0x8c64d130  lw          $a0, -0x2ED0($v1)
    ctx->pc = 0x512c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_512c74:
    // 0x512c74: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x512c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_512c78:
    // 0x512c78: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x512c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_512c7c:
    // 0x512c7c: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x512c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_512c80:
    // 0x512c80: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x512c80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_512c84:
    // 0x512c84: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x512c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_512c88:
    // 0x512c88: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x512c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_512c8c:
    // 0x512c8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x512c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_512c90:
    // 0x512c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x512c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_512c94:
    // 0x512c94: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x512c94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_512c98:
    // 0x512c98: 0xc0a9524  jal         func_2A5490
label_512c9c:
    if (ctx->pc == 0x512C9Cu) {
        ctx->pc = 0x512C9Cu;
            // 0x512c9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512CA0u;
        goto label_512ca0;
    }
    ctx->pc = 0x512C98u;
    SET_GPR_U32(ctx, 31, 0x512CA0u);
    ctx->pc = 0x512C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512C98u;
            // 0x512c9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5490u;
    if (runtime->hasFunction(0x2A5490u)) {
        auto targetFn = runtime->lookupFunction(0x2A5490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512CA0u; }
        if (ctx->pc != 0x512CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5490_0x2a5490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512CA0u; }
        if (ctx->pc != 0x512CA0u) { return; }
    }
    ctx->pc = 0x512CA0u;
label_512ca0:
    // 0x512ca0: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x512ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_512ca4:
    // 0x512ca4: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x512ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_512ca8:
    // 0x512ca8: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x512ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_512cac:
    // 0x512cac: 0xc04f3fc  jal         func_13CFF0
label_512cb0:
    if (ctx->pc == 0x512CB0u) {
        ctx->pc = 0x512CB0u;
            // 0x512cb0: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x512CB4u;
        goto label_512cb4;
    }
    ctx->pc = 0x512CACu;
    SET_GPR_U32(ctx, 31, 0x512CB4u);
    ctx->pc = 0x512CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512CACu;
            // 0x512cb0: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512CB4u; }
        if (ctx->pc != 0x512CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512CB4u; }
        if (ctx->pc != 0x512CB4u) { return; }
    }
    ctx->pc = 0x512CB4u;
label_512cb4:
    // 0x512cb4: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x512cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_512cb8:
    // 0x512cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x512cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_512cbc:
    // 0x512cbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x512cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_512cc0:
    // 0x512cc0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x512cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_512cc4:
    // 0x512cc4: 0xc04e4a4  jal         func_139290
label_512cc8:
    if (ctx->pc == 0x512CC8u) {
        ctx->pc = 0x512CC8u;
            // 0x512cc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512CCCu;
        goto label_512ccc;
    }
    ctx->pc = 0x512CC4u;
    SET_GPR_U32(ctx, 31, 0x512CCCu);
    ctx->pc = 0x512CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512CC4u;
            // 0x512cc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512CCCu; }
        if (ctx->pc != 0x512CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512CCCu; }
        if (ctx->pc != 0x512CCCu) { return; }
    }
    ctx->pc = 0x512CCCu;
label_512ccc:
    // 0x512ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x512cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_512cd0:
    // 0x512cd0: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x512cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_512cd4:
    // 0x512cd4: 0xc04cd60  jal         func_133580
label_512cd8:
    if (ctx->pc == 0x512CD8u) {
        ctx->pc = 0x512CD8u;
            // 0x512cd8: 0x26460060  addiu       $a2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x512CDCu;
        goto label_512cdc;
    }
    ctx->pc = 0x512CD4u;
    SET_GPR_U32(ctx, 31, 0x512CDCu);
    ctx->pc = 0x512CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512CD4u;
            // 0x512cd8: 0x26460060  addiu       $a2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512CDCu; }
        if (ctx->pc != 0x512CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512CDCu; }
        if (ctx->pc != 0x512CDCu) { return; }
    }
    ctx->pc = 0x512CDCu;
label_512cdc:
    // 0x512cdc: 0x26660050  addiu       $a2, $s3, 0x50
    ctx->pc = 0x512cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_512ce0:
    // 0x512ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x512ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_512ce4:
    // 0x512ce4: 0xc04cd60  jal         func_133580
label_512ce8:
    if (ctx->pc == 0x512CE8u) {
        ctx->pc = 0x512CE8u;
            // 0x512ce8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512CECu;
        goto label_512cec;
    }
    ctx->pc = 0x512CE4u;
    SET_GPR_U32(ctx, 31, 0x512CECu);
    ctx->pc = 0x512CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512CE4u;
            // 0x512ce8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512CECu; }
        if (ctx->pc != 0x512CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512CECu; }
        if (ctx->pc != 0x512CECu) { return; }
    }
    ctx->pc = 0x512CECu;
label_512cec:
    // 0x512cec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x512cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_512cf0:
    // 0x512cf0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x512cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_512cf4:
    // 0x512cf4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x512cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_512cf8:
    // 0x512cf8: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x512cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_512cfc:
    // 0x512cfc: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x512cfcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_512d00:
    // 0x512d00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x512d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_512d04:
    // 0x512d04: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
label_512d08:
    if (ctx->pc == 0x512D08u) {
        ctx->pc = 0x512D08u;
            // 0x512d08: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x512D0Cu;
        goto label_512d0c;
    }
    ctx->pc = 0x512D04u;
    {
        const bool branch_taken_0x512d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x512d04) {
            ctx->pc = 0x512D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512D04u;
            // 0x512d08: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x512D4Cu;
            goto label_512d4c;
        }
    }
    ctx->pc = 0x512D0Cu;
label_512d0c:
    // 0x512d0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x512d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_512d10:
    // 0x512d10: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_512d14:
    if (ctx->pc == 0x512D14u) {
        ctx->pc = 0x512D18u;
        goto label_512d18;
    }
    ctx->pc = 0x512D10u;
    {
        const bool branch_taken_0x512d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x512d10) {
            ctx->pc = 0x512D48u;
            goto label_512d48;
        }
    }
    ctx->pc = 0x512D18u;
label_512d18:
    // 0x512d18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x512d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_512d1c:
    // 0x512d1c: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_512d20:
    if (ctx->pc == 0x512D20u) {
        ctx->pc = 0x512D20u;
            // 0x512d20: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x512D24u;
        goto label_512d24;
    }
    ctx->pc = 0x512D1Cu;
    {
        const bool branch_taken_0x512d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x512d1c) {
            ctx->pc = 0x512D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512D1Cu;
            // 0x512d20: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x512D3Cu;
            goto label_512d3c;
        }
    }
    ctx->pc = 0x512D24u;
label_512d24:
    // 0x512d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x512d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_512d28:
    // 0x512d28: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_512d2c:
    if (ctx->pc == 0x512D2Cu) {
        ctx->pc = 0x512D30u;
        goto label_512d30;
    }
    ctx->pc = 0x512D28u;
    {
        const bool branch_taken_0x512d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x512d28) {
            ctx->pc = 0x512D50u;
            goto label_512d50;
        }
    }
    ctx->pc = 0x512D30u;
label_512d30:
    // 0x512d30: 0x10000007  b           . + 4 + (0x7 << 2)
label_512d34:
    if (ctx->pc == 0x512D34u) {
        ctx->pc = 0x512D38u;
        goto label_512d38;
    }
    ctx->pc = 0x512D30u;
    {
        const bool branch_taken_0x512d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x512d30) {
            ctx->pc = 0x512D50u;
            goto label_512d50;
        }
    }
    ctx->pc = 0x512D38u;
label_512d38:
    // 0x512d38: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x512d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_512d3c:
    // 0x512d3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x512d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_512d40:
    // 0x512d40: 0x10000003  b           . + 4 + (0x3 << 2)
label_512d44:
    if (ctx->pc == 0x512D44u) {
        ctx->pc = 0x512D48u;
        goto label_512d48;
    }
    ctx->pc = 0x512D40u;
    {
        const bool branch_taken_0x512d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x512d40) {
            ctx->pc = 0x512D50u;
            goto label_512d50;
        }
    }
    ctx->pc = 0x512D48u;
label_512d48:
    // 0x512d48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x512d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_512d4c:
    // 0x512d4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x512d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_512d50:
    // 0x512d50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x512d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_512d54:
    // 0x512d54: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x512d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_512d58:
    // 0x512d58: 0x9042002a  lbu         $v0, 0x2A($v0)
    ctx->pc = 0x512d58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
label_512d5c:
    // 0x512d5c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_512d60:
    if (ctx->pc == 0x512D60u) {
        ctx->pc = 0x512D60u;
            // 0x512d60: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x512D64u;
        goto label_512d64;
    }
    ctx->pc = 0x512D5Cu;
    {
        const bool branch_taken_0x512d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x512d5c) {
            ctx->pc = 0x512D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512D5Cu;
            // 0x512d60: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x512D7Cu;
            goto label_512d7c;
        }
    }
    ctx->pc = 0x512D64u;
label_512d64:
    // 0x512d64: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x512d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_512d68:
    // 0x512d68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x512d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_512d6c:
    // 0x512d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x512d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_512d70:
    // 0x512d70: 0x0  nop
    ctx->pc = 0x512d70u;
    // NOP
label_512d74:
    // 0x512d74: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x512d74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_512d78:
    // 0x512d78: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x512d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_512d7c:
    // 0x512d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x512d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_512d80:
    // 0x512d80: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x512d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_512d84:
    // 0x512d84: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x512d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_512d88:
    // 0x512d88: 0xc44dcde4  lwc1        $f13, -0x321C($v0)
    ctx->pc = 0x512d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_512d8c:
    // 0x512d8c: 0xc04ce50  jal         func_133940
label_512d90:
    if (ctx->pc == 0x512D90u) {
        ctx->pc = 0x512D90u;
            // 0x512d90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512D94u;
        goto label_512d94;
    }
    ctx->pc = 0x512D8Cu;
    SET_GPR_U32(ctx, 31, 0x512D94u);
    ctx->pc = 0x512D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512D8Cu;
            // 0x512d90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512D94u; }
        if (ctx->pc != 0x512D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512D94u; }
        if (ctx->pc != 0x512D94u) { return; }
    }
    ctx->pc = 0x512D94u;
label_512d94:
    // 0x512d94: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x512d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_512d98:
    // 0x512d98: 0xc04e738  jal         func_139CE0
label_512d9c:
    if (ctx->pc == 0x512D9Cu) {
        ctx->pc = 0x512D9Cu;
            // 0x512d9c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x512DA0u;
        goto label_512da0;
    }
    ctx->pc = 0x512D98u;
    SET_GPR_U32(ctx, 31, 0x512DA0u);
    ctx->pc = 0x512D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512D98u;
            // 0x512d9c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512DA0u; }
        if (ctx->pc != 0x512DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512DA0u; }
        if (ctx->pc != 0x512DA0u) { return; }
    }
    ctx->pc = 0x512DA0u;
label_512da0:
    // 0x512da0: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x512da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_512da4:
    // 0x512da4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x512da4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_512da8:
    // 0x512da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x512da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_512dac:
    // 0x512dac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x512dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_512db0:
    // 0x512db0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x512db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_512db4:
    // 0x512db4: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x512db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_512db8:
    // 0x512db8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x512db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_512dbc:
    // 0x512dbc: 0xc04cfcc  jal         func_133F30
label_512dc0:
    if (ctx->pc == 0x512DC0u) {
        ctx->pc = 0x512DC0u;
            // 0x512dc0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512DC4u;
        goto label_512dc4;
    }
    ctx->pc = 0x512DBCu;
    SET_GPR_U32(ctx, 31, 0x512DC4u);
    ctx->pc = 0x512DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512DBCu;
            // 0x512dc0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512DC4u; }
        if (ctx->pc != 0x512DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512DC4u; }
        if (ctx->pc != 0x512DC4u) { return; }
    }
    ctx->pc = 0x512DC4u;
label_512dc4:
    // 0x512dc4: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x512dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_512dc8:
    // 0x512dc8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x512dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_512dcc:
    // 0x512dcc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x512dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_512dd0:
    // 0x512dd0: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x512dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_512dd4:
    // 0x512dd4: 0xc054bbc  jal         func_152EF0
label_512dd8:
    if (ctx->pc == 0x512DD8u) {
        ctx->pc = 0x512DD8u;
            // 0x512dd8: 0xc64c00a4  lwc1        $f12, 0xA4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x512DDCu;
        goto label_512ddc;
    }
    ctx->pc = 0x512DD4u;
    SET_GPR_U32(ctx, 31, 0x512DDCu);
    ctx->pc = 0x512DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512DD4u;
            // 0x512dd8: 0xc64c00a4  lwc1        $f12, 0xA4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512DDCu; }
        if (ctx->pc != 0x512DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512DDCu; }
        if (ctx->pc != 0x512DDCu) { return; }
    }
    ctx->pc = 0x512DDCu;
label_512ddc:
    // 0x512ddc: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x512ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_512de0:
    // 0x512de0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x512de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_512de4:
    // 0x512de4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x512de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_512de8:
    // 0x512de8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x512de8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_512dec:
    // 0x512dec: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x512decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_512df0:
    // 0x512df0: 0xc054c2c  jal         func_1530B0
label_512df4:
    if (ctx->pc == 0x512DF4u) {
        ctx->pc = 0x512DF4u;
            // 0x512df4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x512DF8u;
        goto label_512df8;
    }
    ctx->pc = 0x512DF0u;
    SET_GPR_U32(ctx, 31, 0x512DF8u);
    ctx->pc = 0x512DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512DF0u;
            // 0x512df4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512DF8u; }
        if (ctx->pc != 0x512DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512DF8u; }
        if (ctx->pc != 0x512DF8u) { return; }
    }
    ctx->pc = 0x512DF8u;
label_512df8:
    // 0x512df8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x512df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_512dfc:
    // 0x512dfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x512dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_512e00:
    // 0x512e00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x512e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_512e04:
    // 0x512e04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x512e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_512e08:
    // 0x512e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x512e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_512e0c:
    // 0x512e0c: 0x3e00008  jr          $ra
label_512e10:
    if (ctx->pc == 0x512E10u) {
        ctx->pc = 0x512E10u;
            // 0x512e10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x512E14u;
        goto label_512e14;
    }
    ctx->pc = 0x512E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512E0Cu;
            // 0x512e10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512E14u;
label_512e14:
    // 0x512e14: 0x0  nop
    ctx->pc = 0x512e14u;
    // NOP
label_512e18:
    // 0x512e18: 0x0  nop
    ctx->pc = 0x512e18u;
    // NOP
label_512e1c:
    // 0x512e1c: 0x0  nop
    ctx->pc = 0x512e1cu;
    // NOP
label_512e20:
    // 0x512e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x512e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_512e24:
    // 0x512e24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x512e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_512e28:
    // 0x512e28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x512e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_512e2c:
    // 0x512e2c: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x512e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_512e30:
    // 0x512e30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x512e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_512e34:
    // 0x512e34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x512e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_512e38:
    // 0x512e38: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x512e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_512e3c:
    // 0x512e3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x512e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_512e40:
    // 0x512e40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x512e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_512e44:
    // 0x512e44: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x512e44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_512e48:
    // 0x512e48: 0xc0b93ac  jal         func_2E4EB0
label_512e4c:
    if (ctx->pc == 0x512E4Cu) {
        ctx->pc = 0x512E4Cu;
            // 0x512e4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512E50u;
        goto label_512e50;
    }
    ctx->pc = 0x512E48u;
    SET_GPR_U32(ctx, 31, 0x512E50u);
    ctx->pc = 0x512E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512E48u;
            // 0x512e4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4EB0u;
    if (runtime->hasFunction(0x2E4EB0u)) {
        auto targetFn = runtime->lookupFunction(0x2E4EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512E50u; }
        if (ctx->pc != 0x512E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4EB0_0x2e4eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512E50u; }
        if (ctx->pc != 0x512E50u) { return; }
    }
    ctx->pc = 0x512E50u;
label_512e50:
    // 0x512e50: 0x8e230da0  lw          $v1, 0xDA0($s1)
    ctx->pc = 0x512e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_512e54:
    // 0x512e54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x512e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_512e58:
    // 0x512e58: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_512e5c:
    if (ctx->pc == 0x512E5Cu) {
        ctx->pc = 0x512E60u;
        goto label_512e60;
    }
    ctx->pc = 0x512E58u;
    {
        const bool branch_taken_0x512e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x512e58) {
            ctx->pc = 0x512E7Cu;
            goto label_512e7c;
        }
    }
    ctx->pc = 0x512E60u;
label_512e60:
    // 0x512e60: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x512e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_512e64:
    // 0x512e64: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x512e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_512e68:
    // 0x512e68: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_512e6c:
    if (ctx->pc == 0x512E6Cu) {
        ctx->pc = 0x512E70u;
        goto label_512e70;
    }
    ctx->pc = 0x512E68u;
    {
        const bool branch_taken_0x512e68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x512e68) {
            ctx->pc = 0x512E7Cu;
            goto label_512e7c;
        }
    }
    ctx->pc = 0x512E70u;
label_512e70:
    // 0x512e70: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x512e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_512e74:
    // 0x512e74: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_512e78:
    if (ctx->pc == 0x512E78u) {
        ctx->pc = 0x512E78u;
            // 0x512e78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x512E7Cu;
        goto label_512e7c;
    }
    ctx->pc = 0x512E74u;
    {
        const bool branch_taken_0x512e74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x512e74) {
            ctx->pc = 0x512E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512E74u;
            // 0x512e78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x512E94u;
            goto label_512e94;
        }
    }
    ctx->pc = 0x512E7Cu;
label_512e7c:
    // 0x512e7c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x512e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_512e80:
    // 0x512e80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x512e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_512e84:
    // 0x512e84: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x512e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_512e88:
    // 0x512e88: 0xc057b7c  jal         func_15EDF0
label_512e8c:
    if (ctx->pc == 0x512E8Cu) {
        ctx->pc = 0x512E8Cu;
            // 0x512e8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x512E90u;
        goto label_512e90;
    }
    ctx->pc = 0x512E88u;
    SET_GPR_U32(ctx, 31, 0x512E90u);
    ctx->pc = 0x512E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512E88u;
            // 0x512e8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512E90u; }
        if (ctx->pc != 0x512E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512E90u; }
        if (ctx->pc != 0x512E90u) { return; }
    }
    ctx->pc = 0x512E90u;
label_512e90:
    // 0x512e90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x512e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_512e94:
    // 0x512e94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x512e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_512e98:
    // 0x512e98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x512e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_512e9c:
    // 0x512e9c: 0x3e00008  jr          $ra
label_512ea0:
    if (ctx->pc == 0x512EA0u) {
        ctx->pc = 0x512EA0u;
            // 0x512ea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x512EA4u;
        goto label_512ea4;
    }
    ctx->pc = 0x512E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512E9Cu;
            // 0x512ea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512EA4u;
label_512ea4:
    // 0x512ea4: 0x0  nop
    ctx->pc = 0x512ea4u;
    // NOP
label_512ea8:
    // 0x512ea8: 0x0  nop
    ctx->pc = 0x512ea8u;
    // NOP
label_512eac:
    // 0x512eac: 0x0  nop
    ctx->pc = 0x512eacu;
    // NOP
label_512eb0:
    // 0x512eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x512eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_512eb4:
    // 0x512eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x512eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_512eb8:
    // 0x512eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x512eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_512ebc:
    // 0x512ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x512ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_512ec0:
    // 0x512ec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x512ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_512ec4:
    // 0x512ec4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_512ec8:
    if (ctx->pc == 0x512EC8u) {
        ctx->pc = 0x512EC8u;
            // 0x512ec8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512ECCu;
        goto label_512ecc;
    }
    ctx->pc = 0x512EC4u;
    {
        const bool branch_taken_0x512ec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x512EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512EC4u;
            // 0x512ec8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512ec4) {
            ctx->pc = 0x512F08u;
            goto label_512f08;
        }
    }
    ctx->pc = 0x512ECCu;
label_512ecc:
    // 0x512ecc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x512eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_512ed0:
    // 0x512ed0: 0x24425530  addiu       $v0, $v0, 0x5530
    ctx->pc = 0x512ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21808));
label_512ed4:
    // 0x512ed4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_512ed8:
    if (ctx->pc == 0x512ED8u) {
        ctx->pc = 0x512ED8u;
            // 0x512ed8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x512EDCu;
        goto label_512edc;
    }
    ctx->pc = 0x512ED4u;
    {
        const bool branch_taken_0x512ed4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x512ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512ED4u;
            // 0x512ed8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512ed4) {
            ctx->pc = 0x512EF0u;
            goto label_512ef0;
        }
    }
    ctx->pc = 0x512EDCu;
label_512edc:
    // 0x512edc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x512edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_512ee0:
    // 0x512ee0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x512ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_512ee4:
    // 0x512ee4: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x512ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
label_512ee8:
    // 0x512ee8: 0xc075bf8  jal         func_1D6FE0
label_512eec:
    if (ctx->pc == 0x512EECu) {
        ctx->pc = 0x512EECu;
            // 0x512eec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x512EF0u;
        goto label_512ef0;
    }
    ctx->pc = 0x512EE8u;
    SET_GPR_U32(ctx, 31, 0x512EF0u);
    ctx->pc = 0x512EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512EE8u;
            // 0x512eec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512EF0u; }
        if (ctx->pc != 0x512EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512EF0u; }
        if (ctx->pc != 0x512EF0u) { return; }
    }
    ctx->pc = 0x512EF0u;
label_512ef0:
    // 0x512ef0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x512ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_512ef4:
    // 0x512ef4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x512ef4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_512ef8:
    // 0x512ef8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_512efc:
    if (ctx->pc == 0x512EFCu) {
        ctx->pc = 0x512EFCu;
            // 0x512efc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512F00u;
        goto label_512f00;
    }
    ctx->pc = 0x512EF8u;
    {
        const bool branch_taken_0x512ef8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x512ef8) {
            ctx->pc = 0x512EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512EF8u;
            // 0x512efc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x512F0Cu;
            goto label_512f0c;
        }
    }
    ctx->pc = 0x512F00u;
label_512f00:
    // 0x512f00: 0xc0400a8  jal         func_1002A0
label_512f04:
    if (ctx->pc == 0x512F04u) {
        ctx->pc = 0x512F04u;
            // 0x512f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512F08u;
        goto label_512f08;
    }
    ctx->pc = 0x512F00u;
    SET_GPR_U32(ctx, 31, 0x512F08u);
    ctx->pc = 0x512F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512F00u;
            // 0x512f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512F08u; }
        if (ctx->pc != 0x512F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512F08u; }
        if (ctx->pc != 0x512F08u) { return; }
    }
    ctx->pc = 0x512F08u;
label_512f08:
    // 0x512f08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x512f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_512f0c:
    // 0x512f0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x512f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_512f10:
    // 0x512f10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x512f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_512f14:
    // 0x512f14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x512f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_512f18:
    // 0x512f18: 0x3e00008  jr          $ra
label_512f1c:
    if (ctx->pc == 0x512F1Cu) {
        ctx->pc = 0x512F1Cu;
            // 0x512f1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x512F20u;
        goto label_512f20;
    }
    ctx->pc = 0x512F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512F18u;
            // 0x512f1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512F20u;
label_512f20:
    // 0x512f20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x512f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_512f24:
    // 0x512f24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x512f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_512f28:
    // 0x512f28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x512f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_512f2c:
    // 0x512f2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x512f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_512f30:
    // 0x512f30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x512f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_512f34:
    // 0x512f34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x512f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_512f38:
    // 0x512f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x512f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_512f3c:
    // 0x512f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x512f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_512f40:
    // 0x512f40: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x512f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_512f44:
    // 0x512f44: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_512f48:
    if (ctx->pc == 0x512F48u) {
        ctx->pc = 0x512F48u;
            // 0x512f48: 0xc66100a8  lwc1        $f1, 0xA8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x512F4Cu;
        goto label_512f4c;
    }
    ctx->pc = 0x512F44u;
    {
        const bool branch_taken_0x512f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x512f44) {
            ctx->pc = 0x512F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512F44u;
            // 0x512f48: 0xc66100a8  lwc1        $f1, 0xA8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x512F64u;
            goto label_512f64;
        }
    }
    ctx->pc = 0x512F4Cu;
label_512f4c:
    // 0x512f4c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x512f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_512f50:
    // 0x512f50: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x512f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_512f54:
    // 0x512f54: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x512f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_512f58:
    // 0x512f58: 0x54830053  bnel        $a0, $v1, . + 4 + (0x53 << 2)
label_512f5c:
    if (ctx->pc == 0x512F5Cu) {
        ctx->pc = 0x512F5Cu;
            // 0x512f5c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x512F60u;
        goto label_512f60;
    }
    ctx->pc = 0x512F58u;
    {
        const bool branch_taken_0x512f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x512f58) {
            ctx->pc = 0x512F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x512F58u;
            // 0x512f5c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5130A8u;
            goto label_5130a8;
        }
    }
    ctx->pc = 0x512F60u;
label_512f60:
    // 0x512f60: 0xc66100a8  lwc1        $f1, 0xA8($s3)
    ctx->pc = 0x512f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_512f64:
    // 0x512f64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x512f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_512f68:
    // 0x512f68: 0x0  nop
    ctx->pc = 0x512f68u;
    // NOP
label_512f6c:
    // 0x512f6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x512f6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_512f70:
    // 0x512f70: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
label_512f74:
    if (ctx->pc == 0x512F74u) {
        ctx->pc = 0x512F78u;
        goto label_512f78;
    }
    ctx->pc = 0x512F70u;
    {
        const bool branch_taken_0x512f70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x512f70) {
            ctx->pc = 0x5130A4u;
            goto label_5130a4;
        }
    }
    ctx->pc = 0x512F78u;
label_512f78:
    // 0x512f78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x512f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_512f7c:
    // 0x512f7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x512f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_512f80:
    // 0x512f80: 0x8c51e370  lw          $s1, -0x1C90($v0)
    ctx->pc = 0x512f80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_512f84:
    // 0x512f84: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x512f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_512f88:
    // 0x512f88: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x512f88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_512f8c:
    // 0x512f8c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x512f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_512f90:
    // 0x512f90: 0x8c45d120  lw          $a1, -0x2EE0($v0)
    ctx->pc = 0x512f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_512f94:
    // 0x512f94: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x512f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_512f98:
    // 0x512f98: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x512f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_512f9c:
    // 0x512f9c: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x512f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_512fa0:
    // 0x512fa0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x512fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_512fa4:
    // 0x512fa4: 0x8cc60130  lw          $a2, 0x130($a2)
    ctx->pc = 0x512fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_512fa8:
    // 0x512fa8: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x512fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_512fac:
    // 0x512fac: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x512facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_512fb0:
    // 0x512fb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x512fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_512fb4:
    // 0x512fb4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x512fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_512fb8:
    // 0x512fb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x512fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_512fbc:
    // 0x512fbc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x512fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_512fc0:
    // 0x512fc0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x512fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_512fc4:
    // 0x512fc4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x512fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_512fc8:
    // 0x512fc8: 0xc44c02c0  lwc1        $f12, 0x2C0($v0)
    ctx->pc = 0x512fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_512fcc:
    // 0x512fcc: 0xc44d02c4  lwc1        $f13, 0x2C4($v0)
    ctx->pc = 0x512fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_512fd0:
    // 0x512fd0: 0xc44e02c8  lwc1        $f14, 0x2C8($v0)
    ctx->pc = 0x512fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_512fd4:
    // 0x512fd4: 0xc04f3fc  jal         func_13CFF0
label_512fd8:
    if (ctx->pc == 0x512FD8u) {
        ctx->pc = 0x512FD8u;
            // 0x512fd8: 0x24700010  addiu       $s0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x512FDCu;
        goto label_512fdc;
    }
    ctx->pc = 0x512FD4u;
    SET_GPR_U32(ctx, 31, 0x512FDCu);
    ctx->pc = 0x512FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512FD4u;
            // 0x512fd8: 0x24700010  addiu       $s0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512FDCu; }
        if (ctx->pc != 0x512FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512FDCu; }
        if (ctx->pc != 0x512FDCu) { return; }
    }
    ctx->pc = 0x512FDCu;
label_512fdc:
    // 0x512fdc: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x512fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_512fe0:
    // 0x512fe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x512fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_512fe4:
    // 0x512fe4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x512fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_512fe8:
    // 0x512fe8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x512fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_512fec:
    // 0x512fec: 0xc04e4a4  jal         func_139290
label_512ff0:
    if (ctx->pc == 0x512FF0u) {
        ctx->pc = 0x512FF0u;
            // 0x512ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x512FF4u;
        goto label_512ff4;
    }
    ctx->pc = 0x512FECu;
    SET_GPR_U32(ctx, 31, 0x512FF4u);
    ctx->pc = 0x512FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512FECu;
            // 0x512ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512FF4u; }
        if (ctx->pc != 0x512FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x512FF4u; }
        if (ctx->pc != 0x512FF4u) { return; }
    }
    ctx->pc = 0x512FF4u;
label_512ff4:
    // 0x512ff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x512ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_512ff8:
    // 0x512ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x512ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_512ffc:
    // 0x512ffc: 0xc04cd60  jal         func_133580
label_513000:
    if (ctx->pc == 0x513000u) {
        ctx->pc = 0x513000u;
            // 0x513000: 0x26660060  addiu       $a2, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->pc = 0x513004u;
        goto label_513004;
    }
    ctx->pc = 0x512FFCu;
    SET_GPR_U32(ctx, 31, 0x513004u);
    ctx->pc = 0x513000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512FFCu;
            // 0x513000: 0x26660060  addiu       $a2, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513004u; }
        if (ctx->pc != 0x513004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513004u; }
        if (ctx->pc != 0x513004u) { return; }
    }
    ctx->pc = 0x513004u;
label_513004:
    // 0x513004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x513004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_513008:
    // 0x513008: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x513008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51300c:
    // 0x51300c: 0xc04cd80  jal         func_133600
label_513010:
    if (ctx->pc == 0x513010u) {
        ctx->pc = 0x513010u;
            // 0x513010: 0x266600d8  addiu       $a2, $s3, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 216));
        ctx->pc = 0x513014u;
        goto label_513014;
    }
    ctx->pc = 0x51300Cu;
    SET_GPR_U32(ctx, 31, 0x513014u);
    ctx->pc = 0x513010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51300Cu;
            // 0x513010: 0x266600d8  addiu       $a2, $s3, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513014u; }
        if (ctx->pc != 0x513014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513014u; }
        if (ctx->pc != 0x513014u) { return; }
    }
    ctx->pc = 0x513014u;
label_513014:
    // 0x513014: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x513014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_513018:
    // 0x513018: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x513018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_51301c:
    // 0x51301c: 0xc44ccdf0  lwc1        $f12, -0x3210($v0)
    ctx->pc = 0x51301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_513020:
    // 0x513020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x513020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_513024:
    // 0x513024: 0xc46dcdf4  lwc1        $f13, -0x320C($v1)
    ctx->pc = 0x513024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_513028:
    // 0x513028: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x513028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51302c:
    // 0x51302c: 0xc44ecdf8  lwc1        $f14, -0x3208($v0)
    ctx->pc = 0x51302cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_513030:
    // 0x513030: 0xc04ce50  jal         func_133940
label_513034:
    if (ctx->pc == 0x513034u) {
        ctx->pc = 0x513034u;
            // 0x513034: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513038u;
        goto label_513038;
    }
    ctx->pc = 0x513030u;
    SET_GPR_U32(ctx, 31, 0x513038u);
    ctx->pc = 0x513034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513030u;
            // 0x513034: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513038u; }
        if (ctx->pc != 0x513038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513038u; }
        if (ctx->pc != 0x513038u) { return; }
    }
    ctx->pc = 0x513038u;
label_513038:
    // 0x513038: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x513038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_51303c:
    // 0x51303c: 0xc04e738  jal         func_139CE0
label_513040:
    if (ctx->pc == 0x513040u) {
        ctx->pc = 0x513040u;
            // 0x513040: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x513044u;
        goto label_513044;
    }
    ctx->pc = 0x51303Cu;
    SET_GPR_U32(ctx, 31, 0x513044u);
    ctx->pc = 0x513040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51303Cu;
            // 0x513040: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513044u; }
        if (ctx->pc != 0x513044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513044u; }
        if (ctx->pc != 0x513044u) { return; }
    }
    ctx->pc = 0x513044u;
label_513044:
    // 0x513044: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x513044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_513048:
    // 0x513048: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x513048u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_51304c:
    // 0x51304c: 0xc66c00a0  lwc1        $f12, 0xA0($s3)
    ctx->pc = 0x51304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_513050:
    // 0x513050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x513050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_513054:
    // 0x513054: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x513054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_513058:
    // 0x513058: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x513058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51305c:
    // 0x51305c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x51305cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_513060:
    // 0x513060: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x513060u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_513064:
    // 0x513064: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x513064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_513068:
    // 0x513068: 0xc04cff4  jal         func_133FD0
label_51306c:
    if (ctx->pc == 0x51306Cu) {
        ctx->pc = 0x51306Cu;
            // 0x51306c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513070u;
        goto label_513070;
    }
    ctx->pc = 0x513068u;
    SET_GPR_U32(ctx, 31, 0x513070u);
    ctx->pc = 0x51306Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513068u;
            // 0x51306c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513070u; }
        if (ctx->pc != 0x513070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513070u; }
        if (ctx->pc != 0x513070u) { return; }
    }
    ctx->pc = 0x513070u;
label_513070:
    // 0x513070: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x513070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_513074:
    // 0x513074: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x513074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_513078:
    // 0x513078: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x513078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_51307c:
    // 0x51307c: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x51307cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_513080:
    // 0x513080: 0xc054bbc  jal         func_152EF0
label_513084:
    if (ctx->pc == 0x513084u) {
        ctx->pc = 0x513084u;
            // 0x513084: 0xc66c00a4  lwc1        $f12, 0xA4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x513088u;
        goto label_513088;
    }
    ctx->pc = 0x513080u;
    SET_GPR_U32(ctx, 31, 0x513088u);
    ctx->pc = 0x513084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513080u;
            // 0x513084: 0xc66c00a4  lwc1        $f12, 0xA4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513088u; }
        if (ctx->pc != 0x513088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513088u; }
        if (ctx->pc != 0x513088u) { return; }
    }
    ctx->pc = 0x513088u;
label_513088:
    // 0x513088: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x513088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_51308c:
    // 0x51308c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x51308cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_513090:
    // 0x513090: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x513090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_513094:
    // 0x513094: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x513094u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_513098:
    // 0x513098: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x513098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_51309c:
    // 0x51309c: 0xc054c2c  jal         func_1530B0
label_5130a0:
    if (ctx->pc == 0x5130A0u) {
        ctx->pc = 0x5130A0u;
            // 0x5130a0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x5130A4u;
        goto label_5130a4;
    }
    ctx->pc = 0x51309Cu;
    SET_GPR_U32(ctx, 31, 0x5130A4u);
    ctx->pc = 0x5130A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51309Cu;
            // 0x5130a0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5130A4u; }
        if (ctx->pc != 0x5130A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5130A4u; }
        if (ctx->pc != 0x5130A4u) { return; }
    }
    ctx->pc = 0x5130A4u;
label_5130a4:
    // 0x5130a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x5130a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_5130a8:
    // 0x5130a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5130a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5130ac:
    // 0x5130ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5130acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5130b0:
    // 0x5130b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5130b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5130b4:
    // 0x5130b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5130b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5130b8:
    // 0x5130b8: 0x3e00008  jr          $ra
label_5130bc:
    if (ctx->pc == 0x5130BCu) {
        ctx->pc = 0x5130BCu;
            // 0x5130bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x5130C0u;
        goto label_5130c0;
    }
    ctx->pc = 0x5130B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5130BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5130B8u;
            // 0x5130bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5130C0u;
label_5130c0:
    // 0x5130c0: 0x80b93ac  j           func_2E4EB0
label_5130c4:
    if (ctx->pc == 0x5130C4u) {
        ctx->pc = 0x5130C8u;
        goto label_5130c8;
    }
    ctx->pc = 0x5130C0u;
    ctx->pc = 0x2E4EB0u;
    if (runtime->hasFunction(0x2E4EB0u)) {
        auto targetFn = runtime->lookupFunction(0x2E4EB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002E4EB0_0x2e4eb0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x5130C8u;
label_5130c8:
    // 0x5130c8: 0x0  nop
    ctx->pc = 0x5130c8u;
    // NOP
label_5130cc:
    // 0x5130cc: 0x0  nop
    ctx->pc = 0x5130ccu;
    // NOP
label_5130d0:
    // 0x5130d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5130d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5130d4:
    // 0x5130d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5130d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5130d8:
    // 0x5130d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5130d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5130dc:
    // 0x5130dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5130dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5130e0:
    // 0x5130e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5130e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5130e4:
    // 0x5130e4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_5130e8:
    if (ctx->pc == 0x5130E8u) {
        ctx->pc = 0x5130E8u;
            // 0x5130e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5130ECu;
        goto label_5130ec;
    }
    ctx->pc = 0x5130E4u;
    {
        const bool branch_taken_0x5130e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5130E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5130E4u;
            // 0x5130e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5130e4) {
            ctx->pc = 0x513128u;
            goto label_513128;
        }
    }
    ctx->pc = 0x5130ECu;
label_5130ec:
    // 0x5130ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5130ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5130f0:
    // 0x5130f0: 0x24425560  addiu       $v0, $v0, 0x5560
    ctx->pc = 0x5130f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21856));
label_5130f4:
    // 0x5130f4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_5130f8:
    if (ctx->pc == 0x5130F8u) {
        ctx->pc = 0x5130F8u;
            // 0x5130f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5130FCu;
        goto label_5130fc;
    }
    ctx->pc = 0x5130F4u;
    {
        const bool branch_taken_0x5130f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5130F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5130F4u;
            // 0x5130f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5130f4) {
            ctx->pc = 0x513110u;
            goto label_513110;
        }
    }
    ctx->pc = 0x5130FCu;
label_5130fc:
    // 0x5130fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5130fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_513100:
    // 0x513100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x513100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_513104:
    // 0x513104: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x513104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_513108:
    // 0x513108: 0xc057a68  jal         func_15E9A0
label_51310c:
    if (ctx->pc == 0x51310Cu) {
        ctx->pc = 0x51310Cu;
            // 0x51310c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x513110u;
        goto label_513110;
    }
    ctx->pc = 0x513108u;
    SET_GPR_U32(ctx, 31, 0x513110u);
    ctx->pc = 0x51310Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513108u;
            // 0x51310c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513110u; }
        if (ctx->pc != 0x513110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513110u; }
        if (ctx->pc != 0x513110u) { return; }
    }
    ctx->pc = 0x513110u;
label_513110:
    // 0x513110: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x513110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_513114:
    // 0x513114: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x513114u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_513118:
    // 0x513118: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_51311c:
    if (ctx->pc == 0x51311Cu) {
        ctx->pc = 0x51311Cu;
            // 0x51311c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513120u;
        goto label_513120;
    }
    ctx->pc = 0x513118u;
    {
        const bool branch_taken_0x513118 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x513118) {
            ctx->pc = 0x51311Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x513118u;
            // 0x51311c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51312Cu;
            goto label_51312c;
        }
    }
    ctx->pc = 0x513120u;
label_513120:
    // 0x513120: 0xc0400a8  jal         func_1002A0
label_513124:
    if (ctx->pc == 0x513124u) {
        ctx->pc = 0x513124u;
            // 0x513124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513128u;
        goto label_513128;
    }
    ctx->pc = 0x513120u;
    SET_GPR_U32(ctx, 31, 0x513128u);
    ctx->pc = 0x513124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513120u;
            // 0x513124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513128u; }
        if (ctx->pc != 0x513128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513128u; }
        if (ctx->pc != 0x513128u) { return; }
    }
    ctx->pc = 0x513128u;
label_513128:
    // 0x513128: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x513128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51312c:
    // 0x51312c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51312cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_513130:
    // 0x513130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x513130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_513134:
    // 0x513134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x513134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_513138:
    // 0x513138: 0x3e00008  jr          $ra
label_51313c:
    if (ctx->pc == 0x51313Cu) {
        ctx->pc = 0x51313Cu;
            // 0x51313c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x513140u;
        goto label_513140;
    }
    ctx->pc = 0x513138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51313Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513138u;
            // 0x51313c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x513140u;
label_513140:
    // 0x513140: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x513140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_513144:
    // 0x513144: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x513144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_513148:
    // 0x513148: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x513148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_51314c:
    // 0x51314c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x51314cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_513150:
    // 0x513150: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x513150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_513154:
    // 0x513154: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x513154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_513158:
    // 0x513158: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x513158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_51315c:
    // 0x51315c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x51315cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_513160:
    // 0x513160: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x513160u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_513164:
    // 0x513164: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x513164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_513168:
    // 0x513168: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x513168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_51316c:
    // 0x51316c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x51316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_513170:
    // 0x513170: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x513170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_513174:
    // 0x513174: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x513174u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_513178:
    // 0x513178: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x513178u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_51317c:
    // 0x51317c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x51317cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_513180:
    // 0x513180: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x513180u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_513184:
    // 0x513184: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x513184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_513188:
    // 0x513188: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x513188u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_51318c:
    // 0x51318c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_513190:
    if (ctx->pc == 0x513190u) {
        ctx->pc = 0x513194u;
        goto label_513194;
    }
    ctx->pc = 0x51318Cu;
    {
        const bool branch_taken_0x51318c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x51318c) {
            ctx->pc = 0x51319Cu;
            goto label_51319c;
        }
    }
    ctx->pc = 0x513194u;
label_513194:
    // 0x513194: 0x10000114  b           . + 4 + (0x114 << 2)
label_513198:
    if (ctx->pc == 0x513198u) {
        ctx->pc = 0x513198u;
            // 0x513198: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x51319Cu;
        goto label_51319c;
    }
    ctx->pc = 0x513194u;
    {
        const bool branch_taken_0x513194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513194u;
            // 0x513198: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513194) {
            ctx->pc = 0x5135E8u;
            goto label_5135e8;
        }
    }
    ctx->pc = 0x51319Cu;
label_51319c:
    // 0x51319c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x51319cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5131a0:
    // 0x5131a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5131a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5131a4:
    // 0x5131a4: 0x8c7089f0  lw          $s0, -0x7610($v1)
    ctx->pc = 0x5131a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_5131a8:
    // 0x5131a8: 0x26a600e0  addiu       $a2, $s5, 0xE0
    ctx->pc = 0x5131a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
label_5131ac:
    // 0x5131ac: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x5131acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5131b0:
    // 0x5131b0: 0x8ebe0104  lw          $fp, 0x104($s5)
    ctx->pc = 0x5131b0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
label_5131b4:
    // 0x5131b4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x5131b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_5131b8:
    // 0x5131b8: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x5131b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_5131bc:
    // 0x5131bc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5131bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5131c0:
    // 0x5131c0: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x5131c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_5131c4:
    // 0x5131c4: 0x8c770130  lw          $s7, 0x130($v1)
    ctx->pc = 0x5131c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_5131c8:
    // 0x5131c8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x5131c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_5131cc:
    // 0x5131cc: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x5131ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_5131d0:
    // 0x5131d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5131d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5131d4:
    // 0x5131d4: 0x171140  sll         $v0, $s7, 5
    ctx->pc = 0x5131d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_5131d8:
    // 0x5131d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5131d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5131dc:
    // 0x5131dc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x5131dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_5131e0:
    // 0x5131e0: 0x24540060  addiu       $s4, $v0, 0x60
    ctx->pc = 0x5131e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_5131e4:
    // 0x5131e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x5131e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5131e8:
    // 0x5131e8: 0x24720200  addiu       $s2, $v1, 0x200
    ctx->pc = 0x5131e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_5131ec:
    // 0x5131ec: 0xc075094  jal         func_1D4250
label_5131f0:
    if (ctx->pc == 0x5131F0u) {
        ctx->pc = 0x5131F0u;
            // 0x5131f0: 0x24650150  addiu       $a1, $v1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
        ctx->pc = 0x5131F4u;
        goto label_5131f4;
    }
    ctx->pc = 0x5131ECu;
    SET_GPR_U32(ctx, 31, 0x5131F4u);
    ctx->pc = 0x5131F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5131ECu;
            // 0x5131f0: 0x24650150  addiu       $a1, $v1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5131F4u; }
        if (ctx->pc != 0x5131F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5131F4u; }
        if (ctx->pc != 0x5131F4u) { return; }
    }
    ctx->pc = 0x5131F4u;
label_5131f4:
    // 0x5131f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5131f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5131f8:
    // 0x5131f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5131f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5131fc:
    // 0x5131fc: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x5131fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_513200:
    // 0x513200: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x513200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_513204:
    // 0x513204: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x513204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_513208:
    // 0x513208: 0x320f809  jalr        $t9
label_51320c:
    if (ctx->pc == 0x51320Cu) {
        ctx->pc = 0x51320Cu;
            // 0x51320c: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513210u;
        goto label_513210;
    }
    ctx->pc = 0x513208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x513210u);
        ctx->pc = 0x51320Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513208u;
            // 0x51320c: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x513210u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x513210u; }
            if (ctx->pc != 0x513210u) { return; }
        }
        }
    }
    ctx->pc = 0x513210u;
label_513210:
    // 0x513210: 0x92830017  lbu         $v1, 0x17($s4)
    ctx->pc = 0x513210u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 23)));
label_513214:
    // 0x513214: 0x106000f3  beqz        $v1, . + 4 + (0xF3 << 2)
label_513218:
    if (ctx->pc == 0x513218u) {
        ctx->pc = 0x51321Cu;
        goto label_51321c;
    }
    ctx->pc = 0x513214u;
    {
        const bool branch_taken_0x513214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x513214) {
            ctx->pc = 0x5135E4u;
            goto label_5135e4;
        }
    }
    ctx->pc = 0x51321Cu;
label_51321c:
    // 0x51321c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51321cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_513220:
    // 0x513220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x513220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_513224:
    // 0x513224: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x513224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_513228:
    // 0x513228: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x513228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_51322c:
    // 0x51322c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51322cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_513230:
    // 0x513230: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x513230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_513234:
    // 0x513234: 0x320f809  jalr        $t9
label_513238:
    if (ctx->pc == 0x513238u) {
        ctx->pc = 0x513238u;
            // 0x513238: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x51323Cu;
        goto label_51323c;
    }
    ctx->pc = 0x513234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51323Cu);
        ctx->pc = 0x513238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513234u;
            // 0x513238: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51323Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51323Cu; }
            if (ctx->pc != 0x51323Cu) { return; }
        }
        }
    }
    ctx->pc = 0x51323Cu;
label_51323c:
    // 0x51323c: 0xc05068c  jal         func_141A30
label_513240:
    if (ctx->pc == 0x513240u) {
        ctx->pc = 0x513240u;
            // 0x513240: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513244u;
        goto label_513244;
    }
    ctx->pc = 0x51323Cu;
    SET_GPR_U32(ctx, 31, 0x513244u);
    ctx->pc = 0x513240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51323Cu;
            // 0x513240: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513244u; }
        if (ctx->pc != 0x513244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513244u; }
        if (ctx->pc != 0x513244u) { return; }
    }
    ctx->pc = 0x513244u;
label_513244:
    // 0x513244: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x513244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_513248:
    // 0x513248: 0xc0506ac  jal         func_141AB0
label_51324c:
    if (ctx->pc == 0x51324Cu) {
        ctx->pc = 0x51324Cu;
            // 0x51324c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513250u;
        goto label_513250;
    }
    ctx->pc = 0x513248u;
    SET_GPR_U32(ctx, 31, 0x513250u);
    ctx->pc = 0x51324Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513248u;
            // 0x51324c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513250u; }
        if (ctx->pc != 0x513250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513250u; }
        if (ctx->pc != 0x513250u) { return; }
    }
    ctx->pc = 0x513250u;
label_513250:
    // 0x513250: 0x86830010  lh          $v1, 0x10($s4)
    ctx->pc = 0x513250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
label_513254:
    // 0x513254: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x513254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_513258:
    // 0x513258: 0x86820012  lh          $v0, 0x12($s4)
    ctx->pc = 0x513258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
label_51325c:
    // 0x51325c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x51325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_513260:
    // 0x513260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x513260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513264:
    // 0x513264: 0x0  nop
    ctx->pc = 0x513264u;
    // NOP
label_513268:
    // 0x513268: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x513268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_51326c:
    // 0x51326c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51326cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513270:
    // 0x513270: 0xc04f3fc  jal         func_13CFF0
label_513274:
    if (ctx->pc == 0x513274u) {
        ctx->pc = 0x513274u;
            // 0x513274: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x513278u;
        goto label_513278;
    }
    ctx->pc = 0x513270u;
    SET_GPR_U32(ctx, 31, 0x513278u);
    ctx->pc = 0x513274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513270u;
            // 0x513274: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513278u; }
        if (ctx->pc != 0x513278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513278u; }
        if (ctx->pc != 0x513278u) { return; }
    }
    ctx->pc = 0x513278u;
label_513278:
    // 0x513278: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x513278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51327c:
    // 0x51327c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x51327cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_513280:
    // 0x513280: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x513280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_513284:
    // 0x513284: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x513284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_513288:
    // 0x513288: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x513288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_51328c:
    // 0x51328c: 0xc04cdf0  jal         func_1337C0
label_513290:
    if (ctx->pc == 0x513290u) {
        ctx->pc = 0x513290u;
            // 0x513290: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x513294u;
        goto label_513294;
    }
    ctx->pc = 0x51328Cu;
    SET_GPR_U32(ctx, 31, 0x513294u);
    ctx->pc = 0x513290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51328Cu;
            // 0x513290: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513294u; }
        if (ctx->pc != 0x513294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513294u; }
        if (ctx->pc != 0x513294u) { return; }
    }
    ctx->pc = 0x513294u;
label_513294:
    // 0x513294: 0x96900014  lhu         $s0, 0x14($s4)
    ctx->pc = 0x513294u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_513298:
    // 0x513298: 0x26a400e0  addiu       $a0, $s5, 0xE0
    ctx->pc = 0x513298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
label_51329c:
    // 0x51329c: 0xc04cc1c  jal         func_133070
label_5132a0:
    if (ctx->pc == 0x5132A0u) {
        ctx->pc = 0x5132A0u;
            // 0x5132a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5132A4u;
        goto label_5132a4;
    }
    ctx->pc = 0x51329Cu;
    SET_GPR_U32(ctx, 31, 0x5132A4u);
    ctx->pc = 0x5132A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51329Cu;
            // 0x5132a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5132A4u; }
        if (ctx->pc != 0x5132A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5132A4u; }
        if (ctx->pc != 0x5132A4u) { return; }
    }
    ctx->pc = 0x5132A4u;
label_5132a4:
    // 0x5132a4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x5132a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_5132a8:
    // 0x5132a8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x5132a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_5132ac:
    // 0x5132ac: 0x92830016  lbu         $v1, 0x16($s4)
    ctx->pc = 0x5132acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 22)));
label_5132b0:
    // 0x5132b0: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x5132b0u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
label_5132b4:
    // 0x5132b4: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x5132b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_5132b8:
    // 0x5132b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x5132b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5132bc:
    // 0x5132bc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x5132bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_5132c0:
    // 0x5132c0: 0x320f809  jalr        $t9
label_5132c4:
    if (ctx->pc == 0x5132C4u) {
        ctx->pc = 0x5132C4u;
            // 0x5132c4: 0x629825  or          $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x5132C8u;
        goto label_5132c8;
    }
    ctx->pc = 0x5132C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5132C8u);
        ctx->pc = 0x5132C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5132C0u;
            // 0x5132c4: 0x629825  or          $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5132C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5132C8u; }
            if (ctx->pc != 0x5132C8u) { return; }
        }
        }
    }
    ctx->pc = 0x5132C8u;
label_5132c8:
    // 0x5132c8: 0x101023  negu        $v0, $s0
    ctx->pc = 0x5132c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_5132cc:
    // 0x5132cc: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x5132ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_5132d0:
    // 0x5132d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5132d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5132d4:
    // 0x5132d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x5132d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5132d8:
    // 0x5132d8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x5132d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_5132dc:
    // 0x5132dc: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x5132dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_5132e0:
    // 0x5132e0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x5132e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_5132e4:
    // 0x5132e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5132e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5132e8:
    // 0x5132e8: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x5132e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_5132ec:
    // 0x5132ec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x5132ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5132f0:
    // 0x5132f0: 0x0  nop
    ctx->pc = 0x5132f0u;
    // NOP
label_5132f4:
    // 0x5132f4: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x5132f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_5132f8:
    // 0x5132f8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x5132f8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
label_5132fc:
    // 0x5132fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x5132fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_513300:
    // 0x513300: 0x320f809  jalr        $t9
label_513304:
    if (ctx->pc == 0x513304u) {
        ctx->pc = 0x513304u;
            // 0x513304: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x513308u;
        goto label_513308;
    }
    ctx->pc = 0x513300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x513308u);
        ctx->pc = 0x513304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513300u;
            // 0x513304: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x513308u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x513308u; }
            if (ctx->pc != 0x513308u) { return; }
        }
        }
    }
    ctx->pc = 0x513308u;
label_513308:
    // 0x513308: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x513308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_51330c:
    // 0x51330c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x51330cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_513310:
    // 0x513310: 0x320f809  jalr        $t9
label_513314:
    if (ctx->pc == 0x513314u) {
        ctx->pc = 0x513314u;
            // 0x513314: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x513318u;
        goto label_513318;
    }
    ctx->pc = 0x513310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x513318u);
        ctx->pc = 0x513314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513310u;
            // 0x513314: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x513318u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x513318u; }
            if (ctx->pc != 0x513318u) { return; }
        }
        }
    }
    ctx->pc = 0x513318u;
label_513318:
    // 0x513318: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x513318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51331c:
    // 0x51331c: 0xc04cc1c  jal         func_133070
label_513320:
    if (ctx->pc == 0x513320u) {
        ctx->pc = 0x513320u;
            // 0x513320: 0x26a400e0  addiu       $a0, $s5, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
        ctx->pc = 0x513324u;
        goto label_513324;
    }
    ctx->pc = 0x51331Cu;
    SET_GPR_U32(ctx, 31, 0x513324u);
    ctx->pc = 0x513320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51331Cu;
            // 0x513320: 0x26a400e0  addiu       $a0, $s5, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513324u; }
        if (ctx->pc != 0x513324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513324u; }
        if (ctx->pc != 0x513324u) { return; }
    }
    ctx->pc = 0x513324u;
label_513324:
    // 0x513324: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x513324u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_513328:
    // 0x513328: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x513328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51332c:
    // 0x51332c: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x51332cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_513330:
    // 0x513330: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x513330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_513334:
    // 0x513334: 0xe440ce00  swc1        $f0, -0x3200($v0)
    ctx->pc = 0x513334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954496), bits); }
label_513338:
    // 0x513338: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x513338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51333c:
    // 0x51333c: 0xc04cc14  jal         func_133050
label_513340:
    if (ctx->pc == 0x513340u) {
        ctx->pc = 0x513340u;
            // 0x513340: 0x2652bdf0  addiu       $s2, $s2, -0x4210 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950384));
        ctx->pc = 0x513344u;
        goto label_513344;
    }
    ctx->pc = 0x51333Cu;
    SET_GPR_U32(ctx, 31, 0x513344u);
    ctx->pc = 0x513340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51333Cu;
            // 0x513340: 0x2652bdf0  addiu       $s2, $s2, -0x4210 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513344u; }
        if (ctx->pc != 0x513344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513344u; }
        if (ctx->pc != 0x513344u) { return; }
    }
    ctx->pc = 0x513344u;
label_513344:
    // 0x513344: 0x96820014  lhu         $v0, 0x14($s4)
    ctx->pc = 0x513344u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_513348:
    // 0x513348: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_51334c:
    if (ctx->pc == 0x51334Cu) {
        ctx->pc = 0x51334Cu;
            // 0x51334c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x513350u;
        goto label_513350;
    }
    ctx->pc = 0x513348u;
    {
        const bool branch_taken_0x513348 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x513348) {
            ctx->pc = 0x51334Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x513348u;
            // 0x51334c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51335Cu;
            goto label_51335c;
        }
    }
    ctx->pc = 0x513350u;
label_513350:
    // 0x513350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x513350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_513354:
    // 0x513354: 0x10000007  b           . + 4 + (0x7 << 2)
label_513358:
    if (ctx->pc == 0x513358u) {
        ctx->pc = 0x513358u;
            // 0x513358: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x51335Cu;
        goto label_51335c;
    }
    ctx->pc = 0x513354u;
    {
        const bool branch_taken_0x513354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513354u;
            // 0x513358: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x513354) {
            ctx->pc = 0x513374u;
            goto label_513374;
        }
    }
    ctx->pc = 0x51335Cu;
label_51335c:
    // 0x51335c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x51335cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_513360:
    // 0x513360: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x513360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_513364:
    // 0x513364: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x513364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_513368:
    // 0x513368: 0x0  nop
    ctx->pc = 0x513368u;
    // NOP
label_51336c:
    // 0x51336c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x51336cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_513370:
    // 0x513370: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x513370u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_513374:
    // 0x513374: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x513374u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_513378:
    // 0x513378: 0x86960010  lh          $s6, 0x10($s4)
    ctx->pc = 0x513378u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
label_51337c:
    // 0x51337c: 0x86a300f8  lh          $v1, 0xF8($s5)
    ctx->pc = 0x51337cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 248)));
label_513380:
    // 0x513380: 0x86900012  lh          $s0, 0x12($s4)
    ctx->pc = 0x513380u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
label_513384:
    // 0x513384: 0x86a200fa  lh          $v0, 0xFA($s5)
    ctx->pc = 0x513384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 250)));
label_513388:
    // 0x513388: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x513388u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_51338c:
    // 0x51338c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x51338cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513390:
    // 0x513390: 0x0  nop
    ctx->pc = 0x513390u;
    // NOP
label_513394:
    // 0x513394: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x513394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_513398:
    // 0x513398: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x513398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_51339c:
    // 0x51339c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51339cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5133a0:
    // 0x5133a0: 0xc077318  jal         func_1DCC60
label_5133a4:
    if (ctx->pc == 0x5133A4u) {
        ctx->pc = 0x5133A4u;
            // 0x5133a4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5133A8u;
        goto label_5133a8;
    }
    ctx->pc = 0x5133A0u;
    SET_GPR_U32(ctx, 31, 0x5133A8u);
    ctx->pc = 0x5133A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5133A0u;
            // 0x5133a4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5133A8u; }
        if (ctx->pc != 0x5133A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5133A8u; }
        if (ctx->pc != 0x5133A8u) { return; }
    }
    ctx->pc = 0x5133A8u;
label_5133a8:
    // 0x5133a8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x5133a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_5133ac:
    // 0x5133ac: 0xc0d1060  jal         func_344180
label_5133b0:
    if (ctx->pc == 0x5133B0u) {
        ctx->pc = 0x5133B0u;
            // 0x5133b0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5133B4u;
        goto label_5133b4;
    }
    ctx->pc = 0x5133ACu;
    SET_GPR_U32(ctx, 31, 0x5133B4u);
    ctx->pc = 0x5133B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5133ACu;
            // 0x5133b0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x344180u;
    if (runtime->hasFunction(0x344180u)) {
        auto targetFn = runtime->lookupFunction(0x344180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5133B4u; }
        if (ctx->pc != 0x5133B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00344180_0x344180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5133B4u; }
        if (ctx->pc != 0x5133B4u) { return; }
    }
    ctx->pc = 0x5133B4u;
label_5133b4:
    // 0x5133b4: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x5133b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_5133b8:
    // 0x5133b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5133b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5133bc:
    // 0x5133bc: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_5133c0:
    if (ctx->pc == 0x5133C0u) {
        ctx->pc = 0x5133C0u;
            // 0x5133c0: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->pc = 0x5133C4u;
        goto label_5133c4;
    }
    ctx->pc = 0x5133BCu;
    {
        const bool branch_taken_0x5133bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x5133bc) {
            ctx->pc = 0x5133C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5133BCu;
            // 0x5133c0: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5133F8u;
            goto label_5133f8;
        }
    }
    ctx->pc = 0x5133C4u;
label_5133c4:
    // 0x5133c4: 0x56e00006  bnel        $s7, $zero, . + 4 + (0x6 << 2)
label_5133c8:
    if (ctx->pc == 0x5133C8u) {
        ctx->pc = 0x5133C8u;
            // 0x5133c8: 0x86a300fa  lh          $v1, 0xFA($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 250)));
        ctx->pc = 0x5133CCu;
        goto label_5133cc;
    }
    ctx->pc = 0x5133C4u;
    {
        const bool branch_taken_0x5133c4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x5133c4) {
            ctx->pc = 0x5133C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5133C4u;
            // 0x5133c8: 0x86a300fa  lh          $v1, 0xFA($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 250)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5133E0u;
            goto label_5133e0;
        }
    }
    ctx->pc = 0x5133CCu;
label_5133cc:
    // 0x5133cc: 0x86a200fe  lh          $v0, 0xFE($s5)
    ctx->pc = 0x5133ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 254)));
label_5133d0:
    // 0x5133d0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x5133d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_5133d4:
    // 0x5133d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5133d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5133d8:
    // 0x5133d8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_5133dc:
    if (ctx->pc == 0x5133DCu) {
        ctx->pc = 0x5133DCu;
            // 0x5133dc: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5133E0u;
        goto label_5133e0;
    }
    ctx->pc = 0x5133D8u;
    {
        const bool branch_taken_0x5133d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5133DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5133D8u;
            // 0x5133dc: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5133d8) {
            ctx->pc = 0x5134D8u;
            goto label_5134d8;
        }
    }
    ctx->pc = 0x5133E0u;
label_5133e0:
    // 0x5133e0: 0x86a200fe  lh          $v0, 0xFE($s5)
    ctx->pc = 0x5133e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 254)));
label_5133e4:
    // 0x5133e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x5133e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5133e8:
    // 0x5133e8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x5133e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_5133ec:
    // 0x5133ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5133ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5133f0:
    // 0x5133f0: 0x10000039  b           . + 4 + (0x39 << 2)
label_5133f4:
    if (ctx->pc == 0x5133F4u) {
        ctx->pc = 0x5133F4u;
            // 0x5133f4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5133F8u;
        goto label_5133f8;
    }
    ctx->pc = 0x5133F0u;
    {
        const bool branch_taken_0x5133f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5133F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5133F0u;
            // 0x5133f4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5133f0) {
            ctx->pc = 0x5134D8u;
            goto label_5134d8;
        }
    }
    ctx->pc = 0x5133F8u;
label_5133f8:
    // 0x5133f8: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_5133fc:
    if (ctx->pc == 0x5133FCu) {
        ctx->pc = 0x5133FCu;
            // 0x5133fc: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x513400u;
        goto label_513400;
    }
    ctx->pc = 0x5133F8u;
    {
        const bool branch_taken_0x5133f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5133f8) {
            ctx->pc = 0x5133FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5133F8u;
            // 0x5133fc: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5134DCu;
            goto label_5134dc;
        }
    }
    ctx->pc = 0x513400u;
label_513400:
    // 0x513400: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x513400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_513404:
    // 0x513404: 0x52e20028  beql        $s7, $v0, . + 4 + (0x28 << 2)
label_513408:
    if (ctx->pc == 0x513408u) {
        ctx->pc = 0x513408u;
            // 0x513408: 0x86a500f8  lh          $a1, 0xF8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 248)));
        ctx->pc = 0x51340Cu;
        goto label_51340c;
    }
    ctx->pc = 0x513404u;
    {
        const bool branch_taken_0x513404 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x513404) {
            ctx->pc = 0x513408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x513404u;
            // 0x513408: 0x86a500f8  lh          $a1, 0xF8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5134A8u;
            goto label_5134a8;
        }
    }
    ctx->pc = 0x51340Cu;
label_51340c:
    // 0x51340c: 0x52e3001b  beql        $s7, $v1, . + 4 + (0x1B << 2)
label_513410:
    if (ctx->pc == 0x513410u) {
        ctx->pc = 0x513410u;
            // 0x513410: 0x86a400fc  lh          $a0, 0xFC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 252)));
        ctx->pc = 0x513414u;
        goto label_513414;
    }
    ctx->pc = 0x51340Cu;
    {
        const bool branch_taken_0x51340c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        if (branch_taken_0x51340c) {
            ctx->pc = 0x513410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51340Cu;
            // 0x513410: 0x86a400fc  lh          $a0, 0xFC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51347Cu;
            goto label_51347c;
        }
    }
    ctx->pc = 0x513414u;
label_513414:
    // 0x513414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x513414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_513418:
    // 0x513418: 0x52e2000d  beql        $s7, $v0, . + 4 + (0xD << 2)
label_51341c:
    if (ctx->pc == 0x51341Cu) {
        ctx->pc = 0x51341Cu;
            // 0x51341c: 0x86a400f8  lh          $a0, 0xF8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 248)));
        ctx->pc = 0x513420u;
        goto label_513420;
    }
    ctx->pc = 0x513418u;
    {
        const bool branch_taken_0x513418 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x513418) {
            ctx->pc = 0x51341Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x513418u;
            // 0x51341c: 0x86a400f8  lh          $a0, 0xF8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x513450u;
            goto label_513450;
        }
    }
    ctx->pc = 0x513420u;
label_513420:
    // 0x513420: 0x52e00003  beql        $s7, $zero, . + 4 + (0x3 << 2)
label_513424:
    if (ctx->pc == 0x513424u) {
        ctx->pc = 0x513424u;
            // 0x513424: 0x86a300fc  lh          $v1, 0xFC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 252)));
        ctx->pc = 0x513428u;
        goto label_513428;
    }
    ctx->pc = 0x513420u;
    {
        const bool branch_taken_0x513420 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x513420) {
            ctx->pc = 0x513424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x513420u;
            // 0x513424: 0x86a300fc  lh          $v1, 0xFC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x513430u;
            goto label_513430;
        }
    }
    ctx->pc = 0x513428u;
label_513428:
    // 0x513428: 0x1000002b  b           . + 4 + (0x2B << 2)
label_51342c:
    if (ctx->pc == 0x51342Cu) {
        ctx->pc = 0x513430u;
        goto label_513430;
    }
    ctx->pc = 0x513428u;
    {
        const bool branch_taken_0x513428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513428) {
            ctx->pc = 0x5134D8u;
            goto label_5134d8;
        }
    }
    ctx->pc = 0x513430u;
label_513430:
    // 0x513430: 0x86a200fe  lh          $v0, 0xFE($s5)
    ctx->pc = 0x513430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 254)));
label_513434:
    // 0x513434: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x513434u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_513438:
    // 0x513438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x513438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51343c:
    // 0x51343c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x51343cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_513440:
    // 0x513440: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x513440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_513444:
    // 0x513444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x513444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513448:
    // 0x513448: 0x10000023  b           . + 4 + (0x23 << 2)
label_51344c:
    if (ctx->pc == 0x51344Cu) {
        ctx->pc = 0x51344Cu;
            // 0x51344c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x513450u;
        goto label_513450;
    }
    ctx->pc = 0x513448u;
    {
        const bool branch_taken_0x513448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51344Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513448u;
            // 0x51344c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x513448) {
            ctx->pc = 0x5134D8u;
            goto label_5134d8;
        }
    }
    ctx->pc = 0x513450u;
label_513450:
    // 0x513450: 0x86a300fc  lh          $v1, 0xFC($s5)
    ctx->pc = 0x513450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 252)));
label_513454:
    // 0x513454: 0x86a200fe  lh          $v0, 0xFE($s5)
    ctx->pc = 0x513454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 254)));
label_513458:
    // 0x513458: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x513458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_51345c:
    // 0x51345c: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x51345cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_513460:
    // 0x513460: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x513460u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_513464:
    // 0x513464: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x513464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513468:
    // 0x513468: 0x0  nop
    ctx->pc = 0x513468u;
    // NOP
label_51346c:
    // 0x51346c: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x51346cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_513470:
    // 0x513470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x513470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513474:
    // 0x513474: 0x10000018  b           . + 4 + (0x18 << 2)
label_513478:
    if (ctx->pc == 0x513478u) {
        ctx->pc = 0x513478u;
            // 0x513478: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x51347Cu;
        goto label_51347c;
    }
    ctx->pc = 0x513474u;
    {
        const bool branch_taken_0x513474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513474u;
            // 0x513478: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x513474) {
            ctx->pc = 0x5134D8u;
            goto label_5134d8;
        }
    }
    ctx->pc = 0x51347Cu;
label_51347c:
    // 0x51347c: 0x86a300fa  lh          $v1, 0xFA($s5)
    ctx->pc = 0x51347cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 250)));
label_513480:
    // 0x513480: 0x86a200fe  lh          $v0, 0xFE($s5)
    ctx->pc = 0x513480u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 254)));
label_513484:
    // 0x513484: 0x962023  subu        $a0, $a0, $s6
    ctx->pc = 0x513484u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_513488:
    // 0x513488: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x513488u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51348c:
    // 0x51348c: 0x0  nop
    ctx->pc = 0x51348cu;
    // NOP
label_513490:
    // 0x513490: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x513490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_513494:
    // 0x513494: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x513494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_513498:
    // 0x513498: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x513498u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_51349c:
    // 0x51349c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51349cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5134a0:
    // 0x5134a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_5134a4:
    if (ctx->pc == 0x5134A4u) {
        ctx->pc = 0x5134A4u;
            // 0x5134a4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5134A8u;
        goto label_5134a8;
    }
    ctx->pc = 0x5134A0u;
    {
        const bool branch_taken_0x5134a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5134A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5134A0u;
            // 0x5134a4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5134a0) {
            ctx->pc = 0x5134D8u;
            goto label_5134d8;
        }
    }
    ctx->pc = 0x5134A8u;
label_5134a8:
    // 0x5134a8: 0x86a400fc  lh          $a0, 0xFC($s5)
    ctx->pc = 0x5134a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 252)));
label_5134ac:
    // 0x5134ac: 0x86a300fa  lh          $v1, 0xFA($s5)
    ctx->pc = 0x5134acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 250)));
label_5134b0:
    // 0x5134b0: 0x86a200fe  lh          $v0, 0xFE($s5)
    ctx->pc = 0x5134b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 254)));
label_5134b4:
    // 0x5134b4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x5134b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_5134b8:
    // 0x5134b8: 0x962023  subu        $a0, $a0, $s6
    ctx->pc = 0x5134b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_5134bc:
    // 0x5134bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x5134bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5134c0:
    // 0x5134c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x5134c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5134c4:
    // 0x5134c4: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x5134c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_5134c8:
    // 0x5134c8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x5134c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_5134cc:
    // 0x5134cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5134ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5134d0:
    // 0x5134d0: 0x0  nop
    ctx->pc = 0x5134d0u;
    // NOP
label_5134d4:
    // 0x5134d4: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x5134d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_5134d8:
    // 0x5134d8: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x5134d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5134dc:
    // 0x5134dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x5134dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_5134e0:
    // 0x5134e0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x5134e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_5134e4:
    // 0x5134e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5134e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5134e8:
    // 0x5134e8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x5134e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_5134ec:
    // 0x5134ec: 0x92820019  lbu         $v0, 0x19($s4)
    ctx->pc = 0x5134ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 25)));
label_5134f0:
    // 0x5134f0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x5134f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5134f4:
    // 0x5134f4: 0x2484bdf0  addiu       $a0, $a0, -0x4210
    ctx->pc = 0x5134f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950384));
label_5134f8:
    // 0x5134f8: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x5134f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_5134fc:
    // 0x5134fc: 0x2623023  subu        $a2, $s3, $v0
    ctx->pc = 0x5134fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_513500:
    // 0x513500: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x513500u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_513504:
    // 0x513504: 0x92820016  lbu         $v0, 0x16($s4)
    ctx->pc = 0x513504u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 22)));
label_513508:
    // 0x513508: 0x4601b602  mul.s       $f24, $f22, $f1
    ctx->pc = 0x513508u;
    ctx->f[24] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_51350c:
    // 0x51350c: 0x461805c2  mul.s       $f23, $f0, $f24
    ctx->pc = 0x51350cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_513510:
    // 0x513510: 0x3010  mfhi        $a2
    ctx->pc = 0x513510u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_513514:
    // 0x513514: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x513514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_513518:
    // 0x513518: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x513518u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_51351c:
    // 0x51351c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x51351cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_513520:
    // 0x513520: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x513520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_513524:
    // 0x513524: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x513524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_513528:
    // 0x513528: 0x12a50005  beq         $s5, $a1, . + 4 + (0x5 << 2)
label_51352c:
    if (ctx->pc == 0x51352Cu) {
        ctx->pc = 0x51352Cu;
            // 0x51352c: 0x43b825  or          $s7, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x513530u;
        goto label_513530;
    }
    ctx->pc = 0x513528u;
    {
        const bool branch_taken_0x513528 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 5));
        ctx->pc = 0x51352Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513528u;
            // 0x51352c: 0x43b825  or          $s7, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513528) {
            ctx->pc = 0x513540u;
            goto label_513540;
        }
    }
    ctx->pc = 0x513530u;
label_513530:
    // 0x513530: 0xc0506ac  jal         func_141AB0
label_513534:
    if (ctx->pc == 0x513534u) {
        ctx->pc = 0x513534u;
            // 0x513534: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513538u;
        goto label_513538;
    }
    ctx->pc = 0x513530u;
    SET_GPR_U32(ctx, 31, 0x513538u);
    ctx->pc = 0x513534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513530u;
            // 0x513534: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513538u; }
        if (ctx->pc != 0x513538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513538u; }
        if (ctx->pc != 0x513538u) { return; }
    }
    ctx->pc = 0x513538u;
label_513538:
    // 0x513538: 0x8e55000c  lw          $s5, 0xC($s2)
    ctx->pc = 0x513538u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_51353c:
    // 0x51353c: 0x0  nop
    ctx->pc = 0x51353cu;
    // NOP
label_513540:
    // 0x513540: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x513540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_513544:
    // 0x513544: 0x4600c024  .word       0x4600C024                   # cvt.w.s     $f0, $f24 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x513544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[24]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_513548:
    // 0x513548: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x513548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_51354c:
    // 0x51354c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x51354cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_513550:
    // 0x513550: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x513550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_513554:
    // 0x513554: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x513554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_513558:
    // 0x513558: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x513558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51355c:
    // 0x51355c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x51355cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_513560:
    // 0x513560: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x513560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_513564:
    // 0x513564: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x513564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_513568:
    // 0x513568: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x513568u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_51356c:
    // 0x51356c: 0x4601a802  mul.s       $f0, $f21, $f1
    ctx->pc = 0x51356cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_513570:
    // 0x513570: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x513570u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_513574:
    // 0x513574: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x513574u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_513578:
    // 0x513578: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x513578u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_51357c:
    // 0x51357c: 0x0  nop
    ctx->pc = 0x51357cu;
    // NOP
label_513580:
    // 0x513580: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x513580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_513584:
    // 0x513584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x513584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513588:
    // 0x513588: 0x0  nop
    ctx->pc = 0x513588u;
    // NOP
label_51358c:
    // 0x51358c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x51358cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_513590:
    // 0x513590: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x513590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_513594:
    // 0x513594: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x513594u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_513598:
    // 0x513598: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x513598u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_51359c:
    // 0x51359c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x51359cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_5135a0:
    // 0x5135a0: 0x0  nop
    ctx->pc = 0x5135a0u;
    // NOP
label_5135a4:
    // 0x5135a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x5135a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_5135a8:
    // 0x5135a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5135a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5135ac:
    // 0x5135ac: 0xc0f10b4  jal         func_3C42D0
label_5135b0:
    if (ctx->pc == 0x5135B0u) {
        ctx->pc = 0x5135B0u;
            // 0x5135b0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5135B4u;
        goto label_5135b4;
    }
    ctx->pc = 0x5135ACu;
    SET_GPR_U32(ctx, 31, 0x5135B4u);
    ctx->pc = 0x5135B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5135ACu;
            // 0x5135b0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C42D0u;
    if (runtime->hasFunction(0x3C42D0u)) {
        auto targetFn = runtime->lookupFunction(0x3C42D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5135B4u; }
        if (ctx->pc != 0x5135B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C42D0_0x3c42d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5135B4u; }
        if (ctx->pc != 0x5135B4u) { return; }
    }
    ctx->pc = 0x5135B4u;
label_5135b4:
    // 0x5135b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x5135b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_5135b8:
    // 0x5135b8: 0x2e62000a  sltiu       $v0, $s3, 0xA
    ctx->pc = 0x5135b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_5135bc:
    // 0x5135bc: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
label_5135c0:
    if (ctx->pc == 0x5135C0u) {
        ctx->pc = 0x5135C0u;
            // 0x5135c0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x5135C4u;
        goto label_5135c4;
    }
    ctx->pc = 0x5135BCu;
    {
        const bool branch_taken_0x5135bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5135C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5135BCu;
            // 0x5135c0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5135bc) {
            ctx->pc = 0x5134DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5134dc;
        }
    }
    ctx->pc = 0x5135C4u;
label_5135c4:
    // 0x5135c4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x5135c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_5135c8:
    // 0x5135c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x5135c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5135cc:
    // 0x5135cc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x5135ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5135d0:
    // 0x5135d0: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x5135d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_5135d4:
    // 0x5135d4: 0x320f809  jalr        $t9
label_5135d8:
    if (ctx->pc == 0x5135D8u) {
        ctx->pc = 0x5135DCu;
        goto label_5135dc;
    }
    ctx->pc = 0x5135D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5135DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5135DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5135DCu; }
            if (ctx->pc != 0x5135DCu) { return; }
        }
        }
    }
    ctx->pc = 0x5135DCu;
label_5135dc:
    // 0x5135dc: 0xc05068c  jal         func_141A30
label_5135e0:
    if (ctx->pc == 0x5135E0u) {
        ctx->pc = 0x5135E0u;
            // 0x5135e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5135E4u;
        goto label_5135e4;
    }
    ctx->pc = 0x5135DCu;
    SET_GPR_U32(ctx, 31, 0x5135E4u);
    ctx->pc = 0x5135E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5135DCu;
            // 0x5135e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5135E4u; }
        if (ctx->pc != 0x5135E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5135E4u; }
        if (ctx->pc != 0x5135E4u) { return; }
    }
    ctx->pc = 0x5135E4u;
label_5135e4:
    // 0x5135e4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x5135e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_5135e8:
    // 0x5135e8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x5135e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_5135ec:
    // 0x5135ec: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x5135ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_5135f0:
    // 0x5135f0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x5135f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_5135f4:
    // 0x5135f4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x5135f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_5135f8:
    // 0x5135f8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x5135f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_5135fc:
    // 0x5135fc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x5135fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_513600:
    // 0x513600: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x513600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_513604:
    // 0x513604: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x513604u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_513608:
    // 0x513608: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x513608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_51360c:
    // 0x51360c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x51360cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_513610:
    // 0x513610: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x513610u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_513614:
    // 0x513614: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x513614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_513618:
    // 0x513618: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x513618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51361c:
    // 0x51361c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x51361cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_513620:
    // 0x513620: 0x3e00008  jr          $ra
label_513624:
    if (ctx->pc == 0x513624u) {
        ctx->pc = 0x513624u;
            // 0x513624: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x513628u;
        goto label_513628;
    }
    ctx->pc = 0x513620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513620u;
            // 0x513624: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x513628u;
label_513628:
    // 0x513628: 0x0  nop
    ctx->pc = 0x513628u;
    // NOP
label_51362c:
    // 0x51362c: 0x0  nop
    ctx->pc = 0x51362cu;
    // NOP
label_513630:
    // 0x513630: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x513630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_513634:
    // 0x513634: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x513634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_513638:
    // 0x513638: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x513638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_51363c:
    // 0x51363c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x51363cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_513640:
    // 0x513640: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x513640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_513644:
    // 0x513644: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x513644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_513648:
    // 0x513648: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x513648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_51364c:
    // 0x51364c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x51364cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_513650:
    // 0x513650: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x513650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_513654:
    // 0x513654: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x513654u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_513658:
    // 0x513658: 0x10c30010  beq         $a2, $v1, . + 4 + (0x10 << 2)
label_51365c:
    if (ctx->pc == 0x51365Cu) {
        ctx->pc = 0x51365Cu;
            // 0x51365c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513660u;
        goto label_513660;
    }
    ctx->pc = 0x513658u;
    {
        const bool branch_taken_0x513658 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x51365Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513658u;
            // 0x51365c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513658) {
            ctx->pc = 0x51369Cu;
            goto label_51369c;
        }
    }
    ctx->pc = 0x513660u;
label_513660:
    // 0x513660: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x513660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_513664:
    // 0x513664: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
label_513668:
    if (ctx->pc == 0x513668u) {
        ctx->pc = 0x51366Cu;
        goto label_51366c;
    }
    ctx->pc = 0x513664u;
    {
        const bool branch_taken_0x513664 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x513664) {
            ctx->pc = 0x513674u;
            goto label_513674;
        }
    }
    ctx->pc = 0x51366Cu;
label_51366c:
    // 0x51366c: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_513670:
    if (ctx->pc == 0x513670u) {
        ctx->pc = 0x513674u;
        goto label_513674;
    }
    ctx->pc = 0x51366Cu;
    {
        const bool branch_taken_0x51366c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51366c) {
            ctx->pc = 0x5138F0u;
            goto label_5138f0;
        }
    }
    ctx->pc = 0x513674u;
label_513674:
    // 0x513674: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x513674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_513678:
    // 0x513678: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x513678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51367c:
    // 0x51367c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x51367cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_513680:
    // 0x513680: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x513680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_513684:
    // 0x513684: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x513684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_513688:
    // 0x513688: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x513688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_51368c:
    // 0x51368c: 0x320f809  jalr        $t9
label_513690:
    if (ctx->pc == 0x513690u) {
        ctx->pc = 0x513690u;
            // 0x513690: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x513694u;
        goto label_513694;
    }
    ctx->pc = 0x51368Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x513694u);
        ctx->pc = 0x513690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51368Cu;
            // 0x513690: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x513694u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x513694u; }
            if (ctx->pc != 0x513694u) { return; }
        }
        }
    }
    ctx->pc = 0x513694u;
label_513694:
    // 0x513694: 0x10000096  b           . + 4 + (0x96 << 2)
label_513698:
    if (ctx->pc == 0x513698u) {
        ctx->pc = 0x51369Cu;
        goto label_51369c;
    }
    ctx->pc = 0x513694u;
    {
        const bool branch_taken_0x513694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513694) {
            ctx->pc = 0x5138F0u;
            goto label_5138f0;
        }
    }
    ctx->pc = 0x51369Cu;
label_51369c:
    // 0x51369c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x51369cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_5136a0:
    // 0x5136a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5136a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5136a4:
    // 0x5136a4: 0xc474c060  lwc1        $f20, -0x3FA0($v1)
    ctx->pc = 0x5136a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5136a8:
    // 0x5136a8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5136a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5136ac:
    // 0x5136ac: 0x8c6689d0  lw          $a2, -0x7630($v1)
    ctx->pc = 0x5136acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_5136b0:
    // 0x5136b0: 0x8cc60084  lw          $a2, 0x84($a2)
    ctx->pc = 0x5136b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_5136b4:
    // 0x5136b4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x5136b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_5136b8:
    // 0x5136b8: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
label_5136bc:
    if (ctx->pc == 0x5136BCu) {
        ctx->pc = 0x5136BCu;
            // 0x5136bc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5136C0u;
        goto label_5136c0;
    }
    ctx->pc = 0x5136B8u;
    {
        const bool branch_taken_0x5136b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x5136BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5136B8u;
            // 0x5136bc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5136b8) {
            ctx->pc = 0x5136E0u;
            goto label_5136e0;
        }
    }
    ctx->pc = 0x5136C0u;
label_5136c0:
    // 0x5136c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5136c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5136c4:
    // 0x5136c4: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x5136c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_5136c8:
    // 0x5136c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5136c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5136cc:
    // 0x5136cc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5136ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5136d0:
    // 0x5136d0: 0x320f809  jalr        $t9
label_5136d4:
    if (ctx->pc == 0x5136D4u) {
        ctx->pc = 0x5136D4u;
            // 0x5136d4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5136D8u;
        goto label_5136d8;
    }
    ctx->pc = 0x5136D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5136D8u);
        ctx->pc = 0x5136D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5136D0u;
            // 0x5136d4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5136D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5136D8u; }
            if (ctx->pc != 0x5136D8u) { return; }
        }
        }
    }
    ctx->pc = 0x5136D8u;
label_5136d8:
    // 0x5136d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x5136d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5136dc:
    // 0x5136dc: 0x0  nop
    ctx->pc = 0x5136dcu;
    // NOP
label_5136e0:
    // 0x5136e0: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x5136e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_5136e4:
    // 0x5136e4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x5136e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_5136e8:
    // 0x5136e8: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x5136e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5136ec:
    // 0x5136ec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x5136ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5136f0:
    // 0x5136f0: 0x45000077  bc1f        . + 4 + (0x77 << 2)
label_5136f4:
    if (ctx->pc == 0x5136F4u) {
        ctx->pc = 0x5136F4u;
            // 0x5136f4: 0x24710060  addiu       $s1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->pc = 0x5136F8u;
        goto label_5136f8;
    }
    ctx->pc = 0x5136F0u;
    {
        const bool branch_taken_0x5136f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5136F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5136F0u;
            // 0x5136f4: 0x24710060  addiu       $s1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5136f0) {
            ctx->pc = 0x5138D0u;
            goto label_5138d0;
        }
    }
    ctx->pc = 0x5136F8u;
label_5136f8:
    // 0x5136f8: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x5136f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5136fc:
    // 0x5136fc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x5136fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_513700:
    // 0x513700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x513700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513704:
    // 0x513704: 0x0  nop
    ctx->pc = 0x513704u;
    // NOP
label_513708:
    // 0x513708: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x513708u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51370c:
    // 0x51370c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_513710:
    if (ctx->pc == 0x513710u) {
        ctx->pc = 0x513710u;
            // 0x513710: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x513714u;
        goto label_513714;
    }
    ctx->pc = 0x51370Cu;
    {
        const bool branch_taken_0x51370c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x513710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51370Cu;
            // 0x513710: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51370c) {
            ctx->pc = 0x513770u;
            goto label_513770;
        }
    }
    ctx->pc = 0x513714u;
label_513714:
    // 0x513714: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x513714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
label_513718:
    // 0x513718: 0xc049514  jal         func_125450
label_51371c:
    if (ctx->pc == 0x51371Cu) {
        ctx->pc = 0x51371Cu;
            // 0x51371c: 0x2a03c  dsll32      $s4, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
        ctx->pc = 0x513720u;
        goto label_513720;
    }
    ctx->pc = 0x513718u;
    SET_GPR_U32(ctx, 31, 0x513720u);
    ctx->pc = 0x51371Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513718u;
            // 0x51371c: 0x2a03c  dsll32      $s4, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513720u; }
        if (ctx->pc != 0x513720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513720u; }
        if (ctx->pc != 0x513720u) { return; }
    }
    ctx->pc = 0x513720u;
label_513720:
    // 0x513720: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x513720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_513724:
    // 0x513724: 0xc040214  jal         func_100850
label_513728:
    if (ctx->pc == 0x513728u) {
        ctx->pc = 0x513728u;
            // 0x513728: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51372Cu;
        goto label_51372c;
    }
    ctx->pc = 0x513724u;
    SET_GPR_U32(ctx, 31, 0x51372Cu);
    ctx->pc = 0x513728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513724u;
            // 0x513728: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100850u;
    if (runtime->hasFunction(0x100850u)) {
        auto targetFn = runtime->lookupFunction(0x100850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51372Cu; }
        if (ctx->pc != 0x51372Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100850_0x100850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51372Cu; }
        if (ctx->pc != 0x51372Cu) { return; }
    }
    ctx->pc = 0x51372Cu;
label_51372c:
    // 0x51372c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_513730:
    if (ctx->pc == 0x513730u) {
        ctx->pc = 0x513734u;
        goto label_513734;
    }
    ctx->pc = 0x51372Cu;
    {
        const bool branch_taken_0x51372c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x51372c) {
            ctx->pc = 0x513770u;
            goto label_513770;
        }
    }
    ctx->pc = 0x513734u;
label_513734:
    // 0x513734: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x513734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_513738:
    // 0x513738: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x513738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_51373c:
    // 0x51373c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x51373cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513740:
    // 0x513740: 0x0  nop
    ctx->pc = 0x513740u;
    // NOP
label_513744:
    // 0x513744: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x513744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_513748:
    // 0x513748: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_51374c:
    if (ctx->pc == 0x51374Cu) {
        ctx->pc = 0x513750u;
        goto label_513750;
    }
    ctx->pc = 0x513748u;
    {
        const bool branch_taken_0x513748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x513748) {
            ctx->pc = 0x513770u;
            goto label_513770;
        }
    }
    ctx->pc = 0x513750u;
label_513750:
    // 0x513750: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x513750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
label_513754:
    // 0x513754: 0xc049514  jal         func_125450
label_513758:
    if (ctx->pc == 0x513758u) {
        ctx->pc = 0x513758u;
            // 0x513758: 0x2a03c  dsll32      $s4, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
        ctx->pc = 0x51375Cu;
        goto label_51375c;
    }
    ctx->pc = 0x513754u;
    SET_GPR_U32(ctx, 31, 0x51375Cu);
    ctx->pc = 0x513758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513754u;
            // 0x513758: 0x2a03c  dsll32      $s4, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51375Cu; }
        if (ctx->pc != 0x51375Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51375Cu; }
        if (ctx->pc != 0x51375Cu) { return; }
    }
    ctx->pc = 0x51375Cu;
label_51375c:
    // 0x51375c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x51375cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_513760:
    // 0x513760: 0xc040214  jal         func_100850
label_513764:
    if (ctx->pc == 0x513764u) {
        ctx->pc = 0x513764u;
            // 0x513764: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513768u;
        goto label_513768;
    }
    ctx->pc = 0x513760u;
    SET_GPR_U32(ctx, 31, 0x513768u);
    ctx->pc = 0x513764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513760u;
            // 0x513764: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100850u;
    if (runtime->hasFunction(0x100850u)) {
        auto targetFn = runtime->lookupFunction(0x100850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513768u; }
        if (ctx->pc != 0x513768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100850_0x100850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513768u; }
        if (ctx->pc != 0x513768u) { return; }
    }
    ctx->pc = 0x513768u;
label_513768:
    // 0x513768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_51376c:
    if (ctx->pc == 0x51376Cu) {
        ctx->pc = 0x513770u;
        goto label_513770;
    }
    ctx->pc = 0x513768u;
    {
        const bool branch_taken_0x513768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x513768) {
            ctx->pc = 0x513778u;
            goto label_513778;
        }
    }
    ctx->pc = 0x513770u;
label_513770:
    // 0x513770: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x513770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_513774:
    // 0x513774: 0x0  nop
    ctx->pc = 0x513774u;
    // NOP
label_513778:
    // 0x513778: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x513778u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_51377c:
    // 0x51377c: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_513780:
    if (ctx->pc == 0x513780u) {
        ctx->pc = 0x513784u;
        goto label_513784;
    }
    ctx->pc = 0x51377Cu;
    {
        const bool branch_taken_0x51377c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x51377c) {
            ctx->pc = 0x5137E8u;
            goto label_5137e8;
        }
    }
    ctx->pc = 0x513784u;
label_513784:
    // 0x513784: 0xc04ab66  jal         func_12AD98
label_513788:
    if (ctx->pc == 0x513788u) {
        ctx->pc = 0x51378Cu;
        goto label_51378c;
    }
    ctx->pc = 0x513784u;
    SET_GPR_U32(ctx, 31, 0x51378Cu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51378Cu; }
        if (ctx->pc != 0x51378Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51378Cu; }
        if (ctx->pc != 0x51378Cu) { return; }
    }
    ctx->pc = 0x51378Cu;
label_51378c:
    // 0x51378c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x51378cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_513790:
    // 0x513790: 0xc04ab66  jal         func_12AD98
label_513794:
    if (ctx->pc == 0x513794u) {
        ctx->pc = 0x513794u;
            // 0x513794: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x513798u;
        goto label_513798;
    }
    ctx->pc = 0x513790u;
    SET_GPR_U32(ctx, 31, 0x513798u);
    ctx->pc = 0x513794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513790u;
            // 0x513794: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513798u; }
        if (ctx->pc != 0x513798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513798u; }
        if (ctx->pc != 0x513798u) { return; }
    }
    ctx->pc = 0x513798u;
label_513798:
    // 0x513798: 0x543025  or          $a2, $v0, $s4
    ctx->pc = 0x513798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_51379c:
    // 0x51379c: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x51379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_5137a0:
    // 0x5137a0: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x5137a0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_5137a4:
    // 0x5137a4: 0x1810  mfhi        $v1
    ctx->pc = 0x5137a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_5137a8:
    // 0x5137a8: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x5137a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_5137ac:
    // 0x5137ac: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_5137b0:
    if (ctx->pc == 0x5137B0u) {
        ctx->pc = 0x5137B4u;
        goto label_5137b4;
    }
    ctx->pc = 0x5137ACu;
    {
        const bool branch_taken_0x5137ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5137ac) {
            ctx->pc = 0x513818u;
            goto label_513818;
        }
    }
    ctx->pc = 0x5137B4u;
label_5137b4:
    // 0x5137b4: 0xc04ab66  jal         func_12AD98
label_5137b8:
    if (ctx->pc == 0x5137B8u) {
        ctx->pc = 0x5137BCu;
        goto label_5137bc;
    }
    ctx->pc = 0x5137B4u;
    SET_GPR_U32(ctx, 31, 0x5137BCu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5137BCu; }
        if (ctx->pc != 0x5137BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5137BCu; }
        if (ctx->pc != 0x5137BCu) { return; }
    }
    ctx->pc = 0x5137BCu;
label_5137bc:
    // 0x5137bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x5137bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_5137c0:
    // 0x5137c0: 0xc04ab66  jal         func_12AD98
label_5137c4:
    if (ctx->pc == 0x5137C4u) {
        ctx->pc = 0x5137C4u;
            // 0x5137c4: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x5137C8u;
        goto label_5137c8;
    }
    ctx->pc = 0x5137C0u;
    SET_GPR_U32(ctx, 31, 0x5137C8u);
    ctx->pc = 0x5137C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5137C0u;
            // 0x5137c4: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5137C8u; }
        if (ctx->pc != 0x5137C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5137C8u; }
        if (ctx->pc != 0x5137C8u) { return; }
    }
    ctx->pc = 0x5137C8u;
label_5137c8:
    // 0x5137c8: 0x543025  or          $a2, $v0, $s4
    ctx->pc = 0x5137c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_5137cc:
    // 0x5137cc: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x5137ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_5137d0:
    // 0x5137d0: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x5137d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_5137d4:
    // 0x5137d4: 0x1810  mfhi        $v1
    ctx->pc = 0x5137d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_5137d8:
    // 0x5137d8: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x5137d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_5137dc:
    // 0x5137dc: 0x1000000e  b           . + 4 + (0xE << 2)
label_5137e0:
    if (ctx->pc == 0x5137E0u) {
        ctx->pc = 0x5137E0u;
            // 0x5137e0: 0xa2230018  sb          $v1, 0x18($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x5137E4u;
        goto label_5137e4;
    }
    ctx->pc = 0x5137DCu;
    {
        const bool branch_taken_0x5137dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5137E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5137DCu;
            // 0x5137e0: 0xa2230018  sb          $v1, 0x18($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5137dc) {
            ctx->pc = 0x513818u;
            goto label_513818;
        }
    }
    ctx->pc = 0x5137E4u;
label_5137e4:
    // 0x5137e4: 0x0  nop
    ctx->pc = 0x5137e4u;
    // NOP
label_5137e8:
    // 0x5137e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x5137e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_5137ec:
    // 0x5137ec: 0xa2230018  sb          $v1, 0x18($s1)
    ctx->pc = 0x5137ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 3));
label_5137f0:
    // 0x5137f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5137f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5137f4:
    // 0x5137f4: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x5137f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5137f8:
    // 0x5137f8: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x5137f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_5137fc:
    // 0x5137fc: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x5137fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
label_513800:
    // 0x513800: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x513800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_513804:
    // 0x513804: 0xc03026  xor         $a2, $a2, $zero
    ctx->pc = 0x513804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 0));
label_513808:
    // 0x513808: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x513808u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_51380c:
    // 0x51380c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x51380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_513810:
    // 0x513810: 0xa2230019  sb          $v1, 0x19($s1)
    ctx->pc = 0x513810u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 3));
label_513814:
    // 0x513814: 0x0  nop
    ctx->pc = 0x513814u;
    // NOP
label_513818:
    // 0x513818: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_51381c:
    if (ctx->pc == 0x51381Cu) {
        ctx->pc = 0x513820u;
        goto label_513820;
    }
    ctx->pc = 0x513818u;
    {
        const bool branch_taken_0x513818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x513818) {
            ctx->pc = 0x513878u;
            goto label_513878;
        }
    }
    ctx->pc = 0x513820u;
label_513820:
    // 0x513820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x513820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_513824:
    // 0x513824: 0xa2230017  sb          $v1, 0x17($s1)
    ctx->pc = 0x513824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 3));
label_513828:
    // 0x513828: 0x96260014  lhu         $a2, 0x14($s1)
    ctx->pc = 0x513828u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_51382c:
    // 0x51382c: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x51382cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_513830:
    // 0x513830: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x513830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_513834:
    // 0x513834: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_513838:
    if (ctx->pc == 0x513838u) {
        ctx->pc = 0x51383Cu;
        goto label_51383c;
    }
    ctx->pc = 0x513834u;
    {
        const bool branch_taken_0x513834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x513834) {
            ctx->pc = 0x513848u;
            goto label_513848;
        }
    }
    ctx->pc = 0x51383Cu;
label_51383c:
    // 0x51383c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x51383cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_513840:
    // 0x513840: 0xa6230014  sh          $v1, 0x14($s1)
    ctx->pc = 0x513840u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 3));
label_513844:
    // 0x513844: 0x0  nop
    ctx->pc = 0x513844u;
    // NOP
label_513848:
    // 0x513848: 0x92230016  lbu         $v1, 0x16($s1)
    ctx->pc = 0x513848u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_51384c:
    // 0x51384c: 0x2c6100fc  sltiu       $at, $v1, 0xFC
    ctx->pc = 0x51384cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)252) ? 1 : 0);
label_513850:
    // 0x513850: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_513854:
    if (ctx->pc == 0x513854u) {
        ctx->pc = 0x513858u;
        goto label_513858;
    }
    ctx->pc = 0x513850u;
    {
        const bool branch_taken_0x513850 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x513850) {
            ctx->pc = 0x513868u;
            goto label_513868;
        }
    }
    ctx->pc = 0x513858u;
label_513858:
    // 0x513858: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x513858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_51385c:
    // 0x51385c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_513860:
    if (ctx->pc == 0x513860u) {
        ctx->pc = 0x513860u;
            // 0x513860: 0xa2230016  sb          $v1, 0x16($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x513864u;
        goto label_513864;
    }
    ctx->pc = 0x51385Cu;
    {
        const bool branch_taken_0x51385c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51385Cu;
            // 0x513860: 0xa2230016  sb          $v1, 0x16($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51385c) {
            ctx->pc = 0x5138D8u;
            goto label_5138d8;
        }
    }
    ctx->pc = 0x513864u;
label_513864:
    // 0x513864: 0x0  nop
    ctx->pc = 0x513864u;
    // NOP
label_513868:
    // 0x513868: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x513868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_51386c:
    // 0x51386c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_513870:
    if (ctx->pc == 0x513870u) {
        ctx->pc = 0x513870u;
            // 0x513870: 0xa2230016  sb          $v1, 0x16($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x513874u;
        goto label_513874;
    }
    ctx->pc = 0x51386Cu;
    {
        const bool branch_taken_0x51386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51386Cu;
            // 0x513870: 0xa2230016  sb          $v1, 0x16($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51386c) {
            ctx->pc = 0x5138D8u;
            goto label_5138d8;
        }
    }
    ctx->pc = 0x513874u;
label_513874:
    // 0x513874: 0x0  nop
    ctx->pc = 0x513874u;
    // NOP
label_513878:
    // 0x513878: 0x96230014  lhu         $v1, 0x14($s1)
    ctx->pc = 0x513878u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_51387c:
    // 0x51387c: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x51387cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_513880:
    // 0x513880: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_513884:
    if (ctx->pc == 0x513884u) {
        ctx->pc = 0x513888u;
        goto label_513888;
    }
    ctx->pc = 0x513880u;
    {
        const bool branch_taken_0x513880 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x513880) {
            ctx->pc = 0x5138A0u;
            goto label_5138a0;
        }
    }
    ctx->pc = 0x513888u;
label_513888:
    // 0x513888: 0x2466fff8  addiu       $a2, $v1, -0x8
    ctx->pc = 0x513888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_51388c:
    // 0x51388c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x51388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_513890:
    // 0x513890: 0xa6260014  sh          $a2, 0x14($s1)
    ctx->pc = 0x513890u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 6));
label_513894:
    // 0x513894: 0x10000006  b           . + 4 + (0x6 << 2)
label_513898:
    if (ctx->pc == 0x513898u) {
        ctx->pc = 0x513898u;
            // 0x513898: 0xa2230017  sb          $v1, 0x17($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x51389Cu;
        goto label_51389c;
    }
    ctx->pc = 0x513894u;
    {
        const bool branch_taken_0x513894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513894u;
            // 0x513898: 0xa2230017  sb          $v1, 0x17($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513894) {
            ctx->pc = 0x5138B0u;
            goto label_5138b0;
        }
    }
    ctx->pc = 0x51389Cu;
label_51389c:
    // 0x51389c: 0x0  nop
    ctx->pc = 0x51389cu;
    // NOP
label_5138a0:
    // 0x5138a0: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x5138a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
label_5138a4:
    // 0x5138a4: 0xa2200016  sb          $zero, 0x16($s1)
    ctx->pc = 0x5138a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 0));
label_5138a8:
    // 0x5138a8: 0xa2200017  sb          $zero, 0x17($s1)
    ctx->pc = 0x5138a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 0));
label_5138ac:
    // 0x5138ac: 0x0  nop
    ctx->pc = 0x5138acu;
    // NOP
label_5138b0:
    // 0x5138b0: 0x92230016  lbu         $v1, 0x16($s1)
    ctx->pc = 0x5138b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_5138b4:
    // 0x5138b4: 0x2c61000d  sltiu       $at, $v1, 0xD
    ctx->pc = 0x5138b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_5138b8:
    // 0x5138b8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_5138bc:
    if (ctx->pc == 0x5138BCu) {
        ctx->pc = 0x5138C0u;
        goto label_5138c0;
    }
    ctx->pc = 0x5138B8u;
    {
        const bool branch_taken_0x5138b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x5138b8) {
            ctx->pc = 0x5138D8u;
            goto label_5138d8;
        }
    }
    ctx->pc = 0x5138C0u;
label_5138c0:
    // 0x5138c0: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x5138c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_5138c4:
    // 0x5138c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_5138c8:
    if (ctx->pc == 0x5138C8u) {
        ctx->pc = 0x5138C8u;
            // 0x5138c8: 0xa2230016  sb          $v1, 0x16($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x5138CCu;
        goto label_5138cc;
    }
    ctx->pc = 0x5138C4u;
    {
        const bool branch_taken_0x5138c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5138C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5138C4u;
            // 0x5138c8: 0xa2230016  sb          $v1, 0x16($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5138c4) {
            ctx->pc = 0x5138D8u;
            goto label_5138d8;
        }
    }
    ctx->pc = 0x5138CCu;
label_5138cc:
    // 0x5138cc: 0x0  nop
    ctx->pc = 0x5138ccu;
    // NOP
label_5138d0:
    // 0x5138d0: 0xa2200017  sb          $zero, 0x17($s1)
    ctx->pc = 0x5138d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 0));
label_5138d4:
    // 0x5138d4: 0x0  nop
    ctx->pc = 0x5138d4u;
    // NOP
label_5138d8:
    // 0x5138d8: 0x8e6300f4  lw          $v1, 0xF4($s3)
    ctx->pc = 0x5138d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_5138dc:
    // 0x5138dc: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x5138dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_5138e0:
    // 0x5138e0: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x5138e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_5138e4:
    // 0x5138e4: 0x1460ff70  bnez        $v1, . + 4 + (-0x90 << 2)
label_5138e8:
    if (ctx->pc == 0x5138E8u) {
        ctx->pc = 0x5138ECu;
        goto label_5138ec;
    }
    ctx->pc = 0x5138E4u;
    {
        const bool branch_taken_0x5138e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5138e4) {
            ctx->pc = 0x5136A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5136a8;
        }
    }
    ctx->pc = 0x5138ECu;
label_5138ec:
    // 0x5138ec: 0x0  nop
    ctx->pc = 0x5138ecu;
    // NOP
label_5138f0:
    // 0x5138f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x5138f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_5138f4:
    // 0x5138f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x5138f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5138f8:
    // 0x5138f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5138f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5138fc:
    // 0x5138fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5138fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_513900:
    // 0x513900: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x513900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_513904:
    // 0x513904: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x513904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_513908:
    // 0x513908: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x513908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51390c:
    // 0x51390c: 0x3e00008  jr          $ra
label_513910:
    if (ctx->pc == 0x513910u) {
        ctx->pc = 0x513910u;
            // 0x513910: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x513914u;
        goto label_513914;
    }
    ctx->pc = 0x51390Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51390Cu;
            // 0x513910: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x513914u;
label_513914:
    // 0x513914: 0x0  nop
    ctx->pc = 0x513914u;
    // NOP
label_513918:
    // 0x513918: 0x0  nop
    ctx->pc = 0x513918u;
    // NOP
label_51391c:
    // 0x51391c: 0x0  nop
    ctx->pc = 0x51391cu;
    // NOP
}
