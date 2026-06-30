#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00402460
// Address: 0x402460 - 0x402d10
void sub_00402460_0x402460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402460_0x402460");
#endif

    switch (ctx->pc) {
        case 0x402460u: goto label_402460;
        case 0x402464u: goto label_402464;
        case 0x402468u: goto label_402468;
        case 0x40246cu: goto label_40246c;
        case 0x402470u: goto label_402470;
        case 0x402474u: goto label_402474;
        case 0x402478u: goto label_402478;
        case 0x40247cu: goto label_40247c;
        case 0x402480u: goto label_402480;
        case 0x402484u: goto label_402484;
        case 0x402488u: goto label_402488;
        case 0x40248cu: goto label_40248c;
        case 0x402490u: goto label_402490;
        case 0x402494u: goto label_402494;
        case 0x402498u: goto label_402498;
        case 0x40249cu: goto label_40249c;
        case 0x4024a0u: goto label_4024a0;
        case 0x4024a4u: goto label_4024a4;
        case 0x4024a8u: goto label_4024a8;
        case 0x4024acu: goto label_4024ac;
        case 0x4024b0u: goto label_4024b0;
        case 0x4024b4u: goto label_4024b4;
        case 0x4024b8u: goto label_4024b8;
        case 0x4024bcu: goto label_4024bc;
        case 0x4024c0u: goto label_4024c0;
        case 0x4024c4u: goto label_4024c4;
        case 0x4024c8u: goto label_4024c8;
        case 0x4024ccu: goto label_4024cc;
        case 0x4024d0u: goto label_4024d0;
        case 0x4024d4u: goto label_4024d4;
        case 0x4024d8u: goto label_4024d8;
        case 0x4024dcu: goto label_4024dc;
        case 0x4024e0u: goto label_4024e0;
        case 0x4024e4u: goto label_4024e4;
        case 0x4024e8u: goto label_4024e8;
        case 0x4024ecu: goto label_4024ec;
        case 0x4024f0u: goto label_4024f0;
        case 0x4024f4u: goto label_4024f4;
        case 0x4024f8u: goto label_4024f8;
        case 0x4024fcu: goto label_4024fc;
        case 0x402500u: goto label_402500;
        case 0x402504u: goto label_402504;
        case 0x402508u: goto label_402508;
        case 0x40250cu: goto label_40250c;
        case 0x402510u: goto label_402510;
        case 0x402514u: goto label_402514;
        case 0x402518u: goto label_402518;
        case 0x40251cu: goto label_40251c;
        case 0x402520u: goto label_402520;
        case 0x402524u: goto label_402524;
        case 0x402528u: goto label_402528;
        case 0x40252cu: goto label_40252c;
        case 0x402530u: goto label_402530;
        case 0x402534u: goto label_402534;
        case 0x402538u: goto label_402538;
        case 0x40253cu: goto label_40253c;
        case 0x402540u: goto label_402540;
        case 0x402544u: goto label_402544;
        case 0x402548u: goto label_402548;
        case 0x40254cu: goto label_40254c;
        case 0x402550u: goto label_402550;
        case 0x402554u: goto label_402554;
        case 0x402558u: goto label_402558;
        case 0x40255cu: goto label_40255c;
        case 0x402560u: goto label_402560;
        case 0x402564u: goto label_402564;
        case 0x402568u: goto label_402568;
        case 0x40256cu: goto label_40256c;
        case 0x402570u: goto label_402570;
        case 0x402574u: goto label_402574;
        case 0x402578u: goto label_402578;
        case 0x40257cu: goto label_40257c;
        case 0x402580u: goto label_402580;
        case 0x402584u: goto label_402584;
        case 0x402588u: goto label_402588;
        case 0x40258cu: goto label_40258c;
        case 0x402590u: goto label_402590;
        case 0x402594u: goto label_402594;
        case 0x402598u: goto label_402598;
        case 0x40259cu: goto label_40259c;
        case 0x4025a0u: goto label_4025a0;
        case 0x4025a4u: goto label_4025a4;
        case 0x4025a8u: goto label_4025a8;
        case 0x4025acu: goto label_4025ac;
        case 0x4025b0u: goto label_4025b0;
        case 0x4025b4u: goto label_4025b4;
        case 0x4025b8u: goto label_4025b8;
        case 0x4025bcu: goto label_4025bc;
        case 0x4025c0u: goto label_4025c0;
        case 0x4025c4u: goto label_4025c4;
        case 0x4025c8u: goto label_4025c8;
        case 0x4025ccu: goto label_4025cc;
        case 0x4025d0u: goto label_4025d0;
        case 0x4025d4u: goto label_4025d4;
        case 0x4025d8u: goto label_4025d8;
        case 0x4025dcu: goto label_4025dc;
        case 0x4025e0u: goto label_4025e0;
        case 0x4025e4u: goto label_4025e4;
        case 0x4025e8u: goto label_4025e8;
        case 0x4025ecu: goto label_4025ec;
        case 0x4025f0u: goto label_4025f0;
        case 0x4025f4u: goto label_4025f4;
        case 0x4025f8u: goto label_4025f8;
        case 0x4025fcu: goto label_4025fc;
        case 0x402600u: goto label_402600;
        case 0x402604u: goto label_402604;
        case 0x402608u: goto label_402608;
        case 0x40260cu: goto label_40260c;
        case 0x402610u: goto label_402610;
        case 0x402614u: goto label_402614;
        case 0x402618u: goto label_402618;
        case 0x40261cu: goto label_40261c;
        case 0x402620u: goto label_402620;
        case 0x402624u: goto label_402624;
        case 0x402628u: goto label_402628;
        case 0x40262cu: goto label_40262c;
        case 0x402630u: goto label_402630;
        case 0x402634u: goto label_402634;
        case 0x402638u: goto label_402638;
        case 0x40263cu: goto label_40263c;
        case 0x402640u: goto label_402640;
        case 0x402644u: goto label_402644;
        case 0x402648u: goto label_402648;
        case 0x40264cu: goto label_40264c;
        case 0x402650u: goto label_402650;
        case 0x402654u: goto label_402654;
        case 0x402658u: goto label_402658;
        case 0x40265cu: goto label_40265c;
        case 0x402660u: goto label_402660;
        case 0x402664u: goto label_402664;
        case 0x402668u: goto label_402668;
        case 0x40266cu: goto label_40266c;
        case 0x402670u: goto label_402670;
        case 0x402674u: goto label_402674;
        case 0x402678u: goto label_402678;
        case 0x40267cu: goto label_40267c;
        case 0x402680u: goto label_402680;
        case 0x402684u: goto label_402684;
        case 0x402688u: goto label_402688;
        case 0x40268cu: goto label_40268c;
        case 0x402690u: goto label_402690;
        case 0x402694u: goto label_402694;
        case 0x402698u: goto label_402698;
        case 0x40269cu: goto label_40269c;
        case 0x4026a0u: goto label_4026a0;
        case 0x4026a4u: goto label_4026a4;
        case 0x4026a8u: goto label_4026a8;
        case 0x4026acu: goto label_4026ac;
        case 0x4026b0u: goto label_4026b0;
        case 0x4026b4u: goto label_4026b4;
        case 0x4026b8u: goto label_4026b8;
        case 0x4026bcu: goto label_4026bc;
        case 0x4026c0u: goto label_4026c0;
        case 0x4026c4u: goto label_4026c4;
        case 0x4026c8u: goto label_4026c8;
        case 0x4026ccu: goto label_4026cc;
        case 0x4026d0u: goto label_4026d0;
        case 0x4026d4u: goto label_4026d4;
        case 0x4026d8u: goto label_4026d8;
        case 0x4026dcu: goto label_4026dc;
        case 0x4026e0u: goto label_4026e0;
        case 0x4026e4u: goto label_4026e4;
        case 0x4026e8u: goto label_4026e8;
        case 0x4026ecu: goto label_4026ec;
        case 0x4026f0u: goto label_4026f0;
        case 0x4026f4u: goto label_4026f4;
        case 0x4026f8u: goto label_4026f8;
        case 0x4026fcu: goto label_4026fc;
        case 0x402700u: goto label_402700;
        case 0x402704u: goto label_402704;
        case 0x402708u: goto label_402708;
        case 0x40270cu: goto label_40270c;
        case 0x402710u: goto label_402710;
        case 0x402714u: goto label_402714;
        case 0x402718u: goto label_402718;
        case 0x40271cu: goto label_40271c;
        case 0x402720u: goto label_402720;
        case 0x402724u: goto label_402724;
        case 0x402728u: goto label_402728;
        case 0x40272cu: goto label_40272c;
        case 0x402730u: goto label_402730;
        case 0x402734u: goto label_402734;
        case 0x402738u: goto label_402738;
        case 0x40273cu: goto label_40273c;
        case 0x402740u: goto label_402740;
        case 0x402744u: goto label_402744;
        case 0x402748u: goto label_402748;
        case 0x40274cu: goto label_40274c;
        case 0x402750u: goto label_402750;
        case 0x402754u: goto label_402754;
        case 0x402758u: goto label_402758;
        case 0x40275cu: goto label_40275c;
        case 0x402760u: goto label_402760;
        case 0x402764u: goto label_402764;
        case 0x402768u: goto label_402768;
        case 0x40276cu: goto label_40276c;
        case 0x402770u: goto label_402770;
        case 0x402774u: goto label_402774;
        case 0x402778u: goto label_402778;
        case 0x40277cu: goto label_40277c;
        case 0x402780u: goto label_402780;
        case 0x402784u: goto label_402784;
        case 0x402788u: goto label_402788;
        case 0x40278cu: goto label_40278c;
        case 0x402790u: goto label_402790;
        case 0x402794u: goto label_402794;
        case 0x402798u: goto label_402798;
        case 0x40279cu: goto label_40279c;
        case 0x4027a0u: goto label_4027a0;
        case 0x4027a4u: goto label_4027a4;
        case 0x4027a8u: goto label_4027a8;
        case 0x4027acu: goto label_4027ac;
        case 0x4027b0u: goto label_4027b0;
        case 0x4027b4u: goto label_4027b4;
        case 0x4027b8u: goto label_4027b8;
        case 0x4027bcu: goto label_4027bc;
        case 0x4027c0u: goto label_4027c0;
        case 0x4027c4u: goto label_4027c4;
        case 0x4027c8u: goto label_4027c8;
        case 0x4027ccu: goto label_4027cc;
        case 0x4027d0u: goto label_4027d0;
        case 0x4027d4u: goto label_4027d4;
        case 0x4027d8u: goto label_4027d8;
        case 0x4027dcu: goto label_4027dc;
        case 0x4027e0u: goto label_4027e0;
        case 0x4027e4u: goto label_4027e4;
        case 0x4027e8u: goto label_4027e8;
        case 0x4027ecu: goto label_4027ec;
        case 0x4027f0u: goto label_4027f0;
        case 0x4027f4u: goto label_4027f4;
        case 0x4027f8u: goto label_4027f8;
        case 0x4027fcu: goto label_4027fc;
        case 0x402800u: goto label_402800;
        case 0x402804u: goto label_402804;
        case 0x402808u: goto label_402808;
        case 0x40280cu: goto label_40280c;
        case 0x402810u: goto label_402810;
        case 0x402814u: goto label_402814;
        case 0x402818u: goto label_402818;
        case 0x40281cu: goto label_40281c;
        case 0x402820u: goto label_402820;
        case 0x402824u: goto label_402824;
        case 0x402828u: goto label_402828;
        case 0x40282cu: goto label_40282c;
        case 0x402830u: goto label_402830;
        case 0x402834u: goto label_402834;
        case 0x402838u: goto label_402838;
        case 0x40283cu: goto label_40283c;
        case 0x402840u: goto label_402840;
        case 0x402844u: goto label_402844;
        case 0x402848u: goto label_402848;
        case 0x40284cu: goto label_40284c;
        case 0x402850u: goto label_402850;
        case 0x402854u: goto label_402854;
        case 0x402858u: goto label_402858;
        case 0x40285cu: goto label_40285c;
        case 0x402860u: goto label_402860;
        case 0x402864u: goto label_402864;
        case 0x402868u: goto label_402868;
        case 0x40286cu: goto label_40286c;
        case 0x402870u: goto label_402870;
        case 0x402874u: goto label_402874;
        case 0x402878u: goto label_402878;
        case 0x40287cu: goto label_40287c;
        case 0x402880u: goto label_402880;
        case 0x402884u: goto label_402884;
        case 0x402888u: goto label_402888;
        case 0x40288cu: goto label_40288c;
        case 0x402890u: goto label_402890;
        case 0x402894u: goto label_402894;
        case 0x402898u: goto label_402898;
        case 0x40289cu: goto label_40289c;
        case 0x4028a0u: goto label_4028a0;
        case 0x4028a4u: goto label_4028a4;
        case 0x4028a8u: goto label_4028a8;
        case 0x4028acu: goto label_4028ac;
        case 0x4028b0u: goto label_4028b0;
        case 0x4028b4u: goto label_4028b4;
        case 0x4028b8u: goto label_4028b8;
        case 0x4028bcu: goto label_4028bc;
        case 0x4028c0u: goto label_4028c0;
        case 0x4028c4u: goto label_4028c4;
        case 0x4028c8u: goto label_4028c8;
        case 0x4028ccu: goto label_4028cc;
        case 0x4028d0u: goto label_4028d0;
        case 0x4028d4u: goto label_4028d4;
        case 0x4028d8u: goto label_4028d8;
        case 0x4028dcu: goto label_4028dc;
        case 0x4028e0u: goto label_4028e0;
        case 0x4028e4u: goto label_4028e4;
        case 0x4028e8u: goto label_4028e8;
        case 0x4028ecu: goto label_4028ec;
        case 0x4028f0u: goto label_4028f0;
        case 0x4028f4u: goto label_4028f4;
        case 0x4028f8u: goto label_4028f8;
        case 0x4028fcu: goto label_4028fc;
        case 0x402900u: goto label_402900;
        case 0x402904u: goto label_402904;
        case 0x402908u: goto label_402908;
        case 0x40290cu: goto label_40290c;
        case 0x402910u: goto label_402910;
        case 0x402914u: goto label_402914;
        case 0x402918u: goto label_402918;
        case 0x40291cu: goto label_40291c;
        case 0x402920u: goto label_402920;
        case 0x402924u: goto label_402924;
        case 0x402928u: goto label_402928;
        case 0x40292cu: goto label_40292c;
        case 0x402930u: goto label_402930;
        case 0x402934u: goto label_402934;
        case 0x402938u: goto label_402938;
        case 0x40293cu: goto label_40293c;
        case 0x402940u: goto label_402940;
        case 0x402944u: goto label_402944;
        case 0x402948u: goto label_402948;
        case 0x40294cu: goto label_40294c;
        case 0x402950u: goto label_402950;
        case 0x402954u: goto label_402954;
        case 0x402958u: goto label_402958;
        case 0x40295cu: goto label_40295c;
        case 0x402960u: goto label_402960;
        case 0x402964u: goto label_402964;
        case 0x402968u: goto label_402968;
        case 0x40296cu: goto label_40296c;
        case 0x402970u: goto label_402970;
        case 0x402974u: goto label_402974;
        case 0x402978u: goto label_402978;
        case 0x40297cu: goto label_40297c;
        case 0x402980u: goto label_402980;
        case 0x402984u: goto label_402984;
        case 0x402988u: goto label_402988;
        case 0x40298cu: goto label_40298c;
        case 0x402990u: goto label_402990;
        case 0x402994u: goto label_402994;
        case 0x402998u: goto label_402998;
        case 0x40299cu: goto label_40299c;
        case 0x4029a0u: goto label_4029a0;
        case 0x4029a4u: goto label_4029a4;
        case 0x4029a8u: goto label_4029a8;
        case 0x4029acu: goto label_4029ac;
        case 0x4029b0u: goto label_4029b0;
        case 0x4029b4u: goto label_4029b4;
        case 0x4029b8u: goto label_4029b8;
        case 0x4029bcu: goto label_4029bc;
        case 0x4029c0u: goto label_4029c0;
        case 0x4029c4u: goto label_4029c4;
        case 0x4029c8u: goto label_4029c8;
        case 0x4029ccu: goto label_4029cc;
        case 0x4029d0u: goto label_4029d0;
        case 0x4029d4u: goto label_4029d4;
        case 0x4029d8u: goto label_4029d8;
        case 0x4029dcu: goto label_4029dc;
        case 0x4029e0u: goto label_4029e0;
        case 0x4029e4u: goto label_4029e4;
        case 0x4029e8u: goto label_4029e8;
        case 0x4029ecu: goto label_4029ec;
        case 0x4029f0u: goto label_4029f0;
        case 0x4029f4u: goto label_4029f4;
        case 0x4029f8u: goto label_4029f8;
        case 0x4029fcu: goto label_4029fc;
        case 0x402a00u: goto label_402a00;
        case 0x402a04u: goto label_402a04;
        case 0x402a08u: goto label_402a08;
        case 0x402a0cu: goto label_402a0c;
        case 0x402a10u: goto label_402a10;
        case 0x402a14u: goto label_402a14;
        case 0x402a18u: goto label_402a18;
        case 0x402a1cu: goto label_402a1c;
        case 0x402a20u: goto label_402a20;
        case 0x402a24u: goto label_402a24;
        case 0x402a28u: goto label_402a28;
        case 0x402a2cu: goto label_402a2c;
        case 0x402a30u: goto label_402a30;
        case 0x402a34u: goto label_402a34;
        case 0x402a38u: goto label_402a38;
        case 0x402a3cu: goto label_402a3c;
        case 0x402a40u: goto label_402a40;
        case 0x402a44u: goto label_402a44;
        case 0x402a48u: goto label_402a48;
        case 0x402a4cu: goto label_402a4c;
        case 0x402a50u: goto label_402a50;
        case 0x402a54u: goto label_402a54;
        case 0x402a58u: goto label_402a58;
        case 0x402a5cu: goto label_402a5c;
        case 0x402a60u: goto label_402a60;
        case 0x402a64u: goto label_402a64;
        case 0x402a68u: goto label_402a68;
        case 0x402a6cu: goto label_402a6c;
        case 0x402a70u: goto label_402a70;
        case 0x402a74u: goto label_402a74;
        case 0x402a78u: goto label_402a78;
        case 0x402a7cu: goto label_402a7c;
        case 0x402a80u: goto label_402a80;
        case 0x402a84u: goto label_402a84;
        case 0x402a88u: goto label_402a88;
        case 0x402a8cu: goto label_402a8c;
        case 0x402a90u: goto label_402a90;
        case 0x402a94u: goto label_402a94;
        case 0x402a98u: goto label_402a98;
        case 0x402a9cu: goto label_402a9c;
        case 0x402aa0u: goto label_402aa0;
        case 0x402aa4u: goto label_402aa4;
        case 0x402aa8u: goto label_402aa8;
        case 0x402aacu: goto label_402aac;
        case 0x402ab0u: goto label_402ab0;
        case 0x402ab4u: goto label_402ab4;
        case 0x402ab8u: goto label_402ab8;
        case 0x402abcu: goto label_402abc;
        case 0x402ac0u: goto label_402ac0;
        case 0x402ac4u: goto label_402ac4;
        case 0x402ac8u: goto label_402ac8;
        case 0x402accu: goto label_402acc;
        case 0x402ad0u: goto label_402ad0;
        case 0x402ad4u: goto label_402ad4;
        case 0x402ad8u: goto label_402ad8;
        case 0x402adcu: goto label_402adc;
        case 0x402ae0u: goto label_402ae0;
        case 0x402ae4u: goto label_402ae4;
        case 0x402ae8u: goto label_402ae8;
        case 0x402aecu: goto label_402aec;
        case 0x402af0u: goto label_402af0;
        case 0x402af4u: goto label_402af4;
        case 0x402af8u: goto label_402af8;
        case 0x402afcu: goto label_402afc;
        case 0x402b00u: goto label_402b00;
        case 0x402b04u: goto label_402b04;
        case 0x402b08u: goto label_402b08;
        case 0x402b0cu: goto label_402b0c;
        case 0x402b10u: goto label_402b10;
        case 0x402b14u: goto label_402b14;
        case 0x402b18u: goto label_402b18;
        case 0x402b1cu: goto label_402b1c;
        case 0x402b20u: goto label_402b20;
        case 0x402b24u: goto label_402b24;
        case 0x402b28u: goto label_402b28;
        case 0x402b2cu: goto label_402b2c;
        case 0x402b30u: goto label_402b30;
        case 0x402b34u: goto label_402b34;
        case 0x402b38u: goto label_402b38;
        case 0x402b3cu: goto label_402b3c;
        case 0x402b40u: goto label_402b40;
        case 0x402b44u: goto label_402b44;
        case 0x402b48u: goto label_402b48;
        case 0x402b4cu: goto label_402b4c;
        case 0x402b50u: goto label_402b50;
        case 0x402b54u: goto label_402b54;
        case 0x402b58u: goto label_402b58;
        case 0x402b5cu: goto label_402b5c;
        case 0x402b60u: goto label_402b60;
        case 0x402b64u: goto label_402b64;
        case 0x402b68u: goto label_402b68;
        case 0x402b6cu: goto label_402b6c;
        case 0x402b70u: goto label_402b70;
        case 0x402b74u: goto label_402b74;
        case 0x402b78u: goto label_402b78;
        case 0x402b7cu: goto label_402b7c;
        case 0x402b80u: goto label_402b80;
        case 0x402b84u: goto label_402b84;
        case 0x402b88u: goto label_402b88;
        case 0x402b8cu: goto label_402b8c;
        case 0x402b90u: goto label_402b90;
        case 0x402b94u: goto label_402b94;
        case 0x402b98u: goto label_402b98;
        case 0x402b9cu: goto label_402b9c;
        case 0x402ba0u: goto label_402ba0;
        case 0x402ba4u: goto label_402ba4;
        case 0x402ba8u: goto label_402ba8;
        case 0x402bacu: goto label_402bac;
        case 0x402bb0u: goto label_402bb0;
        case 0x402bb4u: goto label_402bb4;
        case 0x402bb8u: goto label_402bb8;
        case 0x402bbcu: goto label_402bbc;
        case 0x402bc0u: goto label_402bc0;
        case 0x402bc4u: goto label_402bc4;
        case 0x402bc8u: goto label_402bc8;
        case 0x402bccu: goto label_402bcc;
        case 0x402bd0u: goto label_402bd0;
        case 0x402bd4u: goto label_402bd4;
        case 0x402bd8u: goto label_402bd8;
        case 0x402bdcu: goto label_402bdc;
        case 0x402be0u: goto label_402be0;
        case 0x402be4u: goto label_402be4;
        case 0x402be8u: goto label_402be8;
        case 0x402becu: goto label_402bec;
        case 0x402bf0u: goto label_402bf0;
        case 0x402bf4u: goto label_402bf4;
        case 0x402bf8u: goto label_402bf8;
        case 0x402bfcu: goto label_402bfc;
        case 0x402c00u: goto label_402c00;
        case 0x402c04u: goto label_402c04;
        case 0x402c08u: goto label_402c08;
        case 0x402c0cu: goto label_402c0c;
        case 0x402c10u: goto label_402c10;
        case 0x402c14u: goto label_402c14;
        case 0x402c18u: goto label_402c18;
        case 0x402c1cu: goto label_402c1c;
        case 0x402c20u: goto label_402c20;
        case 0x402c24u: goto label_402c24;
        case 0x402c28u: goto label_402c28;
        case 0x402c2cu: goto label_402c2c;
        case 0x402c30u: goto label_402c30;
        case 0x402c34u: goto label_402c34;
        case 0x402c38u: goto label_402c38;
        case 0x402c3cu: goto label_402c3c;
        case 0x402c40u: goto label_402c40;
        case 0x402c44u: goto label_402c44;
        case 0x402c48u: goto label_402c48;
        case 0x402c4cu: goto label_402c4c;
        case 0x402c50u: goto label_402c50;
        case 0x402c54u: goto label_402c54;
        case 0x402c58u: goto label_402c58;
        case 0x402c5cu: goto label_402c5c;
        case 0x402c60u: goto label_402c60;
        case 0x402c64u: goto label_402c64;
        case 0x402c68u: goto label_402c68;
        case 0x402c6cu: goto label_402c6c;
        case 0x402c70u: goto label_402c70;
        case 0x402c74u: goto label_402c74;
        case 0x402c78u: goto label_402c78;
        case 0x402c7cu: goto label_402c7c;
        case 0x402c80u: goto label_402c80;
        case 0x402c84u: goto label_402c84;
        case 0x402c88u: goto label_402c88;
        case 0x402c8cu: goto label_402c8c;
        case 0x402c90u: goto label_402c90;
        case 0x402c94u: goto label_402c94;
        case 0x402c98u: goto label_402c98;
        case 0x402c9cu: goto label_402c9c;
        case 0x402ca0u: goto label_402ca0;
        case 0x402ca4u: goto label_402ca4;
        case 0x402ca8u: goto label_402ca8;
        case 0x402cacu: goto label_402cac;
        case 0x402cb0u: goto label_402cb0;
        case 0x402cb4u: goto label_402cb4;
        case 0x402cb8u: goto label_402cb8;
        case 0x402cbcu: goto label_402cbc;
        case 0x402cc0u: goto label_402cc0;
        case 0x402cc4u: goto label_402cc4;
        case 0x402cc8u: goto label_402cc8;
        case 0x402cccu: goto label_402ccc;
        case 0x402cd0u: goto label_402cd0;
        case 0x402cd4u: goto label_402cd4;
        case 0x402cd8u: goto label_402cd8;
        case 0x402cdcu: goto label_402cdc;
        case 0x402ce0u: goto label_402ce0;
        case 0x402ce4u: goto label_402ce4;
        case 0x402ce8u: goto label_402ce8;
        case 0x402cecu: goto label_402cec;
        case 0x402cf0u: goto label_402cf0;
        case 0x402cf4u: goto label_402cf4;
        case 0x402cf8u: goto label_402cf8;
        case 0x402cfcu: goto label_402cfc;
        case 0x402d00u: goto label_402d00;
        case 0x402d04u: goto label_402d04;
        case 0x402d08u: goto label_402d08;
        case 0x402d0cu: goto label_402d0c;
        default: break;
    }

    ctx->pc = 0x402460u;

