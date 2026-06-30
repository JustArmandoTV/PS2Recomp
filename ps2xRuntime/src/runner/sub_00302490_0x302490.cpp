#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00302490
// Address: 0x302490 - 0x302c18
void sub_00302490_0x302490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302490_0x302490");
#endif

    switch (ctx->pc) {
        case 0x302490u: goto label_302490;
        case 0x302494u: goto label_302494;
        case 0x302498u: goto label_302498;
        case 0x30249cu: goto label_30249c;
        case 0x3024a0u: goto label_3024a0;
        case 0x3024a4u: goto label_3024a4;
        case 0x3024a8u: goto label_3024a8;
        case 0x3024acu: goto label_3024ac;
        case 0x3024b0u: goto label_3024b0;
        case 0x3024b4u: goto label_3024b4;
        case 0x3024b8u: goto label_3024b8;
        case 0x3024bcu: goto label_3024bc;
        case 0x3024c0u: goto label_3024c0;
        case 0x3024c4u: goto label_3024c4;
        case 0x3024c8u: goto label_3024c8;
        case 0x3024ccu: goto label_3024cc;
        case 0x3024d0u: goto label_3024d0;
        case 0x3024d4u: goto label_3024d4;
        case 0x3024d8u: goto label_3024d8;
        case 0x3024dcu: goto label_3024dc;
        case 0x3024e0u: goto label_3024e0;
        case 0x3024e4u: goto label_3024e4;
        case 0x3024e8u: goto label_3024e8;
        case 0x3024ecu: goto label_3024ec;
        case 0x3024f0u: goto label_3024f0;
        case 0x3024f4u: goto label_3024f4;
        case 0x3024f8u: goto label_3024f8;
        case 0x3024fcu: goto label_3024fc;
        case 0x302500u: goto label_302500;
        case 0x302504u: goto label_302504;
        case 0x302508u: goto label_302508;
        case 0x30250cu: goto label_30250c;
        case 0x302510u: goto label_302510;
        case 0x302514u: goto label_302514;
        case 0x302518u: goto label_302518;
        case 0x30251cu: goto label_30251c;
        case 0x302520u: goto label_302520;
        case 0x302524u: goto label_302524;
        case 0x302528u: goto label_302528;
        case 0x30252cu: goto label_30252c;
        case 0x302530u: goto label_302530;
        case 0x302534u: goto label_302534;
        case 0x302538u: goto label_302538;
        case 0x30253cu: goto label_30253c;
        case 0x302540u: goto label_302540;
        case 0x302544u: goto label_302544;
        case 0x302548u: goto label_302548;
        case 0x30254cu: goto label_30254c;
        case 0x302550u: goto label_302550;
        case 0x302554u: goto label_302554;
        case 0x302558u: goto label_302558;
        case 0x30255cu: goto label_30255c;
        case 0x302560u: goto label_302560;
        case 0x302564u: goto label_302564;
        case 0x302568u: goto label_302568;
        case 0x30256cu: goto label_30256c;
        case 0x302570u: goto label_302570;
        case 0x302574u: goto label_302574;
        case 0x302578u: goto label_302578;
        case 0x30257cu: goto label_30257c;
        case 0x302580u: goto label_302580;
        case 0x302584u: goto label_302584;
        case 0x302588u: goto label_302588;
        case 0x30258cu: goto label_30258c;
        case 0x302590u: goto label_302590;
        case 0x302594u: goto label_302594;
        case 0x302598u: goto label_302598;
        case 0x30259cu: goto label_30259c;
        case 0x3025a0u: goto label_3025a0;
        case 0x3025a4u: goto label_3025a4;
        case 0x3025a8u: goto label_3025a8;
        case 0x3025acu: goto label_3025ac;
        case 0x3025b0u: goto label_3025b0;
        case 0x3025b4u: goto label_3025b4;
        case 0x3025b8u: goto label_3025b8;
        case 0x3025bcu: goto label_3025bc;
        case 0x3025c0u: goto label_3025c0;
        case 0x3025c4u: goto label_3025c4;
        case 0x3025c8u: goto label_3025c8;
        case 0x3025ccu: goto label_3025cc;
        case 0x3025d0u: goto label_3025d0;
        case 0x3025d4u: goto label_3025d4;
        case 0x3025d8u: goto label_3025d8;
        case 0x3025dcu: goto label_3025dc;
        case 0x3025e0u: goto label_3025e0;
        case 0x3025e4u: goto label_3025e4;
        case 0x3025e8u: goto label_3025e8;
        case 0x3025ecu: goto label_3025ec;
        case 0x3025f0u: goto label_3025f0;
        case 0x3025f4u: goto label_3025f4;
        case 0x3025f8u: goto label_3025f8;
        case 0x3025fcu: goto label_3025fc;
        case 0x302600u: goto label_302600;
        case 0x302604u: goto label_302604;
        case 0x302608u: goto label_302608;
        case 0x30260cu: goto label_30260c;
        case 0x302610u: goto label_302610;
        case 0x302614u: goto label_302614;
        case 0x302618u: goto label_302618;
        case 0x30261cu: goto label_30261c;
        case 0x302620u: goto label_302620;
        case 0x302624u: goto label_302624;
        case 0x302628u: goto label_302628;
        case 0x30262cu: goto label_30262c;
        case 0x302630u: goto label_302630;
        case 0x302634u: goto label_302634;
        case 0x302638u: goto label_302638;
        case 0x30263cu: goto label_30263c;
        case 0x302640u: goto label_302640;
        case 0x302644u: goto label_302644;
        case 0x302648u: goto label_302648;
        case 0x30264cu: goto label_30264c;
        case 0x302650u: goto label_302650;
        case 0x302654u: goto label_302654;
        case 0x302658u: goto label_302658;
        case 0x30265cu: goto label_30265c;
        case 0x302660u: goto label_302660;
        case 0x302664u: goto label_302664;
        case 0x302668u: goto label_302668;
        case 0x30266cu: goto label_30266c;
        case 0x302670u: goto label_302670;
        case 0x302674u: goto label_302674;
        case 0x302678u: goto label_302678;
        case 0x30267cu: goto label_30267c;
        case 0x302680u: goto label_302680;
        case 0x302684u: goto label_302684;
        case 0x302688u: goto label_302688;
        case 0x30268cu: goto label_30268c;
        case 0x302690u: goto label_302690;
        case 0x302694u: goto label_302694;
        case 0x302698u: goto label_302698;
        case 0x30269cu: goto label_30269c;
        case 0x3026a0u: goto label_3026a0;
        case 0x3026a4u: goto label_3026a4;
        case 0x3026a8u: goto label_3026a8;
        case 0x3026acu: goto label_3026ac;
        case 0x3026b0u: goto label_3026b0;
        case 0x3026b4u: goto label_3026b4;
        case 0x3026b8u: goto label_3026b8;
        case 0x3026bcu: goto label_3026bc;
        case 0x3026c0u: goto label_3026c0;
        case 0x3026c4u: goto label_3026c4;
        case 0x3026c8u: goto label_3026c8;
        case 0x3026ccu: goto label_3026cc;
        case 0x3026d0u: goto label_3026d0;
        case 0x3026d4u: goto label_3026d4;
        case 0x3026d8u: goto label_3026d8;
        case 0x3026dcu: goto label_3026dc;
        case 0x3026e0u: goto label_3026e0;
        case 0x3026e4u: goto label_3026e4;
        case 0x3026e8u: goto label_3026e8;
        case 0x3026ecu: goto label_3026ec;
        case 0x3026f0u: goto label_3026f0;
        case 0x3026f4u: goto label_3026f4;
        case 0x3026f8u: goto label_3026f8;
        case 0x3026fcu: goto label_3026fc;
        case 0x302700u: goto label_302700;
        case 0x302704u: goto label_302704;
        case 0x302708u: goto label_302708;
        case 0x30270cu: goto label_30270c;
        case 0x302710u: goto label_302710;
        case 0x302714u: goto label_302714;
        case 0x302718u: goto label_302718;
        case 0x30271cu: goto label_30271c;
        case 0x302720u: goto label_302720;
        case 0x302724u: goto label_302724;
        case 0x302728u: goto label_302728;
        case 0x30272cu: goto label_30272c;
        case 0x302730u: goto label_302730;
        case 0x302734u: goto label_302734;
        case 0x302738u: goto label_302738;
        case 0x30273cu: goto label_30273c;
        case 0x302740u: goto label_302740;
        case 0x302744u: goto label_302744;
        case 0x302748u: goto label_302748;
        case 0x30274cu: goto label_30274c;
        case 0x302750u: goto label_302750;
        case 0x302754u: goto label_302754;
        case 0x302758u: goto label_302758;
        case 0x30275cu: goto label_30275c;
        case 0x302760u: goto label_302760;
        case 0x302764u: goto label_302764;
        case 0x302768u: goto label_302768;
        case 0x30276cu: goto label_30276c;
        case 0x302770u: goto label_302770;
        case 0x302774u: goto label_302774;
        case 0x302778u: goto label_302778;
        case 0x30277cu: goto label_30277c;
        case 0x302780u: goto label_302780;
        case 0x302784u: goto label_302784;
        case 0x302788u: goto label_302788;
        case 0x30278cu: goto label_30278c;
        case 0x302790u: goto label_302790;
        case 0x302794u: goto label_302794;
        case 0x302798u: goto label_302798;
        case 0x30279cu: goto label_30279c;
        case 0x3027a0u: goto label_3027a0;
        case 0x3027a4u: goto label_3027a4;
        case 0x3027a8u: goto label_3027a8;
        case 0x3027acu: goto label_3027ac;
        case 0x3027b0u: goto label_3027b0;
        case 0x3027b4u: goto label_3027b4;
        case 0x3027b8u: goto label_3027b8;
        case 0x3027bcu: goto label_3027bc;
        case 0x3027c0u: goto label_3027c0;
        case 0x3027c4u: goto label_3027c4;
        case 0x3027c8u: goto label_3027c8;
        case 0x3027ccu: goto label_3027cc;
        case 0x3027d0u: goto label_3027d0;
        case 0x3027d4u: goto label_3027d4;
        case 0x3027d8u: goto label_3027d8;
        case 0x3027dcu: goto label_3027dc;
        case 0x3027e0u: goto label_3027e0;
        case 0x3027e4u: goto label_3027e4;
        case 0x3027e8u: goto label_3027e8;
        case 0x3027ecu: goto label_3027ec;
        case 0x3027f0u: goto label_3027f0;
        case 0x3027f4u: goto label_3027f4;
        case 0x3027f8u: goto label_3027f8;
        case 0x3027fcu: goto label_3027fc;
        case 0x302800u: goto label_302800;
        case 0x302804u: goto label_302804;
        case 0x302808u: goto label_302808;
        case 0x30280cu: goto label_30280c;
        case 0x302810u: goto label_302810;
        case 0x302814u: goto label_302814;
        case 0x302818u: goto label_302818;
        case 0x30281cu: goto label_30281c;
        case 0x302820u: goto label_302820;
        case 0x302824u: goto label_302824;
        case 0x302828u: goto label_302828;
        case 0x30282cu: goto label_30282c;
        case 0x302830u: goto label_302830;
        case 0x302834u: goto label_302834;
        case 0x302838u: goto label_302838;
        case 0x30283cu: goto label_30283c;
        case 0x302840u: goto label_302840;
        case 0x302844u: goto label_302844;
        case 0x302848u: goto label_302848;
        case 0x30284cu: goto label_30284c;
        case 0x302850u: goto label_302850;
        case 0x302854u: goto label_302854;
        case 0x302858u: goto label_302858;
        case 0x30285cu: goto label_30285c;
        case 0x302860u: goto label_302860;
        case 0x302864u: goto label_302864;
        case 0x302868u: goto label_302868;
        case 0x30286cu: goto label_30286c;
        case 0x302870u: goto label_302870;
        case 0x302874u: goto label_302874;
        case 0x302878u: goto label_302878;
        case 0x30287cu: goto label_30287c;
        case 0x302880u: goto label_302880;
        case 0x302884u: goto label_302884;
        case 0x302888u: goto label_302888;
        case 0x30288cu: goto label_30288c;
        case 0x302890u: goto label_302890;
        case 0x302894u: goto label_302894;
        case 0x302898u: goto label_302898;
        case 0x30289cu: goto label_30289c;
        case 0x3028a0u: goto label_3028a0;
        case 0x3028a4u: goto label_3028a4;
        case 0x3028a8u: goto label_3028a8;
        case 0x3028acu: goto label_3028ac;
        case 0x3028b0u: goto label_3028b0;
        case 0x3028b4u: goto label_3028b4;
        case 0x3028b8u: goto label_3028b8;
        case 0x3028bcu: goto label_3028bc;
        case 0x3028c0u: goto label_3028c0;
        case 0x3028c4u: goto label_3028c4;
        case 0x3028c8u: goto label_3028c8;
        case 0x3028ccu: goto label_3028cc;
        case 0x3028d0u: goto label_3028d0;
        case 0x3028d4u: goto label_3028d4;
        case 0x3028d8u: goto label_3028d8;
        case 0x3028dcu: goto label_3028dc;
        case 0x3028e0u: goto label_3028e0;
        case 0x3028e4u: goto label_3028e4;
        case 0x3028e8u: goto label_3028e8;
        case 0x3028ecu: goto label_3028ec;
        case 0x3028f0u: goto label_3028f0;
        case 0x3028f4u: goto label_3028f4;
        case 0x3028f8u: goto label_3028f8;
        case 0x3028fcu: goto label_3028fc;
        case 0x302900u: goto label_302900;
        case 0x302904u: goto label_302904;
        case 0x302908u: goto label_302908;
        case 0x30290cu: goto label_30290c;
        case 0x302910u: goto label_302910;
        case 0x302914u: goto label_302914;
        case 0x302918u: goto label_302918;
        case 0x30291cu: goto label_30291c;
        case 0x302920u: goto label_302920;
        case 0x302924u: goto label_302924;
        case 0x302928u: goto label_302928;
        case 0x30292cu: goto label_30292c;
        case 0x302930u: goto label_302930;
        case 0x302934u: goto label_302934;
        case 0x302938u: goto label_302938;
        case 0x30293cu: goto label_30293c;
        case 0x302940u: goto label_302940;
        case 0x302944u: goto label_302944;
        case 0x302948u: goto label_302948;
        case 0x30294cu: goto label_30294c;
        case 0x302950u: goto label_302950;
        case 0x302954u: goto label_302954;
        case 0x302958u: goto label_302958;
        case 0x30295cu: goto label_30295c;
        case 0x302960u: goto label_302960;
        case 0x302964u: goto label_302964;
        case 0x302968u: goto label_302968;
        case 0x30296cu: goto label_30296c;
        case 0x302970u: goto label_302970;
        case 0x302974u: goto label_302974;
        case 0x302978u: goto label_302978;
        case 0x30297cu: goto label_30297c;
        case 0x302980u: goto label_302980;
        case 0x302984u: goto label_302984;
        case 0x302988u: goto label_302988;
        case 0x30298cu: goto label_30298c;
        case 0x302990u: goto label_302990;
        case 0x302994u: goto label_302994;
        case 0x302998u: goto label_302998;
        case 0x30299cu: goto label_30299c;
        case 0x3029a0u: goto label_3029a0;
        case 0x3029a4u: goto label_3029a4;
        case 0x3029a8u: goto label_3029a8;
        case 0x3029acu: goto label_3029ac;
        case 0x3029b0u: goto label_3029b0;
        case 0x3029b4u: goto label_3029b4;
        case 0x3029b8u: goto label_3029b8;
        case 0x3029bcu: goto label_3029bc;
        case 0x3029c0u: goto label_3029c0;
        case 0x3029c4u: goto label_3029c4;
        case 0x3029c8u: goto label_3029c8;
        case 0x3029ccu: goto label_3029cc;
        case 0x3029d0u: goto label_3029d0;
        case 0x3029d4u: goto label_3029d4;
        case 0x3029d8u: goto label_3029d8;
        case 0x3029dcu: goto label_3029dc;
        case 0x3029e0u: goto label_3029e0;
        case 0x3029e4u: goto label_3029e4;
        case 0x3029e8u: goto label_3029e8;
        case 0x3029ecu: goto label_3029ec;
        case 0x3029f0u: goto label_3029f0;
        case 0x3029f4u: goto label_3029f4;
        case 0x3029f8u: goto label_3029f8;
        case 0x3029fcu: goto label_3029fc;
        case 0x302a00u: goto label_302a00;
        case 0x302a04u: goto label_302a04;
        case 0x302a08u: goto label_302a08;
        case 0x302a0cu: goto label_302a0c;
        case 0x302a10u: goto label_302a10;
        case 0x302a14u: goto label_302a14;
        case 0x302a18u: goto label_302a18;
        case 0x302a1cu: goto label_302a1c;
        case 0x302a20u: goto label_302a20;
        case 0x302a24u: goto label_302a24;
        case 0x302a28u: goto label_302a28;
        case 0x302a2cu: goto label_302a2c;
        case 0x302a30u: goto label_302a30;
        case 0x302a34u: goto label_302a34;
        case 0x302a38u: goto label_302a38;
        case 0x302a3cu: goto label_302a3c;
        case 0x302a40u: goto label_302a40;
        case 0x302a44u: goto label_302a44;
        case 0x302a48u: goto label_302a48;
        case 0x302a4cu: goto label_302a4c;
        case 0x302a50u: goto label_302a50;
        case 0x302a54u: goto label_302a54;
        case 0x302a58u: goto label_302a58;
        case 0x302a5cu: goto label_302a5c;
        case 0x302a60u: goto label_302a60;
        case 0x302a64u: goto label_302a64;
        case 0x302a68u: goto label_302a68;
        case 0x302a6cu: goto label_302a6c;
        case 0x302a70u: goto label_302a70;
        case 0x302a74u: goto label_302a74;
        case 0x302a78u: goto label_302a78;
        case 0x302a7cu: goto label_302a7c;
        case 0x302a80u: goto label_302a80;
        case 0x302a84u: goto label_302a84;
        case 0x302a88u: goto label_302a88;
        case 0x302a8cu: goto label_302a8c;
        case 0x302a90u: goto label_302a90;
        case 0x302a94u: goto label_302a94;
        case 0x302a98u: goto label_302a98;
        case 0x302a9cu: goto label_302a9c;
        case 0x302aa0u: goto label_302aa0;
        case 0x302aa4u: goto label_302aa4;
        case 0x302aa8u: goto label_302aa8;
        case 0x302aacu: goto label_302aac;
        case 0x302ab0u: goto label_302ab0;
        case 0x302ab4u: goto label_302ab4;
        case 0x302ab8u: goto label_302ab8;
        case 0x302abcu: goto label_302abc;
        case 0x302ac0u: goto label_302ac0;
        case 0x302ac4u: goto label_302ac4;
        case 0x302ac8u: goto label_302ac8;
        case 0x302accu: goto label_302acc;
        case 0x302ad0u: goto label_302ad0;
        case 0x302ad4u: goto label_302ad4;
        case 0x302ad8u: goto label_302ad8;
        case 0x302adcu: goto label_302adc;
        case 0x302ae0u: goto label_302ae0;
        case 0x302ae4u: goto label_302ae4;
        case 0x302ae8u: goto label_302ae8;
        case 0x302aecu: goto label_302aec;
        case 0x302af0u: goto label_302af0;
        case 0x302af4u: goto label_302af4;
        case 0x302af8u: goto label_302af8;
        case 0x302afcu: goto label_302afc;
        case 0x302b00u: goto label_302b00;
        case 0x302b04u: goto label_302b04;
        case 0x302b08u: goto label_302b08;
        case 0x302b0cu: goto label_302b0c;
        case 0x302b10u: goto label_302b10;
        case 0x302b14u: goto label_302b14;
        case 0x302b18u: goto label_302b18;
        case 0x302b1cu: goto label_302b1c;
        case 0x302b20u: goto label_302b20;
        case 0x302b24u: goto label_302b24;
        case 0x302b28u: goto label_302b28;
        case 0x302b2cu: goto label_302b2c;
        case 0x302b30u: goto label_302b30;
        case 0x302b34u: goto label_302b34;
        case 0x302b38u: goto label_302b38;
        case 0x302b3cu: goto label_302b3c;
        case 0x302b40u: goto label_302b40;
        case 0x302b44u: goto label_302b44;
        case 0x302b48u: goto label_302b48;
        case 0x302b4cu: goto label_302b4c;
        case 0x302b50u: goto label_302b50;
        case 0x302b54u: goto label_302b54;
        case 0x302b58u: goto label_302b58;
        case 0x302b5cu: goto label_302b5c;
        case 0x302b60u: goto label_302b60;
        case 0x302b64u: goto label_302b64;
        case 0x302b68u: goto label_302b68;
        case 0x302b6cu: goto label_302b6c;
        case 0x302b70u: goto label_302b70;
        case 0x302b74u: goto label_302b74;
        case 0x302b78u: goto label_302b78;
        case 0x302b7cu: goto label_302b7c;
        case 0x302b80u: goto label_302b80;
        case 0x302b84u: goto label_302b84;
        case 0x302b88u: goto label_302b88;
        case 0x302b8cu: goto label_302b8c;
        case 0x302b90u: goto label_302b90;
        case 0x302b94u: goto label_302b94;
        case 0x302b98u: goto label_302b98;
        case 0x302b9cu: goto label_302b9c;
        case 0x302ba0u: goto label_302ba0;
        case 0x302ba4u: goto label_302ba4;
        case 0x302ba8u: goto label_302ba8;
        case 0x302bacu: goto label_302bac;
        case 0x302bb0u: goto label_302bb0;
        case 0x302bb4u: goto label_302bb4;
        case 0x302bb8u: goto label_302bb8;
        case 0x302bbcu: goto label_302bbc;
        case 0x302bc0u: goto label_302bc0;
        case 0x302bc4u: goto label_302bc4;
        case 0x302bc8u: goto label_302bc8;
        case 0x302bccu: goto label_302bcc;
        case 0x302bd0u: goto label_302bd0;
        case 0x302bd4u: goto label_302bd4;
        case 0x302bd8u: goto label_302bd8;
        case 0x302bdcu: goto label_302bdc;
        case 0x302be0u: goto label_302be0;
        case 0x302be4u: goto label_302be4;
        case 0x302be8u: goto label_302be8;
        case 0x302becu: goto label_302bec;
        case 0x302bf0u: goto label_302bf0;
        case 0x302bf4u: goto label_302bf4;
        case 0x302bf8u: goto label_302bf8;
        case 0x302bfcu: goto label_302bfc;
        case 0x302c00u: goto label_302c00;
        case 0x302c04u: goto label_302c04;
        case 0x302c08u: goto label_302c08;
        case 0x302c0cu: goto label_302c0c;
        case 0x302c10u: goto label_302c10;
        case 0x302c14u: goto label_302c14;
        default: break;
    }

    ctx->pc = 0x302490u;

