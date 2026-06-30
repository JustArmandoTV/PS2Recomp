#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00393440
// Address: 0x393440 - 0x3946b0
void sub_00393440_0x393440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393440_0x393440");
#endif

    switch (ctx->pc) {
        case 0x393440u: goto label_393440;
        case 0x393444u: goto label_393444;
        case 0x393448u: goto label_393448;
        case 0x39344cu: goto label_39344c;
        case 0x393450u: goto label_393450;
        case 0x393454u: goto label_393454;
        case 0x393458u: goto label_393458;
        case 0x39345cu: goto label_39345c;
        case 0x393460u: goto label_393460;
        case 0x393464u: goto label_393464;
        case 0x393468u: goto label_393468;
        case 0x39346cu: goto label_39346c;
        case 0x393470u: goto label_393470;
        case 0x393474u: goto label_393474;
        case 0x393478u: goto label_393478;
        case 0x39347cu: goto label_39347c;
        case 0x393480u: goto label_393480;
        case 0x393484u: goto label_393484;
        case 0x393488u: goto label_393488;
        case 0x39348cu: goto label_39348c;
        case 0x393490u: goto label_393490;
        case 0x393494u: goto label_393494;
        case 0x393498u: goto label_393498;
        case 0x39349cu: goto label_39349c;
        case 0x3934a0u: goto label_3934a0;
        case 0x3934a4u: goto label_3934a4;
        case 0x3934a8u: goto label_3934a8;
        case 0x3934acu: goto label_3934ac;
        case 0x3934b0u: goto label_3934b0;
        case 0x3934b4u: goto label_3934b4;
        case 0x3934b8u: goto label_3934b8;
        case 0x3934bcu: goto label_3934bc;
        case 0x3934c0u: goto label_3934c0;
        case 0x3934c4u: goto label_3934c4;
        case 0x3934c8u: goto label_3934c8;
        case 0x3934ccu: goto label_3934cc;
        case 0x3934d0u: goto label_3934d0;
        case 0x3934d4u: goto label_3934d4;
        case 0x3934d8u: goto label_3934d8;
        case 0x3934dcu: goto label_3934dc;
        case 0x3934e0u: goto label_3934e0;
        case 0x3934e4u: goto label_3934e4;
        case 0x3934e8u: goto label_3934e8;
        case 0x3934ecu: goto label_3934ec;
        case 0x3934f0u: goto label_3934f0;
        case 0x3934f4u: goto label_3934f4;
        case 0x3934f8u: goto label_3934f8;
        case 0x3934fcu: goto label_3934fc;
        case 0x393500u: goto label_393500;
        case 0x393504u: goto label_393504;
        case 0x393508u: goto label_393508;
        case 0x39350cu: goto label_39350c;
        case 0x393510u: goto label_393510;
        case 0x393514u: goto label_393514;
        case 0x393518u: goto label_393518;
        case 0x39351cu: goto label_39351c;
        case 0x393520u: goto label_393520;
        case 0x393524u: goto label_393524;
        case 0x393528u: goto label_393528;
        case 0x39352cu: goto label_39352c;
        case 0x393530u: goto label_393530;
        case 0x393534u: goto label_393534;
        case 0x393538u: goto label_393538;
        case 0x39353cu: goto label_39353c;
        case 0x393540u: goto label_393540;
        case 0x393544u: goto label_393544;
        case 0x393548u: goto label_393548;
        case 0x39354cu: goto label_39354c;
        case 0x393550u: goto label_393550;
        case 0x393554u: goto label_393554;
        case 0x393558u: goto label_393558;
        case 0x39355cu: goto label_39355c;
        case 0x393560u: goto label_393560;
        case 0x393564u: goto label_393564;
        case 0x393568u: goto label_393568;
        case 0x39356cu: goto label_39356c;
        case 0x393570u: goto label_393570;
        case 0x393574u: goto label_393574;
        case 0x393578u: goto label_393578;
        case 0x39357cu: goto label_39357c;
        case 0x393580u: goto label_393580;
        case 0x393584u: goto label_393584;
        case 0x393588u: goto label_393588;
        case 0x39358cu: goto label_39358c;
        case 0x393590u: goto label_393590;
        case 0x393594u: goto label_393594;
        case 0x393598u: goto label_393598;
        case 0x39359cu: goto label_39359c;
        case 0x3935a0u: goto label_3935a0;
        case 0x3935a4u: goto label_3935a4;
        case 0x3935a8u: goto label_3935a8;
        case 0x3935acu: goto label_3935ac;
        case 0x3935b0u: goto label_3935b0;
        case 0x3935b4u: goto label_3935b4;
        case 0x3935b8u: goto label_3935b8;
        case 0x3935bcu: goto label_3935bc;
        case 0x3935c0u: goto label_3935c0;
        case 0x3935c4u: goto label_3935c4;
        case 0x3935c8u: goto label_3935c8;
        case 0x3935ccu: goto label_3935cc;
        case 0x3935d0u: goto label_3935d0;
        case 0x3935d4u: goto label_3935d4;
        case 0x3935d8u: goto label_3935d8;
        case 0x3935dcu: goto label_3935dc;
        case 0x3935e0u: goto label_3935e0;
        case 0x3935e4u: goto label_3935e4;
        case 0x3935e8u: goto label_3935e8;
        case 0x3935ecu: goto label_3935ec;
        case 0x3935f0u: goto label_3935f0;
        case 0x3935f4u: goto label_3935f4;
        case 0x3935f8u: goto label_3935f8;
        case 0x3935fcu: goto label_3935fc;
        case 0x393600u: goto label_393600;
        case 0x393604u: goto label_393604;
        case 0x393608u: goto label_393608;
        case 0x39360cu: goto label_39360c;
        case 0x393610u: goto label_393610;
        case 0x393614u: goto label_393614;
        case 0x393618u: goto label_393618;
        case 0x39361cu: goto label_39361c;
        case 0x393620u: goto label_393620;
        case 0x393624u: goto label_393624;
        case 0x393628u: goto label_393628;
        case 0x39362cu: goto label_39362c;
        case 0x393630u: goto label_393630;
        case 0x393634u: goto label_393634;
        case 0x393638u: goto label_393638;
        case 0x39363cu: goto label_39363c;
        case 0x393640u: goto label_393640;
        case 0x393644u: goto label_393644;
        case 0x393648u: goto label_393648;
        case 0x39364cu: goto label_39364c;
        case 0x393650u: goto label_393650;
        case 0x393654u: goto label_393654;
        case 0x393658u: goto label_393658;
        case 0x39365cu: goto label_39365c;
        case 0x393660u: goto label_393660;
        case 0x393664u: goto label_393664;
        case 0x393668u: goto label_393668;
        case 0x39366cu: goto label_39366c;
        case 0x393670u: goto label_393670;
        case 0x393674u: goto label_393674;
        case 0x393678u: goto label_393678;
        case 0x39367cu: goto label_39367c;
        case 0x393680u: goto label_393680;
        case 0x393684u: goto label_393684;
        case 0x393688u: goto label_393688;
        case 0x39368cu: goto label_39368c;
        case 0x393690u: goto label_393690;
        case 0x393694u: goto label_393694;
        case 0x393698u: goto label_393698;
        case 0x39369cu: goto label_39369c;
        case 0x3936a0u: goto label_3936a0;
        case 0x3936a4u: goto label_3936a4;
        case 0x3936a8u: goto label_3936a8;
        case 0x3936acu: goto label_3936ac;
        case 0x3936b0u: goto label_3936b0;
        case 0x3936b4u: goto label_3936b4;
        case 0x3936b8u: goto label_3936b8;
        case 0x3936bcu: goto label_3936bc;
        case 0x3936c0u: goto label_3936c0;
        case 0x3936c4u: goto label_3936c4;
        case 0x3936c8u: goto label_3936c8;
        case 0x3936ccu: goto label_3936cc;
        case 0x3936d0u: goto label_3936d0;
        case 0x3936d4u: goto label_3936d4;
        case 0x3936d8u: goto label_3936d8;
        case 0x3936dcu: goto label_3936dc;
        case 0x3936e0u: goto label_3936e0;
        case 0x3936e4u: goto label_3936e4;
        case 0x3936e8u: goto label_3936e8;
        case 0x3936ecu: goto label_3936ec;
        case 0x3936f0u: goto label_3936f0;
        case 0x3936f4u: goto label_3936f4;
        case 0x3936f8u: goto label_3936f8;
        case 0x3936fcu: goto label_3936fc;
        case 0x393700u: goto label_393700;
        case 0x393704u: goto label_393704;
        case 0x393708u: goto label_393708;
        case 0x39370cu: goto label_39370c;
        case 0x393710u: goto label_393710;
        case 0x393714u: goto label_393714;
        case 0x393718u: goto label_393718;
        case 0x39371cu: goto label_39371c;
        case 0x393720u: goto label_393720;
        case 0x393724u: goto label_393724;
        case 0x393728u: goto label_393728;
        case 0x39372cu: goto label_39372c;
        case 0x393730u: goto label_393730;
        case 0x393734u: goto label_393734;
        case 0x393738u: goto label_393738;
        case 0x39373cu: goto label_39373c;
        case 0x393740u: goto label_393740;
        case 0x393744u: goto label_393744;
        case 0x393748u: goto label_393748;
        case 0x39374cu: goto label_39374c;
        case 0x393750u: goto label_393750;
        case 0x393754u: goto label_393754;
        case 0x393758u: goto label_393758;
        case 0x39375cu: goto label_39375c;
        case 0x393760u: goto label_393760;
        case 0x393764u: goto label_393764;
        case 0x393768u: goto label_393768;
        case 0x39376cu: goto label_39376c;
        case 0x393770u: goto label_393770;
        case 0x393774u: goto label_393774;
        case 0x393778u: goto label_393778;
        case 0x39377cu: goto label_39377c;
        case 0x393780u: goto label_393780;
        case 0x393784u: goto label_393784;
        case 0x393788u: goto label_393788;
        case 0x39378cu: goto label_39378c;
        case 0x393790u: goto label_393790;
        case 0x393794u: goto label_393794;
        case 0x393798u: goto label_393798;
        case 0x39379cu: goto label_39379c;
        case 0x3937a0u: goto label_3937a0;
        case 0x3937a4u: goto label_3937a4;
        case 0x3937a8u: goto label_3937a8;
        case 0x3937acu: goto label_3937ac;
        case 0x3937b0u: goto label_3937b0;
        case 0x3937b4u: goto label_3937b4;
        case 0x3937b8u: goto label_3937b8;
        case 0x3937bcu: goto label_3937bc;
        case 0x3937c0u: goto label_3937c0;
        case 0x3937c4u: goto label_3937c4;
        case 0x3937c8u: goto label_3937c8;
        case 0x3937ccu: goto label_3937cc;
        case 0x3937d0u: goto label_3937d0;
        case 0x3937d4u: goto label_3937d4;
        case 0x3937d8u: goto label_3937d8;
        case 0x3937dcu: goto label_3937dc;
        case 0x3937e0u: goto label_3937e0;
        case 0x3937e4u: goto label_3937e4;
        case 0x3937e8u: goto label_3937e8;
        case 0x3937ecu: goto label_3937ec;
        case 0x3937f0u: goto label_3937f0;
        case 0x3937f4u: goto label_3937f4;
        case 0x3937f8u: goto label_3937f8;
        case 0x3937fcu: goto label_3937fc;
        case 0x393800u: goto label_393800;
        case 0x393804u: goto label_393804;
        case 0x393808u: goto label_393808;
        case 0x39380cu: goto label_39380c;
        case 0x393810u: goto label_393810;
        case 0x393814u: goto label_393814;
        case 0x393818u: goto label_393818;
        case 0x39381cu: goto label_39381c;
        case 0x393820u: goto label_393820;
        case 0x393824u: goto label_393824;
        case 0x393828u: goto label_393828;
        case 0x39382cu: goto label_39382c;
        case 0x393830u: goto label_393830;
        case 0x393834u: goto label_393834;
        case 0x393838u: goto label_393838;
        case 0x39383cu: goto label_39383c;
        case 0x393840u: goto label_393840;
        case 0x393844u: goto label_393844;
        case 0x393848u: goto label_393848;
        case 0x39384cu: goto label_39384c;
        case 0x393850u: goto label_393850;
        case 0x393854u: goto label_393854;
        case 0x393858u: goto label_393858;
        case 0x39385cu: goto label_39385c;
        case 0x393860u: goto label_393860;
        case 0x393864u: goto label_393864;
        case 0x393868u: goto label_393868;
        case 0x39386cu: goto label_39386c;
        case 0x393870u: goto label_393870;
        case 0x393874u: goto label_393874;
        case 0x393878u: goto label_393878;
        case 0x39387cu: goto label_39387c;
        case 0x393880u: goto label_393880;
        case 0x393884u: goto label_393884;
        case 0x393888u: goto label_393888;
        case 0x39388cu: goto label_39388c;
        case 0x393890u: goto label_393890;
        case 0x393894u: goto label_393894;
        case 0x393898u: goto label_393898;
        case 0x39389cu: goto label_39389c;
        case 0x3938a0u: goto label_3938a0;
        case 0x3938a4u: goto label_3938a4;
        case 0x3938a8u: goto label_3938a8;
        case 0x3938acu: goto label_3938ac;
        case 0x3938b0u: goto label_3938b0;
        case 0x3938b4u: goto label_3938b4;
        case 0x3938b8u: goto label_3938b8;
        case 0x3938bcu: goto label_3938bc;
        case 0x3938c0u: goto label_3938c0;
        case 0x3938c4u: goto label_3938c4;
        case 0x3938c8u: goto label_3938c8;
        case 0x3938ccu: goto label_3938cc;
        case 0x3938d0u: goto label_3938d0;
        case 0x3938d4u: goto label_3938d4;
        case 0x3938d8u: goto label_3938d8;
        case 0x3938dcu: goto label_3938dc;
        case 0x3938e0u: goto label_3938e0;
        case 0x3938e4u: goto label_3938e4;
        case 0x3938e8u: goto label_3938e8;
        case 0x3938ecu: goto label_3938ec;
        case 0x3938f0u: goto label_3938f0;
        case 0x3938f4u: goto label_3938f4;
        case 0x3938f8u: goto label_3938f8;
        case 0x3938fcu: goto label_3938fc;
        case 0x393900u: goto label_393900;
        case 0x393904u: goto label_393904;
        case 0x393908u: goto label_393908;
        case 0x39390cu: goto label_39390c;
        case 0x393910u: goto label_393910;
        case 0x393914u: goto label_393914;
        case 0x393918u: goto label_393918;
        case 0x39391cu: goto label_39391c;
        case 0x393920u: goto label_393920;
        case 0x393924u: goto label_393924;
        case 0x393928u: goto label_393928;
        case 0x39392cu: goto label_39392c;
        case 0x393930u: goto label_393930;
        case 0x393934u: goto label_393934;
        case 0x393938u: goto label_393938;
        case 0x39393cu: goto label_39393c;
        case 0x393940u: goto label_393940;
        case 0x393944u: goto label_393944;
        case 0x393948u: goto label_393948;
        case 0x39394cu: goto label_39394c;
        case 0x393950u: goto label_393950;
        case 0x393954u: goto label_393954;
        case 0x393958u: goto label_393958;
        case 0x39395cu: goto label_39395c;
        case 0x393960u: goto label_393960;
        case 0x393964u: goto label_393964;
        case 0x393968u: goto label_393968;
        case 0x39396cu: goto label_39396c;
        case 0x393970u: goto label_393970;
        case 0x393974u: goto label_393974;
        case 0x393978u: goto label_393978;
        case 0x39397cu: goto label_39397c;
        case 0x393980u: goto label_393980;
        case 0x393984u: goto label_393984;
        case 0x393988u: goto label_393988;
        case 0x39398cu: goto label_39398c;
        case 0x393990u: goto label_393990;
        case 0x393994u: goto label_393994;
        case 0x393998u: goto label_393998;
        case 0x39399cu: goto label_39399c;
        case 0x3939a0u: goto label_3939a0;
        case 0x3939a4u: goto label_3939a4;
        case 0x3939a8u: goto label_3939a8;
        case 0x3939acu: goto label_3939ac;
        case 0x3939b0u: goto label_3939b0;
        case 0x3939b4u: goto label_3939b4;
        case 0x3939b8u: goto label_3939b8;
        case 0x3939bcu: goto label_3939bc;
        case 0x3939c0u: goto label_3939c0;
        case 0x3939c4u: goto label_3939c4;
        case 0x3939c8u: goto label_3939c8;
        case 0x3939ccu: goto label_3939cc;
        case 0x3939d0u: goto label_3939d0;
        case 0x3939d4u: goto label_3939d4;
        case 0x3939d8u: goto label_3939d8;
        case 0x3939dcu: goto label_3939dc;
        case 0x3939e0u: goto label_3939e0;
        case 0x3939e4u: goto label_3939e4;
        case 0x3939e8u: goto label_3939e8;
        case 0x3939ecu: goto label_3939ec;
        case 0x3939f0u: goto label_3939f0;
        case 0x3939f4u: goto label_3939f4;
        case 0x3939f8u: goto label_3939f8;
        case 0x3939fcu: goto label_3939fc;
        case 0x393a00u: goto label_393a00;
        case 0x393a04u: goto label_393a04;
        case 0x393a08u: goto label_393a08;
        case 0x393a0cu: goto label_393a0c;
        case 0x393a10u: goto label_393a10;
        case 0x393a14u: goto label_393a14;
        case 0x393a18u: goto label_393a18;
        case 0x393a1cu: goto label_393a1c;
        case 0x393a20u: goto label_393a20;
        case 0x393a24u: goto label_393a24;
        case 0x393a28u: goto label_393a28;
        case 0x393a2cu: goto label_393a2c;
        case 0x393a30u: goto label_393a30;
        case 0x393a34u: goto label_393a34;
        case 0x393a38u: goto label_393a38;
        case 0x393a3cu: goto label_393a3c;
        case 0x393a40u: goto label_393a40;
        case 0x393a44u: goto label_393a44;
        case 0x393a48u: goto label_393a48;
        case 0x393a4cu: goto label_393a4c;
        case 0x393a50u: goto label_393a50;
        case 0x393a54u: goto label_393a54;
        case 0x393a58u: goto label_393a58;
        case 0x393a5cu: goto label_393a5c;
        case 0x393a60u: goto label_393a60;
        case 0x393a64u: goto label_393a64;
        case 0x393a68u: goto label_393a68;
        case 0x393a6cu: goto label_393a6c;
        case 0x393a70u: goto label_393a70;
        case 0x393a74u: goto label_393a74;
        case 0x393a78u: goto label_393a78;
        case 0x393a7cu: goto label_393a7c;
        case 0x393a80u: goto label_393a80;
        case 0x393a84u: goto label_393a84;
        case 0x393a88u: goto label_393a88;
        case 0x393a8cu: goto label_393a8c;
        case 0x393a90u: goto label_393a90;
        case 0x393a94u: goto label_393a94;
        case 0x393a98u: goto label_393a98;
        case 0x393a9cu: goto label_393a9c;
        case 0x393aa0u: goto label_393aa0;
        case 0x393aa4u: goto label_393aa4;
        case 0x393aa8u: goto label_393aa8;
        case 0x393aacu: goto label_393aac;
        case 0x393ab0u: goto label_393ab0;
        case 0x393ab4u: goto label_393ab4;
        case 0x393ab8u: goto label_393ab8;
        case 0x393abcu: goto label_393abc;
        case 0x393ac0u: goto label_393ac0;
        case 0x393ac4u: goto label_393ac4;
        case 0x393ac8u: goto label_393ac8;
        case 0x393accu: goto label_393acc;
        case 0x393ad0u: goto label_393ad0;
        case 0x393ad4u: goto label_393ad4;
        case 0x393ad8u: goto label_393ad8;
        case 0x393adcu: goto label_393adc;
        case 0x393ae0u: goto label_393ae0;
        case 0x393ae4u: goto label_393ae4;
        case 0x393ae8u: goto label_393ae8;
        case 0x393aecu: goto label_393aec;
        case 0x393af0u: goto label_393af0;
        case 0x393af4u: goto label_393af4;
        case 0x393af8u: goto label_393af8;
        case 0x393afcu: goto label_393afc;
        case 0x393b00u: goto label_393b00;
        case 0x393b04u: goto label_393b04;
        case 0x393b08u: goto label_393b08;
        case 0x393b0cu: goto label_393b0c;
        case 0x393b10u: goto label_393b10;
        case 0x393b14u: goto label_393b14;
        case 0x393b18u: goto label_393b18;
        case 0x393b1cu: goto label_393b1c;
        case 0x393b20u: goto label_393b20;
        case 0x393b24u: goto label_393b24;
        case 0x393b28u: goto label_393b28;
        case 0x393b2cu: goto label_393b2c;
        case 0x393b30u: goto label_393b30;
        case 0x393b34u: goto label_393b34;
        case 0x393b38u: goto label_393b38;
        case 0x393b3cu: goto label_393b3c;
        case 0x393b40u: goto label_393b40;
        case 0x393b44u: goto label_393b44;
        case 0x393b48u: goto label_393b48;
        case 0x393b4cu: goto label_393b4c;
        case 0x393b50u: goto label_393b50;
        case 0x393b54u: goto label_393b54;
        case 0x393b58u: goto label_393b58;
        case 0x393b5cu: goto label_393b5c;
        case 0x393b60u: goto label_393b60;
        case 0x393b64u: goto label_393b64;
        case 0x393b68u: goto label_393b68;
        case 0x393b6cu: goto label_393b6c;
        case 0x393b70u: goto label_393b70;
        case 0x393b74u: goto label_393b74;
        case 0x393b78u: goto label_393b78;
        case 0x393b7cu: goto label_393b7c;
        case 0x393b80u: goto label_393b80;
        case 0x393b84u: goto label_393b84;
        case 0x393b88u: goto label_393b88;
        case 0x393b8cu: goto label_393b8c;
        case 0x393b90u: goto label_393b90;
        case 0x393b94u: goto label_393b94;
        case 0x393b98u: goto label_393b98;
        case 0x393b9cu: goto label_393b9c;
        case 0x393ba0u: goto label_393ba0;
        case 0x393ba4u: goto label_393ba4;
        case 0x393ba8u: goto label_393ba8;
        case 0x393bacu: goto label_393bac;
        case 0x393bb0u: goto label_393bb0;
        case 0x393bb4u: goto label_393bb4;
        case 0x393bb8u: goto label_393bb8;
        case 0x393bbcu: goto label_393bbc;
        case 0x393bc0u: goto label_393bc0;
        case 0x393bc4u: goto label_393bc4;
        case 0x393bc8u: goto label_393bc8;
        case 0x393bccu: goto label_393bcc;
        case 0x393bd0u: goto label_393bd0;
        case 0x393bd4u: goto label_393bd4;
        case 0x393bd8u: goto label_393bd8;
        case 0x393bdcu: goto label_393bdc;
        case 0x393be0u: goto label_393be0;
        case 0x393be4u: goto label_393be4;
        case 0x393be8u: goto label_393be8;
        case 0x393becu: goto label_393bec;
        case 0x393bf0u: goto label_393bf0;
        case 0x393bf4u: goto label_393bf4;
        case 0x393bf8u: goto label_393bf8;
        case 0x393bfcu: goto label_393bfc;
        case 0x393c00u: goto label_393c00;
        case 0x393c04u: goto label_393c04;
        case 0x393c08u: goto label_393c08;
        case 0x393c0cu: goto label_393c0c;
        case 0x393c10u: goto label_393c10;
        case 0x393c14u: goto label_393c14;
        case 0x393c18u: goto label_393c18;
        case 0x393c1cu: goto label_393c1c;
        case 0x393c20u: goto label_393c20;
        case 0x393c24u: goto label_393c24;
        case 0x393c28u: goto label_393c28;
        case 0x393c2cu: goto label_393c2c;
        case 0x393c30u: goto label_393c30;
        case 0x393c34u: goto label_393c34;
        case 0x393c38u: goto label_393c38;
        case 0x393c3cu: goto label_393c3c;
        case 0x393c40u: goto label_393c40;
        case 0x393c44u: goto label_393c44;
        case 0x393c48u: goto label_393c48;
        case 0x393c4cu: goto label_393c4c;
        case 0x393c50u: goto label_393c50;
        case 0x393c54u: goto label_393c54;
        case 0x393c58u: goto label_393c58;
        case 0x393c5cu: goto label_393c5c;
        case 0x393c60u: goto label_393c60;
        case 0x393c64u: goto label_393c64;
        case 0x393c68u: goto label_393c68;
        case 0x393c6cu: goto label_393c6c;
        case 0x393c70u: goto label_393c70;
        case 0x393c74u: goto label_393c74;
        case 0x393c78u: goto label_393c78;
        case 0x393c7cu: goto label_393c7c;
        case 0x393c80u: goto label_393c80;
        case 0x393c84u: goto label_393c84;
        case 0x393c88u: goto label_393c88;
        case 0x393c8cu: goto label_393c8c;
        case 0x393c90u: goto label_393c90;
        case 0x393c94u: goto label_393c94;
        case 0x393c98u: goto label_393c98;
        case 0x393c9cu: goto label_393c9c;
        case 0x393ca0u: goto label_393ca0;
        case 0x393ca4u: goto label_393ca4;
        case 0x393ca8u: goto label_393ca8;
        case 0x393cacu: goto label_393cac;
        case 0x393cb0u: goto label_393cb0;
        case 0x393cb4u: goto label_393cb4;
        case 0x393cb8u: goto label_393cb8;
        case 0x393cbcu: goto label_393cbc;
        case 0x393cc0u: goto label_393cc0;
        case 0x393cc4u: goto label_393cc4;
        case 0x393cc8u: goto label_393cc8;
        case 0x393cccu: goto label_393ccc;
        case 0x393cd0u: goto label_393cd0;
        case 0x393cd4u: goto label_393cd4;
        case 0x393cd8u: goto label_393cd8;
        case 0x393cdcu: goto label_393cdc;
        case 0x393ce0u: goto label_393ce0;
        case 0x393ce4u: goto label_393ce4;
        case 0x393ce8u: goto label_393ce8;
        case 0x393cecu: goto label_393cec;
        case 0x393cf0u: goto label_393cf0;
        case 0x393cf4u: goto label_393cf4;
        case 0x393cf8u: goto label_393cf8;
        case 0x393cfcu: goto label_393cfc;
        case 0x393d00u: goto label_393d00;
        case 0x393d04u: goto label_393d04;
        case 0x393d08u: goto label_393d08;
        case 0x393d0cu: goto label_393d0c;
        case 0x393d10u: goto label_393d10;
        case 0x393d14u: goto label_393d14;
        case 0x393d18u: goto label_393d18;
        case 0x393d1cu: goto label_393d1c;
        case 0x393d20u: goto label_393d20;
        case 0x393d24u: goto label_393d24;
        case 0x393d28u: goto label_393d28;
        case 0x393d2cu: goto label_393d2c;
        case 0x393d30u: goto label_393d30;
        case 0x393d34u: goto label_393d34;
        case 0x393d38u: goto label_393d38;
        case 0x393d3cu: goto label_393d3c;
        case 0x393d40u: goto label_393d40;
        case 0x393d44u: goto label_393d44;
        case 0x393d48u: goto label_393d48;
        case 0x393d4cu: goto label_393d4c;
        case 0x393d50u: goto label_393d50;
        case 0x393d54u: goto label_393d54;
        case 0x393d58u: goto label_393d58;
        case 0x393d5cu: goto label_393d5c;
        case 0x393d60u: goto label_393d60;
        case 0x393d64u: goto label_393d64;
        case 0x393d68u: goto label_393d68;
        case 0x393d6cu: goto label_393d6c;
        case 0x393d70u: goto label_393d70;
        case 0x393d74u: goto label_393d74;
        case 0x393d78u: goto label_393d78;
        case 0x393d7cu: goto label_393d7c;
        case 0x393d80u: goto label_393d80;
        case 0x393d84u: goto label_393d84;
        case 0x393d88u: goto label_393d88;
        case 0x393d8cu: goto label_393d8c;
        case 0x393d90u: goto label_393d90;
        case 0x393d94u: goto label_393d94;
        case 0x393d98u: goto label_393d98;
        case 0x393d9cu: goto label_393d9c;
        case 0x393da0u: goto label_393da0;
        case 0x393da4u: goto label_393da4;
        case 0x393da8u: goto label_393da8;
        case 0x393dacu: goto label_393dac;
        case 0x393db0u: goto label_393db0;
        case 0x393db4u: goto label_393db4;
        case 0x393db8u: goto label_393db8;
        case 0x393dbcu: goto label_393dbc;
        case 0x393dc0u: goto label_393dc0;
        case 0x393dc4u: goto label_393dc4;
        case 0x393dc8u: goto label_393dc8;
        case 0x393dccu: goto label_393dcc;
        case 0x393dd0u: goto label_393dd0;
        case 0x393dd4u: goto label_393dd4;
        case 0x393dd8u: goto label_393dd8;
        case 0x393ddcu: goto label_393ddc;
        case 0x393de0u: goto label_393de0;
        case 0x393de4u: goto label_393de4;
        case 0x393de8u: goto label_393de8;
        case 0x393decu: goto label_393dec;
        case 0x393df0u: goto label_393df0;
        case 0x393df4u: goto label_393df4;
        case 0x393df8u: goto label_393df8;
        case 0x393dfcu: goto label_393dfc;
        case 0x393e00u: goto label_393e00;
        case 0x393e04u: goto label_393e04;
        case 0x393e08u: goto label_393e08;
        case 0x393e0cu: goto label_393e0c;
        case 0x393e10u: goto label_393e10;
        case 0x393e14u: goto label_393e14;
        case 0x393e18u: goto label_393e18;
        case 0x393e1cu: goto label_393e1c;
        case 0x393e20u: goto label_393e20;
        case 0x393e24u: goto label_393e24;
        case 0x393e28u: goto label_393e28;
        case 0x393e2cu: goto label_393e2c;
        case 0x393e30u: goto label_393e30;
        case 0x393e34u: goto label_393e34;
        case 0x393e38u: goto label_393e38;
        case 0x393e3cu: goto label_393e3c;
        case 0x393e40u: goto label_393e40;
        case 0x393e44u: goto label_393e44;
        case 0x393e48u: goto label_393e48;
        case 0x393e4cu: goto label_393e4c;
        case 0x393e50u: goto label_393e50;
        case 0x393e54u: goto label_393e54;
        case 0x393e58u: goto label_393e58;
        case 0x393e5cu: goto label_393e5c;
        case 0x393e60u: goto label_393e60;
        case 0x393e64u: goto label_393e64;
        case 0x393e68u: goto label_393e68;
        case 0x393e6cu: goto label_393e6c;
        case 0x393e70u: goto label_393e70;
        case 0x393e74u: goto label_393e74;
        case 0x393e78u: goto label_393e78;
        case 0x393e7cu: goto label_393e7c;
        case 0x393e80u: goto label_393e80;
        case 0x393e84u: goto label_393e84;
        case 0x393e88u: goto label_393e88;
        case 0x393e8cu: goto label_393e8c;
        case 0x393e90u: goto label_393e90;
        case 0x393e94u: goto label_393e94;
        case 0x393e98u: goto label_393e98;
        case 0x393e9cu: goto label_393e9c;
        case 0x393ea0u: goto label_393ea0;
        case 0x393ea4u: goto label_393ea4;
        case 0x393ea8u: goto label_393ea8;
        case 0x393eacu: goto label_393eac;
        case 0x393eb0u: goto label_393eb0;
        case 0x393eb4u: goto label_393eb4;
        case 0x393eb8u: goto label_393eb8;
        case 0x393ebcu: goto label_393ebc;
        case 0x393ec0u: goto label_393ec0;
        case 0x393ec4u: goto label_393ec4;
        case 0x393ec8u: goto label_393ec8;
        case 0x393eccu: goto label_393ecc;
        case 0x393ed0u: goto label_393ed0;
        case 0x393ed4u: goto label_393ed4;
        case 0x393ed8u: goto label_393ed8;
        case 0x393edcu: goto label_393edc;
        case 0x393ee0u: goto label_393ee0;
        case 0x393ee4u: goto label_393ee4;
        case 0x393ee8u: goto label_393ee8;
        case 0x393eecu: goto label_393eec;
        case 0x393ef0u: goto label_393ef0;
        case 0x393ef4u: goto label_393ef4;
        case 0x393ef8u: goto label_393ef8;
        case 0x393efcu: goto label_393efc;
        case 0x393f00u: goto label_393f00;
        case 0x393f04u: goto label_393f04;
        case 0x393f08u: goto label_393f08;
        case 0x393f0cu: goto label_393f0c;
        case 0x393f10u: goto label_393f10;
        case 0x393f14u: goto label_393f14;
        case 0x393f18u: goto label_393f18;
        case 0x393f1cu: goto label_393f1c;
        case 0x393f20u: goto label_393f20;
        case 0x393f24u: goto label_393f24;
        case 0x393f28u: goto label_393f28;
        case 0x393f2cu: goto label_393f2c;
        case 0x393f30u: goto label_393f30;
        case 0x393f34u: goto label_393f34;
        case 0x393f38u: goto label_393f38;
        case 0x393f3cu: goto label_393f3c;
        case 0x393f40u: goto label_393f40;
        case 0x393f44u: goto label_393f44;
        case 0x393f48u: goto label_393f48;
        case 0x393f4cu: goto label_393f4c;
        case 0x393f50u: goto label_393f50;
        case 0x393f54u: goto label_393f54;
        case 0x393f58u: goto label_393f58;
        case 0x393f5cu: goto label_393f5c;
        case 0x393f60u: goto label_393f60;
        case 0x393f64u: goto label_393f64;
        case 0x393f68u: goto label_393f68;
        case 0x393f6cu: goto label_393f6c;
        case 0x393f70u: goto label_393f70;
        case 0x393f74u: goto label_393f74;
        case 0x393f78u: goto label_393f78;
        case 0x393f7cu: goto label_393f7c;
        case 0x393f80u: goto label_393f80;
        case 0x393f84u: goto label_393f84;
        case 0x393f88u: goto label_393f88;
        case 0x393f8cu: goto label_393f8c;
        case 0x393f90u: goto label_393f90;
        case 0x393f94u: goto label_393f94;
        case 0x393f98u: goto label_393f98;
        case 0x393f9cu: goto label_393f9c;
        case 0x393fa0u: goto label_393fa0;
        case 0x393fa4u: goto label_393fa4;
        case 0x393fa8u: goto label_393fa8;
        case 0x393facu: goto label_393fac;
        case 0x393fb0u: goto label_393fb0;
        case 0x393fb4u: goto label_393fb4;
        case 0x393fb8u: goto label_393fb8;
        case 0x393fbcu: goto label_393fbc;
        case 0x393fc0u: goto label_393fc0;
        case 0x393fc4u: goto label_393fc4;
        case 0x393fc8u: goto label_393fc8;
        case 0x393fccu: goto label_393fcc;
        case 0x393fd0u: goto label_393fd0;
        case 0x393fd4u: goto label_393fd4;
        case 0x393fd8u: goto label_393fd8;
        case 0x393fdcu: goto label_393fdc;
        case 0x393fe0u: goto label_393fe0;
        case 0x393fe4u: goto label_393fe4;
        case 0x393fe8u: goto label_393fe8;
        case 0x393fecu: goto label_393fec;
        case 0x393ff0u: goto label_393ff0;
        case 0x393ff4u: goto label_393ff4;
        case 0x393ff8u: goto label_393ff8;
        case 0x393ffcu: goto label_393ffc;
        case 0x394000u: goto label_394000;
        case 0x394004u: goto label_394004;
        case 0x394008u: goto label_394008;
        case 0x39400cu: goto label_39400c;
        case 0x394010u: goto label_394010;
        case 0x394014u: goto label_394014;
        case 0x394018u: goto label_394018;
        case 0x39401cu: goto label_39401c;
        case 0x394020u: goto label_394020;
        case 0x394024u: goto label_394024;
        case 0x394028u: goto label_394028;
        case 0x39402cu: goto label_39402c;
        case 0x394030u: goto label_394030;
        case 0x394034u: goto label_394034;
        case 0x394038u: goto label_394038;
        case 0x39403cu: goto label_39403c;
        case 0x394040u: goto label_394040;
        case 0x394044u: goto label_394044;
        case 0x394048u: goto label_394048;
        case 0x39404cu: goto label_39404c;
        case 0x394050u: goto label_394050;
        case 0x394054u: goto label_394054;
        case 0x394058u: goto label_394058;
        case 0x39405cu: goto label_39405c;
        case 0x394060u: goto label_394060;
        case 0x394064u: goto label_394064;
        case 0x394068u: goto label_394068;
        case 0x39406cu: goto label_39406c;
        case 0x394070u: goto label_394070;
        case 0x394074u: goto label_394074;
        case 0x394078u: goto label_394078;
        case 0x39407cu: goto label_39407c;
        case 0x394080u: goto label_394080;
        case 0x394084u: goto label_394084;
        case 0x394088u: goto label_394088;
        case 0x39408cu: goto label_39408c;
        case 0x394090u: goto label_394090;
        case 0x394094u: goto label_394094;
        case 0x394098u: goto label_394098;
        case 0x39409cu: goto label_39409c;
        case 0x3940a0u: goto label_3940a0;
        case 0x3940a4u: goto label_3940a4;
        case 0x3940a8u: goto label_3940a8;
        case 0x3940acu: goto label_3940ac;
        case 0x3940b0u: goto label_3940b0;
        case 0x3940b4u: goto label_3940b4;
        case 0x3940b8u: goto label_3940b8;
        case 0x3940bcu: goto label_3940bc;
        case 0x3940c0u: goto label_3940c0;
        case 0x3940c4u: goto label_3940c4;
        case 0x3940c8u: goto label_3940c8;
        case 0x3940ccu: goto label_3940cc;
        case 0x3940d0u: goto label_3940d0;
        case 0x3940d4u: goto label_3940d4;
        case 0x3940d8u: goto label_3940d8;
        case 0x3940dcu: goto label_3940dc;
        case 0x3940e0u: goto label_3940e0;
        case 0x3940e4u: goto label_3940e4;
        case 0x3940e8u: goto label_3940e8;
        case 0x3940ecu: goto label_3940ec;
        case 0x3940f0u: goto label_3940f0;
        case 0x3940f4u: goto label_3940f4;
        case 0x3940f8u: goto label_3940f8;
        case 0x3940fcu: goto label_3940fc;
        case 0x394100u: goto label_394100;
        case 0x394104u: goto label_394104;
        case 0x394108u: goto label_394108;
        case 0x39410cu: goto label_39410c;
        case 0x394110u: goto label_394110;
        case 0x394114u: goto label_394114;
        case 0x394118u: goto label_394118;
        case 0x39411cu: goto label_39411c;
        case 0x394120u: goto label_394120;
        case 0x394124u: goto label_394124;
        case 0x394128u: goto label_394128;
        case 0x39412cu: goto label_39412c;
        case 0x394130u: goto label_394130;
        case 0x394134u: goto label_394134;
        case 0x394138u: goto label_394138;
        case 0x39413cu: goto label_39413c;
        case 0x394140u: goto label_394140;
        case 0x394144u: goto label_394144;
        case 0x394148u: goto label_394148;
        case 0x39414cu: goto label_39414c;
        case 0x394150u: goto label_394150;
        case 0x394154u: goto label_394154;
        case 0x394158u: goto label_394158;
        case 0x39415cu: goto label_39415c;
        case 0x394160u: goto label_394160;
        case 0x394164u: goto label_394164;
        case 0x394168u: goto label_394168;
        case 0x39416cu: goto label_39416c;
        case 0x394170u: goto label_394170;
        case 0x394174u: goto label_394174;
        case 0x394178u: goto label_394178;
        case 0x39417cu: goto label_39417c;
        case 0x394180u: goto label_394180;
        case 0x394184u: goto label_394184;
        case 0x394188u: goto label_394188;
        case 0x39418cu: goto label_39418c;
        case 0x394190u: goto label_394190;
        case 0x394194u: goto label_394194;
        case 0x394198u: goto label_394198;
        case 0x39419cu: goto label_39419c;
        case 0x3941a0u: goto label_3941a0;
        case 0x3941a4u: goto label_3941a4;
        case 0x3941a8u: goto label_3941a8;
        case 0x3941acu: goto label_3941ac;
        case 0x3941b0u: goto label_3941b0;
        case 0x3941b4u: goto label_3941b4;
        case 0x3941b8u: goto label_3941b8;
        case 0x3941bcu: goto label_3941bc;
        case 0x3941c0u: goto label_3941c0;
        case 0x3941c4u: goto label_3941c4;
        case 0x3941c8u: goto label_3941c8;
        case 0x3941ccu: goto label_3941cc;
        case 0x3941d0u: goto label_3941d0;
        case 0x3941d4u: goto label_3941d4;
        case 0x3941d8u: goto label_3941d8;
        case 0x3941dcu: goto label_3941dc;
        case 0x3941e0u: goto label_3941e0;
        case 0x3941e4u: goto label_3941e4;
        case 0x3941e8u: goto label_3941e8;
        case 0x3941ecu: goto label_3941ec;
        case 0x3941f0u: goto label_3941f0;
        case 0x3941f4u: goto label_3941f4;
        case 0x3941f8u: goto label_3941f8;
        case 0x3941fcu: goto label_3941fc;
        case 0x394200u: goto label_394200;
        case 0x394204u: goto label_394204;
        case 0x394208u: goto label_394208;
        case 0x39420cu: goto label_39420c;
        case 0x394210u: goto label_394210;
        case 0x394214u: goto label_394214;
        case 0x394218u: goto label_394218;
        case 0x39421cu: goto label_39421c;
        case 0x394220u: goto label_394220;
        case 0x394224u: goto label_394224;
        case 0x394228u: goto label_394228;
        case 0x39422cu: goto label_39422c;
        case 0x394230u: goto label_394230;
        case 0x394234u: goto label_394234;
        case 0x394238u: goto label_394238;
        case 0x39423cu: goto label_39423c;
        case 0x394240u: goto label_394240;
        case 0x394244u: goto label_394244;
        case 0x394248u: goto label_394248;
        case 0x39424cu: goto label_39424c;
        case 0x394250u: goto label_394250;
        case 0x394254u: goto label_394254;
        case 0x394258u: goto label_394258;
        case 0x39425cu: goto label_39425c;
        case 0x394260u: goto label_394260;
        case 0x394264u: goto label_394264;
        case 0x394268u: goto label_394268;
        case 0x39426cu: goto label_39426c;
        case 0x394270u: goto label_394270;
        case 0x394274u: goto label_394274;
        case 0x394278u: goto label_394278;
        case 0x39427cu: goto label_39427c;
        case 0x394280u: goto label_394280;
        case 0x394284u: goto label_394284;
        case 0x394288u: goto label_394288;
        case 0x39428cu: goto label_39428c;
        case 0x394290u: goto label_394290;
        case 0x394294u: goto label_394294;
        case 0x394298u: goto label_394298;
        case 0x39429cu: goto label_39429c;
        case 0x3942a0u: goto label_3942a0;
        case 0x3942a4u: goto label_3942a4;
        case 0x3942a8u: goto label_3942a8;
        case 0x3942acu: goto label_3942ac;
        case 0x3942b0u: goto label_3942b0;
        case 0x3942b4u: goto label_3942b4;
        case 0x3942b8u: goto label_3942b8;
        case 0x3942bcu: goto label_3942bc;
        case 0x3942c0u: goto label_3942c0;
        case 0x3942c4u: goto label_3942c4;
        case 0x3942c8u: goto label_3942c8;
        case 0x3942ccu: goto label_3942cc;
        case 0x3942d0u: goto label_3942d0;
        case 0x3942d4u: goto label_3942d4;
        case 0x3942d8u: goto label_3942d8;
        case 0x3942dcu: goto label_3942dc;
        case 0x3942e0u: goto label_3942e0;
        case 0x3942e4u: goto label_3942e4;
        case 0x3942e8u: goto label_3942e8;
        case 0x3942ecu: goto label_3942ec;
        case 0x3942f0u: goto label_3942f0;
        case 0x3942f4u: goto label_3942f4;
        case 0x3942f8u: goto label_3942f8;
        case 0x3942fcu: goto label_3942fc;
        case 0x394300u: goto label_394300;
        case 0x394304u: goto label_394304;
        case 0x394308u: goto label_394308;
        case 0x39430cu: goto label_39430c;
        case 0x394310u: goto label_394310;
        case 0x394314u: goto label_394314;
        case 0x394318u: goto label_394318;
        case 0x39431cu: goto label_39431c;
        case 0x394320u: goto label_394320;
        case 0x394324u: goto label_394324;
        case 0x394328u: goto label_394328;
        case 0x39432cu: goto label_39432c;
        case 0x394330u: goto label_394330;
        case 0x394334u: goto label_394334;
        case 0x394338u: goto label_394338;
        case 0x39433cu: goto label_39433c;
        case 0x394340u: goto label_394340;
        case 0x394344u: goto label_394344;
        case 0x394348u: goto label_394348;
        case 0x39434cu: goto label_39434c;
        case 0x394350u: goto label_394350;
        case 0x394354u: goto label_394354;
        case 0x394358u: goto label_394358;
        case 0x39435cu: goto label_39435c;
        case 0x394360u: goto label_394360;
        case 0x394364u: goto label_394364;
        case 0x394368u: goto label_394368;
        case 0x39436cu: goto label_39436c;
        case 0x394370u: goto label_394370;
        case 0x394374u: goto label_394374;
        case 0x394378u: goto label_394378;
        case 0x39437cu: goto label_39437c;
        case 0x394380u: goto label_394380;
        case 0x394384u: goto label_394384;
        case 0x394388u: goto label_394388;
        case 0x39438cu: goto label_39438c;
        case 0x394390u: goto label_394390;
        case 0x394394u: goto label_394394;
        case 0x394398u: goto label_394398;
        case 0x39439cu: goto label_39439c;
        case 0x3943a0u: goto label_3943a0;
        case 0x3943a4u: goto label_3943a4;
        case 0x3943a8u: goto label_3943a8;
        case 0x3943acu: goto label_3943ac;
        case 0x3943b0u: goto label_3943b0;
        case 0x3943b4u: goto label_3943b4;
        case 0x3943b8u: goto label_3943b8;
        case 0x3943bcu: goto label_3943bc;
        case 0x3943c0u: goto label_3943c0;
        case 0x3943c4u: goto label_3943c4;
        case 0x3943c8u: goto label_3943c8;
        case 0x3943ccu: goto label_3943cc;
        case 0x3943d0u: goto label_3943d0;
        case 0x3943d4u: goto label_3943d4;
        case 0x3943d8u: goto label_3943d8;
        case 0x3943dcu: goto label_3943dc;
        case 0x3943e0u: goto label_3943e0;
        case 0x3943e4u: goto label_3943e4;
        case 0x3943e8u: goto label_3943e8;
        case 0x3943ecu: goto label_3943ec;
        case 0x3943f0u: goto label_3943f0;
        case 0x3943f4u: goto label_3943f4;
        case 0x3943f8u: goto label_3943f8;
        case 0x3943fcu: goto label_3943fc;
        case 0x394400u: goto label_394400;
        case 0x394404u: goto label_394404;
        case 0x394408u: goto label_394408;
        case 0x39440cu: goto label_39440c;
        case 0x394410u: goto label_394410;
        case 0x394414u: goto label_394414;
        case 0x394418u: goto label_394418;
        case 0x39441cu: goto label_39441c;
        case 0x394420u: goto label_394420;
        case 0x394424u: goto label_394424;
        case 0x394428u: goto label_394428;
        case 0x39442cu: goto label_39442c;
        case 0x394430u: goto label_394430;
        case 0x394434u: goto label_394434;
        case 0x394438u: goto label_394438;
        case 0x39443cu: goto label_39443c;
        case 0x394440u: goto label_394440;
        case 0x394444u: goto label_394444;
        case 0x394448u: goto label_394448;
        case 0x39444cu: goto label_39444c;
        case 0x394450u: goto label_394450;
        case 0x394454u: goto label_394454;
        case 0x394458u: goto label_394458;
        case 0x39445cu: goto label_39445c;
        case 0x394460u: goto label_394460;
        case 0x394464u: goto label_394464;
        case 0x394468u: goto label_394468;
        case 0x39446cu: goto label_39446c;
        case 0x394470u: goto label_394470;
        case 0x394474u: goto label_394474;
        case 0x394478u: goto label_394478;
        case 0x39447cu: goto label_39447c;
        case 0x394480u: goto label_394480;
        case 0x394484u: goto label_394484;
        case 0x394488u: goto label_394488;
        case 0x39448cu: goto label_39448c;
        case 0x394490u: goto label_394490;
        case 0x394494u: goto label_394494;
        case 0x394498u: goto label_394498;
        case 0x39449cu: goto label_39449c;
        case 0x3944a0u: goto label_3944a0;
        case 0x3944a4u: goto label_3944a4;
        case 0x3944a8u: goto label_3944a8;
        case 0x3944acu: goto label_3944ac;
        case 0x3944b0u: goto label_3944b0;
        case 0x3944b4u: goto label_3944b4;
        case 0x3944b8u: goto label_3944b8;
        case 0x3944bcu: goto label_3944bc;
        case 0x3944c0u: goto label_3944c0;
        case 0x3944c4u: goto label_3944c4;
        case 0x3944c8u: goto label_3944c8;
        case 0x3944ccu: goto label_3944cc;
        case 0x3944d0u: goto label_3944d0;
        case 0x3944d4u: goto label_3944d4;
        case 0x3944d8u: goto label_3944d8;
        case 0x3944dcu: goto label_3944dc;
        case 0x3944e0u: goto label_3944e0;
        case 0x3944e4u: goto label_3944e4;
        case 0x3944e8u: goto label_3944e8;
        case 0x3944ecu: goto label_3944ec;
        case 0x3944f0u: goto label_3944f0;
        case 0x3944f4u: goto label_3944f4;
        case 0x3944f8u: goto label_3944f8;
        case 0x3944fcu: goto label_3944fc;
        case 0x394500u: goto label_394500;
        case 0x394504u: goto label_394504;
        case 0x394508u: goto label_394508;
        case 0x39450cu: goto label_39450c;
        case 0x394510u: goto label_394510;
        case 0x394514u: goto label_394514;
        case 0x394518u: goto label_394518;
        case 0x39451cu: goto label_39451c;
        case 0x394520u: goto label_394520;
        case 0x394524u: goto label_394524;
        case 0x394528u: goto label_394528;
        case 0x39452cu: goto label_39452c;
        case 0x394530u: goto label_394530;
        case 0x394534u: goto label_394534;
        case 0x394538u: goto label_394538;
        case 0x39453cu: goto label_39453c;
        case 0x394540u: goto label_394540;
        case 0x394544u: goto label_394544;
        case 0x394548u: goto label_394548;
        case 0x39454cu: goto label_39454c;
        case 0x394550u: goto label_394550;
        case 0x394554u: goto label_394554;
        case 0x394558u: goto label_394558;
        case 0x39455cu: goto label_39455c;
        case 0x394560u: goto label_394560;
        case 0x394564u: goto label_394564;
        case 0x394568u: goto label_394568;
        case 0x39456cu: goto label_39456c;
        case 0x394570u: goto label_394570;
        case 0x394574u: goto label_394574;
        case 0x394578u: goto label_394578;
        case 0x39457cu: goto label_39457c;
        case 0x394580u: goto label_394580;
        case 0x394584u: goto label_394584;
        case 0x394588u: goto label_394588;
        case 0x39458cu: goto label_39458c;
        case 0x394590u: goto label_394590;
        case 0x394594u: goto label_394594;
        case 0x394598u: goto label_394598;
        case 0x39459cu: goto label_39459c;
        case 0x3945a0u: goto label_3945a0;
        case 0x3945a4u: goto label_3945a4;
        case 0x3945a8u: goto label_3945a8;
        case 0x3945acu: goto label_3945ac;
        case 0x3945b0u: goto label_3945b0;
        case 0x3945b4u: goto label_3945b4;
        case 0x3945b8u: goto label_3945b8;
        case 0x3945bcu: goto label_3945bc;
        case 0x3945c0u: goto label_3945c0;
        case 0x3945c4u: goto label_3945c4;
        case 0x3945c8u: goto label_3945c8;
        case 0x3945ccu: goto label_3945cc;
        case 0x3945d0u: goto label_3945d0;
        case 0x3945d4u: goto label_3945d4;
        case 0x3945d8u: goto label_3945d8;
        case 0x3945dcu: goto label_3945dc;
        case 0x3945e0u: goto label_3945e0;
        case 0x3945e4u: goto label_3945e4;
        case 0x3945e8u: goto label_3945e8;
        case 0x3945ecu: goto label_3945ec;
        case 0x3945f0u: goto label_3945f0;
        case 0x3945f4u: goto label_3945f4;
        case 0x3945f8u: goto label_3945f8;
        case 0x3945fcu: goto label_3945fc;
        case 0x394600u: goto label_394600;
        case 0x394604u: goto label_394604;
        case 0x394608u: goto label_394608;
        case 0x39460cu: goto label_39460c;
        case 0x394610u: goto label_394610;
        case 0x394614u: goto label_394614;
        case 0x394618u: goto label_394618;
        case 0x39461cu: goto label_39461c;
        case 0x394620u: goto label_394620;
        case 0x394624u: goto label_394624;
        case 0x394628u: goto label_394628;
        case 0x39462cu: goto label_39462c;
        case 0x394630u: goto label_394630;
        case 0x394634u: goto label_394634;
        case 0x394638u: goto label_394638;
        case 0x39463cu: goto label_39463c;
        case 0x394640u: goto label_394640;
        case 0x394644u: goto label_394644;
        case 0x394648u: goto label_394648;
        case 0x39464cu: goto label_39464c;
        case 0x394650u: goto label_394650;
        case 0x394654u: goto label_394654;
        case 0x394658u: goto label_394658;
        case 0x39465cu: goto label_39465c;
        case 0x394660u: goto label_394660;
        case 0x394664u: goto label_394664;
        case 0x394668u: goto label_394668;
        case 0x39466cu: goto label_39466c;
        case 0x394670u: goto label_394670;
        case 0x394674u: goto label_394674;
        case 0x394678u: goto label_394678;
        case 0x39467cu: goto label_39467c;
        case 0x394680u: goto label_394680;
        case 0x394684u: goto label_394684;
        case 0x394688u: goto label_394688;
        case 0x39468cu: goto label_39468c;
        case 0x394690u: goto label_394690;
        case 0x394694u: goto label_394694;
        case 0x394698u: goto label_394698;
        case 0x39469cu: goto label_39469c;
        case 0x3946a0u: goto label_3946a0;
        case 0x3946a4u: goto label_3946a4;
        case 0x3946a8u: goto label_3946a8;
        case 0x3946acu: goto label_3946ac;
        default: break;
    }

    ctx->pc = 0x393440u;