label_402460:
    // 0x402460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x402460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_402464:
    // 0x402464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x402464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_402468:
    // 0x402468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x402468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40246c:
    // 0x40246c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40246cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_402470:
    // 0x402470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x402470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_402474:
    // 0x402474: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_402478:
    if (ctx->pc == 0x402478u) {
        ctx->pc = 0x402478u;
            // 0x402478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40247Cu;
        goto label_40247c;
    }
    ctx->pc = 0x402474u;
    {
        const bool branch_taken_0x402474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x402478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402474u;
            // 0x402478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402474) {
            ctx->pc = 0x4025A8u;
            goto label_4025a8;
        }
    }
    ctx->pc = 0x40247Cu;
label_40247c:
    // 0x40247c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40247cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_402480:
    // 0x402480: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x402480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_402484:
    // 0x402484: 0x2463a650  addiu       $v1, $v1, -0x59B0
    ctx->pc = 0x402484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944336));
label_402488:
    // 0x402488: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x402488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_40248c:
    // 0x40248c: 0x2442a688  addiu       $v0, $v0, -0x5978
    ctx->pc = 0x40248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944392));
label_402490:
    // 0x402490: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x402490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_402494:
    // 0x402494: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x402494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_402498:
    // 0x402498: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x402498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_40249c:
    // 0x40249c: 0xc0407c0  jal         func_101F00