label_302490:
    // 0x302490: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x302490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_302494:
    // 0x302494: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x302494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_302498:
    // 0x302498: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x302498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_30249c:
    // 0x30249c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x30249cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3024a0:
    // 0x3024a0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3024a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3024a4:
    // 0x3024a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3024a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3024a8:
    // 0x3024a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3024a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3024ac:
    // 0x3024ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3024acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3024b0:
    // 0x3024b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3024b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3024b4:
    // 0x3024b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3024b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3024b8:
    // 0x3024b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3024b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3024bc:
    // 0x3024bc: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3024bcu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3024c0:
    // 0x3024c0: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x3024c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3024c4:
    // 0x3024c4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3024c8:
    if (ctx->pc == 0x3024C8u) {
        ctx->pc = 0x3024C8u;
            // 0x3024c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3024CCu;
        goto label_3024cc;
    }
    ctx->pc = 0x3024C4u;
    {
        const bool branch_taken_0x3024c4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3024C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3024C4u;
            // 0x3024c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3024c4) {
            ctx->pc = 0x3024DCu;
            goto label_3024dc;
        }
    }
    ctx->pc = 0x3024CCu;
label_3024cc:
    // 0x3024cc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3024ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3024d0:
    // 0x3024d0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3024d4:
    if (ctx->pc == 0x3024D4u) {
        ctx->pc = 0x3024D8u;
        goto label_3024d8;
    }
    ctx->pc = 0x3024D0u;
    {
        const bool branch_taken_0x3024d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3024d0) {
            ctx->pc = 0x3024DCu;
            goto label_3024dc;
        }
    }
    ctx->pc = 0x3024D8u;