label_393440:
    // 0x393440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x393440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_393444:
    // 0x393444: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x393444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_393448:
    // 0x393448: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x393448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_39344c:
    // 0x39344c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39344cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_393450:
    // 0x393450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x393450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_393454:
    // 0x393454: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x393454u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_393458:
    // 0x393458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x393458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39345c:
    // 0x39345c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_393460:
    // 0x393460: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x393460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_393464:
    // 0x393464: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x393464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_393468:
    // 0x393468: 0xc10ca68  jal         func_4329A0
label_39346c:
    if (ctx->pc == 0x39346Cu) {
        ctx->pc = 0x39346Cu;
            // 0x39346c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x393470u;
        goto label_393470;
    }
    ctx->pc = 0x393468u;
    SET_GPR_U32(ctx, 31, 0x393470u);
    ctx->pc = 0x39346Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393468u;
            // 0x39346c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393470u; }
        if (ctx->pc != 0x393470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393470u; }
        if (ctx->pc != 0x393470u) { return; }
    }
    ctx->pc = 0x393470u;
label_393470:
    // 0x393470: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x393470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_393474:
    // 0x393474: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x393474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_393478:
    // 0x393478: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x393478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_39347c:
    // 0x39347c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x39347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_393480:
    // 0x393480: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x393480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_393484:
    // 0x393484: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x393484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_393488:
    // 0x393488: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x393488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_39348c:
    // 0x39348c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_393490:
    // 0x393490: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x393490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_393494:
    // 0x393494: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x393494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_393498:
    // 0x393498: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x393498u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_39349c:
    // 0x39349c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x39349cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3934a0:
    // 0x3934a0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x3934a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_3934a4:
    // 0x3934a4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x3934a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_3934a8:
    // 0x3934a8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3934a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_3934ac:
    // 0x3934ac: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x3934acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_3934b0:
    // 0x3934b0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x3934b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_3934b4:
    // 0x3934b4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3934b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3934b8:
    // 0x3934b8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3934b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3934bc:
    // 0x3934bc: 0xc0582cc  jal         func_160B30