label_4024a0:
    if (ctx->pc == 0x4024A0u) {
        ctx->pc = 0x4024A0u;
            // 0x4024a0: 0x24a525c0  addiu       $a1, $a1, 0x25C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9664));
        ctx->pc = 0x4024A4u;
        goto label_4024a4;
    }
    ctx->pc = 0x40249Cu;
    SET_GPR_U32(ctx, 31, 0x4024A4u);
    ctx->pc = 0x4024A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40249Cu;
            // 0x4024a0: 0x24a525c0  addiu       $a1, $a1, 0x25C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4024A4u; }
        if (ctx->pc != 0x4024A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4024A4u; }
        if (ctx->pc != 0x4024A4u) { return; }
    }
    ctx->pc = 0x4024A4u;
label_4024a4:
    // 0x4024a4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4024a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4024a8:
    // 0x4024a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4024ac:
    if (ctx->pc == 0x4024ACu) {
        ctx->pc = 0x4024ACu;
            // 0x4024ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4024B0u;
        goto label_4024b0;
    }
    ctx->pc = 0x4024A8u;
    {
        const bool branch_taken_0x4024a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4024a8) {
            ctx->pc = 0x4024ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4024A8u;
            // 0x4024ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4024BCu;
            goto label_4024bc;
        }
    }
    ctx->pc = 0x4024B0u;
label_4024b0:
    // 0x4024b0: 0xc07507c  jal         func_1D41F0
label_4024b4:
    if (ctx->pc == 0x4024B4u) {
        ctx->pc = 0x4024B4u;
            // 0x4024b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4024B8u;
        goto label_4024b8;
    }
    ctx->pc = 0x4024B0u;
    SET_GPR_U32(ctx, 31, 0x4024B8u);
    ctx->pc = 0x4024B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4024B0u;
            // 0x4024b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4024B8u; }
        if (ctx->pc != 0x4024B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4024B8u; }
        if (ctx->pc != 0x4024B8u) { return; }
    }
    ctx->pc = 0x4024B8u;
label_4024b8:
    // 0x4024b8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4024b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4024bc:
    // 0x4024bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4024c0:
    if (ctx->pc == 0x4024C0u) {
        ctx->pc = 0x4024C0u;
            // 0x4024c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4024C4u;
        goto label_4024c4;
    }
    ctx->pc = 0x4024BCu;
    {
        const bool branch_taken_0x4024bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4024bc) {
            ctx->pc = 0x4024C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4024BCu;
            // 0x4024c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4024ECu;
            goto label_4024ec;
        }
    }
    ctx->pc = 0x4024C4u;
label_4024c4:
    // 0x4024c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4024c8:
    if (ctx->pc == 0x4024C8u) {
        ctx->pc = 0x4024CCu;
        goto label_4024cc;
    }
    ctx->pc = 0x4024C4u;
    {
        const bool branch_taken_0x4024c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4024c4) {
            ctx->pc = 0x4024E8u;
            goto label_4024e8;
        }
    }
    ctx->pc = 0x4024CCu;
label_4024cc:
    // 0x4024cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4024d0:
    if (ctx->pc == 0x4024D0u) {
        ctx->pc = 0x4024D4u;
        goto label_4024d4;
    }
    ctx->pc = 0x4024CCu;
    {
        const bool branch_taken_0x4024cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4024cc) {
            ctx->pc = 0x4024E8u;
            goto label_4024e8;
        }
    }
    ctx->pc = 0x4024D4u;
label_4024d4:
    // 0x4024d4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4024d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4024d8:
    // 0x4024d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4024dc:
    if (ctx->pc == 0x4024DCu) {
        ctx->pc = 0x4024E0u;
        goto label_4024e0;
    }
    ctx->pc = 0x4024D8u;
    {
        const bool branch_taken_0x4024d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4024d8) {
            ctx->pc = 0x4024E8u;
            goto label_4024e8;
        }
    }
    ctx->pc = 0x4024E0u;
label_4024e0:
    // 0x4024e0: 0xc0400a8  jal         func_1002A0
label_4024e4:
    if (ctx->pc == 0x4024E4u) {
        ctx->pc = 0x4024E8u;
        goto label_4024e8;
    }
    ctx->pc = 0x4024E0u;
    SET_GPR_U32(ctx, 31, 0x4024E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4024E8u; }
        if (ctx->pc != 0x4024E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4024E8u; }
        if (ctx->pc != 0x4024E8u) { return; }
    }
    ctx->pc = 0x4024E8u;
label_4024e8:
    // 0x4024e8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4024e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4024ec:
    // 0x4024ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4024f0:
    if (ctx->pc == 0x4024F0u) {
        ctx->pc = 0x4024F0u;
            // 0x4024f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4024F4u;
        goto label_4024f4;
    }
    ctx->pc = 0x4024ECu;
    {
        const bool branch_taken_0x4024ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4024ec) {
            ctx->pc = 0x4024F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4024ECu;
            // 0x4024f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40251Cu;
            goto label_40251c;
        }
    }
    ctx->pc = 0x4024F4u;
label_4024f4:
    // 0x4024f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4024f8:
    if (ctx->pc == 0x4024F8u) {
        ctx->pc = 0x4024FCu;
        goto label_4024fc;
    }
    ctx->pc = 0x4024F4u;
    {
        const bool branch_taken_0x4024f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4024f4) {
            ctx->pc = 0x402518u;
            goto label_402518;
        }
    }
    ctx->pc = 0x4024FCu;
label_4024fc:
    // 0x4024fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_402500:
    if (ctx->pc == 0x402500u) {
        ctx->pc = 0x402504u;
        goto label_402504;
    }
    ctx->pc = 0x4024FCu;
    {
        const bool branch_taken_0x4024fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4024fc) {
            ctx->pc = 0x402518u;
            goto label_402518;
        }
    }
    ctx->pc = 0x402504u;
label_402504:
    // 0x402504: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x402504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_402508:
    // 0x402508: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_40250c:
    if (ctx->pc == 0x40250Cu) {
        ctx->pc = 0x402510u;
        goto label_402510;
    }
    ctx->pc = 0x402508u;
    {
        const bool branch_taken_0x402508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x402508) {
            ctx->pc = 0x402518u;
            goto label_402518;
        }
    }
    ctx->pc = 0x402510u;
label_402510:
    // 0x402510: 0xc0400a8  jal         func_1002A0
label_402514:
    if (ctx->pc == 0x402514u) {
        ctx->pc = 0x402518u;
        goto label_402518;
    }
    ctx->pc = 0x402510u;
    SET_GPR_U32(ctx, 31, 0x402518u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402518u; }
        if (ctx->pc != 0x402518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402518u; }
        if (ctx->pc != 0x402518u) { return; }
    }
    ctx->pc = 0x402518u;
label_402518:
    // 0x402518: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x402518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_40251c:
    // 0x40251c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_402520:
    if (ctx->pc == 0x402520u) {
        ctx->pc = 0x402524u;
        goto label_402524;
    }
    ctx->pc = 0x40251Cu;
    {
        const bool branch_taken_0x40251c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40251c) {
            ctx->pc = 0x402538u;
            goto label_402538;
        }
    }
    ctx->pc = 0x402524u;
label_402524:
    // 0x402524: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x402524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_402528:
    // 0x402528: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x402528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40252c:
    // 0x40252c: 0x2463a638  addiu       $v1, $v1, -0x59C8
    ctx->pc = 0x40252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944312));
label_402530:
    // 0x402530: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x402530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_402534:
    // 0x402534: 0xac407290  sw          $zero, 0x7290($v0)
    ctx->pc = 0x402534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29328), GPR_U32(ctx, 0));
label_402538:
    // 0x402538: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_40253c:
    if (ctx->pc == 0x40253Cu) {
        ctx->pc = 0x40253Cu;
            // 0x40253c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x402540u;
        goto label_402540;
    }
    ctx->pc = 0x402538u;
    {
        const bool branch_taken_0x402538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x402538) {
            ctx->pc = 0x40253Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402538u;
            // 0x40253c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402594u;
            goto label_402594;
        }
    }
    ctx->pc = 0x402540u;
