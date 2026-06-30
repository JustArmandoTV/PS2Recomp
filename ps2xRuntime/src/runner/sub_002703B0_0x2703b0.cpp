#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002703B0
// Address: 0x2703b0 - 0x271600
void sub_002703B0_0x2703b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002703B0_0x2703b0");
#endif

    switch (ctx->pc) {
        case 0x2703b0u: goto label_2703b0;
        case 0x2703b4u: goto label_2703b4;
        case 0x2703b8u: goto label_2703b8;
        case 0x2703bcu: goto label_2703bc;
        case 0x2703c0u: goto label_2703c0;
        case 0x2703c4u: goto label_2703c4;
        case 0x2703c8u: goto label_2703c8;
        case 0x2703ccu: goto label_2703cc;
        case 0x2703d0u: goto label_2703d0;
        case 0x2703d4u: goto label_2703d4;
        case 0x2703d8u: goto label_2703d8;
        case 0x2703dcu: goto label_2703dc;
        case 0x2703e0u: goto label_2703e0;
        case 0x2703e4u: goto label_2703e4;
        case 0x2703e8u: goto label_2703e8;
        case 0x2703ecu: goto label_2703ec;
        case 0x2703f0u: goto label_2703f0;
        case 0x2703f4u: goto label_2703f4;
        case 0x2703f8u: goto label_2703f8;
        case 0x2703fcu: goto label_2703fc;
        case 0x270400u: goto label_270400;
        case 0x270404u: goto label_270404;
        case 0x270408u: goto label_270408;
        case 0x27040cu: goto label_27040c;
        case 0x270410u: goto label_270410;
        case 0x270414u: goto label_270414;
        case 0x270418u: goto label_270418;
        case 0x27041cu: goto label_27041c;
        case 0x270420u: goto label_270420;
        case 0x270424u: goto label_270424;
        case 0x270428u: goto label_270428;
        case 0x27042cu: goto label_27042c;
        case 0x270430u: goto label_270430;
        case 0x270434u: goto label_270434;
        case 0x270438u: goto label_270438;
        case 0x27043cu: goto label_27043c;
        case 0x270440u: goto label_270440;
        case 0x270444u: goto label_270444;
        case 0x270448u: goto label_270448;
        case 0x27044cu: goto label_27044c;
        case 0x270450u: goto label_270450;
        case 0x270454u: goto label_270454;
        case 0x270458u: goto label_270458;
        case 0x27045cu: goto label_27045c;
        case 0x270460u: goto label_270460;
        case 0x270464u: goto label_270464;
        case 0x270468u: goto label_270468;
        case 0x27046cu: goto label_27046c;
        case 0x270470u: goto label_270470;
        case 0x270474u: goto label_270474;
        case 0x270478u: goto label_270478;
        case 0x27047cu: goto label_27047c;
        case 0x270480u: goto label_270480;
        case 0x270484u: goto label_270484;
        case 0x270488u: goto label_270488;
        case 0x27048cu: goto label_27048c;
        case 0x270490u: goto label_270490;
        case 0x270494u: goto label_270494;
        case 0x270498u: goto label_270498;
        case 0x27049cu: goto label_27049c;
        case 0x2704a0u: goto label_2704a0;
        case 0x2704a4u: goto label_2704a4;
        case 0x2704a8u: goto label_2704a8;
        case 0x2704acu: goto label_2704ac;
        case 0x2704b0u: goto label_2704b0;
        case 0x2704b4u: goto label_2704b4;
        case 0x2704b8u: goto label_2704b8;
        case 0x2704bcu: goto label_2704bc;
        case 0x2704c0u: goto label_2704c0;
        case 0x2704c4u: goto label_2704c4;
        case 0x2704c8u: goto label_2704c8;
        case 0x2704ccu: goto label_2704cc;
        case 0x2704d0u: goto label_2704d0;
        case 0x2704d4u: goto label_2704d4;
        case 0x2704d8u: goto label_2704d8;
        case 0x2704dcu: goto label_2704dc;
        case 0x2704e0u: goto label_2704e0;
        case 0x2704e4u: goto label_2704e4;
        case 0x2704e8u: goto label_2704e8;
        case 0x2704ecu: goto label_2704ec;
        case 0x2704f0u: goto label_2704f0;
        case 0x2704f4u: goto label_2704f4;
        case 0x2704f8u: goto label_2704f8;
        case 0x2704fcu: goto label_2704fc;
        case 0x270500u: goto label_270500;
        case 0x270504u: goto label_270504;
        case 0x270508u: goto label_270508;
        case 0x27050cu: goto label_27050c;
        case 0x270510u: goto label_270510;
        case 0x270514u: goto label_270514;
        case 0x270518u: goto label_270518;
        case 0x27051cu: goto label_27051c;
        case 0x270520u: goto label_270520;
        case 0x270524u: goto label_270524;
        case 0x270528u: goto label_270528;
        case 0x27052cu: goto label_27052c;
        case 0x270530u: goto label_270530;
        case 0x270534u: goto label_270534;
        case 0x270538u: goto label_270538;
        case 0x27053cu: goto label_27053c;
        case 0x270540u: goto label_270540;
        case 0x270544u: goto label_270544;
        case 0x270548u: goto label_270548;
        case 0x27054cu: goto label_27054c;
        case 0x270550u: goto label_270550;
        case 0x270554u: goto label_270554;
        case 0x270558u: goto label_270558;
        case 0x27055cu: goto label_27055c;
        case 0x270560u: goto label_270560;
        case 0x270564u: goto label_270564;
        case 0x270568u: goto label_270568;
        case 0x27056cu: goto label_27056c;
        case 0x270570u: goto label_270570;
        case 0x270574u: goto label_270574;
        case 0x270578u: goto label_270578;
        case 0x27057cu: goto label_27057c;
        case 0x270580u: goto label_270580;
        case 0x270584u: goto label_270584;
        case 0x270588u: goto label_270588;
        case 0x27058cu: goto label_27058c;
        case 0x270590u: goto label_270590;
        case 0x270594u: goto label_270594;
        case 0x270598u: goto label_270598;
        case 0x27059cu: goto label_27059c;
        case 0x2705a0u: goto label_2705a0;
        case 0x2705a4u: goto label_2705a4;
        case 0x2705a8u: goto label_2705a8;
        case 0x2705acu: goto label_2705ac;
        case 0x2705b0u: goto label_2705b0;
        case 0x2705b4u: goto label_2705b4;
        case 0x2705b8u: goto label_2705b8;
        case 0x2705bcu: goto label_2705bc;
        case 0x2705c0u: goto label_2705c0;
        case 0x2705c4u: goto label_2705c4;
        case 0x2705c8u: goto label_2705c8;
        case 0x2705ccu: goto label_2705cc;
        case 0x2705d0u: goto label_2705d0;
        case 0x2705d4u: goto label_2705d4;
        case 0x2705d8u: goto label_2705d8;
        case 0x2705dcu: goto label_2705dc;
        case 0x2705e0u: goto label_2705e0;
        case 0x2705e4u: goto label_2705e4;
        case 0x2705e8u: goto label_2705e8;
        case 0x2705ecu: goto label_2705ec;
        case 0x2705f0u: goto label_2705f0;
        case 0x2705f4u: goto label_2705f4;
        case 0x2705f8u: goto label_2705f8;
        case 0x2705fcu: goto label_2705fc;
        case 0x270600u: goto label_270600;
        case 0x270604u: goto label_270604;
        case 0x270608u: goto label_270608;
        case 0x27060cu: goto label_27060c;
        case 0x270610u: goto label_270610;
        case 0x270614u: goto label_270614;
        case 0x270618u: goto label_270618;
        case 0x27061cu: goto label_27061c;
        case 0x270620u: goto label_270620;
        case 0x270624u: goto label_270624;
        case 0x270628u: goto label_270628;
        case 0x27062cu: goto label_27062c;
        case 0x270630u: goto label_270630;
        case 0x270634u: goto label_270634;
        case 0x270638u: goto label_270638;
        case 0x27063cu: goto label_27063c;
        case 0x270640u: goto label_270640;
        case 0x270644u: goto label_270644;
        case 0x270648u: goto label_270648;
        case 0x27064cu: goto label_27064c;
        case 0x270650u: goto label_270650;
        case 0x270654u: goto label_270654;
        case 0x270658u: goto label_270658;
        case 0x27065cu: goto label_27065c;
        case 0x270660u: goto label_270660;
        case 0x270664u: goto label_270664;
        case 0x270668u: goto label_270668;
        case 0x27066cu: goto label_27066c;
        case 0x270670u: goto label_270670;
        case 0x270674u: goto label_270674;
        case 0x270678u: goto label_270678;
        case 0x27067cu: goto label_27067c;
        case 0x270680u: goto label_270680;
        case 0x270684u: goto label_270684;
        case 0x270688u: goto label_270688;
        case 0x27068cu: goto label_27068c;
        case 0x270690u: goto label_270690;
        case 0x270694u: goto label_270694;
        case 0x270698u: goto label_270698;
        case 0x27069cu: goto label_27069c;
        case 0x2706a0u: goto label_2706a0;
        case 0x2706a4u: goto label_2706a4;
        case 0x2706a8u: goto label_2706a8;
        case 0x2706acu: goto label_2706ac;
        case 0x2706b0u: goto label_2706b0;
        case 0x2706b4u: goto label_2706b4;
        case 0x2706b8u: goto label_2706b8;
        case 0x2706bcu: goto label_2706bc;
        case 0x2706c0u: goto label_2706c0;
        case 0x2706c4u: goto label_2706c4;
        case 0x2706c8u: goto label_2706c8;
        case 0x2706ccu: goto label_2706cc;
        case 0x2706d0u: goto label_2706d0;
        case 0x2706d4u: goto label_2706d4;
        case 0x2706d8u: goto label_2706d8;
        case 0x2706dcu: goto label_2706dc;
        case 0x2706e0u: goto label_2706e0;
        case 0x2706e4u: goto label_2706e4;
        case 0x2706e8u: goto label_2706e8;
        case 0x2706ecu: goto label_2706ec;
        case 0x2706f0u: goto label_2706f0;
        case 0x2706f4u: goto label_2706f4;
        case 0x2706f8u: goto label_2706f8;
        case 0x2706fcu: goto label_2706fc;
        case 0x270700u: goto label_270700;
        case 0x270704u: goto label_270704;
        case 0x270708u: goto label_270708;
        case 0x27070cu: goto label_27070c;
        case 0x270710u: goto label_270710;
        case 0x270714u: goto label_270714;
        case 0x270718u: goto label_270718;
        case 0x27071cu: goto label_27071c;
        case 0x270720u: goto label_270720;
        case 0x270724u: goto label_270724;
        case 0x270728u: goto label_270728;
        case 0x27072cu: goto label_27072c;
        case 0x270730u: goto label_270730;
        case 0x270734u: goto label_270734;
        case 0x270738u: goto label_270738;
        case 0x27073cu: goto label_27073c;
        case 0x270740u: goto label_270740;
        case 0x270744u: goto label_270744;
        case 0x270748u: goto label_270748;
        case 0x27074cu: goto label_27074c;
        case 0x270750u: goto label_270750;
        case 0x270754u: goto label_270754;
        case 0x270758u: goto label_270758;
        case 0x27075cu: goto label_27075c;
        case 0x270760u: goto label_270760;
        case 0x270764u: goto label_270764;
        case 0x270768u: goto label_270768;
        case 0x27076cu: goto label_27076c;
        case 0x270770u: goto label_270770;
        case 0x270774u: goto label_270774;
        case 0x270778u: goto label_270778;
        case 0x27077cu: goto label_27077c;
        case 0x270780u: goto label_270780;
        case 0x270784u: goto label_270784;
        case 0x270788u: goto label_270788;
        case 0x27078cu: goto label_27078c;
        case 0x270790u: goto label_270790;
        case 0x270794u: goto label_270794;
        case 0x270798u: goto label_270798;
        case 0x27079cu: goto label_27079c;
        case 0x2707a0u: goto label_2707a0;
        case 0x2707a4u: goto label_2707a4;
        case 0x2707a8u: goto label_2707a8;
        case 0x2707acu: goto label_2707ac;
        case 0x2707b0u: goto label_2707b0;
        case 0x2707b4u: goto label_2707b4;
        case 0x2707b8u: goto label_2707b8;
        case 0x2707bcu: goto label_2707bc;
        case 0x2707c0u: goto label_2707c0;
        case 0x2707c4u: goto label_2707c4;
        case 0x2707c8u: goto label_2707c8;
        case 0x2707ccu: goto label_2707cc;
        case 0x2707d0u: goto label_2707d0;
        case 0x2707d4u: goto label_2707d4;
        case 0x2707d8u: goto label_2707d8;
        case 0x2707dcu: goto label_2707dc;
        case 0x2707e0u: goto label_2707e0;
        case 0x2707e4u: goto label_2707e4;
        case 0x2707e8u: goto label_2707e8;
        case 0x2707ecu: goto label_2707ec;
        case 0x2707f0u: goto label_2707f0;
        case 0x2707f4u: goto label_2707f4;
        case 0x2707f8u: goto label_2707f8;
        case 0x2707fcu: goto label_2707fc;
        case 0x270800u: goto label_270800;
        case 0x270804u: goto label_270804;
        case 0x270808u: goto label_270808;
        case 0x27080cu: goto label_27080c;
        case 0x270810u: goto label_270810;
        case 0x270814u: goto label_270814;
        case 0x270818u: goto label_270818;
        case 0x27081cu: goto label_27081c;
        case 0x270820u: goto label_270820;
        case 0x270824u: goto label_270824;
        case 0x270828u: goto label_270828;
        case 0x27082cu: goto label_27082c;
        case 0x270830u: goto label_270830;
        case 0x270834u: goto label_270834;
        case 0x270838u: goto label_270838;
        case 0x27083cu: goto label_27083c;
        case 0x270840u: goto label_270840;
        case 0x270844u: goto label_270844;
        case 0x270848u: goto label_270848;
        case 0x27084cu: goto label_27084c;
        case 0x270850u: goto label_270850;
        case 0x270854u: goto label_270854;
        case 0x270858u: goto label_270858;
        case 0x27085cu: goto label_27085c;
        case 0x270860u: goto label_270860;
        case 0x270864u: goto label_270864;
        case 0x270868u: goto label_270868;
        case 0x27086cu: goto label_27086c;
        case 0x270870u: goto label_270870;
        case 0x270874u: goto label_270874;
        case 0x270878u: goto label_270878;
        case 0x27087cu: goto label_27087c;
        case 0x270880u: goto label_270880;
        case 0x270884u: goto label_270884;
        case 0x270888u: goto label_270888;
        case 0x27088cu: goto label_27088c;
        case 0x270890u: goto label_270890;
        case 0x270894u: goto label_270894;
        case 0x270898u: goto label_270898;
        case 0x27089cu: goto label_27089c;
        case 0x2708a0u: goto label_2708a0;
        case 0x2708a4u: goto label_2708a4;
        case 0x2708a8u: goto label_2708a8;
        case 0x2708acu: goto label_2708ac;
        case 0x2708b0u: goto label_2708b0;
        case 0x2708b4u: goto label_2708b4;
        case 0x2708b8u: goto label_2708b8;
        case 0x2708bcu: goto label_2708bc;
        case 0x2708c0u: goto label_2708c0;
        case 0x2708c4u: goto label_2708c4;
        case 0x2708c8u: goto label_2708c8;
        case 0x2708ccu: goto label_2708cc;
        case 0x2708d0u: goto label_2708d0;
        case 0x2708d4u: goto label_2708d4;
        case 0x2708d8u: goto label_2708d8;
        case 0x2708dcu: goto label_2708dc;
        case 0x2708e0u: goto label_2708e0;
        case 0x2708e4u: goto label_2708e4;
        case 0x2708e8u: goto label_2708e8;
        case 0x2708ecu: goto label_2708ec;
        case 0x2708f0u: goto label_2708f0;
        case 0x2708f4u: goto label_2708f4;
        case 0x2708f8u: goto label_2708f8;
        case 0x2708fcu: goto label_2708fc;
        case 0x270900u: goto label_270900;
        case 0x270904u: goto label_270904;
        case 0x270908u: goto label_270908;
        case 0x27090cu: goto label_27090c;
        case 0x270910u: goto label_270910;
        case 0x270914u: goto label_270914;
        case 0x270918u: goto label_270918;
        case 0x27091cu: goto label_27091c;
        case 0x270920u: goto label_270920;
        case 0x270924u: goto label_270924;
        case 0x270928u: goto label_270928;
        case 0x27092cu: goto label_27092c;
        case 0x270930u: goto label_270930;
        case 0x270934u: goto label_270934;
        case 0x270938u: goto label_270938;
        case 0x27093cu: goto label_27093c;
        case 0x270940u: goto label_270940;
        case 0x270944u: goto label_270944;
        case 0x270948u: goto label_270948;
        case 0x27094cu: goto label_27094c;
        case 0x270950u: goto label_270950;
        case 0x270954u: goto label_270954;
        case 0x270958u: goto label_270958;
        case 0x27095cu: goto label_27095c;
        case 0x270960u: goto label_270960;
        case 0x270964u: goto label_270964;
        case 0x270968u: goto label_270968;
        case 0x27096cu: goto label_27096c;
        case 0x270970u: goto label_270970;
        case 0x270974u: goto label_270974;
        case 0x270978u: goto label_270978;
        case 0x27097cu: goto label_27097c;
        case 0x270980u: goto label_270980;
        case 0x270984u: goto label_270984;
        case 0x270988u: goto label_270988;
        case 0x27098cu: goto label_27098c;
        case 0x270990u: goto label_270990;
        case 0x270994u: goto label_270994;
        case 0x270998u: goto label_270998;
        case 0x27099cu: goto label_27099c;
        case 0x2709a0u: goto label_2709a0;
        case 0x2709a4u: goto label_2709a4;
        case 0x2709a8u: goto label_2709a8;
        case 0x2709acu: goto label_2709ac;
        case 0x2709b0u: goto label_2709b0;
        case 0x2709b4u: goto label_2709b4;
        case 0x2709b8u: goto label_2709b8;
        case 0x2709bcu: goto label_2709bc;
        case 0x2709c0u: goto label_2709c0;
        case 0x2709c4u: goto label_2709c4;
        case 0x2709c8u: goto label_2709c8;
        case 0x2709ccu: goto label_2709cc;
        case 0x2709d0u: goto label_2709d0;
        case 0x2709d4u: goto label_2709d4;
        case 0x2709d8u: goto label_2709d8;
        case 0x2709dcu: goto label_2709dc;
        case 0x2709e0u: goto label_2709e0;
        case 0x2709e4u: goto label_2709e4;
        case 0x2709e8u: goto label_2709e8;
        case 0x2709ecu: goto label_2709ec;
        case 0x2709f0u: goto label_2709f0;
        case 0x2709f4u: goto label_2709f4;
        case 0x2709f8u: goto label_2709f8;
        case 0x2709fcu: goto label_2709fc;
        case 0x270a00u: goto label_270a00;
        case 0x270a04u: goto label_270a04;
        case 0x270a08u: goto label_270a08;
        case 0x270a0cu: goto label_270a0c;
        case 0x270a10u: goto label_270a10;
        case 0x270a14u: goto label_270a14;
        case 0x270a18u: goto label_270a18;
        case 0x270a1cu: goto label_270a1c;
        case 0x270a20u: goto label_270a20;
        case 0x270a24u: goto label_270a24;
        case 0x270a28u: goto label_270a28;
        case 0x270a2cu: goto label_270a2c;
        case 0x270a30u: goto label_270a30;
        case 0x270a34u: goto label_270a34;
        case 0x270a38u: goto label_270a38;
        case 0x270a3cu: goto label_270a3c;
        case 0x270a40u: goto label_270a40;
        case 0x270a44u: goto label_270a44;
        case 0x270a48u: goto label_270a48;
        case 0x270a4cu: goto label_270a4c;
        case 0x270a50u: goto label_270a50;
        case 0x270a54u: goto label_270a54;
        case 0x270a58u: goto label_270a58;
        case 0x270a5cu: goto label_270a5c;
        case 0x270a60u: goto label_270a60;
        case 0x270a64u: goto label_270a64;
        case 0x270a68u: goto label_270a68;
        case 0x270a6cu: goto label_270a6c;
        case 0x270a70u: goto label_270a70;
        case 0x270a74u: goto label_270a74;
        case 0x270a78u: goto label_270a78;
        case 0x270a7cu: goto label_270a7c;
        case 0x270a80u: goto label_270a80;
        case 0x270a84u: goto label_270a84;
        case 0x270a88u: goto label_270a88;
        case 0x270a8cu: goto label_270a8c;
        case 0x270a90u: goto label_270a90;
        case 0x270a94u: goto label_270a94;
        case 0x270a98u: goto label_270a98;
        case 0x270a9cu: goto label_270a9c;
        case 0x270aa0u: goto label_270aa0;
        case 0x270aa4u: goto label_270aa4;
        case 0x270aa8u: goto label_270aa8;
        case 0x270aacu: goto label_270aac;
        case 0x270ab0u: goto label_270ab0;
        case 0x270ab4u: goto label_270ab4;
        case 0x270ab8u: goto label_270ab8;
        case 0x270abcu: goto label_270abc;
        case 0x270ac0u: goto label_270ac0;
        case 0x270ac4u: goto label_270ac4;
        case 0x270ac8u: goto label_270ac8;
        case 0x270accu: goto label_270acc;
        case 0x270ad0u: goto label_270ad0;
        case 0x270ad4u: goto label_270ad4;
        case 0x270ad8u: goto label_270ad8;
        case 0x270adcu: goto label_270adc;
        case 0x270ae0u: goto label_270ae0;
        case 0x270ae4u: goto label_270ae4;
        case 0x270ae8u: goto label_270ae8;
        case 0x270aecu: goto label_270aec;
        case 0x270af0u: goto label_270af0;
        case 0x270af4u: goto label_270af4;
        case 0x270af8u: goto label_270af8;
        case 0x270afcu: goto label_270afc;
        case 0x270b00u: goto label_270b00;
        case 0x270b04u: goto label_270b04;
        case 0x270b08u: goto label_270b08;
        case 0x270b0cu: goto label_270b0c;
        case 0x270b10u: goto label_270b10;
        case 0x270b14u: goto label_270b14;
        case 0x270b18u: goto label_270b18;
        case 0x270b1cu: goto label_270b1c;
        case 0x270b20u: goto label_270b20;
        case 0x270b24u: goto label_270b24;
        case 0x270b28u: goto label_270b28;
        case 0x270b2cu: goto label_270b2c;
        case 0x270b30u: goto label_270b30;
        case 0x270b34u: goto label_270b34;
        case 0x270b38u: goto label_270b38;
        case 0x270b3cu: goto label_270b3c;
        case 0x270b40u: goto label_270b40;
        case 0x270b44u: goto label_270b44;
        case 0x270b48u: goto label_270b48;
        case 0x270b4cu: goto label_270b4c;
        case 0x270b50u: goto label_270b50;
        case 0x270b54u: goto label_270b54;
        case 0x270b58u: goto label_270b58;
        case 0x270b5cu: goto label_270b5c;
        case 0x270b60u: goto label_270b60;
        case 0x270b64u: goto label_270b64;
        case 0x270b68u: goto label_270b68;
        case 0x270b6cu: goto label_270b6c;
        case 0x270b70u: goto label_270b70;
        case 0x270b74u: goto label_270b74;
        case 0x270b78u: goto label_270b78;
        case 0x270b7cu: goto label_270b7c;
        case 0x270b80u: goto label_270b80;
        case 0x270b84u: goto label_270b84;
        case 0x270b88u: goto label_270b88;
        case 0x270b8cu: goto label_270b8c;
        case 0x270b90u: goto label_270b90;
        case 0x270b94u: goto label_270b94;
        case 0x270b98u: goto label_270b98;
        case 0x270b9cu: goto label_270b9c;
        case 0x270ba0u: goto label_270ba0;
        case 0x270ba4u: goto label_270ba4;
        case 0x270ba8u: goto label_270ba8;
        case 0x270bacu: goto label_270bac;
        case 0x270bb0u: goto label_270bb0;
        case 0x270bb4u: goto label_270bb4;
        case 0x270bb8u: goto label_270bb8;
        case 0x270bbcu: goto label_270bbc;
        case 0x270bc0u: goto label_270bc0;
        case 0x270bc4u: goto label_270bc4;
        case 0x270bc8u: goto label_270bc8;
        case 0x270bccu: goto label_270bcc;
        case 0x270bd0u: goto label_270bd0;
        case 0x270bd4u: goto label_270bd4;
        case 0x270bd8u: goto label_270bd8;
        case 0x270bdcu: goto label_270bdc;
        case 0x270be0u: goto label_270be0;
        case 0x270be4u: goto label_270be4;
        case 0x270be8u: goto label_270be8;
        case 0x270becu: goto label_270bec;
        case 0x270bf0u: goto label_270bf0;
        case 0x270bf4u: goto label_270bf4;
        case 0x270bf8u: goto label_270bf8;
        case 0x270bfcu: goto label_270bfc;
        case 0x270c00u: goto label_270c00;
        case 0x270c04u: goto label_270c04;
        case 0x270c08u: goto label_270c08;
        case 0x270c0cu: goto label_270c0c;
        case 0x270c10u: goto label_270c10;
        case 0x270c14u: goto label_270c14;
        case 0x270c18u: goto label_270c18;
        case 0x270c1cu: goto label_270c1c;
        case 0x270c20u: goto label_270c20;
        case 0x270c24u: goto label_270c24;
        case 0x270c28u: goto label_270c28;
        case 0x270c2cu: goto label_270c2c;
        case 0x270c30u: goto label_270c30;
        case 0x270c34u: goto label_270c34;
        case 0x270c38u: goto label_270c38;
        case 0x270c3cu: goto label_270c3c;
        case 0x270c40u: goto label_270c40;
        case 0x270c44u: goto label_270c44;
        case 0x270c48u: goto label_270c48;
        case 0x270c4cu: goto label_270c4c;
        case 0x270c50u: goto label_270c50;
        case 0x270c54u: goto label_270c54;
        case 0x270c58u: goto label_270c58;
        case 0x270c5cu: goto label_270c5c;
        case 0x270c60u: goto label_270c60;
        case 0x270c64u: goto label_270c64;
        case 0x270c68u: goto label_270c68;
        case 0x270c6cu: goto label_270c6c;
        case 0x270c70u: goto label_270c70;
        case 0x270c74u: goto label_270c74;
        case 0x270c78u: goto label_270c78;
        case 0x270c7cu: goto label_270c7c;
        case 0x270c80u: goto label_270c80;
        case 0x270c84u: goto label_270c84;
        case 0x270c88u: goto label_270c88;
        case 0x270c8cu: goto label_270c8c;
        case 0x270c90u: goto label_270c90;
        case 0x270c94u: goto label_270c94;
        case 0x270c98u: goto label_270c98;
        case 0x270c9cu: goto label_270c9c;
        case 0x270ca0u: goto label_270ca0;
        case 0x270ca4u: goto label_270ca4;
        case 0x270ca8u: goto label_270ca8;
        case 0x270cacu: goto label_270cac;
        case 0x270cb0u: goto label_270cb0;
        case 0x270cb4u: goto label_270cb4;
        case 0x270cb8u: goto label_270cb8;
        case 0x270cbcu: goto label_270cbc;
        case 0x270cc0u: goto label_270cc0;
        case 0x270cc4u: goto label_270cc4;
        case 0x270cc8u: goto label_270cc8;
        case 0x270cccu: goto label_270ccc;
        case 0x270cd0u: goto label_270cd0;
        case 0x270cd4u: goto label_270cd4;
        case 0x270cd8u: goto label_270cd8;
        case 0x270cdcu: goto label_270cdc;
        case 0x270ce0u: goto label_270ce0;
        case 0x270ce4u: goto label_270ce4;
        case 0x270ce8u: goto label_270ce8;
        case 0x270cecu: goto label_270cec;
        case 0x270cf0u: goto label_270cf0;
        case 0x270cf4u: goto label_270cf4;
        case 0x270cf8u: goto label_270cf8;
        case 0x270cfcu: goto label_270cfc;
        case 0x270d00u: goto label_270d00;
        case 0x270d04u: goto label_270d04;
        case 0x270d08u: goto label_270d08;
        case 0x270d0cu: goto label_270d0c;
        case 0x270d10u: goto label_270d10;
        case 0x270d14u: goto label_270d14;
        case 0x270d18u: goto label_270d18;
        case 0x270d1cu: goto label_270d1c;
        case 0x270d20u: goto label_270d20;
        case 0x270d24u: goto label_270d24;
        case 0x270d28u: goto label_270d28;
        case 0x270d2cu: goto label_270d2c;
        case 0x270d30u: goto label_270d30;
        case 0x270d34u: goto label_270d34;
        case 0x270d38u: goto label_270d38;
        case 0x270d3cu: goto label_270d3c;
        case 0x270d40u: goto label_270d40;
        case 0x270d44u: goto label_270d44;
        case 0x270d48u: goto label_270d48;
        case 0x270d4cu: goto label_270d4c;
        case 0x270d50u: goto label_270d50;
        case 0x270d54u: goto label_270d54;
        case 0x270d58u: goto label_270d58;
        case 0x270d5cu: goto label_270d5c;
        case 0x270d60u: goto label_270d60;
        case 0x270d64u: goto label_270d64;
        case 0x270d68u: goto label_270d68;
        case 0x270d6cu: goto label_270d6c;
        case 0x270d70u: goto label_270d70;
        case 0x270d74u: goto label_270d74;
        case 0x270d78u: goto label_270d78;
        case 0x270d7cu: goto label_270d7c;
        case 0x270d80u: goto label_270d80;
        case 0x270d84u: goto label_270d84;
        case 0x270d88u: goto label_270d88;
        case 0x270d8cu: goto label_270d8c;
        case 0x270d90u: goto label_270d90;
        case 0x270d94u: goto label_270d94;
        case 0x270d98u: goto label_270d98;
        case 0x270d9cu: goto label_270d9c;
        case 0x270da0u: goto label_270da0;
        case 0x270da4u: goto label_270da4;
        case 0x270da8u: goto label_270da8;
        case 0x270dacu: goto label_270dac;
        case 0x270db0u: goto label_270db0;
        case 0x270db4u: goto label_270db4;
        case 0x270db8u: goto label_270db8;
        case 0x270dbcu: goto label_270dbc;
        case 0x270dc0u: goto label_270dc0;
        case 0x270dc4u: goto label_270dc4;
        case 0x270dc8u: goto label_270dc8;
        case 0x270dccu: goto label_270dcc;
        case 0x270dd0u: goto label_270dd0;
        case 0x270dd4u: goto label_270dd4;
        case 0x270dd8u: goto label_270dd8;
        case 0x270ddcu: goto label_270ddc;
        case 0x270de0u: goto label_270de0;
        case 0x270de4u: goto label_270de4;
        case 0x270de8u: goto label_270de8;
        case 0x270decu: goto label_270dec;
        case 0x270df0u: goto label_270df0;
        case 0x270df4u: goto label_270df4;
        case 0x270df8u: goto label_270df8;
        case 0x270dfcu: goto label_270dfc;
        case 0x270e00u: goto label_270e00;
        case 0x270e04u: goto label_270e04;
        case 0x270e08u: goto label_270e08;
        case 0x270e0cu: goto label_270e0c;
        case 0x270e10u: goto label_270e10;
        case 0x270e14u: goto label_270e14;
        case 0x270e18u: goto label_270e18;
        case 0x270e1cu: goto label_270e1c;
        case 0x270e20u: goto label_270e20;
        case 0x270e24u: goto label_270e24;
        case 0x270e28u: goto label_270e28;
        case 0x270e2cu: goto label_270e2c;
        case 0x270e30u: goto label_270e30;
        case 0x270e34u: goto label_270e34;
        case 0x270e38u: goto label_270e38;
        case 0x270e3cu: goto label_270e3c;
        case 0x270e40u: goto label_270e40;
        case 0x270e44u: goto label_270e44;
        case 0x270e48u: goto label_270e48;
        case 0x270e4cu: goto label_270e4c;
        case 0x270e50u: goto label_270e50;
        case 0x270e54u: goto label_270e54;
        case 0x270e58u: goto label_270e58;
        case 0x270e5cu: goto label_270e5c;
        case 0x270e60u: goto label_270e60;
        case 0x270e64u: goto label_270e64;
        case 0x270e68u: goto label_270e68;
        case 0x270e6cu: goto label_270e6c;
        case 0x270e70u: goto label_270e70;
        case 0x270e74u: goto label_270e74;
        case 0x270e78u: goto label_270e78;
        case 0x270e7cu: goto label_270e7c;
        case 0x270e80u: goto label_270e80;
        case 0x270e84u: goto label_270e84;
        case 0x270e88u: goto label_270e88;
        case 0x270e8cu: goto label_270e8c;
        case 0x270e90u: goto label_270e90;
        case 0x270e94u: goto label_270e94;
        case 0x270e98u: goto label_270e98;
        case 0x270e9cu: goto label_270e9c;
        case 0x270ea0u: goto label_270ea0;
        case 0x270ea4u: goto label_270ea4;
        case 0x270ea8u: goto label_270ea8;
        case 0x270eacu: goto label_270eac;
        case 0x270eb0u: goto label_270eb0;
        case 0x270eb4u: goto label_270eb4;
        case 0x270eb8u: goto label_270eb8;
        case 0x270ebcu: goto label_270ebc;
        case 0x270ec0u: goto label_270ec0;
        case 0x270ec4u: goto label_270ec4;
        case 0x270ec8u: goto label_270ec8;
        case 0x270eccu: goto label_270ecc;
        case 0x270ed0u: goto label_270ed0;
        case 0x270ed4u: goto label_270ed4;
        case 0x270ed8u: goto label_270ed8;
        case 0x270edcu: goto label_270edc;
        case 0x270ee0u: goto label_270ee0;
        case 0x270ee4u: goto label_270ee4;
        case 0x270ee8u: goto label_270ee8;
        case 0x270eecu: goto label_270eec;
        case 0x270ef0u: goto label_270ef0;
        case 0x270ef4u: goto label_270ef4;
        case 0x270ef8u: goto label_270ef8;
        case 0x270efcu: goto label_270efc;
        case 0x270f00u: goto label_270f00;
        case 0x270f04u: goto label_270f04;
        case 0x270f08u: goto label_270f08;
        case 0x270f0cu: goto label_270f0c;
        case 0x270f10u: goto label_270f10;
        case 0x270f14u: goto label_270f14;
        case 0x270f18u: goto label_270f18;
        case 0x270f1cu: goto label_270f1c;
        case 0x270f20u: goto label_270f20;
        case 0x270f24u: goto label_270f24;
        case 0x270f28u: goto label_270f28;
        case 0x270f2cu: goto label_270f2c;
        case 0x270f30u: goto label_270f30;
        case 0x270f34u: goto label_270f34;
        case 0x270f38u: goto label_270f38;
        case 0x270f3cu: goto label_270f3c;
        case 0x270f40u: goto label_270f40;
        case 0x270f44u: goto label_270f44;
        case 0x270f48u: goto label_270f48;
        case 0x270f4cu: goto label_270f4c;
        case 0x270f50u: goto label_270f50;
        case 0x270f54u: goto label_270f54;
        case 0x270f58u: goto label_270f58;
        case 0x270f5cu: goto label_270f5c;
        case 0x270f60u: goto label_270f60;
        case 0x270f64u: goto label_270f64;
        case 0x270f68u: goto label_270f68;
        case 0x270f6cu: goto label_270f6c;
        case 0x270f70u: goto label_270f70;
        case 0x270f74u: goto label_270f74;
        case 0x270f78u: goto label_270f78;
        case 0x270f7cu: goto label_270f7c;
        case 0x270f80u: goto label_270f80;
        case 0x270f84u: goto label_270f84;
        case 0x270f88u: goto label_270f88;
        case 0x270f8cu: goto label_270f8c;
        case 0x270f90u: goto label_270f90;
        case 0x270f94u: goto label_270f94;
        case 0x270f98u: goto label_270f98;
        case 0x270f9cu: goto label_270f9c;
        case 0x270fa0u: goto label_270fa0;
        case 0x270fa4u: goto label_270fa4;
        case 0x270fa8u: goto label_270fa8;
        case 0x270facu: goto label_270fac;
        case 0x270fb0u: goto label_270fb0;
        case 0x270fb4u: goto label_270fb4;
        case 0x270fb8u: goto label_270fb8;
        case 0x270fbcu: goto label_270fbc;
        case 0x270fc0u: goto label_270fc0;
        case 0x270fc4u: goto label_270fc4;
        case 0x270fc8u: goto label_270fc8;
        case 0x270fccu: goto label_270fcc;
        case 0x270fd0u: goto label_270fd0;
        case 0x270fd4u: goto label_270fd4;
        case 0x270fd8u: goto label_270fd8;
        case 0x270fdcu: goto label_270fdc;
        case 0x270fe0u: goto label_270fe0;
        case 0x270fe4u: goto label_270fe4;
        case 0x270fe8u: goto label_270fe8;
        case 0x270fecu: goto label_270fec;
        case 0x270ff0u: goto label_270ff0;
        case 0x270ff4u: goto label_270ff4;
        case 0x270ff8u: goto label_270ff8;
        case 0x270ffcu: goto label_270ffc;
        case 0x271000u: goto label_271000;
        case 0x271004u: goto label_271004;
        case 0x271008u: goto label_271008;
        case 0x27100cu: goto label_27100c;
        case 0x271010u: goto label_271010;
        case 0x271014u: goto label_271014;
        case 0x271018u: goto label_271018;
        case 0x27101cu: goto label_27101c;
        case 0x271020u: goto label_271020;
        case 0x271024u: goto label_271024;
        case 0x271028u: goto label_271028;
        case 0x27102cu: goto label_27102c;
        case 0x271030u: goto label_271030;
        case 0x271034u: goto label_271034;
        case 0x271038u: goto label_271038;
        case 0x27103cu: goto label_27103c;
        case 0x271040u: goto label_271040;
        case 0x271044u: goto label_271044;
        case 0x271048u: goto label_271048;
        case 0x27104cu: goto label_27104c;
        case 0x271050u: goto label_271050;
        case 0x271054u: goto label_271054;
        case 0x271058u: goto label_271058;
        case 0x27105cu: goto label_27105c;
        case 0x271060u: goto label_271060;
        case 0x271064u: goto label_271064;
        case 0x271068u: goto label_271068;
        case 0x27106cu: goto label_27106c;
        case 0x271070u: goto label_271070;
        case 0x271074u: goto label_271074;
        case 0x271078u: goto label_271078;
        case 0x27107cu: goto label_27107c;
        case 0x271080u: goto label_271080;
        case 0x271084u: goto label_271084;
        case 0x271088u: goto label_271088;
        case 0x27108cu: goto label_27108c;
        case 0x271090u: goto label_271090;
        case 0x271094u: goto label_271094;
        case 0x271098u: goto label_271098;
        case 0x27109cu: goto label_27109c;
        case 0x2710a0u: goto label_2710a0;
        case 0x2710a4u: goto label_2710a4;
        case 0x2710a8u: goto label_2710a8;
        case 0x2710acu: goto label_2710ac;
        case 0x2710b0u: goto label_2710b0;
        case 0x2710b4u: goto label_2710b4;
        case 0x2710b8u: goto label_2710b8;
        case 0x2710bcu: goto label_2710bc;
        case 0x2710c0u: goto label_2710c0;
        case 0x2710c4u: goto label_2710c4;
        case 0x2710c8u: goto label_2710c8;
        case 0x2710ccu: goto label_2710cc;
        case 0x2710d0u: goto label_2710d0;
        case 0x2710d4u: goto label_2710d4;
        case 0x2710d8u: goto label_2710d8;
        case 0x2710dcu: goto label_2710dc;
        case 0x2710e0u: goto label_2710e0;
        case 0x2710e4u: goto label_2710e4;
        case 0x2710e8u: goto label_2710e8;
        case 0x2710ecu: goto label_2710ec;
        case 0x2710f0u: goto label_2710f0;
        case 0x2710f4u: goto label_2710f4;
        case 0x2710f8u: goto label_2710f8;
        case 0x2710fcu: goto label_2710fc;
        case 0x271100u: goto label_271100;
        case 0x271104u: goto label_271104;
        case 0x271108u: goto label_271108;
        case 0x27110cu: goto label_27110c;
        case 0x271110u: goto label_271110;
        case 0x271114u: goto label_271114;
        case 0x271118u: goto label_271118;
        case 0x27111cu: goto label_27111c;
        case 0x271120u: goto label_271120;
        case 0x271124u: goto label_271124;
        case 0x271128u: goto label_271128;
        case 0x27112cu: goto label_27112c;
        case 0x271130u: goto label_271130;
        case 0x271134u: goto label_271134;
        case 0x271138u: goto label_271138;
        case 0x27113cu: goto label_27113c;
        case 0x271140u: goto label_271140;
        case 0x271144u: goto label_271144;
        case 0x271148u: goto label_271148;
        case 0x27114cu: goto label_27114c;
        case 0x271150u: goto label_271150;
        case 0x271154u: goto label_271154;
        case 0x271158u: goto label_271158;
        case 0x27115cu: goto label_27115c;
        case 0x271160u: goto label_271160;
        case 0x271164u: goto label_271164;
        case 0x271168u: goto label_271168;
        case 0x27116cu: goto label_27116c;
        case 0x271170u: goto label_271170;
        case 0x271174u: goto label_271174;
        case 0x271178u: goto label_271178;
        case 0x27117cu: goto label_27117c;
        case 0x271180u: goto label_271180;
        case 0x271184u: goto label_271184;
        case 0x271188u: goto label_271188;
        case 0x27118cu: goto label_27118c;
        case 0x271190u: goto label_271190;
        case 0x271194u: goto label_271194;
        case 0x271198u: goto label_271198;
        case 0x27119cu: goto label_27119c;
        case 0x2711a0u: goto label_2711a0;
        case 0x2711a4u: goto label_2711a4;
        case 0x2711a8u: goto label_2711a8;
        case 0x2711acu: goto label_2711ac;
        case 0x2711b0u: goto label_2711b0;
        case 0x2711b4u: goto label_2711b4;
        case 0x2711b8u: goto label_2711b8;
        case 0x2711bcu: goto label_2711bc;
        case 0x2711c0u: goto label_2711c0;
        case 0x2711c4u: goto label_2711c4;
        case 0x2711c8u: goto label_2711c8;
        case 0x2711ccu: goto label_2711cc;
        case 0x2711d0u: goto label_2711d0;
        case 0x2711d4u: goto label_2711d4;
        case 0x2711d8u: goto label_2711d8;
        case 0x2711dcu: goto label_2711dc;
        case 0x2711e0u: goto label_2711e0;
        case 0x2711e4u: goto label_2711e4;
        case 0x2711e8u: goto label_2711e8;
        case 0x2711ecu: goto label_2711ec;
        case 0x2711f0u: goto label_2711f0;
        case 0x2711f4u: goto label_2711f4;
        case 0x2711f8u: goto label_2711f8;
        case 0x2711fcu: goto label_2711fc;
        case 0x271200u: goto label_271200;
        case 0x271204u: goto label_271204;
        case 0x271208u: goto label_271208;
        case 0x27120cu: goto label_27120c;
        case 0x271210u: goto label_271210;
        case 0x271214u: goto label_271214;
        case 0x271218u: goto label_271218;
        case 0x27121cu: goto label_27121c;
        case 0x271220u: goto label_271220;
        case 0x271224u: goto label_271224;
        case 0x271228u: goto label_271228;
        case 0x27122cu: goto label_27122c;
        case 0x271230u: goto label_271230;
        case 0x271234u: goto label_271234;
        case 0x271238u: goto label_271238;
        case 0x27123cu: goto label_27123c;
        case 0x271240u: goto label_271240;
        case 0x271244u: goto label_271244;
        case 0x271248u: goto label_271248;
        case 0x27124cu: goto label_27124c;
        case 0x271250u: goto label_271250;
        case 0x271254u: goto label_271254;
        case 0x271258u: goto label_271258;
        case 0x27125cu: goto label_27125c;
        case 0x271260u: goto label_271260;
        case 0x271264u: goto label_271264;
        case 0x271268u: goto label_271268;
        case 0x27126cu: goto label_27126c;
        case 0x271270u: goto label_271270;
        case 0x271274u: goto label_271274;
        case 0x271278u: goto label_271278;
        case 0x27127cu: goto label_27127c;
        case 0x271280u: goto label_271280;
        case 0x271284u: goto label_271284;
        case 0x271288u: goto label_271288;
        case 0x27128cu: goto label_27128c;
        case 0x271290u: goto label_271290;
        case 0x271294u: goto label_271294;
        case 0x271298u: goto label_271298;
        case 0x27129cu: goto label_27129c;
        case 0x2712a0u: goto label_2712a0;
        case 0x2712a4u: goto label_2712a4;
        case 0x2712a8u: goto label_2712a8;
        case 0x2712acu: goto label_2712ac;
        case 0x2712b0u: goto label_2712b0;
        case 0x2712b4u: goto label_2712b4;
        case 0x2712b8u: goto label_2712b8;
        case 0x2712bcu: goto label_2712bc;
        case 0x2712c0u: goto label_2712c0;
        case 0x2712c4u: goto label_2712c4;
        case 0x2712c8u: goto label_2712c8;
        case 0x2712ccu: goto label_2712cc;
        case 0x2712d0u: goto label_2712d0;
        case 0x2712d4u: goto label_2712d4;
        case 0x2712d8u: goto label_2712d8;
        case 0x2712dcu: goto label_2712dc;
        case 0x2712e0u: goto label_2712e0;
        case 0x2712e4u: goto label_2712e4;
        case 0x2712e8u: goto label_2712e8;
        case 0x2712ecu: goto label_2712ec;
        case 0x2712f0u: goto label_2712f0;
        case 0x2712f4u: goto label_2712f4;
        case 0x2712f8u: goto label_2712f8;
        case 0x2712fcu: goto label_2712fc;
        case 0x271300u: goto label_271300;
        case 0x271304u: goto label_271304;
        case 0x271308u: goto label_271308;
        case 0x27130cu: goto label_27130c;
        case 0x271310u: goto label_271310;
        case 0x271314u: goto label_271314;
        case 0x271318u: goto label_271318;
        case 0x27131cu: goto label_27131c;
        case 0x271320u: goto label_271320;
        case 0x271324u: goto label_271324;
        case 0x271328u: goto label_271328;
        case 0x27132cu: goto label_27132c;
        case 0x271330u: goto label_271330;
        case 0x271334u: goto label_271334;
        case 0x271338u: goto label_271338;
        case 0x27133cu: goto label_27133c;
        case 0x271340u: goto label_271340;
        case 0x271344u: goto label_271344;
        case 0x271348u: goto label_271348;
        case 0x27134cu: goto label_27134c;
        case 0x271350u: goto label_271350;
        case 0x271354u: goto label_271354;
        case 0x271358u: goto label_271358;
        case 0x27135cu: goto label_27135c;
        case 0x271360u: goto label_271360;
        case 0x271364u: goto label_271364;
        case 0x271368u: goto label_271368;
        case 0x27136cu: goto label_27136c;
        case 0x271370u: goto label_271370;
        case 0x271374u: goto label_271374;
        case 0x271378u: goto label_271378;
        case 0x27137cu: goto label_27137c;
        case 0x271380u: goto label_271380;
        case 0x271384u: goto label_271384;
        case 0x271388u: goto label_271388;
        case 0x27138cu: goto label_27138c;
        case 0x271390u: goto label_271390;
        case 0x271394u: goto label_271394;
        case 0x271398u: goto label_271398;
        case 0x27139cu: goto label_27139c;
        case 0x2713a0u: goto label_2713a0;
        case 0x2713a4u: goto label_2713a4;
        case 0x2713a8u: goto label_2713a8;
        case 0x2713acu: goto label_2713ac;
        case 0x2713b0u: goto label_2713b0;
        case 0x2713b4u: goto label_2713b4;
        case 0x2713b8u: goto label_2713b8;
        case 0x2713bcu: goto label_2713bc;
        case 0x2713c0u: goto label_2713c0;
        case 0x2713c4u: goto label_2713c4;
        case 0x2713c8u: goto label_2713c8;
        case 0x2713ccu: goto label_2713cc;
        case 0x2713d0u: goto label_2713d0;
        case 0x2713d4u: goto label_2713d4;
        case 0x2713d8u: goto label_2713d8;
        case 0x2713dcu: goto label_2713dc;
        case 0x2713e0u: goto label_2713e0;
        case 0x2713e4u: goto label_2713e4;
        case 0x2713e8u: goto label_2713e8;
        case 0x2713ecu: goto label_2713ec;
        case 0x2713f0u: goto label_2713f0;
        case 0x2713f4u: goto label_2713f4;
        case 0x2713f8u: goto label_2713f8;
        case 0x2713fcu: goto label_2713fc;
        case 0x271400u: goto label_271400;
        case 0x271404u: goto label_271404;
        case 0x271408u: goto label_271408;
        case 0x27140cu: goto label_27140c;
        case 0x271410u: goto label_271410;
        case 0x271414u: goto label_271414;
        case 0x271418u: goto label_271418;
        case 0x27141cu: goto label_27141c;
        case 0x271420u: goto label_271420;
        case 0x271424u: goto label_271424;
        case 0x271428u: goto label_271428;
        case 0x27142cu: goto label_27142c;
        case 0x271430u: goto label_271430;
        case 0x271434u: goto label_271434;
        case 0x271438u: goto label_271438;
        case 0x27143cu: goto label_27143c;
        case 0x271440u: goto label_271440;
        case 0x271444u: goto label_271444;
        case 0x271448u: goto label_271448;
        case 0x27144cu: goto label_27144c;
        case 0x271450u: goto label_271450;
        case 0x271454u: goto label_271454;
        case 0x271458u: goto label_271458;
        case 0x27145cu: goto label_27145c;
        case 0x271460u: goto label_271460;
        case 0x271464u: goto label_271464;
        case 0x271468u: goto label_271468;
        case 0x27146cu: goto label_27146c;
        case 0x271470u: goto label_271470;
        case 0x271474u: goto label_271474;
        case 0x271478u: goto label_271478;
        case 0x27147cu: goto label_27147c;
        case 0x271480u: goto label_271480;
        case 0x271484u: goto label_271484;
        case 0x271488u: goto label_271488;
        case 0x27148cu: goto label_27148c;
        case 0x271490u: goto label_271490;
        case 0x271494u: goto label_271494;
        case 0x271498u: goto label_271498;
        case 0x27149cu: goto label_27149c;
        case 0x2714a0u: goto label_2714a0;
        case 0x2714a4u: goto label_2714a4;
        case 0x2714a8u: goto label_2714a8;
        case 0x2714acu: goto label_2714ac;
        case 0x2714b0u: goto label_2714b0;
        case 0x2714b4u: goto label_2714b4;
        case 0x2714b8u: goto label_2714b8;
        case 0x2714bcu: goto label_2714bc;
        case 0x2714c0u: goto label_2714c0;
        case 0x2714c4u: goto label_2714c4;
        case 0x2714c8u: goto label_2714c8;
        case 0x2714ccu: goto label_2714cc;
        case 0x2714d0u: goto label_2714d0;
        case 0x2714d4u: goto label_2714d4;
        case 0x2714d8u: goto label_2714d8;
        case 0x2714dcu: goto label_2714dc;
        case 0x2714e0u: goto label_2714e0;
        case 0x2714e4u: goto label_2714e4;
        case 0x2714e8u: goto label_2714e8;
        case 0x2714ecu: goto label_2714ec;
        case 0x2714f0u: goto label_2714f0;
        case 0x2714f4u: goto label_2714f4;
        case 0x2714f8u: goto label_2714f8;
        case 0x2714fcu: goto label_2714fc;
        case 0x271500u: goto label_271500;
        case 0x271504u: goto label_271504;
        case 0x271508u: goto label_271508;
        case 0x27150cu: goto label_27150c;
        case 0x271510u: goto label_271510;
        case 0x271514u: goto label_271514;
        case 0x271518u: goto label_271518;
        case 0x27151cu: goto label_27151c;
        case 0x271520u: goto label_271520;
        case 0x271524u: goto label_271524;
        case 0x271528u: goto label_271528;
        case 0x27152cu: goto label_27152c;
        case 0x271530u: goto label_271530;
        case 0x271534u: goto label_271534;
        case 0x271538u: goto label_271538;
        case 0x27153cu: goto label_27153c;
        case 0x271540u: goto label_271540;
        case 0x271544u: goto label_271544;
        case 0x271548u: goto label_271548;
        case 0x27154cu: goto label_27154c;
        case 0x271550u: goto label_271550;
        case 0x271554u: goto label_271554;
        case 0x271558u: goto label_271558;
        case 0x27155cu: goto label_27155c;
        case 0x271560u: goto label_271560;
        case 0x271564u: goto label_271564;
        case 0x271568u: goto label_271568;
        case 0x27156cu: goto label_27156c;
        case 0x271570u: goto label_271570;
        case 0x271574u: goto label_271574;
        case 0x271578u: goto label_271578;
        case 0x27157cu: goto label_27157c;
        case 0x271580u: goto label_271580;
        case 0x271584u: goto label_271584;
        case 0x271588u: goto label_271588;
        case 0x27158cu: goto label_27158c;
        case 0x271590u: goto label_271590;
        case 0x271594u: goto label_271594;
        case 0x271598u: goto label_271598;
        case 0x27159cu: goto label_27159c;
        case 0x2715a0u: goto label_2715a0;
        case 0x2715a4u: goto label_2715a4;
        case 0x2715a8u: goto label_2715a8;
        case 0x2715acu: goto label_2715ac;
        case 0x2715b0u: goto label_2715b0;
        case 0x2715b4u: goto label_2715b4;
        case 0x2715b8u: goto label_2715b8;
        case 0x2715bcu: goto label_2715bc;
        case 0x2715c0u: goto label_2715c0;
        case 0x2715c4u: goto label_2715c4;
        case 0x2715c8u: goto label_2715c8;
        case 0x2715ccu: goto label_2715cc;
        case 0x2715d0u: goto label_2715d0;
        case 0x2715d4u: goto label_2715d4;
        case 0x2715d8u: goto label_2715d8;
        case 0x2715dcu: goto label_2715dc;
        case 0x2715e0u: goto label_2715e0;
        case 0x2715e4u: goto label_2715e4;
        case 0x2715e8u: goto label_2715e8;
        case 0x2715ecu: goto label_2715ec;
        case 0x2715f0u: goto label_2715f0;
        case 0x2715f4u: goto label_2715f4;
        case 0x2715f8u: goto label_2715f8;
        case 0x2715fcu: goto label_2715fc;
        default: break;
    }

    ctx->pc = 0x2703b0u;