label_3024d8:
    // 0x3024d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3024d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3024dc:
    // 0x3024dc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3024e0:
    if (ctx->pc == 0x3024E0u) {
        ctx->pc = 0x3024E4u;
        goto label_3024e4;
    }
    ctx->pc = 0x3024DCu;
    {
        const bool branch_taken_0x3024dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3024dc) {
            ctx->pc = 0x3024F8u;
            goto label_3024f8;
        }
    }
    ctx->pc = 0x3024E4u;
label_3024e4:
    // 0x3024e4: 0xc075eb4  jal         func_1D7AD0
label_3024e8:
    if (ctx->pc == 0x3024E8u) {
        ctx->pc = 0x3024E8u;
            // 0x3024e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3024ECu;
        goto label_3024ec;
    }
    ctx->pc = 0x3024E4u;
    SET_GPR_U32(ctx, 31, 0x3024ECu);
    ctx->pc = 0x3024E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3024E4u;
            // 0x3024e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024ECu; }
        if (ctx->pc != 0x3024ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024ECu; }
        if (ctx->pc != 0x3024ECu) { return; }
    }
    ctx->pc = 0x3024ECu;
label_3024ec:
    // 0x3024ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3024f0:
    if (ctx->pc == 0x3024F0u) {
        ctx->pc = 0x3024F4u;
        goto label_3024f4;
    }
    ctx->pc = 0x3024ECu;
    {
        const bool branch_taken_0x3024ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3024ec) {
            ctx->pc = 0x3024F8u;
            goto label_3024f8;
        }
    }
    ctx->pc = 0x3024F4u;
label_3024f4:
    // 0x3024f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3024f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3024f8:
    // 0x3024f8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_3024fc:
    if (ctx->pc == 0x3024FCu) {
        ctx->pc = 0x302500u;
        goto label_302500;
    }
    ctx->pc = 0x3024F8u;
    {
        const bool branch_taken_0x3024f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3024f8) {
            ctx->pc = 0x302510u;
            goto label_302510;
        }
    }
    ctx->pc = 0x302500u;
label_302500:
    // 0x302500: 0x8ea40e34  lw          $a0, 0xE34($s5)
    ctx->pc = 0x302500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_302504:
    // 0x302504: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x302504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_302508:
    // 0x302508: 0x54830091  bnel        $a0, $v1, . + 4 + (0x91 << 2)
label_30250c:
    if (ctx->pc == 0x30250Cu) {
        ctx->pc = 0x30250Cu;
            // 0x30250c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x302510u;
        goto label_302510;
    }
    ctx->pc = 0x302508u;
    {
        const bool branch_taken_0x302508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x302508) {
            ctx->pc = 0x30250Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302508u;
            // 0x30250c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302750u;
            goto label_302750;
        }
    }
    ctx->pc = 0x302510u;
label_302510:
    // 0x302510: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x302510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_302514:
    // 0x302514: 0x8c760e80  lw          $s6, 0xE80($v1)
    ctx->pc = 0x302514u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_302518:
    // 0x302518: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x302518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30251c:
    // 0x30251c: 0x26d40498  addiu       $s4, $s6, 0x498
    ctx->pc = 0x30251cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1176));
label_302520:
    // 0x302520: 0x1280006f  beqz        $s4, . + 4 + (0x6F << 2)
label_302524:
    if (ctx->pc == 0x302524u) {
        ctx->pc = 0x302528u;
        goto label_302528;
    }
    ctx->pc = 0x302520u;
    {
        const bool branch_taken_0x302520 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x302520) {
            ctx->pc = 0x3026E0u;
            goto label_3026e0;
        }
    }
    ctx->pc = 0x302528u;
label_302528:
    // 0x302528: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x302528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_30252c:
    // 0x30252c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30252cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302530:
    // 0x302530: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x302530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_302534:
    // 0x302534: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x302534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_302538:
    // 0x302538: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x302538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_30253c:
    // 0x30253c: 0xc04c968  jal         func_1325A0
label_302540:
    if (ctx->pc == 0x302540u) {
        ctx->pc = 0x302540u;
            // 0x302540: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x302544u;
        goto label_302544;
    }
    ctx->pc = 0x30253Cu;
    SET_GPR_U32(ctx, 31, 0x302544u);
    ctx->pc = 0x302540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30253Cu;
            // 0x302540: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302544u; }
        if (ctx->pc != 0x302544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302544u; }
        if (ctx->pc != 0x302544u) { return; }
    }
    ctx->pc = 0x302544u;
label_302544:
    // 0x302544: 0xc04ab66  jal         func_12AD98
label_302548:
    if (ctx->pc == 0x302548u) {
        ctx->pc = 0x30254Cu;
        goto label_30254c;
    }
    ctx->pc = 0x302544u;
    SET_GPR_U32(ctx, 31, 0x30254Cu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30254Cu; }
        if (ctx->pc != 0x30254Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30254Cu; }
        if (ctx->pc != 0x30254Cu) { return; }
    }
    ctx->pc = 0x30254Cu;
label_30254c:
    // 0x30254c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x30254cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_302550:
    // 0x302550: 0xc04ab66  jal         func_12AD98
label_302554:
    if (ctx->pc == 0x302554u) {
        ctx->pc = 0x302554u;
            // 0x302554: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x302558u;
        goto label_302558;
    }
    ctx->pc = 0x302550u;
    SET_GPR_U32(ctx, 31, 0x302558u);
    ctx->pc = 0x302554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302550u;
            // 0x302554: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302558u; }
        if (ctx->pc != 0x302558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302558u; }
        if (ctx->pc != 0x302558u) { return; }
    }
    ctx->pc = 0x302558u;
label_302558:
    // 0x302558: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x302558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_30255c:
    // 0x30255c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x30255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_302560:
    // 0x302560: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x302560u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_302564:
    // 0x302564: 0x9010  mfhi        $s2
    ctx->pc = 0x302564u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_302568:
    // 0x302568: 0xc04ab66  jal         func_12AD98
label_30256c:
    if (ctx->pc == 0x30256Cu) {
        ctx->pc = 0x302570u;
        goto label_302570;
    }
    ctx->pc = 0x302568u;
    SET_GPR_U32(ctx, 31, 0x302570u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302570u; }
        if (ctx->pc != 0x302570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302570u; }
        if (ctx->pc != 0x302570u) { return; }
    }
    ctx->pc = 0x302570u;
label_302570:
    // 0x302570: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x302570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_302574:
    // 0x302574: 0xc04ab66  jal         func_12AD98
label_302578:
    if (ctx->pc == 0x302578u) {
        ctx->pc = 0x302578u;
            // 0x302578: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x30257Cu;
        goto label_30257c;
    }
    ctx->pc = 0x302574u;
    SET_GPR_U32(ctx, 31, 0x30257Cu);
    ctx->pc = 0x302578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302574u;
            // 0x302578: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30257Cu; }
        if (ctx->pc != 0x30257Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30257Cu; }
        if (ctx->pc != 0x30257Cu) { return; }
    }
    ctx->pc = 0x30257Cu;
label_30257c:
    // 0x30257c: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x30257cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_302580:
    // 0x302580: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x302580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_302584:
    // 0x302584: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x302584u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_302588:
    // 0x302588: 0x8810  mfhi        $s1
    ctx->pc = 0x302588u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_30258c:
    // 0x30258c: 0xc04ab66  jal         func_12AD98
label_302590:
    if (ctx->pc == 0x302590u) {
        ctx->pc = 0x302594u;
        goto label_302594;
    }
    ctx->pc = 0x30258Cu;
    SET_GPR_U32(ctx, 31, 0x302594u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302594u; }
        if (ctx->pc != 0x302594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302594u; }
        if (ctx->pc != 0x302594u) { return; }
    }
    ctx->pc = 0x302594u;
label_302594:
    // 0x302594: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x302594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_302598:
    // 0x302598: 0xc04ab66  jal         func_12AD98
label_30259c:
    if (ctx->pc == 0x30259Cu) {
        ctx->pc = 0x30259Cu;
            // 0x30259c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x3025A0u;
        goto label_3025a0;
    }
    ctx->pc = 0x302598u;
    SET_GPR_U32(ctx, 31, 0x3025A0u);
    ctx->pc = 0x30259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302598u;
            // 0x30259c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3025A0u; }
        if (ctx->pc != 0x3025A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3025A0u; }
        if (ctx->pc != 0x3025A0u) { return; }
    }
    ctx->pc = 0x3025A0u;
label_3025a0:
    // 0x3025a0: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x3025a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_3025a4:
    // 0x3025a4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3025a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_3025a8:
    // 0x3025a8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3025a8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_3025ac:
    // 0x3025ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3025acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3025b0:
    // 0x3025b0: 0x0  nop
    ctx->pc = 0x3025b0u;
    // NOP
label_3025b4:
    // 0x3025b4: 0x1810  mfhi        $v1
    ctx->pc = 0x3025b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3025b8:
    // 0x3025b8: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
label_3025bc:
    if (ctx->pc == 0x3025BCu) {
        ctx->pc = 0x3025C0u;
        goto label_3025c0;
    }
    ctx->pc = 0x3025B8u;
    {
        const bool branch_taken_0x3025b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3025b8) {
            ctx->pc = 0x3025E0u;
            goto label_3025e0;
        }
    }
    ctx->pc = 0x3025C0u;
label_3025c0:
    // 0x3025c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3025c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3025c4:
    // 0x3025c4: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_3025c8:
    if (ctx->pc == 0x3025C8u) {
        ctx->pc = 0x3025CCu;
        goto label_3025cc;
    }
    ctx->pc = 0x3025C4u;
    {
        const bool branch_taken_0x3025c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3025c4) {
            ctx->pc = 0x3025D8u;
            goto label_3025d8;
        }
    }
    ctx->pc = 0x3025CCu;
label_3025cc:
    // 0x3025cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_3025d0:
    if (ctx->pc == 0x3025D0u) {
        ctx->pc = 0x3025D4u;
        goto label_3025d4;
    }
    ctx->pc = 0x3025CCu;
    {
        const bool branch_taken_0x3025cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3025cc) {
            ctx->pc = 0x3025F0u;
            goto label_3025f0;
        }
    }
    ctx->pc = 0x3025D4u;