label_402540:
    // 0x402540: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x402540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_402544:
    // 0x402544: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x402544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_402548:
    // 0x402548: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x402548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_40254c:
    // 0x40254c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x40254cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_402550:
    // 0x402550: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_402554:
    if (ctx->pc == 0x402554u) {
        ctx->pc = 0x402554u;
            // 0x402554: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x402558u;
        goto label_402558;
    }
    ctx->pc = 0x402550u;
    {
        const bool branch_taken_0x402550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x402550) {
            ctx->pc = 0x402554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402550u;
            // 0x402554: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40256Cu;
            goto label_40256c;
        }
    }
    ctx->pc = 0x402558u;
label_402558:
    // 0x402558: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x402558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40255c:
    // 0x40255c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40255cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_402560:
    // 0x402560: 0x320f809  jalr        $t9
label_402564:
    if (ctx->pc == 0x402564u) {
        ctx->pc = 0x402564u;
            // 0x402564: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x402568u;
        goto label_402568;
    }
    ctx->pc = 0x402560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x402568u);
        ctx->pc = 0x402564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402560u;
            // 0x402564: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x402568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x402568u; }
            if (ctx->pc != 0x402568u) { return; }
        }
        }
    }
    ctx->pc = 0x402568u;
label_402568:
    // 0x402568: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x402568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_40256c:
    // 0x40256c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_402570:
    if (ctx->pc == 0x402570u) {
        ctx->pc = 0x402570u;
            // 0x402570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x402574u;
        goto label_402574;
    }
    ctx->pc = 0x40256Cu;
    {
        const bool branch_taken_0x40256c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40256c) {
            ctx->pc = 0x402570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40256Cu;
            // 0x402570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402588u;
            goto label_402588;
        }
    }
    ctx->pc = 0x402574u;
label_402574:
    // 0x402574: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x402574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_402578:
    // 0x402578: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x402578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_40257c:
    // 0x40257c: 0x320f809  jalr        $t9
label_402580:
    if (ctx->pc == 0x402580u) {
        ctx->pc = 0x402580u;
            // 0x402580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x402584u;
        goto label_402584;
    }
    ctx->pc = 0x40257Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x402584u);
        ctx->pc = 0x402580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40257Cu;
            // 0x402580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x402584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x402584u; }
            if (ctx->pc != 0x402584u) { return; }
        }
        }
    }
    ctx->pc = 0x402584u;
label_402584:
    // 0x402584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x402584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_402588:
    // 0x402588: 0xc075bf8  jal         func_1D6FE0
label_40258c:
    if (ctx->pc == 0x40258Cu) {
        ctx->pc = 0x40258Cu;
            // 0x40258c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x402590u;
        goto label_402590;
    }
    ctx->pc = 0x402588u;
    SET_GPR_U32(ctx, 31, 0x402590u);
    ctx->pc = 0x40258Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402588u;
            // 0x40258c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402590u; }
        if (ctx->pc != 0x402590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402590u; }
        if (ctx->pc != 0x402590u) { return; }
    }
    ctx->pc = 0x402590u;
label_402590:
    // 0x402590: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x402590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_402594:
    // 0x402594: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x402594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_402598:
    // 0x402598: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_40259c:
    if (ctx->pc == 0x40259Cu) {
        ctx->pc = 0x40259Cu;
            // 0x40259c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4025A0u;
        goto label_4025a0;
    }
    ctx->pc = 0x402598u;
    {
        const bool branch_taken_0x402598 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x402598) {
            ctx->pc = 0x40259Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402598u;
            // 0x40259c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4025ACu;
            goto label_4025ac;
        }
    }
    ctx->pc = 0x4025A0u;
label_4025a0:
    // 0x4025a0: 0xc0400a8  jal         func_1002A0
label_4025a4:
    if (ctx->pc == 0x4025A4u) {
        ctx->pc = 0x4025A4u;
            // 0x4025a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4025A8u;
        goto label_4025a8;
    }
    ctx->pc = 0x4025A0u;
    SET_GPR_U32(ctx, 31, 0x4025A8u);
    ctx->pc = 0x4025A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4025A0u;
            // 0x4025a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4025A8u; }
        if (ctx->pc != 0x4025A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4025A8u; }
        if (ctx->pc != 0x4025A8u) { return; }
    }
    ctx->pc = 0x4025A8u;
label_4025a8:
    // 0x4025a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4025a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4025ac:
    // 0x4025ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4025acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4025b0:
    // 0x4025b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4025b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4025b4:
    // 0x4025b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4025b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4025b8:
    // 0x4025b8: 0x3e00008  jr          $ra
label_4025bc:
    if (ctx->pc == 0x4025BCu) {
        ctx->pc = 0x4025BCu;
            // 0x4025bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4025C0u;
        goto label_4025c0;
    }
    ctx->pc = 0x4025B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4025BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4025B8u;
            // 0x4025bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4025C0u;
label_4025c0:
    // 0x4025c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4025c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4025c4:
    // 0x4025c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4025c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4025c8:
    // 0x4025c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4025c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4025cc:
    // 0x4025cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4025ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4025d0:
    // 0x4025d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4025d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4025d4:
    // 0x4025d4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_4025d8:
    if (ctx->pc == 0x4025D8u) {
        ctx->pc = 0x4025D8u;
            // 0x4025d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4025DCu;
        goto label_4025dc;
    }
    ctx->pc = 0x4025D4u;
    {
        const bool branch_taken_0x4025d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4025D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4025D4u;
            // 0x4025d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4025d4) {
            ctx->pc = 0x40269Cu;
            goto label_40269c;
        }
    }
    ctx->pc = 0x4025DCu;
label_4025dc:
    // 0x4025dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4025dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4025e0:
    // 0x4025e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4025e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4025e4:
    // 0x4025e4: 0x2463a6f0  addiu       $v1, $v1, -0x5910
    ctx->pc = 0x4025e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944496));
label_4025e8:
    // 0x4025e8: 0x2442a730  addiu       $v0, $v0, -0x58D0
    ctx->pc = 0x4025e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944560));
label_4025ec:
    // 0x4025ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4025ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4025f0:
    // 0x4025f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4025f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4025f4:
    // 0x4025f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4025f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4025f8:
    // 0x4025f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4025f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4025fc:
    // 0x4025fc: 0x320f809  jalr        $t9
label_402600:
    if (ctx->pc == 0x402600u) {
        ctx->pc = 0x402604u;
        goto label_402604;
    }
    ctx->pc = 0x4025FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x402604u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x402604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x402604u; }
            if (ctx->pc != 0x402604u) { return; }
        }
        }
    }
    ctx->pc = 0x402604u;
label_402604:
    // 0x402604: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_402608:
    if (ctx->pc == 0x402608u) {
        ctx->pc = 0x402608u;
            // 0x402608: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x40260Cu;
        goto label_40260c;
    }
    ctx->pc = 0x402604u;
    {
        const bool branch_taken_0x402604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x402604) {
            ctx->pc = 0x402608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402604u;
            // 0x402608: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402688u;
            goto label_402688;
        }
    }
    ctx->pc = 0x40260Cu;
label_40260c:
    // 0x40260c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40260cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_402610:
    // 0x402610: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x402610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_402614:
    // 0x402614: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x402614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_402618:
    // 0x402618: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x402618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_40261c:
    // 0x40261c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40261cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_402620:
    // 0x402620: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x402620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_402624:
    // 0x402624: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x402624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_402628:
    // 0x402628: 0xc0aecc4  jal         func_2BB310
label_40262c:
    if (ctx->pc == 0x40262Cu) {
        ctx->pc = 0x40262Cu;
            // 0x40262c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x402630u;
        goto label_402630;
    }
    ctx->pc = 0x402628u;
    SET_GPR_U32(ctx, 31, 0x402630u);
    ctx->pc = 0x40262Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402628u;
            // 0x40262c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402630u; }
        if (ctx->pc != 0x402630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402630u; }
        if (ctx->pc != 0x402630u) { return; }
    }
    ctx->pc = 0x402630u;
label_402630:
    // 0x402630: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x402630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_402634:
    // 0x402634: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x402634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_402638:
    // 0x402638: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40263c:
    if (ctx->pc == 0x40263Cu) {
        ctx->pc = 0x40263Cu;
            // 0x40263c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x402640u;
        goto label_402640;
    }
    ctx->pc = 0x402638u;
    {
        const bool branch_taken_0x402638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x402638) {
            ctx->pc = 0x40263Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402638u;
            // 0x40263c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402654u;
            goto label_402654;
        }
    }
    ctx->pc = 0x402640u;
label_402640:
    // 0x402640: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x402640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_402644:
    // 0x402644: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x402644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_402648:
    // 0x402648: 0x320f809  jalr        $t9
label_40264c:
    if (ctx->pc == 0x40264Cu) {
        ctx->pc = 0x40264Cu;
            // 0x40264c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x402650u;
        goto label_402650;
    }
    ctx->pc = 0x402648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x402650u);
        ctx->pc = 0x40264Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402648u;
            // 0x40264c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x402650u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x402650u; }
            if (ctx->pc != 0x402650u) { return; }
        }
        }
    }
    ctx->pc = 0x402650u;
label_402650:
    // 0x402650: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x402650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_402654:
    // 0x402654: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x402654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_402658:
    // 0x402658: 0xc0aec9c  jal         func_2BB270
label_40265c:
    if (ctx->pc == 0x40265Cu) {
        ctx->pc = 0x40265Cu;
            // 0x40265c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x402660u;
        goto label_402660;
    }
    ctx->pc = 0x402658u;
    SET_GPR_U32(ctx, 31, 0x402660u);
    ctx->pc = 0x40265Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402658u;
            // 0x40265c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402660u; }
        if (ctx->pc != 0x402660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402660u; }
        if (ctx->pc != 0x402660u) { return; }
    }
    ctx->pc = 0x402660u;
label_402660:
    // 0x402660: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x402660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_402664:
    // 0x402664: 0xc0aec88  jal         func_2BB220
label_402668:
    if (ctx->pc == 0x402668u) {
        ctx->pc = 0x402668u;
            // 0x402668: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x40266Cu;
        goto label_40266c;
    }
    ctx->pc = 0x402664u;
    SET_GPR_U32(ctx, 31, 0x40266Cu);
    ctx->pc = 0x402668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402664u;
            // 0x402668: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40266Cu; }
        if (ctx->pc != 0x40266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40266Cu; }
        if (ctx->pc != 0x40266Cu) { return; }
    }
    ctx->pc = 0x40266Cu;
label_40266c:
    // 0x40266c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x40266cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_402670:
    // 0x402670: 0xc0aec0c  jal         func_2BB030
label_402674:
    if (ctx->pc == 0x402674u) {
        ctx->pc = 0x402674u;
            // 0x402674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x402678u;
        goto label_402678;
    }
    ctx->pc = 0x402670u;
    SET_GPR_U32(ctx, 31, 0x402678u);
    ctx->pc = 0x402674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402670u;
            // 0x402674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402678u; }
        if (ctx->pc != 0x402678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402678u; }
        if (ctx->pc != 0x402678u) { return; }
    }
    ctx->pc = 0x402678u;
label_402678:
    // 0x402678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40267c:
    // 0x40267c: 0xc0aeaa8  jal         func_2BAAA0
label_402680:
    if (ctx->pc == 0x402680u) {
        ctx->pc = 0x402680u;
            // 0x402680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x402684u;
        goto label_402684;
    }
    ctx->pc = 0x40267Cu;
    SET_GPR_U32(ctx, 31, 0x402684u);
    ctx->pc = 0x402680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40267Cu;
            // 0x402680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402684u; }
        if (ctx->pc != 0x402684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402684u; }
        if (ctx->pc != 0x402684u) { return; }
    }
    ctx->pc = 0x402684u;
label_402684:
    // 0x402684: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x402684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_402688:
    // 0x402688: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x402688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_40268c:
    // 0x40268c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_402690:
    if (ctx->pc == 0x402690u) {
        ctx->pc = 0x402690u;
            // 0x402690: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x402694u;
        goto label_402694;
    }
    ctx->pc = 0x40268Cu;
    {
        const bool branch_taken_0x40268c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x40268c) {
            ctx->pc = 0x402690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40268Cu;
            // 0x402690: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4026A0u;
            goto label_4026a0;
        }
    }
    ctx->pc = 0x402694u;