label_2703b0:
    // 0x2703b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2703b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2703b4:
    // 0x2703b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2703b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2703b8:
    // 0x2703b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2703b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2703bc:
    // 0x2703bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2703bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2703c0:
    // 0x2703c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2703c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2703c4:
    // 0x2703c4: 0x24b10038  addiu       $s1, $a1, 0x38
    ctx->pc = 0x2703c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
label_2703c8:
    // 0x2703c8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2703c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2703cc:
    // 0x2703cc: 0x8ca50040  lw          $a1, 0x40($a1)
    ctx->pc = 0x2703ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_2703d0:
    // 0x2703d0: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x2703d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2703d4:
    // 0x2703d4: 0xc09b834  jal         func_26E0D0
label_2703d8:
    if (ctx->pc == 0x2703D8u) {
        ctx->pc = 0x2703D8u;
            // 0x2703d8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2703DCu;
        goto label_2703dc;
    }
    ctx->pc = 0x2703D4u;
    SET_GPR_U32(ctx, 31, 0x2703DCu);
    ctx->pc = 0x2703D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2703D4u;
            // 0x2703d8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E0D0u;
    if (runtime->hasFunction(0x26E0D0u)) {
        auto targetFn = runtime->lookupFunction(0x26E0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2703DCu; }
        if (ctx->pc != 0x2703DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E0D0_0x26e0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2703DCu; }
        if (ctx->pc != 0x2703DCu) { return; }
    }
    ctx->pc = 0x2703DCu;