label_3934c0:
    if (ctx->pc == 0x3934C0u) {
        ctx->pc = 0x3934C0u;
            // 0x3934c0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3934C4u;
        goto label_3934c4;
    }
    ctx->pc = 0x3934BCu;
    SET_GPR_U32(ctx, 31, 0x3934C4u);
    ctx->pc = 0x3934C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3934BCu;
            // 0x3934c0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3934C4u; }
        if (ctx->pc != 0x3934C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3934C4u; }
        if (ctx->pc != 0x3934C4u) { return; }
    }
    ctx->pc = 0x3934C4u;
label_3934c4:
    // 0x3934c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3934c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3934c8:
    // 0x3934c8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x3934c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_3934cc:
    // 0x3934cc: 0x24637ec8  addiu       $v1, $v1, 0x7EC8
    ctx->pc = 0x3934ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32456));
label_3934d0:
    // 0x3934d0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x3934d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_3934d4:
    // 0x3934d4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x3934d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_3934d8:
    // 0x3934d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3934d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3934dc:
    // 0x3934dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3934dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3934e0:
    // 0x3934e0: 0xac446128  sw          $a0, 0x6128($v0)
    ctx->pc = 0x3934e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24872), GPR_U32(ctx, 4));
label_3934e4:
    // 0x3934e4: 0x24637ee0  addiu       $v1, $v1, 0x7EE0
    ctx->pc = 0x3934e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
label_3934e8:
    // 0x3934e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3934e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3934ec:
    // 0x3934ec: 0x24427f18  addiu       $v0, $v0, 0x7F18
    ctx->pc = 0x3934ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32536));
label_3934f0:
    // 0x3934f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3934f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3934f4:
    // 0x3934f4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x3934f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_3934f8:
    // 0x3934f8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x3934f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_3934fc:
    // 0x3934fc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x3934fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_393500:
    // 0x393500: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x393500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_393504:
    // 0x393504: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x393504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_393508:
    // 0x393508: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x393508u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_39350c:
    // 0x39350c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x39350cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_393510:
    // 0x393510: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x393510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_393514:
    // 0x393514: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x393514u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_393518:
    // 0x393518: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x393518u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_39351c:
    // 0x39351c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x39351cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_393520:
    // 0x393520: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x393520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_393524:
    // 0x393524: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_393528:
    if (ctx->pc == 0x393528u) {
        ctx->pc = 0x39352Cu;
        goto label_39352c;
    }
    ctx->pc = 0x393524u;
    {
        const bool branch_taken_0x393524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x393524) {
            ctx->pc = 0x3935B8u;
            goto label_3935b8;
        }
    }
    ctx->pc = 0x39352Cu;
label_39352c:
    // 0x39352c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x39352cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_393530:
    // 0x393530: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x393530u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_393534:
    // 0x393534: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x393534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_393538:
    // 0x393538: 0xc040138  jal         func_1004E0
label_39353c:
    if (ctx->pc == 0x39353Cu) {
        ctx->pc = 0x39353Cu;
            // 0x39353c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x393540u;
        goto label_393540;
    }
    ctx->pc = 0x393538u;
    SET_GPR_U32(ctx, 31, 0x393540u);
    ctx->pc = 0x39353Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393538u;
            // 0x39353c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393540u; }
        if (ctx->pc != 0x393540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393540u; }
        if (ctx->pc != 0x393540u) { return; }
    }
    ctx->pc = 0x393540u;
label_393540:
    // 0x393540: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x393540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_393544:
    // 0x393544: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x393544u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_393548:
    // 0x393548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x393548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39354c:
    // 0x39354c: 0x24a535e0  addiu       $a1, $a1, 0x35E0
    ctx->pc = 0x39354cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13792));
label_393550:
    // 0x393550: 0x24c62c90  addiu       $a2, $a2, 0x2C90
    ctx->pc = 0x393550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11408));
label_393554:
    // 0x393554: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x393554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_393558:
    // 0x393558: 0xc040840  jal         func_102100
label_39355c:
    if (ctx->pc == 0x39355Cu) {
        ctx->pc = 0x39355Cu;
            // 0x39355c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393560u;
        goto label_393560;
    }
    ctx->pc = 0x393558u;
    SET_GPR_U32(ctx, 31, 0x393560u);
    ctx->pc = 0x39355Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393558u;
            // 0x39355c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393560u; }
        if (ctx->pc != 0x393560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393560u; }
        if (ctx->pc != 0x393560u) { return; }
    }
    ctx->pc = 0x393560u;
label_393560:
    // 0x393560: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x393560u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_393564:
    // 0x393564: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x393564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393568:
    // 0x393568: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x393568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_39356c:
    // 0x39356c: 0xc0788fc  jal         func_1E23F0
label_393570:
    if (ctx->pc == 0x393570u) {
        ctx->pc = 0x393570u;
            // 0x393570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393574u;
        goto label_393574;
    }
    ctx->pc = 0x39356Cu;
    SET_GPR_U32(ctx, 31, 0x393574u);
    ctx->pc = 0x393570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39356Cu;
            // 0x393570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393574u; }
        if (ctx->pc != 0x393574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393574u; }
        if (ctx->pc != 0x393574u) { return; }
    }
    ctx->pc = 0x393574u;
label_393574:
    // 0x393574: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x393574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_393578:
    // 0x393578: 0xc0788fc  jal         func_1E23F0
label_39357c:
    if (ctx->pc == 0x39357Cu) {
        ctx->pc = 0x39357Cu;
            // 0x39357c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393580u;
        goto label_393580;
    }
    ctx->pc = 0x393578u;
    SET_GPR_U32(ctx, 31, 0x393580u);
    ctx->pc = 0x39357Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393578u;
            // 0x39357c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393580u; }
        if (ctx->pc != 0x393580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393580u; }
        if (ctx->pc != 0x393580u) { return; }
    }
    ctx->pc = 0x393580u;
label_393580:
    // 0x393580: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x393580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393584:
    // 0x393584: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x393584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_393588:
    // 0x393588: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x393588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_39358c:
    // 0x39358c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x39358cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_393590:
    // 0x393590: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x393590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393594:
    // 0x393594: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x393594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_393598:
    // 0x393598: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x393598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_39359c:
    // 0x39359c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39359cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3935a0:
    // 0x3935a0: 0xc0a997c  jal         func_2A65F0
label_3935a4:
    if (ctx->pc == 0x3935A4u) {
        ctx->pc = 0x3935A4u;
            // 0x3935a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3935A8u;
        goto label_3935a8;
    }
    ctx->pc = 0x3935A0u;
    SET_GPR_U32(ctx, 31, 0x3935A8u);
    ctx->pc = 0x3935A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3935A0u;
            // 0x3935a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3935A8u; }
        if (ctx->pc != 0x3935A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3935A8u; }
        if (ctx->pc != 0x3935A8u) { return; }
    }
    ctx->pc = 0x3935A8u;
label_3935a8:
    // 0x3935a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3935a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3935ac:
    // 0x3935ac: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3935acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3935b0:
    // 0x3935b0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3935b4:
    if (ctx->pc == 0x3935B4u) {
        ctx->pc = 0x3935B4u;
            // 0x3935b4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x3935B8u;
        goto label_3935b8;
    }
    ctx->pc = 0x3935B0u;
    {
        const bool branch_taken_0x3935b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3935B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3935B0u;
            // 0x3935b4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3935b0) {
            ctx->pc = 0x393584u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_393584;
        }
    }
    ctx->pc = 0x3935B8u;
label_3935b8:
    // 0x3935b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3935b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3935bc:
    // 0x3935bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3935bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3935c0:
    // 0x3935c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3935c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3935c4:
    // 0x3935c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3935c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3935c8:
    // 0x3935c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3935c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3935cc:
    // 0x3935cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3935ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3935d0:
    // 0x3935d0: 0x3e00008  jr          $ra
label_3935d4:
    if (ctx->pc == 0x3935D4u) {
        ctx->pc = 0x3935D4u;
            // 0x3935d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3935D8u;
        goto label_3935d8;
    }
    ctx->pc = 0x3935D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3935D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3935D0u;
            // 0x3935d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3935D8u;
label_3935d8:
    // 0x3935d8: 0x0  nop
    ctx->pc = 0x3935d8u;
    // NOP
label_3935dc:
    // 0x3935dc: 0x0  nop
    ctx->pc = 0x3935dcu;
    // NOP
label_3935e0:
    // 0x3935e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3935e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3935e4:
    // 0x3935e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3935e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3935e8:
    // 0x3935e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3935e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3935ec:
    // 0x3935ec: 0xc0aeebc  jal         func_2BBAF0
label_3935f0:
    if (ctx->pc == 0x3935F0u) {
        ctx->pc = 0x3935F0u;
            // 0x3935f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3935F4u;
        goto label_3935f4;
    }
    ctx->pc = 0x3935ECu;
    SET_GPR_U32(ctx, 31, 0x3935F4u);
    ctx->pc = 0x3935F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3935ECu;
            // 0x3935f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3935F4u; }
        if (ctx->pc != 0x3935F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3935F4u; }
        if (ctx->pc != 0x3935F4u) { return; }
    }
    ctx->pc = 0x3935F4u;
label_3935f4:
    // 0x3935f4: 0xc0aeeb4  jal         func_2BBAD0
label_3935f8:
    if (ctx->pc == 0x3935F8u) {
        ctx->pc = 0x3935F8u;
            // 0x3935f8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x3935FCu;
        goto label_3935fc;
    }
    ctx->pc = 0x3935F4u;
    SET_GPR_U32(ctx, 31, 0x3935FCu);
    ctx->pc = 0x3935F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3935F4u;
            // 0x3935f8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3935FCu; }
        if (ctx->pc != 0x3935FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3935FCu; }
        if (ctx->pc != 0x3935FCu) { return; }
    }
    ctx->pc = 0x3935FCu;
label_3935fc:
    // 0x3935fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3935fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_393600:
    // 0x393600: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x393600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_393604:
    // 0x393604: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x393604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_393608:
    // 0x393608: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x393608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_39360c:
    // 0x39360c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39360cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_393610:
    // 0x393610: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x393610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_393614:
    // 0x393614: 0xc0aeea4  jal         func_2BBA90
label_393618:
    if (ctx->pc == 0x393618u) {
        ctx->pc = 0x393618u;
            // 0x393618: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x39361Cu;
        goto label_39361c;
    }
    ctx->pc = 0x393614u;
    SET_GPR_U32(ctx, 31, 0x39361Cu);
    ctx->pc = 0x393618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393614u;
            // 0x393618: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39361Cu; }
        if (ctx->pc != 0x39361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39361Cu; }
        if (ctx->pc != 0x39361Cu) { return; }
    }
    ctx->pc = 0x39361Cu;
label_39361c:
    // 0x39361c: 0xc0aee8c  jal         func_2BBA30
label_393620:
    if (ctx->pc == 0x393620u) {
        ctx->pc = 0x393620u;
            // 0x393620: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x393624u;
        goto label_393624;
    }
    ctx->pc = 0x39361Cu;
    SET_GPR_U32(ctx, 31, 0x393624u);
    ctx->pc = 0x393620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39361Cu;
            // 0x393620: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393624u; }
        if (ctx->pc != 0x393624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393624u; }
        if (ctx->pc != 0x393624u) { return; }
    }
    ctx->pc = 0x393624u;
label_393624:
    // 0x393624: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x393624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_393628:
    // 0x393628: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x393628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_39362c:
    // 0x39362c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x39362cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_393630:
    // 0x393630: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x393630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_393634:
    // 0x393634: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x393634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_393638:
    // 0x393638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x393638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39363c:
    // 0x39363c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x39363cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_393640:
    // 0x393640: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x393640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_393644:
    // 0x393644: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x393644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_393648:
    // 0x393648: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x393648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_39364c:
    // 0x39364c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x39364cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_393650:
    // 0x393650: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x393650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_393654:
    // 0x393654: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x393654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_393658:
    // 0x393658: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x393658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_39365c:
    // 0x39365c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x39365cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_393660:
    // 0x393660: 0xc0775b8  jal         func_1DD6E0