label_402694:
    // 0x402694: 0xc0400a8  jal         func_1002A0
label_402698:
    if (ctx->pc == 0x402698u) {
        ctx->pc = 0x402698u;
            // 0x402698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40269Cu;
        goto label_40269c;
    }
    ctx->pc = 0x402694u;
    SET_GPR_U32(ctx, 31, 0x40269Cu);
    ctx->pc = 0x402698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402694u;
            // 0x402698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40269Cu; }
        if (ctx->pc != 0x40269Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40269Cu; }
        if (ctx->pc != 0x40269Cu) { return; }
    }
    ctx->pc = 0x40269Cu;
label_40269c:
    // 0x40269c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40269cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4026a0:
    // 0x4026a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4026a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4026a4:
    // 0x4026a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4026a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4026a8:
    // 0x4026a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4026a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4026ac:
    // 0x4026ac: 0x3e00008  jr          $ra
label_4026b0:
    if (ctx->pc == 0x4026B0u) {
        ctx->pc = 0x4026B0u;
            // 0x4026b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4026B4u;
        goto label_4026b4;
    }
    ctx->pc = 0x4026ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4026B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4026ACu;
            // 0x4026b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4026B4u;
label_4026b4:
    // 0x4026b4: 0x0  nop
    ctx->pc = 0x4026b4u;
    // NOP
label_4026b8:
    // 0x4026b8: 0x0  nop
    ctx->pc = 0x4026b8u;
    // NOP
label_4026bc:
    // 0x4026bc: 0x0  nop
    ctx->pc = 0x4026bcu;
    // NOP
label_4026c0:
    // 0x4026c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4026c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4026c4:
    // 0x4026c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4026c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4026c8:
    // 0x4026c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4026c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4026cc:
    // 0x4026cc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4026ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4026d0:
    // 0x4026d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4026d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4026d4:
    // 0x4026d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4026d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4026d8:
    // 0x4026d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4026d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4026dc:
    // 0x4026dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4026dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4026e0:
    // 0x4026e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4026e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4026e4:
    // 0x4026e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4026e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4026e8:
    // 0x4026e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4026e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4026ec:
    // 0x4026ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4026ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4026f0:
    // 0x4026f0: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4026f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4026f4:
    // 0x4026f4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4026f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4026f8:
    // 0x4026f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4026f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4026fc:
    // 0x4026fc: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_402700:
    if (ctx->pc == 0x402700u) {
        ctx->pc = 0x402700u;
            // 0x402700: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x402704u;
        goto label_402704;
    }
    ctx->pc = 0x4026FCu;
    {
        const bool branch_taken_0x4026fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x402700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4026FCu;
            // 0x402700: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4026fc) {
            ctx->pc = 0x402740u;
            goto label_402740;
        }
    }
    ctx->pc = 0x402704u;
label_402704:
    // 0x402704: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x402704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_402708:
    // 0x402708: 0x50a300d2  beql        $a1, $v1, . + 4 + (0xD2 << 2)
label_40270c:
    if (ctx->pc == 0x40270Cu) {
        ctx->pc = 0x40270Cu;
            // 0x40270c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x402710u;
        goto label_402710;
    }
    ctx->pc = 0x402708u;
    {
        const bool branch_taken_0x402708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x402708) {
            ctx->pc = 0x40270Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402708u;
            // 0x40270c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402A54u;
            goto label_402a54;
        }
    }
    ctx->pc = 0x402710u;
label_402710:
    // 0x402710: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x402710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_402714:
    // 0x402714: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_402718:
    if (ctx->pc == 0x402718u) {
        ctx->pc = 0x402718u;
            // 0x402718: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x40271Cu;
        goto label_40271c;
    }
    ctx->pc = 0x402714u;
    {
        const bool branch_taken_0x402714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x402714) {
            ctx->pc = 0x402718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402714u;
            // 0x402718: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402724u;
            goto label_402724;
        }
    }
    ctx->pc = 0x40271Cu;
label_40271c:
    // 0x40271c: 0x100000cc  b           . + 4 + (0xCC << 2)
label_402720:
    if (ctx->pc == 0x402720u) {
        ctx->pc = 0x402724u;
        goto label_402724;
    }
    ctx->pc = 0x40271Cu;
    {
        const bool branch_taken_0x40271c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40271c) {
            ctx->pc = 0x402A50u;
            goto label_402a50;
        }
    }
    ctx->pc = 0x402724u;
label_402724:
    // 0x402724: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x402724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_402728:
    // 0x402728: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x402728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_40272c:
    // 0x40272c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x40272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_402730:
    // 0x402730: 0x320f809  jalr        $t9
label_402734:
    if (ctx->pc == 0x402734u) {
        ctx->pc = 0x402734u;
            // 0x402734: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x402738u;
        goto label_402738;
    }
    ctx->pc = 0x402730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x402738u);
        ctx->pc = 0x402734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402730u;
            // 0x402734: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x402738u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x402738u; }
            if (ctx->pc != 0x402738u) { return; }
        }
        }
    }
    ctx->pc = 0x402738u;
label_402738:
    // 0x402738: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_40273c:
    if (ctx->pc == 0x40273Cu) {
        ctx->pc = 0x402740u;
        goto label_402740;
    }
    ctx->pc = 0x402738u;
    {
        const bool branch_taken_0x402738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x402738) {
            ctx->pc = 0x402A50u;
            goto label_402a50;
        }
    }
    ctx->pc = 0x402740u;
label_402740:
    // 0x402740: 0x8e330070  lw          $s3, 0x70($s1)
    ctx->pc = 0x402740u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_402744:
    // 0x402744: 0x126000c2  beqz        $s3, . + 4 + (0xC2 << 2)
label_402748:
    if (ctx->pc == 0x402748u) {
        ctx->pc = 0x40274Cu;
        goto label_40274c;
    }
    ctx->pc = 0x402744u;
    {
        const bool branch_taken_0x402744 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x402744) {
            ctx->pc = 0x402A50u;
            goto label_402a50;
        }
    }
    ctx->pc = 0x40274Cu;
label_40274c:
    // 0x40274c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40274cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_402750:
    // 0x402750: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x402750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_402754:
    // 0x402754: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x402754u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_402758:
    // 0x402758: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x402758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_40275c:
    // 0x40275c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x40275cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_402760:
    // 0x402760: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x402760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_402764:
    // 0x402764: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x402764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_402768:
    // 0x402768: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x402768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_40276c:
    // 0x40276c: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x40276cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_402770:
    // 0x402770: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x402770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_402774:
    // 0x402774: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x402774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_402778:
    // 0x402778: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x402778u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_40277c:
    // 0x40277c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40277cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_402780:
    // 0x402780: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x402780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_402784:
    // 0x402784: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x402784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_402788:
    // 0x402788: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x402788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_40278c:
    // 0x40278c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x40278cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_402790:
    // 0x402790: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x402790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_402794:
    // 0x402794: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x402794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_402798:
    // 0x402798: 0xc04e738  jal         func_139CE0
label_40279c:
    if (ctx->pc == 0x40279Cu) {
        ctx->pc = 0x40279Cu;
            // 0x40279c: 0x26300084  addiu       $s0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x4027A0u;
        goto label_4027a0;
    }
    ctx->pc = 0x402798u;
    SET_GPR_U32(ctx, 31, 0x4027A0u);
    ctx->pc = 0x40279Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402798u;
            // 0x40279c: 0x26300084  addiu       $s0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4027A0u; }
        if (ctx->pc != 0x4027A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4027A0u; }
        if (ctx->pc != 0x4027A0u) { return; }
    }
    ctx->pc = 0x4027A0u;
label_4027a0:
    // 0x4027a0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4027a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4027a4:
    // 0x4027a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4027a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4027a8:
    // 0x4027a8: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x4027a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4027ac:
    // 0x4027ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4027acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4027b0:
    // 0x4027b0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4027b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4027b4:
    // 0x4027b4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4027b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4027b8:
    // 0x4027b8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x4027b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4027bc:
    // 0x4027bc: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x4027bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4027c0:
    // 0x4027c0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4027c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4027c4:
    // 0x4027c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4027c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4027c8:
    // 0x4027c8: 0xc100e38  jal         func_4038E0
label_4027cc:
    if (ctx->pc == 0x4027CCu) {
        ctx->pc = 0x4027CCu;
            // 0x4027cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4027D0u;
        goto label_4027d0;
    }
    ctx->pc = 0x4027C8u;
    SET_GPR_U32(ctx, 31, 0x4027D0u);
    ctx->pc = 0x4027CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4027C8u;
            // 0x4027cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4038E0u;
    if (runtime->hasFunction(0x4038E0u)) {
        auto targetFn = runtime->lookupFunction(0x4038E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4027D0u; }
        if (ctx->pc != 0x4027D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004038E0_0x4038e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4027D0u; }
        if (ctx->pc != 0x4027D0u) { return; }
    }
    ctx->pc = 0x4027D0u;
label_4027d0:
    // 0x4027d0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_4027d4:
    if (ctx->pc == 0x4027D4u) {
        ctx->pc = 0x4027D8u;
        goto label_4027d8;
    }
    ctx->pc = 0x4027D0u;
    {
        const bool branch_taken_0x4027d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4027d0) {
            ctx->pc = 0x402828u;
            goto label_402828;
        }
    }
    ctx->pc = 0x4027D8u;
label_4027d8:
    // 0x4027d8: 0x8e32008c  lw          $s2, 0x8C($s1)
    ctx->pc = 0x4027d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_4027dc:
    // 0x4027dc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x4027dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4027e0:
    // 0x4027e0: 0x86430066  lh          $v1, 0x66($s2)
    ctx->pc = 0x4027e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4027e4:
    // 0x4027e4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4027e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4027e8:
    // 0x4027e8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4027e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4027ec:
    // 0x4027ec: 0xc04cce8  jal         func_1333A0
label_4027f0:
    if (ctx->pc == 0x4027F0u) {
        ctx->pc = 0x4027F0u;
            // 0x4027f0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4027F4u;
        goto label_4027f4;
    }
    ctx->pc = 0x4027ECu;
    SET_GPR_U32(ctx, 31, 0x4027F4u);
    ctx->pc = 0x4027F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4027ECu;
            // 0x4027f0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4027F4u; }
        if (ctx->pc != 0x4027F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4027F4u; }
        if (ctx->pc != 0x4027F4u) { return; }
    }
    ctx->pc = 0x4027F4u;
label_4027f4:
    // 0x4027f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4027f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4027f8:
    // 0x4027f8: 0x86440066  lh          $a0, 0x66($s2)
    ctx->pc = 0x4027f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4027fc:
    // 0x4027fc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4027fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_402800:
    // 0x402800: 0x86430064  lh          $v1, 0x64($s2)
    ctx->pc = 0x402800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
label_402804:
    // 0x402804: 0x9042007e  lbu         $v0, 0x7E($v0)
    ctx->pc = 0x402804u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 126)));
label_402808:
    // 0x402808: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x402808u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_40280c:
    // 0x40280c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x40280cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_402810:
    // 0x402810: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x402810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_402814:
    // 0x402814: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x402814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_402818:
    // 0x402818: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x402818u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_40281c:
    // 0x40281c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x40281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_402820:
    // 0x402820: 0xa6420066  sh          $v0, 0x66($s2)
    ctx->pc = 0x402820u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 2));
label_402824:
    // 0x402824: 0x0  nop
    ctx->pc = 0x402824u;
    // NOP
label_402828:
    // 0x402828: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x402828u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_40282c:
    // 0x40282c: 0x2b3102b  sltu        $v0, $s5, $s3
    ctx->pc = 0x40282cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_402830:
    // 0x402830: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_402834:
    if (ctx->pc == 0x402834u) {
        ctx->pc = 0x402834u;
            // 0x402834: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x402838u;
        goto label_402838;
    }
    ctx->pc = 0x402830u;
    {
        const bool branch_taken_0x402830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x402834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402830u;
            // 0x402834: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402830) {
            ctx->pc = 0x4027A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4027a8;
        }
    }
    ctx->pc = 0x402838u;