label_3025d4:
    // 0x3025d4: 0x0  nop
    ctx->pc = 0x3025d4u;
    // NOP
label_3025d8:
    // 0x3025d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3025dc:
    if (ctx->pc == 0x3025DCu) {
        ctx->pc = 0x3025DCu;
            // 0x3025dc: 0x2652005a  addiu       $s2, $s2, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 90));
        ctx->pc = 0x3025E0u;
        goto label_3025e0;
    }
    ctx->pc = 0x3025D8u;
    {
        const bool branch_taken_0x3025d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3025DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3025D8u;
            // 0x3025dc: 0x2652005a  addiu       $s2, $s2, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3025d8) {
            ctx->pc = 0x3025F0u;
            goto label_3025f0;
        }
    }
    ctx->pc = 0x3025E0u;
label_3025e0:
    // 0x3025e0: 0x2652ffd3  addiu       $s2, $s2, -0x2D
    ctx->pc = 0x3025e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967251));
label_3025e4:
    // 0x3025e4: 0x2631001e  addiu       $s1, $s1, 0x1E
    ctx->pc = 0x3025e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30));
label_3025e8:
    // 0x3025e8: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x3025e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
label_3025ec:
    // 0x3025ec: 0x0  nop
    ctx->pc = 0x3025ecu;
    // NOP
label_3025f0:
    // 0x3025f0: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3025f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3025f4:
    // 0x3025f4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x3025f4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3025f8:
    // 0x3025f8: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3025f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3025fc:
    // 0x3025fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3025fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_302600:
    // 0x302600: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x302600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_302604:
    // 0x302604: 0x0  nop
    ctx->pc = 0x302604u;
    // NOP
label_302608:
    // 0x302608: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x302608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_30260c:
    // 0x30260c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30260cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_302610:
    // 0x302610: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x302610u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_302614:
    // 0x302614: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x302614u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_302618:
    // 0x302618: 0x0  nop
    ctx->pc = 0x302618u;
    // NOP
label_30261c:
    // 0x30261c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30261cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_302620:
    // 0x302620: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x302620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_302624:
    // 0x302624: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x302624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_302628:
    // 0x302628: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x302628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_30262c:
    // 0x30262c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30262cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_302630:
    // 0x302630: 0x0  nop
    ctx->pc = 0x302630u;
    // NOP
label_302634:
    // 0x302634: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x302634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_302638:
    // 0x302638: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x302638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_30263c:
    // 0x30263c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30263cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_302640:
    // 0x302640: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x302640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_302644:
    // 0x302644: 0xc04ca18  jal         func_132860
label_302648:
    if (ctx->pc == 0x302648u) {
        ctx->pc = 0x302648u;
            // 0x302648: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x30264Cu;
        goto label_30264c;
    }
    ctx->pc = 0x302644u;
    SET_GPR_U32(ctx, 31, 0x30264Cu);
    ctx->pc = 0x302648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302644u;
            // 0x302648: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30264Cu; }
        if (ctx->pc != 0x30264Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30264Cu; }
        if (ctx->pc != 0x30264Cu) { return; }
    }
    ctx->pc = 0x30264Cu;
label_30264c:
    // 0x30264c: 0xc040180  jal         func_100600
label_302650:
    if (ctx->pc == 0x302650u) {
        ctx->pc = 0x302650u;
            // 0x302650: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x302654u;
        goto label_302654;
    }
    ctx->pc = 0x30264Cu;
    SET_GPR_U32(ctx, 31, 0x302654u);
    ctx->pc = 0x302650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30264Cu;
            // 0x302650: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302654u; }
        if (ctx->pc != 0x302654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302654u; }
        if (ctx->pc != 0x302654u) { return; }
    }
    ctx->pc = 0x302654u;
label_302654:
    // 0x302654: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_302658:
    if (ctx->pc == 0x302658u) {
        ctx->pc = 0x302658u;
            // 0x302658: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30265Cu;
        goto label_30265c;
    }
    ctx->pc = 0x302654u;
    {
        const bool branch_taken_0x302654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302654u;
            // 0x302658: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302654) {
            ctx->pc = 0x3026C8u;
            goto label_3026c8;
        }
    }
    ctx->pc = 0x30265Cu;
label_30265c:
    // 0x30265c: 0x8eb00d98  lw          $s0, 0xD98($s5)
    ctx->pc = 0x30265cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_302660:
    // 0x302660: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x302660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_302664:
    // 0x302664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302668:
    // 0x302668: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x302668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_30266c:
    // 0x30266c: 0x3445ac00  ori         $a1, $v0, 0xAC00
    ctx->pc = 0x30266cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44032);
label_302670:
    // 0x302670: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x302670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302674:
    // 0x302674: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x302674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_302678:
    // 0x302678: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x302678u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30267c:
    // 0x30267c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x30267cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302680:
    // 0x302680: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x302680u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302684:
    // 0x302684: 0xc0b9404  jal         func_2E5010
label_302688:
    if (ctx->pc == 0x302688u) {
        ctx->pc = 0x302688u;
            // 0x302688: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x30268Cu;
        goto label_30268c;
    }
    ctx->pc = 0x302684u;
    SET_GPR_U32(ctx, 31, 0x30268Cu);
    ctx->pc = 0x302688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302684u;
            // 0x302688: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30268Cu; }
        if (ctx->pc != 0x30268Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30268Cu; }
        if (ctx->pc != 0x30268Cu) { return; }
    }
    ctx->pc = 0x30268Cu;
label_30268c:
    // 0x30268c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x30268cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_302690:
    // 0x302690: 0x24635530  addiu       $v1, $v1, 0x5530
    ctx->pc = 0x302690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21808));
label_302694:
    // 0x302694: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x302694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_302698:
    // 0x302698: 0xae3000d0  sw          $s0, 0xD0($s1)
    ctx->pc = 0x302698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 16));
label_30269c:
    // 0x30269c: 0xae3000d4  sw          $s0, 0xD4($s1)
    ctx->pc = 0x30269cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
label_3026a0:
    // 0x3026a0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3026a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3026a4:
    // 0x3026a4: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3026a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3026a8:
    // 0x3026a8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x3026a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3026ac:
    // 0x3026ac: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x3026acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3026b0:
    // 0x3026b0: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x3026b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3026b4:
    // 0x3026b4: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x3026b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
label_3026b8:
    // 0x3026b8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x3026b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3026bc:
    // 0x3026bc: 0xe62200dc  swc1        $f2, 0xDC($s1)
    ctx->pc = 0x3026bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
label_3026c0:
    // 0x3026c0: 0xe62100e0  swc1        $f1, 0xE0($s1)
    ctx->pc = 0x3026c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_3026c4:
    // 0x3026c4: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x3026c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_3026c8:
    // 0x3026c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3026c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3026cc:
    // 0x3026cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3026ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3026d0:
    // 0x3026d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3026d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3026d4:
    // 0x3026d4: 0x2e630007  sltiu       $v1, $s3, 0x7
    ctx->pc = 0x3026d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_3026d8:
    // 0x3026d8: 0x1460ff98  bnez        $v1, . + 4 + (-0x68 << 2)
label_3026dc:
    if (ctx->pc == 0x3026DCu) {
        ctx->pc = 0x3026DCu;
            // 0x3026dc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x3026E0u;
        goto label_3026e0;
    }
    ctx->pc = 0x3026D8u;
    {
        const bool branch_taken_0x3026d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3026DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3026D8u;
            // 0x3026dc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3026d8) {
            ctx->pc = 0x30253Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30253c;
        }
    }
    ctx->pc = 0x3026E0u;
label_3026e0:
    // 0x3026e0: 0x26d20478  addiu       $s2, $s6, 0x478
    ctx->pc = 0x3026e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 1144));
label_3026e4:
    // 0x3026e4: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
label_3026e8:
    if (ctx->pc == 0x3026E8u) {
        ctx->pc = 0x3026ECu;
        goto label_3026ec;
    }
    ctx->pc = 0x3026E4u;
    {
        const bool branch_taken_0x3026e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3026e4) {
            ctx->pc = 0x30274Cu;
            goto label_30274c;
        }
    }
    ctx->pc = 0x3026ECu;
label_3026ec:
    // 0x3026ec: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3026ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3026f0:
    // 0x3026f0: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x3026f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_3026f4:
    // 0x3026f4: 0xc040180  jal         func_100600
label_3026f8:
    if (ctx->pc == 0x3026F8u) {
        ctx->pc = 0x3026F8u;
            // 0x3026f8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x3026FCu;
        goto label_3026fc;
    }
    ctx->pc = 0x3026F4u;
    SET_GPR_U32(ctx, 31, 0x3026FCu);
    ctx->pc = 0x3026F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3026F4u;
            // 0x3026f8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3026FCu; }
        if (ctx->pc != 0x3026FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3026FCu; }
        if (ctx->pc != 0x3026FCu) { return; }
    }
    ctx->pc = 0x3026FCu;
label_3026fc:
    // 0x3026fc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_302700:
    if (ctx->pc == 0x302700u) {
        ctx->pc = 0x302700u;
            // 0x302700: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302704u;
        goto label_302704;
    }
    ctx->pc = 0x3026FCu;
    {
        const bool branch_taken_0x3026fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3026FCu;
            // 0x302700: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3026fc) {
            ctx->pc = 0x30274Cu;
            goto label_30274c;
        }
    }
    ctx->pc = 0x302704u;
label_302704:
    // 0x302704: 0x8eb10d98  lw          $s1, 0xD98($s5)
    ctx->pc = 0x302704u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_302708:
    // 0x302708: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x302708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_30270c:
    // 0x30270c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30270cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_302710:
    // 0x302710: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x302710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_302714:
    // 0x302714: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x302714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_302718:
    // 0x302718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30271c:
    // 0x30271c: 0x3445abf6  ori         $a1, $v0, 0xABF6
    ctx->pc = 0x30271cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44022);
label_302720:
    // 0x302720: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x302720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_302724:
    // 0x302724: 0x24080829  addiu       $t0, $zero, 0x829
    ctx->pc = 0x302724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2089));
label_302728:
    // 0x302728: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x302728u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30272c:
    // 0x30272c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x30272cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302730:
    // 0x302730: 0xc0b9404  jal         func_2E5010
label_302734:
    if (ctx->pc == 0x302734u) {
        ctx->pc = 0x302734u;
            // 0x302734: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302738u;
        goto label_302738;
    }
    ctx->pc = 0x302730u;
    SET_GPR_U32(ctx, 31, 0x302738u);
    ctx->pc = 0x302734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302730u;
            // 0x302734: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302738u; }
        if (ctx->pc != 0x302738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302738u; }
        if (ctx->pc != 0x302738u) { return; }
    }
    ctx->pc = 0x302738u;
label_302738:
    // 0x302738: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x302738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_30273c:
    // 0x30273c: 0x24635500  addiu       $v1, $v1, 0x5500
    ctx->pc = 0x30273cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21760));
label_302740:
    // 0x302740: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x302740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_302744:
    // 0x302744: 0xae1100d0  sw          $s1, 0xD0($s0)
    ctx->pc = 0x302744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 17));
label_302748:
    // 0x302748: 0xae1100d4  sw          $s1, 0xD4($s0)
    ctx->pc = 0x302748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 17));
label_30274c:
    // 0x30274c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x30274cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_302750:
    // 0x302750: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x302750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_302754:
    // 0x302754: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x302754u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_302758:
    // 0x302758: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x302758u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30275c:
    // 0x30275c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30275cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_302760:
    // 0x302760: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x302760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_302764:
    // 0x302764: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x302764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_302768:
    // 0x302768: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x302768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30276c:
    // 0x30276c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30276cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_302770:
    // 0x302770: 0x3e00008  jr          $ra