label_2703dc:
    // 0x2703dc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2703dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2703e0:
    // 0x2703e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2703e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2703e4:
    // 0x2703e4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2703e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2703e8:
    // 0x2703e8: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x2703e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
label_2703ec:
    // 0x2703ec: 0x901023  subu        $v0, $a0, $s0
    ctx->pc = 0x2703ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2703f0:
    // 0x2703f0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2703f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_2703f4:
    // 0x2703f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2703f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2703f8:
    // 0x2703f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2703f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2703fc:
    // 0x2703fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2703fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_270400:
    // 0x270400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_270404:
    // 0x270404: 0x3e00008  jr          $ra
label_270408:
    if (ctx->pc == 0x270408u) {
        ctx->pc = 0x270408u;
            // 0x270408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x27040Cu;
        goto label_27040c;
    }
    ctx->pc = 0x270404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270404u;
            // 0x270408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27040Cu;
label_27040c:
    // 0x27040c: 0x0  nop
    ctx->pc = 0x27040cu;
    // NOP
label_270410:
    // 0x270410: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x270410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
label_270414:
    // 0x270414: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x270414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_270418:
    // 0x270418: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x270418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_27041c:
    // 0x27041c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27041cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_270420:
    // 0x270420: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x270420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_270424:
    // 0x270424: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x270424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_270428:
    // 0x270428: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x270428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27042c:
    // 0x27042c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x27042cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_270430:
    // 0x270430: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x270430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_270434:
    // 0x270434: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x270434u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_270438:
    // 0x270438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x270438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27043c:
    // 0x27043c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_270440:
    // 0x270440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_270444:
    // 0x270444: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x270444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_270448:
    // 0x270448: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x270448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_27044c:
    // 0x27044c: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x27044cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
label_270450:
    // 0x270450: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x270450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_270454:
    // 0x270454: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x270454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_270458:
    // 0x270458: 0x320f809  jalr        $t9
label_27045c:
    if (ctx->pc == 0x27045Cu) {
        ctx->pc = 0x27045Cu;
            // 0x27045c: 0x26a60030  addiu       $a2, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->pc = 0x270460u;
        goto label_270460;
    }
    ctx->pc = 0x270458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x270460u);
        ctx->pc = 0x27045Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270458u;
            // 0x27045c: 0x26a60030  addiu       $a2, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x270460u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x270460u; }
            if (ctx->pc != 0x270460u) { return; }
        }
        }
    }
    ctx->pc = 0x270460u;
label_270460:
    // 0x270460: 0x12800451  beqz        $s4, . + 4 + (0x451 << 2)
label_270464:
    if (ctx->pc == 0x270464u) {
        ctx->pc = 0x270468u;
        goto label_270468;
    }
    ctx->pc = 0x270460u;
    {
        const bool branch_taken_0x270460 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x270460) {
            ctx->pc = 0x2715A8u;
            goto label_2715a8;
        }
    }
    ctx->pc = 0x270468u;
label_270468:
    // 0x270468: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x270468u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
label_27046c:
    // 0x27046c: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x27046cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_270470:
    // 0x270470: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_270474:
    if (ctx->pc == 0x270474u) {
        ctx->pc = 0x270478u;
        goto label_270478;
    }
    ctx->pc = 0x270470u;
    {
        const bool branch_taken_0x270470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270470) {
            ctx->pc = 0x270498u;
            goto label_270498;
        }
    }
    ctx->pc = 0x270478u;
label_270478:
    // 0x270478: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x270478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_27047c:
    // 0x27047c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x27047cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_270480:
    // 0x270480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270484:
    // 0x270484: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x270484u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
label_270488:
    // 0x270488: 0x0  nop
    ctx->pc = 0x270488u;
    // NOP
label_27048c:
    // 0x27048c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_270490:
    if (ctx->pc == 0x270490u) {
        ctx->pc = 0x270494u;
        goto label_270494;
    }
    ctx->pc = 0x27048Cu;
    {
        const bool branch_taken_0x27048c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27048c) {
            ctx->pc = 0x270478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270478;
        }
    }
    ctx->pc = 0x270494u;
label_270494:
    // 0x270494: 0x0  nop
    ctx->pc = 0x270494u;
    // NOP
label_270498:
    // 0x270498: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x270498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_27049c:
    // 0x27049c: 0x27a202c0  addiu       $v0, $sp, 0x2C0
    ctx->pc = 0x27049cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_2704a0:
    // 0x2704a0: 0x26b30030  addiu       $s3, $s5, 0x30
    ctx->pc = 0x2704a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_2704a4:
    // 0x2704a4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2704a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2704a8:
    // 0x2704a8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2704a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2704ac:
    // 0x2704ac: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2704acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2704b0:
    // 0x2704b0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2704b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2704b4:
    // 0x2704b4: 0x26b2003c  addiu       $s2, $s5, 0x3C
    ctx->pc = 0x2704b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
label_2704b8:
    // 0x2704b8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2704b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2704bc:
    // 0x2704bc: 0x8fb000a0  lw          $s0, 0xA0($sp)
    ctx->pc = 0x2704bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2704c0:
    // 0x2704c0: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x2704c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_2704c4:
    // 0x2704c4: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x2704c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
label_2704c8:
    // 0x2704c8: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x2704c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_2704cc:
    // 0x2704cc: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x2704ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_2704d0:
    // 0x2704d0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2704d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2704d4:
    // 0x2704d4: 0x0  nop
    ctx->pc = 0x2704d4u;
    // NOP
label_2704d8:
    // 0x2704d8: 0x0  nop
    ctx->pc = 0x2704d8u;
    // NOP
label_2704dc:
    // 0x2704dc: 0x1012  mflo        $v0
    ctx->pc = 0x2704dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2704e0:
    // 0x2704e0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2704e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2704e4:
    // 0x2704e4: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x2704e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
label_2704e8:
    // 0x2704e8: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x2704e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_2704ec:
    // 0x2704ec: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x2704ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_2704f0:
    // 0x2704f0: 0x631821  addu        $v1, $v1, $v1
    ctx->pc = 0x2704f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 3)));
label_2704f4:
    // 0x2704f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2704f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2704f8:
    // 0x2704f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2704f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2704fc:
    // 0x2704fc: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x2704fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
label_270500:
    // 0x270500: 0xc6c2000c  lwc1        $f2, 0xC($s6)
    ctx->pc = 0x270500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_270504:
    // 0x270504: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x270504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270508:
    // 0x270508: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x270508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27050c:
    // 0x27050c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27050cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_270510:
    // 0x270510: 0xc0a3264  jal         func_28C990
label_270514:
    if (ctx->pc == 0x270514u) {
        ctx->pc = 0x270514u;
            // 0x270514: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x270518u;
        goto label_270518;
    }
    ctx->pc = 0x270510u;
    SET_GPR_U32(ctx, 31, 0x270518u);
    ctx->pc = 0x270514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270510u;
            // 0x270514: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270518u; }
        if (ctx->pc != 0x270518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270518u; }
        if (ctx->pc != 0x270518u) { return; }
    }
    ctx->pc = 0x270518u;
label_270518:
    // 0x270518: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x270518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_27051c:
    // 0x27051c: 0xc6c20010  lwc1        $f2, 0x10($s6)
    ctx->pc = 0x27051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_270520:
    // 0x270520: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x270520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270524:
    // 0x270524: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x270524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270528:
    // 0x270528: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x270528u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_27052c:
    // 0x27052c: 0xc0a3264  jal         func_28C990
label_270530:
    if (ctx->pc == 0x270530u) {
        ctx->pc = 0x270530u;
            // 0x270530: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x270534u;
        goto label_270534;
    }
    ctx->pc = 0x27052Cu;
    SET_GPR_U32(ctx, 31, 0x270534u);
    ctx->pc = 0x270530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27052Cu;
            // 0x270530: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270534u; }
        if (ctx->pc != 0x270534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270534u; }
        if (ctx->pc != 0x270534u) { return; }
    }
    ctx->pc = 0x270534u;
label_270534:
    // 0x270534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270538:
    // 0x270538: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x270538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_27053c:
    // 0x27053c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x27053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_270540:
    // 0x270540: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x270540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_270544:
    // 0x270544: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x270544u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270548:
    // 0x270548: 0x5e082a  slt         $at, $v0, $fp
    ctx->pc = 0x270548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_27054c:
    // 0x27054c: 0x41f00a  movz        $fp, $v0, $at
    ctx->pc = 0x27054cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_270550:
    // 0x270550: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x270550u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_270554:
    // 0x270554: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x270554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_270558:
    // 0x270558: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x270558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