label_402838:
    // 0x402838: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x402838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_40283c:
    // 0x40283c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40283cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_402840:
    // 0x402840: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x402840u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_402844:
    // 0x402844: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x402844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_402848:
    // 0x402848: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x402848u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_40284c:
    // 0x40284c: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x40284cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_402850:
    // 0x402850: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_402854:
    if (ctx->pc == 0x402854u) {
        ctx->pc = 0x402854u;
            // 0x402854: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x402858u;
        goto label_402858;
    }
    ctx->pc = 0x402850u;
    {
        const bool branch_taken_0x402850 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x402854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402850u;
            // 0x402854: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402850) {
            ctx->pc = 0x402874u;
            goto label_402874;
        }
    }
    ctx->pc = 0x402858u;
label_402858:
    // 0x402858: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x402858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40285c:
    // 0x40285c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40285cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_402860:
    // 0x402860: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x402860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_402864:
    // 0x402864: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x402864u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_402868:
    // 0x402868: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x402868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_40286c:
    // 0x40286c: 0xc055990  jal         func_156640
label_402870:
    if (ctx->pc == 0x402870u) {
        ctx->pc = 0x402870u;
            // 0x402870: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x402874u;
        goto label_402874;
    }
    ctx->pc = 0x40286Cu;
    SET_GPR_U32(ctx, 31, 0x402874u);
    ctx->pc = 0x402870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40286Cu;
            // 0x402870: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402874u; }
        if (ctx->pc != 0x402874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402874u; }
        if (ctx->pc != 0x402874u) { return; }
    }
    ctx->pc = 0x402874u;
label_402874:
    // 0x402874: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x402874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_402878:
    // 0x402878: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x402878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40287c:
    // 0x40287c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x40287cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_402880:
    // 0x402880: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x402880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_402884:
    // 0x402884: 0xc04e738  jal         func_139CE0
label_402888:
    if (ctx->pc == 0x402888u) {
        ctx->pc = 0x402888u;
            // 0x402888: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x40288Cu;
        goto label_40288c;
    }
    ctx->pc = 0x402884u;
    SET_GPR_U32(ctx, 31, 0x40288Cu);
    ctx->pc = 0x402888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402884u;
            // 0x402888: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40288Cu; }
        if (ctx->pc != 0x40288Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40288Cu; }
        if (ctx->pc != 0x40288Cu) { return; }
    }
    ctx->pc = 0x40288Cu;
label_40288c:
    // 0x40288c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x40288cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_402890:
    // 0x402890: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x402890u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_402894:
    // 0x402894: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x402894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_402898:
    // 0x402898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x402898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40289c:
    // 0x40289c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x40289cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4028a0:
    // 0x4028a0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4028a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4028a4:
    // 0x4028a4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x4028a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4028a8:
    // 0x4028a8: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x4028a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4028ac:
    // 0x4028ac: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4028acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4028b0:
    // 0x4028b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4028b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4028b4:
    // 0x4028b4: 0xc100e38  jal         func_4038E0
label_4028b8:
    if (ctx->pc == 0x4028B8u) {
        ctx->pc = 0x4028B8u;
            // 0x4028b8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4028BCu;
        goto label_4028bc;
    }
    ctx->pc = 0x4028B4u;
    SET_GPR_U32(ctx, 31, 0x4028BCu);
    ctx->pc = 0x4028B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4028B4u;
            // 0x4028b8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4038E0u;
    if (runtime->hasFunction(0x4038E0u)) {
        auto targetFn = runtime->lookupFunction(0x4038E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4028BCu; }
        if (ctx->pc != 0x4028BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004038E0_0x4038e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4028BCu; }
        if (ctx->pc != 0x4028BCu) { return; }
    }
    ctx->pc = 0x4028BCu;
label_4028bc:
    // 0x4028bc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_4028c0:
    if (ctx->pc == 0x4028C0u) {
        ctx->pc = 0x4028C4u;
        goto label_4028c4;
    }
    ctx->pc = 0x4028BCu;
    {
        const bool branch_taken_0x4028bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4028bc) {
            ctx->pc = 0x402910u;
            goto label_402910;
        }
    }
    ctx->pc = 0x4028C4u;
label_4028c4:
    // 0x4028c4: 0x8e32008c  lw          $s2, 0x8C($s1)
    ctx->pc = 0x4028c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_4028c8:
    // 0x4028c8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x4028c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4028cc:
    // 0x4028cc: 0x86430066  lh          $v1, 0x66($s2)
    ctx->pc = 0x4028ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4028d0:
    // 0x4028d0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4028d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4028d4:
    // 0x4028d4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4028d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4028d8:
    // 0x4028d8: 0xc04cce8  jal         func_1333A0
label_4028dc:
    if (ctx->pc == 0x4028DCu) {
        ctx->pc = 0x4028DCu;
            // 0x4028dc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4028E0u;
        goto label_4028e0;
    }
    ctx->pc = 0x4028D8u;
    SET_GPR_U32(ctx, 31, 0x4028E0u);
    ctx->pc = 0x4028DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4028D8u;
            // 0x4028dc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4028E0u; }
        if (ctx->pc != 0x4028E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4028E0u; }
        if (ctx->pc != 0x4028E0u) { return; }
    }
    ctx->pc = 0x4028E0u;
label_4028e0:
    // 0x4028e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4028e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4028e4:
    // 0x4028e4: 0x86440066  lh          $a0, 0x66($s2)
    ctx->pc = 0x4028e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4028e8:
    // 0x4028e8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4028e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4028ec:
    // 0x4028ec: 0x86430064  lh          $v1, 0x64($s2)
    ctx->pc = 0x4028ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
label_4028f0:
    // 0x4028f0: 0x9042007e  lbu         $v0, 0x7E($v0)
    ctx->pc = 0x4028f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 126)));
label_4028f4:
    // 0x4028f4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x4028f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4028f8:
    // 0x4028f8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4028f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_4028fc:
    // 0x4028fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4028fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_402900:
    // 0x402900: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x402900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_402904:
    // 0x402904: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x402904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_402908:
    // 0x402908: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x402908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_40290c:
    // 0x40290c: 0xa6420066  sh          $v0, 0x66($s2)
    ctx->pc = 0x40290cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 2));
label_402910:
    // 0x402910: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x402910u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_402914:
    // 0x402914: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x402914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_402918:
    // 0x402918: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_40291c:
    if (ctx->pc == 0x40291Cu) {
        ctx->pc = 0x40291Cu;
            // 0x40291c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x402920u;
        goto label_402920;
    }
    ctx->pc = 0x402918u;
    {
        const bool branch_taken_0x402918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40291Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402918u;
            // 0x40291c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402918) {
            ctx->pc = 0x402894u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_402894;
        }
    }
    ctx->pc = 0x402920u;
label_402920:
    // 0x402920: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x402920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_402924:
    // 0x402924: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x402924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_402928:
    // 0x402928: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x402928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40292c:
    // 0x40292c: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x40292cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_402930:
    // 0x402930: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x402930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_402934:
    // 0x402934: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x402934u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_402938:
    // 0x402938: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x402938u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_40293c:
    // 0x40293c: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_402940:
    if (ctx->pc == 0x402940u) {
        ctx->pc = 0x402940u;
            // 0x402940: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x402944u;
        goto label_402944;
    }
    ctx->pc = 0x40293Cu;
    {
        const bool branch_taken_0x40293c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x402940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40293Cu;
            // 0x402940: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40293c) {
            ctx->pc = 0x402960u;
            goto label_402960;
        }
    }
    ctx->pc = 0x402944u;
label_402944:
    // 0x402944: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x402944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_402948:
    // 0x402948: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x402948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40294c:
    // 0x40294c: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x40294cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_402950:
    // 0x402950: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x402950u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_402954:
    // 0x402954: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x402954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_402958:
    // 0x402958: 0xc055990  jal         func_156640
label_40295c:
    if (ctx->pc == 0x40295Cu) {
        ctx->pc = 0x40295Cu;
            // 0x40295c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x402960u;
        goto label_402960;
    }
    ctx->pc = 0x402958u;
    SET_GPR_U32(ctx, 31, 0x402960u);
    ctx->pc = 0x40295Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402958u;
            // 0x40295c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402960u; }
        if (ctx->pc != 0x402960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402960u; }
        if (ctx->pc != 0x402960u) { return; }
    }
    ctx->pc = 0x402960u;
label_402960:
    // 0x402960: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x402960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_402964:
    // 0x402964: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x402964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_402968:
    // 0x402968: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x402968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_40296c:
    // 0x40296c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x40296cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_402970:
    // 0x402970: 0xc04e738  jal         func_139CE0
label_402974:
    if (ctx->pc == 0x402974u) {
        ctx->pc = 0x402974u;
            // 0x402974: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x402978u;
        goto label_402978;
    }
    ctx->pc = 0x402970u;
    SET_GPR_U32(ctx, 31, 0x402978u);
    ctx->pc = 0x402974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402970u;
            // 0x402974: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402978u; }
        if (ctx->pc != 0x402978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402978u; }
        if (ctx->pc != 0x402978u) { return; }
    }
    ctx->pc = 0x402978u;
label_402978:
    // 0x402978: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x402978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40297c:
    // 0x40297c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x40297cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_402980:
    // 0x402980: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x402980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_402984:
    // 0x402984: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x402984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402988:
    // 0x402988: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x402988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_40298c:
    // 0x40298c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x40298cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_402990:
    // 0x402990: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x402990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_402994:
    // 0x402994: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x402994u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_402998:
    // 0x402998: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x402998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_40299c:
    // 0x40299c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x40299cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4029a0:
    // 0x4029a0: 0xc100e38  jal         func_4038E0
label_4029a4:
    if (ctx->pc == 0x4029A4u) {
        ctx->pc = 0x4029A4u;
            // 0x4029a4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4029A8u;
        goto label_4029a8;
    }
    ctx->pc = 0x4029A0u;
    SET_GPR_U32(ctx, 31, 0x4029A8u);
    ctx->pc = 0x4029A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4029A0u;
            // 0x4029a4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4038E0u;
    if (runtime->hasFunction(0x4038E0u)) {
        auto targetFn = runtime->lookupFunction(0x4038E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4029A8u; }
        if (ctx->pc != 0x4029A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004038E0_0x4038e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4029A8u; }
        if (ctx->pc != 0x4029A8u) { return; }
    }
    ctx->pc = 0x4029A8u;
label_4029a8:
    // 0x4029a8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_4029ac:
    if (ctx->pc == 0x4029ACu) {
        ctx->pc = 0x4029B0u;
        goto label_4029b0;
    }
    ctx->pc = 0x4029A8u;
    {
        const bool branch_taken_0x4029a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4029a8) {
            ctx->pc = 0x402A00u;
            goto label_402a00;
        }
    }
    ctx->pc = 0x4029B0u;
label_4029b0:
    // 0x4029b0: 0x8e32008c  lw          $s2, 0x8C($s1)
    ctx->pc = 0x4029b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_4029b4:
    // 0x4029b4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x4029b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4029b8:
    // 0x4029b8: 0x86430066  lh          $v1, 0x66($s2)
    ctx->pc = 0x4029b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4029bc:
    // 0x4029bc: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4029bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4029c0:
    // 0x4029c0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4029c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4029c4:
    // 0x4029c4: 0xc04cce8  jal         func_1333A0
label_4029c8:
    if (ctx->pc == 0x4029C8u) {
        ctx->pc = 0x4029C8u;
            // 0x4029c8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4029CCu;
        goto label_4029cc;
    }
    ctx->pc = 0x4029C4u;
    SET_GPR_U32(ctx, 31, 0x4029CCu);
    ctx->pc = 0x4029C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4029C4u;
            // 0x4029c8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4029CCu; }
        if (ctx->pc != 0x4029CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4029CCu; }
        if (ctx->pc != 0x4029CCu) { return; }
    }
    ctx->pc = 0x4029CCu;