label_393664:
    if (ctx->pc == 0x393664u) {
        ctx->pc = 0x393664u;
            // 0x393664: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x393668u;
        goto label_393668;
    }
    ctx->pc = 0x393660u;
    SET_GPR_U32(ctx, 31, 0x393668u);
    ctx->pc = 0x393664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393660u;
            // 0x393664: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393668u; }
        if (ctx->pc != 0x393668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393668u; }
        if (ctx->pc != 0x393668u) { return; }
    }
    ctx->pc = 0x393668u;
label_393668:
    // 0x393668: 0xc077314  jal         func_1DCC50
label_39366c:
    if (ctx->pc == 0x39366Cu) {
        ctx->pc = 0x39366Cu;
            // 0x39366c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x393670u;
        goto label_393670;
    }
    ctx->pc = 0x393668u;
    SET_GPR_U32(ctx, 31, 0x393670u);
    ctx->pc = 0x39366Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393668u;
            // 0x39366c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393670u; }
        if (ctx->pc != 0x393670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393670u; }
        if (ctx->pc != 0x393670u) { return; }
    }
    ctx->pc = 0x393670u;
label_393670:
    // 0x393670: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x393670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_393674:
    // 0x393674: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x393674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_393678:
    // 0x393678: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x393678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_39367c:
    // 0x39367c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x39367cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_393680:
    // 0x393680: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x393680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_393684:
    // 0x393684: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x393684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_393688:
    // 0x393688: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x393688u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_39368c:
    // 0x39368c: 0x24a57f80  addiu       $a1, $a1, 0x7F80
    ctx->pc = 0x39368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32640));
label_393690:
    // 0x393690: 0x24847fc0  addiu       $a0, $a0, 0x7FC0
    ctx->pc = 0x393690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32704));
label_393694:
    // 0x393694: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x393694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393698:
    // 0x393698: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x393698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_39369c:
    // 0x39369c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39369cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3936a0:
    // 0x3936a0: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x3936a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
label_3936a4:
    // 0x3936a4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3936a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_3936a8:
    // 0x3936a8: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3936a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_3936ac:
    // 0x3936ac: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x3936acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_3936b0:
    // 0x3936b0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x3936b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_3936b4:
    // 0x3936b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3936b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3936b8:
    // 0x3936b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3936b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3936bc:
    // 0x3936bc: 0x3e00008  jr          $ra
label_3936c0:
    if (ctx->pc == 0x3936C0u) {
        ctx->pc = 0x3936C0u;
            // 0x3936c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3936C4u;
        goto label_3936c4;
    }
    ctx->pc = 0x3936BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3936C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3936BCu;
            // 0x3936c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3936C4u;
label_3936c4:
    // 0x3936c4: 0x0  nop
    ctx->pc = 0x3936c4u;
    // NOP
label_3936c8:
    // 0x3936c8: 0x0  nop
    ctx->pc = 0x3936c8u;
    // NOP
label_3936cc:
    // 0x3936cc: 0x0  nop
    ctx->pc = 0x3936ccu;
    // NOP
label_3936d0:
    // 0x3936d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3936d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3936d4:
    // 0x3936d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3936d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3936d8:
    // 0x3936d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3936d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3936dc:
    // 0x3936dc: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x3936dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
label_3936e0:
    // 0x3936e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3936e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3936e4:
    // 0x3936e4: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x3936e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_3936e8:
    // 0x3936e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3936ec:
    if (ctx->pc == 0x3936ECu) {
        ctx->pc = 0x3936ECu;
            // 0x3936ec: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3936F0u;
        goto label_3936f0;
    }
    ctx->pc = 0x3936E8u;
    {
        const bool branch_taken_0x3936e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3936e8) {
            ctx->pc = 0x3936ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3936E8u;
            // 0x3936ec: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x393704u;
            goto label_393704;
        }
    }
    ctx->pc = 0x3936F0u;
label_3936f0:
    // 0x3936f0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3936f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3936f4:
    // 0x3936f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3936f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3936f8:
    // 0x3936f8: 0x320f809  jalr        $t9
label_3936fc:
    if (ctx->pc == 0x3936FCu) {
        ctx->pc = 0x3936FCu;
            // 0x3936fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x393700u;
        goto label_393700;
    }
    ctx->pc = 0x3936F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x393700u);
        ctx->pc = 0x3936FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3936F8u;
            // 0x3936fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x393700u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x393700u; }
            if (ctx->pc != 0x393700u) { return; }
        }
        }
    }
    ctx->pc = 0x393700u;
label_393700:
    // 0x393700: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x393700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_393704:
    // 0x393704: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x393704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_393708:
    // 0x393708: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39370c:
    if (ctx->pc == 0x39370Cu) {
        ctx->pc = 0x39370Cu;
            // 0x39370c: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x393710u;
        goto label_393710;
    }
    ctx->pc = 0x393708u;
    {
        const bool branch_taken_0x393708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x393708) {
            ctx->pc = 0x39370Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x393708u;
            // 0x39370c: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x393724u;
            goto label_393724;
        }
    }
    ctx->pc = 0x393710u;
label_393710:
    // 0x393710: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x393710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_393714:
    // 0x393714: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x393714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_393718:
    // 0x393718: 0x320f809  jalr        $t9
label_39371c:
    if (ctx->pc == 0x39371Cu) {
        ctx->pc = 0x39371Cu;
            // 0x39371c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x393720u;
        goto label_393720;
    }
    ctx->pc = 0x393718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x393720u);
        ctx->pc = 0x39371Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393718u;
            // 0x39371c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x393720u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x393720u; }
            if (ctx->pc != 0x393720u) { return; }
        }
        }
    }
    ctx->pc = 0x393720u;
label_393720:
    // 0x393720: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x393720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_393724:
    // 0x393724: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x393724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_393728:
    // 0x393728: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39372c:
    if (ctx->pc == 0x39372Cu) {
        ctx->pc = 0x39372Cu;
            // 0x39372c: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x393730u;
        goto label_393730;
    }
    ctx->pc = 0x393728u;
    {
        const bool branch_taken_0x393728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x393728) {
            ctx->pc = 0x39372Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x393728u;
            // 0x39372c: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x393744u;
            goto label_393744;
        }
    }
    ctx->pc = 0x393730u;
label_393730:
    // 0x393730: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x393730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_393734:
    // 0x393734: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x393734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_393738:
    // 0x393738: 0x320f809  jalr        $t9
label_39373c:
    if (ctx->pc == 0x39373Cu) {
        ctx->pc = 0x39373Cu;
            // 0x39373c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x393740u;
        goto label_393740;
    }
    ctx->pc = 0x393738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x393740u);
        ctx->pc = 0x39373Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393738u;
            // 0x39373c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x393740u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x393740u; }
            if (ctx->pc != 0x393740u) { return; }
        }
        }
    }
    ctx->pc = 0x393740u;
label_393740:
    // 0x393740: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x393740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_393744:
    // 0x393744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x393744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_393748:
    // 0x393748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x393748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39374c:
    // 0x39374c: 0x3e00008  jr          $ra
label_393750:
    if (ctx->pc == 0x393750u) {
        ctx->pc = 0x393750u;
            // 0x393750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x393754u;
        goto label_393754;
    }
    ctx->pc = 0x39374Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39374Cu;
            // 0x393750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x393754u;
label_393754:
    // 0x393754: 0x0  nop
    ctx->pc = 0x393754u;
    // NOP
label_393758:
    // 0x393758: 0x0  nop
    ctx->pc = 0x393758u;
    // NOP
label_39375c:
    // 0x39375c: 0x0  nop
    ctx->pc = 0x39375cu;
    // NOP
label_393760:
    // 0x393760: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x393760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_393764:
    // 0x393764: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x393764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_393768:
    // 0x393768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x393768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39376c:
    // 0x39376c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39376cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_393770:
    // 0x393770: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x393770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_393774:
    // 0x393774: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x393774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_393778:
    // 0x393778: 0xc0892d0  jal         func_224B40
label_39377c:
    if (ctx->pc == 0x39377Cu) {
        ctx->pc = 0x39377Cu;
            // 0x39377c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x393780u;
        goto label_393780;
    }
    ctx->pc = 0x393778u;
    SET_GPR_U32(ctx, 31, 0x393780u);
    ctx->pc = 0x39377Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393778u;
            // 0x39377c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393780u; }
        if (ctx->pc != 0x393780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393780u; }
        if (ctx->pc != 0x393780u) { return; }
    }
    ctx->pc = 0x393780u;
label_393780:
    // 0x393780: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x393780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_393784:
    // 0x393784: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x393784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_393788:
    // 0x393788: 0x8c426128  lw          $v0, 0x6128($v0)
    ctx->pc = 0x393788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24872)));
label_39378c:
    // 0x39378c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x39378cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_393790:
    // 0x393790: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x393790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_393794:
    // 0x393794: 0xc0b6e68  jal         func_2DB9A0
label_393798:
    if (ctx->pc == 0x393798u) {
        ctx->pc = 0x393798u;
            // 0x393798: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x39379Cu;
        goto label_39379c;
    }
    ctx->pc = 0x393794u;
    SET_GPR_U32(ctx, 31, 0x39379Cu);
    ctx->pc = 0x393798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393794u;
            // 0x393798: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39379Cu; }
        if (ctx->pc != 0x39379Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39379Cu; }
        if (ctx->pc != 0x39379Cu) { return; }
    }
    ctx->pc = 0x39379Cu;
label_39379c:
    // 0x39379c: 0xc0b6dac  jal         func_2DB6B0
label_3937a0:
    if (ctx->pc == 0x3937A0u) {
        ctx->pc = 0x3937A0u;
            // 0x3937a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3937A4u;
        goto label_3937a4;
    }
    ctx->pc = 0x39379Cu;
    SET_GPR_U32(ctx, 31, 0x3937A4u);
    ctx->pc = 0x3937A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39379Cu;
            // 0x3937a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3937A4u; }
        if (ctx->pc != 0x3937A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3937A4u; }
        if (ctx->pc != 0x3937A4u) { return; }
    }
    ctx->pc = 0x3937A4u;
label_3937a4:
    // 0x3937a4: 0xc0cac94  jal         func_32B250
label_3937a8:
    if (ctx->pc == 0x3937A8u) {
        ctx->pc = 0x3937A8u;
            // 0x3937a8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3937ACu;
        goto label_3937ac;
    }
    ctx->pc = 0x3937A4u;
    SET_GPR_U32(ctx, 31, 0x3937ACu);
    ctx->pc = 0x3937A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3937A4u;
            // 0x3937a8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3937ACu; }
        if (ctx->pc != 0x3937ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3937ACu; }
        if (ctx->pc != 0x3937ACu) { return; }
    }
    ctx->pc = 0x3937ACu;
label_3937ac:
    // 0x3937ac: 0xc0cac84  jal         func_32B210
label_3937b0:
    if (ctx->pc == 0x3937B0u) {
        ctx->pc = 0x3937B0u;
            // 0x3937b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3937B4u;
        goto label_3937b4;
    }
    ctx->pc = 0x3937ACu;
    SET_GPR_U32(ctx, 31, 0x3937B4u);
    ctx->pc = 0x3937B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3937ACu;
            // 0x3937b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3937B4u; }
        if (ctx->pc != 0x3937B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3937B4u; }
        if (ctx->pc != 0x3937B4u) { return; }
    }
    ctx->pc = 0x3937B4u;
label_3937b4:
    // 0x3937b4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3937b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3937b8:
    // 0x3937b8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3937b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3937bc:
    // 0x3937bc: 0xc44cc908  lwc1        $f12, -0x36F8($v0)
    ctx->pc = 0x3937bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3937c0:
    // 0x3937c0: 0xc0a5a68  jal         func_2969A0
label_3937c4:
    if (ctx->pc == 0x3937C4u) {
        ctx->pc = 0x3937C4u;
            // 0x3937c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3937C8u;
        goto label_3937c8;
    }
    ctx->pc = 0x3937C0u;
    SET_GPR_U32(ctx, 31, 0x3937C8u);
    ctx->pc = 0x3937C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3937C0u;
            // 0x3937c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3937C8u; }
        if (ctx->pc != 0x3937C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3937C8u; }
        if (ctx->pc != 0x3937C8u) { return; }
    }
    ctx->pc = 0x3937C8u;
label_3937c8:
    // 0x3937c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3937c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3937cc:
    // 0x3937cc: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x3937ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_3937d0:
    // 0x3937d0: 0x8c436128  lw          $v1, 0x6128($v0)
    ctx->pc = 0x3937d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24872)));
label_3937d4:
    // 0x3937d4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x3937d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3937d8:
    // 0x3937d8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x3937d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3937dc:
    // 0x3937dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3937dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3937e0:
    // 0x3937e0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x3937e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3937e4:
    // 0x3937e4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3937e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3937e8:
    // 0x3937e8: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x3937e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3937ec:
    // 0x3937ec: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x3937ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_3937f0:
    // 0x3937f0: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x3937f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_3937f4:
    // 0x3937f4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3937f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3937f8:
    // 0x3937f8: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3937f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3937fc:
    // 0x3937fc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3937fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_393800:
    // 0x393800: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x393800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_393804:
    // 0x393804: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x393804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_393808:
    // 0x393808: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x393808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_39380c:
    // 0x39380c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39380cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_393810:
    // 0x393810: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x393810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_393814:
    // 0x393814: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x393814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_393818:
    // 0x393818: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x393818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_39381c:
    // 0x39381c: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x39381cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_393820:
    // 0x393820: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x393820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_393824:
    // 0x393824: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x393824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_393828:
    // 0x393828: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x393828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_39382c:
    // 0x39382c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x39382cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_393830:
    // 0x393830: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x393830u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_393834:
    // 0x393834: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x393834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_393838:
    // 0x393838: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x393838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_39383c:
    // 0x39383c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x39383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_393840:
    // 0x393840: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x393840u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_393844:
    // 0x393844: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x393844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_393848:
    // 0x393848: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x393848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_39384c:
    // 0x39384c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x39384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_393850:
    // 0x393850: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x393850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_393854:
    // 0x393854: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x393854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_393858:
    // 0x393858: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x393858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_39385c:
    // 0x39385c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x39385cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_393860:
    // 0x393860: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x393860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_393864:
    // 0x393864: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x393864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_393868:
    // 0x393868: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x393868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39386c:
    // 0x39386c: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x39386cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_393870:
    // 0x393870: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x393870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_393874:
    // 0x393874: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x393874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_393878:
    // 0x393878: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x393878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39387c:
    // 0x39387c: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x39387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_393880:
    // 0x393880: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x393880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_393884:
    // 0x393884: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x393884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_393888:
    // 0x393888: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x393888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39388c:
    // 0x39388c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x39388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_393890:
    // 0x393890: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x393890u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_393894:
    // 0x393894: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x393894u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_393898:
    // 0x393898: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x393898u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_39389c:
    // 0x39389c: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x39389cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3938a0:
    // 0x3938a0: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x3938a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_3938a4:
    // 0x3938a4: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x3938a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3938a8:
    // 0x3938a8: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x3938a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_3938ac:
    // 0x3938ac: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x3938acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3938b0:
    // 0x3938b0: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x3938b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3938b4:
    // 0x3938b4: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x3938b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_3938b8:
    // 0x3938b8: 0xc0a7a88  jal         func_29EA20
label_3938bc:
    if (ctx->pc == 0x3938BCu) {
        ctx->pc = 0x3938BCu;
            // 0x3938bc: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x3938C0u;
        goto label_3938c0;
    }
    ctx->pc = 0x3938B8u;
    SET_GPR_U32(ctx, 31, 0x3938C0u);
    ctx->pc = 0x3938BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3938B8u;
            // 0x3938bc: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3938C0u; }
        if (ctx->pc != 0x3938C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3938C0u; }
        if (ctx->pc != 0x3938C0u) { return; }
    }
    ctx->pc = 0x3938C0u;
label_3938c0:
    // 0x3938c0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3938c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3938c4:
    // 0x3938c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3938c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3938c8:
    // 0x3938c8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3938cc:
    if (ctx->pc == 0x3938CCu) {
        ctx->pc = 0x3938CCu;
            // 0x3938cc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3938D0u;
        goto label_3938d0;
    }
    ctx->pc = 0x3938C8u;
    {
        const bool branch_taken_0x3938c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3938CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3938C8u;
            // 0x3938cc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3938c8) {
            ctx->pc = 0x393918u;
            goto label_393918;
        }
    }
    ctx->pc = 0x3938D0u;
label_3938d0:
    // 0x3938d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3938d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3938d4:
    // 0x3938d4: 0xc088ef4  jal         func_223BD0
label_3938d8:
    if (ctx->pc == 0x3938D8u) {
        ctx->pc = 0x3938D8u;
            // 0x3938d8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3938DCu;
        goto label_3938dc;
    }
    ctx->pc = 0x3938D4u;
    SET_GPR_U32(ctx, 31, 0x3938DCu);
    ctx->pc = 0x3938D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3938D4u;
            // 0x3938d8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3938DCu; }
        if (ctx->pc != 0x3938DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3938DCu; }
        if (ctx->pc != 0x3938DCu) { return; }
    }
    ctx->pc = 0x3938DCu;
label_3938dc:
    // 0x3938dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3938dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3938e0:
    // 0x3938e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3938e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3938e4:
    // 0x3938e4: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3938e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3938e8:
    // 0x3938e8: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3938e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3938ec:
    // 0x3938ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3938ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3938f0:
    // 0x3938f0: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3938f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_3938f4:
    // 0x3938f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3938f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3938f8:
    // 0x3938f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3938f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3938fc:
    // 0x3938fc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x3938fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_393900:
    // 0x393900: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x393900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_393904:
    // 0x393904: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x393904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_393908:
    // 0x393908: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x393908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39390c:
    // 0x39390c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x39390cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_393910:
    // 0x393910: 0xc088b38  jal         func_222CE0
label_393914:
    if (ctx->pc == 0x393914u) {
        ctx->pc = 0x393914u;
            // 0x393914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393918u;
        goto label_393918;
    }
    ctx->pc = 0x393910u;
    SET_GPR_U32(ctx, 31, 0x393918u);
    ctx->pc = 0x393914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393910u;
            // 0x393914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393918u; }
        if (ctx->pc != 0x393918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393918u; }
        if (ctx->pc != 0x393918u) { return; }
    }
    ctx->pc = 0x393918u;
label_393918:
    // 0x393918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x393918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39391c:
    // 0x39391c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x39391cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_393920:
    // 0x393920: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x393920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393924:
    // 0x393924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x393924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393928:
    // 0x393928: 0xc08914c  jal         func_224530
label_39392c:
    if (ctx->pc == 0x39392Cu) {
        ctx->pc = 0x39392Cu;
            // 0x39392c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x393930u;
        goto label_393930;
    }
    ctx->pc = 0x393928u;
    SET_GPR_U32(ctx, 31, 0x393930u);
    ctx->pc = 0x39392Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393928u;
            // 0x39392c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393930u; }
        if (ctx->pc != 0x393930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393930u; }
        if (ctx->pc != 0x393930u) { return; }
    }
    ctx->pc = 0x393930u;
label_393930:
    // 0x393930: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x393930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_393934:
    // 0x393934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x393934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393938:
    // 0x393938: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x393938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39393c:
    // 0x39393c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x39393cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_393940:
    // 0x393940: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x393940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_393944:
    // 0x393944: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x393944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_393948:
    // 0x393948: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x393948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_39394c:
    // 0x39394c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x39394cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_393950:
    // 0x393950: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x393950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_393954:
    // 0x393954: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x393954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_393958:
    // 0x393958: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x393958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39395c:
    // 0x39395c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x39395cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_393960:
    // 0x393960: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x393960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_393964:
    // 0x393964: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x393964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_393968:
    // 0x393968: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x393968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_39396c:
    // 0x39396c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x39396cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_393970:
    // 0x393970: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x393970u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_393974:
    // 0x393974: 0xc0892b0  jal         func_224AC0
label_393978:
    if (ctx->pc == 0x393978u) {
        ctx->pc = 0x393978u;
            // 0x393978: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x39397Cu;
        goto label_39397c;
    }
    ctx->pc = 0x393974u;
    SET_GPR_U32(ctx, 31, 0x39397Cu);
    ctx->pc = 0x393978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393974u;
            // 0x393978: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39397Cu; }
        if (ctx->pc != 0x39397Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39397Cu; }
        if (ctx->pc != 0x39397Cu) { return; }
    }
    ctx->pc = 0x39397Cu;
label_39397c:
    // 0x39397c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x39397cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_393980:
    // 0x393980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x393980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393984:
    // 0x393984: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x393984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_393988:
    // 0x393988: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x393988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_39398c:
    // 0x39398c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x39398cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_393990:
    // 0x393990: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x393990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_393994:
    // 0x393994: 0xc0891d8  jal         func_224760
label_393998:
    if (ctx->pc == 0x393998u) {
        ctx->pc = 0x393998u;
            // 0x393998: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x39399Cu;
        goto label_39399c;
    }
    ctx->pc = 0x393994u;
    SET_GPR_U32(ctx, 31, 0x39399Cu);
    ctx->pc = 0x393998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393994u;
            // 0x393998: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39399Cu; }
        if (ctx->pc != 0x39399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39399Cu; }
        if (ctx->pc != 0x39399Cu) { return; }
    }
    ctx->pc = 0x39399Cu;
label_39399c:
    // 0x39399c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3939a0:
    // 0x3939a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3939a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3939a4:
    // 0x3939a4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3939a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3939a8:
    // 0x3939a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3939a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3939ac:
    // 0x3939ac: 0xc08c164  jal         func_230590
label_3939b0:
    if (ctx->pc == 0x3939B0u) {
        ctx->pc = 0x3939B0u;
            // 0x3939b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3939B4u;
        goto label_3939b4;
    }
    ctx->pc = 0x3939ACu;
    SET_GPR_U32(ctx, 31, 0x3939B4u);
    ctx->pc = 0x3939B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3939ACu;
            // 0x3939b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3939B4u; }
        if (ctx->pc != 0x3939B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3939B4u; }
        if (ctx->pc != 0x3939B4u) { return; }
    }
    ctx->pc = 0x3939B4u;
label_3939b4:
    // 0x3939b4: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x3939b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_3939b8:
    // 0x3939b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3939b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3939bc:
    // 0x3939bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3939bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3939c0:
    // 0x3939c0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3939c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3939c4:
    // 0x3939c4: 0xc0a7a88  jal         func_29EA20