label_302774:
    if (ctx->pc == 0x302774u) {
        ctx->pc = 0x302774u;
            // 0x302774: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x302778u;
        goto label_302778;
    }
    ctx->pc = 0x302770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302770u;
            // 0x302774: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302778u;
label_302778:
    // 0x302778: 0x0  nop
    ctx->pc = 0x302778u;
    // NOP
label_30277c:
    // 0x30277c: 0x0  nop
    ctx->pc = 0x30277cu;
    // NOP
label_302780:
    // 0x302780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_302784:
    // 0x302784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x302784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_302788:
    // 0x302788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30278c:
    // 0x30278c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30278cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_302790:
    // 0x302790: 0xc142c44  jal         func_50B110
label_302794:
    if (ctx->pc == 0x302794u) {
        ctx->pc = 0x302794u;
            // 0x302794: 0x26040940  addiu       $a0, $s0, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2368));
        ctx->pc = 0x302798u;
        goto label_302798;
    }
    ctx->pc = 0x302790u;
    SET_GPR_U32(ctx, 31, 0x302798u);
    ctx->pc = 0x302794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302790u;
            // 0x302794: 0x26040940  addiu       $a0, $s0, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50B110u;
    if (runtime->hasFunction(0x50B110u)) {
        auto targetFn = runtime->lookupFunction(0x50B110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302798u; }
        if (ctx->pc != 0x302798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050B110_0x50b110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302798u; }
        if (ctx->pc != 0x302798u) { return; }
    }
    ctx->pc = 0x302798u;
label_302798:
    // 0x302798: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x302798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_30279c:
    // 0x30279c: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x30279cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_3027a0:
    // 0x3027a0: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_3027a4:
    if (ctx->pc == 0x3027A4u) {
        ctx->pc = 0x3027A4u;
            // 0x3027a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3027A8u;
        goto label_3027a8;
    }
    ctx->pc = 0x3027A0u;
    {
        const bool branch_taken_0x3027a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3027a0) {
            ctx->pc = 0x3027A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3027A0u;
            // 0x3027a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3027C4u;
            goto label_3027c4;
        }
    }
    ctx->pc = 0x3027A8u;
label_3027a8:
    // 0x3027a8: 0xc0c0fa4  jal         func_303E90
label_3027ac:
    if (ctx->pc == 0x3027ACu) {
        ctx->pc = 0x3027ACu;
            // 0x3027ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3027B0u;
        goto label_3027b0;
    }
    ctx->pc = 0x3027A8u;
    SET_GPR_U32(ctx, 31, 0x3027B0u);
    ctx->pc = 0x3027ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3027A8u;
            // 0x3027ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E90u;
    if (runtime->hasFunction(0x303E90u)) {
        auto targetFn = runtime->lookupFunction(0x303E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3027B0u; }
        if (ctx->pc != 0x3027B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E90_0x303e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3027B0u; }
        if (ctx->pc != 0x3027B0u) { return; }
    }
    ctx->pc = 0x3027B0u;
label_3027b0:
    // 0x3027b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3027b4:
    if (ctx->pc == 0x3027B4u) {
        ctx->pc = 0x3027B8u;
        goto label_3027b8;
    }
    ctx->pc = 0x3027B0u;
    {
        const bool branch_taken_0x3027b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3027b0) {
            ctx->pc = 0x3027C0u;
            goto label_3027c0;
        }
    }
    ctx->pc = 0x3027B8u;
label_3027b8:
    // 0x3027b8: 0xc142b90  jal         func_50AE40
label_3027bc:
    if (ctx->pc == 0x3027BCu) {
        ctx->pc = 0x3027BCu;
            // 0x3027bc: 0x26040940  addiu       $a0, $s0, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2368));
        ctx->pc = 0x3027C0u;
        goto label_3027c0;
    }
    ctx->pc = 0x3027B8u;
    SET_GPR_U32(ctx, 31, 0x3027C0u);
    ctx->pc = 0x3027BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3027B8u;
            // 0x3027bc: 0x26040940  addiu       $a0, $s0, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50AE40u;
    if (runtime->hasFunction(0x50AE40u)) {
        auto targetFn = runtime->lookupFunction(0x50AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3027C0u; }
        if (ctx->pc != 0x3027C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050AE40_0x50ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3027C0u; }
        if (ctx->pc != 0x3027C0u) { return; }
    }
    ctx->pc = 0x3027C0u;
label_3027c0:
    // 0x3027c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3027c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3027c4:
    // 0x3027c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3027c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3027c8:
    // 0x3027c8: 0x3e00008  jr          $ra
label_3027cc:
    if (ctx->pc == 0x3027CCu) {
        ctx->pc = 0x3027CCu;
            // 0x3027cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3027D0u;
        goto label_3027d0;
    }
    ctx->pc = 0x3027C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3027CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3027C8u;
            // 0x3027cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3027D0u;
label_3027d0:
    // 0x3027d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3027d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3027d4:
    // 0x3027d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3027d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3027d8:
    // 0x3027d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3027d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3027dc:
    // 0x3027dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3027dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3027e0:
    // 0x3027e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3027e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3027e4:
    // 0x3027e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3027e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3027e8:
    // 0x3027e8: 0x26720580  addiu       $s2, $s3, 0x580
    ctx->pc = 0x3027e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
label_3027ec:
    // 0x3027ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3027ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3027f0:
    // 0x3027f0: 0x26710560  addiu       $s1, $s3, 0x560
    ctx->pc = 0x3027f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_3027f4:
    // 0x3027f4: 0x8c900d74  lw          $s0, 0xD74($a0)
    ctx->pc = 0x3027f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
label_3027f8:
    // 0x3027f8: 0xc0754b4  jal         func_1D52D0
label_3027fc:
    if (ctx->pc == 0x3027FCu) {
        ctx->pc = 0x3027FCu;
            // 0x3027fc: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->pc = 0x302800u;
        goto label_302800;
    }
    ctx->pc = 0x3027F8u;
    SET_GPR_U32(ctx, 31, 0x302800u);
    ctx->pc = 0x3027FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3027F8u;
            // 0x3027fc: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302800u; }
        if (ctx->pc != 0x302800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302800u; }
        if (ctx->pc != 0x302800u) { return; }
    }
    ctx->pc = 0x302800u;
label_302800:
    // 0x302800: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x302800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_302804:
    // 0x302804: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x302804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_302808:
    // 0x302808: 0xae650dbc  sw          $a1, 0xDBC($s3)
    ctx->pc = 0x302808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3516), GPR_U32(ctx, 5));
label_30280c:
    // 0x30280c: 0xc460c6b8  lwc1        $f0, -0x3948($v1)
    ctx->pc = 0x30280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_302810:
    // 0x302810: 0xae650694  sw          $a1, 0x694($s3)
    ctx->pc = 0x302810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 5));
label_302814:
    // 0x302814: 0x8e640550  lw          $a0, 0x550($s3)
    ctx->pc = 0x302814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1360)));
label_302818:
    // 0x302818: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x302818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_30281c:
    // 0x30281c: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x30281cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
label_302820:
    // 0x302820: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x302820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_302824:
    // 0x302824: 0xe6610de0  swc1        $f1, 0xDE0($s3)
    ctx->pc = 0x302824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3552), bits); }
label_302828:
    // 0x302828: 0xe6600ddc  swc1        $f0, 0xDDC($s3)
    ctx->pc = 0x302828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3548), bits); }
label_30282c:
    // 0x30282c: 0xae600de8  sw          $zero, 0xDE8($s3)
    ctx->pc = 0x30282cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3560), GPR_U32(ctx, 0));
label_302830:
    // 0x302830: 0xae600dc4  sw          $zero, 0xDC4($s3)
    ctx->pc = 0x302830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3524), GPR_U32(ctx, 0));
label_302834:
    // 0x302834: 0xae600dc0  sw          $zero, 0xDC0($s3)
    ctx->pc = 0x302834u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3520), GPR_U32(ctx, 0));
label_302838:
    // 0x302838: 0xae600dc8  sw          $zero, 0xDC8($s3)
    ctx->pc = 0x302838u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3528), GPR_U32(ctx, 0));
label_30283c:
    // 0x30283c: 0x920202c5  lbu         $v0, 0x2C5($s0)
    ctx->pc = 0x30283cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 709)));
label_302840:
    // 0x302840: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x302840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_302844:
    // 0x302844: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x302844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_302848:
    // 0x302848: 0x90420284  lbu         $v0, 0x284($v0)
    ctx->pc = 0x302848u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 644)));
label_30284c:
    // 0x30284c: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_302850:
    if (ctx->pc == 0x302850u) {
        ctx->pc = 0x302850u;
            // 0x302850: 0xae400118  sw          $zero, 0x118($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
        ctx->pc = 0x302854u;
        goto label_302854;
    }
    ctx->pc = 0x30284Cu;
    {
        const bool branch_taken_0x30284c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30284c) {
            ctx->pc = 0x302850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30284Cu;
            // 0x302850: 0xae400118  sw          $zero, 0x118($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302860u;
            goto label_302860;
        }
    }
    ctx->pc = 0x302854u;
label_302854:
    // 0x302854: 0xc0ab5bc  jal         func_2AD6F0
label_302858:
    if (ctx->pc == 0x302858u) {
        ctx->pc = 0x302858u;
            // 0x302858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30285Cu;
        goto label_30285c;
    }
    ctx->pc = 0x302854u;
    SET_GPR_U32(ctx, 31, 0x30285Cu);
    ctx->pc = 0x302858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302854u;
            // 0x302858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD6F0u;
    if (runtime->hasFunction(0x2AD6F0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30285Cu; }
        if (ctx->pc != 0x30285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD6F0_0x2ad6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30285Cu; }
        if (ctx->pc != 0x30285Cu) { return; }
    }
    ctx->pc = 0x30285Cu;
label_30285c:
    // 0x30285c: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x30285cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
label_302860:
    // 0x302860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_302864:
    // 0x302864: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x302864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302868:
    // 0x302868: 0xc077fb0  jal         func_1DFEC0
label_30286c:
    if (ctx->pc == 0x30286Cu) {
        ctx->pc = 0x30286Cu;
            // 0x30286c: 0xae40010c  sw          $zero, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x302870u;
        goto label_302870;
    }
    ctx->pc = 0x302868u;
    SET_GPR_U32(ctx, 31, 0x302870u);
    ctx->pc = 0x30286Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302868u;
            // 0x30286c: 0xae40010c  sw          $zero, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302870u; }
        if (ctx->pc != 0x302870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302870u; }
        if (ctx->pc != 0x302870u) { return; }
    }
    ctx->pc = 0x302870u;
label_302870:
    // 0x302870: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x302870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_302874:
    // 0x302874: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x302874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_302878:
    // 0x302878: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x302878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30287c:
    // 0x30287c: 0xae0202b0  sw          $v0, 0x2B0($s0)
    ctx->pc = 0x30287cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
label_302880:
    // 0x302880: 0x266402e0  addiu       $a0, $s3, 0x2E0
    ctx->pc = 0x302880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
label_302884:
    // 0x302884: 0xc04cca0  jal         func_133280
label_302888:
    if (ctx->pc == 0x302888u) {
        ctx->pc = 0x302888u;
            // 0x302888: 0x24c62700  addiu       $a2, $a2, 0x2700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9984));
        ctx->pc = 0x30288Cu;
        goto label_30288c;
    }
    ctx->pc = 0x302884u;
    SET_GPR_U32(ctx, 31, 0x30288Cu);
    ctx->pc = 0x302888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302884u;
            // 0x302888: 0x24c62700  addiu       $a2, $a2, 0x2700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30288Cu; }
        if (ctx->pc != 0x30288Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30288Cu; }
        if (ctx->pc != 0x30288Cu) { return; }
    }
    ctx->pc = 0x30288Cu;