label_27055c:
    // 0x27055c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x27055cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_270560:
    // 0x270560: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_270564:
    if (ctx->pc == 0x270564u) {
        ctx->pc = 0x270564u;
            // 0x270564: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x270568u;
        goto label_270568;
    }
    ctx->pc = 0x270560u;
    {
        const bool branch_taken_0x270560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270560u;
            // 0x270564: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270560) {
            ctx->pc = 0x270500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270500;
        }
    }
    ctx->pc = 0x270568u;
label_270568:
    // 0x270568: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x270568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_27056c:
    // 0x27056c: 0xafa002f0  sw          $zero, 0x2F0($sp)
    ctx->pc = 0x27056cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 0));
label_270570:
    // 0x270570: 0xafa202e4  sw          $v0, 0x2E4($sp)
    ctx->pc = 0x270570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 2));
label_270574:
    // 0x270574: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x270574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270578:
    // 0x270578: 0xafa002ec  sw          $zero, 0x2EC($sp)
    ctx->pc = 0x270578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 0));
label_27057c:
    // 0x27057c: 0xafa202c0  sw          $v0, 0x2C0($sp)
    ctx->pc = 0x27057cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 2));
label_270580:
    // 0x270580: 0xafa002e8  sw          $zero, 0x2E8($sp)
    ctx->pc = 0x270580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 0));
label_270584:
    // 0x270584: 0xafa002f4  sw          $zero, 0x2F4($sp)
    ctx->pc = 0x270584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 0));
label_270588:
    // 0x270588: 0xa3a002c4  sb          $zero, 0x2C4($sp)
    ctx->pc = 0x270588u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 708), (uint8_t)GPR_U32(ctx, 0));
label_27058c:
    // 0x27058c: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x27058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_270590:
    // 0x270590: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x270590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_270594:
    // 0x270594: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x270594u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270598:
    // 0x270598: 0xafa202f8  sw          $v0, 0x2F8($sp)
    ctx->pc = 0x270598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 2));
label_27059c:
    // 0x27059c: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x27059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2705a0:
    // 0x2705a0: 0xafa202fc  sw          $v0, 0x2FC($sp)
    ctx->pc = 0x2705a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 2));
label_2705a4:
    // 0x2705a4: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x2705a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2705a8:
    // 0x2705a8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2705a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2705ac:
    // 0x2705ac: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_2705b0:
    if (ctx->pc == 0x2705B0u) {
        ctx->pc = 0x2705B0u;
            // 0x2705b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2705B4u;
        goto label_2705b4;
    }
    ctx->pc = 0x2705ACu;
    {
        const bool branch_taken_0x2705ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2705B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2705ACu;
            // 0x2705b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705ac) {
            ctx->pc = 0x2705F8u;
            goto label_2705f8;
        }
    }
    ctx->pc = 0x2705B4u;
label_2705b4:
    // 0x2705b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2705b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2705b8:
    // 0x2705b8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2705b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2705bc:
    // 0x2705bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2705bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2705c0:
    // 0x2705c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2705c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2705c4:
    // 0x2705c4: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x2705c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_2705c8:
    // 0x2705c8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x2705c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_2705cc:
    // 0x2705cc: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2705ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2705d0:
    // 0x2705d0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2705d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2705d4:
    // 0x2705d4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2705d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2705d8:
    // 0x2705d8: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x2705d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
label_2705dc:
    // 0x2705dc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2705dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2705e0:
    // 0x2705e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2705e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2705e4:
    // 0x2705e4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2705e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2705e8:
    // 0x2705e8: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x2705e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2705ec:
    // 0x2705ec: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2705ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2705f0:
    // 0x2705f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_2705f4:
    if (ctx->pc == 0x2705F4u) {
        ctx->pc = 0x2705F4u;
            // 0x2705f4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x2705F8u;
        goto label_2705f8;
    }
    ctx->pc = 0x2705F0u;
    {
        const bool branch_taken_0x2705f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2705F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2705F0u;
            // 0x2705f4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705f0) {
            ctx->pc = 0x2705B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2705b8;
        }
    }
    ctx->pc = 0x2705F8u;
label_2705f8:
    // 0x2705f8: 0x8fa502d0  lw          $a1, 0x2D0($sp)
    ctx->pc = 0x2705f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_2705fc:
    // 0x2705fc: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2705fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
label_270600:
    // 0x270600: 0x8fa302d8  lw          $v1, 0x2D8($sp)
    ctx->pc = 0x270600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_270604:
    // 0x270604: 0x8fa202d4  lw          $v0, 0x2D4($sp)
    ctx->pc = 0x270604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_270608:
    // 0x270608: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x270608u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_27060c:
    // 0x27060c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x27060cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270610:
    // 0x270610: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x270610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_270614:
    // 0x270614: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x270614u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_270618:
    // 0x270618: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x270618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_27061c:
    // 0x27061c: 0x8fa202dc  lw          $v0, 0x2DC($sp)
    ctx->pc = 0x27061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
label_270620:
    // 0x270620: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x270620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270624:
    // 0x270624: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x270624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_270628:
    // 0x270628: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x270628u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_27062c:
    // 0x27062c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x27062cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_270630:
    // 0x270630: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_270634:
    if (ctx->pc == 0x270634u) {
        ctx->pc = 0x270634u;
            // 0x270634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270638u;
        goto label_270638;
    }
    ctx->pc = 0x270630u;
    {
        const bool branch_taken_0x270630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x270634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270630u;
            // 0x270634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270630) {
            ctx->pc = 0x270658u;
            goto label_270658;
        }
    }
    ctx->pc = 0x270638u;
label_270638:
    // 0x270638: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x270638u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_27063c:
    // 0x27063c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270640:
    // 0x270640: 0x0  nop
    ctx->pc = 0x270640u;
    // NOP
label_270644:
    // 0x270644: 0x0  nop
    ctx->pc = 0x270644u;
    // NOP
label_270648:
    // 0x270648: 0x0  nop
    ctx->pc = 0x270648u;
    // NOP
label_27064c:
    // 0x27064c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_270650:
    if (ctx->pc == 0x270650u) {
        ctx->pc = 0x270654u;
        goto label_270654;
    }
    ctx->pc = 0x27064Cu;
    {
        const bool branch_taken_0x27064c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27064c) {
            ctx->pc = 0x270638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270638;
        }
    }
    ctx->pc = 0x270654u;
label_270654:
    // 0x270654: 0x0  nop
    ctx->pc = 0x270654u;
    // NOP
label_270658:
    // 0x270658: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x270658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_27065c:
    // 0x27065c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27065cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270660:
    // 0x270660: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x270660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270664:
    // 0x270664: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x270664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_270668:
    // 0x270668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x270668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27066c:
    // 0x27066c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x27066cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_270670:
    // 0x270670: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x270670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_270674:
    // 0x270674: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_270678:
    if (ctx->pc == 0x270678u) {
        ctx->pc = 0x270678u;
            // 0x270678: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27067Cu;
        goto label_27067c;
    }
    ctx->pc = 0x270674u;
    {
        const bool branch_taken_0x270674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270674u;
            // 0x270678: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270674) {
            ctx->pc = 0x2706A0u;
            goto label_2706a0;
        }
    }
    ctx->pc = 0x27067Cu;
label_27067c:
    // 0x27067c: 0x0  nop
    ctx->pc = 0x27067cu;
    // NOP
label_270680:
    // 0x270680: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x270680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_270684:
    // 0x270684: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x270684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_270688:
    // 0x270688: 0x0  nop
    ctx->pc = 0x270688u;
    // NOP
label_27068c:
    // 0x27068c: 0x0  nop
    ctx->pc = 0x27068cu;
    // NOP
label_270690:
    // 0x270690: 0x0  nop
    ctx->pc = 0x270690u;
    // NOP
label_270694:
    // 0x270694: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_270698:
    if (ctx->pc == 0x270698u) {
        ctx->pc = 0x27069Cu;
        goto label_27069c;
    }
    ctx->pc = 0x270694u;
    {
        const bool branch_taken_0x270694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270694) {
            ctx->pc = 0x270680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270680;
        }
    }
    ctx->pc = 0x27069Cu;
label_27069c:
    // 0x27069c: 0x0  nop
    ctx->pc = 0x27069cu;
    // NOP
label_2706a0:
    // 0x2706a0: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x2706a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2706a4:
    // 0x2706a4: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x2706a4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_2706a8:
    // 0x2706a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2706a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2706ac:
    // 0x2706ac: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2706acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_2706b0:
    // 0x2706b0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_2706b4:
    if (ctx->pc == 0x2706B4u) {
        ctx->pc = 0x2706B4u;
            // 0x2706b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2706B8u;
        goto label_2706b8;
    }
    ctx->pc = 0x2706B0u;
    {
        const bool branch_taken_0x2706b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2706B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2706B0u;
            // 0x2706b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706b0) {
            ctx->pc = 0x270670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270670;
        }
    }
    ctx->pc = 0x2706B8u;
label_2706b8:
    // 0x2706b8: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x2706b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
label_2706bc:
    // 0x2706bc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2706c0:
    if (ctx->pc == 0x2706C0u) {
        ctx->pc = 0x2706C4u;
        goto label_2706c4;
    }
    ctx->pc = 0x2706BCu;
    {
        const bool branch_taken_0x2706bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2706bc) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x2706C4u;
label_2706c4:
    // 0x2706c4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2706c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2706c8:
    // 0x2706c8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2706c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_2706cc:
    // 0x2706cc: 0x27a80274  addiu       $t0, $sp, 0x274
    ctx->pc = 0x2706ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 628));
label_2706d0:
    // 0x2706d0: 0xafa402c8  sw          $a0, 0x2C8($sp)
    ctx->pc = 0x2706d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 4));
label_2706d4:
    // 0x2706d4: 0x27a602a8  addiu       $a2, $sp, 0x2A8
    ctx->pc = 0x2706d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_2706d8:
    // 0x2706d8: 0x27a40298  addiu       $a0, $sp, 0x298
    ctx->pc = 0x2706d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_2706dc:
    // 0x2706dc: 0x27a502ac  addiu       $a1, $sp, 0x2AC
    ctx->pc = 0x2706dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
label_2706e0:
    // 0x2706e0: 0x27a302b0  addiu       $v1, $sp, 0x2B0
    ctx->pc = 0x2706e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_2706e4:
    // 0x2706e4: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x2706e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_2706e8:
    // 0x2706e8: 0x27a202c4  addiu       $v0, $sp, 0x2C4
    ctx->pc = 0x2706e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
label_2706ec:
    // 0x2706ec: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x2706ecu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2706f0:
    // 0x2706f0: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x2706f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
label_2706f4:
    // 0x2706f4: 0x27a202b4  addiu       $v0, $sp, 0x2B4
    ctx->pc = 0x2706f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_2706f8:
    // 0x2706f8: 0x27a802c8  addiu       $t0, $sp, 0x2C8
    ctx->pc = 0x2706f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_2706fc:
    // 0x2706fc: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x2706fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_270700:
    // 0x270700: 0x27a80278  addiu       $t0, $sp, 0x278
    ctx->pc = 0x270700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_270704:
    // 0x270704: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x270704u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
label_270708:
    // 0x270708: 0x27a802cc  addiu       $t0, $sp, 0x2CC
    ctx->pc = 0x270708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_27070c:
    // 0x27070c: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x27070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_270710:
    // 0x270710: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x270710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_270714:
    // 0x270714: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x270714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270718:
    // 0x270718: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x270718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27071c:
    // 0x27071c: 0x27a8027c  addiu       $t0, $sp, 0x27C
    ctx->pc = 0x27071cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
label_270720:
    // 0x270720: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x270720u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_270724:
    // 0x270724: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x270724u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_270728:
    // 0x270728: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x270728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_27072c:
    // 0x27072c: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x27072cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_270730:
    // 0x270730: 0x27a802cc  addiu       $t0, $sp, 0x2CC
    ctx->pc = 0x270730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_270734:
    // 0x270734: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x270734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270738:
    // 0x270738: 0xc5000014  lwc1        $f0, 0x14($t0)
    ctx->pc = 0x270738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27073c:
    // 0x27073c: 0x27a8027c  addiu       $t0, $sp, 0x27C
    ctx->pc = 0x27073cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
label_270740:
    // 0x270740: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x270740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
label_270744:
    // 0x270744: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x270744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
label_270748:
    // 0x270748: 0x27a802e4  addiu       $t0, $sp, 0x2E4
    ctx->pc = 0x270748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_27074c:
    // 0x27074c: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x27074cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_270750:
    // 0x270750: 0xafa80294  sw          $t0, 0x294($sp)
    ctx->pc = 0x270750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 8));
label_270754:
    // 0x270754: 0x27a802e8  addiu       $t0, $sp, 0x2E8
    ctx->pc = 0x270754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
label_270758:
    // 0x270758: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x270758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27075c:
    // 0x27075c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x27075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270760:
    // 0x270760: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x270760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270764:
    // 0x270764: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x270764u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_270768:
    // 0x270768: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x270768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_27076c:
    // 0x27076c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x27076cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_270770:
    // 0x270770: 0x27a402f4  addiu       $a0, $sp, 0x2F4
    ctx->pc = 0x270770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
label_270774:
    // 0x270774: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x270774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_270778:
    // 0x270778: 0xafa402a4  sw          $a0, 0x2A4($sp)
    ctx->pc = 0x270778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 4));
label_27077c:
    // 0x27077c: 0x27a402f8  addiu       $a0, $sp, 0x2F8
    ctx->pc = 0x27077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_270780:
    // 0x270780: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x270780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_270784:
    // 0x270784: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x270784u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_270788:
    // 0x270788: 0x27a402fc  addiu       $a0, $sp, 0x2FC
    ctx->pc = 0x270788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 764));
label_27078c:
    // 0x27078c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x27078cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_270790:
    // 0x270790: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x270790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_270794:
    // 0x270794: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x270794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_270798:
    // 0x270798: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x270798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27079c:
    // 0x27079c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27079cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2707a0:
    // 0x2707a0: 0x27a30304  addiu       $v1, $sp, 0x304
    ctx->pc = 0x2707a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 772));
label_2707a4:
    // 0x2707a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2707a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2707a8:
    // 0x2707a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2707a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2707ac:
    // 0x2707ac: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x2707acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_2707b0:
    // 0x2707b0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x2707b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2707b4:
    // 0x2707b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2707b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2707b8:
    // 0x2707b8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2707b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2707bc:
    // 0x2707bc: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x2707bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2707c0:
    // 0x2707c0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2707c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2707c4:
    // 0x2707c4: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x2707c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2707c8:
    // 0x2707c8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2707c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2707cc:
    // 0x2707cc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_2707d0:
    if (ctx->pc == 0x2707D0u) {
        ctx->pc = 0x2707D0u;
            // 0x2707d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2707D4u;
        goto label_2707d4;
    }
    ctx->pc = 0x2707CCu;
    {
        const bool branch_taken_0x2707cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2707D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2707CCu;
            // 0x2707d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707cc) {
            ctx->pc = 0x270810u;
            goto label_270810;
        }
    }
    ctx->pc = 0x2707D4u;
label_2707d4:
    // 0x2707d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2707d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2707d8:
    // 0x2707d8: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x2707d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_2707dc:
    // 0x2707dc: 0x0  nop
    ctx->pc = 0x2707dcu;
    // NOP
label_2707e0:
    // 0x2707e0: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x2707e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2707e4:
    // 0x2707e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2707e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2707e8:
    // 0x2707e8: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x2707e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_2707ec:
    // 0x2707ec: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x2707ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2707f0:
    // 0x2707f0: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x2707f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2707f4:
    // 0x2707f4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2707f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2707f8:
    // 0x2707f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2707f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2707fc:
    // 0x2707fc: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x2707fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
label_270800:
    // 0x270800: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x270800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_270804:
    // 0x270804: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x270804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_270808:
    // 0x270808: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_27080c:
    if (ctx->pc == 0x27080Cu) {
        ctx->pc = 0x27080Cu;
            // 0x27080c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x270810u;
        goto label_270810;
    }
    ctx->pc = 0x270808u;
    {
        const bool branch_taken_0x270808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27080Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270808u;
            // 0x27080c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270808) {
            ctx->pc = 0x2707E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2707e0;
        }
    }
    ctx->pc = 0x270810u;
label_270810:
    // 0x270810: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x270810u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270814:
    // 0x270814: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x270814u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270818:
    // 0x270818: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x270818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27081c:
    // 0x27081c: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x27081cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270820:
    // 0x270820: 0x27b00270  addiu       $s0, $sp, 0x270
    ctx->pc = 0x270820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_270824:
    // 0x270824: 0x0  nop
    ctx->pc = 0x270824u;
    // NOP
label_270828:
    // 0x270828: 0xc6c2000c  lwc1        $f2, 0xC($s6)
    ctx->pc = 0x270828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27082c:
    // 0x27082c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x27082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270830:
    // 0x270830: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x270830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270834:
    // 0x270834: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x270834u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_270838:
    // 0x270838: 0xc0a3264  jal         func_28C990
label_27083c:
    if (ctx->pc == 0x27083Cu) {
        ctx->pc = 0x27083Cu;
            // 0x27083c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x270840u;
        goto label_270840;
    }
    ctx->pc = 0x270838u;
    SET_GPR_U32(ctx, 31, 0x270840u);
    ctx->pc = 0x27083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270838u;
            // 0x27083c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270840u; }
        if (ctx->pc != 0x270840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270840u; }
        if (ctx->pc != 0x270840u) { return; }
    }
    ctx->pc = 0x270840u;
label_270840:
    // 0x270840: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x270840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_270844:
    // 0x270844: 0xc6c20010  lwc1        $f2, 0x10($s6)
    ctx->pc = 0x270844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_270848:
    // 0x270848: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x270848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27084c:
    // 0x27084c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270850:
    // 0x270850: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x270850u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_270854:
    // 0x270854: 0xc0a3264  jal         func_28C990
label_270858:
    if (ctx->pc == 0x270858u) {
        ctx->pc = 0x270858u;
            // 0x270858: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x27085Cu;
        goto label_27085c;
    }
    ctx->pc = 0x270854u;
    SET_GPR_U32(ctx, 31, 0x27085Cu);
    ctx->pc = 0x270858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270854u;
            // 0x270858: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27085Cu; }
        if (ctx->pc != 0x27085Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27085Cu; }
        if (ctx->pc != 0x27085Cu) { return; }
    }
    ctx->pc = 0x27085Cu;
label_27085c:
    // 0x27085c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270860:
    // 0x270860: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x270860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_270864:
    // 0x270864: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x270864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_270868:
    // 0x270868: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x270868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27086c:
    // 0x27086c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x27086cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270870:
    // 0x270870: 0x5e082a  slt         $at, $v0, $fp
    ctx->pc = 0x270870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_270874:
    // 0x270874: 0x41f00a  movz        $fp, $v0, $at
    ctx->pc = 0x270874u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_270878:
    // 0x270878: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x270878u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_27087c:
    // 0x27087c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x27087cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_270880:
    // 0x270880: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x270880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
label_270884:
    // 0x270884: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x270884u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_270888:
    // 0x270888: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_27088c:
    if (ctx->pc == 0x27088Cu) {
        ctx->pc = 0x27088Cu;
            // 0x27088c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x270890u;
        goto label_270890;
    }
    ctx->pc = 0x270888u;
    {
        const bool branch_taken_0x270888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27088Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270888u;
            // 0x27088c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270888) {
            ctx->pc = 0x270828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270828;
        }
    }
    ctx->pc = 0x270890u;
label_270890:
    // 0x270890: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x270890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_270894:
    // 0x270894: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270898:
    // 0x270898: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x270898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_27089c:
    // 0x27089c: 0x27a20274  addiu       $v0, $sp, 0x274
    ctx->pc = 0x27089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 628));
label_2708a0:
    // 0x2708a0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2708a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2708a4:
    // 0x2708a4: 0x27a2027c  addiu       $v0, $sp, 0x27C
    ctx->pc = 0x2708a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
label_2708a8:
    // 0x2708a8: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2708a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2708ac:
    // 0x2708ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2708acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2708b0:
    // 0x2708b0: 0x8fa30288  lw          $v1, 0x288($sp)
    ctx->pc = 0x2708b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_2708b4:
    // 0x2708b4: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x2708b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_2708b8:
    // 0x2708b8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2708b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2708bc:
    // 0x2708bc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2708bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2708c0:
    // 0x2708c0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x2708c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2708c4:
    // 0x2708c4: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x2708c4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_2708c8:
    // 0x2708c8: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x2708c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_2708cc:
    // 0x2708cc: 0x8fa2028c  lw          $v0, 0x28C($sp)
    ctx->pc = 0x2708ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_2708d0:
    // 0x2708d0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2708d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2708d4:
    // 0x2708d4: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x2708d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2708d8:
    // 0x2708d8: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x2708d8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_2708dc:
    // 0x2708dc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2708dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2708e0:
    // 0x2708e0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2708e4:
    if (ctx->pc == 0x2708E4u) {
        ctx->pc = 0x2708E4u;
            // 0x2708e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2708E8u;
        goto label_2708e8;
    }
    ctx->pc = 0x2708E0u;
    {
        const bool branch_taken_0x2708e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2708E0u;
            // 0x2708e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708e0) {
            ctx->pc = 0x270908u;
            goto label_270908;
        }
    }
    ctx->pc = 0x2708E8u;