label_4029cc:
    // 0x4029cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4029ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4029d0:
    // 0x4029d0: 0x86450066  lh          $a1, 0x66($s2)
    ctx->pc = 0x4029d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4029d4:
    // 0x4029d4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4029d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4029d8:
    // 0x4029d8: 0x86440064  lh          $a0, 0x64($s2)
    ctx->pc = 0x4029d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
label_4029dc:
    // 0x4029dc: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x4029dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_4029e0:
    // 0x4029e0: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x4029e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4029e4:
    // 0x4029e4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x4029e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4029e8:
    // 0x4029e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4029e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4029ec:
    // 0x4029ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x4029ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_4029f0:
    // 0x4029f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4029f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_4029f4:
    // 0x4029f4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4029f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4029f8:
    // 0x4029f8: 0xa6430066  sh          $v1, 0x66($s2)
    ctx->pc = 0x4029f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 3));
label_4029fc:
    // 0x4029fc: 0x0  nop
    ctx->pc = 0x4029fcu;
    // NOP
label_402a00:
    // 0x402a00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x402a00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_402a04:
    // 0x402a04: 0x293182b  sltu        $v1, $s4, $s3
    ctx->pc = 0x402a04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_402a08:
    // 0x402a08: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_402a0c:
    if (ctx->pc == 0x402A0Cu) {
        ctx->pc = 0x402A0Cu;
            // 0x402a0c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x402A10u;
        goto label_402a10;
    }
    ctx->pc = 0x402A08u;
    {
        const bool branch_taken_0x402a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x402A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402A08u;
            // 0x402a0c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402a08) {
            ctx->pc = 0x402980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_402980;
        }
    }
    ctx->pc = 0x402A10u;
label_402a10:
    // 0x402a10: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x402a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_402a14:
    // 0x402a14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x402a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_402a18:
    // 0x402a18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x402a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_402a1c:
    // 0x402a1c: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x402a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_402a20:
    // 0x402a20: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x402a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_402a24:
    // 0x402a24: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x402a24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_402a28:
    // 0x402a28: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x402a28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_402a2c:
    // 0x402a2c: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_402a30:
    if (ctx->pc == 0x402A30u) {
        ctx->pc = 0x402A30u;
            // 0x402a30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x402A34u;
        goto label_402a34;
    }
    ctx->pc = 0x402A2Cu;
    {
        const bool branch_taken_0x402a2c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x402A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402A2Cu;
            // 0x402a30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402a2c) {
            ctx->pc = 0x402A50u;
            goto label_402a50;
        }
    }
    ctx->pc = 0x402A34u;
label_402a34:
    // 0x402a34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x402a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_402a38:
    // 0x402a38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x402a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_402a3c:
    // 0x402a3c: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x402a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_402a40:
    // 0x402a40: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x402a40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_402a44:
    // 0x402a44: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x402a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_402a48:
    // 0x402a48: 0xc055990  jal         func_156640
label_402a4c:
    if (ctx->pc == 0x402A4Cu) {
        ctx->pc = 0x402A4Cu;
            // 0x402a4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x402A50u;
        goto label_402a50;
    }
    ctx->pc = 0x402A48u;
    SET_GPR_U32(ctx, 31, 0x402A50u);
    ctx->pc = 0x402A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402A48u;
            // 0x402a4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402A50u; }
        if (ctx->pc != 0x402A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402A50u; }
        if (ctx->pc != 0x402A50u) { return; }
    }
    ctx->pc = 0x402A50u;
label_402a50:
    // 0x402a50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x402a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_402a54:
    // 0x402a54: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x402a54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_402a58:
    // 0x402a58: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x402a58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_402a5c:
    // 0x402a5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x402a5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_402a60:
    // 0x402a60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x402a60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_402a64:
    // 0x402a64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x402a64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_402a68:
    // 0x402a68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x402a68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_402a6c:
    // 0x402a6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x402a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_402a70:
    // 0x402a70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x402a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_402a74:
    // 0x402a74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x402a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_402a78:
    // 0x402a78: 0x3e00008  jr          $ra
label_402a7c:
    if (ctx->pc == 0x402A7Cu) {
        ctx->pc = 0x402A7Cu;
            // 0x402a7c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x402A80u;
        goto label_402a80;
    }
    ctx->pc = 0x402A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402A78u;
            // 0x402a7c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x402A80u;
label_402a80:
    // 0x402a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x402a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_402a84:
    // 0x402a84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x402a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_402a88:
    // 0x402a88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x402a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_402a8c:
    // 0x402a8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x402a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_402a90:
    // 0x402a90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x402a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_402a94:
    // 0x402a94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x402a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_402a98:
    // 0x402a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x402a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_402a9c:
    // 0x402a9c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x402a9cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_402aa0:
    // 0x402aa0: 0x10a3003d  beq         $a1, $v1, . + 4 + (0x3D << 2)
label_402aa4:
    if (ctx->pc == 0x402AA4u) {
        ctx->pc = 0x402AA4u;
            // 0x402aa4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x402AA8u;
        goto label_402aa8;
    }
    ctx->pc = 0x402AA0u;
    {
        const bool branch_taken_0x402aa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x402AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402AA0u;
            // 0x402aa4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402aa0) {
            ctx->pc = 0x402B98u;
            goto label_402b98;
        }
    }
    ctx->pc = 0x402AA8u;
label_402aa8:
    // 0x402aa8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x402aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_402aac:
    // 0x402aac: 0x10a30030  beq         $a1, $v1, . + 4 + (0x30 << 2)
label_402ab0:
    if (ctx->pc == 0x402AB0u) {
        ctx->pc = 0x402AB4u;
        goto label_402ab4;
    }
    ctx->pc = 0x402AACu;
    {
        const bool branch_taken_0x402aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x402aac) {
            ctx->pc = 0x402B70u;
            goto label_402b70;
        }
    }
    ctx->pc = 0x402AB4u;
label_402ab4:
    // 0x402ab4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x402ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_402ab8:
    // 0x402ab8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_402abc:
    if (ctx->pc == 0x402ABCu) {
        ctx->pc = 0x402AC0u;
        goto label_402ac0;
    }
    ctx->pc = 0x402AB8u;
    {
        const bool branch_taken_0x402ab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x402ab8) {
            ctx->pc = 0x402AC8u;
            goto label_402ac8;
        }
    }
    ctx->pc = 0x402AC0u;
label_402ac0:
    // 0x402ac0: 0x10000061  b           . + 4 + (0x61 << 2)
label_402ac4:
    if (ctx->pc == 0x402AC4u) {
        ctx->pc = 0x402AC8u;
        goto label_402ac8;
    }
    ctx->pc = 0x402AC0u;
    {
        const bool branch_taken_0x402ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x402ac0) {
            ctx->pc = 0x402C48u;
            goto label_402c48;
        }
    }
    ctx->pc = 0x402AC8u;
label_402ac8:
    // 0x402ac8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x402ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_402acc:
    // 0x402acc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x402accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_402ad0:
    // 0x402ad0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x402ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_402ad4:
    // 0x402ad4: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x402ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_402ad8:
    // 0x402ad8: 0x1064005b  beq         $v1, $a0, . + 4 + (0x5B << 2)
label_402adc:
    if (ctx->pc == 0x402ADCu) {
        ctx->pc = 0x402AE0u;
        goto label_402ae0;
    }
    ctx->pc = 0x402AD8u;
    {
        const bool branch_taken_0x402ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x402ad8) {
            ctx->pc = 0x402C48u;
            goto label_402c48;
        }
    }
    ctx->pc = 0x402AE0u;
label_402ae0:
    // 0x402ae0: 0x8e680084  lw          $t0, 0x84($s3)
    ctx->pc = 0x402ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_402ae4:
    // 0x402ae4: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x402ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_402ae8:
    // 0x402ae8: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x402ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_402aec:
    // 0x402aec: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x402aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_402af0:
    // 0x402af0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x402af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_402af4:
    // 0x402af4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x402af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_402af8:
    // 0x402af8: 0x8d080014  lw          $t0, 0x14($t0)
    ctx->pc = 0x402af8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_402afc:
    // 0x402afc: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x402afcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_402b00:
    // 0x402b00: 0x25080056  addiu       $t0, $t0, 0x56
    ctx->pc = 0x402b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 86));
label_402b04:
    // 0x402b04: 0xae680090  sw          $t0, 0x90($s3)
    ctx->pc = 0x402b04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 8));
label_402b08:
    // 0x402b08: 0x8e680084  lw          $t0, 0x84($s3)
    ctx->pc = 0x402b08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_402b0c:
    // 0x402b0c: 0x8d080014  lw          $t0, 0x14($t0)
    ctx->pc = 0x402b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_402b10:
    // 0x402b10: 0x8d08000c  lw          $t0, 0xC($t0)
    ctx->pc = 0x402b10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_402b14:
    // 0x402b14: 0x25080056  addiu       $t0, $t0, 0x56
    ctx->pc = 0x402b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 86));
label_402b18:
    // 0x402b18: 0xae680094  sw          $t0, 0x94($s3)
    ctx->pc = 0x402b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 8));
label_402b1c:
    // 0x402b1c: 0x8e690084  lw          $t1, 0x84($s3)
    ctx->pc = 0x402b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_402b20:
    // 0x402b20: 0x8ce8fbb8  lw          $t0, -0x448($a3)
    ctx->pc = 0x402b20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294966200)));
label_402b24:
    // 0x402b24: 0x8d290030  lw          $t1, 0x30($t1)
    ctx->pc = 0x402b24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_402b28:
    // 0x402b28: 0x8d270120  lw          $a3, 0x120($t1)
    ctx->pc = 0x402b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 288)));
label_402b2c:
    // 0x402b2c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x402b2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_402b30:
    // 0x402b30: 0xad270120  sw          $a3, 0x120($t1)
    ctx->pc = 0x402b30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 288), GPR_U32(ctx, 7));
label_402b34:
    // 0x402b34: 0x8cc7fbc0  lw          $a3, -0x440($a2)
    ctx->pc = 0x402b34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294966208)));
label_402b38:
    // 0x402b38: 0x8d2601b0  lw          $a2, 0x1B0($t1)
    ctx->pc = 0x402b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 432)));
label_402b3c:
    // 0x402b3c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x402b3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_402b40:
    // 0x402b40: 0xad2601b0  sw          $a2, 0x1B0($t1)
    ctx->pc = 0x402b40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 432), GPR_U32(ctx, 6));
label_402b44:
    // 0x402b44: 0x8ca6fbc8  lw          $a2, -0x438($a1)
    ctx->pc = 0x402b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294966216)));
label_402b48:
    // 0x402b48: 0x8d250240  lw          $a1, 0x240($t1)
    ctx->pc = 0x402b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 576)));
label_402b4c:
    // 0x402b4c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x402b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_402b50:
    // 0x402b50: 0xad250240  sw          $a1, 0x240($t1)
    ctx->pc = 0x402b50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 5));
label_402b54:
    // 0x402b54: 0x8c84fbd0  lw          $a0, -0x430($a0)
    ctx->pc = 0x402b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966224)));
label_402b58:
    // 0x402b58: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x402b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_402b5c:
    // 0x402b5c: 0xad240240  sw          $a0, 0x240($t1)
    ctx->pc = 0x402b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 4));
label_402b60:
    // 0x402b60: 0x8c63fbd8  lw          $v1, -0x428($v1)
    ctx->pc = 0x402b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966232)));
label_402b64:
    // 0x402b64: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x402b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_402b68:
    // 0x402b68: 0x10000037  b           . + 4 + (0x37 << 2)
label_402b6c:
    if (ctx->pc == 0x402B6Cu) {
        ctx->pc = 0x402B6Cu;
            // 0x402b6c: 0xad230240  sw          $v1, 0x240($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 3));
        ctx->pc = 0x402B70u;
        goto label_402b70;
    }
    ctx->pc = 0x402B68u;
    {
        const bool branch_taken_0x402b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402B68u;
            // 0x402b6c: 0xad230240  sw          $v1, 0x240($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402b68) {
            ctx->pc = 0x402C48u;
            goto label_402c48;
        }
    }
    ctx->pc = 0x402B70u;