label_30288c:
    // 0x30288c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30288cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302890:
    // 0x302890: 0xc075318  jal         func_1D4C60
label_302894:
    if (ctx->pc == 0x302894u) {
        ctx->pc = 0x302894u;
            // 0x302894: 0x266502e0  addiu       $a1, $s3, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
        ctx->pc = 0x302898u;
        goto label_302898;
    }
    ctx->pc = 0x302890u;
    SET_GPR_U32(ctx, 31, 0x302898u);
    ctx->pc = 0x302894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302890u;
            // 0x302894: 0x266502e0  addiu       $a1, $s3, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302898u; }
        if (ctx->pc != 0x302898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302898u; }
        if (ctx->pc != 0x302898u) { return; }
    }
    ctx->pc = 0x302898u;
label_302898:
    // 0x302898: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x302898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30289c:
    // 0x30289c: 0x26640840  addiu       $a0, $s3, 0x840
    ctx->pc = 0x30289cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
label_3028a0:
    // 0x3028a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3028a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3028a4:
    // 0x3028a4: 0xc0c6250  jal         func_318940
label_3028a8:
    if (ctx->pc == 0x3028A8u) {
        ctx->pc = 0x3028A8u;
            // 0x3028a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3028ACu;
        goto label_3028ac;
    }
    ctx->pc = 0x3028A4u;
    SET_GPR_U32(ctx, 31, 0x3028ACu);
    ctx->pc = 0x3028A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3028A4u;
            // 0x3028a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028ACu; }
        if (ctx->pc != 0x3028ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028ACu; }
        if (ctx->pc != 0x3028ACu) { return; }
    }
    ctx->pc = 0x3028ACu;
label_3028ac:
    // 0x3028ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3028acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3028b0:
    // 0x3028b0: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x3028b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
label_3028b4:
    // 0x3028b4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3028b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3028b8:
    // 0x3028b8: 0xc04cbd8  jal         func_132F60
label_3028bc:
    if (ctx->pc == 0x3028BCu) {
        ctx->pc = 0x3028BCu;
            // 0x3028bc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3028C0u;
        goto label_3028c0;
    }
    ctx->pc = 0x3028B8u;
    SET_GPR_U32(ctx, 31, 0x3028C0u);
    ctx->pc = 0x3028BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3028B8u;
            // 0x3028bc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028C0u; }
        if (ctx->pc != 0x3028C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028C0u; }
        if (ctx->pc != 0x3028C0u) { return; }
    }
    ctx->pc = 0x3028C0u;
label_3028c0:
    // 0x3028c0: 0x26700ab0  addiu       $s0, $s3, 0xAB0
    ctx->pc = 0x3028c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2736));
label_3028c4:
    // 0x3028c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3028c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3028c8:
    // 0x3028c8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x3028c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_3028cc:
    // 0x3028cc: 0xc04a576  jal         func_1295D8
label_3028d0:
    if (ctx->pc == 0x3028D0u) {
        ctx->pc = 0x3028D0u;
            // 0x3028d0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3028D4u;
        goto label_3028d4;
    }
    ctx->pc = 0x3028CCu;
    SET_GPR_U32(ctx, 31, 0x3028D4u);
    ctx->pc = 0x3028D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3028CCu;
            // 0x3028d0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028D4u; }
        if (ctx->pc != 0x3028D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028D4u; }
        if (ctx->pc != 0x3028D4u) { return; }
    }
    ctx->pc = 0x3028D4u;
label_3028d4:
    // 0x3028d4: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x3028d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_3028d8:
    // 0x3028d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3028d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3028dc:
    // 0x3028dc: 0xc04a576  jal         func_1295D8
label_3028e0:
    if (ctx->pc == 0x3028E0u) {
        ctx->pc = 0x3028E0u;
            // 0x3028e0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3028E4u;
        goto label_3028e4;
    }
    ctx->pc = 0x3028DCu;
    SET_GPR_U32(ctx, 31, 0x3028E4u);
    ctx->pc = 0x3028E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3028DCu;
            // 0x3028e0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028E4u; }
        if (ctx->pc != 0x3028E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028E4u; }
        if (ctx->pc != 0x3028E4u) { return; }
    }
    ctx->pc = 0x3028E4u;
label_3028e4:
    // 0x3028e4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x3028e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_3028e8:
    // 0x3028e8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x3028e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_3028ec:
    // 0x3028ec: 0xc04cc04  jal         func_133010
label_3028f0:
    if (ctx->pc == 0x3028F0u) {
        ctx->pc = 0x3028F0u;
            // 0x3028f0: 0x24a52710  addiu       $a1, $a1, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10000));
        ctx->pc = 0x3028F4u;
        goto label_3028f4;
    }
    ctx->pc = 0x3028ECu;
    SET_GPR_U32(ctx, 31, 0x3028F4u);
    ctx->pc = 0x3028F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3028ECu;
            // 0x3028f0: 0x24a52710  addiu       $a1, $a1, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028F4u; }
        if (ctx->pc != 0x3028F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028F4u; }
        if (ctx->pc != 0x3028F4u) { return; }
    }
    ctx->pc = 0x3028F4u;
label_3028f4:
    // 0x3028f4: 0xc142c74  jal         func_50B1D0
label_3028f8:
    if (ctx->pc == 0x3028F8u) {
        ctx->pc = 0x3028F8u;
            // 0x3028f8: 0x26640940  addiu       $a0, $s3, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
        ctx->pc = 0x3028FCu;
        goto label_3028fc;
    }
    ctx->pc = 0x3028F4u;
    SET_GPR_U32(ctx, 31, 0x3028FCu);
    ctx->pc = 0x3028F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3028F4u;
            // 0x3028f8: 0x26640940  addiu       $a0, $s3, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50B1D0u;
    if (runtime->hasFunction(0x50B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x50B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028FCu; }
        if (ctx->pc != 0x3028FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050B1D0_0x50b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028FCu; }
        if (ctx->pc != 0x3028FCu) { return; }
    }
    ctx->pc = 0x3028FCu;
label_3028fc:
    // 0x3028fc: 0x26641150  addiu       $a0, $s3, 0x1150
    ctx->pc = 0x3028fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4432));
label_302900:
    // 0x302900: 0xc12ca3c  jal         func_4B28F0
label_302904:
    if (ctx->pc == 0x302904u) {
        ctx->pc = 0x302904u;
            // 0x302904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302908u;
        goto label_302908;
    }
    ctx->pc = 0x302900u;
    SET_GPR_U32(ctx, 31, 0x302908u);
    ctx->pc = 0x302904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302900u;
            // 0x302904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302908u; }
        if (ctx->pc != 0x302908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302908u; }
        if (ctx->pc != 0x302908u) { return; }
    }
    ctx->pc = 0x302908u;
label_302908:
    // 0x302908: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x302908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30290c:
    // 0x30290c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x30290cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_302910:
    // 0x302910: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x302910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_302914:
    // 0x302914: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x302914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_302918:
    // 0x302918: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_30291c:
    if (ctx->pc == 0x30291Cu) {
        ctx->pc = 0x30291Cu;
            // 0x30291c: 0x8e6309e0  lw          $v1, 0x9E0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2528)));
        ctx->pc = 0x302920u;
        goto label_302920;
    }
    ctx->pc = 0x302918u;
    {
        const bool branch_taken_0x302918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x302918) {
            ctx->pc = 0x30291Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302918u;
            // 0x30291c: 0x8e6309e0  lw          $v1, 0x9E0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2528)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30293Cu;
            goto label_30293c;
        }
    }
    ctx->pc = 0x302920u;
label_302920:
    // 0x302920: 0x8e640d60  lw          $a0, 0xD60($s3)
    ctx->pc = 0x302920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
label_302924:
    // 0x302924: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x302924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_302928:
    // 0x302928: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x302928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_30292c:
    // 0x30292c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x30292cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_302930:
    // 0x302930: 0x320f809  jalr        $t9
label_302934:
    if (ctx->pc == 0x302934u) {
        ctx->pc = 0x302934u;
            // 0x302934: 0x344513a9  ori         $a1, $v0, 0x13A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5033);
        ctx->pc = 0x302938u;
        goto label_302938;
    }
    ctx->pc = 0x302930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302938u);
        ctx->pc = 0x302934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302930u;
            // 0x302934: 0x344513a9  ori         $a1, $v0, 0x13A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5033);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302938u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302938u; }
            if (ctx->pc != 0x302938u) { return; }
        }
        }
    }
    ctx->pc = 0x302938u;
label_302938:
    // 0x302938: 0x8e6309e0  lw          $v1, 0x9E0($s3)
    ctx->pc = 0x302938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2528)));
label_30293c:
    // 0x30293c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x30293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_302940:
    // 0x302940: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_302944:
    if (ctx->pc == 0x302944u) {
        ctx->pc = 0x302944u;
            // 0x302944: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302948u;
        goto label_302948;
    }
    ctx->pc = 0x302940u;
    {
        const bool branch_taken_0x302940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x302940) {
            ctx->pc = 0x302944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302940u;
            // 0x302944: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302974u;
            goto label_302974;
        }
    }
    ctx->pc = 0x302948u;
label_302948:
    // 0x302948: 0xc0c0924  jal         func_302490
label_30294c:
    if (ctx->pc == 0x30294Cu) {
        ctx->pc = 0x30294Cu;
            // 0x30294c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302950u;
        goto label_302950;
    }
    ctx->pc = 0x302948u;
    SET_GPR_U32(ctx, 31, 0x302950u);
    ctx->pc = 0x30294Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302948u;
            // 0x30294c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302490u;
    goto label_302490;
    ctx->pc = 0x302950u;
label_302950:
    // 0x302950: 0x8e640d60  lw          $a0, 0xD60($s3)
    ctx->pc = 0x302950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
label_302954:
    // 0x302954: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x302954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
label_302958:
    // 0x302958: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x302958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_30295c:
    // 0x30295c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x30295cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_302960:
    // 0x302960: 0x320f809  jalr        $t9
label_302964:
    if (ctx->pc == 0x302964u) {
        ctx->pc = 0x302964u;
            // 0x302964: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x302968u;
        goto label_302968;
    }
    ctx->pc = 0x302960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302968u);
        ctx->pc = 0x302964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302960u;
            // 0x302964: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302968u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302968u; }
            if (ctx->pc != 0x302968u) { return; }
        }
        }
    }
    ctx->pc = 0x302968u;
label_302968:
    // 0x302968: 0xae6011e8  sw          $zero, 0x11E8($s3)
    ctx->pc = 0x302968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4584), GPR_U32(ctx, 0));
label_30296c:
    // 0x30296c: 0xa26011ec  sb          $zero, 0x11EC($s3)
    ctx->pc = 0x30296cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4588), (uint8_t)GPR_U32(ctx, 0));
label_302970:
    // 0x302970: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_302974:
    // 0x302974: 0xc0c0f84  jal         func_303E10
label_302978:
    if (ctx->pc == 0x302978u) {
        ctx->pc = 0x30297Cu;
        goto label_30297c;
    }
    ctx->pc = 0x302974u;
    SET_GPR_U32(ctx, 31, 0x30297Cu);
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30297Cu; }
        if (ctx->pc != 0x30297Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30297Cu; }
        if (ctx->pc != 0x30297Cu) { return; }
    }
    ctx->pc = 0x30297Cu;