label_3939c8:
    if (ctx->pc == 0x3939C8u) {
        ctx->pc = 0x3939C8u;
            // 0x3939c8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x3939CCu;
        goto label_3939cc;
    }
    ctx->pc = 0x3939C4u;
    SET_GPR_U32(ctx, 31, 0x3939CCu);
    ctx->pc = 0x3939C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3939C4u;
            // 0x3939c8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3939CCu; }
        if (ctx->pc != 0x3939CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3939CCu; }
        if (ctx->pc != 0x3939CCu) { return; }
    }
    ctx->pc = 0x3939CCu;
label_3939cc:
    // 0x3939cc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3939ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3939d0:
    // 0x3939d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3939d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3939d4:
    // 0x3939d4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_3939d8:
    if (ctx->pc == 0x3939D8u) {
        ctx->pc = 0x3939D8u;
            // 0x3939d8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3939DCu;
        goto label_3939dc;
    }
    ctx->pc = 0x3939D4u;
    {
        const bool branch_taken_0x3939d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3939D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3939D4u;
            // 0x3939d8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3939d4) {
            ctx->pc = 0x3939F8u;
            goto label_3939f8;
        }
    }
    ctx->pc = 0x3939DCu;
label_3939dc:
    // 0x3939dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3939dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3939e0:
    // 0x3939e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3939e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3939e4:
    // 0x3939e4: 0xc0869d0  jal         func_21A740
label_3939e8:
    if (ctx->pc == 0x3939E8u) {
        ctx->pc = 0x3939E8u;
            // 0x3939e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3939ECu;
        goto label_3939ec;
    }
    ctx->pc = 0x3939E4u;
    SET_GPR_U32(ctx, 31, 0x3939ECu);
    ctx->pc = 0x3939E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3939E4u;
            // 0x3939e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3939ECu; }
        if (ctx->pc != 0x3939ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3939ECu; }
        if (ctx->pc != 0x3939ECu) { return; }
    }
    ctx->pc = 0x3939ECu;
label_3939ec:
    // 0x3939ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3939ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3939f0:
    // 0x3939f0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x3939f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_3939f4:
    // 0x3939f4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3939f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3939f8:
    // 0x3939f8: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x3939f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_3939fc:
    // 0x3939fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3939fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_393a00:
    // 0x393a00: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x393a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_393a04:
    // 0x393a04: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x393a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_393a08:
    // 0x393a08: 0xc08c650  jal         func_231940
label_393a0c:
    if (ctx->pc == 0x393A0Cu) {
        ctx->pc = 0x393A0Cu;
            // 0x393a0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393A10u;
        goto label_393a10;
    }
    ctx->pc = 0x393A08u;
    SET_GPR_U32(ctx, 31, 0x393A10u);
    ctx->pc = 0x393A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393A08u;
            // 0x393a0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393A10u; }
        if (ctx->pc != 0x393A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393A10u; }
        if (ctx->pc != 0x393A10u) { return; }
    }
    ctx->pc = 0x393A10u;
label_393a10:
    // 0x393a10: 0xc040180  jal         func_100600
label_393a14:
    if (ctx->pc == 0x393A14u) {
        ctx->pc = 0x393A14u;
            // 0x393a14: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x393A18u;
        goto label_393a18;
    }
    ctx->pc = 0x393A10u;
    SET_GPR_U32(ctx, 31, 0x393A18u);
    ctx->pc = 0x393A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393A10u;
            // 0x393a14: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393A18u; }
        if (ctx->pc != 0x393A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393A18u; }
        if (ctx->pc != 0x393A18u) { return; }
    }
    ctx->pc = 0x393A18u;
label_393a18:
    // 0x393a18: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_393a1c:
    if (ctx->pc == 0x393A1Cu) {
        ctx->pc = 0x393A1Cu;
            // 0x393a1c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x393A20u;
        goto label_393a20;
    }
    ctx->pc = 0x393A18u;
    {
        const bool branch_taken_0x393a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393a18) {
            ctx->pc = 0x393A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x393A18u;
            // 0x393a1c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x393A68u;
            goto label_393a68;
        }
    }
    ctx->pc = 0x393A20u;
label_393a20:
    // 0x393a20: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x393a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_393a24:
    // 0x393a24: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x393a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_393a28:
    // 0x393a28: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x393a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_393a2c:
    // 0x393a2c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x393a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_393a30:
    // 0x393a30: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x393a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_393a34:
    // 0x393a34: 0x24636130  addiu       $v1, $v1, 0x6130
    ctx->pc = 0x393a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24880));
label_393a38:
    // 0x393a38: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x393a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_393a3c:
    // 0x393a3c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x393a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_393a40:
    // 0x393a40: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x393a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_393a44:
    // 0x393a44: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x393a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_393a48:
    // 0x393a48: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x393a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_393a4c:
    // 0x393a4c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x393a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_393a50:
    // 0x393a50: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x393a50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_393a54:
    // 0x393a54: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x393a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_393a58:
    // 0x393a58: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x393a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_393a5c:
    // 0x393a5c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x393a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_393a60:
    // 0x393a60: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x393a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_393a64:
    // 0x393a64: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x393a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_393a68:
    // 0x393a68: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x393a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_393a6c:
    // 0x393a6c: 0x8e2700b0  lw          $a3, 0xB0($s1)
    ctx->pc = 0x393a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_393a70:
    // 0x393a70: 0x2405f9ff  addiu       $a1, $zero, -0x601
    ctx->pc = 0x393a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_393a74:
    // 0x393a74: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x393a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_393a78:
    // 0x393a78: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x393a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_393a7c:
    // 0x393a7c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x393a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_393a80:
    // 0x393a80: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x393a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_393a84:
    // 0x393a84: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x393a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_393a88:
    // 0x393a88: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x393a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_393a8c:
    // 0x393a8c: 0xae2600b0  sw          $a2, 0xB0($s1)
    ctx->pc = 0x393a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 6));
label_393a90:
    // 0x393a90: 0x34a50600  ori         $a1, $a1, 0x600
    ctx->pc = 0x393a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1536);
label_393a94:
    // 0x393a94: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x393a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_393a98:
    // 0x393a98: 0xc4611c00  lwc1        $f1, 0x1C00($v1)
    ctx->pc = 0x393a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_393a9c:
    // 0x393a9c: 0xc4401c04  lwc1        $f0, 0x1C04($v0)
    ctx->pc = 0x393a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_393aa0:
    // 0x393aa0: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x393aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_393aa4:
    // 0x393aa4: 0xc040180  jal         func_100600
label_393aa8:
    if (ctx->pc == 0x393AA8u) {
        ctx->pc = 0x393AA8u;
            // 0x393aa8: 0xe7a0018c  swc1        $f0, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->pc = 0x393AACu;
        goto label_393aac;
    }
    ctx->pc = 0x393AA4u;
    SET_GPR_U32(ctx, 31, 0x393AACu);
    ctx->pc = 0x393AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393AA4u;
            // 0x393aa8: 0xe7a0018c  swc1        $f0, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393AACu; }
        if (ctx->pc != 0x393AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393AACu; }
        if (ctx->pc != 0x393AACu) { return; }
    }
    ctx->pc = 0x393AACu;
label_393aac:
    // 0x393aac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x393aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393ab0:
    // 0x393ab0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_393ab4:
    if (ctx->pc == 0x393AB4u) {
        ctx->pc = 0x393AB4u;
            // 0x393ab4: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->pc = 0x393AB8u;
        goto label_393ab8;
    }
    ctx->pc = 0x393AB0u;
    {
        const bool branch_taken_0x393ab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x393ab0) {
            ctx->pc = 0x393AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x393AB0u;
            // 0x393ab4: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x393AF0u;
            goto label_393af0;
        }
    }
    ctx->pc = 0x393AB8u;
label_393ab8:
    // 0x393ab8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x393ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_393abc:
    // 0x393abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x393abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393ac0:
    // 0x393ac0: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x393ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_393ac4:
    // 0x393ac4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x393ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_393ac8:
    // 0x393ac8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x393ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_393acc:
    // 0x393acc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x393accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_393ad0:
    // 0x393ad0: 0xc040138  jal         func_1004E0
label_393ad4:
    if (ctx->pc == 0x393AD4u) {
        ctx->pc = 0x393AD4u;
            // 0x393ad4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x393AD8u;
        goto label_393ad8;
    }
    ctx->pc = 0x393AD0u;
    SET_GPR_U32(ctx, 31, 0x393AD8u);
    ctx->pc = 0x393AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393AD0u;
            // 0x393ad4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393AD8u; }
        if (ctx->pc != 0x393AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393AD8u; }
        if (ctx->pc != 0x393AD8u) { return; }
    }
    ctx->pc = 0x393AD8u;
label_393ad8:
    // 0x393ad8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x393ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_393adc:
    // 0x393adc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x393adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_393ae0:
    // 0x393ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393ae4:
    // 0x393ae4: 0xc04a576  jal         func_1295D8
label_393ae8:
    if (ctx->pc == 0x393AE8u) {
        ctx->pc = 0x393AE8u;
            // 0x393ae8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x393AECu;
        goto label_393aec;
    }
    ctx->pc = 0x393AE4u;
    SET_GPR_U32(ctx, 31, 0x393AECu);
    ctx->pc = 0x393AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393AE4u;
            // 0x393ae8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393AECu; }
        if (ctx->pc != 0x393AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393AECu; }
        if (ctx->pc != 0x393AECu) { return; }
    }
    ctx->pc = 0x393AECu;
label_393aec:
    // 0x393aec: 0xae3000d4  sw          $s0, 0xD4($s1)
    ctx->pc = 0x393aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
label_393af0:
    // 0x393af0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x393af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_393af4:
    // 0x393af4: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x393af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_393af8:
    // 0x393af8: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x393af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_393afc:
    // 0x393afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x393afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393b00:
    // 0x393b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393b04:
    // 0x393b04: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x393b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_393b08:
    // 0x393b08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x393b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_393b0c:
    // 0x393b0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x393b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_393b10:
    // 0x393b10: 0x90c20c6a  lbu         $v0, 0xC6A($a2)
    ctx->pc = 0x393b10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3178)));
label_393b14:
    // 0x393b14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x393b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_393b18:
    // 0x393b18: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x393b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_393b1c:
    // 0x393b1c: 0x8c460188  lw          $a2, 0x188($v0)
    ctx->pc = 0x393b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
label_393b20:
    // 0x393b20: 0xc122cd8  jal         func_48B360
label_393b24:
    if (ctx->pc == 0x393B24u) {
        ctx->pc = 0x393B24u;
            // 0x393b24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393B28u;
        goto label_393b28;
    }
    ctx->pc = 0x393B20u;
    SET_GPR_U32(ctx, 31, 0x393B28u);
    ctx->pc = 0x393B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393B20u;
            // 0x393b24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393B28u; }
        if (ctx->pc != 0x393B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393B28u; }
        if (ctx->pc != 0x393B28u) { return; }
    }
    ctx->pc = 0x393B28u;
label_393b28:
    // 0x393b28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x393b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_393b2c:
    // 0x393b2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x393b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_393b30:
    // 0x393b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x393b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_393b34:
    // 0x393b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x393b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_393b38:
    // 0x393b38: 0x3e00008  jr          $ra
label_393b3c:
    if (ctx->pc == 0x393B3Cu) {
        ctx->pc = 0x393B3Cu;
            // 0x393b3c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x393B40u;
        goto label_393b40;
    }
    ctx->pc = 0x393B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393B38u;
            // 0x393b3c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x393B40u;
label_393b40:
    // 0x393b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x393b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_393b44:
    // 0x393b44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x393b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_393b48:
    // 0x393b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x393b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_393b4c:
    // 0x393b4c: 0xc0e3580  jal         func_38D600
label_393b50:
    if (ctx->pc == 0x393B50u) {
        ctx->pc = 0x393B50u;
            // 0x393b50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393B54u;
        goto label_393b54;
    }
    ctx->pc = 0x393B4Cu;
    SET_GPR_U32(ctx, 31, 0x393B54u);
    ctx->pc = 0x393B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393B4Cu;
            // 0x393b50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393B54u; }
        if (ctx->pc != 0x393B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393B54u; }
        if (ctx->pc != 0x393B54u) { return; }
    }
    ctx->pc = 0x393B54u;
label_393b54:
    // 0x393b54: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x393b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_393b58:
    // 0x393b58: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x393b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_393b5c:
    // 0x393b5c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x393b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_393b60:
    // 0x393b60: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x393b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_393b64:
    // 0x393b64: 0x54640009  bnel        $v1, $a0, . + 4 + (0x9 << 2)
label_393b68:
    if (ctx->pc == 0x393B68u) {
        ctx->pc = 0x393B68u;
            // 0x393b68: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x393B6Cu;
        goto label_393b6c;
    }
    ctx->pc = 0x393B64u;
    {
        const bool branch_taken_0x393b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x393b64) {
            ctx->pc = 0x393B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x393B64u;
            // 0x393b68: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x393B8Cu;
            goto label_393b8c;
        }
    }
    ctx->pc = 0x393B6Cu;
label_393b6c:
    // 0x393b6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x393b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_393b70:
    // 0x393b70: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x393b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_393b74:
    // 0x393b74: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x393b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_393b78:
    // 0x393b78: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x393b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_393b7c:
    // 0x393b7c: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x393b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
label_393b80:
    // 0x393b80: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x393b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_393b84:
    // 0x393b84: 0x10000007  b           . + 4 + (0x7 << 2)
label_393b88:
    if (ctx->pc == 0x393B88u) {
        ctx->pc = 0x393B88u;
            // 0x393b88: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
        ctx->pc = 0x393B8Cu;
        goto label_393b8c;
    }
    ctx->pc = 0x393B84u;
    {
        const bool branch_taken_0x393b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393B84u;
            // 0x393b88: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393b84) {
            ctx->pc = 0x393BA4u;
            goto label_393ba4;
        }
    }
    ctx->pc = 0x393B8Cu;
label_393b8c:
    // 0x393b8c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x393b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_393b90:
    // 0x393b90: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x393b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_393b94:
    // 0x393b94: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x393b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_393b98:
    // 0x393b98: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x393b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_393b9c:
    // 0x393b9c: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x393b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_393ba0:
    // 0x393ba0: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x393ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_393ba4:
    // 0x393ba4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x393ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_393ba8:
    // 0x393ba8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x393ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393bac:
    // 0x393bac: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x393bacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_393bb0:
    // 0x393bb0: 0x3c0542b4  lui         $a1, 0x42B4
    ctx->pc = 0x393bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17076 << 16));
label_393bb4:
    // 0x393bb4: 0xa2040065  sb          $a0, 0x65($s0)
    ctx->pc = 0x393bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 4));
label_393bb8:
    // 0x393bb8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x393bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_393bbc:
    // 0x393bbc: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x393bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
label_393bc0:
    // 0x393bc0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x393bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_393bc4:
    // 0x393bc4: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x393bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
label_393bc8:
    // 0x393bc8: 0xa20400cc  sb          $a0, 0xCC($s0)
    ctx->pc = 0x393bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 4));
label_393bcc:
    // 0x393bcc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x393bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_393bd0:
    // 0x393bd0: 0xae0500c4  sw          $a1, 0xC4($s0)
    ctx->pc = 0x393bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 5));
label_393bd4:
    // 0x393bd4: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x393bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_393bd8:
    // 0x393bd8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x393bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_393bdc:
    // 0x393bdc: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x393bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_393be0:
    // 0x393be0: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x393be0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_393be4:
    // 0x393be4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x393be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_393be8:
    // 0x393be8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x393be8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_393bec:
    // 0x393bec: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x393becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_393bf0:
    // 0x393bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x393bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_393bf4:
    // 0x393bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x393bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_393bf8:
    // 0x393bf8: 0x3e00008  jr          $ra
label_393bfc:
    if (ctx->pc == 0x393BFCu) {
        ctx->pc = 0x393BFCu;
            // 0x393bfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x393C00u;
        goto label_393c00;
    }
    ctx->pc = 0x393BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393BF8u;
            // 0x393bfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x393C00u;
label_393c00:
    // 0x393c00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x393c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_393c04:
    // 0x393c04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x393c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_393c08:
    // 0x393c08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x393c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_393c0c:
    // 0x393c0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x393c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_393c10:
    // 0x393c10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x393c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_393c14:
    // 0x393c14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x393c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_393c18:
    // 0x393c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x393c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_393c1c:
    // 0x393c1c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x393c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_393c20:
    // 0x393c20: 0xc0baaa0  jal         func_2EAA80
label_393c24:
    if (ctx->pc == 0x393C24u) {
        ctx->pc = 0x393C24u;
            // 0x393c24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x393C28u;
        goto label_393c28;
    }
    ctx->pc = 0x393C20u;
    SET_GPR_U32(ctx, 31, 0x393C28u);
    ctx->pc = 0x393C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393C20u;
            // 0x393c24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393C28u; }
        if (ctx->pc != 0x393C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393C28u; }
        if (ctx->pc != 0x393C28u) { return; }
    }
    ctx->pc = 0x393C28u;
label_393c28:
    // 0x393c28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x393c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_393c2c:
    // 0x393c2c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x393c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_393c30:
    // 0x393c30: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x393c30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_393c34:
    // 0x393c34: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_393c38:
    if (ctx->pc == 0x393C38u) {
        ctx->pc = 0x393C38u;
            // 0x393c38: 0x8e4400d4  lw          $a0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->pc = 0x393C3Cu;
        goto label_393c3c;
    }
    ctx->pc = 0x393C34u;
    {
        const bool branch_taken_0x393c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393c34) {
            ctx->pc = 0x393C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x393C34u;
            // 0x393c38: 0x8e4400d4  lw          $a0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x393CC4u;
            goto label_393cc4;
        }
    }
    ctx->pc = 0x393C3Cu;
label_393c3c:
    // 0x393c3c: 0x9250004c  lbu         $s0, 0x4C($s2)
    ctx->pc = 0x393c3cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
label_393c40:
    // 0x393c40: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x393c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_393c44:
    // 0x393c44: 0xc040180  jal         func_100600
label_393c48:
    if (ctx->pc == 0x393C48u) {
        ctx->pc = 0x393C48u;
            // 0x393c48: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x393C4Cu;
        goto label_393c4c;
    }
    ctx->pc = 0x393C44u;
    SET_GPR_U32(ctx, 31, 0x393C4Cu);
    ctx->pc = 0x393C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393C44u;
            // 0x393c48: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393C4Cu; }
        if (ctx->pc != 0x393C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393C4Cu; }
        if (ctx->pc != 0x393C4Cu) { return; }
    }
    ctx->pc = 0x393C4Cu;
label_393c4c:
    // 0x393c4c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_393c50:
    if (ctx->pc == 0x393C50u) {
        ctx->pc = 0x393C50u;
            // 0x393c50: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393C54u;
        goto label_393c54;
    }
    ctx->pc = 0x393C4Cu;
    {
        const bool branch_taken_0x393c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393C4Cu;
            // 0x393c50: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c4c) {
            ctx->pc = 0x393CC0u;
            goto label_393cc0;
        }
    }
    ctx->pc = 0x393C54u;
label_393c54:
    // 0x393c54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x393c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_393c58:
    // 0x393c58: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x393c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_393c5c:
    // 0x393c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x393c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393c60:
    // 0x393c60: 0x34458a88  ori         $a1, $v0, 0x8A88
    ctx->pc = 0x393c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_393c64:
    // 0x393c64: 0xc10ca68  jal         func_4329A0
label_393c68:
    if (ctx->pc == 0x393C68u) {
        ctx->pc = 0x393C68u;
            // 0x393c68: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393C6Cu;
        goto label_393c6c;
    }
    ctx->pc = 0x393C64u;
    SET_GPR_U32(ctx, 31, 0x393C6Cu);
    ctx->pc = 0x393C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393C64u;
            // 0x393c68: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393C6Cu; }
        if (ctx->pc != 0x393C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393C6Cu; }
        if (ctx->pc != 0x393C6Cu) { return; }
    }
    ctx->pc = 0x393C6Cu;
label_393c6c:
    // 0x393c6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x393c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_393c70:
    // 0x393c70: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x393c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_393c74:
    // 0x393c74: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x393c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_393c78:
    // 0x393c78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x393c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393c7c:
    // 0x393c7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x393c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_393c80:
    // 0x393c80: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x393c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_393c84:
    // 0x393c84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x393c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_393c88:
    // 0x393c88: 0x244276a0  addiu       $v0, $v0, 0x76A0
    ctx->pc = 0x393c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30368));
label_393c8c:
    // 0x393c8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x393c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_393c90:
    // 0x393c90: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x393c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_393c94:
    // 0x393c94: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x393c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_393c98:
    // 0x393c98: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x393c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_393c9c:
    // 0x393c9c: 0xc440da20  lwc1        $f0, -0x25E0($v0)
    ctx->pc = 0x393c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_393ca0:
    // 0x393ca0: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x393ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_393ca4:
    // 0x393ca4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x393ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_393ca8:
    // 0x393ca8: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x393ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_393cac:
    // 0x393cac: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x393cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_393cb0:
    // 0x393cb0: 0xc04cc04  jal         func_133010
label_393cb4:
    if (ctx->pc == 0x393CB4u) {
        ctx->pc = 0x393CB4u;
            // 0x393cb4: 0xa2300080  sb          $s0, 0x80($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x393CB8u;
        goto label_393cb8;
    }
    ctx->pc = 0x393CB0u;
    SET_GPR_U32(ctx, 31, 0x393CB8u);
    ctx->pc = 0x393CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393CB0u;
            // 0x393cb4: 0xa2300080  sb          $s0, 0x80($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393CB8u; }
        if (ctx->pc != 0x393CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393CB8u; }
        if (ctx->pc != 0x393CB8u) { return; }
    }
    ctx->pc = 0x393CB8u;
label_393cb8:
    // 0x393cb8: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x393cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_393cbc:
    // 0x393cbc: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x393cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_393cc0:
    // 0x393cc0: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x393cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_393cc4:
    // 0x393cc4: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x393cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_393cc8:
    // 0x393cc8: 0xc122d2c  jal         func_48B4B0
label_393ccc:
    if (ctx->pc == 0x393CCCu) {
        ctx->pc = 0x393CCCu;
            // 0x393ccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393CD0u;
        goto label_393cd0;
    }
    ctx->pc = 0x393CC8u;
    SET_GPR_U32(ctx, 31, 0x393CD0u);
    ctx->pc = 0x393CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393CC8u;
            // 0x393ccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393CD0u; }
        if (ctx->pc != 0x393CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393CD0u; }
        if (ctx->pc != 0x393CD0u) { return; }
    }
    ctx->pc = 0x393CD0u;
label_393cd0:
    // 0x393cd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x393cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_393cd4:
    // 0x393cd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x393cd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_393cd8:
    // 0x393cd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x393cd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_393cdc:
    // 0x393cdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x393cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_393ce0:
    // 0x393ce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x393ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_393ce4:
    // 0x393ce4: 0x3e00008  jr          $ra
label_393ce8:
    if (ctx->pc == 0x393CE8u) {
        ctx->pc = 0x393CE8u;
            // 0x393ce8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x393CECu;
        goto label_393cec;
    }
    ctx->pc = 0x393CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393CE4u;
            // 0x393ce8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x393CECu;