label_402b70:
    // 0x402b70: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x402b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_402b74:
    // 0x402b74: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x402b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_402b78:
    // 0x402b78: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x402b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_402b7c:
    // 0x402b7c: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x402b7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_402b80:
    // 0x402b80: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_402b84:
    if (ctx->pc == 0x402B84u) {
        ctx->pc = 0x402B88u;
        goto label_402b88;
    }
    ctx->pc = 0x402B80u;
    {
        const bool branch_taken_0x402b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x402b80) {
            ctx->pc = 0x402C48u;
            goto label_402c48;
        }
    }
    ctx->pc = 0x402B88u;
label_402b88:
    // 0x402b88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x402b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_402b8c:
    // 0x402b8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x402b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_402b90:
    // 0x402b90: 0x320f809  jalr        $t9
label_402b94:
    if (ctx->pc == 0x402B94u) {
        ctx->pc = 0x402B98u;
        goto label_402b98;
    }
    ctx->pc = 0x402B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x402B98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x402B98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x402B98u; }
            if (ctx->pc != 0x402B98u) { return; }
        }
        }
    }
    ctx->pc = 0x402B98u;
label_402b98:
    // 0x402b98: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x402b98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_402b9c:
    // 0x402b9c: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_402ba0:
    if (ctx->pc == 0x402BA0u) {
        ctx->pc = 0x402BA4u;
        goto label_402ba4;
    }
    ctx->pc = 0x402B9Cu;
    {
        const bool branch_taken_0x402b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x402b9c) {
            ctx->pc = 0x402C48u;
            goto label_402c48;
        }
    }
    ctx->pc = 0x402BA4u;
label_402ba4:
    // 0x402ba4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x402ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_402ba8:
    // 0x402ba8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x402ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_402bac:
    // 0x402bac: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x402bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_402bb0:
    // 0x402bb0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x402bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_402bb4:
    // 0x402bb4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x402bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_402bb8:
    // 0x402bb8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x402bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_402bbc:
    // 0x402bbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x402bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_402bc0:
    // 0x402bc0: 0xc4430018  lwc1        $f3, 0x18($v0)
    ctx->pc = 0x402bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_402bc4:
    // 0x402bc4: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x402bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_402bc8:
    // 0x402bc8: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x402bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_402bcc:
    // 0x402bcc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_402bd0:
    if (ctx->pc == 0x402BD0u) {
        ctx->pc = 0x402BD0u;
            // 0x402bd0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x402BD4u;
        goto label_402bd4;
    }
    ctx->pc = 0x402BCCu;
    {
        const bool branch_taken_0x402bcc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x402bcc) {
            ctx->pc = 0x402BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402BCCu;
            // 0x402bd0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402BE0u;
            goto label_402be0;
        }
    }
    ctx->pc = 0x402BD4u;
label_402bd4:
    // 0x402bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x402bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_402bd8:
    // 0x402bd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_402bdc:
    if (ctx->pc == 0x402BDCu) {
        ctx->pc = 0x402BDCu;
            // 0x402bdc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x402BE0u;
        goto label_402be0;
    }
    ctx->pc = 0x402BD8u;
    {
        const bool branch_taken_0x402bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402BD8u;
            // 0x402bdc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x402bd8) {
            ctx->pc = 0x402BF8u;
            goto label_402bf8;
        }
    }
    ctx->pc = 0x402BE0u;
label_402be0:
    // 0x402be0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x402be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_402be4:
    // 0x402be4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x402be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_402be8:
    // 0x402be8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x402be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_402bec:
    // 0x402bec: 0x0  nop
    ctx->pc = 0x402becu;
    // NOP
label_402bf0:
    // 0x402bf0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x402bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_402bf4:
    // 0x402bf4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x402bf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_402bf8:
    // 0x402bf8: 0xc481020c  lwc1        $f1, 0x20C($a0)
    ctx->pc = 0x402bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_402bfc:
    // 0x402bfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x402bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_402c00:
    // 0x402c00: 0x0  nop
    ctx->pc = 0x402c00u;
    // NOP
label_402c04:
    // 0x402c04: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x402c04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_402c08:
    // 0x402c08: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x402c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_402c0c:
    // 0x402c0c: 0xe480020c  swc1        $f0, 0x20C($a0)
    ctx->pc = 0x402c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 524), bits); }
label_402c10:
    // 0x402c10: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x402c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_402c14:
    // 0x402c14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x402c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_402c18:
    // 0x402c18: 0xc0e3658  jal         func_38D960
label_402c1c:
    if (ctx->pc == 0x402C1Cu) {
        ctx->pc = 0x402C1Cu;
            // 0x402c1c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x402C20u;
        goto label_402c20;
    }
    ctx->pc = 0x402C18u;
    SET_GPR_U32(ctx, 31, 0x402C20u);
    ctx->pc = 0x402C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402C18u;
            // 0x402c1c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402C20u; }
        if (ctx->pc != 0x402C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402C20u; }
        if (ctx->pc != 0x402C20u) { return; }
    }
    ctx->pc = 0x402C20u;
label_402c20:
    // 0x402c20: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x402c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_402c24:
    // 0x402c24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x402c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_402c28:
    // 0x402c28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x402c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_402c2c:
    // 0x402c2c: 0xc100f94  jal         func_403E50
label_402c30:
    if (ctx->pc == 0x402C30u) {
        ctx->pc = 0x402C30u;
            // 0x402c30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x402C34u;
        goto label_402c34;
    }
    ctx->pc = 0x402C2Cu;
    SET_GPR_U32(ctx, 31, 0x402C34u);
    ctx->pc = 0x402C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402C2Cu;
            // 0x402c30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x403E50u;
    if (runtime->hasFunction(0x403E50u)) {
        auto targetFn = runtime->lookupFunction(0x403E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402C34u; }
        if (ctx->pc != 0x402C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00403E50_0x403e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402C34u; }
        if (ctx->pc != 0x402C34u) { return; }
    }
    ctx->pc = 0x402C34u;
label_402c34:
    // 0x402c34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x402c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_402c38:
    // 0x402c38: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x402c38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_402c3c:
    // 0x402c3c: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
label_402c40:
    if (ctx->pc == 0x402C40u) {
        ctx->pc = 0x402C40u;
            // 0x402c40: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x402C44u;
        goto label_402c44;
    }
    ctx->pc = 0x402C3Cu;
    {
        const bool branch_taken_0x402c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x402C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402C3Cu;
            // 0x402c40: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402c3c) {
            ctx->pc = 0x402BACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_402bac;
        }
    }
    ctx->pc = 0x402C44u;
label_402c44:
    // 0x402c44: 0x0  nop
    ctx->pc = 0x402c44u;
    // NOP
label_402c48:
    // 0x402c48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x402c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_402c4c:
    // 0x402c4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x402c4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_402c50:
    // 0x402c50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x402c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_402c54:
    // 0x402c54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x402c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_402c58:
    // 0x402c58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x402c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_402c5c:
    // 0x402c5c: 0x3e00008  jr          $ra
label_402c60:
    if (ctx->pc == 0x402C60u) {
        ctx->pc = 0x402C60u;
            // 0x402c60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x402C64u;
        goto label_402c64;
    }
    ctx->pc = 0x402C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402C5Cu;
            // 0x402c60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x402C64u;
label_402c64:
    // 0x402c64: 0x0  nop
    ctx->pc = 0x402c64u;
    // NOP
label_402c68:
    // 0x402c68: 0x0  nop
    ctx->pc = 0x402c68u;
    // NOP
label_402c6c:
    // 0x402c6c: 0x0  nop
    ctx->pc = 0x402c6cu;
    // NOP
label_402c70:
    // 0x402c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x402c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_402c74:
    // 0x402c74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x402c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_402c78:
    // 0x402c78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x402c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_402c7c:
    // 0x402c7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x402c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_402c80:
    // 0x402c80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x402c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_402c84:
    // 0x402c84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x402c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_402c88:
    // 0x402c88: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x402c88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_402c8c:
    // 0x402c8c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_402c90:
    if (ctx->pc == 0x402C90u) {
        ctx->pc = 0x402C90u;
            // 0x402c90: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x402C94u;
        goto label_402c94;
    }
    ctx->pc = 0x402C8Cu;
    {
        const bool branch_taken_0x402c8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x402C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402C8Cu;
            // 0x402c90: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402c8c) {
            ctx->pc = 0x402CD0u;
            goto label_402cd0;
        }
    }
    ctx->pc = 0x402C94u;
label_402c94:
    // 0x402c94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x402c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_402c98:
    // 0x402c98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x402c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_402c9c:
    // 0x402c9c: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x402c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_402ca0:
    // 0x402ca0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x402ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_402ca4:
    // 0x402ca4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x402ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_402ca8:
    // 0x402ca8: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x402ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
label_402cac:
    // 0x402cac: 0xac80020c  sw          $zero, 0x20C($a0)
    ctx->pc = 0x402cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 0));
label_402cb0:
    // 0x402cb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x402cb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_402cb4:
    // 0x402cb4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x402cb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_402cb8:
    // 0x402cb8: 0x320f809  jalr        $t9
label_402cbc:
    if (ctx->pc == 0x402CBCu) {
        ctx->pc = 0x402CC0u;
        goto label_402cc0;
    }
    ctx->pc = 0x402CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x402CC0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x402CC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x402CC0u; }
            if (ctx->pc != 0x402CC0u) { return; }
        }
        }
    }
    ctx->pc = 0x402CC0u;
label_402cc0:
    // 0x402cc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x402cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_402cc4:
    // 0x402cc4: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x402cc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_402cc8:
    // 0x402cc8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_402ccc:
    if (ctx->pc == 0x402CCCu) {
        ctx->pc = 0x402CCCu;
            // 0x402ccc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x402CD0u;
        goto label_402cd0;
    }
    ctx->pc = 0x402CC8u;
    {
        const bool branch_taken_0x402cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x402CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402CC8u;
            // 0x402ccc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402cc8) {
            ctx->pc = 0x402C9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_402c9c;
        }
    }
    ctx->pc = 0x402CD0u;
label_402cd0:
    // 0x402cd0: 0x92640010  lbu         $a0, 0x10($s3)
    ctx->pc = 0x402cd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_402cd4:
    // 0x402cd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x402cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_402cd8:
    // 0x402cd8: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_402cdc:
    if (ctx->pc == 0x402CDCu) {
        ctx->pc = 0x402CDCu;
            // 0x402cdc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x402CE0u;
        goto label_402ce0;
    }
    ctx->pc = 0x402CD8u;
    {
        const bool branch_taken_0x402cd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x402cd8) {
            ctx->pc = 0x402CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402CD8u;
            // 0x402cdc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402CF8u;
            goto label_402cf8;
        }
    }
    ctx->pc = 0x402CE0u;
label_402ce0:
    // 0x402ce0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x402ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_402ce4:
    // 0x402ce4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x402ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_402ce8:
    // 0x402ce8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x402ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_402cec:
    // 0x402cec: 0x320f809  jalr        $t9
label_402cf0:
    if (ctx->pc == 0x402CF0u) {
        ctx->pc = 0x402CF0u;
            // 0x402cf0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x402CF4u;
        goto label_402cf4;
    }
    ctx->pc = 0x402CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x402CF4u);
        ctx->pc = 0x402CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402CECu;
            // 0x402cf0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x402CF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x402CF4u; }
            if (ctx->pc != 0x402CF4u) { return; }
        }
        }
    }
    ctx->pc = 0x402CF4u;
label_402cf4:
    // 0x402cf4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x402cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_402cf8:
    // 0x402cf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x402cf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_402cfc:
    // 0x402cfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x402cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_402d00:
    // 0x402d00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x402d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_402d04:
    // 0x402d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x402d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_402d08:
    // 0x402d08: 0x3e00008  jr          $ra
label_402d0c:
    if (ctx->pc == 0x402D0Cu) {
        ctx->pc = 0x402D0Cu;
            // 0x402d0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x402D10u;
        goto label_fallthrough_0x402d08;
    }
    ctx->pc = 0x402D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402D08u;
            // 0x402d0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x402d08:
    ctx->pc = 0x402D10u;
}