label_2708e8:
    // 0x2708e8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2708e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_2708ec:
    // 0x2708ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2708ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2708f0:
    // 0x2708f0: 0x0  nop
    ctx->pc = 0x2708f0u;
    // NOP
label_2708f4:
    // 0x2708f4: 0x0  nop
    ctx->pc = 0x2708f4u;
    // NOP
label_2708f8:
    // 0x2708f8: 0x0  nop
    ctx->pc = 0x2708f8u;
    // NOP
label_2708fc:
    // 0x2708fc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_270900:
    if (ctx->pc == 0x270900u) {
        ctx->pc = 0x270904u;
        goto label_270904;
    }
    ctx->pc = 0x2708FCu;
    {
        const bool branch_taken_0x2708fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2708fc) {
            ctx->pc = 0x2708E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2708e8;
        }
    }
    ctx->pc = 0x270904u;
label_270904:
    // 0x270904: 0x0  nop
    ctx->pc = 0x270904u;
    // NOP
label_270908:
    // 0x270908: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x270908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_27090c:
    // 0x27090c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270910:
    // 0x270910: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x270910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270914:
    // 0x270914: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x270914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_270918:
    // 0x270918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x270918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27091c:
    // 0x27091c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x27091cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_270920:
    // 0x270920: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x270920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_270924:
    // 0x270924: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_270928:
    if (ctx->pc == 0x270928u) {
        ctx->pc = 0x270928u;
            // 0x270928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27092Cu;
        goto label_27092c;
    }
    ctx->pc = 0x270924u;
    {
        const bool branch_taken_0x270924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270924u;
            // 0x270928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270924) {
            ctx->pc = 0x270950u;
            goto label_270950;
        }
    }
    ctx->pc = 0x27092Cu;
label_27092c:
    // 0x27092c: 0x0  nop
    ctx->pc = 0x27092cu;
    // NOP
label_270930:
    // 0x270930: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x270930u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_270934:
    // 0x270934: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x270934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_270938:
    // 0x270938: 0x0  nop
    ctx->pc = 0x270938u;
    // NOP
label_27093c:
    // 0x27093c: 0x0  nop
    ctx->pc = 0x27093cu;
    // NOP
label_270940:
    // 0x270940: 0x0  nop
    ctx->pc = 0x270940u;
    // NOP
label_270944:
    // 0x270944: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_270948:
    if (ctx->pc == 0x270948u) {
        ctx->pc = 0x27094Cu;
        goto label_27094c;
    }
    ctx->pc = 0x270944u;
    {
        const bool branch_taken_0x270944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270944) {
            ctx->pc = 0x270930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270930;
        }
    }
    ctx->pc = 0x27094Cu;
label_27094c:
    // 0x27094c: 0x0  nop
    ctx->pc = 0x27094cu;
    // NOP
label_270950:
    // 0x270950: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x270950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_270954:
    // 0x270954: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x270954u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_270958:
    // 0x270958: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x270958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_27095c:
    // 0x27095c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x27095cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_270960:
    // 0x270960: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_270964:
    if (ctx->pc == 0x270964u) {
        ctx->pc = 0x270964u;
            // 0x270964: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270968u;
        goto label_270968;
    }
    ctx->pc = 0x270960u;
    {
        const bool branch_taken_0x270960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270960u;
            // 0x270964: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270960) {
            ctx->pc = 0x270920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270920;
        }
    }
    ctx->pc = 0x270968u;
label_270968:
    // 0x270968: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x270968u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
label_27096c:
    // 0x27096c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_270970:
    if (ctx->pc == 0x270970u) {
        ctx->pc = 0x270974u;
        goto label_270974;
    }
    ctx->pc = 0x27096Cu;
    {
        const bool branch_taken_0x27096c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27096c) {
            ctx->pc = 0x270978u;
            goto label_270978;
        }
    }
    ctx->pc = 0x270974u;
label_270974:
    // 0x270974: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x270974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_270978:
    // 0x270978: 0x27a20278  addiu       $v0, $sp, 0x278
    ctx->pc = 0x270978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_27097c:
    // 0x27097c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27097cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270980:
    // 0x270980: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x270980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_270984:
    // 0x270984: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x270984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_270988:
    // 0x270988: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27098c:
    // 0x27098c: 0xc09ab24  jal         func_26AC90
label_270990:
    if (ctx->pc == 0x270990u) {
        ctx->pc = 0x270990u;
            // 0x270990: 0x27a70270  addiu       $a3, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x270994u;
        goto label_270994;
    }
    ctx->pc = 0x27098Cu;
    SET_GPR_U32(ctx, 31, 0x270994u);
    ctx->pc = 0x270990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27098Cu;
            // 0x270990: 0x27a70270  addiu       $a3, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26AC90u;
    if (runtime->hasFunction(0x26AC90u)) {
        auto targetFn = runtime->lookupFunction(0x26AC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270994u; }
        if (ctx->pc != 0x270994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026AC90_0x26ac90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270994u; }
        if (ctx->pc != 0x270994u) { return; }
    }
    ctx->pc = 0x270994u;
label_270994:
    // 0x270994: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x270994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_270998:
    // 0x270998: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x270998u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27099c:
    // 0x27099c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x27099cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2709a0:
    // 0x2709a0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2709a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2709a4:
    // 0x2709a4: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x2709a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2709a8:
    // 0x2709a8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2709a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2709ac:
    // 0x2709ac: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2709acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2709b0:
    // 0x2709b0: 0xc6c2000c  lwc1        $f2, 0xC($s6)
    ctx->pc = 0x2709b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2709b4:
    // 0x2709b4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2709b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2709b8:
    // 0x2709b8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2709b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2709bc:
    // 0x2709bc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2709bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2709c0:
    // 0x2709c0: 0xc0a3264  jal         func_28C990
label_2709c4:
    if (ctx->pc == 0x2709C4u) {
        ctx->pc = 0x2709C4u;
            // 0x2709c4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2709C8u;
        goto label_2709c8;
    }
    ctx->pc = 0x2709C0u;
    SET_GPR_U32(ctx, 31, 0x2709C8u);
    ctx->pc = 0x2709C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2709C0u;
            // 0x2709c4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709C8u; }
        if (ctx->pc != 0x2709C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709C8u; }
        if (ctx->pc != 0x2709C8u) { return; }
    }
    ctx->pc = 0x2709C8u;
label_2709c8:
    // 0x2709c8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2709c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2709cc:
    // 0x2709cc: 0xc6c20010  lwc1        $f2, 0x10($s6)
    ctx->pc = 0x2709ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2709d0:
    // 0x2709d0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2709d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2709d4:
    // 0x2709d4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2709d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2709d8:
    // 0x2709d8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2709d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2709dc:
    // 0x2709dc: 0xc0a3264  jal         func_28C990
label_2709e0:
    if (ctx->pc == 0x2709E0u) {
        ctx->pc = 0x2709E0u;
            // 0x2709e0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2709E4u;
        goto label_2709e4;
    }
    ctx->pc = 0x2709DCu;
    SET_GPR_U32(ctx, 31, 0x2709E4u);
    ctx->pc = 0x2709E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2709DCu;
            // 0x2709e0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709E4u; }
        if (ctx->pc != 0x2709E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2709E4u; }
        if (ctx->pc != 0x2709E4u) { return; }
    }
    ctx->pc = 0x2709E4u;
label_2709e4:
    // 0x2709e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2709e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2709e8:
    // 0x2709e8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2709e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2709ec:
    // 0x2709ec: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2709ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2709f0:
    // 0x2709f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2709f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2709f4:
    // 0x2709f4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2709f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2709f8:
    // 0x2709f8: 0x5e082a  slt         $at, $v0, $fp
    ctx->pc = 0x2709f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2709fc:
    // 0x2709fc: 0x41f00a  movz        $fp, $v0, $at
    ctx->pc = 0x2709fcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_270a00:
    // 0x270a00: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x270a00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_270a04:
    // 0x270a04: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x270a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_270a08:
    // 0x270a08: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x270a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
label_270a0c:
    // 0x270a0c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x270a0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_270a10:
    // 0x270a10: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_270a14:
    if (ctx->pc == 0x270A14u) {
        ctx->pc = 0x270A14u;
            // 0x270a14: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x270A18u;
        goto label_270a18;
    }
    ctx->pc = 0x270A10u;
    {
        const bool branch_taken_0x270a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270A10u;
            // 0x270a14: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a10) {
            ctx->pc = 0x2709B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2709b0;
        }
    }
    ctx->pc = 0x270A18u;
label_270a18:
    // 0x270a18: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x270a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_270a1c:
    // 0x270a1c: 0xafa00240  sw          $zero, 0x240($sp)
    ctx->pc = 0x270a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
label_270a20:
    // 0x270a20: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x270a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
label_270a24:
    // 0x270a24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x270a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270a28:
    // 0x270a28: 0xafa0023c  sw          $zero, 0x23C($sp)
    ctx->pc = 0x270a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 0));
label_270a2c:
    // 0x270a2c: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x270a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
label_270a30:
    // 0x270a30: 0xafa00238  sw          $zero, 0x238($sp)
    ctx->pc = 0x270a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
label_270a34:
    // 0x270a34: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x270a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
label_270a38:
    // 0x270a38: 0xa3a00214  sb          $zero, 0x214($sp)
    ctx->pc = 0x270a38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 532), (uint8_t)GPR_U32(ctx, 0));
label_270a3c:
    // 0x270a3c: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x270a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_270a40:
    // 0x270a40: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x270a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_270a44:
    // 0x270a44: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x270a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270a48:
    // 0x270a48: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x270a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_270a4c:
    // 0x270a4c: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x270a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_270a50:
    // 0x270a50: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x270a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_270a54:
    // 0x270a54: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x270a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_270a58:
    // 0x270a58: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x270a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_270a5c:
    // 0x270a5c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_270a60:
    if (ctx->pc == 0x270A60u) {
        ctx->pc = 0x270A60u;
            // 0x270a60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270A64u;
        goto label_270a64;
    }
    ctx->pc = 0x270A5Cu;
    {
        const bool branch_taken_0x270a5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270A5Cu;
            // 0x270a60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a5c) {
            ctx->pc = 0x270AA8u;
            goto label_270aa8;
        }
    }
    ctx->pc = 0x270A64u;
label_270a64:
    // 0x270a64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x270a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270a68:
    // 0x270a68: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x270a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_270a6c:
    // 0x270a6c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x270a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_270a70:
    // 0x270a70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x270a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_270a74:
    // 0x270a74: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x270a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_270a78:
    // 0x270a78: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x270a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_270a7c:
    // 0x270a7c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x270a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_270a80:
    // 0x270a80: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x270a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270a84:
    // 0x270a84: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x270a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_270a88:
    // 0x270a88: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x270a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
label_270a8c:
    // 0x270a8c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x270a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_270a90:
    // 0x270a90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x270a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_270a94:
    // 0x270a94: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x270a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_270a98:
    // 0x270a98: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x270a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_270a9c:
    // 0x270a9c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x270a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_270aa0:
    // 0x270aa0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_270aa4:
    if (ctx->pc == 0x270AA4u) {
        ctx->pc = 0x270AA4u;
            // 0x270aa4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x270AA8u;
        goto label_270aa8;
    }
    ctx->pc = 0x270AA0u;
    {
        const bool branch_taken_0x270aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270AA0u;
            // 0x270aa4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270aa0) {
            ctx->pc = 0x270A68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270a68;
        }
    }
    ctx->pc = 0x270AA8u;
label_270aa8:
    // 0x270aa8: 0x8fa50220  lw          $a1, 0x220($sp)
    ctx->pc = 0x270aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_270aac:
    // 0x270aac: 0x8fa4021c  lw          $a0, 0x21C($sp)
    ctx->pc = 0x270aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_270ab0:
    // 0x270ab0: 0x8fa30228  lw          $v1, 0x228($sp)
    ctx->pc = 0x270ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_270ab4:
    // 0x270ab4: 0x8fa20224  lw          $v0, 0x224($sp)
    ctx->pc = 0x270ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_270ab8:
    // 0x270ab8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x270ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_270abc:
    // 0x270abc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x270abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270ac0:
    // 0x270ac0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x270ac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_270ac4:
    // 0x270ac4: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x270ac4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_270ac8:
    // 0x270ac8: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x270ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_270acc:
    // 0x270acc: 0x8fa2022c  lw          $v0, 0x22C($sp)
    ctx->pc = 0x270accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_270ad0:
    // 0x270ad0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x270ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270ad4:
    // 0x270ad4: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x270ad4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_270ad8:
    // 0x270ad8: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x270ad8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_270adc:
    // 0x270adc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x270adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_270ae0:
    // 0x270ae0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_270ae4:
    if (ctx->pc == 0x270AE4u) {
        ctx->pc = 0x270AE4u;
            // 0x270ae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270AE8u;
        goto label_270ae8;
    }
    ctx->pc = 0x270AE0u;
    {
        const bool branch_taken_0x270ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x270AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270AE0u;
            // 0x270ae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ae0) {
            ctx->pc = 0x270B08u;
            goto label_270b08;
        }
    }
    ctx->pc = 0x270AE8u;
label_270ae8:
    // 0x270ae8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x270ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_270aec:
    // 0x270aec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270af0:
    // 0x270af0: 0x0  nop
    ctx->pc = 0x270af0u;
    // NOP
label_270af4:
    // 0x270af4: 0x0  nop
    ctx->pc = 0x270af4u;
    // NOP
label_270af8:
    // 0x270af8: 0x0  nop
    ctx->pc = 0x270af8u;
    // NOP
label_270afc:
    // 0x270afc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_270b00:
    if (ctx->pc == 0x270B00u) {
        ctx->pc = 0x270B04u;
        goto label_270b04;
    }
    ctx->pc = 0x270AFCu;
    {
        const bool branch_taken_0x270afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270afc) {
            ctx->pc = 0x270AE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270ae8;
        }
    }
    ctx->pc = 0x270B04u;
label_270b04:
    // 0x270b04: 0x0  nop
    ctx->pc = 0x270b04u;
    // NOP
label_270b08:
    // 0x270b08: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x270b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_270b0c:
    // 0x270b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270b10:
    // 0x270b10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x270b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270b14:
    // 0x270b14: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x270b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_270b18:
    // 0x270b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x270b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270b1c:
    // 0x270b1c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x270b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_270b20:
    // 0x270b20: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x270b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_270b24:
    // 0x270b24: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_270b28:
    if (ctx->pc == 0x270B28u) {
        ctx->pc = 0x270B28u;
            // 0x270b28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270B2Cu;
        goto label_270b2c;
    }
    ctx->pc = 0x270B24u;
    {
        const bool branch_taken_0x270b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B24u;
            // 0x270b28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b24) {
            ctx->pc = 0x270B50u;
            goto label_270b50;
        }
    }
    ctx->pc = 0x270B2Cu;
label_270b2c:
    // 0x270b2c: 0x0  nop
    ctx->pc = 0x270b2cu;
    // NOP
label_270b30:
    // 0x270b30: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x270b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_270b34:
    // 0x270b34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x270b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_270b38:
    // 0x270b38: 0x0  nop
    ctx->pc = 0x270b38u;
    // NOP
label_270b3c:
    // 0x270b3c: 0x0  nop
    ctx->pc = 0x270b3cu;
    // NOP
label_270b40:
    // 0x270b40: 0x0  nop
    ctx->pc = 0x270b40u;
    // NOP
label_270b44:
    // 0x270b44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_270b48:
    if (ctx->pc == 0x270B48u) {
        ctx->pc = 0x270B4Cu;
        goto label_270b4c;
    }
    ctx->pc = 0x270B44u;
    {
        const bool branch_taken_0x270b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270b44) {
            ctx->pc = 0x270B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270b30;
        }
    }
    ctx->pc = 0x270B4Cu;
label_270b4c:
    // 0x270b4c: 0x0  nop
    ctx->pc = 0x270b4cu;
    // NOP
label_270b50:
    // 0x270b50: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x270b50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_270b54:
    // 0x270b54: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x270b54u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_270b58:
    // 0x270b58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x270b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_270b5c:
    // 0x270b5c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x270b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_270b60:
    // 0x270b60: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_270b64:
    if (ctx->pc == 0x270B64u) {
        ctx->pc = 0x270B64u;
            // 0x270b64: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270B68u;
        goto label_270b68;
    }
    ctx->pc = 0x270B60u;
    {
        const bool branch_taken_0x270b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B60u;
            // 0x270b64: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b60) {
            ctx->pc = 0x270B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270b20;
        }
    }
    ctx->pc = 0x270B68u;
label_270b68:
    // 0x270b68: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x270b68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
label_270b6c:
    // 0x270b6c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_270b70:
    if (ctx->pc == 0x270B70u) {
        ctx->pc = 0x270B74u;
        goto label_270b74;
    }
    ctx->pc = 0x270B6Cu;
    {
        const bool branch_taken_0x270b6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x270b6c) {
            ctx->pc = 0x270B78u;
            goto label_270b78;
        }
    }
    ctx->pc = 0x270B74u;
label_270b74:
    // 0x270b74: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x270b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_270b78:
    // 0x270b78: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x270b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_270b7c:
    // 0x270b7c: 0x27ac021c  addiu       $t4, $sp, 0x21C
    ctx->pc = 0x270b7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
label_270b80:
    // 0x270b80: 0xafa40218  sw          $a0, 0x218($sp)
    ctx->pc = 0x270b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 4));
label_270b84:
    // 0x270b84: 0x27ab0238  addiu       $t3, $sp, 0x238
    ctx->pc = 0x270b84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
label_270b88:
    // 0x270b88: 0x27a40214  addiu       $a0, $sp, 0x214
    ctx->pc = 0x270b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
label_270b8c:
    // 0x270b8c: 0x27aa01d8  addiu       $t2, $sp, 0x1D8
    ctx->pc = 0x270b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_270b90:
    // 0x270b90: 0x27a301e8  addiu       $v1, $sp, 0x1E8
    ctx->pc = 0x270b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_270b94:
    // 0x270b94: 0x27a201ec  addiu       $v0, $sp, 0x1EC
    ctx->pc = 0x270b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
label_270b98:
    // 0x270b98: 0x27a90250  addiu       $t1, $sp, 0x250
    ctx->pc = 0x270b98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_270b9c:
    // 0x270b9c: 0x27a801f0  addiu       $t0, $sp, 0x1F0
    ctx->pc = 0x270b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_270ba0:
    // 0x270ba0: 0x27a70254  addiu       $a3, $sp, 0x254
    ctx->pc = 0x270ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
label_270ba4:
    // 0x270ba4: 0x27a601f4  addiu       $a2, $sp, 0x1F4
    ctx->pc = 0x270ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_270ba8:
    // 0x270ba8: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x270ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
label_270bac:
    // 0x270bac: 0x908d0000  lbu         $t5, 0x0($a0)
    ctx->pc = 0x270bacu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_270bb0:
    // 0x270bb0: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x270bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_270bb4:
    // 0x270bb4: 0xa0ad0000  sb          $t5, 0x0($a1)
    ctx->pc = 0x270bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 13));
label_270bb8:
    // 0x270bb8: 0x8fad0218  lw          $t5, 0x218($sp)
    ctx->pc = 0x270bb8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_270bbc:
    // 0x270bbc: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x270bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_270bc0:
    // 0x270bc0: 0xacad0000  sw          $t5, 0x0($a1)
    ctx->pc = 0x270bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 13));
label_270bc4:
    // 0x270bc4: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x270bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_270bc8:
    // 0x270bc8: 0x27a501bc  addiu       $a1, $sp, 0x1BC
    ctx->pc = 0x270bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
label_270bcc:
    // 0x270bcc: 0xc5820004  lwc1        $f2, 0x4($t4)
    ctx->pc = 0x270bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_270bd0:
    // 0x270bd0: 0xc5810008  lwc1        $f1, 0x8($t4)
    ctx->pc = 0x270bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270bd4:
    // 0x270bd4: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x270bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270bd8:
    // 0x270bd8: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x270bd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_270bdc:
    // 0x270bdc: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x270bdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_270be0:
    // 0x270be0: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x270be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_270be4:
    // 0x270be4: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x270be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_270be8:
    // 0x270be8: 0xc5810010  lwc1        $f1, 0x10($t4)
    ctx->pc = 0x270be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270bec:
    // 0x270bec: 0xc5800014  lwc1        $f0, 0x14($t4)
    ctx->pc = 0x270becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270bf0:
    // 0x270bf0: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x270bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_270bf4:
    // 0x270bf4: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x270bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_270bf8:
    // 0x270bf8: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x270bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_270bfc:
    // 0x270bfc: 0xafa501d4  sw          $a1, 0x1D4($sp)
    ctx->pc = 0x270bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 5));
label_270c00:
    // 0x270c00: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x270c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_270c04:
    // 0x270c04: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x270c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270c08:
    // 0x270c08: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x270c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270c0c:
    // 0x270c0c: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x270c0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_270c10:
    // 0x270c10: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x270c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_270c14:
    // 0x270c14: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x270c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_270c18:
    // 0x270c18: 0x8faa0244  lw          $t2, 0x244($sp)
    ctx->pc = 0x270c18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_270c1c:
    // 0x270c1c: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x270c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_270c20:
    // 0x270c20: 0xafaa01e4  sw          $t2, 0x1E4($sp)
    ctx->pc = 0x270c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 10));