label_393cec:
    // 0x393cec: 0x0  nop
    ctx->pc = 0x393cecu;
    // NOP
label_393cf0:
    // 0x393cf0: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x393cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_393cf4:
    // 0x393cf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x393cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393cf8:
    // 0x393cf8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_393cfc:
    if (ctx->pc == 0x393CFCu) {
        ctx->pc = 0x393D00u;
        goto label_393d00;
    }
    ctx->pc = 0x393CF8u;
    {
        const bool branch_taken_0x393cf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x393cf8) {
            ctx->pc = 0x393D08u;
            goto label_393d08;
        }
    }
    ctx->pc = 0x393D00u;
label_393d00:
    // 0x393d00: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_393d04:
    if (ctx->pc == 0x393D04u) {
        ctx->pc = 0x393D04u;
            // 0x393d04: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x393D08u;
        goto label_393d08;
    }
    ctx->pc = 0x393D00u;
    {
        const bool branch_taken_0x393d00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x393d00) {
            ctx->pc = 0x393D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x393D00u;
            // 0x393d04: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x393D08u;
            goto label_393d08;
        }
    }
    ctx->pc = 0x393D08u;
label_393d08:
    // 0x393d08: 0x3e00008  jr          $ra
label_393d0c:
    if (ctx->pc == 0x393D0Cu) {
        ctx->pc = 0x393D10u;
        goto label_393d10;
    }
    ctx->pc = 0x393D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x393D10u;
label_393d10:
    // 0x393d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x393d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_393d14:
    // 0x393d14: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x393d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_393d18:
    // 0x393d18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x393d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_393d1c:
    // 0x393d1c: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x393d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_393d20:
    // 0x393d20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x393d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_393d24:
    // 0x393d24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x393d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_393d28:
    // 0x393d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x393d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_393d2c:
    // 0x393d2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x393d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_393d30:
    // 0x393d30: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x393d30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_393d34:
    // 0x393d34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x393d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393d38:
    // 0x393d38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x393d38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393d3c:
    // 0x393d3c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x393d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_393d40:
    // 0x393d40: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x393d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_393d44:
    // 0x393d44: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x393d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_393d48:
    // 0x393d48: 0xc08bff0  jal         func_22FFC0
label_393d4c:
    if (ctx->pc == 0x393D4Cu) {
        ctx->pc = 0x393D4Cu;
            // 0x393d4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393D50u;
        goto label_393d50;
    }
    ctx->pc = 0x393D48u;
    SET_GPR_U32(ctx, 31, 0x393D50u);
    ctx->pc = 0x393D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393D48u;
            // 0x393d4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393D50u; }
        if (ctx->pc != 0x393D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393D50u; }
        if (ctx->pc != 0x393D50u) { return; }
    }
    ctx->pc = 0x393D50u;
label_393d50:
    // 0x393d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x393d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393d54:
    // 0x393d54: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x393d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_393d58:
    // 0x393d58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x393d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393d5c:
    // 0x393d5c: 0xc08914c  jal         func_224530
label_393d60:
    if (ctx->pc == 0x393D60u) {
        ctx->pc = 0x393D60u;
            // 0x393d60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393D64u;
        goto label_393d64;
    }
    ctx->pc = 0x393D5Cu;
    SET_GPR_U32(ctx, 31, 0x393D64u);
    ctx->pc = 0x393D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393D5Cu;
            // 0x393d60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393D64u; }
        if (ctx->pc != 0x393D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393D64u; }
        if (ctx->pc != 0x393D64u) { return; }
    }
    ctx->pc = 0x393D64u;
label_393d64:
    // 0x393d64: 0xc0e393c  jal         func_38E4F0
label_393d68:
    if (ctx->pc == 0x393D68u) {
        ctx->pc = 0x393D68u;
            // 0x393d68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393D6Cu;
        goto label_393d6c;
    }
    ctx->pc = 0x393D64u;
    SET_GPR_U32(ctx, 31, 0x393D6Cu);
    ctx->pc = 0x393D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393D64u;
            // 0x393d68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393D6Cu; }
        if (ctx->pc != 0x393D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393D6Cu; }
        if (ctx->pc != 0x393D6Cu) { return; }
    }
    ctx->pc = 0x393D6Cu;
label_393d6c:
    // 0x393d6c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x393d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_393d70:
    // 0x393d70: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x393d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_393d74:
    // 0x393d74: 0xc46275a0  lwc1        $f2, 0x75A0($v1)
    ctx->pc = 0x393d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 30112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_393d78:
    // 0x393d78: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x393d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_393d7c:
    // 0x393d7c: 0xc46175a8  lwc1        $f1, 0x75A8($v1)
    ctx->pc = 0x393d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 30120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_393d80:
    // 0x393d80: 0xe602015c  swc1        $f2, 0x15C($s0)
    ctx->pc = 0x393d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
label_393d84:
    // 0x393d84: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x393d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_393d88:
    // 0x393d88: 0xc46075b0  lwc1        $f0, 0x75B0($v1)
    ctx->pc = 0x393d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 30128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_393d8c:
    // 0x393d8c: 0xe6010160  swc1        $f1, 0x160($s0)
    ctx->pc = 0x393d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 352), bits); }
label_393d90:
    // 0x393d90: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x393d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_393d94:
    // 0x393d94: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x393d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_393d98:
    // 0x393d98: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x393d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_393d9c:
    // 0x393d9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x393d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_393da0:
    // 0x393da0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x393da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_393da4:
    // 0x393da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x393da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_393da8:
    // 0x393da8: 0x3e00008  jr          $ra
label_393dac:
    if (ctx->pc == 0x393DACu) {
        ctx->pc = 0x393DACu;
            // 0x393dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x393DB0u;
        goto label_393db0;
    }
    ctx->pc = 0x393DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393DA8u;
            // 0x393dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x393DB0u;
label_393db0:
    // 0x393db0: 0x3e00008  jr          $ra
label_393db4:
    if (ctx->pc == 0x393DB4u) {
        ctx->pc = 0x393DB4u;
            // 0x393db4: 0x24023304  addiu       $v0, $zero, 0x3304 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13060));
        ctx->pc = 0x393DB8u;
        goto label_393db8;
    }
    ctx->pc = 0x393DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393DB0u;
            // 0x393db4: 0x24023304  addiu       $v0, $zero, 0x3304 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13060));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x393DB8u;
label_393db8:
    // 0x393db8: 0x0  nop
    ctx->pc = 0x393db8u;
    // NOP
label_393dbc:
    // 0x393dbc: 0x0  nop
    ctx->pc = 0x393dbcu;
    // NOP
label_393dc0:
    // 0x393dc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x393dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_393dc4:
    // 0x393dc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x393dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_393dc8:
    // 0x393dc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x393dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_393dcc:
    // 0x393dcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x393dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_393dd0:
    // 0x393dd0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x393dd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_393dd4:
    // 0x393dd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x393dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_393dd8:
    // 0x393dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x393dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_393ddc:
    // 0x393ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x393ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_393de0:
    // 0x393de0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x393de0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_393de4:
    // 0x393de4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_393de8:
    if (ctx->pc == 0x393DE8u) {
        ctx->pc = 0x393DE8u;
            // 0x393de8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393DECu;
        goto label_393dec;
    }
    ctx->pc = 0x393DE4u;
    {
        const bool branch_taken_0x393de4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x393DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393DE4u;
            // 0x393de8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393de4) {
            ctx->pc = 0x393E28u;
            goto label_393e28;
        }
    }
    ctx->pc = 0x393DECu;
label_393dec:
    // 0x393dec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x393decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393df0:
    // 0x393df0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x393df0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393df4:
    // 0x393df4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x393df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393df8:
    // 0x393df8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x393df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_393dfc:
    // 0x393dfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x393dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_393e00:
    // 0x393e00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x393e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_393e04:
    // 0x393e04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x393e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_393e08:
    // 0x393e08: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x393e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_393e0c:
    // 0x393e0c: 0x320f809  jalr        $t9
label_393e10:
    if (ctx->pc == 0x393E10u) {
        ctx->pc = 0x393E14u;
        goto label_393e14;
    }
    ctx->pc = 0x393E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x393E14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x393E14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x393E14u; }
            if (ctx->pc != 0x393E14u) { return; }
        }
        }
    }
    ctx->pc = 0x393E14u;
label_393e14:
    // 0x393e14: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x393e14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_393e18:
    // 0x393e18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x393e18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_393e1c:
    // 0x393e1c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x393e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_393e20:
    // 0x393e20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_393e24:
    if (ctx->pc == 0x393E24u) {
        ctx->pc = 0x393E24u;
            // 0x393e24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x393E28u;
        goto label_393e28;
    }
    ctx->pc = 0x393E20u;
    {
        const bool branch_taken_0x393e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393E20u;
            // 0x393e24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393e20) {
            ctx->pc = 0x393DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_393df8;
        }
    }
    ctx->pc = 0x393E28u;
label_393e28:
    // 0x393e28: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x393e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393e2c:
    // 0x393e2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x393e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_393e30:
    // 0x393e30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x393e30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_393e34:
    // 0x393e34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x393e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_393e38:
    // 0x393e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x393e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_393e3c:
    // 0x393e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x393e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_393e40:
    // 0x393e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x393e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_393e44:
    // 0x393e44: 0x3e00008  jr          $ra
label_393e48:
    if (ctx->pc == 0x393E48u) {
        ctx->pc = 0x393E48u;
            // 0x393e48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x393E4Cu;
        goto label_393e4c;
    }
    ctx->pc = 0x393E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393E44u;
            // 0x393e48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x393E4Cu;
label_393e4c:
    // 0x393e4c: 0x0  nop
    ctx->pc = 0x393e4cu;
    // NOP
label_393e50:
    // 0x393e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x393e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_393e54:
    // 0x393e54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x393e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393e58:
    // 0x393e58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x393e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_393e5c:
    // 0x393e5c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x393e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_393e60:
    // 0x393e60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x393e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_393e64:
    // 0x393e64: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x393e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_393e68:
    // 0x393e68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x393e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_393e6c:
    // 0x393e6c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x393e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_393e70:
    // 0x393e70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x393e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_393e74:
    // 0x393e74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x393e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_393e78:
    // 0x393e78: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x393e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_393e7c:
    // 0x393e7c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x393e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_393e80:
    // 0x393e80: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x393e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_393e84:
    // 0x393e84: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x393e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_393e88:
    // 0x393e88: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x393e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_393e8c:
    // 0x393e8c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x393e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_393e90:
    // 0x393e90: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x393e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_393e94:
    // 0x393e94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x393e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_393e98:
    // 0x393e98: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x393e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_393e9c:
    // 0x393e9c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x393e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_393ea0:
    // 0x393ea0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x393ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_393ea4:
    // 0x393ea4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x393ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_393ea8:
    // 0x393ea8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x393ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_393eac:
    // 0x393eac: 0xc0a997c  jal         func_2A65F0
label_393eb0:
    if (ctx->pc == 0x393EB0u) {
        ctx->pc = 0x393EB0u;
            // 0x393eb0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x393EB4u;
        goto label_393eb4;
    }
    ctx->pc = 0x393EACu;
    SET_GPR_U32(ctx, 31, 0x393EB4u);
    ctx->pc = 0x393EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393EACu;
            // 0x393eb0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393EB4u; }
        if (ctx->pc != 0x393EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393EB4u; }
        if (ctx->pc != 0x393EB4u) { return; }
    }
    ctx->pc = 0x393EB4u;
label_393eb4:
    // 0x393eb4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x393eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_393eb8:
    // 0x393eb8: 0xc0d879c  jal         func_361E70
label_393ebc:
    if (ctx->pc == 0x393EBCu) {
        ctx->pc = 0x393EBCu;
            // 0x393ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393EC0u;
        goto label_393ec0;
    }
    ctx->pc = 0x393EB8u;
    SET_GPR_U32(ctx, 31, 0x393EC0u);
    ctx->pc = 0x393EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393EB8u;
            // 0x393ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393EC0u; }
        if (ctx->pc != 0x393EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393EC0u; }
        if (ctx->pc != 0x393EC0u) { return; }
    }
    ctx->pc = 0x393EC0u;
label_393ec0:
    // 0x393ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x393ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_393ec4:
    // 0x393ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x393ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_393ec8:
    // 0x393ec8: 0x3e00008  jr          $ra
label_393ecc:
    if (ctx->pc == 0x393ECCu) {
        ctx->pc = 0x393ECCu;
            // 0x393ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x393ED0u;
        goto label_393ed0;
    }
    ctx->pc = 0x393EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393EC8u;
            // 0x393ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x393ED0u;
label_393ed0:
    // 0x393ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x393ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_393ed4:
    // 0x393ed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x393ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_393ed8:
    // 0x393ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x393ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_393edc:
    // 0x393edc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x393edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_393ee0:
    // 0x393ee0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_393ee4:
    if (ctx->pc == 0x393EE4u) {
        ctx->pc = 0x393EE4u;
            // 0x393ee4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393EE8u;
        goto label_393ee8;
    }
    ctx->pc = 0x393EE0u;
    {
        const bool branch_taken_0x393ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x393EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393EE0u;
            // 0x393ee4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393ee0) {
            ctx->pc = 0x394000u;
            goto label_394000;
        }
    }
    ctx->pc = 0x393EE8u;
label_393ee8:
    // 0x393ee8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x393ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_393eec:
    // 0x393eec: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x393eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_393ef0:
    // 0x393ef0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x393ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_393ef4:
    // 0x393ef4: 0xc075128  jal         func_1D44A0
label_393ef8:
    if (ctx->pc == 0x393EF8u) {
        ctx->pc = 0x393EF8u;
            // 0x393ef8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x393EFCu;
        goto label_393efc;
    }
    ctx->pc = 0x393EF4u;
    SET_GPR_U32(ctx, 31, 0x393EFCu);
    ctx->pc = 0x393EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393EF4u;
            // 0x393ef8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393EFCu; }
        if (ctx->pc != 0x393EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393EFCu; }
        if (ctx->pc != 0x393EFCu) { return; }
    }
    ctx->pc = 0x393EFCu;
label_393efc:
    // 0x393efc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x393efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_393f00:
    // 0x393f00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x393f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_393f04:
    // 0x393f04: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x393f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_393f08:
    // 0x393f08: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x393f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_393f0c:
    // 0x393f0c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x393f0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_393f10:
    // 0x393f10: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_393f14:
    if (ctx->pc == 0x393F14u) {
        ctx->pc = 0x393F14u;
            // 0x393f14: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x393F18u;
        goto label_393f18;
    }
    ctx->pc = 0x393F10u;
    {
        const bool branch_taken_0x393f10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x393F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393F10u;
            // 0x393f14: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393f10) {
            ctx->pc = 0x393F20u;
            goto label_393f20;
        }
    }
    ctx->pc = 0x393F18u;
label_393f18:
    // 0x393f18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x393f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_393f1c:
    // 0x393f1c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x393f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_393f20:
    // 0x393f20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x393f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_393f24:
    // 0x393f24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x393f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_393f28:
    // 0x393f28: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x393f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_393f2c:
    // 0x393f2c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x393f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_393f30:
    // 0x393f30: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x393f30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_393f34:
    // 0x393f34: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_393f38:
    if (ctx->pc == 0x393F38u) {
        ctx->pc = 0x393F38u;
            // 0x393f38: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x393F3Cu;
        goto label_393f3c;
    }
    ctx->pc = 0x393F34u;
    {
        const bool branch_taken_0x393f34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x393f34) {
            ctx->pc = 0x393F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x393F34u;
            // 0x393f38: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x393F48u;
            goto label_393f48;
        }
    }
    ctx->pc = 0x393F3Cu;
label_393f3c:
    // 0x393f3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x393f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_393f40:
    // 0x393f40: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x393f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_393f44:
    // 0x393f44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x393f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_393f48:
    // 0x393f48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x393f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_393f4c:
    // 0x393f4c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x393f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_393f50:
    // 0x393f50: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x393f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_393f54:
    // 0x393f54: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x393f54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_393f58:
    // 0x393f58: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_393f5c:
    if (ctx->pc == 0x393F5Cu) {
        ctx->pc = 0x393F5Cu;
            // 0x393f5c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x393F60u;
        goto label_393f60;
    }
    ctx->pc = 0x393F58u;
    {
        const bool branch_taken_0x393f58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x393f58) {
            ctx->pc = 0x393F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x393F58u;
            // 0x393f5c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x393F6Cu;
            goto label_393f6c;
        }
    }
    ctx->pc = 0x393F60u;
label_393f60:
    // 0x393f60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x393f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_393f64:
    // 0x393f64: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x393f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_393f68:
    // 0x393f68: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x393f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_393f6c:
    // 0x393f6c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x393f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_393f70:
    // 0x393f70: 0x320f809  jalr        $t9
label_393f74:
    if (ctx->pc == 0x393F74u) {
        ctx->pc = 0x393F74u;
            // 0x393f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393F78u;
        goto label_393f78;
    }
    ctx->pc = 0x393F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x393F78u);
        ctx->pc = 0x393F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393F70u;
            // 0x393f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x393F78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x393F78u; }
            if (ctx->pc != 0x393F78u) { return; }
        }
        }
    }
    ctx->pc = 0x393F78u;
label_393f78:
    // 0x393f78: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x393f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_393f7c:
    // 0x393f7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x393f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_393f80:
    // 0x393f80: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x393f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_393f84:
    // 0x393f84: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x393f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_393f88:
    // 0x393f88: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x393f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_393f8c:
    // 0x393f8c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x393f8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_393f90:
    // 0x393f90: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_393f94:
    if (ctx->pc == 0x393F94u) {
        ctx->pc = 0x393F94u;
            // 0x393f94: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x393F98u;
        goto label_393f98;
    }
    ctx->pc = 0x393F90u;
    {
        const bool branch_taken_0x393f90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x393f90) {
            ctx->pc = 0x393F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x393F90u;
            // 0x393f94: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x393FA4u;
            goto label_393fa4;
        }
    }
    ctx->pc = 0x393F98u;
label_393f98:
    // 0x393f98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x393f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_393f9c:
    // 0x393f9c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x393f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_393fa0:
    // 0x393fa0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x393fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_393fa4:
    // 0x393fa4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x393fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_393fa8:
    // 0x393fa8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x393fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_393fac:
    // 0x393fac: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x393facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_393fb0:
    // 0x393fb0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x393fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_393fb4:
    // 0x393fb4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x393fb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_393fb8:
    // 0x393fb8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_393fbc:
    if (ctx->pc == 0x393FBCu) {
        ctx->pc = 0x393FC0u;
        goto label_393fc0;
    }
    ctx->pc = 0x393FB8u;
    {
        const bool branch_taken_0x393fb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x393fb8) {
            ctx->pc = 0x393FC8u;
            goto label_393fc8;
        }
    }
    ctx->pc = 0x393FC0u;
label_393fc0:
    // 0x393fc0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x393fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_393fc4:
    // 0x393fc4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x393fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_393fc8:
    // 0x393fc8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x393fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_393fcc:
    // 0x393fcc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x393fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_393fd0:
    // 0x393fd0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x393fd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_393fd4:
    // 0x393fd4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_393fd8:
    if (ctx->pc == 0x393FD8u) {
        ctx->pc = 0x393FDCu;
        goto label_393fdc;
    }
    ctx->pc = 0x393FD4u;
    {
        const bool branch_taken_0x393fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x393fd4) {
            ctx->pc = 0x393FE4u;
            goto label_393fe4;
        }
    }
    ctx->pc = 0x393FDCu;
label_393fdc:
    // 0x393fdc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x393fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_393fe0:
    // 0x393fe0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x393fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_393fe4:
    // 0x393fe4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x393fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_393fe8:
    // 0x393fe8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x393fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_393fec:
    // 0x393fec: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x393fecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_393ff0:
    // 0x393ff0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_393ff4:
    if (ctx->pc == 0x393FF4u) {
        ctx->pc = 0x393FF4u;
            // 0x393ff4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x393FF8u;
        goto label_393ff8;
    }
    ctx->pc = 0x393FF0u;
    {
        const bool branch_taken_0x393ff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x393ff0) {
            ctx->pc = 0x393FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x393FF0u;
            // 0x393ff4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x394004u;
            goto label_394004;
        }
    }
    ctx->pc = 0x393FF8u;
label_393ff8:
    // 0x393ff8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x393ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_393ffc:
    // 0x393ffc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x393ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_394000:
    // 0x394000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x394000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_394004:
    // 0x394004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x394004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_394008:
    // 0x394008: 0x3e00008  jr          $ra
label_39400c:
    if (ctx->pc == 0x39400Cu) {
        ctx->pc = 0x39400Cu;
            // 0x39400c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x394010u;
        goto label_394010;
    }
    ctx->pc = 0x394008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39400Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394008u;
            // 0x39400c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x394010u;
label_394010:
    // 0x394010: 0x80e4b24  j           func_392C90