label_30297c:
    // 0x30297c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30297cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_302980:
    // 0x302980: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x302980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_302984:
    // 0x302984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x302984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_302988:
    // 0x302988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30298c:
    // 0x30298c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30298cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302990:
    // 0x302990: 0x3e00008  jr          $ra
label_302994:
    if (ctx->pc == 0x302994u) {
        ctx->pc = 0x302994u;
            // 0x302994: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x302998u;
        goto label_302998;
    }
    ctx->pc = 0x302990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302990u;
            // 0x302994: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302998u;
label_302998:
    // 0x302998: 0x0  nop
    ctx->pc = 0x302998u;
    // NOP
label_30299c:
    // 0x30299c: 0x0  nop
    ctx->pc = 0x30299cu;
    // NOP
label_3029a0:
    // 0x3029a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3029a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3029a4:
    // 0x3029a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3029a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3029a8:
    // 0x3029a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3029a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3029ac:
    // 0x3029ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3029acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3029b0:
    // 0x3029b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3029b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3029b4:
    // 0x3029b4: 0x3c023dbd  lui         $v0, 0x3DBD
    ctx->pc = 0x3029b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15805 << 16));
label_3029b8:
    // 0x3029b8: 0x8c850d60  lw          $a1, 0xD60($a0)
    ctx->pc = 0x3029b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_3029bc:
    // 0x3029bc: 0x3443a12f  ori         $v1, $v0, 0xA12F
    ctx->pc = 0x3029bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_3029c0:
    // 0x3029c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3029c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3029c4:
    // 0x3029c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3029c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3029c8:
    // 0x3029c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3029c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3029cc:
    // 0x3029cc: 0x80a50005  lb          $a1, 0x5($a1)
    ctx->pc = 0x3029ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_3029d0:
    // 0x3029d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3029d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3029d4:
    // 0x3029d4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3029d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3029d8:
    // 0x3029d8: 0x0  nop
    ctx->pc = 0x3029d8u;
    // NOP
label_3029dc:
    // 0x3029dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3029dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3029e0:
    // 0x3029e0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3029e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3029e4:
    // 0x3029e4: 0x0  nop
    ctx->pc = 0x3029e4u;
    // NOP
label_3029e8:
    // 0x3029e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3029e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3029ec:
    // 0x3029ec: 0xc0c1054  jal         func_304150
label_3029f0:
    if (ctx->pc == 0x3029F0u) {
        ctx->pc = 0x3029F0u;
            // 0x3029f0: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->pc = 0x3029F4u;
        goto label_3029f4;
    }
    ctx->pc = 0x3029ECu;
    SET_GPR_U32(ctx, 31, 0x3029F4u);
    ctx->pc = 0x3029F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3029ECu;
            // 0x3029f0: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x304150u;
    if (runtime->hasFunction(0x304150u)) {
        auto targetFn = runtime->lookupFunction(0x304150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3029F4u; }
        if (ctx->pc != 0x3029F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304150_0x304150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3029F4u; }
        if (ctx->pc != 0x3029F4u) { return; }
    }
    ctx->pc = 0x3029F4u;
label_3029f4:
    // 0x3029f4: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x3029f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_3029f8:
    // 0x3029f8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3029f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3029fc:
    // 0x3029fc: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_302a00:
    if (ctx->pc == 0x302A00u) {
        ctx->pc = 0x302A00u;
            // 0x302a00: 0x8e030d60  lw          $v1, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x302A04u;
        goto label_302a04;
    }
    ctx->pc = 0x3029FCu;
    {
        const bool branch_taken_0x3029fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3029fc) {
            ctx->pc = 0x302A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3029FCu;
            // 0x302a00: 0x8e030d60  lw          $v1, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302A20u;
            goto label_302a20;
        }
    }
    ctx->pc = 0x302A04u;
label_302a04:
    // 0x302a04: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x302a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_302a08:
    // 0x302a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302a0c:
    // 0x302a0c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x302a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_302a10:
    // 0x302a10: 0x320f809  jalr        $t9
label_302a14:
    if (ctx->pc == 0x302A14u) {
        ctx->pc = 0x302A14u;
            // 0x302a14: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x302A18u;
        goto label_302a18;
    }
    ctx->pc = 0x302A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302A18u);
        ctx->pc = 0x302A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302A10u;
            // 0x302a14: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302A18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302A18u; }
            if (ctx->pc != 0x302A18u) { return; }
        }
        }
    }
    ctx->pc = 0x302A18u;
label_302a18:
    // 0x302a18: 0x1000000a  b           . + 4 + (0xA << 2)
label_302a1c:
    if (ctx->pc == 0x302A1Cu) {
        ctx->pc = 0x302A1Cu;
            // 0x302a1c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x302A20u;
        goto label_302a20;
    }
    ctx->pc = 0x302A18u;
    {
        const bool branch_taken_0x302a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302A18u;
            // 0x302a1c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a18) {
            ctx->pc = 0x302A44u;
            goto label_302a44;
        }
    }
    ctx->pc = 0x302A20u;
label_302a20:
    // 0x302a20: 0x80630005  lb          $v1, 0x5($v1)
    ctx->pc = 0x302a20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_302a24:
    // 0x302a24: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_302a28:
    if (ctx->pc == 0x302A28u) {
        ctx->pc = 0x302A2Cu;
        goto label_302a2c;
    }
    ctx->pc = 0x302A24u;
    {
        const bool branch_taken_0x302a24 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x302a24) {
            ctx->pc = 0x302A40u;
            goto label_302a40;
        }
    }
    ctx->pc = 0x302A2Cu;
label_302a2c:
    // 0x302a2c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x302a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_302a30:
    // 0x302a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302a34:
    // 0x302a34: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x302a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_302a38:
    // 0x302a38: 0x320f809  jalr        $t9
label_302a3c:
    if (ctx->pc == 0x302A3Cu) {
        ctx->pc = 0x302A3Cu;
            // 0x302a3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x302A40u;
        goto label_302a40;
    }
    ctx->pc = 0x302A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302A40u);
        ctx->pc = 0x302A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302A38u;
            // 0x302a3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302A40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302A40u; }
            if (ctx->pc != 0x302A40u) { return; }
        }
        }
    }
    ctx->pc = 0x302A40u;
label_302a40:
    // 0x302a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x302a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_302a44:
    // 0x302a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302a48:
    // 0x302a48: 0x3e00008  jr          $ra
label_302a4c:
    if (ctx->pc == 0x302A4Cu) {
        ctx->pc = 0x302A4Cu;
            // 0x302a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x302A50u;
        goto label_302a50;
    }
    ctx->pc = 0x302A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302A48u;
            // 0x302a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302A50u;
label_302a50:
    // 0x302a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_302a54:
    // 0x302a54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_302a58:
    // 0x302a58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_302a5c:
    // 0x302a5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_302a60:
    // 0x302a60: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x302a60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_302a64:
    // 0x302a64: 0xc0c15dc  jal         func_305770
label_302a68:
    if (ctx->pc == 0x302A68u) {
        ctx->pc = 0x302A68u;
            // 0x302a68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302A6Cu;
        goto label_302a6c;
    }
    ctx->pc = 0x302A64u;
    SET_GPR_U32(ctx, 31, 0x302A6Cu);
    ctx->pc = 0x302A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302A64u;
            // 0x302a68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305770u;
    if (runtime->hasFunction(0x305770u)) {
        auto targetFn = runtime->lookupFunction(0x305770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302A6Cu; }
        if (ctx->pc != 0x302A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305770_0x305770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302A6Cu; }
        if (ctx->pc != 0x302A6Cu) { return; }
    }
    ctx->pc = 0x302A6Cu;
label_302a6c:
    // 0x302a6c: 0x3c02bdbd  lui         $v0, 0xBDBD
    ctx->pc = 0x302a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48573 << 16));
label_302a70:
    // 0x302a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302a74:
    // 0x302a74: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x302a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_302a78:
    // 0x302a78: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x302a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_302a7c:
    // 0x302a7c: 0xae220ddc  sw          $v0, 0xDDC($s1)
    ctx->pc = 0x302a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3548), GPR_U32(ctx, 2));
label_302a80:
    // 0x302a80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x302a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_302a84:
    // 0x302a84: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x302a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_302a88:
    // 0x302a88: 0xae200dc4  sw          $zero, 0xDC4($s1)
    ctx->pc = 0x302a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3524), GPR_U32(ctx, 0));
label_302a8c:
    // 0x302a8c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_302a90:
    // 0x302a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302a94:
    // 0x302a94: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x302a94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_302a98:
    // 0x302a98: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x302a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_302a9c:
    // 0x302a9c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x302a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_302aa0:
    // 0x302aa0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x302aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_302aa4:
    // 0x302aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x302aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_302aa8:
    // 0x302aa8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x302aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_302aac:
    // 0x302aac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x302aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_302ab0:
    // 0x302ab0: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x302ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_302ab4:
    // 0x302ab4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x302ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_302ab8:
    // 0x302ab8: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x302ab8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_302abc:
    // 0x302abc: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x302abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_302ac0:
    // 0x302ac0: 0x320f809  jalr        $t9
label_302ac4:
    if (ctx->pc == 0x302AC4u) {
        ctx->pc = 0x302AC4u;
            // 0x302ac4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x302AC8u;
        goto label_302ac8;
    }
    ctx->pc = 0x302AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302AC8u);
        ctx->pc = 0x302AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302AC0u;
            // 0x302ac4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302AC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302AC8u; }
            if (ctx->pc != 0x302AC8u) { return; }
        }
        }
    }
    ctx->pc = 0x302AC8u;
label_302ac8:
    // 0x302ac8: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x302ac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_302acc:
    // 0x302acc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x302accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_302ad0:
    // 0x302ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302ad4:
    // 0x302ad4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x302ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_302ad8:
    // 0x302ad8: 0x320f809  jalr        $t9
label_302adc:
    if (ctx->pc == 0x302ADCu) {
        ctx->pc = 0x302ADCu;
            // 0x302adc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302AE0u;
        goto label_302ae0;
    }
    ctx->pc = 0x302AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302AE0u);
        ctx->pc = 0x302ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302AD8u;
            // 0x302adc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302AE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302AE0u; }
            if (ctx->pc != 0x302AE0u) { return; }
        }
        }
    }
    ctx->pc = 0x302AE0u;
label_302ae0:
    // 0x302ae0: 0xc0c0f64  jal         func_303D90
label_302ae4:
    if (ctx->pc == 0x302AE4u) {
        ctx->pc = 0x302AE4u;
            // 0x302ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302AE8u;
        goto label_302ae8;
    }
    ctx->pc = 0x302AE0u;
    SET_GPR_U32(ctx, 31, 0x302AE8u);
    ctx->pc = 0x302AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302AE0u;
            // 0x302ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303D90u;
    if (runtime->hasFunction(0x303D90u)) {
        auto targetFn = runtime->lookupFunction(0x303D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302AE8u; }
        if (ctx->pc != 0x302AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303D90_0x303d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302AE8u; }
        if (ctx->pc != 0x302AE8u) { return; }
    }
    ctx->pc = 0x302AE8u;
label_302ae8:
    // 0x302ae8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_302aec:
    // 0x302aec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_302af0:
    // 0x302af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302af4:
    // 0x302af4: 0x3e00008  jr          $ra
label_302af8:
    if (ctx->pc == 0x302AF8u) {
        ctx->pc = 0x302AF8u;
            // 0x302af8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x302AFCu;
        goto label_302afc;
    }
    ctx->pc = 0x302AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302AF4u;
            // 0x302af8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302AFCu;
label_302afc:
    // 0x302afc: 0x0  nop
    ctx->pc = 0x302afcu;
    // NOP