label_270c24:
    // 0x270c24: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x270c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_270c28:
    // 0x270c28: 0x8fa5024c  lw          $a1, 0x24C($sp)
    ctx->pc = 0x270c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_270c2c:
    // 0x270c2c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x270c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_270c30:
    // 0x270c30: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x270c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270c34:
    // 0x270c34: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x270c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_270c38:
    // 0x270c38: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x270c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270c3c:
    // 0x270c3c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x270c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_270c40:
    // 0x270c40: 0x8e860028  lw          $a2, 0x28($s4)
    ctx->pc = 0x270c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_270c44:
    // 0x270c44: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x270c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_270c48:
    // 0x270c48: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x270c48u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_270c4c:
    // 0x270c4c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x270c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_270c50:
    // 0x270c50: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x270c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_270c54:
    // 0x270c54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x270c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_270c58:
    // 0x270c58: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x270c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_270c5c:
    // 0x270c5c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x270c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_270c60:
    // 0x270c60: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_270c64:
    if (ctx->pc == 0x270C64u) {
        ctx->pc = 0x270C64u;
            // 0x270c64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270C68u;
        goto label_270c68;
    }
    ctx->pc = 0x270C60u;
    {
        const bool branch_taken_0x270c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C60u;
            // 0x270c64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c60) {
            ctx->pc = 0x270CA0u;
            goto label_270ca0;
        }
    }
    ctx->pc = 0x270C68u;
label_270c68:
    // 0x270c68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x270c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270c6c:
    // 0x270c6c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x270c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_270c70:
    // 0x270c70: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x270c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_270c74:
    // 0x270c74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x270c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_270c78:
    // 0x270c78: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x270c78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_270c7c:
    // 0x270c7c: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x270c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_270c80:
    // 0x270c80: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x270c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_270c84:
    // 0x270c84: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x270c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270c88:
    // 0x270c88: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x270c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_270c8c:
    // 0x270c8c: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x270c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
label_270c90:
    // 0x270c90: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x270c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_270c94:
    // 0x270c94: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x270c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_270c98:
    // 0x270c98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_270c9c:
    if (ctx->pc == 0x270C9Cu) {
        ctx->pc = 0x270C9Cu;
            // 0x270c9c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x270CA0u;
        goto label_270ca0;
    }
    ctx->pc = 0x270C98u;
    {
        const bool branch_taken_0x270c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C98u;
            // 0x270c9c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c98) {
            ctx->pc = 0x270C70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270c70;
        }
    }
    ctx->pc = 0x270CA0u;
label_270ca0:
    // 0x270ca0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x270ca0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270ca4:
    // 0x270ca4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x270ca4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270ca8:
    // 0x270ca8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x270ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270cac:
    // 0x270cac: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x270cacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270cb0:
    // 0x270cb0: 0x27b001b0  addiu       $s0, $sp, 0x1B0
    ctx->pc = 0x270cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_270cb4:
    // 0x270cb4: 0x0  nop
    ctx->pc = 0x270cb4u;
    // NOP
label_270cb8:
    // 0x270cb8: 0xc6c2000c  lwc1        $f2, 0xC($s6)
    ctx->pc = 0x270cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_270cbc:
    // 0x270cbc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x270cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270cc0:
    // 0x270cc0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x270cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270cc4:
    // 0x270cc4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x270cc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_270cc8:
    // 0x270cc8: 0xc0a3264  jal         func_28C990
label_270ccc:
    if (ctx->pc == 0x270CCCu) {
        ctx->pc = 0x270CCCu;
            // 0x270ccc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x270CD0u;
        goto label_270cd0;
    }
    ctx->pc = 0x270CC8u;
    SET_GPR_U32(ctx, 31, 0x270CD0u);
    ctx->pc = 0x270CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270CC8u;
            // 0x270ccc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CD0u; }
        if (ctx->pc != 0x270CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CD0u; }
        if (ctx->pc != 0x270CD0u) { return; }
    }
    ctx->pc = 0x270CD0u;
label_270cd0:
    // 0x270cd0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x270cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_270cd4:
    // 0x270cd4: 0xc6c20010  lwc1        $f2, 0x10($s6)
    ctx->pc = 0x270cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_270cd8:
    // 0x270cd8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x270cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270cdc:
    // 0x270cdc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x270cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270ce0:
    // 0x270ce0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x270ce0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_270ce4:
    // 0x270ce4: 0xc0a3264  jal         func_28C990
label_270ce8:
    if (ctx->pc == 0x270CE8u) {
        ctx->pc = 0x270CE8u;
            // 0x270ce8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x270CECu;
        goto label_270cec;
    }
    ctx->pc = 0x270CE4u;
    SET_GPR_U32(ctx, 31, 0x270CECu);
    ctx->pc = 0x270CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270CE4u;
            // 0x270ce8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CECu; }
        if (ctx->pc != 0x270CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CECu; }
        if (ctx->pc != 0x270CECu) { return; }
    }
    ctx->pc = 0x270CECu;
label_270cec:
    // 0x270cec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270cf0:
    // 0x270cf0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x270cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_270cf4:
    // 0x270cf4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x270cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_270cf8:
    // 0x270cf8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x270cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_270cfc:
    // 0x270cfc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x270cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270d00:
    // 0x270d00: 0x5e082a  slt         $at, $v0, $fp
    ctx->pc = 0x270d00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_270d04:
    // 0x270d04: 0x41f00a  movz        $fp, $v0, $at
    ctx->pc = 0x270d04u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_270d08:
    // 0x270d08: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x270d08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_270d0c:
    // 0x270d0c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x270d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_270d10:
    // 0x270d10: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x270d10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
label_270d14:
    // 0x270d14: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x270d14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_270d18:
    // 0x270d18: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_270d1c:
    if (ctx->pc == 0x270D1Cu) {
        ctx->pc = 0x270D1Cu;
            // 0x270d1c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x270D20u;
        goto label_270d20;
    }
    ctx->pc = 0x270D18u;
    {
        const bool branch_taken_0x270d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270D18u;
            // 0x270d1c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d18) {
            ctx->pc = 0x270CB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270cb8;
        }
    }
    ctx->pc = 0x270D20u;
label_270d20:
    // 0x270d20: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x270d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_270d24:
    // 0x270d24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270d28:
    // 0x270d28: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x270d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_270d2c:
    // 0x270d2c: 0x27a201b4  addiu       $v0, $sp, 0x1B4
    ctx->pc = 0x270d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_270d30:
    // 0x270d30: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x270d30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_270d34:
    // 0x270d34: 0x27a201bc  addiu       $v0, $sp, 0x1BC
    ctx->pc = 0x270d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
label_270d38:
    // 0x270d38: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x270d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_270d3c:
    // 0x270d3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x270d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_270d40:
    // 0x270d40: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x270d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_270d44:
    // 0x270d44: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x270d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_270d48:
    // 0x270d48: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x270d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_270d4c:
    // 0x270d4c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x270d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270d50:
    // 0x270d50: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x270d50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_270d54:
    // 0x270d54: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x270d54u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_270d58:
    // 0x270d58: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x270d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_270d5c:
    // 0x270d5c: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x270d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_270d60:
    // 0x270d60: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x270d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270d64:
    // 0x270d64: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x270d64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_270d68:
    // 0x270d68: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x270d68u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_270d6c:
    // 0x270d6c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x270d6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_270d70:
    // 0x270d70: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_270d74:
    if (ctx->pc == 0x270D74u) {
        ctx->pc = 0x270D74u;
            // 0x270d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270D78u;
        goto label_270d78;
    }
    ctx->pc = 0x270D70u;
    {
        const bool branch_taken_0x270d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270D70u;
            // 0x270d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d70) {
            ctx->pc = 0x270D98u;
            goto label_270d98;
        }
    }
    ctx->pc = 0x270D78u;
label_270d78:
    // 0x270d78: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x270d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_270d7c:
    // 0x270d7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270d80:
    // 0x270d80: 0x0  nop
    ctx->pc = 0x270d80u;
    // NOP
label_270d84:
    // 0x270d84: 0x0  nop
    ctx->pc = 0x270d84u;
    // NOP
label_270d88:
    // 0x270d88: 0x0  nop
    ctx->pc = 0x270d88u;
    // NOP
label_270d8c:
    // 0x270d8c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_270d90:
    if (ctx->pc == 0x270D90u) {
        ctx->pc = 0x270D94u;
        goto label_270d94;
    }
    ctx->pc = 0x270D8Cu;
    {
        const bool branch_taken_0x270d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270d8c) {
            ctx->pc = 0x270D78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270d78;
        }
    }
    ctx->pc = 0x270D94u;
label_270d94:
    // 0x270d94: 0x0  nop
    ctx->pc = 0x270d94u;
    // NOP
label_270d98:
    // 0x270d98: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x270d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_270d9c:
    // 0x270d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270da0:
    // 0x270da0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x270da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270da4:
    // 0x270da4: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x270da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_270da8:
    // 0x270da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x270da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270dac:
    // 0x270dac: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x270dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_270db0:
    // 0x270db0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x270db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_270db4:
    // 0x270db4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_270db8:
    if (ctx->pc == 0x270DB8u) {
        ctx->pc = 0x270DB8u;
            // 0x270db8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270DBCu;
        goto label_270dbc;
    }
    ctx->pc = 0x270DB4u;
    {
        const bool branch_taken_0x270db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270DB4u;
            // 0x270db8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270db4) {
            ctx->pc = 0x270DE0u;
            goto label_270de0;
        }
    }
    ctx->pc = 0x270DBCu;
label_270dbc:
    // 0x270dbc: 0x0  nop
    ctx->pc = 0x270dbcu;
    // NOP
label_270dc0:
    // 0x270dc0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x270dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_270dc4:
    // 0x270dc4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x270dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_270dc8:
    // 0x270dc8: 0x0  nop
    ctx->pc = 0x270dc8u;
    // NOP
label_270dcc:
    // 0x270dcc: 0x0  nop
    ctx->pc = 0x270dccu;
    // NOP
label_270dd0:
    // 0x270dd0: 0x0  nop
    ctx->pc = 0x270dd0u;
    // NOP
label_270dd4:
    // 0x270dd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_270dd8:
    if (ctx->pc == 0x270DD8u) {
        ctx->pc = 0x270DDCu;
        goto label_270ddc;
    }
    ctx->pc = 0x270DD4u;
    {
        const bool branch_taken_0x270dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270dd4) {
            ctx->pc = 0x270DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270dc0;
        }
    }
    ctx->pc = 0x270DDCu;
label_270ddc:
    // 0x270ddc: 0x0  nop
    ctx->pc = 0x270ddcu;
    // NOP
label_270de0:
    // 0x270de0: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x270de0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_270de4:
    // 0x270de4: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x270de4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_270de8:
    // 0x270de8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x270de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_270dec:
    // 0x270dec: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x270decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_270df0:
    // 0x270df0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_270df4:
    if (ctx->pc == 0x270DF4u) {
        ctx->pc = 0x270DF4u;
            // 0x270df4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270DF8u;
        goto label_270df8;
    }
    ctx->pc = 0x270DF0u;
    {
        const bool branch_taken_0x270df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270DF0u;
            // 0x270df4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270df0) {
            ctx->pc = 0x270DB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270db0;
        }
    }
    ctx->pc = 0x270DF8u;
label_270df8:
    // 0x270df8: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x270df8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
label_270dfc:
    // 0x270dfc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_270e00:
    if (ctx->pc == 0x270E00u) {
        ctx->pc = 0x270E04u;
        goto label_270e04;
    }
    ctx->pc = 0x270DFCu;
    {
        const bool branch_taken_0x270dfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x270dfc) {
            ctx->pc = 0x270E08u;
            goto label_270e08;
        }
    }
    ctx->pc = 0x270E04u;
label_270e04:
    // 0x270e04: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x270e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_270e08:
    // 0x270e08: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x270e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_270e0c:
    // 0x270e0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x270e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270e10:
    // 0x270e10: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x270e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_270e14:
    // 0x270e14: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x270e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_270e18:
    // 0x270e18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_270e1c:
    // 0x270e1c: 0xc09ad2c  jal         func_26B4B0
label_270e20:
    if (ctx->pc == 0x270E20u) {
        ctx->pc = 0x270E20u;
            // 0x270e20: 0x27a701b0  addiu       $a3, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x270E24u;
        goto label_270e24;
    }
    ctx->pc = 0x270E1Cu;
    SET_GPR_U32(ctx, 31, 0x270E24u);
    ctx->pc = 0x270E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270E1Cu;
            // 0x270e20: 0x27a701b0  addiu       $a3, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B4B0u;
    if (runtime->hasFunction(0x26B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x26B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270E24u; }
        if (ctx->pc != 0x270E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B4B0_0x26b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270E24u; }
        if (ctx->pc != 0x270E24u) { return; }
    }
    ctx->pc = 0x270E24u;
label_270e24:
    // 0x270e24: 0x8fa802c0  lw          $t0, 0x2C0($sp)
    ctx->pc = 0x270e24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_270e28:
    // 0x270e28: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x270e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_270e2c:
    // 0x270e2c: 0x27a60198  addiu       $a2, $sp, 0x198
    ctx->pc = 0x270e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_270e30:
    // 0x270e30: 0x27a5019c  addiu       $a1, $sp, 0x19C
    ctx->pc = 0x270e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_270e34:
    // 0x270e34: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x270e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_270e38:
    // 0x270e38: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x270e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_270e3c:
    // 0x270e3c: 0xafa80160  sw          $t0, 0x160($sp)
    ctx->pc = 0x270e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 8));
label_270e40:
    // 0x270e40: 0x27a802c4  addiu       $t0, $sp, 0x2C4
    ctx->pc = 0x270e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
label_270e44:
    // 0x270e44: 0x91090000  lbu         $t1, 0x0($t0)
    ctx->pc = 0x270e44u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_270e48:
    // 0x270e48: 0x27a80164  addiu       $t0, $sp, 0x164
    ctx->pc = 0x270e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_270e4c:
    // 0x270e4c: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x270e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
label_270e50:
    // 0x270e50: 0x27a802c8  addiu       $t0, $sp, 0x2C8
    ctx->pc = 0x270e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_270e54:
    // 0x270e54: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x270e54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_270e58:
    // 0x270e58: 0x27a80168  addiu       $t0, $sp, 0x168
    ctx->pc = 0x270e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_270e5c:
    // 0x270e5c: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x270e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
label_270e60:
    // 0x270e60: 0x27a802cc  addiu       $t0, $sp, 0x2CC
    ctx->pc = 0x270e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_270e64:
    // 0x270e64: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x270e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_270e68:
    // 0x270e68: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x270e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_270e6c:
    // 0x270e6c: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x270e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270e70:
    // 0x270e70: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x270e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270e74:
    // 0x270e74: 0x27a8016c  addiu       $t0, $sp, 0x16C
    ctx->pc = 0x270e74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_270e78:
    // 0x270e78: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x270e78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_270e7c:
    // 0x270e7c: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x270e7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_270e80:
    // 0x270e80: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x270e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_270e84:
    // 0x270e84: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x270e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_270e88:
    // 0x270e88: 0x27a802cc  addiu       $t0, $sp, 0x2CC
    ctx->pc = 0x270e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_270e8c:
    // 0x270e8c: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x270e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270e90:
    // 0x270e90: 0xc5000014  lwc1        $f0, 0x14($t0)
    ctx->pc = 0x270e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270e94:
    // 0x270e94: 0x27a8016c  addiu       $t0, $sp, 0x16C
    ctx->pc = 0x270e94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_270e98:
    // 0x270e98: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x270e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
label_270e9c:
    // 0x270e9c: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x270e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
label_270ea0:
    // 0x270ea0: 0x27a802e4  addiu       $t0, $sp, 0x2E4
    ctx->pc = 0x270ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_270ea4:
    // 0x270ea4: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x270ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_270ea8:
    // 0x270ea8: 0xafa80184  sw          $t0, 0x184($sp)
    ctx->pc = 0x270ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 8));
label_270eac:
    // 0x270eac: 0x27a802e8  addiu       $t0, $sp, 0x2E8
    ctx->pc = 0x270eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
label_270eb0:
    // 0x270eb0: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x270eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_270eb4:
    // 0x270eb4: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x270eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270eb8:
    // 0x270eb8: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x270eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270ebc:
    // 0x270ebc: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x270ebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_270ec0:
    // 0x270ec0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x270ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_270ec4:
    // 0x270ec4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x270ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_270ec8:
    // 0x270ec8: 0x27a402f4  addiu       $a0, $sp, 0x2F4
    ctx->pc = 0x270ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
label_270ecc:
    // 0x270ecc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x270eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_270ed0:
    // 0x270ed0: 0xafa40194  sw          $a0, 0x194($sp)
    ctx->pc = 0x270ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 4));
label_270ed4:
    // 0x270ed4: 0x27a402f8  addiu       $a0, $sp, 0x2F8
    ctx->pc = 0x270ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_270ed8:
    // 0x270ed8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x270ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_270edc:
    // 0x270edc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x270edcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_270ee0:
    // 0x270ee0: 0x27a402fc  addiu       $a0, $sp, 0x2FC
    ctx->pc = 0x270ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 764));
label_270ee4:
    // 0x270ee4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x270ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_270ee8:
    // 0x270ee8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x270ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_270eec:
    // 0x270eec: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x270eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_270ef0:
    // 0x270ef0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x270ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270ef4:
    // 0x270ef4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x270ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_270ef8:
    // 0x270ef8: 0x27a30304  addiu       $v1, $sp, 0x304
    ctx->pc = 0x270ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 772));
label_270efc:
    // 0x270efc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x270efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270f00:
    // 0x270f00: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x270f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_270f04:
    // 0x270f04: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x270f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_270f08:
    // 0x270f08: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x270f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_270f0c:
    // 0x270f0c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x270f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270f10:
    // 0x270f10: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x270f10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_270f14:
    // 0x270f14: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x270f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_270f18:
    // 0x270f18: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x270f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_270f1c:
    // 0x270f1c: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x270f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_270f20:
    // 0x270f20: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x270f20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_270f24:
    // 0x270f24: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_270f28:
    if (ctx->pc == 0x270F28u) {
        ctx->pc = 0x270F28u;
            // 0x270f28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270F2Cu;
        goto label_270f2c;
    }
    ctx->pc = 0x270F24u;
    {
        const bool branch_taken_0x270f24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270F24u;
            // 0x270f28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f24) {
            ctx->pc = 0x270F68u;
            goto label_270f68;
        }
    }
    ctx->pc = 0x270F2Cu;
label_270f2c:
    // 0x270f2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x270f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270f30:
    // 0x270f30: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x270f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_270f34:
    // 0x270f34: 0x0  nop
    ctx->pc = 0x270f34u;
    // NOP
label_270f38:
    // 0x270f38: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x270f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_270f3c:
    // 0x270f3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x270f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_270f40:
    // 0x270f40: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x270f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_270f44:
    // 0x270f44: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x270f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_270f48:
    // 0x270f48: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x270f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_270f4c:
    // 0x270f4c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x270f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270f50:
    // 0x270f50: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x270f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_270f54:
    // 0x270f54: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x270f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
label_270f58:
    // 0x270f58: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x270f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_270f5c:
    // 0x270f5c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x270f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_270f60:
    // 0x270f60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_270f64:
    if (ctx->pc == 0x270F64u) {
        ctx->pc = 0x270F64u;
            // 0x270f64: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x270F68u;
        goto label_270f68;
    }
    ctx->pc = 0x270F60u;
    {
        const bool branch_taken_0x270f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270F60u;
            // 0x270f64: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f60) {
            ctx->pc = 0x270F38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270f38;
        }
    }
    ctx->pc = 0x270F68u;
label_270f68:
    // 0x270f68: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x270f68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270f6c:
    // 0x270f6c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x270f6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270f70:
    // 0x270f70: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x270f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270f74:
    // 0x270f74: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x270f74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270f78:
    // 0x270f78: 0x27b00160  addiu       $s0, $sp, 0x160
    ctx->pc = 0x270f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_270f7c:
    // 0x270f7c: 0x0  nop
    ctx->pc = 0x270f7cu;
    // NOP
label_270f80:
    // 0x270f80: 0xc6c2000c  lwc1        $f2, 0xC($s6)
    ctx->pc = 0x270f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_270f84:
    // 0x270f84: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x270f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270f88:
    // 0x270f88: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x270f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270f8c:
    // 0x270f8c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x270f8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_270f90:
    // 0x270f90: 0xc0a3264  jal         func_28C990
label_270f94:
    if (ctx->pc == 0x270F94u) {
        ctx->pc = 0x270F94u;
            // 0x270f94: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x270F98u;
        goto label_270f98;
    }
    ctx->pc = 0x270F90u;
    SET_GPR_U32(ctx, 31, 0x270F98u);
    ctx->pc = 0x270F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270F90u;
            // 0x270f94: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F98u; }
        if (ctx->pc != 0x270F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F98u; }
        if (ctx->pc != 0x270F98u) { return; }
    }
    ctx->pc = 0x270F98u;
label_270f98:
    // 0x270f98: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x270f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_270f9c:
    // 0x270f9c: 0xc6c20010  lwc1        $f2, 0x10($s6)
    ctx->pc = 0x270f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_270fa0:
    // 0x270fa0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x270fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270fa4:
    // 0x270fa4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x270fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270fa8:
    // 0x270fa8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x270fa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_270fac:
    // 0x270fac: 0xc0a3264  jal         func_28C990
label_270fb0:
    if (ctx->pc == 0x270FB0u) {
        ctx->pc = 0x270FB0u;
            // 0x270fb0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x270FB4u;
        goto label_270fb4;
    }
    ctx->pc = 0x270FACu;
    SET_GPR_U32(ctx, 31, 0x270FB4u);
    ctx->pc = 0x270FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270FACu;
            // 0x270fb0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FB4u; }
        if (ctx->pc != 0x270FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FB4u; }
        if (ctx->pc != 0x270FB4u) { return; }
    }
    ctx->pc = 0x270FB4u;