label_394014:
    if (ctx->pc == 0x394014u) {
        ctx->pc = 0x394014u;
            // 0x394014: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x394018u;
        goto label_394018;
    }
    ctx->pc = 0x394010u;
    ctx->pc = 0x394014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394010u;
            // 0x394014: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x392C90u;
    {
        auto targetFn = runtime->lookupFunction(0x392C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x394018u;
label_394018:
    // 0x394018: 0x0  nop
    ctx->pc = 0x394018u;
    // NOP
label_39401c:
    // 0x39401c: 0x0  nop
    ctx->pc = 0x39401cu;
    // NOP
label_394020:
    // 0x394020: 0x80e4ca4  j           func_393290
label_394024:
    if (ctx->pc == 0x394024u) {
        ctx->pc = 0x394024u;
            // 0x394024: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x394028u;
        goto label_394028;
    }
    ctx->pc = 0x394020u;
    ctx->pc = 0x394024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394020u;
            // 0x394024: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x393290u;
    {
        auto targetFn = runtime->lookupFunction(0x393290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x394028u;
label_394028:
    // 0x394028: 0x0  nop
    ctx->pc = 0x394028u;
    // NOP
label_39402c:
    // 0x39402c: 0x0  nop
    ctx->pc = 0x39402cu;
    // NOP
label_394030:
    // 0x394030: 0x80e4acc  j           func_392B30
label_394034:
    if (ctx->pc == 0x394034u) {
        ctx->pc = 0x394034u;
            // 0x394034: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x394038u;
        goto label_394038;
    }
    ctx->pc = 0x394030u;
    ctx->pc = 0x394034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394030u;
            // 0x394034: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x392B30u;
    if (runtime->hasFunction(0x392B30u)) {
        auto targetFn = runtime->lookupFunction(0x392B30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00392B30_0x392b30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x394038u;
label_394038:
    // 0x394038: 0x0  nop
    ctx->pc = 0x394038u;
    // NOP
label_39403c:
    // 0x39403c: 0x0  nop
    ctx->pc = 0x39403cu;
    // NOP
label_394040:
    // 0x394040: 0x80e4aa8  j           func_392AA0
label_394044:
    if (ctx->pc == 0x394044u) {
        ctx->pc = 0x394044u;
            // 0x394044: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x394048u;
        goto label_394048;
    }
    ctx->pc = 0x394040u;
    ctx->pc = 0x394044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394040u;
            // 0x394044: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x392AA0u;
    {
        auto targetFn = runtime->lookupFunction(0x392AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x394048u;
label_394048:
    // 0x394048: 0x0  nop
    ctx->pc = 0x394048u;
    // NOP
label_39404c:
    // 0x39404c: 0x0  nop
    ctx->pc = 0x39404cu;
    // NOP
label_394050:
    // 0x394050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x394050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_394054:
    // 0x394054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x394054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_394058:
    // 0x394058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x394058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39405c:
    // 0x39405c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_394060:
    // 0x394060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x394060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394064:
    // 0x394064: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_394068:
    if (ctx->pc == 0x394068u) {
        ctx->pc = 0x394068u;
            // 0x394068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39406Cu;
        goto label_39406c;
    }
    ctx->pc = 0x394064u;
    {
        const bool branch_taken_0x394064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x394068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394064u;
            // 0x394068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394064) {
            ctx->pc = 0x3940A8u;
            goto label_3940a8;
        }
    }
    ctx->pc = 0x39406Cu;
label_39406c:
    // 0x39406c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39406cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_394070:
    // 0x394070: 0x24428020  addiu       $v0, $v0, -0x7FE0
    ctx->pc = 0x394070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
label_394074:
    // 0x394074: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_394078:
    if (ctx->pc == 0x394078u) {
        ctx->pc = 0x394078u;
            // 0x394078: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x39407Cu;
        goto label_39407c;
    }
    ctx->pc = 0x394074u;
    {
        const bool branch_taken_0x394074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x394078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394074u;
            // 0x394078: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394074) {
            ctx->pc = 0x394090u;
            goto label_394090;
        }
    }
    ctx->pc = 0x39407Cu;
label_39407c:
    // 0x39407c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x39407cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_394080:
    // 0x394080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394084:
    // 0x394084: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x394084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_394088:
    // 0x394088: 0xc057a68  jal         func_15E9A0
label_39408c:
    if (ctx->pc == 0x39408Cu) {
        ctx->pc = 0x39408Cu;
            // 0x39408c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x394090u;
        goto label_394090;
    }
    ctx->pc = 0x394088u;
    SET_GPR_U32(ctx, 31, 0x394090u);
    ctx->pc = 0x39408Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394088u;
            // 0x39408c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394090u; }
        if (ctx->pc != 0x394090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394090u; }
        if (ctx->pc != 0x394090u) { return; }
    }
    ctx->pc = 0x394090u;
label_394090:
    // 0x394090: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x394090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_394094:
    // 0x394094: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x394094u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_394098:
    // 0x394098: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_39409c:
    if (ctx->pc == 0x39409Cu) {
        ctx->pc = 0x39409Cu;
            // 0x39409c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3940A0u;
        goto label_3940a0;
    }
    ctx->pc = 0x394098u;
    {
        const bool branch_taken_0x394098 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x394098) {
            ctx->pc = 0x39409Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x394098u;
            // 0x39409c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3940ACu;
            goto label_3940ac;
        }
    }
    ctx->pc = 0x3940A0u;
label_3940a0:
    // 0x3940a0: 0xc0400a8  jal         func_1002A0
label_3940a4:
    if (ctx->pc == 0x3940A4u) {
        ctx->pc = 0x3940A4u;
            // 0x3940a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3940A8u;
        goto label_3940a8;
    }
    ctx->pc = 0x3940A0u;
    SET_GPR_U32(ctx, 31, 0x3940A8u);
    ctx->pc = 0x3940A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3940A0u;
            // 0x3940a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3940A8u; }
        if (ctx->pc != 0x3940A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3940A8u; }
        if (ctx->pc != 0x3940A8u) { return; }
    }
    ctx->pc = 0x3940A8u;
label_3940a8:
    // 0x3940a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3940a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3940ac:
    // 0x3940ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3940acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3940b0:
    // 0x3940b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3940b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3940b4:
    // 0x3940b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3940b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3940b8:
    // 0x3940b8: 0x3e00008  jr          $ra
label_3940bc:
    if (ctx->pc == 0x3940BCu) {
        ctx->pc = 0x3940BCu;
            // 0x3940bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3940C0u;
        goto label_3940c0;
    }
    ctx->pc = 0x3940B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3940BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3940B8u;
            // 0x3940bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3940C0u;
label_3940c0:
    // 0x3940c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3940c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3940c4:
    // 0x3940c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3940c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3940c8:
    // 0x3940c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3940c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3940cc:
    // 0x3940cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3940ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3940d0:
    // 0x3940d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3940d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3940d4:
    // 0x3940d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3940d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3940d8:
    // 0x3940d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3940d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3940dc:
    // 0x3940dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3940dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3940e0:
    // 0x3940e0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3940e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3940e4:
    // 0x3940e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3940e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3940e8:
    // 0x3940e8: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3940e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3940ec:
    // 0x3940ec: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3940f0:
    if (ctx->pc == 0x3940F0u) {
        ctx->pc = 0x3940F4u;
        goto label_3940f4;
    }
    ctx->pc = 0x3940ECu;
    {
        const bool branch_taken_0x3940ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3940ec) {
            ctx->pc = 0x3940FCu;
            goto label_3940fc;
        }
    }
    ctx->pc = 0x3940F4u;
label_3940f4:
    // 0x3940f4: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_3940f8:
    if (ctx->pc == 0x3940F8u) {
        ctx->pc = 0x3940F8u;
            // 0x3940f8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3940FCu;
        goto label_3940fc;
    }
    ctx->pc = 0x3940F4u;
    {
        const bool branch_taken_0x3940f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3940F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3940F4u;
            // 0x3940f8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940f4) {
            ctx->pc = 0x394388u;
            goto label_394388;
        }
    }
    ctx->pc = 0x3940FCu;
label_3940fc:
    // 0x3940fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3940fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_394100:
    // 0x394100: 0x8c690e68  lw          $t1, 0xE68($v1)
    ctx->pc = 0x394100u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_394104:
    // 0x394104: 0xc5200014  lwc1        $f0, 0x14($t1)
    ctx->pc = 0x394104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394108:
    // 0x394108: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x394108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_39410c:
    // 0x39410c: 0xc5220018  lwc1        $f2, 0x18($t1)
    ctx->pc = 0x39410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_394110:
    // 0x394110: 0x25260014  addiu       $a2, $t1, 0x14
    ctx->pc = 0x394110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
label_394114:
    // 0x394114: 0xc521001c  lwc1        $f1, 0x1C($t1)
    ctx->pc = 0x394114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_394118:
    // 0x394118: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x394118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_39411c:
    // 0x39411c: 0x8c680028  lw          $t0, 0x28($v1)
    ctx->pc = 0x39411cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_394120:
    // 0x394120: 0xc5200020  lwc1        $f0, 0x20($t1)
    ctx->pc = 0x394120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394124:
    // 0x394124: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x394124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_394128:
    // 0x394128: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x394128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_39412c:
    // 0x39412c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x39412cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_394130:
    // 0x394130: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x394130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_394134:
    // 0x394134: 0x25070024  addiu       $a3, $t0, 0x24
    ctx->pc = 0x394134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
label_394138:
    // 0x394138: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x394138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39413c:
    // 0x39413c: 0xc5020028  lwc1        $f2, 0x28($t0)
    ctx->pc = 0x39413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_394140:
    // 0x394140: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x394140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_394144:
    // 0x394144: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x394144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_394148:
    // 0x394148: 0xc5000030  lwc1        $f0, 0x30($t0)
    ctx->pc = 0x394148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39414c:
    // 0x39414c: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x39414cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_394150:
    // 0x394150: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x394150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_394154:
    // 0x394154: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
label_394158:
    if (ctx->pc == 0x394158u) {
        ctx->pc = 0x394158u;
            // 0x394158: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x39415Cu;
        goto label_39415c;
    }
    ctx->pc = 0x394154u;
    {
        const bool branch_taken_0x394154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x394158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394154u;
            // 0x394158: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x394154) {
            ctx->pc = 0x394384u;
            goto label_394384;
        }
    }
    ctx->pc = 0x39415Cu;
label_39415c:
    // 0x39415c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x39415cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_394160:
    // 0x394160: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x394160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_394164:
    // 0x394164: 0x8c6589f0  lw          $a1, -0x7610($v1)
    ctx->pc = 0x394164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_394168:
    // 0x394168: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x394168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39416c:
    // 0x39416c: 0xc6540068  lwc1        $f20, 0x68($s2)
    ctx->pc = 0x39416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_394170:
    // 0x394170: 0x8c830790  lw          $v1, 0x790($a0)
    ctx->pc = 0x394170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1936)));
label_394174:
    // 0x394174: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x394174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_394178:
    // 0x394178: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x394178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_39417c:
    // 0x39417c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x39417cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_394180:
    // 0x394180: 0x48043  sra         $s0, $a0, 1
    ctx->pc = 0x394180u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 1));
label_394184:
    // 0x394184: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x394184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_394188:
    // 0x394188: 0x1460007e  bnez        $v1, . + 4 + (0x7E << 2)
label_39418c:
    if (ctx->pc == 0x39418Cu) {
        ctx->pc = 0x39418Cu;
            // 0x39418c: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x394190u;
        goto label_394190;
    }
    ctx->pc = 0x394188u;
    {
        const bool branch_taken_0x394188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39418Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394188u;
            // 0x39418c: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394188) {
            ctx->pc = 0x394384u;
            goto label_394384;
        }
    }
    ctx->pc = 0x394190u;
label_394190:
    // 0x394190: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x394190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_394194:
    // 0x394194: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x394194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_394198:
    // 0x394198: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x394198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39419c:
    // 0x39419c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39419cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3941a0:
    // 0x3941a0: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x3941a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3941a4:
    // 0x3941a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3941a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3941a8:
    // 0x3941a8: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x3941a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_3941ac:
    // 0x3941ac: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x3941acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_3941b0:
    // 0x3941b0: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x3941b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3941b4:
    // 0x3941b4: 0xe502002c  swc1        $f2, 0x2C($t0)
    ctx->pc = 0x3941b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
label_3941b8:
    // 0x3941b8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x3941b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3941bc:
    // 0x3941bc: 0xe5010030  swc1        $f1, 0x30($t0)
    ctx->pc = 0x3941bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
label_3941c0:
    // 0x3941c0: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x3941c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3941c4:
    // 0x3941c4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3941c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_3941c8:
    // 0x3941c8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x3941c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3941cc:
    // 0x3941cc: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x3941ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_3941d0:
    // 0x3941d0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x3941d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3941d4:
    // 0x3941d4: 0xe521001c  swc1        $f1, 0x1C($t1)
    ctx->pc = 0x3941d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
label_3941d8:
    // 0x3941d8: 0xe5200020  swc1        $f0, 0x20($t1)
    ctx->pc = 0x3941d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 32), bits); }
label_3941dc:
    // 0x3941dc: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x3941dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_3941e0:
    // 0x3941e0: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x3941e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_3941e4:
    // 0x3941e4: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x3941e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3941e8:
    // 0x3941e8: 0x8c590008  lw          $t9, 0x8($v0)
    ctx->pc = 0x3941e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3941ec:
    // 0x3941ec: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x3941ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3941f0:
    // 0x3941f0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3941f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3941f4:
    // 0x3941f4: 0x320f809  jalr        $t9
label_3941f8:
    if (ctx->pc == 0x3941F8u) {
        ctx->pc = 0x3941F8u;
            // 0x3941f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3941FCu;
        goto label_3941fc;
    }
    ctx->pc = 0x3941F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3941FCu);
        ctx->pc = 0x3941F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3941F4u;
            // 0x3941f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3941FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3941FCu; }
            if (ctx->pc != 0x3941FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3941FCu;
label_3941fc:
    // 0x3941fc: 0x3c084250  lui         $t0, 0x4250
    ctx->pc = 0x3941fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16976 << 16));
label_394200:
    // 0x394200: 0x8e390004  lw          $t9, 0x4($s1)
    ctx->pc = 0x394200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_394204:
    // 0x394204: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x394204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_394208:
    // 0x394208: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x394208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_39420c:
    // 0x39420c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x39420cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_394210:
    // 0x394210: 0x3c022020  lui         $v0, 0x2020
    ctx->pc = 0x394210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8224 << 16));
label_394214:
    // 0x394214: 0x46156380  add.s       $f14, $f12, $f21
    ctx->pc = 0x394214u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
label_394218:
    // 0x394218: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x394218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39421c:
    // 0x39421c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_394220:
    // 0x394220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x394220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394224:
    // 0x394224: 0x34452070  ori         $a1, $v0, 0x2070
    ctx->pc = 0x394224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8304);
label_394228:
    // 0x394228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x394228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39422c:
    // 0x39422c: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x39422cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_394230:
    // 0x394230: 0x44838000  mtc1        $v1, $f16
    ctx->pc = 0x394230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_394234:
    // 0x394234: 0x320f809  jalr        $t9
label_394238:
    if (ctx->pc == 0x394238u) {
        ctx->pc = 0x394238u;
            // 0x394238: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x39423Cu;
        goto label_39423c;
    }
    ctx->pc = 0x394234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39423Cu);
        ctx->pc = 0x394238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394234u;
            // 0x394238: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39423Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39423Cu; }
            if (ctx->pc != 0x39423Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39423Cu;
label_39423c:
    // 0x39423c: 0x8e390004  lw          $t9, 0x4($s1)
    ctx->pc = 0x39423cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_394240:
    // 0x394240: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x394240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_394244:
    // 0x394244: 0x320f809  jalr        $t9
label_394248:
    if (ctx->pc == 0x394248u) {
        ctx->pc = 0x394248u;
            // 0x394248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39424Cu;
        goto label_39424c;
    }
    ctx->pc = 0x394244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39424Cu);
        ctx->pc = 0x394248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394244u;
            // 0x394248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39424Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39424Cu; }
            if (ctx->pc != 0x39424Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39424Cu;
label_39424c:
    // 0x39424c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_394250:
    // 0x394250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x394250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394254:
    // 0x394254: 0x8c4389e0  lw          $v1, -0x7620($v0)
    ctx->pc = 0x394254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_394258:
    // 0x394258: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x394258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39425c:
    // 0x39425c: 0xa0650004  sb          $a1, 0x4($v1)
    ctx->pc = 0x39425cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 5));
label_394260:
    // 0x394260: 0x80426138  lb          $v0, 0x6138($v0)
    ctx->pc = 0x394260u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 24888)));
label_394264:
    // 0x394264: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_394268:
    if (ctx->pc == 0x394268u) {
        ctx->pc = 0x394268u;
            // 0x394268: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x39426Cu;
        goto label_39426c;
    }
    ctx->pc = 0x394264u;
    {
        const bool branch_taken_0x394264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394264) {
            ctx->pc = 0x394268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x394264u;
            // 0x394268: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x394290u;
            goto label_394290;
        }
    }
    ctx->pc = 0x39426Cu;
label_39426c:
    // 0x39426c: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x39426cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394270:
    // 0x394270: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x394270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_394274:
    // 0x394274: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x394274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_394278:
    // 0x394278: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x394278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39427c:
    // 0x39427c: 0xe4801c08  swc1        $f0, 0x1C08($a0)
    ctx->pc = 0x39427cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7176), bits); }
label_394280:
    // 0x394280: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x394280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394284:
    // 0x394284: 0xe4601c0c  swc1        $f0, 0x1C0C($v1)
    ctx->pc = 0x394284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7180), bits); }
label_394288:
    // 0x394288: 0xa0456138  sb          $a1, 0x6138($v0)
    ctx->pc = 0x394288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24888), (uint8_t)GPR_U32(ctx, 5));
label_39428c:
    // 0x39428c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x39428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_394290:
    // 0x394290: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x394290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_394294:
    // 0x394294: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_394298:
    if (ctx->pc == 0x394298u) {
        ctx->pc = 0x39429Cu;
        goto label_39429c;
    }
    ctx->pc = 0x394294u;
    {
        const bool branch_taken_0x394294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x394294) {
            ctx->pc = 0x394344u;
            goto label_394344;
        }
    }
    ctx->pc = 0x39429Cu;
label_39429c:
    // 0x39429c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3942a0:
    // 0x3942a0: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3942a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_3942a4:
    // 0x3942a4: 0x8c530e68  lw          $s3, 0xE68($v0)
    ctx->pc = 0x3942a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_3942a8:
    // 0x3942a8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3942a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3942ac:
    // 0x3942ac: 0x8e46005c  lw          $a2, 0x5C($s2)
    ctx->pc = 0x3942acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_3942b0:
    // 0x3942b0: 0x24e71c08  addiu       $a3, $a3, 0x1C08
    ctx->pc = 0x3942b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7176));
label_3942b4:
    // 0x3942b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3942b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3942b8:
    // 0x3942b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3942b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3942bc:
    // 0x3942bc: 0x8e710010  lw          $s1, 0x10($s3)
    ctx->pc = 0x3942bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3942c0:
    // 0x3942c0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3942c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3942c4:
    // 0x3942c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3942c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3942c8:
    // 0x3942c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3942c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3942cc:
    // 0x3942cc: 0xc0ee398  jal         func_3B8E60
label_3942d0:
    if (ctx->pc == 0x3942D0u) {
        ctx->pc = 0x3942D0u;
            // 0x3942d0: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x3942D4u;
        goto label_3942d4;
    }
    ctx->pc = 0x3942CCu;
    SET_GPR_U32(ctx, 31, 0x3942D4u);
    ctx->pc = 0x3942D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3942CCu;
            // 0x3942d0: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3942D4u; }
        if (ctx->pc != 0x3942D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3942D4u; }
        if (ctx->pc != 0x3942D4u) { return; }
    }
    ctx->pc = 0x3942D4u;
label_3942d4:
    // 0x3942d4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3942d4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3942d8:
    // 0x3942d8: 0xae710010  sw          $s1, 0x10($s3)
    ctx->pc = 0x3942d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
label_3942dc:
    // 0x3942dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3942dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3942e0:
    // 0x3942e0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x3942e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_3942e4:
    // 0x3942e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3942e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3942e8:
    // 0x3942e8: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3942e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_3942ec:
    // 0x3942ec: 0x8c510e68  lw          $s1, 0xE68($v0)
    ctx->pc = 0x3942ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_3942f0:
    // 0x3942f0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3942f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3942f4:
    // 0x3942f4: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x3942f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3942f8:
    // 0x3942f8: 0x24c61c08  addiu       $a2, $a2, 0x1C08
    ctx->pc = 0x3942f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7176));
label_3942fc:
    // 0x3942fc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3942fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_394300:
    // 0x394300: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x394300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394304:
    // 0x394304: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x394304u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394308:
    // 0x394308: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x394308u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39430c:
    // 0x39430c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39430cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_394310:
    // 0x394310: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x394310u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394314:
    // 0x394314: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x394314u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_394318:
    // 0x394318: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x394318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39431c:
    // 0x39431c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_394320:
    // 0x394320: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x394320u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_394324:
    // 0x394324: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x394324u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_394328:
    // 0x394328: 0xe4601c08  swc1        $f0, 0x1C08($v1)
    ctx->pc = 0x394328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7176), bits); }
label_39432c:
    // 0x39432c: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x39432cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_394330:
    // 0x394330: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x394330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_394334:
    // 0x394334: 0xc0ee334  jal         func_3B8CD0
label_394338:
    if (ctx->pc == 0x394338u) {
        ctx->pc = 0x394338u;
            // 0x394338: 0xae2c0010  sw          $t4, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 12));
        ctx->pc = 0x39433Cu;
        goto label_39433c;
    }
    ctx->pc = 0x394334u;
    SET_GPR_U32(ctx, 31, 0x39433Cu);
    ctx->pc = 0x394338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394334u;
            // 0x394338: 0xae2c0010  sw          $t4, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39433Cu; }
        if (ctx->pc != 0x39433Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39433Cu; }
        if (ctx->pc != 0x39433Cu) { return; }
    }
    ctx->pc = 0x39433Cu;
label_39433c:
    // 0x39433c: 0x10000011  b           . + 4 + (0x11 << 2)
label_394340:
    if (ctx->pc == 0x394340u) {
        ctx->pc = 0x394340u;
            // 0x394340: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->pc = 0x394344u;
        goto label_394344;
    }
    ctx->pc = 0x39433Cu;
    {
        const bool branch_taken_0x39433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39433Cu;
            // 0x394340: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39433c) {
            ctx->pc = 0x394384u;
            goto label_394384;
        }
    }
    ctx->pc = 0x394344u;
label_394344:
    // 0x394344: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x394344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_394348:
    // 0x394348: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x394348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_39434c:
    // 0x39434c: 0x8c510e68  lw          $s1, 0xE68($v0)
    ctx->pc = 0x39434cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_394350:
    // 0x394350: 0x24c61c08  addiu       $a2, $a2, 0x1C08
    ctx->pc = 0x394350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7176));
label_394354:
    // 0x394354: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x394354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_394358:
    // 0x394358: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x394358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39435c:
    // 0x39435c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39435cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394360:
    // 0x394360: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x394360u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394364:
    // 0x394364: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x394364u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_394368:
    // 0x394368: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x394368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_39436c:
    // 0x39436c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39436cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_394370:
    // 0x394370: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x394370u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394374:
    // 0x394374: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x394374u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394378:
    // 0x394378: 0xc0ee334  jal         func_3B8CD0
label_39437c:
    if (ctx->pc == 0x39437Cu) {
        ctx->pc = 0x39437Cu;
            // 0x39437c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x394380u;
        goto label_394380;
    }
    ctx->pc = 0x394378u;
    SET_GPR_U32(ctx, 31, 0x394380u);
    ctx->pc = 0x39437Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394378u;
            // 0x39437c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394380u; }
        if (ctx->pc != 0x394380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394380u; }
        if (ctx->pc != 0x394380u) { return; }
    }
    ctx->pc = 0x394380u;
label_394380:
    // 0x394380: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x394380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_394384:
    // 0x394384: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x394384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_394388:
    // 0x394388: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x394388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39438c:
    // 0x39438c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x39438cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_394390:
    // 0x394390: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x394390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_394394:
    // 0x394394: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x394394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_394398:
    // 0x394398: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x394398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39439c:
    // 0x39439c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39439cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3943a0:
    // 0x3943a0: 0x3e00008  jr          $ra
label_3943a4:
    if (ctx->pc == 0x3943A4u) {
        ctx->pc = 0x3943A4u;
            // 0x3943a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3943A8u;
        goto label_3943a8;
    }
    ctx->pc = 0x3943A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3943A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3943A0u;
            // 0x3943a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3943A8u;
label_3943a8:
    // 0x3943a8: 0x0  nop
    ctx->pc = 0x3943a8u;
    // NOP
label_3943ac:
    // 0x3943ac: 0x0  nop
    ctx->pc = 0x3943acu;
    // NOP