label_302b00:
    // 0x302b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_302b04:
    // 0x302b04: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x302b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_302b08:
    // 0x302b08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_302b0c:
    // 0x302b0c: 0x3c03bc4c  lui         $v1, 0xBC4C
    ctx->pc = 0x302b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48204 << 16));
label_302b10:
    // 0x302b10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_302b14:
    // 0x302b14: 0xc440c6b8  lwc1        $f0, -0x3948($v0)
    ctx->pc = 0x302b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_302b18:
    // 0x302b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_302b1c:
    // 0x302b1c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x302b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_302b20:
    // 0x302b20: 0xac830de8  sw          $v1, 0xDE8($a0)
    ctx->pc = 0x302b20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3560), GPR_U32(ctx, 3));
label_302b24:
    // 0x302b24: 0xe4800ddc  swc1        $f0, 0xDDC($a0)
    ctx->pc = 0x302b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3548), bits); }
label_302b28:
    // 0x302b28: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x302b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_302b2c:
    // 0x302b2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x302b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_302b30:
    // 0x302b30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_302b34:
    if (ctx->pc == 0x302B34u) {
        ctx->pc = 0x302B34u;
            // 0x302b34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302B38u;
        goto label_302b38;
    }
    ctx->pc = 0x302B30u;
    {
        const bool branch_taken_0x302b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302B30u;
            // 0x302b34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b30) {
            ctx->pc = 0x302B50u;
            goto label_302b50;
        }
    }
    ctx->pc = 0x302B38u;
label_302b38:
    // 0x302b38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x302b38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_302b3c:
    // 0x302b3c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x302b3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_302b40:
    // 0x302b40: 0x320f809  jalr        $t9
label_302b44:
    if (ctx->pc == 0x302B44u) {
        ctx->pc = 0x302B44u;
            // 0x302b44: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x302B48u;
        goto label_302b48;
    }
    ctx->pc = 0x302B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302B48u);
        ctx->pc = 0x302B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302B40u;
            // 0x302b44: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302B48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302B48u; }
            if (ctx->pc != 0x302B48u) { return; }
        }
        }
    }
    ctx->pc = 0x302B48u;
label_302b48:
    // 0x302b48: 0x10000018  b           . + 4 + (0x18 << 2)
label_302b4c:
    if (ctx->pc == 0x302B4Cu) {
        ctx->pc = 0x302B4Cu;
            // 0x302b4c: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x302B50u;
        goto label_302b50;
    }
    ctx->pc = 0x302B48u;
    {
        const bool branch_taken_0x302b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302B48u;
            // 0x302b4c: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b48) {
            ctx->pc = 0x302BACu;
            goto label_302bac;
        }
    }
    ctx->pc = 0x302B50u;
label_302b50:
    // 0x302b50: 0x8e020d60  lw          $v0, 0xD60($s0)
    ctx->pc = 0x302b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_302b54:
    // 0x302b54: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x302b54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_302b58:
    // 0x302b58: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
label_302b5c:
    if (ctx->pc == 0x302B5Cu) {
        ctx->pc = 0x302B5Cu;
            // 0x302b5c: 0xc60c0de4  lwc1        $f12, 0xDE4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x302B60u;
        goto label_302b60;
    }
    ctx->pc = 0x302B58u;
    {
        const bool branch_taken_0x302b58 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x302b58) {
            ctx->pc = 0x302B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302B58u;
            // 0x302b5c: 0xc60c0de4  lwc1        $f12, 0xDE4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x302B78u;
            goto label_302b78;
        }
    }
    ctx->pc = 0x302B60u;
label_302b60:
    // 0x302b60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x302b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_302b64:
    // 0x302b64: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x302b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_302b68:
    // 0x302b68: 0x320f809  jalr        $t9
label_302b6c:
    if (ctx->pc == 0x302B6Cu) {
        ctx->pc = 0x302B6Cu;
            // 0x302b6c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x302B70u;
        goto label_302b70;
    }
    ctx->pc = 0x302B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302B70u);
        ctx->pc = 0x302B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302B68u;
            // 0x302b6c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302B70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302B70u; }
            if (ctx->pc != 0x302B70u) { return; }
        }
        }
    }
    ctx->pc = 0x302B70u;
label_302b70:
    // 0x302b70: 0x1000000d  b           . + 4 + (0xD << 2)
label_302b74:
    if (ctx->pc == 0x302B74u) {
        ctx->pc = 0x302B78u;
        goto label_302b78;
    }
    ctx->pc = 0x302B70u;
    {
        const bool branch_taken_0x302b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302b70) {
            ctx->pc = 0x302BA8u;
            goto label_302ba8;
        }
    }
    ctx->pc = 0x302B78u;
label_302b78:
    // 0x302b78: 0xc049514  jal         func_125450
label_302b7c:
    if (ctx->pc == 0x302B7Cu) {
        ctx->pc = 0x302B80u;
        goto label_302b80;
    }
    ctx->pc = 0x302B78u;
    SET_GPR_U32(ctx, 31, 0x302B80u);
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302B80u; }
        if (ctx->pc != 0x302B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302B80u; }
        if (ctx->pc != 0x302B80u) { return; }
    }
    ctx->pc = 0x302B80u;
label_302b80:
    // 0x302b80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x302b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302b84:
    // 0x302b84: 0xc040214  jal         func_100850
label_302b88:
    if (ctx->pc == 0x302B88u) {
        ctx->pc = 0x302B88u;
            // 0x302b88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302B8Cu;
        goto label_302b8c;
    }
    ctx->pc = 0x302B84u;
    SET_GPR_U32(ctx, 31, 0x302B8Cu);
    ctx->pc = 0x302B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302B84u;
            // 0x302b88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100850u;
    if (runtime->hasFunction(0x100850u)) {
        auto targetFn = runtime->lookupFunction(0x100850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302B8Cu; }
        if (ctx->pc != 0x302B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100850_0x100850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302B8Cu; }
        if (ctx->pc != 0x302B8Cu) { return; }
    }
    ctx->pc = 0x302B8Cu;
label_302b8c:
    // 0x302b8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_302b90:
    if (ctx->pc == 0x302B90u) {
        ctx->pc = 0x302B94u;
        goto label_302b94;
    }
    ctx->pc = 0x302B8Cu;
    {
        const bool branch_taken_0x302b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302b8c) {
            ctx->pc = 0x302BA8u;
            goto label_302ba8;
        }
    }
    ctx->pc = 0x302B94u;
label_302b94:
    // 0x302b94: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x302b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_302b98:
    // 0x302b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302b9c:
    // 0x302b9c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x302b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_302ba0:
    // 0x302ba0: 0x320f809  jalr        $t9
label_302ba4:
    if (ctx->pc == 0x302BA4u) {
        ctx->pc = 0x302BA4u;
            // 0x302ba4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x302BA8u;
        goto label_302ba8;
    }
    ctx->pc = 0x302BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302BA8u);
        ctx->pc = 0x302BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302BA0u;
            // 0x302ba4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302BA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302BA8u; }
            if (ctx->pc != 0x302BA8u) { return; }
        }
        }
    }
    ctx->pc = 0x302BA8u;
label_302ba8:
    // 0x302ba8: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x302ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_302bac:
    // 0x302bac: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x302bacu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_302bb0:
    // 0x302bb0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_302bb4:
    if (ctx->pc == 0x302BB4u) {
        ctx->pc = 0x302BB4u;
            // 0x302bb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302BB8u;
        goto label_302bb8;
    }
    ctx->pc = 0x302BB0u;
    {
        const bool branch_taken_0x302bb0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x302BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302BB0u;
            // 0x302bb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302bb0) {
            ctx->pc = 0x302BC8u;
            goto label_302bc8;
        }
    }
    ctx->pc = 0x302BB8u;
label_302bb8:
    // 0x302bb8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x302bb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_302bbc:
    // 0x302bbc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_302bc0:
    if (ctx->pc == 0x302BC0u) {
        ctx->pc = 0x302BC4u;
        goto label_302bc4;
    }
    ctx->pc = 0x302BBCu;
    {
        const bool branch_taken_0x302bbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x302bbc) {
            ctx->pc = 0x302BC8u;
            goto label_302bc8;
        }
    }
    ctx->pc = 0x302BC4u;
label_302bc4:
    // 0x302bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302bc8:
    // 0x302bc8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_302bcc:
    if (ctx->pc == 0x302BCCu) {
        ctx->pc = 0x302BD0u;
        goto label_302bd0;
    }
    ctx->pc = 0x302BC8u;
    {
        const bool branch_taken_0x302bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x302bc8) {
            ctx->pc = 0x302BE4u;
            goto label_302be4;
        }
    }
    ctx->pc = 0x302BD0u;
label_302bd0:
    // 0x302bd0: 0xc075eb4  jal         func_1D7AD0
label_302bd4:
    if (ctx->pc == 0x302BD4u) {
        ctx->pc = 0x302BD4u;
            // 0x302bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302BD8u;
        goto label_302bd8;
    }
    ctx->pc = 0x302BD0u;
    SET_GPR_U32(ctx, 31, 0x302BD8u);
    ctx->pc = 0x302BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302BD0u;
            // 0x302bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302BD8u; }
        if (ctx->pc != 0x302BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302BD8u; }
        if (ctx->pc != 0x302BD8u) { return; }
    }
    ctx->pc = 0x302BD8u;
label_302bd8:
    // 0x302bd8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_302bdc:
    if (ctx->pc == 0x302BDCu) {
        ctx->pc = 0x302BE0u;
        goto label_302be0;
    }
    ctx->pc = 0x302BD8u;
    {
        const bool branch_taken_0x302bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302bd8) {
            ctx->pc = 0x302BE4u;
            goto label_302be4;
        }
    }
    ctx->pc = 0x302BE0u;
label_302be0:
    // 0x302be0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x302be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302be4:
    // 0x302be4: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_302be8:
    if (ctx->pc == 0x302BE8u) {
        ctx->pc = 0x302BE8u;
            // 0x302be8: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x302BECu;
        goto label_302bec;
    }
    ctx->pc = 0x302BE4u;
    {
        const bool branch_taken_0x302be4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x302be4) {
            ctx->pc = 0x302BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302BE4u;
            // 0x302be8: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302C00u;
            goto label_302c00;
        }
    }
    ctx->pc = 0x302BECu;
label_302bec:
    // 0x302bec: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x302becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_302bf0:
    // 0x302bf0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x302bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_302bf4:
    // 0x302bf4: 0x54830014  bnel        $a0, $v1, . + 4 + (0x14 << 2)
label_302bf8:
    if (ctx->pc == 0x302BF8u) {
        ctx->pc = 0x302BF8u;
            // 0x302bf8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x302BFCu;
        goto label_302bfc;
    }
    ctx->pc = 0x302BF4u;
    {
        const bool branch_taken_0x302bf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x302bf4) {
            ctx->pc = 0x302BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302BF4u;
            // 0x302bf8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302C48u;
            return;
        }
    }
    ctx->pc = 0x302BFCu;
label_302bfc:
    // 0x302bfc: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x302bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_302c00:
    // 0x302c00: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x302c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_302c04:
    // 0x302c04: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_302c08:
    if (ctx->pc == 0x302C08u) {
        ctx->pc = 0x302C0Cu;
        goto label_302c0c;
    }
    ctx->pc = 0x302C04u;
    {
        const bool branch_taken_0x302c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x302c04) {
            ctx->pc = 0x302C44u;
            return;
        }
    }
    ctx->pc = 0x302C0Cu;
label_302c0c:
    // 0x302c0c: 0x8e040550  lw          $a0, 0x550($s0)
    ctx->pc = 0x302c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_302c10:
    // 0x302c10: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x302c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_302c14:
    // 0x302c14: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x302c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
}