label_270fb4:
    // 0x270fb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270fb8:
    // 0x270fb8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x270fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_270fbc:
    // 0x270fbc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x270fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_270fc0:
    // 0x270fc0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x270fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_270fc4:
    // 0x270fc4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x270fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270fc8:
    // 0x270fc8: 0x5e082a  slt         $at, $v0, $fp
    ctx->pc = 0x270fc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_270fcc:
    // 0x270fcc: 0x41f00a  movz        $fp, $v0, $at
    ctx->pc = 0x270fccu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_270fd0:
    // 0x270fd0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x270fd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_270fd4:
    // 0x270fd4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x270fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_270fd8:
    // 0x270fd8: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x270fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
label_270fdc:
    // 0x270fdc: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x270fdcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_270fe0:
    // 0x270fe0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_270fe4:
    if (ctx->pc == 0x270FE4u) {
        ctx->pc = 0x270FE4u;
            // 0x270fe4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x270FE8u;
        goto label_270fe8;
    }
    ctx->pc = 0x270FE0u;
    {
        const bool branch_taken_0x270fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270FE0u;
            // 0x270fe4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fe0) {
            ctx->pc = 0x270F80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270f80;
        }
    }
    ctx->pc = 0x270FE8u;
label_270fe8:
    // 0x270fe8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x270fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_270fec:
    // 0x270fec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270ff0:
    // 0x270ff0: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x270ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_270ff4:
    // 0x270ff4: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x270ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_270ff8:
    // 0x270ff8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x270ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_270ffc:
    // 0x270ffc: 0x27a2016c  addiu       $v0, $sp, 0x16C
    ctx->pc = 0x270ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_271000:
    // 0x271000: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x271000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_271004:
    // 0x271004: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x271004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_271008:
    // 0x271008: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x271008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_27100c:
    // 0x27100c: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x27100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_271010:
    // 0x271010: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x271010u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_271014:
    // 0x271014: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x271014u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_271018:
    // 0x271018: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x271018u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_27101c:
    // 0x27101c: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x27101cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_271020:
    // 0x271020: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x271020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_271024:
    // 0x271024: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x271024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_271028:
    // 0x271028: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x271028u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27102c:
    // 0x27102c: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x27102cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_271030:
    // 0x271030: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x271030u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_271034:
    // 0x271034: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x271034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_271038:
    // 0x271038: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_27103c:
    if (ctx->pc == 0x27103Cu) {
        ctx->pc = 0x27103Cu;
            // 0x27103c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271040u;
        goto label_271040;
    }
    ctx->pc = 0x271038u;
    {
        const bool branch_taken_0x271038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27103Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271038u;
            // 0x27103c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271038) {
            ctx->pc = 0x271060u;
            goto label_271060;
        }
    }
    ctx->pc = 0x271040u;
label_271040:
    // 0x271040: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x271040u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_271044:
    // 0x271044: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x271044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_271048:
    // 0x271048: 0x0  nop
    ctx->pc = 0x271048u;
    // NOP
label_27104c:
    // 0x27104c: 0x0  nop
    ctx->pc = 0x27104cu;
    // NOP
label_271050:
    // 0x271050: 0x0  nop
    ctx->pc = 0x271050u;
    // NOP
label_271054:
    // 0x271054: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_271058:
    if (ctx->pc == 0x271058u) {
        ctx->pc = 0x27105Cu;
        goto label_27105c;
    }
    ctx->pc = 0x271054u;
    {
        const bool branch_taken_0x271054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271054) {
            ctx->pc = 0x271040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271040;
        }
    }
    ctx->pc = 0x27105Cu;
label_27105c:
    // 0x27105c: 0x0  nop
    ctx->pc = 0x27105cu;
    // NOP
label_271060:
    // 0x271060: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x271060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_271064:
    // 0x271064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271068:
    // 0x271068: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x271068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27106c:
    // 0x27106c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x27106cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_271070:
    // 0x271070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x271070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271074:
    // 0x271074: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x271074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_271078:
    // 0x271078: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x271078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27107c:
    // 0x27107c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_271080:
    if (ctx->pc == 0x271080u) {
        ctx->pc = 0x271080u;
            // 0x271080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271084u;
        goto label_271084;
    }
    ctx->pc = 0x27107Cu;
    {
        const bool branch_taken_0x27107c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27107Cu;
            // 0x271080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27107c) {
            ctx->pc = 0x2710A8u;
            goto label_2710a8;
        }
    }
    ctx->pc = 0x271084u;
label_271084:
    // 0x271084: 0x0  nop
    ctx->pc = 0x271084u;
    // NOP
label_271088:
    // 0x271088: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x271088u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_27108c:
    // 0x27108c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27108cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_271090:
    // 0x271090: 0x0  nop
    ctx->pc = 0x271090u;
    // NOP
label_271094:
    // 0x271094: 0x0  nop
    ctx->pc = 0x271094u;
    // NOP
label_271098:
    // 0x271098: 0x0  nop
    ctx->pc = 0x271098u;
    // NOP
label_27109c:
    // 0x27109c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2710a0:
    if (ctx->pc == 0x2710A0u) {
        ctx->pc = 0x2710A4u;
        goto label_2710a4;
    }
    ctx->pc = 0x27109Cu;
    {
        const bool branch_taken_0x27109c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27109c) {
            ctx->pc = 0x271088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271088;
        }
    }
    ctx->pc = 0x2710A4u;
label_2710a4:
    // 0x2710a4: 0x0  nop
    ctx->pc = 0x2710a4u;
    // NOP
label_2710a8:
    // 0x2710a8: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x2710a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2710ac:
    // 0x2710ac: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x2710acu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_2710b0:
    // 0x2710b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2710b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2710b4:
    // 0x2710b4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2710b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_2710b8:
    // 0x2710b8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_2710bc:
    if (ctx->pc == 0x2710BCu) {
        ctx->pc = 0x2710BCu;
            // 0x2710bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2710C0u;
        goto label_2710c0;
    }
    ctx->pc = 0x2710B8u;
    {
        const bool branch_taken_0x2710b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2710BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2710B8u;
            // 0x2710bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710b8) {
            ctx->pc = 0x271078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271078;
        }
    }
    ctx->pc = 0x2710C0u;
label_2710c0:
    // 0x2710c0: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x2710c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
label_2710c4:
    // 0x2710c4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2710c8:
    if (ctx->pc == 0x2710C8u) {
        ctx->pc = 0x2710CCu;
        goto label_2710cc;
    }
    ctx->pc = 0x2710C4u;
    {
        const bool branch_taken_0x2710c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2710c4) {
            ctx->pc = 0x2710D0u;
            goto label_2710d0;
        }
    }
    ctx->pc = 0x2710CCu;
label_2710cc:
    // 0x2710cc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2710ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2710d0:
    // 0x2710d0: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x2710d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_2710d4:
    // 0x2710d4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2710d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2710d8:
    // 0x2710d8: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2710d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2710dc:
    // 0x2710dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2710e0:
    if (ctx->pc == 0x2710E0u) {
        ctx->pc = 0x2710E4u;
        goto label_2710e4;
    }
    ctx->pc = 0x2710DCu;
    {
        const bool branch_taken_0x2710dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2710dc) {
            ctx->pc = 0x271100u;
            goto label_271100;
        }
    }
    ctx->pc = 0x2710E4u;
label_2710e4:
    // 0x2710e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2710e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2710e8:
    // 0x2710e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2710e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2710ec:
    // 0x2710ec: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x2710ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_2710f0:
    // 0x2710f0: 0xc09af08  jal         func_26BC20
label_2710f4:
    if (ctx->pc == 0x2710F4u) {
        ctx->pc = 0x2710F4u;
            // 0x2710f4: 0x27a70160  addiu       $a3, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x2710F8u;
        goto label_2710f8;
    }
    ctx->pc = 0x2710F0u;
    SET_GPR_U32(ctx, 31, 0x2710F8u);
    ctx->pc = 0x2710F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2710F0u;
            // 0x2710f4: 0x27a70160  addiu       $a3, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BC20u;
    if (runtime->hasFunction(0x26BC20u)) {
        auto targetFn = runtime->lookupFunction(0x26BC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710F8u; }
        if (ctx->pc != 0x2710F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BC20_0x26bc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710F8u; }
        if (ctx->pc != 0x2710F8u) { return; }
    }
    ctx->pc = 0x2710F8u;
label_2710f8:
    // 0x2710f8: 0x1000012b  b           . + 4 + (0x12B << 2)
label_2710fc:
    if (ctx->pc == 0x2710FCu) {
        ctx->pc = 0x271100u;
        goto label_271100;
    }
    ctx->pc = 0x2710F8u;
    {
        const bool branch_taken_0x2710f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2710f8) {
            ctx->pc = 0x2715A8u;
            goto label_2715a8;
        }
    }
    ctx->pc = 0x271100u;
label_271100:
    // 0x271100: 0xae800040  sw          $zero, 0x40($s4)
    ctx->pc = 0x271100u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 0));
label_271104:
    // 0x271104: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x271104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_271108:
    // 0x271108: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x271108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27110c:
    // 0x27110c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x27110cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_271110:
    // 0x271110: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x271110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_271114:
    // 0x271114: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x271114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_271118:
    // 0x271118: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x271118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_27111c:
    // 0x27111c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_271120:
    if (ctx->pc == 0x271120u) {
        ctx->pc = 0x271124u;
        goto label_271124;
    }
    ctx->pc = 0x27111Cu;
    {
        const bool branch_taken_0x27111c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27111c) {
            ctx->pc = 0x271130u;
            goto label_271130;
        }
    }
    ctx->pc = 0x271124u;
label_271124:
    // 0x271124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271128:
    // 0x271128: 0xc0a728c  jal         func_29CA30
label_27112c:
    if (ctx->pc == 0x27112Cu) {
        ctx->pc = 0x27112Cu;
            // 0x27112c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x271130u;
        goto label_271130;
    }
    ctx->pc = 0x271128u;
    SET_GPR_U32(ctx, 31, 0x271130u);
    ctx->pc = 0x27112Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271128u;
            // 0x27112c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271130u; }
        if (ctx->pc != 0x271130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271130u; }
        if (ctx->pc != 0x271130u) { return; }
    }
    ctx->pc = 0x271130u;
label_271130:
    // 0x271130: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x271130u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_271134:
    // 0x271134: 0x27be011c  addiu       $fp, $sp, 0x11C
    ctx->pc = 0x271134u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_271138:
    // 0x271138: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x271138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_27113c:
    // 0x27113c: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x27113cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_271140:
    // 0x271140: 0x27a5014c  addiu       $a1, $sp, 0x14C
    ctx->pc = 0x271140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_271144:
    // 0x271144: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x271144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_271148:
    // 0x271148: 0x27a20154  addiu       $v0, $sp, 0x154
    ctx->pc = 0x271148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_27114c:
    // 0x27114c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x27114cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_271150:
    // 0x271150: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x271150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
label_271154:
    // 0x271154: 0x8ea80010  lw          $t0, 0x10($s5)
    ctx->pc = 0x271154u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_271158:
    // 0x271158: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x271158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
label_27115c:
    // 0x27115c: 0x8fa802c0  lw          $t0, 0x2C0($sp)
    ctx->pc = 0x27115cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_271160:
    // 0x271160: 0xafa80110  sw          $t0, 0x110($sp)
    ctx->pc = 0x271160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 8));
label_271164:
    // 0x271164: 0x27a802c4  addiu       $t0, $sp, 0x2C4
    ctx->pc = 0x271164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
label_271168:
    // 0x271168: 0x91090000  lbu         $t1, 0x0($t0)
    ctx->pc = 0x271168u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_27116c:
    // 0x27116c: 0x27a80114  addiu       $t0, $sp, 0x114
    ctx->pc = 0x27116cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_271170:
    // 0x271170: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x271170u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
label_271174:
    // 0x271174: 0x27a802c8  addiu       $t0, $sp, 0x2C8
    ctx->pc = 0x271174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_271178:
    // 0x271178: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x271178u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_27117c:
    // 0x27117c: 0x27a80118  addiu       $t0, $sp, 0x118
    ctx->pc = 0x27117cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_271180:
    // 0x271180: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x271180u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
label_271184:
    // 0x271184: 0x27a802cc  addiu       $t0, $sp, 0x2CC
    ctx->pc = 0x271184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_271188:
    // 0x271188: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x271188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27118c:
    // 0x27118c: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x27118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_271190:
    // 0x271190: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x271190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_271194:
    // 0x271194: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x271194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271198:
    // 0x271198: 0xe7c30000  swc1        $f3, 0x0($fp)
    ctx->pc = 0x271198u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_27119c:
    // 0x27119c: 0xe7c20004  swc1        $f2, 0x4($fp)
    ctx->pc = 0x27119cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_2711a0:
    // 0x2711a0: 0xe7c10008  swc1        $f1, 0x8($fp)
    ctx->pc = 0x2711a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_2711a4:
    // 0x2711a4: 0xe7c0000c  swc1        $f0, 0xC($fp)
    ctx->pc = 0x2711a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_2711a8:
    // 0x2711a8: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x2711a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2711ac:
    // 0x2711ac: 0xc5000014  lwc1        $f0, 0x14($t0)
    ctx->pc = 0x2711acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2711b0:
    // 0x2711b0: 0xe7c10010  swc1        $f1, 0x10($fp)
    ctx->pc = 0x2711b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 16), bits); }
label_2711b4:
    // 0x2711b4: 0x27a802e4  addiu       $t0, $sp, 0x2E4
    ctx->pc = 0x2711b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_2711b8:
    // 0x2711b8: 0xe7c00014  swc1        $f0, 0x14($fp)
    ctx->pc = 0x2711b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 20), bits); }
label_2711bc:
    // 0x2711bc: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x2711bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2711c0:
    // 0x2711c0: 0xafa80134  sw          $t0, 0x134($sp)
    ctx->pc = 0x2711c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 8));
label_2711c4:
    // 0x2711c4: 0x27a802e8  addiu       $t0, $sp, 0x2E8
    ctx->pc = 0x2711c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
label_2711c8:
    // 0x2711c8: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x2711c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2711cc:
    // 0x2711cc: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2711ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2711d0:
    // 0x2711d0: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x2711d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2711d4:
    // 0x2711d4: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2711d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2711d8:
    // 0x2711d8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2711d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2711dc:
    // 0x2711dc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2711dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2711e0:
    // 0x2711e0: 0x27a402f4  addiu       $a0, $sp, 0x2F4
    ctx->pc = 0x2711e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
label_2711e4:
    // 0x2711e4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2711e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2711e8:
    // 0x2711e8: 0xafa40144  sw          $a0, 0x144($sp)
    ctx->pc = 0x2711e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 4));
label_2711ec:
    // 0x2711ec: 0x27a402f8  addiu       $a0, $sp, 0x2F8
    ctx->pc = 0x2711ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_2711f0:
    // 0x2711f0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2711f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2711f4:
    // 0x2711f4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2711f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_2711f8:
    // 0x2711f8: 0x27a402fc  addiu       $a0, $sp, 0x2FC
    ctx->pc = 0x2711f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 764));
label_2711fc:
    // 0x2711fc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2711fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_271200:
    // 0x271200: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x271200u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_271204:
    // 0x271204: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x271204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_271208:
    // 0x271208: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x271208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27120c:
    // 0x27120c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27120cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_271210:
    // 0x271210: 0x27a30304  addiu       $v1, $sp, 0x304
    ctx->pc = 0x271210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 772));
label_271214:
    // 0x271214: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x271214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271218:
    // 0x271218: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x271218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_27121c:
    // 0x27121c: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x27121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_271220:
    // 0x271220: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x271220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_271224:
    // 0x271224: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x271224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_271228:
    // 0x271228: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x271228u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_27122c:
    // 0x27122c: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x27122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_271230:
    // 0x271230: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x271230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_271234:
    // 0x271234: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x271234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_271238:
    // 0x271238: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x271238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27123c:
    // 0x27123c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_271240:
    if (ctx->pc == 0x271240u) {
        ctx->pc = 0x271240u;
            // 0x271240: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271244u;
        goto label_271244;
    }
    ctx->pc = 0x27123Cu;
    {
        const bool branch_taken_0x27123c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x271240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27123Cu;
            // 0x271240: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27123c) {
            ctx->pc = 0x271280u;
            goto label_271280;
        }
    }
    ctx->pc = 0x271244u;
label_271244:
    // 0x271244: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x271244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271248:
    // 0x271248: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x271248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_27124c:
    // 0x27124c: 0x0  nop
    ctx->pc = 0x27124cu;
    // NOP
label_271250:
    // 0x271250: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x271250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_271254:
    // 0x271254: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x271254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_271258:
    // 0x271258: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x271258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_27125c:
    // 0x27125c: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x27125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_271260:
    // 0x271260: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x271260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_271264:
    // 0x271264: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x271264u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_271268:
    // 0x271268: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x271268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_27126c:
    // 0x27126c: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x27126cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
label_271270:
    // 0x271270: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x271270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_271274:
    // 0x271274: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x271274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_271278:
    // 0x271278: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_27127c:
    if (ctx->pc == 0x27127Cu) {
        ctx->pc = 0x27127Cu;
            // 0x27127c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x271280u;
        goto label_271280;
    }
    ctx->pc = 0x271278u;
    {
        const bool branch_taken_0x271278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27127Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271278u;
            // 0x27127c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271278) {
            ctx->pc = 0x271250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271250;
        }
    }
    ctx->pc = 0x271280u;
label_271280:
    // 0x271280: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x271280u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271284:
    // 0x271284: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x271284u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271288:
    // 0x271288: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x271288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27128c:
    // 0x27128c: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x27128cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_271290:
    // 0x271290: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x271290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_271294:
    // 0x271294: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x271294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_271298:
    // 0x271298: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x271298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27129c:
    // 0x27129c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27129cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2712a0:
    // 0x2712a0: 0xc0a3264  jal         func_28C990
label_2712a4:
    if (ctx->pc == 0x2712A4u) {
        ctx->pc = 0x2712A4u;
            // 0x2712a4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2712A8u;
        goto label_2712a8;
    }
    ctx->pc = 0x2712A0u;
    SET_GPR_U32(ctx, 31, 0x2712A8u);
    ctx->pc = 0x2712A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2712A0u;
            // 0x2712a4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712A8u; }
        if (ctx->pc != 0x2712A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712A8u; }
        if (ctx->pc != 0x2712A8u) { return; }
    }
    ctx->pc = 0x2712A8u;
label_2712a8:
    // 0x2712a8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2712a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2712ac:
    // 0x2712ac: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x2712acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2712b0:
    // 0x2712b0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2712b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2712b4:
    // 0x2712b4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2712b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2712b8:
    // 0x2712b8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2712b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2712bc:
    // 0x2712bc: 0xc0a3264  jal         func_28C990
label_2712c0:
    if (ctx->pc == 0x2712C0u) {
        ctx->pc = 0x2712C0u;
            // 0x2712c0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2712C4u;
        goto label_2712c4;
    }
    ctx->pc = 0x2712BCu;
    SET_GPR_U32(ctx, 31, 0x2712C4u);
    ctx->pc = 0x2712C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2712BCu;
            // 0x2712c0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712C4u; }
        if (ctx->pc != 0x2712C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712C4u; }
        if (ctx->pc != 0x2712C4u) { return; }
    }
    ctx->pc = 0x2712C4u;
label_2712c4:
    // 0x2712c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2712c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2712c8:
    // 0x2712c8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2712c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2712cc:
    // 0x2712cc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2712ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2712d0:
    // 0x2712d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2712d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2712d4:
    // 0x2712d4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2712d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2712d8:
    // 0x2712d8: 0x57082a  slt         $at, $v0, $s7
    ctx->pc = 0x2712d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2712dc:
    // 0x2712dc: 0x41b80a  movz        $s7, $v0, $at
    ctx->pc = 0x2712dcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_2712e0:
    // 0x2712e0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2712e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2712e4:
    // 0x2712e4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2712e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2712e8:
    // 0x2712e8: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x2712e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
label_2712ec:
    // 0x2712ec: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2712ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2712f0:
    // 0x2712f0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_2712f4:
    if (ctx->pc == 0x2712F4u) {
        ctx->pc = 0x2712F4u;
            // 0x2712f4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x2712F8u;
        goto label_2712f8;
    }
    ctx->pc = 0x2712F0u;
    {
        const bool branch_taken_0x2712f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2712F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2712F0u;
            // 0x2712f4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712f0) {
            ctx->pc = 0x271290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271290;
        }
    }
    ctx->pc = 0x2712F8u;
label_2712f8:
    // 0x2712f8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2712f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_2712fc:
    // 0x2712fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2712fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_271300:
    // 0x271300: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x271300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_271304:
    // 0x271304: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x271304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_271308:
    // 0x271308: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x271308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_27130c:
    // 0x27130c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x27130cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_271310:
    // 0x271310: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x271310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_271314:
    // 0x271314: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x271314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_271318:
    // 0x271318: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x271318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_27131c:
    // 0x27131c: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x27131cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_271320:
    // 0x271320: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x271320u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_271324:
    // 0x271324: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x271324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_271328:
    // 0x271328: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x271328u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_27132c:
    // 0x27132c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x27132cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_271330:
    // 0x271330: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x271330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_271334:
    // 0x271334: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x271334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_271338:
    // 0x271338: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x271338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_27133c:
    // 0x27133c: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x27133cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_271340:
    // 0x271340: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x271340u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_271344:
    // 0x271344: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_271348:
    if (ctx->pc == 0x271348u) {
        ctx->pc = 0x271348u;
            // 0x271348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27134Cu;
        goto label_27134c;
    }
    ctx->pc = 0x271344u;
    {
        const bool branch_taken_0x271344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271344u;
            // 0x271348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271344) {
            ctx->pc = 0x271370u;
            goto label_271370;
        }
    }
    ctx->pc = 0x27134Cu;