label_3943b0:
    // 0x3943b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3943b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3943b4:
    // 0x3943b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3943b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3943b8:
    // 0x3943b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3943b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3943bc:
    // 0x3943bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3943bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3943c0:
    // 0x3943c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3943c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3943c4:
    // 0x3943c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3943c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3943c8:
    // 0x3943c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3943c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3943cc:
    // 0x3943cc: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x3943ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3943d0:
    // 0x3943d0: 0x8ca70790  lw          $a3, 0x790($a1)
    ctx->pc = 0x3943d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1936)));
label_3943d4:
    // 0x3943d4: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x3943d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_3943d8:
    // 0x3943d8: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
label_3943dc:
    if (ctx->pc == 0x3943DCu) {
        ctx->pc = 0x3943DCu;
            // 0x3943dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3943E0u;
        goto label_3943e0;
    }
    ctx->pc = 0x3943D8u;
    {
        const bool branch_taken_0x3943d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3943DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3943D8u;
            // 0x3943dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3943d8) {
            ctx->pc = 0x39457Cu;
            goto label_39457c;
        }
    }
    ctx->pc = 0x3943E0u;
label_3943e0:
    // 0x3943e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3943e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3943e4:
    // 0x3943e4: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x3943e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_3943e8:
    // 0x3943e8: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x3943e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3943ec:
    // 0x3943ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3943ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3943f0:
    // 0x3943f0: 0x10a30051  beq         $a1, $v1, . + 4 + (0x51 << 2)
label_3943f4:
    if (ctx->pc == 0x3943F4u) {
        ctx->pc = 0x3943F4u;
            // 0x3943f4: 0xc4d40018  lwc1        $f20, 0x18($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x3943F8u;
        goto label_3943f8;
    }
    ctx->pc = 0x3943F0u;
    {
        const bool branch_taken_0x3943f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3943F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3943F0u;
            // 0x3943f4: 0xc4d40018  lwc1        $f20, 0x18($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3943f0) {
            ctx->pc = 0x394538u;
            goto label_394538;
        }
    }
    ctx->pc = 0x3943F8u;
label_3943f8:
    // 0x3943f8: 0x50a0004a  beql        $a1, $zero, . + 4 + (0x4A << 2)
label_3943fc:
    if (ctx->pc == 0x3943FCu) {
        ctx->pc = 0x3943FCu;
            // 0x3943fc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x394400u;
        goto label_394400;
    }
    ctx->pc = 0x3943F8u;
    {
        const bool branch_taken_0x3943f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3943f8) {
            ctx->pc = 0x3943FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3943F8u;
            // 0x3943fc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x394524u;
            goto label_394524;
        }
    }
    ctx->pc = 0x394400u;
label_394400:
    // 0x394400: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x394400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_394404:
    // 0x394404: 0x50a3003a  beql        $a1, $v1, . + 4 + (0x3A << 2)
label_394408:
    if (ctx->pc == 0x394408u) {
        ctx->pc = 0x394408u;
            // 0x394408: 0xc6010060  lwc1        $f1, 0x60($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x39440Cu;
        goto label_39440c;
    }
    ctx->pc = 0x394404u;
    {
        const bool branch_taken_0x394404 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x394404) {
            ctx->pc = 0x394408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x394404u;
            // 0x394408: 0xc6010060  lwc1        $f1, 0x60($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3944F0u;
            goto label_3944f0;
        }
    }
    ctx->pc = 0x39440Cu;
label_39440c:
    // 0x39440c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39440cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_394410:
    // 0x394410: 0x50a3000e  beql        $a1, $v1, . + 4 + (0xE << 2)
label_394414:
    if (ctx->pc == 0x394414u) {
        ctx->pc = 0x394414u;
            // 0x394414: 0xc601006c  lwc1        $f1, 0x6C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x394418u;
        goto label_394418;
    }
    ctx->pc = 0x394410u;
    {
        const bool branch_taken_0x394410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x394410) {
            ctx->pc = 0x394414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x394410u;
            // 0x394414: 0xc601006c  lwc1        $f1, 0x6C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x39444Cu;
            goto label_39444c;
        }
    }
    ctx->pc = 0x394418u;
label_394418:
    // 0x394418: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x394418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39441c:
    // 0x39441c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_394420:
    if (ctx->pc == 0x394420u) {
        ctx->pc = 0x394420u;
            // 0x394420: 0x3c033800  lui         $v1, 0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
        ctx->pc = 0x394424u;
        goto label_394424;
    }
    ctx->pc = 0x39441Cu;
    {
        const bool branch_taken_0x39441c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39441c) {
            ctx->pc = 0x394420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39441Cu;
            // 0x394420: 0x3c033800  lui         $v1, 0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39442Cu;
            goto label_39442c;
        }
    }
    ctx->pc = 0x394424u;
label_394424:
    // 0x394424: 0x10000056  b           . + 4 + (0x56 << 2)
label_394428:
    if (ctx->pc == 0x394428u) {
        ctx->pc = 0x394428u;
            // 0x394428: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x39442Cu;
        goto label_39442c;
    }
    ctx->pc = 0x394424u;
    {
        const bool branch_taken_0x394424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394424u;
            // 0x394428: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394424) {
            ctx->pc = 0x394580u;
            goto label_394580;
        }
    }
    ctx->pc = 0x39442Cu;
label_39442c:
    // 0x39442c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x39442cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_394430:
    // 0x394430: 0x14600052  bnez        $v1, . + 4 + (0x52 << 2)
label_394434:
    if (ctx->pc == 0x394434u) {
        ctx->pc = 0x394438u;
        goto label_394438;
    }
    ctx->pc = 0x394430u;
    {
        const bool branch_taken_0x394430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x394430) {
            ctx->pc = 0x39457Cu;
            goto label_39457c;
        }
    }
    ctx->pc = 0x394438u;
label_394438:
    // 0x394438: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x394438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39443c:
    // 0x39443c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x39443cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_394440:
    // 0x394440: 0x320f809  jalr        $t9
label_394444:
    if (ctx->pc == 0x394444u) {
        ctx->pc = 0x394448u;
        goto label_394448;
    }
    ctx->pc = 0x394440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x394448u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x394448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x394448u; }
            if (ctx->pc != 0x394448u) { return; }
        }
        }
    }
    ctx->pc = 0x394448u;
label_394448:
    // 0x394448: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x394448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39444c:
    // 0x39444c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39444cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_394450:
    // 0x394450: 0x0  nop
    ctx->pc = 0x394450u;
    // NOP
label_394454:
    // 0x394454: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x394454u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_394458:
    // 0x394458: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x394458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39445c:
    // 0x39445c: 0x45000047  bc1f        . + 4 + (0x47 << 2)
label_394460:
    if (ctx->pc == 0x394460u) {
        ctx->pc = 0x394460u;
            // 0x394460: 0xe601006c  swc1        $f1, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->pc = 0x394464u;
        goto label_394464;
    }
    ctx->pc = 0x39445Cu;
    {
        const bool branch_taken_0x39445c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x394460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39445Cu;
            // 0x394460: 0xe601006c  swc1        $f1, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39445c) {
            ctx->pc = 0x39457Cu;
            goto label_39457c;
        }
    }
    ctx->pc = 0x394464u;
label_394464:
    // 0x394464: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x394464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_394468:
    // 0x394468: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x394468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39446c:
    // 0x39446c: 0x24426130  addiu       $v0, $v0, 0x6130
    ctx->pc = 0x39446cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24880));
label_394470:
    // 0x394470: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x394470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_394474:
    // 0x394474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x394474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_394478:
    // 0x394478: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x394478u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39447c:
    // 0x39447c: 0x52400012  beql        $s2, $zero, . + 4 + (0x12 << 2)
label_394480:
    if (ctx->pc == 0x394480u) {
        ctx->pc = 0x394480u;
            // 0x394480: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x394484u;
        goto label_394484;
    }
    ctx->pc = 0x39447Cu;
    {
        const bool branch_taken_0x39447c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x39447c) {
            ctx->pc = 0x394480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39447Cu;
            // 0x394480: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3944C8u;
            goto label_3944c8;
        }
    }
    ctx->pc = 0x394484u;
label_394484:
    // 0x394484: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x394484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_394488:
    // 0x394488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x394488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39448c:
    // 0x39448c: 0x8e510058  lw          $s1, 0x58($s2)
    ctx->pc = 0x39448cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_394490:
    // 0x394490: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x394490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_394494:
    // 0x394494: 0x320f809  jalr        $t9
label_394498:
    if (ctx->pc == 0x394498u) {
        ctx->pc = 0x394498u;
            // 0x394498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39449Cu;
        goto label_39449c;
    }
    ctx->pc = 0x394494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39449Cu);
        ctx->pc = 0x394498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394494u;
            // 0x394498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39449Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39449Cu; }
            if (ctx->pc != 0x39449Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39449Cu;
label_39449c:
    // 0x39449c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x39449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3944a0:
    // 0x3944a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3944a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3944a4:
    // 0x3944a4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3944a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3944a8:
    // 0x3944a8: 0xc057b7c  jal         func_15EDF0
label_3944ac:
    if (ctx->pc == 0x3944ACu) {
        ctx->pc = 0x3944ACu;
            // 0x3944ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3944B0u;
        goto label_3944b0;
    }
    ctx->pc = 0x3944A8u;
    SET_GPR_U32(ctx, 31, 0x3944B0u);
    ctx->pc = 0x3944ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3944A8u;
            // 0x3944ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3944B0u; }
        if (ctx->pc != 0x3944B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3944B0u; }
        if (ctx->pc != 0x3944B0u) { return; }
    }
    ctx->pc = 0x3944B0u;
label_3944b0:
    // 0x3944b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3944b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3944b4:
    // 0x3944b4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3944b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3944b8:
    // 0x3944b8: 0x24426130  addiu       $v0, $v0, 0x6130
    ctx->pc = 0x3944b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24880));
label_3944bc:
    // 0x3944bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3944bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3944c0:
    // 0x3944c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3944c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3944c4:
    // 0x3944c4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3944c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3944c8:
    // 0x3944c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3944c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3944cc:
    // 0x3944cc: 0x24426130  addiu       $v0, $v0, 0x6130
    ctx->pc = 0x3944ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24880));
label_3944d0:
    // 0x3944d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3944d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3944d4:
    // 0x3944d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3944d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3944d8:
    // 0x3944d8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3944d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_3944dc:
    // 0x3944dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3944dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3944e0:
    // 0x3944e0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3944e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3944e4:
    // 0x3944e4: 0x320f809  jalr        $t9
label_3944e8:
    if (ctx->pc == 0x3944E8u) {
        ctx->pc = 0x3944E8u;
            // 0x3944e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3944ECu;
        goto label_3944ec;
    }
    ctx->pc = 0x3944E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3944ECu);
        ctx->pc = 0x3944E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3944E4u;
            // 0x3944e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3944ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3944ECu; }
            if (ctx->pc != 0x3944ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3944ECu;
label_3944ec:
    // 0x3944ec: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x3944ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3944f0:
    // 0x3944f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3944f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3944f4:
    // 0x3944f4: 0x0  nop
    ctx->pc = 0x3944f4u;
    // NOP
label_3944f8:
    // 0x3944f8: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x3944f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_3944fc:
    // 0x3944fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3944fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_394500:
    // 0x394500: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_394504:
    if (ctx->pc == 0x394504u) {
        ctx->pc = 0x394504u;
            // 0x394504: 0xe6010060  swc1        $f1, 0x60($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
        ctx->pc = 0x394508u;
        goto label_394508;
    }
    ctx->pc = 0x394500u;
    {
        const bool branch_taken_0x394500 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x394504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394500u;
            // 0x394504: 0xe6010060  swc1        $f1, 0x60($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x394500) {
            ctx->pc = 0x39457Cu;
            goto label_39457c;
        }
    }
    ctx->pc = 0x394508u;
label_394508:
    // 0x394508: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x394508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39450c:
    // 0x39450c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394510:
    // 0x394510: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x394510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_394514:
    // 0x394514: 0x320f809  jalr        $t9
label_394518:
    if (ctx->pc == 0x394518u) {
        ctx->pc = 0x394518u;
            // 0x394518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39451Cu;
        goto label_39451c;
    }
    ctx->pc = 0x394514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39451Cu);
        ctx->pc = 0x394518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394514u;
            // 0x394518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39451Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39451Cu; }
            if (ctx->pc != 0x39451Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39451Cu;
label_39451c:
    // 0x39451c: 0x10000017  b           . + 4 + (0x17 << 2)
label_394520:
    if (ctx->pc == 0x394520u) {
        ctx->pc = 0x394524u;
        goto label_394524;
    }
    ctx->pc = 0x39451Cu;
    {
        const bool branch_taken_0x39451c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39451c) {
            ctx->pc = 0x39457Cu;
            goto label_39457c;
        }
    }
    ctx->pc = 0x394524u;
label_394524:
    // 0x394524: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x394524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_394528:
    // 0x394528: 0x320f809  jalr        $t9
label_39452c:
    if (ctx->pc == 0x39452Cu) {
        ctx->pc = 0x394530u;
        goto label_394530;
    }
    ctx->pc = 0x394528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x394530u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x394530u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x394530u; }
            if (ctx->pc != 0x394530u) { return; }
        }
        }
    }
    ctx->pc = 0x394530u;
label_394530:
    // 0x394530: 0x10000012  b           . + 4 + (0x12 << 2)
label_394534:
    if (ctx->pc == 0x394534u) {
        ctx->pc = 0x394538u;
        goto label_394538;
    }
    ctx->pc = 0x394530u;
    {
        const bool branch_taken_0x394530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x394530) {
            ctx->pc = 0x39457Cu;
            goto label_39457c;
        }
    }
    ctx->pc = 0x394538u;
label_394538:
    // 0x394538: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_39453c:
    if (ctx->pc == 0x39453Cu) {
        ctx->pc = 0x394540u;
        goto label_394540;
    }
    ctx->pc = 0x394538u;
    {
        const bool branch_taken_0x394538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x394538) {
            ctx->pc = 0x39457Cu;
            goto label_39457c;
        }
    }
    ctx->pc = 0x394540u;
label_394540:
    // 0x394540: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x394540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_394544:
    // 0x394544: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x394544u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_394548:
    // 0x394548: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x394548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_39454c:
    // 0x39454c: 0x320f809  jalr        $t9
label_394550:
    if (ctx->pc == 0x394550u) {
        ctx->pc = 0x394550u;
            // 0x394550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394554u;
        goto label_394554;
    }
    ctx->pc = 0x39454Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x394554u);
        ctx->pc = 0x394550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39454Cu;
            // 0x394550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x394554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x394554u; }
            if (ctx->pc != 0x394554u) { return; }
        }
        }
    }
    ctx->pc = 0x394554u;
label_394554:
    // 0x394554: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x394554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_394558:
    // 0x394558: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x394558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39455c:
    // 0x39455c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x39455cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_394560:
    // 0x394560: 0xc057b7c  jal         func_15EDF0
label_394564:
    if (ctx->pc == 0x394564u) {
        ctx->pc = 0x394564u;
            // 0x394564: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x394568u;
        goto label_394568;
    }
    ctx->pc = 0x394560u;
    SET_GPR_U32(ctx, 31, 0x394568u);
    ctx->pc = 0x394564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394560u;
            // 0x394564: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394568u; }
        if (ctx->pc != 0x394568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394568u; }
        if (ctx->pc != 0x394568u) { return; }
    }
    ctx->pc = 0x394568u;
label_394568:
    // 0x394568: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x394568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_39456c:
    // 0x39456c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x39456cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_394570:
    // 0x394570: 0x24636130  addiu       $v1, $v1, 0x6130
    ctx->pc = 0x394570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24880));
label_394574:
    // 0x394574: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x394574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_394578:
    // 0x394578: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x394578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_39457c:
    // 0x39457c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39457cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_394580:
    // 0x394580: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x394580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_394584:
    // 0x394584: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x394584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_394588:
    // 0x394588: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x394588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39458c:
    // 0x39458c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39458cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_394590:
    // 0x394590: 0x3e00008  jr          $ra
label_394594:
    if (ctx->pc == 0x394594u) {
        ctx->pc = 0x394594u;
            // 0x394594: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x394598u;
        goto label_394598;
    }
    ctx->pc = 0x394590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394590u;
            // 0x394594: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x394598u;
label_394598:
    // 0x394598: 0x0  nop
    ctx->pc = 0x394598u;
    // NOP
label_39459c:
    // 0x39459c: 0x0  nop
    ctx->pc = 0x39459cu;
    // NOP
label_3945a0:
    // 0x3945a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3945a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3945a4:
    // 0x3945a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3945a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3945a8:
    // 0x3945a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3945a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3945ac:
    // 0x3945ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3945acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3945b0:
    // 0x3945b0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3945b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3945b4:
    // 0x3945b4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3945b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3945b8:
    // 0x3945b8: 0x24970064  addiu       $s7, $a0, 0x64
    ctx->pc = 0x3945b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_3945bc:
    // 0x3945bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3945bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3945c0:
    // 0x3945c0: 0x24960054  addiu       $s6, $a0, 0x54
    ctx->pc = 0x3945c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
label_3945c4:
    // 0x3945c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3945c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3945c8:
    // 0x3945c8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3945c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3945cc:
    // 0x3945cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3945ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3945d0:
    // 0x3945d0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x3945d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3945d4:
    // 0x3945d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3945d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3945d8:
    // 0x3945d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3945d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3945dc:
    // 0x3945dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3945dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3945e0:
    // 0x3945e0: 0x24910034  addiu       $s1, $a0, 0x34
    ctx->pc = 0x3945e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
label_3945e4:
    // 0x3945e4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3945e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3945e8:
    // 0x3945e8: 0x24900044  addiu       $s0, $a0, 0x44
    ctx->pc = 0x3945e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_3945ec:
    // 0x3945ec: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3945ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3945f0:
    // 0x3945f0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3945f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3945f4:
    // 0x3945f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3945f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3945f8:
    // 0x3945f8: 0x8c930014  lw          $s3, 0x14($a0)
    ctx->pc = 0x3945f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3945fc:
    // 0x3945fc: 0x8c920024  lw          $s2, 0x24($a0)
    ctx->pc = 0x3945fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_394600:
    // 0x394600: 0xc040140  jal         func_100500
label_394604:
    if (ctx->pc == 0x394604u) {
        ctx->pc = 0x394604u;
            // 0x394604: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x394608u;
        goto label_394608;
    }
    ctx->pc = 0x394600u;
    SET_GPR_U32(ctx, 31, 0x394608u);
    ctx->pc = 0x394604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394600u;
            // 0x394604: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394608u; }
        if (ctx->pc != 0x394608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394608u; }
        if (ctx->pc != 0x394608u) { return; }
    }
    ctx->pc = 0x394608u;
label_394608:
    // 0x394608: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_39460c:
    if (ctx->pc == 0x39460Cu) {
        ctx->pc = 0x39460Cu;
            // 0x39460c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394610u;
        goto label_394610;
    }
    ctx->pc = 0x394608u;
    {
        const bool branch_taken_0x394608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39460Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394608u;
            // 0x39460c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394608) {
            ctx->pc = 0x394674u;
            goto label_394674;
        }
    }
    ctx->pc = 0x394610u;
label_394610:
    // 0x394610: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x394610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_394614:
    // 0x394614: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x394614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_394618:
    // 0x394618: 0xc6340000  lwc1        $f20, 0x0($s1)
    ctx->pc = 0x394618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39461c:
    // 0x39461c: 0x3445ae60  ori         $a1, $v0, 0xAE60
    ctx->pc = 0x39461cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44640);
label_394620:
    // 0x394620: 0xc6d50000  lwc1        $f21, 0x0($s6)
    ctx->pc = 0x394620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_394624:
    // 0x394624: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x394624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_394628:
    // 0x394628: 0xc6f60000  lwc1        $f22, 0x0($s7)
    ctx->pc = 0x394628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_39462c:
    // 0x39462c: 0xc6170000  lwc1        $f23, 0x0($s0)
    ctx->pc = 0x39462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_394630:
    // 0x394630: 0xc10ca68  jal         func_4329A0
label_394634:
    if (ctx->pc == 0x394634u) {
        ctx->pc = 0x394634u;
            // 0x394634: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x394638u;
        goto label_394638;
    }
    ctx->pc = 0x394630u;
    SET_GPR_U32(ctx, 31, 0x394638u);
    ctx->pc = 0x394634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394630u;
            // 0x394634: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394638u; }
        if (ctx->pc != 0x394638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394638u; }
        if (ctx->pc != 0x394638u) { return; }
    }
    ctx->pc = 0x394638u;
label_394638:
    // 0x394638: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x394638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_39463c:
    // 0x39463c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x39463cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_394640:
    // 0x394640: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x394640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_394644:
    // 0x394644: 0x24848020  addiu       $a0, $a0, -0x7FE0
    ctx->pc = 0x394644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934560));
label_394648:
    // 0x394648: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x394648u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_39464c:
    // 0x39464c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394650:
    // 0x394650: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x394650u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_394654:
    // 0x394654: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x394654u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
label_394658:
    // 0x394658: 0xae930058  sw          $s3, 0x58($s4)
    ctx->pc = 0x394658u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 19));
label_39465c:
    // 0x39465c: 0xae92005c  sw          $s2, 0x5C($s4)
    ctx->pc = 0x39465cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 18));
label_394660:
    // 0x394660: 0xe6970060  swc1        $f23, 0x60($s4)
    ctx->pc = 0x394660u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 96), bits); }
label_394664:
    // 0x394664: 0xe6960064  swc1        $f22, 0x64($s4)
    ctx->pc = 0x394664u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 100), bits); }
label_394668:
    // 0x394668: 0xe6950068  swc1        $f21, 0x68($s4)
    ctx->pc = 0x394668u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 104), bits); }
label_39466c:
    // 0x39466c: 0xe694006c  swc1        $f20, 0x6C($s4)
    ctx->pc = 0x39466cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 108), bits); }
label_394670:
    // 0x394670: 0xae950070  sw          $s5, 0x70($s4)
    ctx->pc = 0x394670u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 21));
label_394674:
    // 0x394674: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x394674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_394678:
    // 0x394678: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x394678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_39467c:
    // 0x39467c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x39467cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_394680:
    // 0x394680: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x394680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_394684:
    // 0x394684: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x394684u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_394688:
    // 0x394688: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x394688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39468c:
    // 0x39468c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x39468cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_394690:
    // 0x394690: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x394690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_394694:
    // 0x394694: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x394694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_394698:
    // 0x394698: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x394698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39469c:
    // 0x39469c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39469cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3946a0:
    // 0x3946a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3946a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3946a4:
    // 0x3946a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3946a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3946a8:
    // 0x3946a8: 0x3e00008  jr          $ra
label_3946ac:
    if (ctx->pc == 0x3946ACu) {
        ctx->pc = 0x3946ACu;
            // 0x3946ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3946B0u;
        goto label_fallthrough_0x3946a8;
    }
    ctx->pc = 0x3946A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3946ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3946A8u;
            // 0x3946ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3946a8:
    ctx->pc = 0x3946B0u;
}