label_27134c:
    // 0x27134c: 0x0  nop
    ctx->pc = 0x27134cu;
    // NOP
label_271350:
    // 0x271350: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x271350u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_271354:
    // 0x271354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x271354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_271358:
    // 0x271358: 0x0  nop
    ctx->pc = 0x271358u;
    // NOP
label_27135c:
    // 0x27135c: 0x0  nop
    ctx->pc = 0x27135cu;
    // NOP
label_271360:
    // 0x271360: 0x0  nop
    ctx->pc = 0x271360u;
    // NOP
label_271364:
    // 0x271364: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_271368:
    if (ctx->pc == 0x271368u) {
        ctx->pc = 0x27136Cu;
        goto label_27136c;
    }
    ctx->pc = 0x271364u;
    {
        const bool branch_taken_0x271364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271364) {
            ctx->pc = 0x271350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271350;
        }
    }
    ctx->pc = 0x27136Cu;
label_27136c:
    // 0x27136c: 0x0  nop
    ctx->pc = 0x27136cu;
    // NOP
label_271370:
    // 0x271370: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x271370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_271374:
    // 0x271374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271378:
    // 0x271378: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x271378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27137c:
    // 0x27137c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x27137cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_271380:
    // 0x271380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x271380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271384:
    // 0x271384: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x271384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_271388:
    // 0x271388: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x271388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27138c:
    // 0x27138c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_271390:
    if (ctx->pc == 0x271390u) {
        ctx->pc = 0x271390u;
            // 0x271390: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271394u;
        goto label_271394;
    }
    ctx->pc = 0x27138Cu;
    {
        const bool branch_taken_0x27138c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27138Cu;
            // 0x271390: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27138c) {
            ctx->pc = 0x2713B8u;
            goto label_2713b8;
        }
    }
    ctx->pc = 0x271394u;
label_271394:
    // 0x271394: 0x0  nop
    ctx->pc = 0x271394u;
    // NOP
label_271398:
    // 0x271398: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x271398u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_27139c:
    // 0x27139c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27139cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2713a0:
    // 0x2713a0: 0x0  nop
    ctx->pc = 0x2713a0u;
    // NOP
label_2713a4:
    // 0x2713a4: 0x0  nop
    ctx->pc = 0x2713a4u;
    // NOP
label_2713a8:
    // 0x2713a8: 0x0  nop
    ctx->pc = 0x2713a8u;
    // NOP
label_2713ac:
    // 0x2713ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2713b0:
    if (ctx->pc == 0x2713B0u) {
        ctx->pc = 0x2713B4u;
        goto label_2713b4;
    }
    ctx->pc = 0x2713ACu;
    {
        const bool branch_taken_0x2713ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2713ac) {
            ctx->pc = 0x271398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271398;
        }
    }
    ctx->pc = 0x2713B4u;
label_2713b4:
    // 0x2713b4: 0x0  nop
    ctx->pc = 0x2713b4u;
    // NOP
label_2713b8:
    // 0x2713b8: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x2713b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2713bc:
    // 0x2713bc: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x2713bcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_2713c0:
    // 0x2713c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2713c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2713c4:
    // 0x2713c4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2713c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_2713c8:
    // 0x2713c8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_2713cc:
    if (ctx->pc == 0x2713CCu) {
        ctx->pc = 0x2713CCu;
            // 0x2713cc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2713D0u;
        goto label_2713d0;
    }
    ctx->pc = 0x2713C8u;
    {
        const bool branch_taken_0x2713c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2713CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2713C8u;
            // 0x2713cc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713c8) {
            ctx->pc = 0x271388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271388;
        }
    }
    ctx->pc = 0x2713D0u;
label_2713d0:
    // 0x2713d0: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x2713d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
label_2713d4:
    // 0x2713d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2713d8:
    if (ctx->pc == 0x2713D8u) {
        ctx->pc = 0x2713DCu;
        goto label_2713dc;
    }
    ctx->pc = 0x2713D4u;
    {
        const bool branch_taken_0x2713d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2713d4) {
            ctx->pc = 0x2713E0u;
            goto label_2713e0;
        }
    }
    ctx->pc = 0x2713DCu;
label_2713dc:
    // 0x2713dc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2713dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2713e0:
    // 0x2713e0: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x2713e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_2713e4:
    // 0x2713e4: 0x27b00328  addiu       $s0, $sp, 0x328
    ctx->pc = 0x2713e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
label_2713e8:
    // 0x2713e8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2713e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2713ec:
    // 0x2713ec: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2713ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_2713f0:
    // 0x2713f0: 0xafa00320  sw          $zero, 0x320($sp)
    ctx->pc = 0x2713f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 0));
label_2713f4:
    // 0x2713f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2713f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2713f8:
    // 0x2713f8: 0xafa00324  sw          $zero, 0x324($sp)
    ctx->pc = 0x2713f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 0));
label_2713fc:
    // 0x2713fc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2713fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_271400:
    // 0x271400: 0xc09a868  jal         func_26A1A0
label_271404:
    if (ctx->pc == 0x271404u) {
        ctx->pc = 0x271404u;
            // 0x271404: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x271408u;
        goto label_271408;
    }
    ctx->pc = 0x271400u;
    SET_GPR_U32(ctx, 31, 0x271408u);
    ctx->pc = 0x271404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271400u;
            // 0x271404: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A1A0u;
    if (runtime->hasFunction(0x26A1A0u)) {
        auto targetFn = runtime->lookupFunction(0x26A1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271408u; }
        if (ctx->pc != 0x271408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A1A0_0x26a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271408u; }
        if (ctx->pc != 0x271408u) { return; }
    }
    ctx->pc = 0x271408u;
label_271408:
    // 0x271408: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x271408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_27140c:
    // 0x27140c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27140cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_271410:
    // 0x271410: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x271410u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_271414:
    // 0x271414: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x271414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271418:
    // 0x271418: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x271418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_27141c:
    // 0x27141c: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x27141cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_271420:
    // 0x271420: 0xc09b134  jal         func_26C4D0
label_271424:
    if (ctx->pc == 0x271424u) {
        ctx->pc = 0x271424u;
            // 0x271424: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->pc = 0x271428u;
        goto label_271428;
    }
    ctx->pc = 0x271420u;
    SET_GPR_U32(ctx, 31, 0x271428u);
    ctx->pc = 0x271424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271420u;
            // 0x271424: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C4D0u;
    if (runtime->hasFunction(0x26C4D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271428u; }
        if (ctx->pc != 0x271428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C4D0_0x26c4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271428u; }
        if (ctx->pc != 0x271428u) { return; }
    }
    ctx->pc = 0x271428u;
label_271428:
    // 0x271428: 0x8e860040  lw          $a2, 0x40($s4)
    ctx->pc = 0x271428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_27142c:
    // 0x27142c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27142cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_271430:
    // 0x271430: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x271430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271434:
    // 0x271434: 0xc09b3fc  jal         func_26CFF0
label_271438:
    if (ctx->pc == 0x271438u) {
        ctx->pc = 0x271438u;
            // 0x271438: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27143Cu;
        goto label_27143c;
    }
    ctx->pc = 0x271434u;
    SET_GPR_U32(ctx, 31, 0x27143Cu);
    ctx->pc = 0x271438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271434u;
            // 0x271438: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CFF0u;
    if (runtime->hasFunction(0x26CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x26CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27143Cu; }
        if (ctx->pc != 0x27143Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CFF0_0x26cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27143Cu; }
        if (ctx->pc != 0x27143Cu) { return; }
    }
    ctx->pc = 0x27143Cu;
label_27143c:
    // 0x27143c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x27143cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_271440:
    // 0x271440: 0xc09a888  jal         func_26A220
label_271444:
    if (ctx->pc == 0x271444u) {
        ctx->pc = 0x271444u;
            // 0x271444: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x271448u;
        goto label_271448;
    }
    ctx->pc = 0x271440u;
    SET_GPR_U32(ctx, 31, 0x271448u);
    ctx->pc = 0x271444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271440u;
            // 0x271444: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A220u;
    if (runtime->hasFunction(0x26A220u)) {
        auto targetFn = runtime->lookupFunction(0x26A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271448u; }
        if (ctx->pc != 0x271448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A220_0x26a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271448u; }
        if (ctx->pc != 0x271448u) { return; }
    }
    ctx->pc = 0x271448u;
label_271448:
    // 0x271448: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x271448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27144c:
    // 0x27144c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_271450:
    // 0x271450: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x271450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_271454:
    // 0x271454: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_271458:
    if (ctx->pc == 0x271458u) {
        ctx->pc = 0x27145Cu;
        goto label_27145c;
    }
    ctx->pc = 0x271454u;
    {
        const bool branch_taken_0x271454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271454) {
            ctx->pc = 0x271480u;
            goto label_271480;
        }
    }
    ctx->pc = 0x27145Cu;
label_27145c:
    // 0x27145c: 0x8fa20328  lw          $v0, 0x328($sp)
    ctx->pc = 0x27145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_271460:
    // 0x271460: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x271460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_271464:
    // 0x271464: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x271464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_271468:
    // 0x271468: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x271468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_27146c:
    // 0x27146c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x27146cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_271470:
    // 0x271470: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x271470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_271474:
    // 0x271474: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x271474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_271478:
    // 0x271478: 0xc0a7ab4  jal         func_29EAD0
label_27147c:
    if (ctx->pc == 0x27147Cu) {
        ctx->pc = 0x27147Cu;
            // 0x27147c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x271480u;
        goto label_271480;
    }
    ctx->pc = 0x271478u;
    SET_GPR_U32(ctx, 31, 0x271480u);
    ctx->pc = 0x27147Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271478u;
            // 0x27147c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271480u; }
        if (ctx->pc != 0x271480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271480u; }
        if (ctx->pc != 0x271480u) { return; }
    }
    ctx->pc = 0x271480u;
label_271480:
    // 0x271480: 0xafa00310  sw          $zero, 0x310($sp)
    ctx->pc = 0x271480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 0));
label_271484:
    // 0x271484: 0xafa00314  sw          $zero, 0x314($sp)
    ctx->pc = 0x271484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 0));
label_271488:
    // 0x271488: 0x27b00318  addiu       $s0, $sp, 0x318
    ctx->pc = 0x271488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_27148c:
    // 0x27148c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_271490:
    // 0x271490: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x271490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_271494:
    // 0x271494: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x271494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_271498:
    // 0x271498: 0xc09a868  jal         func_26A1A0
label_27149c:
    if (ctx->pc == 0x27149Cu) {
        ctx->pc = 0x27149Cu;
            // 0x27149c: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->pc = 0x2714A0u;
        goto label_2714a0;
    }
    ctx->pc = 0x271498u;
    SET_GPR_U32(ctx, 31, 0x2714A0u);
    ctx->pc = 0x27149Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271498u;
            // 0x27149c: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A1A0u;
    if (runtime->hasFunction(0x26A1A0u)) {
        auto targetFn = runtime->lookupFunction(0x26A1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2714A0u; }
        if (ctx->pc != 0x2714A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A1A0_0x26a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2714A0u; }
        if (ctx->pc != 0x2714A0u) { return; }
    }
    ctx->pc = 0x2714A0u;
label_2714a0:
    // 0x2714a0: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2714a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2714a4:
    // 0x2714a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2714a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2714a8:
    // 0x2714a8: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x2714a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_2714ac:
    // 0x2714ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2714acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2714b0:
    // 0x2714b0: 0x8e880040  lw          $t0, 0x40($s4)
    ctx->pc = 0x2714b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_2714b4:
    // 0x2714b4: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x2714b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_2714b8:
    // 0x2714b8: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x2714b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2714bc:
    // 0x2714bc: 0xc09b4dc  jal         func_26D370
label_2714c0:
    if (ctx->pc == 0x2714C0u) {
        ctx->pc = 0x2714C0u;
            // 0x2714c0: 0x27a90310  addiu       $t1, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->pc = 0x2714C4u;
        goto label_2714c4;
    }
    ctx->pc = 0x2714BCu;
    SET_GPR_U32(ctx, 31, 0x2714C4u);
    ctx->pc = 0x2714C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2714BCu;
            // 0x2714c0: 0x27a90310  addiu       $t1, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D370u;
    if (runtime->hasFunction(0x26D370u)) {
        auto targetFn = runtime->lookupFunction(0x26D370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2714C4u; }
        if (ctx->pc != 0x2714C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D370_0x26d370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2714C4u; }
        if (ctx->pc != 0x2714C4u) { return; }
    }
    ctx->pc = 0x2714C4u;
label_2714c4:
    // 0x2714c4: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2714c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2714c8:
    // 0x2714c8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2714c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2714cc:
    // 0x2714cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2714d0:
    if (ctx->pc == 0x2714D0u) {
        ctx->pc = 0x2714D4u;
        goto label_2714d4;
    }
    ctx->pc = 0x2714CCu;
    {
        const bool branch_taken_0x2714cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2714cc) {
            ctx->pc = 0x271500u;
            goto label_271500;
        }
    }
    ctx->pc = 0x2714D4u;
label_2714d4:
    // 0x2714d4: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x2714d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2714d8:
    // 0x2714d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2714d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2714dc:
    // 0x2714dc: 0x8fa60314  lw          $a2, 0x314($sp)
    ctx->pc = 0x2714dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_2714e0:
    // 0x2714e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2714e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2714e4:
    // 0x2714e4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2714e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2714e8:
    // 0x2714e8: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x2714e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_2714ec:
    // 0x2714ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2714ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2714f0:
    // 0x2714f0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2714f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2714f4:
    // 0x2714f4: 0xc09b874  jal         func_26E1D0
label_2714f8:
    if (ctx->pc == 0x2714F8u) {
        ctx->pc = 0x2714F8u;
            // 0x2714f8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2714FCu;
        goto label_2714fc;
    }
    ctx->pc = 0x2714F4u;
    SET_GPR_U32(ctx, 31, 0x2714FCu);
    ctx->pc = 0x2714F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2714F4u;
            // 0x2714f8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E1D0u;
    if (runtime->hasFunction(0x26E1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26E1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2714FCu; }
        if (ctx->pc != 0x2714FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E1D0_0x26e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2714FCu; }
        if (ctx->pc != 0x2714FCu) { return; }
    }
    ctx->pc = 0x2714FCu;
label_2714fc:
    // 0x2714fc: 0x0  nop
    ctx->pc = 0x2714fcu;
    // NOP
label_271500:
    // 0x271500: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x271500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_271504:
    // 0x271504: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x271504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_271508:
    // 0x271508: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x271508u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_27150c:
    // 0x27150c: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x27150cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_271510:
    // 0x271510: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x271510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_271514:
    // 0x271514: 0xc09b464  jal         func_26D190
label_271518:
    if (ctx->pc == 0x271518u) {
        ctx->pc = 0x271518u;
            // 0x271518: 0x27a70310  addiu       $a3, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->pc = 0x27151Cu;
        goto label_27151c;
    }
    ctx->pc = 0x271514u;
    SET_GPR_U32(ctx, 31, 0x27151Cu);
    ctx->pc = 0x271518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271514u;
            // 0x271518: 0x27a70310  addiu       $a3, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D190u;
    if (runtime->hasFunction(0x26D190u)) {
        auto targetFn = runtime->lookupFunction(0x26D190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27151Cu; }
        if (ctx->pc != 0x27151Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D190_0x26d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27151Cu; }
        if (ctx->pc != 0x27151Cu) { return; }
    }
    ctx->pc = 0x27151Cu;
label_27151c:
    // 0x27151c: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x27151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_271520:
    // 0x271520: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x271520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_271524:
    // 0x271524: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x271524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_271528:
    // 0x271528: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x271528u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_27152c:
    // 0x27152c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x27152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_271530:
    // 0x271530: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x271530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_271534:
    // 0x271534: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x271534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_271538:
    // 0x271538: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x271538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27153c:
    // 0x27153c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x27153cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_271540:
    // 0x271540: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_271544:
    if (ctx->pc == 0x271544u) {
        ctx->pc = 0x271548u;
        goto label_271548;
    }
    ctx->pc = 0x271540u;
    {
        const bool branch_taken_0x271540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271540) {
            ctx->pc = 0x271558u;
            goto label_271558;
        }
    }
    ctx->pc = 0x271548u;
label_271548:
    // 0x271548: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x271548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_27154c:
    // 0x27154c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27154cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_271550:
    // 0x271550: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x271550u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_271554:
    // 0x271554: 0x0  nop
    ctx->pc = 0x271554u;
    // NOP
label_271558:
    // 0x271558: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x271558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_27155c:
    // 0x27155c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x27155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_271560:
    // 0x271560: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x271560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_271564:
    // 0x271564: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x271564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_271568:
    // 0x271568: 0xc09a888  jal         func_26A220
label_27156c:
    if (ctx->pc == 0x27156Cu) {
        ctx->pc = 0x27156Cu;
            // 0x27156c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x271570u;
        goto label_271570;
    }
    ctx->pc = 0x271568u;
    SET_GPR_U32(ctx, 31, 0x271570u);
    ctx->pc = 0x27156Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271568u;
            // 0x27156c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A220u;
    if (runtime->hasFunction(0x26A220u)) {
        auto targetFn = runtime->lookupFunction(0x26A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271570u; }
        if (ctx->pc != 0x271570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A220_0x26a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271570u; }
        if (ctx->pc != 0x271570u) { return; }
    }
    ctx->pc = 0x271570u;
label_271570:
    // 0x271570: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x271570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_271574:
    // 0x271574: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x271574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_271578:
    // 0x271578: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x271578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_27157c:
    // 0x27157c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_271580:
    if (ctx->pc == 0x271580u) {
        ctx->pc = 0x271584u;
        goto label_271584;
    }
    ctx->pc = 0x27157Cu;
    {
        const bool branch_taken_0x27157c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27157c) {
            ctx->pc = 0x2715A8u;
            goto label_2715a8;
        }
    }
    ctx->pc = 0x271584u;
label_271584:
    // 0x271584: 0x8fa20318  lw          $v0, 0x318($sp)
    ctx->pc = 0x271584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
label_271588:
    // 0x271588: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x271588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27158c:
    // 0x27158c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27158cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_271590:
    // 0x271590: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x271590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_271594:
    // 0x271594: 0x8fa50310  lw          $a1, 0x310($sp)
    ctx->pc = 0x271594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_271598:
    // 0x271598: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x271598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_27159c:
    // 0x27159c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x27159cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2715a0:
    // 0x2715a0: 0xc0a7ab4  jal         func_29EAD0
label_2715a4:
    if (ctx->pc == 0x2715A4u) {
        ctx->pc = 0x2715A4u;
            // 0x2715a4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2715A8u;
        goto label_2715a8;
    }
    ctx->pc = 0x2715A0u;
    SET_GPR_U32(ctx, 31, 0x2715A8u);
    ctx->pc = 0x2715A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2715A0u;
            // 0x2715a4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2715A8u; }
        if (ctx->pc != 0x2715A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2715A8u; }
        if (ctx->pc != 0x2715A8u) { return; }
    }
    ctx->pc = 0x2715A8u;
label_2715a8:
    // 0x2715a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2715a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2715ac:
    // 0x2715ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2715acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2715b0:
    // 0x2715b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2715b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2715b4:
    // 0x2715b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2715b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2715b8:
    // 0x2715b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2715b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2715bc:
    // 0x2715bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2715bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2715c0:
    // 0x2715c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2715c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2715c4:
    // 0x2715c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2715c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2715c8:
    // 0x2715c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2715c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2715cc:
    // 0x2715cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2715ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2715d0:
    // 0x2715d0: 0x3e00008  jr          $ra
label_2715d4:
    if (ctx->pc == 0x2715D4u) {
        ctx->pc = 0x2715D4u;
            // 0x2715d4: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->pc = 0x2715D8u;
        goto label_2715d8;
    }
    ctx->pc = 0x2715D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2715D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2715D0u;
            // 0x2715d4: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2715D8u;
label_2715d8:
    // 0x2715d8: 0x0  nop
    ctx->pc = 0x2715d8u;
    // NOP
label_2715dc:
    // 0x2715dc: 0x0  nop
    ctx->pc = 0x2715dcu;
    // NOP
label_2715e0:
    // 0x2715e0: 0x3e00008  jr          $ra
label_2715e4:
    if (ctx->pc == 0x2715E4u) {
        ctx->pc = 0x2715E4u;
            // 0x2715e4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2715E8u;
        goto label_2715e8;
    }
    ctx->pc = 0x2715E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2715E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2715E0u;
            // 0x2715e4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2715E8u;
label_2715e8:
    // 0x2715e8: 0x0  nop
    ctx->pc = 0x2715e8u;
    // NOP
label_2715ec:
    // 0x2715ec: 0x0  nop
    ctx->pc = 0x2715ecu;
    // NOP
label_2715f0:
    // 0x2715f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2715f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2715f4:
    // 0x2715f4: 0x3e00008  jr          $ra
label_2715f8:
    if (ctx->pc == 0x2715F8u) {
        ctx->pc = 0x2715F8u;
            // 0x2715f8: 0x2442e830  addiu       $v0, $v0, -0x17D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961200));
        ctx->pc = 0x2715FCu;
        goto label_2715fc;
    }
    ctx->pc = 0x2715F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2715F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2715F4u;
            // 0x2715f8: 0x2442e830  addiu       $v0, $v0, -0x17D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2715FCu;
label_2715fc:
    // 0x2715fc: 0x0  nop
    ctx->pc = 0x2715fcu;
    // NOP
}
