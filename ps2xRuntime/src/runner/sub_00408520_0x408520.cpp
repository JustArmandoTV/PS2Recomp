#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00408520
// Address: 0x408520 - 0x409340
void sub_00408520_0x408520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408520_0x408520");
#endif

    switch (ctx->pc) {
        case 0x408520u: goto label_408520;
        case 0x408524u: goto label_408524;
        case 0x408528u: goto label_408528;
        case 0x40852cu: goto label_40852c;
        case 0x408530u: goto label_408530;
        case 0x408534u: goto label_408534;
        case 0x408538u: goto label_408538;
        case 0x40853cu: goto label_40853c;
        case 0x408540u: goto label_408540;
        case 0x408544u: goto label_408544;
        case 0x408548u: goto label_408548;
        case 0x40854cu: goto label_40854c;
        case 0x408550u: goto label_408550;
        case 0x408554u: goto label_408554;
        case 0x408558u: goto label_408558;
        case 0x40855cu: goto label_40855c;
        case 0x408560u: goto label_408560;
        case 0x408564u: goto label_408564;
        case 0x408568u: goto label_408568;
        case 0x40856cu: goto label_40856c;
        case 0x408570u: goto label_408570;
        case 0x408574u: goto label_408574;
        case 0x408578u: goto label_408578;
        case 0x40857cu: goto label_40857c;
        case 0x408580u: goto label_408580;
        case 0x408584u: goto label_408584;
        case 0x408588u: goto label_408588;
        case 0x40858cu: goto label_40858c;
        case 0x408590u: goto label_408590;
        case 0x408594u: goto label_408594;
        case 0x408598u: goto label_408598;
        case 0x40859cu: goto label_40859c;
        case 0x4085a0u: goto label_4085a0;
        case 0x4085a4u: goto label_4085a4;
        case 0x4085a8u: goto label_4085a8;
        case 0x4085acu: goto label_4085ac;
        case 0x4085b0u: goto label_4085b0;
        case 0x4085b4u: goto label_4085b4;
        case 0x4085b8u: goto label_4085b8;
        case 0x4085bcu: goto label_4085bc;
        case 0x4085c0u: goto label_4085c0;
        case 0x4085c4u: goto label_4085c4;
        case 0x4085c8u: goto label_4085c8;
        case 0x4085ccu: goto label_4085cc;
        case 0x4085d0u: goto label_4085d0;
        case 0x4085d4u: goto label_4085d4;
        case 0x4085d8u: goto label_4085d8;
        case 0x4085dcu: goto label_4085dc;
        case 0x4085e0u: goto label_4085e0;
        case 0x4085e4u: goto label_4085e4;
        case 0x4085e8u: goto label_4085e8;
        case 0x4085ecu: goto label_4085ec;
        case 0x4085f0u: goto label_4085f0;
        case 0x4085f4u: goto label_4085f4;
        case 0x4085f8u: goto label_4085f8;
        case 0x4085fcu: goto label_4085fc;
        case 0x408600u: goto label_408600;
        case 0x408604u: goto label_408604;
        case 0x408608u: goto label_408608;
        case 0x40860cu: goto label_40860c;
        case 0x408610u: goto label_408610;
        case 0x408614u: goto label_408614;
        case 0x408618u: goto label_408618;
        case 0x40861cu: goto label_40861c;
        case 0x408620u: goto label_408620;
        case 0x408624u: goto label_408624;
        case 0x408628u: goto label_408628;
        case 0x40862cu: goto label_40862c;
        case 0x408630u: goto label_408630;
        case 0x408634u: goto label_408634;
        case 0x408638u: goto label_408638;
        case 0x40863cu: goto label_40863c;
        case 0x408640u: goto label_408640;
        case 0x408644u: goto label_408644;
        case 0x408648u: goto label_408648;
        case 0x40864cu: goto label_40864c;
        case 0x408650u: goto label_408650;
        case 0x408654u: goto label_408654;
        case 0x408658u: goto label_408658;
        case 0x40865cu: goto label_40865c;
        case 0x408660u: goto label_408660;
        case 0x408664u: goto label_408664;
        case 0x408668u: goto label_408668;
        case 0x40866cu: goto label_40866c;
        case 0x408670u: goto label_408670;
        case 0x408674u: goto label_408674;
        case 0x408678u: goto label_408678;
        case 0x40867cu: goto label_40867c;
        case 0x408680u: goto label_408680;
        case 0x408684u: goto label_408684;
        case 0x408688u: goto label_408688;
        case 0x40868cu: goto label_40868c;
        case 0x408690u: goto label_408690;
        case 0x408694u: goto label_408694;
        case 0x408698u: goto label_408698;
        case 0x40869cu: goto label_40869c;
        case 0x4086a0u: goto label_4086a0;
        case 0x4086a4u: goto label_4086a4;
        case 0x4086a8u: goto label_4086a8;
        case 0x4086acu: goto label_4086ac;
        case 0x4086b0u: goto label_4086b0;
        case 0x4086b4u: goto label_4086b4;
        case 0x4086b8u: goto label_4086b8;
        case 0x4086bcu: goto label_4086bc;
        case 0x4086c0u: goto label_4086c0;
        case 0x4086c4u: goto label_4086c4;
        case 0x4086c8u: goto label_4086c8;
        case 0x4086ccu: goto label_4086cc;
        case 0x4086d0u: goto label_4086d0;
        case 0x4086d4u: goto label_4086d4;
        case 0x4086d8u: goto label_4086d8;
        case 0x4086dcu: goto label_4086dc;
        case 0x4086e0u: goto label_4086e0;
        case 0x4086e4u: goto label_4086e4;
        case 0x4086e8u: goto label_4086e8;
        case 0x4086ecu: goto label_4086ec;
        case 0x4086f0u: goto label_4086f0;
        case 0x4086f4u: goto label_4086f4;
        case 0x4086f8u: goto label_4086f8;
        case 0x4086fcu: goto label_4086fc;
        case 0x408700u: goto label_408700;
        case 0x408704u: goto label_408704;
        case 0x408708u: goto label_408708;
        case 0x40870cu: goto label_40870c;
        case 0x408710u: goto label_408710;
        case 0x408714u: goto label_408714;
        case 0x408718u: goto label_408718;
        case 0x40871cu: goto label_40871c;
        case 0x408720u: goto label_408720;
        case 0x408724u: goto label_408724;
        case 0x408728u: goto label_408728;
        case 0x40872cu: goto label_40872c;
        case 0x408730u: goto label_408730;
        case 0x408734u: goto label_408734;
        case 0x408738u: goto label_408738;
        case 0x40873cu: goto label_40873c;
        case 0x408740u: goto label_408740;
        case 0x408744u: goto label_408744;
        case 0x408748u: goto label_408748;
        case 0x40874cu: goto label_40874c;
        case 0x408750u: goto label_408750;
        case 0x408754u: goto label_408754;
        case 0x408758u: goto label_408758;
        case 0x40875cu: goto label_40875c;
        case 0x408760u: goto label_408760;
        case 0x408764u: goto label_408764;
        case 0x408768u: goto label_408768;
        case 0x40876cu: goto label_40876c;
        case 0x408770u: goto label_408770;
        case 0x408774u: goto label_408774;
        case 0x408778u: goto label_408778;
        case 0x40877cu: goto label_40877c;
        case 0x408780u: goto label_408780;
        case 0x408784u: goto label_408784;
        case 0x408788u: goto label_408788;
        case 0x40878cu: goto label_40878c;
        case 0x408790u: goto label_408790;
        case 0x408794u: goto label_408794;
        case 0x408798u: goto label_408798;
        case 0x40879cu: goto label_40879c;
        case 0x4087a0u: goto label_4087a0;
        case 0x4087a4u: goto label_4087a4;
        case 0x4087a8u: goto label_4087a8;
        case 0x4087acu: goto label_4087ac;
        case 0x4087b0u: goto label_4087b0;
        case 0x4087b4u: goto label_4087b4;
        case 0x4087b8u: goto label_4087b8;
        case 0x4087bcu: goto label_4087bc;
        case 0x4087c0u: goto label_4087c0;
        case 0x4087c4u: goto label_4087c4;
        case 0x4087c8u: goto label_4087c8;
        case 0x4087ccu: goto label_4087cc;
        case 0x4087d0u: goto label_4087d0;
        case 0x4087d4u: goto label_4087d4;
        case 0x4087d8u: goto label_4087d8;
        case 0x4087dcu: goto label_4087dc;
        case 0x4087e0u: goto label_4087e0;
        case 0x4087e4u: goto label_4087e4;
        case 0x4087e8u: goto label_4087e8;
        case 0x4087ecu: goto label_4087ec;
        case 0x4087f0u: goto label_4087f0;
        case 0x4087f4u: goto label_4087f4;
        case 0x4087f8u: goto label_4087f8;
        case 0x4087fcu: goto label_4087fc;
        case 0x408800u: goto label_408800;
        case 0x408804u: goto label_408804;
        case 0x408808u: goto label_408808;
        case 0x40880cu: goto label_40880c;
        case 0x408810u: goto label_408810;
        case 0x408814u: goto label_408814;
        case 0x408818u: goto label_408818;
        case 0x40881cu: goto label_40881c;
        case 0x408820u: goto label_408820;
        case 0x408824u: goto label_408824;
        case 0x408828u: goto label_408828;
        case 0x40882cu: goto label_40882c;
        case 0x408830u: goto label_408830;
        case 0x408834u: goto label_408834;
        case 0x408838u: goto label_408838;
        case 0x40883cu: goto label_40883c;
        case 0x408840u: goto label_408840;
        case 0x408844u: goto label_408844;
        case 0x408848u: goto label_408848;
        case 0x40884cu: goto label_40884c;
        case 0x408850u: goto label_408850;
        case 0x408854u: goto label_408854;
        case 0x408858u: goto label_408858;
        case 0x40885cu: goto label_40885c;
        case 0x408860u: goto label_408860;
        case 0x408864u: goto label_408864;
        case 0x408868u: goto label_408868;
        case 0x40886cu: goto label_40886c;
        case 0x408870u: goto label_408870;
        case 0x408874u: goto label_408874;
        case 0x408878u: goto label_408878;
        case 0x40887cu: goto label_40887c;
        case 0x408880u: goto label_408880;
        case 0x408884u: goto label_408884;
        case 0x408888u: goto label_408888;
        case 0x40888cu: goto label_40888c;
        case 0x408890u: goto label_408890;
        case 0x408894u: goto label_408894;
        case 0x408898u: goto label_408898;
        case 0x40889cu: goto label_40889c;
        case 0x4088a0u: goto label_4088a0;
        case 0x4088a4u: goto label_4088a4;
        case 0x4088a8u: goto label_4088a8;
        case 0x4088acu: goto label_4088ac;
        case 0x4088b0u: goto label_4088b0;
        case 0x4088b4u: goto label_4088b4;
        case 0x4088b8u: goto label_4088b8;
        case 0x4088bcu: goto label_4088bc;
        case 0x4088c0u: goto label_4088c0;
        case 0x4088c4u: goto label_4088c4;
        case 0x4088c8u: goto label_4088c8;
        case 0x4088ccu: goto label_4088cc;
        case 0x4088d0u: goto label_4088d0;
        case 0x4088d4u: goto label_4088d4;
        case 0x4088d8u: goto label_4088d8;
        case 0x4088dcu: goto label_4088dc;
        case 0x4088e0u: goto label_4088e0;
        case 0x4088e4u: goto label_4088e4;
        case 0x4088e8u: goto label_4088e8;
        case 0x4088ecu: goto label_4088ec;
        case 0x4088f0u: goto label_4088f0;
        case 0x4088f4u: goto label_4088f4;
        case 0x4088f8u: goto label_4088f8;
        case 0x4088fcu: goto label_4088fc;
        case 0x408900u: goto label_408900;
        case 0x408904u: goto label_408904;
        case 0x408908u: goto label_408908;
        case 0x40890cu: goto label_40890c;
        case 0x408910u: goto label_408910;
        case 0x408914u: goto label_408914;
        case 0x408918u: goto label_408918;
        case 0x40891cu: goto label_40891c;
        case 0x408920u: goto label_408920;
        case 0x408924u: goto label_408924;
        case 0x408928u: goto label_408928;
        case 0x40892cu: goto label_40892c;
        case 0x408930u: goto label_408930;
        case 0x408934u: goto label_408934;
        case 0x408938u: goto label_408938;
        case 0x40893cu: goto label_40893c;
        case 0x408940u: goto label_408940;
        case 0x408944u: goto label_408944;
        case 0x408948u: goto label_408948;
        case 0x40894cu: goto label_40894c;
        case 0x408950u: goto label_408950;
        case 0x408954u: goto label_408954;
        case 0x408958u: goto label_408958;
        case 0x40895cu: goto label_40895c;
        case 0x408960u: goto label_408960;
        case 0x408964u: goto label_408964;
        case 0x408968u: goto label_408968;
        case 0x40896cu: goto label_40896c;
        case 0x408970u: goto label_408970;
        case 0x408974u: goto label_408974;
        case 0x408978u: goto label_408978;
        case 0x40897cu: goto label_40897c;
        case 0x408980u: goto label_408980;
        case 0x408984u: goto label_408984;
        case 0x408988u: goto label_408988;
        case 0x40898cu: goto label_40898c;
        case 0x408990u: goto label_408990;
        case 0x408994u: goto label_408994;
        case 0x408998u: goto label_408998;
        case 0x40899cu: goto label_40899c;
        case 0x4089a0u: goto label_4089a0;
        case 0x4089a4u: goto label_4089a4;
        case 0x4089a8u: goto label_4089a8;
        case 0x4089acu: goto label_4089ac;
        case 0x4089b0u: goto label_4089b0;
        case 0x4089b4u: goto label_4089b4;
        case 0x4089b8u: goto label_4089b8;
        case 0x4089bcu: goto label_4089bc;
        case 0x4089c0u: goto label_4089c0;
        case 0x4089c4u: goto label_4089c4;
        case 0x4089c8u: goto label_4089c8;
        case 0x4089ccu: goto label_4089cc;
        case 0x4089d0u: goto label_4089d0;
        case 0x4089d4u: goto label_4089d4;
        case 0x4089d8u: goto label_4089d8;
        case 0x4089dcu: goto label_4089dc;
        case 0x4089e0u: goto label_4089e0;
        case 0x4089e4u: goto label_4089e4;
        case 0x4089e8u: goto label_4089e8;
        case 0x4089ecu: goto label_4089ec;
        case 0x4089f0u: goto label_4089f0;
        case 0x4089f4u: goto label_4089f4;
        case 0x4089f8u: goto label_4089f8;
        case 0x4089fcu: goto label_4089fc;
        case 0x408a00u: goto label_408a00;
        case 0x408a04u: goto label_408a04;
        case 0x408a08u: goto label_408a08;
        case 0x408a0cu: goto label_408a0c;
        case 0x408a10u: goto label_408a10;
        case 0x408a14u: goto label_408a14;
        case 0x408a18u: goto label_408a18;
        case 0x408a1cu: goto label_408a1c;
        case 0x408a20u: goto label_408a20;
        case 0x408a24u: goto label_408a24;
        case 0x408a28u: goto label_408a28;
        case 0x408a2cu: goto label_408a2c;
        case 0x408a30u: goto label_408a30;
        case 0x408a34u: goto label_408a34;
        case 0x408a38u: goto label_408a38;
        case 0x408a3cu: goto label_408a3c;
        case 0x408a40u: goto label_408a40;
        case 0x408a44u: goto label_408a44;
        case 0x408a48u: goto label_408a48;
        case 0x408a4cu: goto label_408a4c;
        case 0x408a50u: goto label_408a50;
        case 0x408a54u: goto label_408a54;
        case 0x408a58u: goto label_408a58;
        case 0x408a5cu: goto label_408a5c;
        case 0x408a60u: goto label_408a60;
        case 0x408a64u: goto label_408a64;
        case 0x408a68u: goto label_408a68;
        case 0x408a6cu: goto label_408a6c;
        case 0x408a70u: goto label_408a70;
        case 0x408a74u: goto label_408a74;
        case 0x408a78u: goto label_408a78;
        case 0x408a7cu: goto label_408a7c;
        case 0x408a80u: goto label_408a80;
        case 0x408a84u: goto label_408a84;
        case 0x408a88u: goto label_408a88;
        case 0x408a8cu: goto label_408a8c;
        case 0x408a90u: goto label_408a90;
        case 0x408a94u: goto label_408a94;
        case 0x408a98u: goto label_408a98;
        case 0x408a9cu: goto label_408a9c;
        case 0x408aa0u: goto label_408aa0;
        case 0x408aa4u: goto label_408aa4;
        case 0x408aa8u: goto label_408aa8;
        case 0x408aacu: goto label_408aac;
        case 0x408ab0u: goto label_408ab0;
        case 0x408ab4u: goto label_408ab4;
        case 0x408ab8u: goto label_408ab8;
        case 0x408abcu: goto label_408abc;
        case 0x408ac0u: goto label_408ac0;
        case 0x408ac4u: goto label_408ac4;
        case 0x408ac8u: goto label_408ac8;
        case 0x408accu: goto label_408acc;
        case 0x408ad0u: goto label_408ad0;
        case 0x408ad4u: goto label_408ad4;
        case 0x408ad8u: goto label_408ad8;
        case 0x408adcu: goto label_408adc;
        case 0x408ae0u: goto label_408ae0;
        case 0x408ae4u: goto label_408ae4;
        case 0x408ae8u: goto label_408ae8;
        case 0x408aecu: goto label_408aec;
        case 0x408af0u: goto label_408af0;
        case 0x408af4u: goto label_408af4;
        case 0x408af8u: goto label_408af8;
        case 0x408afcu: goto label_408afc;
        case 0x408b00u: goto label_408b00;
        case 0x408b04u: goto label_408b04;
        case 0x408b08u: goto label_408b08;
        case 0x408b0cu: goto label_408b0c;
        case 0x408b10u: goto label_408b10;
        case 0x408b14u: goto label_408b14;
        case 0x408b18u: goto label_408b18;
        case 0x408b1cu: goto label_408b1c;
        case 0x408b20u: goto label_408b20;
        case 0x408b24u: goto label_408b24;
        case 0x408b28u: goto label_408b28;
        case 0x408b2cu: goto label_408b2c;
        case 0x408b30u: goto label_408b30;
        case 0x408b34u: goto label_408b34;
        case 0x408b38u: goto label_408b38;
        case 0x408b3cu: goto label_408b3c;
        case 0x408b40u: goto label_408b40;
        case 0x408b44u: goto label_408b44;
        case 0x408b48u: goto label_408b48;
        case 0x408b4cu: goto label_408b4c;
        case 0x408b50u: goto label_408b50;
        case 0x408b54u: goto label_408b54;
        case 0x408b58u: goto label_408b58;
        case 0x408b5cu: goto label_408b5c;
        case 0x408b60u: goto label_408b60;
        case 0x408b64u: goto label_408b64;
        case 0x408b68u: goto label_408b68;
        case 0x408b6cu: goto label_408b6c;
        case 0x408b70u: goto label_408b70;
        case 0x408b74u: goto label_408b74;
        case 0x408b78u: goto label_408b78;
        case 0x408b7cu: goto label_408b7c;
        case 0x408b80u: goto label_408b80;
        case 0x408b84u: goto label_408b84;
        case 0x408b88u: goto label_408b88;
        case 0x408b8cu: goto label_408b8c;
        case 0x408b90u: goto label_408b90;
        case 0x408b94u: goto label_408b94;
        case 0x408b98u: goto label_408b98;
        case 0x408b9cu: goto label_408b9c;
        case 0x408ba0u: goto label_408ba0;
        case 0x408ba4u: goto label_408ba4;
        case 0x408ba8u: goto label_408ba8;
        case 0x408bacu: goto label_408bac;
        case 0x408bb0u: goto label_408bb0;
        case 0x408bb4u: goto label_408bb4;
        case 0x408bb8u: goto label_408bb8;
        case 0x408bbcu: goto label_408bbc;
        case 0x408bc0u: goto label_408bc0;
        case 0x408bc4u: goto label_408bc4;
        case 0x408bc8u: goto label_408bc8;
        case 0x408bccu: goto label_408bcc;
        case 0x408bd0u: goto label_408bd0;
        case 0x408bd4u: goto label_408bd4;
        case 0x408bd8u: goto label_408bd8;
        case 0x408bdcu: goto label_408bdc;
        case 0x408be0u: goto label_408be0;
        case 0x408be4u: goto label_408be4;
        case 0x408be8u: goto label_408be8;
        case 0x408becu: goto label_408bec;
        case 0x408bf0u: goto label_408bf0;
        case 0x408bf4u: goto label_408bf4;
        case 0x408bf8u: goto label_408bf8;
        case 0x408bfcu: goto label_408bfc;
        case 0x408c00u: goto label_408c00;
        case 0x408c04u: goto label_408c04;
        case 0x408c08u: goto label_408c08;
        case 0x408c0cu: goto label_408c0c;
        case 0x408c10u: goto label_408c10;
        case 0x408c14u: goto label_408c14;
        case 0x408c18u: goto label_408c18;
        case 0x408c1cu: goto label_408c1c;
        case 0x408c20u: goto label_408c20;
        case 0x408c24u: goto label_408c24;
        case 0x408c28u: goto label_408c28;
        case 0x408c2cu: goto label_408c2c;
        case 0x408c30u: goto label_408c30;
        case 0x408c34u: goto label_408c34;
        case 0x408c38u: goto label_408c38;
        case 0x408c3cu: goto label_408c3c;
        case 0x408c40u: goto label_408c40;
        case 0x408c44u: goto label_408c44;
        case 0x408c48u: goto label_408c48;
        case 0x408c4cu: goto label_408c4c;
        case 0x408c50u: goto label_408c50;
        case 0x408c54u: goto label_408c54;
        case 0x408c58u: goto label_408c58;
        case 0x408c5cu: goto label_408c5c;
        case 0x408c60u: goto label_408c60;
        case 0x408c64u: goto label_408c64;
        case 0x408c68u: goto label_408c68;
        case 0x408c6cu: goto label_408c6c;
        case 0x408c70u: goto label_408c70;
        case 0x408c74u: goto label_408c74;
        case 0x408c78u: goto label_408c78;
        case 0x408c7cu: goto label_408c7c;
        case 0x408c80u: goto label_408c80;
        case 0x408c84u: goto label_408c84;
        case 0x408c88u: goto label_408c88;
        case 0x408c8cu: goto label_408c8c;
        case 0x408c90u: goto label_408c90;
        case 0x408c94u: goto label_408c94;
        case 0x408c98u: goto label_408c98;
        case 0x408c9cu: goto label_408c9c;
        case 0x408ca0u: goto label_408ca0;
        case 0x408ca4u: goto label_408ca4;
        case 0x408ca8u: goto label_408ca8;
        case 0x408cacu: goto label_408cac;
        case 0x408cb0u: goto label_408cb0;
        case 0x408cb4u: goto label_408cb4;
        case 0x408cb8u: goto label_408cb8;
        case 0x408cbcu: goto label_408cbc;
        case 0x408cc0u: goto label_408cc0;
        case 0x408cc4u: goto label_408cc4;
        case 0x408cc8u: goto label_408cc8;
        case 0x408cccu: goto label_408ccc;
        case 0x408cd0u: goto label_408cd0;
        case 0x408cd4u: goto label_408cd4;
        case 0x408cd8u: goto label_408cd8;
        case 0x408cdcu: goto label_408cdc;
        case 0x408ce0u: goto label_408ce0;
        case 0x408ce4u: goto label_408ce4;
        case 0x408ce8u: goto label_408ce8;
        case 0x408cecu: goto label_408cec;
        case 0x408cf0u: goto label_408cf0;
        case 0x408cf4u: goto label_408cf4;
        case 0x408cf8u: goto label_408cf8;
        case 0x408cfcu: goto label_408cfc;
        case 0x408d00u: goto label_408d00;
        case 0x408d04u: goto label_408d04;
        case 0x408d08u: goto label_408d08;
        case 0x408d0cu: goto label_408d0c;
        case 0x408d10u: goto label_408d10;
        case 0x408d14u: goto label_408d14;
        case 0x408d18u: goto label_408d18;
        case 0x408d1cu: goto label_408d1c;
        case 0x408d20u: goto label_408d20;
        case 0x408d24u: goto label_408d24;
        case 0x408d28u: goto label_408d28;
        case 0x408d2cu: goto label_408d2c;
        case 0x408d30u: goto label_408d30;
        case 0x408d34u: goto label_408d34;
        case 0x408d38u: goto label_408d38;
        case 0x408d3cu: goto label_408d3c;
        case 0x408d40u: goto label_408d40;
        case 0x408d44u: goto label_408d44;
        case 0x408d48u: goto label_408d48;
        case 0x408d4cu: goto label_408d4c;
        case 0x408d50u: goto label_408d50;
        case 0x408d54u: goto label_408d54;
        case 0x408d58u: goto label_408d58;
        case 0x408d5cu: goto label_408d5c;
        case 0x408d60u: goto label_408d60;
        case 0x408d64u: goto label_408d64;
        case 0x408d68u: goto label_408d68;
        case 0x408d6cu: goto label_408d6c;
        case 0x408d70u: goto label_408d70;
        case 0x408d74u: goto label_408d74;
        case 0x408d78u: goto label_408d78;
        case 0x408d7cu: goto label_408d7c;
        case 0x408d80u: goto label_408d80;
        case 0x408d84u: goto label_408d84;
        case 0x408d88u: goto label_408d88;
        case 0x408d8cu: goto label_408d8c;
        case 0x408d90u: goto label_408d90;
        case 0x408d94u: goto label_408d94;
        case 0x408d98u: goto label_408d98;
        case 0x408d9cu: goto label_408d9c;
        case 0x408da0u: goto label_408da0;
        case 0x408da4u: goto label_408da4;
        case 0x408da8u: goto label_408da8;
        case 0x408dacu: goto label_408dac;
        case 0x408db0u: goto label_408db0;
        case 0x408db4u: goto label_408db4;
        case 0x408db8u: goto label_408db8;
        case 0x408dbcu: goto label_408dbc;
        case 0x408dc0u: goto label_408dc0;
        case 0x408dc4u: goto label_408dc4;
        case 0x408dc8u: goto label_408dc8;
        case 0x408dccu: goto label_408dcc;
        case 0x408dd0u: goto label_408dd0;
        case 0x408dd4u: goto label_408dd4;
        case 0x408dd8u: goto label_408dd8;
        case 0x408ddcu: goto label_408ddc;
        case 0x408de0u: goto label_408de0;
        case 0x408de4u: goto label_408de4;
        case 0x408de8u: goto label_408de8;
        case 0x408decu: goto label_408dec;
        case 0x408df0u: goto label_408df0;
        case 0x408df4u: goto label_408df4;
        case 0x408df8u: goto label_408df8;
        case 0x408dfcu: goto label_408dfc;
        case 0x408e00u: goto label_408e00;
        case 0x408e04u: goto label_408e04;
        case 0x408e08u: goto label_408e08;
        case 0x408e0cu: goto label_408e0c;
        case 0x408e10u: goto label_408e10;
        case 0x408e14u: goto label_408e14;
        case 0x408e18u: goto label_408e18;
        case 0x408e1cu: goto label_408e1c;
        case 0x408e20u: goto label_408e20;
        case 0x408e24u: goto label_408e24;
        case 0x408e28u: goto label_408e28;
        case 0x408e2cu: goto label_408e2c;
        case 0x408e30u: goto label_408e30;
        case 0x408e34u: goto label_408e34;
        case 0x408e38u: goto label_408e38;
        case 0x408e3cu: goto label_408e3c;
        case 0x408e40u: goto label_408e40;
        case 0x408e44u: goto label_408e44;
        case 0x408e48u: goto label_408e48;
        case 0x408e4cu: goto label_408e4c;
        case 0x408e50u: goto label_408e50;
        case 0x408e54u: goto label_408e54;
        case 0x408e58u: goto label_408e58;
        case 0x408e5cu: goto label_408e5c;
        case 0x408e60u: goto label_408e60;
        case 0x408e64u: goto label_408e64;
        case 0x408e68u: goto label_408e68;
        case 0x408e6cu: goto label_408e6c;
        case 0x408e70u: goto label_408e70;
        case 0x408e74u: goto label_408e74;
        case 0x408e78u: goto label_408e78;
        case 0x408e7cu: goto label_408e7c;
        case 0x408e80u: goto label_408e80;
        case 0x408e84u: goto label_408e84;
        case 0x408e88u: goto label_408e88;
        case 0x408e8cu: goto label_408e8c;
        case 0x408e90u: goto label_408e90;
        case 0x408e94u: goto label_408e94;
        case 0x408e98u: goto label_408e98;
        case 0x408e9cu: goto label_408e9c;
        case 0x408ea0u: goto label_408ea0;
        case 0x408ea4u: goto label_408ea4;
        case 0x408ea8u: goto label_408ea8;
        case 0x408eacu: goto label_408eac;
        case 0x408eb0u: goto label_408eb0;
        case 0x408eb4u: goto label_408eb4;
        case 0x408eb8u: goto label_408eb8;
        case 0x408ebcu: goto label_408ebc;
        case 0x408ec0u: goto label_408ec0;
        case 0x408ec4u: goto label_408ec4;
        case 0x408ec8u: goto label_408ec8;
        case 0x408eccu: goto label_408ecc;
        case 0x408ed0u: goto label_408ed0;
        case 0x408ed4u: goto label_408ed4;
        case 0x408ed8u: goto label_408ed8;
        case 0x408edcu: goto label_408edc;
        case 0x408ee0u: goto label_408ee0;
        case 0x408ee4u: goto label_408ee4;
        case 0x408ee8u: goto label_408ee8;
        case 0x408eecu: goto label_408eec;
        case 0x408ef0u: goto label_408ef0;
        case 0x408ef4u: goto label_408ef4;
        case 0x408ef8u: goto label_408ef8;
        case 0x408efcu: goto label_408efc;
        case 0x408f00u: goto label_408f00;
        case 0x408f04u: goto label_408f04;
        case 0x408f08u: goto label_408f08;
        case 0x408f0cu: goto label_408f0c;
        case 0x408f10u: goto label_408f10;
        case 0x408f14u: goto label_408f14;
        case 0x408f18u: goto label_408f18;
        case 0x408f1cu: goto label_408f1c;
        case 0x408f20u: goto label_408f20;
        case 0x408f24u: goto label_408f24;
        case 0x408f28u: goto label_408f28;
        case 0x408f2cu: goto label_408f2c;
        case 0x408f30u: goto label_408f30;
        case 0x408f34u: goto label_408f34;
        case 0x408f38u: goto label_408f38;
        case 0x408f3cu: goto label_408f3c;
        case 0x408f40u: goto label_408f40;
        case 0x408f44u: goto label_408f44;
        case 0x408f48u: goto label_408f48;
        case 0x408f4cu: goto label_408f4c;
        case 0x408f50u: goto label_408f50;
        case 0x408f54u: goto label_408f54;
        case 0x408f58u: goto label_408f58;
        case 0x408f5cu: goto label_408f5c;
        case 0x408f60u: goto label_408f60;
        case 0x408f64u: goto label_408f64;
        case 0x408f68u: goto label_408f68;
        case 0x408f6cu: goto label_408f6c;
        case 0x408f70u: goto label_408f70;
        case 0x408f74u: goto label_408f74;
        case 0x408f78u: goto label_408f78;
        case 0x408f7cu: goto label_408f7c;
        case 0x408f80u: goto label_408f80;
        case 0x408f84u: goto label_408f84;
        case 0x408f88u: goto label_408f88;
        case 0x408f8cu: goto label_408f8c;
        case 0x408f90u: goto label_408f90;
        case 0x408f94u: goto label_408f94;
        case 0x408f98u: goto label_408f98;
        case 0x408f9cu: goto label_408f9c;
        case 0x408fa0u: goto label_408fa0;
        case 0x408fa4u: goto label_408fa4;
        case 0x408fa8u: goto label_408fa8;
        case 0x408facu: goto label_408fac;
        case 0x408fb0u: goto label_408fb0;
        case 0x408fb4u: goto label_408fb4;
        case 0x408fb8u: goto label_408fb8;
        case 0x408fbcu: goto label_408fbc;
        case 0x408fc0u: goto label_408fc0;
        case 0x408fc4u: goto label_408fc4;
        case 0x408fc8u: goto label_408fc8;
        case 0x408fccu: goto label_408fcc;
        case 0x408fd0u: goto label_408fd0;
        case 0x408fd4u: goto label_408fd4;
        case 0x408fd8u: goto label_408fd8;
        case 0x408fdcu: goto label_408fdc;
        case 0x408fe0u: goto label_408fe0;
        case 0x408fe4u: goto label_408fe4;
        case 0x408fe8u: goto label_408fe8;
        case 0x408fecu: goto label_408fec;
        case 0x408ff0u: goto label_408ff0;
        case 0x408ff4u: goto label_408ff4;
        case 0x408ff8u: goto label_408ff8;
        case 0x408ffcu: goto label_408ffc;
        case 0x409000u: goto label_409000;
        case 0x409004u: goto label_409004;
        case 0x409008u: goto label_409008;
        case 0x40900cu: goto label_40900c;
        case 0x409010u: goto label_409010;
        case 0x409014u: goto label_409014;
        case 0x409018u: goto label_409018;
        case 0x40901cu: goto label_40901c;
        case 0x409020u: goto label_409020;
        case 0x409024u: goto label_409024;
        case 0x409028u: goto label_409028;
        case 0x40902cu: goto label_40902c;
        case 0x409030u: goto label_409030;
        case 0x409034u: goto label_409034;
        case 0x409038u: goto label_409038;
        case 0x40903cu: goto label_40903c;
        case 0x409040u: goto label_409040;
        case 0x409044u: goto label_409044;
        case 0x409048u: goto label_409048;
        case 0x40904cu: goto label_40904c;
        case 0x409050u: goto label_409050;
        case 0x409054u: goto label_409054;
        case 0x409058u: goto label_409058;
        case 0x40905cu: goto label_40905c;
        case 0x409060u: goto label_409060;
        case 0x409064u: goto label_409064;
        case 0x409068u: goto label_409068;
        case 0x40906cu: goto label_40906c;
        case 0x409070u: goto label_409070;
        case 0x409074u: goto label_409074;
        case 0x409078u: goto label_409078;
        case 0x40907cu: goto label_40907c;
        case 0x409080u: goto label_409080;
        case 0x409084u: goto label_409084;
        case 0x409088u: goto label_409088;
        case 0x40908cu: goto label_40908c;
        case 0x409090u: goto label_409090;
        case 0x409094u: goto label_409094;
        case 0x409098u: goto label_409098;
        case 0x40909cu: goto label_40909c;
        case 0x4090a0u: goto label_4090a0;
        case 0x4090a4u: goto label_4090a4;
        case 0x4090a8u: goto label_4090a8;
        case 0x4090acu: goto label_4090ac;
        case 0x4090b0u: goto label_4090b0;
        case 0x4090b4u: goto label_4090b4;
        case 0x4090b8u: goto label_4090b8;
        case 0x4090bcu: goto label_4090bc;
        case 0x4090c0u: goto label_4090c0;
        case 0x4090c4u: goto label_4090c4;
        case 0x4090c8u: goto label_4090c8;
        case 0x4090ccu: goto label_4090cc;
        case 0x4090d0u: goto label_4090d0;
        case 0x4090d4u: goto label_4090d4;
        case 0x4090d8u: goto label_4090d8;
        case 0x4090dcu: goto label_4090dc;
        case 0x4090e0u: goto label_4090e0;
        case 0x4090e4u: goto label_4090e4;
        case 0x4090e8u: goto label_4090e8;
        case 0x4090ecu: goto label_4090ec;
        case 0x4090f0u: goto label_4090f0;
        case 0x4090f4u: goto label_4090f4;
        case 0x4090f8u: goto label_4090f8;
        case 0x4090fcu: goto label_4090fc;
        case 0x409100u: goto label_409100;
        case 0x409104u: goto label_409104;
        case 0x409108u: goto label_409108;
        case 0x40910cu: goto label_40910c;
        case 0x409110u: goto label_409110;
        case 0x409114u: goto label_409114;
        case 0x409118u: goto label_409118;
        case 0x40911cu: goto label_40911c;
        case 0x409120u: goto label_409120;
        case 0x409124u: goto label_409124;
        case 0x409128u: goto label_409128;
        case 0x40912cu: goto label_40912c;
        case 0x409130u: goto label_409130;
        case 0x409134u: goto label_409134;
        case 0x409138u: goto label_409138;
        case 0x40913cu: goto label_40913c;
        case 0x409140u: goto label_409140;
        case 0x409144u: goto label_409144;
        case 0x409148u: goto label_409148;
        case 0x40914cu: goto label_40914c;
        case 0x409150u: goto label_409150;
        case 0x409154u: goto label_409154;
        case 0x409158u: goto label_409158;
        case 0x40915cu: goto label_40915c;
        case 0x409160u: goto label_409160;
        case 0x409164u: goto label_409164;
        case 0x409168u: goto label_409168;
        case 0x40916cu: goto label_40916c;
        case 0x409170u: goto label_409170;
        case 0x409174u: goto label_409174;
        case 0x409178u: goto label_409178;
        case 0x40917cu: goto label_40917c;
        case 0x409180u: goto label_409180;
        case 0x409184u: goto label_409184;
        case 0x409188u: goto label_409188;
        case 0x40918cu: goto label_40918c;
        case 0x409190u: goto label_409190;
        case 0x409194u: goto label_409194;
        case 0x409198u: goto label_409198;
        case 0x40919cu: goto label_40919c;
        case 0x4091a0u: goto label_4091a0;
        case 0x4091a4u: goto label_4091a4;
        case 0x4091a8u: goto label_4091a8;
        case 0x4091acu: goto label_4091ac;
        case 0x4091b0u: goto label_4091b0;
        case 0x4091b4u: goto label_4091b4;
        case 0x4091b8u: goto label_4091b8;
        case 0x4091bcu: goto label_4091bc;
        case 0x4091c0u: goto label_4091c0;
        case 0x4091c4u: goto label_4091c4;
        case 0x4091c8u: goto label_4091c8;
        case 0x4091ccu: goto label_4091cc;
        case 0x4091d0u: goto label_4091d0;
        case 0x4091d4u: goto label_4091d4;
        case 0x4091d8u: goto label_4091d8;
        case 0x4091dcu: goto label_4091dc;
        case 0x4091e0u: goto label_4091e0;
        case 0x4091e4u: goto label_4091e4;
        case 0x4091e8u: goto label_4091e8;
        case 0x4091ecu: goto label_4091ec;
        case 0x4091f0u: goto label_4091f0;
        case 0x4091f4u: goto label_4091f4;
        case 0x4091f8u: goto label_4091f8;
        case 0x4091fcu: goto label_4091fc;
        case 0x409200u: goto label_409200;
        case 0x409204u: goto label_409204;
        case 0x409208u: goto label_409208;
        case 0x40920cu: goto label_40920c;
        case 0x409210u: goto label_409210;
        case 0x409214u: goto label_409214;
        case 0x409218u: goto label_409218;
        case 0x40921cu: goto label_40921c;
        case 0x409220u: goto label_409220;
        case 0x409224u: goto label_409224;
        case 0x409228u: goto label_409228;
        case 0x40922cu: goto label_40922c;
        case 0x409230u: goto label_409230;
        case 0x409234u: goto label_409234;
        case 0x409238u: goto label_409238;
        case 0x40923cu: goto label_40923c;
        case 0x409240u: goto label_409240;
        case 0x409244u: goto label_409244;
        case 0x409248u: goto label_409248;
        case 0x40924cu: goto label_40924c;
        case 0x409250u: goto label_409250;
        case 0x409254u: goto label_409254;
        case 0x409258u: goto label_409258;
        case 0x40925cu: goto label_40925c;
        case 0x409260u: goto label_409260;
        case 0x409264u: goto label_409264;
        case 0x409268u: goto label_409268;
        case 0x40926cu: goto label_40926c;
        case 0x409270u: goto label_409270;
        case 0x409274u: goto label_409274;
        case 0x409278u: goto label_409278;
        case 0x40927cu: goto label_40927c;
        case 0x409280u: goto label_409280;
        case 0x409284u: goto label_409284;
        case 0x409288u: goto label_409288;
        case 0x40928cu: goto label_40928c;
        case 0x409290u: goto label_409290;
        case 0x409294u: goto label_409294;
        case 0x409298u: goto label_409298;
        case 0x40929cu: goto label_40929c;
        case 0x4092a0u: goto label_4092a0;
        case 0x4092a4u: goto label_4092a4;
        case 0x4092a8u: goto label_4092a8;
        case 0x4092acu: goto label_4092ac;
        case 0x4092b0u: goto label_4092b0;
        case 0x4092b4u: goto label_4092b4;
        case 0x4092b8u: goto label_4092b8;
        case 0x4092bcu: goto label_4092bc;
        case 0x4092c0u: goto label_4092c0;
        case 0x4092c4u: goto label_4092c4;
        case 0x4092c8u: goto label_4092c8;
        case 0x4092ccu: goto label_4092cc;
        case 0x4092d0u: goto label_4092d0;
        case 0x4092d4u: goto label_4092d4;
        case 0x4092d8u: goto label_4092d8;
        case 0x4092dcu: goto label_4092dc;
        case 0x4092e0u: goto label_4092e0;
        case 0x4092e4u: goto label_4092e4;
        case 0x4092e8u: goto label_4092e8;
        case 0x4092ecu: goto label_4092ec;
        case 0x4092f0u: goto label_4092f0;
        case 0x4092f4u: goto label_4092f4;
        case 0x4092f8u: goto label_4092f8;
        case 0x4092fcu: goto label_4092fc;
        case 0x409300u: goto label_409300;
        case 0x409304u: goto label_409304;
        case 0x409308u: goto label_409308;
        case 0x40930cu: goto label_40930c;
        case 0x409310u: goto label_409310;
        case 0x409314u: goto label_409314;
        case 0x409318u: goto label_409318;
        case 0x40931cu: goto label_40931c;
        case 0x409320u: goto label_409320;
        case 0x409324u: goto label_409324;
        case 0x409328u: goto label_409328;
        case 0x40932cu: goto label_40932c;
        case 0x409330u: goto label_409330;
        case 0x409334u: goto label_409334;
        case 0x409338u: goto label_409338;
        case 0x40933cu: goto label_40933c;
        default: break;
    }

    ctx->pc = 0x408520u;

label_408520:
    // 0x408520: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x408520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_408524:
    // 0x408524: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x408524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_408528:
    // 0x408528: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x408528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_40852c:
    // 0x40852c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x40852cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_408530:
    // 0x408530: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x408530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_408534:
    // 0x408534: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x408534u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_408538:
    // 0x408538: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x408538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_40853c:
    // 0x40853c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x40853cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_408540:
    // 0x408540: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x408540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_408544:
    // 0x408544: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x408544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_408548:
    // 0x408548: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x408548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40854c:
    // 0x40854c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x40854cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_408550:
    // 0x408550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x408550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_408554:
    // 0x408554: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x408554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_408558:
    // 0x408558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x408558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40855c:
    // 0x40855c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x40855cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_408560:
    // 0x408560: 0x8c67d130  lw          $a3, -0x2ED0($v1)
    ctx->pc = 0x408560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_408564:
    // 0x408564: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x408564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_408568:
    // 0x408568: 0x8cf50130  lw          $s5, 0x130($a3)
    ctx->pc = 0x408568u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_40856c:
    // 0x40856c: 0x8c830164  lw          $v1, 0x164($a0)
    ctx->pc = 0x40856cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 356)));
label_408570:
    // 0x408570: 0x2a6b804  sllv        $s7, $a2, $s5
    ctx->pc = 0x408570u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 21) & 0x1F));
label_408574:
    // 0x408574: 0x2e03027  not         $a2, $s7
    ctx->pc = 0x408574u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 23) | GPR_U64(ctx, 0)));
label_408578:
    // 0x408578: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x408578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_40857c:
    // 0x40857c: 0xac830164  sw          $v1, 0x164($a0)
    ctx->pc = 0x40857cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 3));
label_408580:
    // 0x408580: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x408580u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_408584:
    // 0x408584: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
label_408588:
    if (ctx->pc == 0x408588u) {
        ctx->pc = 0x408588u;
            // 0x408588: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40858Cu;
        goto label_40858c;
    }
    ctx->pc = 0x408584u;
    {
        const bool branch_taken_0x408584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x408588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408584u;
            // 0x408588: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408584) {
            ctx->pc = 0x4087C4u;
            goto label_4087c4;
        }
    }
    ctx->pc = 0x40858Cu;
label_40858c:
    // 0x40858c: 0x8e64015c  lw          $a0, 0x15C($s3)
    ctx->pc = 0x40858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 348)));
label_408590:
    // 0x408590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x408590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_408594:
    // 0x408594: 0x5483008c  bnel        $a0, $v1, . + 4 + (0x8C << 2)
label_408598:
    if (ctx->pc == 0x408598u) {
        ctx->pc = 0x408598u;
            // 0x408598: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x40859Cu;
        goto label_40859c;
    }
    ctx->pc = 0x408594u;
    {
        const bool branch_taken_0x408594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x408594) {
            ctx->pc = 0x408598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x408594u;
            // 0x408598: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4087C8u;
            goto label_4087c8;
        }
    }
    ctx->pc = 0x40859Cu;
label_40859c:
    // 0x40859c: 0x8e630160  lw          $v1, 0x160($s3)
    ctx->pc = 0x40859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
label_4085a0:
    // 0x4085a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4085a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4085a4:
    // 0x4085a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4085a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4085a8:
    // 0x4085a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4085a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4085ac:
    // 0x4085ac: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x4085acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4085b0:
    // 0x4085b0: 0xc04f278  jal         func_13C9E0
label_4085b4:
    if (ctx->pc == 0x4085B4u) {
        ctx->pc = 0x4085B4u;
            // 0x4085b4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x4085B8u;
        goto label_4085b8;
    }
    ctx->pc = 0x4085B0u;
    SET_GPR_U32(ctx, 31, 0x4085B8u);
    ctx->pc = 0x4085B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4085B0u;
            // 0x4085b4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4085B8u; }
        if (ctx->pc != 0x4085B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4085B8u; }
        if (ctx->pc != 0x4085B8u) { return; }
    }
    ctx->pc = 0x4085B8u;
label_4085b8:
    // 0x4085b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4085b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4085bc:
    // 0x4085bc: 0xc04ce80  jal         func_133A00
label_4085c0:
    if (ctx->pc == 0x4085C0u) {
        ctx->pc = 0x4085C0u;
            // 0x4085c0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x4085C4u;
        goto label_4085c4;
    }
    ctx->pc = 0x4085BCu;
    SET_GPR_U32(ctx, 31, 0x4085C4u);
    ctx->pc = 0x4085C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4085BCu;
            // 0x4085c0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4085C4u; }
        if (ctx->pc != 0x4085C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4085C4u; }
        if (ctx->pc != 0x4085C4u) { return; }
    }
    ctx->pc = 0x4085C4u;
label_4085c4:
    // 0x4085c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4085c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4085c8:
    // 0x4085c8: 0x26650110  addiu       $a1, $s3, 0x110
    ctx->pc = 0x4085c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_4085cc:
    // 0x4085cc: 0xc04cd60  jal         func_133580
label_4085d0:
    if (ctx->pc == 0x4085D0u) {
        ctx->pc = 0x4085D0u;
            // 0x4085d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4085D4u;
        goto label_4085d4;
    }
    ctx->pc = 0x4085CCu;
    SET_GPR_U32(ctx, 31, 0x4085D4u);
    ctx->pc = 0x4085D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4085CCu;
            // 0x4085d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4085D4u; }
        if (ctx->pc != 0x4085D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4085D4u; }
        if (ctx->pc != 0x4085D4u) { return; }
    }
    ctx->pc = 0x4085D4u;
label_4085d4:
    // 0x4085d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4085d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4085d8:
    // 0x4085d8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4085d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4085dc:
    // 0x4085dc: 0x8c470d70  lw          $a3, 0xD70($v0)
    ctx->pc = 0x4085dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
label_4085e0:
    // 0x4085e0: 0x2463bac0  addiu       $v1, $v1, -0x4540
    ctx->pc = 0x4085e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949568));
label_4085e4:
    // 0x4085e4: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x4085e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_4085e8:
    // 0x4085e8: 0x153080  sll         $a2, $s5, 2
    ctx->pc = 0x4085e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_4085ec:
    // 0x4085ec: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x4085ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_4085f0:
    // 0x4085f0: 0x8ce70074  lw          $a3, 0x74($a3)
    ctx->pc = 0x4085f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
label_4085f4:
    // 0x4085f4: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4085f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_4085f8:
    // 0x4085f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4085f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4085fc:
    // 0x4085fc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4085fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_408600:
    // 0x408600: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x408600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_408604:
    // 0x408604: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x408604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_408608:
    // 0x408608: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x408608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_40860c:
    // 0x40860c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x40860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408610:
    // 0x408610: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x408610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_408614:
    // 0x408614: 0xc4620058  lwc1        $f2, 0x58($v1)
    ctx->pc = 0x408614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408618:
    // 0x408618: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x408618u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_40861c:
    // 0x40861c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40861cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_408620:
    // 0x408620: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x408620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_408624:
    // 0x408624: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x408624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_408628:
    // 0x408628: 0xc04f29c  jal         func_13CA70
label_40862c:
    if (ctx->pc == 0x40862Cu) {
        ctx->pc = 0x40862Cu;
            // 0x40862c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x408630u;
        goto label_408630;
    }
    ctx->pc = 0x408628u;
    SET_GPR_U32(ctx, 31, 0x408630u);
    ctx->pc = 0x40862Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408628u;
            // 0x40862c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408630u; }
        if (ctx->pc != 0x408630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408630u; }
        if (ctx->pc != 0x408630u) { return; }
    }
    ctx->pc = 0x408630u;
label_408630:
    // 0x408630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_408634:
    // 0x408634: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x408634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_408638:
    // 0x408638: 0xc04cd60  jal         func_133580
label_40863c:
    if (ctx->pc == 0x40863Cu) {
        ctx->pc = 0x40863Cu;
            // 0x40863c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408640u;
        goto label_408640;
    }
    ctx->pc = 0x408638u;
    SET_GPR_U32(ctx, 31, 0x408640u);
    ctx->pc = 0x40863Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408638u;
            // 0x40863c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408640u; }
        if (ctx->pc != 0x408640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408640u; }
        if (ctx->pc != 0x408640u) { return; }
    }
    ctx->pc = 0x408640u;
label_408640:
    // 0x408640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_408644:
    // 0x408644: 0x266500d0  addiu       $a1, $s3, 0xD0
    ctx->pc = 0x408644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
label_408648:
    // 0x408648: 0xc04cd60  jal         func_133580
label_40864c:
    if (ctx->pc == 0x40864Cu) {
        ctx->pc = 0x40864Cu;
            // 0x40864c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408650u;
        goto label_408650;
    }
    ctx->pc = 0x408648u;
    SET_GPR_U32(ctx, 31, 0x408650u);
    ctx->pc = 0x40864Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408648u;
            // 0x40864c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408650u; }
        if (ctx->pc != 0x408650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408650u; }
        if (ctx->pc != 0x408650u) { return; }
    }
    ctx->pc = 0x408650u;
label_408650:
    // 0x408650: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x408650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_408654:
    // 0x408654: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x408654u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_408658:
    // 0x408658: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x408658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_40865c:
    // 0x40865c: 0x8e960000  lw          $s6, 0x0($s4)
    ctx->pc = 0x40865cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_408660:
    // 0x408660: 0xc07698c  jal         func_1DA630
label_408664:
    if (ctx->pc == 0x408664u) {
        ctx->pc = 0x408664u;
            // 0x408664: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408668u;
        goto label_408668;
    }
    ctx->pc = 0x408660u;
    SET_GPR_U32(ctx, 31, 0x408668u);
    ctx->pc = 0x408664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408660u;
            // 0x408664: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408668u; }
        if (ctx->pc != 0x408668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408668u; }
        if (ctx->pc != 0x408668u) { return; }
    }
    ctx->pc = 0x408668u;
label_408668:
    // 0x408668: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x408668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40866c:
    // 0x40866c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_408670:
    if (ctx->pc == 0x408670u) {
        ctx->pc = 0x408674u;
        goto label_408674;
    }
    ctx->pc = 0x40866Cu;
    {
        const bool branch_taken_0x40866c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x40866c) {
            ctx->pc = 0x40867Cu;
            goto label_40867c;
        }
    }
    ctx->pc = 0x408674u;
label_408674:
    // 0x408674: 0x10000033  b           . + 4 + (0x33 << 2)
label_408678:
    if (ctx->pc == 0x408678u) {
        ctx->pc = 0x408678u;
            // 0x408678: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x40867Cu;
        goto label_40867c;
    }
    ctx->pc = 0x408674u;
    {
        const bool branch_taken_0x408674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408674u;
            // 0x408678: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408674) {
            ctx->pc = 0x408744u;
            goto label_408744;
        }
    }
    ctx->pc = 0x40867Cu;
label_40867c:
    // 0x40867c: 0xc0576f4  jal         func_15DBD0
label_408680:
    if (ctx->pc == 0x408680u) {
        ctx->pc = 0x408684u;
        goto label_408684;
    }
    ctx->pc = 0x40867Cu;
    SET_GPR_U32(ctx, 31, 0x408684u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408684u; }
        if (ctx->pc != 0x408684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408684u; }
        if (ctx->pc != 0x408684u) { return; }
    }
    ctx->pc = 0x408684u;
label_408684:
    // 0x408684: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x408684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_408688:
    // 0x408688: 0xc076984  jal         func_1DA610
label_40868c:
    if (ctx->pc == 0x40868Cu) {
        ctx->pc = 0x40868Cu;
            // 0x40868c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408690u;
        goto label_408690;
    }
    ctx->pc = 0x408688u;
    SET_GPR_U32(ctx, 31, 0x408690u);
    ctx->pc = 0x40868Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408688u;
            // 0x40868c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408690u; }
        if (ctx->pc != 0x408690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408690u; }
        if (ctx->pc != 0x408690u) { return; }
    }
    ctx->pc = 0x408690u;
label_408690:
    // 0x408690: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x408690u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_408694:
    // 0x408694: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x408694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_408698:
    // 0x408698: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x408698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_40869c:
    // 0x40869c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40869cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4086a0:
    // 0x4086a0: 0xc442fc40  lwc1        $f2, -0x3C0($v0)
    ctx->pc = 0x4086a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4086a4:
    // 0x4086a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4086a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4086a8:
    // 0x4086a8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4086a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4086ac:
    // 0x4086ac: 0xc441fc48  lwc1        $f1, -0x3B8($v0)
    ctx->pc = 0x4086acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4086b0:
    // 0x4086b0: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x4086b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_4086b4:
    // 0x4086b4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4086b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4086b8:
    // 0x4086b8: 0xc440fc4c  lwc1        $f0, -0x3B4($v0)
    ctx->pc = 0x4086b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4086bc:
    // 0x4086bc: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x4086bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_4086c0:
    // 0x4086c0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4086c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4086c4:
    // 0x4086c4: 0x8c42fc44  lw          $v0, -0x3BC($v0)
    ctx->pc = 0x4086c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966340)));
label_4086c8:
    // 0x4086c8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x4086c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_4086cc:
    // 0x4086cc: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x4086ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_4086d0:
    // 0x4086d0: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x4086d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4086d4:
    // 0x4086d4: 0xc04cca0  jal         func_133280
label_4086d8:
    if (ctx->pc == 0x4086D8u) {
        ctx->pc = 0x4086D8u;
            // 0x4086d8: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->pc = 0x4086DCu;
        goto label_4086dc;
    }
    ctx->pc = 0x4086D4u;
    SET_GPR_U32(ctx, 31, 0x4086DCu);
    ctx->pc = 0x4086D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4086D4u;
            // 0x4086d8: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4086DCu; }
        if (ctx->pc != 0x4086DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4086DCu; }
        if (ctx->pc != 0x4086DCu) { return; }
    }
    ctx->pc = 0x4086DCu;
label_4086dc:
    // 0x4086dc: 0xc076980  jal         func_1DA600
label_4086e0:
    if (ctx->pc == 0x4086E0u) {
        ctx->pc = 0x4086E0u;
            // 0x4086e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4086E4u;
        goto label_4086e4;
    }
    ctx->pc = 0x4086DCu;
    SET_GPR_U32(ctx, 31, 0x4086E4u);
    ctx->pc = 0x4086E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4086DCu;
            // 0x4086e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4086E4u; }
        if (ctx->pc != 0x4086E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4086E4u; }
        if (ctx->pc != 0x4086E4u) { return; }
    }
    ctx->pc = 0x4086E4u;
label_4086e4:
    // 0x4086e4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4086e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4086e8:
    // 0x4086e8: 0xc04cc34  jal         func_1330D0
label_4086ec:
    if (ctx->pc == 0x4086ECu) {
        ctx->pc = 0x4086ECu;
            // 0x4086ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4086F0u;
        goto label_4086f0;
    }
    ctx->pc = 0x4086E8u;
    SET_GPR_U32(ctx, 31, 0x4086F0u);
    ctx->pc = 0x4086ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4086E8u;
            // 0x4086ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4086F0u; }
        if (ctx->pc != 0x4086F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4086F0u; }
        if (ctx->pc != 0x4086F0u) { return; }
    }
    ctx->pc = 0x4086F0u;
label_4086f0:
    // 0x4086f0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4086f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4086f4:
    // 0x4086f4: 0xc461bae8  lwc1        $f1, -0x4518($v1)
    ctx->pc = 0x4086f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294949608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4086f8:
    // 0x4086f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4086f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4086fc:
    // 0x4086fc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_408700:
    if (ctx->pc == 0x408700u) {
        ctx->pc = 0x408700u;
            // 0x408700: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408704u;
        goto label_408704;
    }
    ctx->pc = 0x4086FCu;
    {
        const bool branch_taken_0x4086fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4086fc) {
            ctx->pc = 0x408700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4086FCu;
            // 0x408700: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40870Cu;
            goto label_40870c;
        }
    }
    ctx->pc = 0x408704u;
label_408704:
    // 0x408704: 0x1000000f  b           . + 4 + (0xF << 2)
label_408708:
    if (ctx->pc == 0x408708u) {
        ctx->pc = 0x408708u;
            // 0x408708: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x40870Cu;
        goto label_40870c;
    }
    ctx->pc = 0x408704u;
    {
        const bool branch_taken_0x408704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408704u;
            // 0x408708: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408704) {
            ctx->pc = 0x408744u;
            goto label_408744;
        }
    }
    ctx->pc = 0x40870Cu;
label_40870c:
    // 0x40870c: 0xc07697c  jal         func_1DA5F0
label_408710:
    if (ctx->pc == 0x408710u) {
        ctx->pc = 0x408714u;
        goto label_408714;
    }
    ctx->pc = 0x40870Cu;
    SET_GPR_U32(ctx, 31, 0x408714u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408714u; }
        if (ctx->pc != 0x408714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408714u; }
        if (ctx->pc != 0x408714u) { return; }
    }
    ctx->pc = 0x408714u;
label_408714:
    // 0x408714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x408714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_408718:
    // 0x408718: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x408718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_40871c:
    // 0x40871c: 0xc04cd60  jal         func_133580
label_408720:
    if (ctx->pc == 0x408720u) {
        ctx->pc = 0x408720u;
            // 0x408720: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408724u;
        goto label_408724;
    }
    ctx->pc = 0x40871Cu;
    SET_GPR_U32(ctx, 31, 0x408724u);
    ctx->pc = 0x408720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40871Cu;
            // 0x408720: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408724u; }
        if (ctx->pc != 0x408724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408724u; }
        if (ctx->pc != 0x408724u) { return; }
    }
    ctx->pc = 0x408724u;
label_408724:
    // 0x408724: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x408724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_408728:
    // 0x408728: 0xc04c650  jal         func_131940
label_40872c:
    if (ctx->pc == 0x40872Cu) {
        ctx->pc = 0x40872Cu;
            // 0x40872c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x408730u;
        goto label_408730;
    }
    ctx->pc = 0x408728u;
    SET_GPR_U32(ctx, 31, 0x408730u);
    ctx->pc = 0x40872Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408728u;
            // 0x40872c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408730u; }
        if (ctx->pc != 0x408730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408730u; }
        if (ctx->pc != 0x408730u) { return; }
    }
    ctx->pc = 0x408730u;
label_408730:
    // 0x408730: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x408730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_408734:
    // 0x408734: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x408734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_408738:
    // 0x408738: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x408738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_40873c:
    // 0x40873c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x40873cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_408740:
    // 0x408740: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x408740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_408744:
    // 0x408744: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x408744u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_408748:
    // 0x408748: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_40874c:
    if (ctx->pc == 0x40874Cu) {
        ctx->pc = 0x40874Cu;
            // 0x40874c: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x408750u;
        goto label_408750;
    }
    ctx->pc = 0x408748u;
    {
        const bool branch_taken_0x408748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x40874Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408748u;
            // 0x40874c: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408748) {
            ctx->pc = 0x4087C4u;
            goto label_4087c4;
        }
    }
    ctx->pc = 0x408750u;
label_408750:
    // 0x408750: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x408750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_408754:
    // 0x408754: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x408754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_408758:
    // 0x408758: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x408758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40875c:
    // 0x40875c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40875cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_408760:
    // 0x408760: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x408760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
label_408764:
    // 0x408764: 0xc04cd60  jal         func_133580
label_408768:
    if (ctx->pc == 0x408768u) {
        ctx->pc = 0x408768u;
            // 0x408768: 0xae620164  sw          $v0, 0x164($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 356), GPR_U32(ctx, 2));
        ctx->pc = 0x40876Cu;
        goto label_40876c;
    }
    ctx->pc = 0x408764u;
    SET_GPR_U32(ctx, 31, 0x40876Cu);
    ctx->pc = 0x408768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408764u;
            // 0x408768: 0xae620164  sw          $v0, 0x164($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40876Cu; }
        if (ctx->pc != 0x40876Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40876Cu; }
        if (ctx->pc != 0x40876Cu) { return; }
    }
    ctx->pc = 0x40876Cu;
label_40876c:
    // 0x40876c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x40876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_408770:
    // 0x408770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_408774:
    // 0x408774: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x408774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_408778:
    // 0x408778: 0xc04e4a4  jal         func_139290
label_40877c:
    if (ctx->pc == 0x40877Cu) {
        ctx->pc = 0x40877Cu;
            // 0x40877c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408780u;
        goto label_408780;
    }
    ctx->pc = 0x408778u;
    SET_GPR_U32(ctx, 31, 0x408780u);
    ctx->pc = 0x40877Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408778u;
            // 0x40877c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408780u; }
        if (ctx->pc != 0x408780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408780u; }
        if (ctx->pc != 0x408780u) { return; }
    }
    ctx->pc = 0x408780u;
label_408780:
    // 0x408780: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x408780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_408784:
    // 0x408784: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x408784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_408788:
    // 0x408788: 0x320f809  jalr        $t9
label_40878c:
    if (ctx->pc == 0x40878Cu) {
        ctx->pc = 0x40878Cu;
            // 0x40878c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408790u;
        goto label_408790;
    }
    ctx->pc = 0x408788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x408790u);
        ctx->pc = 0x40878Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408788u;
            // 0x40878c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x408790u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x408790u; }
            if (ctx->pc != 0x408790u) { return; }
        }
        }
    }
    ctx->pc = 0x408790u;
label_408790:
    // 0x408790: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x408790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_408794:
    // 0x408794: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x408794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_408798:
    // 0x408798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40879c:
    // 0x40879c: 0xc054fd4  jal         func_153F50
label_4087a0:
    if (ctx->pc == 0x4087A0u) {
        ctx->pc = 0x4087A0u;
            // 0x4087a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4087A4u;
        goto label_4087a4;
    }
    ctx->pc = 0x40879Cu;
    SET_GPR_U32(ctx, 31, 0x4087A4u);
    ctx->pc = 0x4087A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40879Cu;
            // 0x4087a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4087A4u; }
        if (ctx->pc != 0x4087A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4087A4u; }
        if (ctx->pc != 0x4087A4u) { return; }
    }
    ctx->pc = 0x4087A4u;
label_4087a4:
    // 0x4087a4: 0xc04e738  jal         func_139CE0
label_4087a8:
    if (ctx->pc == 0x4087A8u) {
        ctx->pc = 0x4087A8u;
            // 0x4087a8: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x4087ACu;
        goto label_4087ac;
    }
    ctx->pc = 0x4087A4u;
    SET_GPR_U32(ctx, 31, 0x4087ACu);
    ctx->pc = 0x4087A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4087A4u;
            // 0x4087a8: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4087ACu; }
        if (ctx->pc != 0x4087ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4087ACu; }
        if (ctx->pc != 0x4087ACu) { return; }
    }
    ctx->pc = 0x4087ACu;
label_4087ac:
    // 0x4087ac: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4087acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4087b0:
    // 0x4087b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4087b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4087b4:
    // 0x4087b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4087b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4087b8:
    // 0x4087b8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4087b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4087bc:
    // 0x4087bc: 0xc055234  jal         func_1548D0
label_4087c0:
    if (ctx->pc == 0x4087C0u) {
        ctx->pc = 0x4087C0u;
            // 0x4087c0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4087C4u;
        goto label_4087c4;
    }
    ctx->pc = 0x4087BCu;
    SET_GPR_U32(ctx, 31, 0x4087C4u);
    ctx->pc = 0x4087C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4087BCu;
            // 0x4087c0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4087C4u; }
        if (ctx->pc != 0x4087C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4087C4u; }
        if (ctx->pc != 0x4087C4u) { return; }
    }
    ctx->pc = 0x4087C4u;
label_4087c4:
    // 0x4087c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4087c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4087c8:
    // 0x4087c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4087c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4087cc:
    // 0x4087cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4087ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4087d0:
    // 0x4087d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4087d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4087d4:
    // 0x4087d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4087d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4087d8:
    // 0x4087d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4087d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4087dc:
    // 0x4087dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4087dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4087e0:
    // 0x4087e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4087e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4087e4:
    // 0x4087e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4087e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4087e8:
    // 0x4087e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4087e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4087ec:
    // 0x4087ec: 0x3e00008  jr          $ra
label_4087f0:
    if (ctx->pc == 0x4087F0u) {
        ctx->pc = 0x4087F0u;
            // 0x4087f0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x4087F4u;
        goto label_4087f4;
    }
    ctx->pc = 0x4087ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4087F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4087ECu;
            // 0x4087f0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4087F4u;
label_4087f4:
    // 0x4087f4: 0x0  nop
    ctx->pc = 0x4087f4u;
    // NOP
label_4087f8:
    // 0x4087f8: 0x0  nop
    ctx->pc = 0x4087f8u;
    // NOP
label_4087fc:
    // 0x4087fc: 0x0  nop
    ctx->pc = 0x4087fcu;
    // NOP
label_408800:
    // 0x408800: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x408800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_408804:
    // 0x408804: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x408804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_408808:
    // 0x408808: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x408808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_40880c:
    // 0x40880c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40880cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_408810:
    // 0x408810: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x408810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_408814:
    // 0x408814: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x408814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_408818:
    // 0x408818: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x408818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40881c:
    // 0x40881c: 0x8c910050  lw          $s1, 0x50($a0)
    ctx->pc = 0x40881cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_408820:
    // 0x408820: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x408820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_408824:
    // 0x408824: 0xc0dc9bc  jal         func_3726F0
label_408828:
    if (ctx->pc == 0x408828u) {
        ctx->pc = 0x408828u;
            // 0x408828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40882Cu;
        goto label_40882c;
    }
    ctx->pc = 0x408824u;
    SET_GPR_U32(ctx, 31, 0x40882Cu);
    ctx->pc = 0x408828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408824u;
            // 0x408828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40882Cu; }
        if (ctx->pc != 0x40882Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40882Cu; }
        if (ctx->pc != 0x40882Cu) { return; }
    }
    ctx->pc = 0x40882Cu;
label_40882c:
    // 0x40882c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40882cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_408830:
    // 0x408830: 0xc0dc9a0  jal         func_372680
label_408834:
    if (ctx->pc == 0x408834u) {
        ctx->pc = 0x408834u;
            // 0x408834: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x408838u;
        goto label_408838;
    }
    ctx->pc = 0x408830u;
    SET_GPR_U32(ctx, 31, 0x408838u);
    ctx->pc = 0x408834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408830u;
            // 0x408834: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408838u; }
        if (ctx->pc != 0x408838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408838u; }
        if (ctx->pc != 0x408838u) { return; }
    }
    ctx->pc = 0x408838u;
label_408838:
    // 0x408838: 0x8e04015c  lw          $a0, 0x15C($s0)
    ctx->pc = 0x408838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
label_40883c:
    // 0x40883c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x40883cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_408840:
    // 0x408840: 0x508301b1  beql        $a0, $v1, . + 4 + (0x1B1 << 2)
label_408844:
    if (ctx->pc == 0x408844u) {
        ctx->pc = 0x408844u;
            // 0x408844: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x408848u;
        goto label_408848;
    }
    ctx->pc = 0x408840u;
    {
        const bool branch_taken_0x408840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x408840) {
            ctx->pc = 0x408844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x408840u;
            // 0x408844: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x408F08u;
            goto label_408f08;
        }
    }
    ctx->pc = 0x408848u;
label_408848:
    // 0x408848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x408848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40884c:
    // 0x40884c: 0x508500d1  beql        $a0, $a1, . + 4 + (0xD1 << 2)
label_408850:
    if (ctx->pc == 0x408850u) {
        ctx->pc = 0x408850u;
            // 0x408850: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x408854u;
        goto label_408854;
    }
    ctx->pc = 0x40884Cu;
    {
        const bool branch_taken_0x40884c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x40884c) {
            ctx->pc = 0x408850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40884Cu;
            // 0x408850: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x408B94u;
            goto label_408b94;
        }
    }
    ctx->pc = 0x408854u;
label_408854:
    // 0x408854: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_408858:
    if (ctx->pc == 0x408858u) {
        ctx->pc = 0x408858u;
            // 0x408858: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->pc = 0x40885Cu;
        goto label_40885c;
    }
    ctx->pc = 0x408854u;
    {
        const bool branch_taken_0x408854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x408854) {
            ctx->pc = 0x408858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x408854u;
            // 0x408858: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x408864u;
            goto label_408864;
        }
    }
    ctx->pc = 0x40885Cu;
label_40885c:
    // 0x40885c: 0x1000024b  b           . + 4 + (0x24B << 2)
label_408860:
    if (ctx->pc == 0x408860u) {
        ctx->pc = 0x408860u;
            // 0x408860: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x408864u;
        goto label_408864;
    }
    ctx->pc = 0x40885Cu;
    {
        const bool branch_taken_0x40885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40885Cu;
            // 0x408860: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40885c) {
            ctx->pc = 0x40918Cu;
            goto label_40918c;
        }
    }
    ctx->pc = 0x408864u;
label_408864:
    // 0x408864: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x408864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_408868:
    // 0x408868: 0x246372b0  addiu       $v1, $v1, 0x72B0
    ctx->pc = 0x408868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29360));
label_40886c:
    // 0x40886c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40886cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408870:
    // 0x408870: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x408870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_408874:
    // 0x408874: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x408874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_408878:
    // 0x408878: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x408878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_40887c:
    // 0x40887c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x40887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408880:
    // 0x408880: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x408880u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_408884:
    // 0x408884: 0x45000240  bc1f        . + 4 + (0x240 << 2)
label_408888:
    if (ctx->pc == 0x408888u) {
        ctx->pc = 0x40888Cu;
        goto label_40888c;
    }
    ctx->pc = 0x408884u;
    {
        const bool branch_taken_0x408884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x408884) {
            ctx->pc = 0x409188u;
            goto label_409188;
        }
    }
    ctx->pc = 0x40888Cu;
label_40888c:
    // 0x40888c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40888cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_408890:
    // 0x408890: 0xc074740  jal         func_1D1D00
label_408894:
    if (ctx->pc == 0x408894u) {
        ctx->pc = 0x408894u;
            // 0x408894: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x408898u;
        goto label_408898;
    }
    ctx->pc = 0x408890u;
    SET_GPR_U32(ctx, 31, 0x408898u);
    ctx->pc = 0x408894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408890u;
            // 0x408894: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408898u; }
        if (ctx->pc != 0x408898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408898u; }
        if (ctx->pc != 0x408898u) { return; }
    }
    ctx->pc = 0x408898u;
label_408898:
    // 0x408898: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40889c:
    if (ctx->pc == 0x40889Cu) {
        ctx->pc = 0x40889Cu;
            // 0x40889c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4088A0u;
        goto label_4088a0;
    }
    ctx->pc = 0x408898u;
    {
        const bool branch_taken_0x408898 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x408898) {
            ctx->pc = 0x40889Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x408898u;
            // 0x40889c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4088ACu;
            goto label_4088ac;
        }
    }
    ctx->pc = 0x4088A0u;
label_4088a0:
    // 0x4088a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4088a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4088a4:
    // 0x4088a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4088a8:
    if (ctx->pc == 0x4088A8u) {
        ctx->pc = 0x4088A8u;
            // 0x4088a8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4088ACu;
        goto label_4088ac;
    }
    ctx->pc = 0x4088A4u;
    {
        const bool branch_taken_0x4088a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4088A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4088A4u;
            // 0x4088a8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4088a4) {
            ctx->pc = 0x4088C4u;
            goto label_4088c4;
        }
    }
    ctx->pc = 0x4088ACu;
label_4088ac:
    // 0x4088ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4088acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4088b0:
    // 0x4088b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4088b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4088b4:
    // 0x4088b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4088b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4088b8:
    // 0x4088b8: 0x0  nop
    ctx->pc = 0x4088b8u;
    // NOP
label_4088bc:
    // 0x4088bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4088bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4088c0:
    // 0x4088c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4088c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4088c4:
    // 0x4088c4: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x4088c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_4088c8:
    // 0x4088c8: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x4088c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_4088cc:
    // 0x4088cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4088ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4088d0:
    // 0x4088d0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4088d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4088d4:
    // 0x4088d4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x4088d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_4088d8:
    // 0x4088d8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x4088d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4088dc:
    // 0x4088dc: 0x3c0941f0  lui         $t1, 0x41F0
    ctx->pc = 0x4088dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16880 << 16));
label_4088e0:
    // 0x4088e0: 0x24a572b0  addiu       $a1, $a1, 0x72B0
    ctx->pc = 0x4088e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29360));
label_4088e4:
    // 0x4088e4: 0x248472e8  addiu       $a0, $a0, 0x72E8
    ctx->pc = 0x4088e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29416));
label_4088e8:
    // 0x4088e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4088e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4088ec:
    // 0x4088ec: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x4088ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4088f0:
    // 0x4088f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4088f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4088f4:
    // 0x4088f4: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x4088f4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4088f8:
    // 0x4088f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4088f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4088fc:
    // 0x4088fc: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4088fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_408900:
    // 0x408900: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x408900u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_408904:
    // 0x408904: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x408904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_408908:
    // 0x408908: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x408908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_40890c:
    // 0x40890c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40890cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_408910:
    // 0x408910: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x408910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_408914:
    // 0x408914: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x408914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_408918:
    // 0x408918: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x408918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_40891c:
    // 0x40891c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x40891cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_408920:
    // 0x408920: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x408920u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_408924:
    // 0x408924: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x408924u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_408928:
    // 0x408928: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x408928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_40892c:
    // 0x40892c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x40892cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_408930:
    // 0x408930: 0x1810  mfhi        $v1
    ctx->pc = 0x408930u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_408934:
    // 0x408934: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x408934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
label_408938:
    // 0x408938: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x408938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_40893c:
    // 0x40893c: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x40893cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_408940:
    // 0x408940: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x408940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_408944:
    // 0x408944: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x408944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_408948:
    // 0x408948: 0xc08bff0  jal         func_22FFC0
label_40894c:
    if (ctx->pc == 0x40894Cu) {
        ctx->pc = 0x40894Cu;
            // 0x40894c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408950u;
        goto label_408950;
    }
    ctx->pc = 0x408948u;
    SET_GPR_U32(ctx, 31, 0x408950u);
    ctx->pc = 0x40894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408948u;
            // 0x40894c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408950u; }
        if (ctx->pc != 0x408950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408950u; }
        if (ctx->pc != 0x408950u) { return; }
    }
    ctx->pc = 0x408950u;
label_408950:
    // 0x408950: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x408950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_408954:
    // 0x408954: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x408954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_408958:
    // 0x408958: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x408958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40895c:
    // 0x40895c: 0xc08914c  jal         func_224530
label_408960:
    if (ctx->pc == 0x408960u) {
        ctx->pc = 0x408960u;
            // 0x408960: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408964u;
        goto label_408964;
    }
    ctx->pc = 0x40895Cu;
    SET_GPR_U32(ctx, 31, 0x408964u);
    ctx->pc = 0x408960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40895Cu;
            // 0x408960: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408964u; }
        if (ctx->pc != 0x408964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408964u; }
        if (ctx->pc != 0x408964u) { return; }
    }
    ctx->pc = 0x408964u;
label_408964:
    // 0x408964: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x408964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_408968:
    // 0x408968: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x408968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_40896c:
    // 0x40896c: 0x8e050160  lw          $a1, 0x160($s0)
    ctx->pc = 0x40896cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_408970:
    // 0x408970: 0x8c4372a0  lw          $v1, 0x72A0($v0)
    ctx->pc = 0x408970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29344)));
label_408974:
    // 0x408974: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x408974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_408978:
    // 0x408978: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x408978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_40897c:
    // 0x40897c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40897cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_408980:
    // 0x408980: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x408980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_408984:
    // 0x408984: 0x320f809  jalr        $t9
label_408988:
    if (ctx->pc == 0x408988u) {
        ctx->pc = 0x408988u;
            // 0x408988: 0x8c4500e0  lw          $a1, 0xE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
        ctx->pc = 0x40898Cu;
        goto label_40898c;
    }
    ctx->pc = 0x408984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40898Cu);
        ctx->pc = 0x408988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408984u;
            // 0x408988: 0x8c4500e0  lw          $a1, 0xE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40898Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40898Cu; }
            if (ctx->pc != 0x40898Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40898Cu;
label_40898c:
    // 0x40898c: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x40898cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
label_408990:
    // 0x408990: 0xafa00274  sw          $zero, 0x274($sp)
    ctx->pc = 0x408990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 0));
label_408994:
    // 0x408994: 0xafa00278  sw          $zero, 0x278($sp)
    ctx->pc = 0x408994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 0));
label_408998:
    // 0x408998: 0xafa0027c  sw          $zero, 0x27C($sp)
    ctx->pc = 0x408998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 0));
label_40899c:
    // 0x40899c: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x40899cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4089a0:
    // 0x4089a0: 0xc088b74  jal         func_222DD0
label_4089a4:
    if (ctx->pc == 0x4089A4u) {
        ctx->pc = 0x4089A4u;
            // 0x4089a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4089A8u;
        goto label_4089a8;
    }
    ctx->pc = 0x4089A0u;
    SET_GPR_U32(ctx, 31, 0x4089A8u);
    ctx->pc = 0x4089A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4089A0u;
            // 0x4089a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4089A8u; }
        if (ctx->pc != 0x4089A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4089A8u; }
        if (ctx->pc != 0x4089A8u) { return; }
    }
    ctx->pc = 0x4089A8u;
label_4089a8:
    // 0x4089a8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4089a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4089ac:
    // 0x4089ac: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4089acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4089b0:
    // 0x4089b0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4089b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4089b4:
    // 0x4089b4: 0x320f809  jalr        $t9
label_4089b8:
    if (ctx->pc == 0x4089B8u) {
        ctx->pc = 0x4089B8u;
            // 0x4089b8: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x4089BCu;
        goto label_4089bc;
    }
    ctx->pc = 0x4089B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4089BCu);
        ctx->pc = 0x4089B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4089B4u;
            // 0x4089b8: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4089BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4089BCu; }
            if (ctx->pc != 0x4089BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4089BCu;
label_4089bc:
    // 0x4089bc: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4089bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4089c0:
    // 0x4089c0: 0xc088b74  jal         func_222DD0
label_4089c4:
    if (ctx->pc == 0x4089C4u) {
        ctx->pc = 0x4089C4u;
            // 0x4089c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4089C8u;
        goto label_4089c8;
    }
    ctx->pc = 0x4089C0u;
    SET_GPR_U32(ctx, 31, 0x4089C8u);
    ctx->pc = 0x4089C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4089C0u;
            // 0x4089c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4089C8u; }
        if (ctx->pc != 0x4089C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4089C8u; }
        if (ctx->pc != 0x4089C8u) { return; }
    }
    ctx->pc = 0x4089C8u;
label_4089c8:
    // 0x4089c8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4089c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4089cc:
    // 0x4089cc: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4089ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4089d0:
    // 0x4089d0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4089d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4089d4:
    // 0x4089d4: 0x320f809  jalr        $t9
label_4089d8:
    if (ctx->pc == 0x4089D8u) {
        ctx->pc = 0x4089D8u;
            // 0x4089d8: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x4089DCu;
        goto label_4089dc;
    }
    ctx->pc = 0x4089D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4089DCu);
        ctx->pc = 0x4089D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4089D4u;
            // 0x4089d8: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4089DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4089DCu; }
            if (ctx->pc != 0x4089DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4089DCu;
label_4089dc:
    // 0x4089dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4089dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4089e0:
    // 0x4089e0: 0xc074740  jal         func_1D1D00
label_4089e4:
    if (ctx->pc == 0x4089E4u) {
        ctx->pc = 0x4089E4u;
            // 0x4089e4: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x4089E8u;
        goto label_4089e8;
    }
    ctx->pc = 0x4089E0u;
    SET_GPR_U32(ctx, 31, 0x4089E8u);
    ctx->pc = 0x4089E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4089E0u;
            // 0x4089e4: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4089E8u; }
        if (ctx->pc != 0x4089E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4089E8u; }
        if (ctx->pc != 0x4089E8u) { return; }
    }
    ctx->pc = 0x4089E8u;
label_4089e8:
    // 0x4089e8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4089ec:
    if (ctx->pc == 0x4089ECu) {
        ctx->pc = 0x4089ECu;
            // 0x4089ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4089F0u;
        goto label_4089f0;
    }
    ctx->pc = 0x4089E8u;
    {
        const bool branch_taken_0x4089e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4089e8) {
            ctx->pc = 0x4089ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4089E8u;
            // 0x4089ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4089FCu;
            goto label_4089fc;
        }
    }
    ctx->pc = 0x4089F0u;
label_4089f0:
    // 0x4089f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4089f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4089f4:
    // 0x4089f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4089f8:
    if (ctx->pc == 0x4089F8u) {
        ctx->pc = 0x4089F8u;
            // 0x4089f8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4089FCu;
        goto label_4089fc;
    }
    ctx->pc = 0x4089F4u;
    {
        const bool branch_taken_0x4089f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4089F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4089F4u;
            // 0x4089f8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4089f4) {
            ctx->pc = 0x408A14u;
            goto label_408a14;
        }
    }
    ctx->pc = 0x4089FCu;
label_4089fc:
    // 0x4089fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4089fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_408a00:
    // 0x408a00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x408a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_408a04:
    // 0x408a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x408a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408a08:
    // 0x408a08: 0x0  nop
    ctx->pc = 0x408a08u;
    // NOP
label_408a0c:
    // 0x408a0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x408a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_408a10:
    // 0x408a10: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x408a10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_408a14:
    // 0x408a14: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x408a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_408a18:
    // 0x408a18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x408a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_408a1c:
    // 0x408a1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x408a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408a20:
    // 0x408a20: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x408a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_408a24:
    // 0x408a24: 0xc074740  jal         func_1D1D00
label_408a28:
    if (ctx->pc == 0x408A28u) {
        ctx->pc = 0x408A28u;
            // 0x408a28: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x408A2Cu;
        goto label_408a2c;
    }
    ctx->pc = 0x408A24u;
    SET_GPR_U32(ctx, 31, 0x408A2Cu);
    ctx->pc = 0x408A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408A24u;
            // 0x408a28: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408A2Cu; }
        if (ctx->pc != 0x408A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408A2Cu; }
        if (ctx->pc != 0x408A2Cu) { return; }
    }
    ctx->pc = 0x408A2Cu;
label_408a2c:
    // 0x408a2c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_408a30:
    if (ctx->pc == 0x408A30u) {
        ctx->pc = 0x408A30u;
            // 0x408a30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x408A34u;
        goto label_408a34;
    }
    ctx->pc = 0x408A2Cu;
    {
        const bool branch_taken_0x408a2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x408a2c) {
            ctx->pc = 0x408A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x408A2Cu;
            // 0x408a30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x408A40u;
            goto label_408a40;
        }
    }
    ctx->pc = 0x408A34u;
label_408a34:
    // 0x408a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x408a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408a38:
    // 0x408a38: 0x10000007  b           . + 4 + (0x7 << 2)
label_408a3c:
    if (ctx->pc == 0x408A3Cu) {
        ctx->pc = 0x408A3Cu;
            // 0x408a3c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x408A40u;
        goto label_408a40;
    }
    ctx->pc = 0x408A38u;
    {
        const bool branch_taken_0x408a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408A38u;
            // 0x408a3c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408a38) {
            ctx->pc = 0x408A58u;
            goto label_408a58;
        }
    }
    ctx->pc = 0x408A40u;
label_408a40:
    // 0x408a40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x408a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_408a44:
    // 0x408a44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x408a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_408a48:
    // 0x408a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x408a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408a4c:
    // 0x408a4c: 0x0  nop
    ctx->pc = 0x408a4cu;
    // NOP
label_408a50:
    // 0x408a50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x408a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_408a54:
    // 0x408a54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x408a54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_408a58:
    // 0x408a58: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x408a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_408a5c:
    // 0x408a5c: 0x3c0642a0  lui         $a2, 0x42A0
    ctx->pc = 0x408a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17056 << 16));
label_408a60:
    // 0x408a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x408a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408a64:
    // 0x408a64: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x408a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_408a68:
    // 0x408a68: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x408a68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_408a6c:
    // 0x408a6c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x408a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_408a70:
    // 0x408a70: 0x3445001a  ori         $a1, $v0, 0x1A
    ctx->pc = 0x408a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
label_408a74:
    // 0x408a74: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x408a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_408a78:
    // 0x408a78: 0x3c024148  lui         $v0, 0x4148
    ctx->pc = 0x408a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16712 << 16));
label_408a7c:
    // 0x408a7c: 0x34420069  ori         $v0, $v0, 0x69
    ctx->pc = 0x408a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)105);
label_408a80:
    // 0x408a80: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x408a80u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408a84:
    // 0x408a84: 0x0  nop
    ctx->pc = 0x408a84u;
    // NOP
label_408a88:
    // 0x408a88: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x408a88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_408a8c:
    // 0x408a8c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x408a8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408a90:
    // 0x408a90: 0x0  nop
    ctx->pc = 0x408a90u;
    // NOP
label_408a94:
    // 0x408a94: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x408a94u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_408a98:
    // 0x408a98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x408a98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408a9c:
    // 0x408a9c: 0x0  nop
    ctx->pc = 0x408a9cu;
    // NOP
label_408aa0:
    // 0x408aa0: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x408aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_408aa4:
    // 0x408aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x408aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408aa8:
    // 0x408aa8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x408aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_408aac:
    // 0x408aac: 0xc04cbd8  jal         func_132F60
label_408ab0:
    if (ctx->pc == 0x408AB0u) {
        ctx->pc = 0x408AB0u;
            // 0x408ab0: 0x46000b81  sub.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x408AB4u;
        goto label_408ab4;
    }
    ctx->pc = 0x408AACu;
    SET_GPR_U32(ctx, 31, 0x408AB4u);
    ctx->pc = 0x408AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408AACu;
            // 0x408ab0: 0x46000b81  sub.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408AB4u; }
        if (ctx->pc != 0x408AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408AB4u; }
        if (ctx->pc != 0x408AB4u) { return; }
    }
    ctx->pc = 0x408AB4u;
label_408ab4:
    // 0x408ab4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x408ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_408ab8:
    // 0x408ab8: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x408ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_408abc:
    // 0x408abc: 0xc04cca0  jal         func_133280
label_408ac0:
    if (ctx->pc == 0x408AC0u) {
        ctx->pc = 0x408AC0u;
            // 0x408ac0: 0x27a60260  addiu       $a2, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x408AC4u;
        goto label_408ac4;
    }
    ctx->pc = 0x408ABCu;
    SET_GPR_U32(ctx, 31, 0x408AC4u);
    ctx->pc = 0x408AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408ABCu;
            // 0x408ac0: 0x27a60260  addiu       $a2, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408AC4u; }
        if (ctx->pc != 0x408AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408AC4u; }
        if (ctx->pc != 0x408AC4u) { return; }
    }
    ctx->pc = 0x408AC4u;
label_408ac4:
    // 0x408ac4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x408ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_408ac8:
    // 0x408ac8: 0xc04cce8  jal         func_1333A0
label_408acc:
    if (ctx->pc == 0x408ACCu) {
        ctx->pc = 0x408ACCu;
            // 0x408acc: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x408AD0u;
        goto label_408ad0;
    }
    ctx->pc = 0x408AC8u;
    SET_GPR_U32(ctx, 31, 0x408AD0u);
    ctx->pc = 0x408ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408AC8u;
            // 0x408acc: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408AD0u; }
        if (ctx->pc != 0x408AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408AD0u; }
        if (ctx->pc != 0x408AD0u) { return; }
    }
    ctx->pc = 0x408AD0u;
label_408ad0:
    // 0x408ad0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x408ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_408ad4:
    // 0x408ad4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x408ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_408ad8:
    // 0x408ad8: 0xc04ce80  jal         func_133A00
label_408adc:
    if (ctx->pc == 0x408ADCu) {
        ctx->pc = 0x408ADCu;
            // 0x408adc: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->pc = 0x408AE0u;
        goto label_408ae0;
    }
    ctx->pc = 0x408AD8u;
    SET_GPR_U32(ctx, 31, 0x408AE0u);
    ctx->pc = 0x408ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408AD8u;
            // 0x408adc: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408AE0u; }
        if (ctx->pc != 0x408AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408AE0u; }
        if (ctx->pc != 0x408AE0u) { return; }
    }
    ctx->pc = 0x408AE0u;
label_408ae0:
    // 0x408ae0: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x408ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_408ae4:
    // 0x408ae4: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x408ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_408ae8:
    // 0x408ae8: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x408ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_408aec:
    // 0x408aec: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x408aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_408af0:
    // 0x408af0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x408af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_408af4:
    // 0x408af4: 0x2463bac0  addiu       $v1, $v1, -0x4540
    ctx->pc = 0x408af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949568));
label_408af8:
    // 0x408af8: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x408af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_408afc:
    // 0x408afc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x408afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_408b00:
    // 0x408b00: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x408b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_408b04:
    // 0x408b04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x408b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_408b08:
    // 0x408b08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x408b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408b0c:
    // 0x408b0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x408b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_408b10:
    // 0x408b10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x408b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_408b14:
    // 0x408b14: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x408b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_408b18:
    // 0x408b18: 0xc04cdb0  jal         func_1336C0
label_408b1c:
    if (ctx->pc == 0x408B1Cu) {
        ctx->pc = 0x408B1Cu;
            // 0x408b1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408B20u;
        goto label_408b20;
    }
    ctx->pc = 0x408B18u;
    SET_GPR_U32(ctx, 31, 0x408B20u);
    ctx->pc = 0x408B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408B18u;
            // 0x408b1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1336C0u;
    if (runtime->hasFunction(0x1336C0u)) {
        auto targetFn = runtime->lookupFunction(0x1336C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408B20u; }
        if (ctx->pc != 0x408B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001336C0_0x1336c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408B20u; }
        if (ctx->pc != 0x408B20u) { return; }
    }
    ctx->pc = 0x408B20u;
label_408b20:
    // 0x408b20: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x408b20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_408b24:
    // 0x408b24: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x408b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_408b28:
    // 0x408b28: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x408b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_408b2c:
    // 0x408b2c: 0xc04cca0  jal         func_133280
label_408b30:
    if (ctx->pc == 0x408B30u) {
        ctx->pc = 0x408B30u;
            // 0x408b30: 0x24c6bb50  addiu       $a2, $a2, -0x44B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949712));
        ctx->pc = 0x408B34u;
        goto label_408b34;
    }
    ctx->pc = 0x408B2Cu;
    SET_GPR_U32(ctx, 31, 0x408B34u);
    ctx->pc = 0x408B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408B2Cu;
            // 0x408b30: 0x24c6bb50  addiu       $a2, $a2, -0x44B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408B34u; }
        if (ctx->pc != 0x408B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408B34u; }
        if (ctx->pc != 0x408B34u) { return; }
    }
    ctx->pc = 0x408B34u;
label_408b34:
    // 0x408b34: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x408b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_408b38:
    // 0x408b38: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x408b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_408b3c:
    // 0x408b3c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x408b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_408b40:
    // 0x408b40: 0x2442baf0  addiu       $v0, $v0, -0x4510
    ctx->pc = 0x408b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949616));
label_408b44:
    // 0x408b44: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x408b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_408b48:
    // 0x408b48: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x408b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_408b4c:
    // 0x408b4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x408b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_408b50:
    // 0x408b50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x408b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_408b54:
    // 0x408b54: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x408b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_408b58:
    // 0x408b58: 0xc04cc7c  jal         func_1331F0
label_408b5c:
    if (ctx->pc == 0x408B5Cu) {
        ctx->pc = 0x408B5Cu;
            // 0x408b5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408B60u;
        goto label_408b60;
    }
    ctx->pc = 0x408B58u;
    SET_GPR_U32(ctx, 31, 0x408B60u);
    ctx->pc = 0x408B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408B58u;
            // 0x408b5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408B60u; }
        if (ctx->pc != 0x408B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408B60u; }
        if (ctx->pc != 0x408B60u) { return; }
    }
    ctx->pc = 0x408B60u;
label_408b60:
    // 0x408b60: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x408b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_408b64:
    // 0x408b64: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x408b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408b68:
    // 0x408b68: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x408b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408b6c:
    // 0x408b6c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x408b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_408b70:
    // 0x408b70: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x408b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408b74:
    // 0x408b74: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x408b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_408b78:
    // 0x408b78: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x408b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_408b7c:
    // 0x408b7c: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x408b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_408b80:
    // 0x408b80: 0xc089290  jal         func_224A40
label_408b84:
    if (ctx->pc == 0x408B84u) {
        ctx->pc = 0x408B84u;
            // 0x408b84: 0xe7a200e8  swc1        $f2, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->pc = 0x408B88u;
        goto label_408b88;
    }
    ctx->pc = 0x408B80u;
    SET_GPR_U32(ctx, 31, 0x408B88u);
    ctx->pc = 0x408B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408B80u;
            // 0x408b84: 0xe7a200e8  swc1        $f2, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408B88u; }
        if (ctx->pc != 0x408B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408B88u; }
        if (ctx->pc != 0x408B88u) { return; }
    }
    ctx->pc = 0x408B88u;
label_408b88:
    // 0x408b88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x408b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_408b8c:
    // 0x408b8c: 0x1000017e  b           . + 4 + (0x17E << 2)
label_408b90:
    if (ctx->pc == 0x408B90u) {
        ctx->pc = 0x408B90u;
            // 0x408b90: 0xae03015c  sw          $v1, 0x15C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 3));
        ctx->pc = 0x408B94u;
        goto label_408b94;
    }
    ctx->pc = 0x408B8Cu;
    {
        const bool branch_taken_0x408b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408B8Cu;
            // 0x408b90: 0xae03015c  sw          $v1, 0x15C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408b8c) {
            ctx->pc = 0x409188u;
            goto label_409188;
        }
    }
    ctx->pc = 0x408B94u;
label_408b94:
    // 0x408b94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x408b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_408b98:
    // 0x408b98: 0xc08914c  jal         func_224530
label_408b9c:
    if (ctx->pc == 0x408B9Cu) {
        ctx->pc = 0x408B9Cu;
            // 0x408b9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408BA0u;
        goto label_408ba0;
    }
    ctx->pc = 0x408B98u;
    SET_GPR_U32(ctx, 31, 0x408BA0u);
    ctx->pc = 0x408B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408B98u;
            // 0x408b9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408BA0u; }
        if (ctx->pc != 0x408BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408BA0u; }
        if (ctx->pc != 0x408BA0u) { return; }
    }
    ctx->pc = 0x408BA0u;
label_408ba0:
    // 0x408ba0: 0x8e090050  lw          $t1, 0x50($s0)
    ctx->pc = 0x408ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_408ba4:
    // 0x408ba4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x408ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_408ba8:
    // 0x408ba8: 0x3444feff  ori         $a0, $v0, 0xFEFF
    ctx->pc = 0x408ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
label_408bac:
    // 0x408bac: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x408bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_408bb0:
    // 0x408bb0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x408bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_408bb4:
    // 0x408bb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x408bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_408bb8:
    // 0x408bb8: 0x8d280214  lw          $t0, 0x214($t1)
    ctx->pc = 0x408bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 532)));
label_408bbc:
    // 0x408bbc: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x408bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_408bc0:
    // 0x408bc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x408bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_408bc4:
    // 0x408bc4: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x408bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
label_408bc8:
    // 0x408bc8: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x408bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_408bcc:
    // 0x408bcc: 0xad250214  sw          $a1, 0x214($t1)
    ctx->pc = 0x408bccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 532), GPR_U32(ctx, 5));
label_408bd0:
    // 0x408bd0: 0xae060084  sw          $a2, 0x84($s0)
    ctx->pc = 0x408bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 6));
label_408bd4:
    // 0x408bd4: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x408bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408bd8:
    // 0x408bd8: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x408bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_408bdc:
    // 0x408bdc: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x408bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_408be0:
    // 0x408be0: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x408be0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_408be4:
    // 0x408be4: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x408be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_408be8:
    // 0x408be8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x408be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_408bec:
    // 0x408bec: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x408becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_408bf0:
    // 0x408bf0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x408bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_408bf4:
    // 0x408bf4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x408bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_408bf8:
    // 0x408bf8: 0xc08bff0  jal         func_22FFC0
label_408bfc:
    if (ctx->pc == 0x408BFCu) {
        ctx->pc = 0x408BFCu;
            // 0x408bfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408C00u;
        goto label_408c00;
    }
    ctx->pc = 0x408BF8u;
    SET_GPR_U32(ctx, 31, 0x408C00u);
    ctx->pc = 0x408BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408BF8u;
            // 0x408bfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408C00u; }
        if (ctx->pc != 0x408C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408C00u; }
        if (ctx->pc != 0x408C00u) { return; }
    }
    ctx->pc = 0x408C00u;
label_408c00:
    // 0x408c00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x408c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_408c04:
    // 0x408c04: 0xc074740  jal         func_1D1D00
label_408c08:
    if (ctx->pc == 0x408C08u) {
        ctx->pc = 0x408C08u;
            // 0x408c08: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x408C0Cu;
        goto label_408c0c;
    }
    ctx->pc = 0x408C04u;
    SET_GPR_U32(ctx, 31, 0x408C0Cu);
    ctx->pc = 0x408C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408C04u;
            // 0x408c08: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408C0Cu; }
        if (ctx->pc != 0x408C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408C0Cu; }
        if (ctx->pc != 0x408C0Cu) { return; }
    }
    ctx->pc = 0x408C0Cu;
label_408c0c:
    // 0x408c0c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_408c10:
    if (ctx->pc == 0x408C10u) {
        ctx->pc = 0x408C10u;
            // 0x408c10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x408C14u;
        goto label_408c14;
    }
    ctx->pc = 0x408C0Cu;
    {
        const bool branch_taken_0x408c0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x408c0c) {
            ctx->pc = 0x408C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x408C0Cu;
            // 0x408c10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x408C20u;
            goto label_408c20;
        }
    }
    ctx->pc = 0x408C14u;
label_408c14:
    // 0x408c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x408c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408c18:
    // 0x408c18: 0x10000007  b           . + 4 + (0x7 << 2)
label_408c1c:
    if (ctx->pc == 0x408C1Cu) {
        ctx->pc = 0x408C1Cu;
            // 0x408c1c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x408C20u;
        goto label_408c20;
    }
    ctx->pc = 0x408C18u;
    {
        const bool branch_taken_0x408c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408C18u;
            // 0x408c1c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408c18) {
            ctx->pc = 0x408C38u;
            goto label_408c38;
        }
    }
    ctx->pc = 0x408C20u;
label_408c20:
    // 0x408c20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x408c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_408c24:
    // 0x408c24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x408c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_408c28:
    // 0x408c28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x408c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408c2c:
    // 0x408c2c: 0x0  nop
    ctx->pc = 0x408c2cu;
    // NOP
label_408c30:
    // 0x408c30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x408c30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_408c34:
    // 0x408c34: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x408c34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_408c38:
    // 0x408c38: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x408c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_408c3c:
    // 0x408c3c: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x408c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_408c40:
    // 0x408c40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x408c40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408c44:
    // 0x408c44: 0x3445b8c2  ori         $a1, $v0, 0xB8C2
    ctx->pc = 0x408c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_408c48:
    // 0x408c48: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x408c48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_408c4c:
    // 0x408c4c: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x408c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
label_408c50:
    // 0x408c50: 0x3444b8c2  ori         $a0, $v0, 0xB8C2
    ctx->pc = 0x408c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_408c54:
    // 0x408c54: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x408c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_408c58:
    // 0x408c58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x408c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_408c5c:
    // 0x408c5c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x408c5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_408c60:
    // 0x408c60: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x408c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_408c64:
    // 0x408c64: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x408c64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_408c68:
    // 0x408c68: 0x0  nop
    ctx->pc = 0x408c68u;
    // NOP
label_408c6c:
    // 0x408c6c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x408c6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_408c70:
    // 0x408c70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x408c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408c74:
    // 0x408c74: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x408c74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_408c78:
    // 0x408c78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x408c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_408c7c:
    // 0x408c7c: 0xe6000150  swc1        $f0, 0x150($s0)
    ctx->pc = 0x408c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
label_408c80:
    // 0x408c80: 0xc074740  jal         func_1D1D00
label_408c84:
    if (ctx->pc == 0x408C84u) {
        ctx->pc = 0x408C84u;
            // 0x408c84: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x408C88u;
        goto label_408c88;
    }
    ctx->pc = 0x408C80u;
    SET_GPR_U32(ctx, 31, 0x408C88u);
    ctx->pc = 0x408C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408C80u;
            // 0x408c84: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408C88u; }
        if (ctx->pc != 0x408C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408C88u; }
        if (ctx->pc != 0x408C88u) { return; }
    }
    ctx->pc = 0x408C88u;
label_408c88:
    // 0x408c88: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_408c8c:
    if (ctx->pc == 0x408C8Cu) {
        ctx->pc = 0x408C8Cu;
            // 0x408c8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x408C90u;
        goto label_408c90;
    }
    ctx->pc = 0x408C88u;
    {
        const bool branch_taken_0x408c88 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x408c88) {
            ctx->pc = 0x408C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x408C88u;
            // 0x408c8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x408C9Cu;
            goto label_408c9c;
        }
    }
    ctx->pc = 0x408C90u;
label_408c90:
    // 0x408c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x408c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408c94:
    // 0x408c94: 0x10000007  b           . + 4 + (0x7 << 2)
label_408c98:
    if (ctx->pc == 0x408C98u) {
        ctx->pc = 0x408C98u;
            // 0x408c98: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x408C9Cu;
        goto label_408c9c;
    }
    ctx->pc = 0x408C94u;
    {
        const bool branch_taken_0x408c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408C94u;
            // 0x408c98: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408c94) {
            ctx->pc = 0x408CB4u;
            goto label_408cb4;
        }
    }
    ctx->pc = 0x408C9Cu;
label_408c9c:
    // 0x408c9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x408c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_408ca0:
    // 0x408ca0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x408ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_408ca4:
    // 0x408ca4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x408ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408ca8:
    // 0x408ca8: 0x0  nop
    ctx->pc = 0x408ca8u;
    // NOP
label_408cac:
    // 0x408cac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x408cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_408cb0:
    // 0x408cb0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x408cb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_408cb4:
    // 0x408cb4: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x408cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_408cb8:
    // 0x408cb8: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x408cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_408cbc:
    // 0x408cbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x408cbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408cc0:
    // 0x408cc0: 0x3445b8c2  ori         $a1, $v0, 0xB8C2
    ctx->pc = 0x408cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_408cc4:
    // 0x408cc4: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x408cc4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_408cc8:
    // 0x408cc8: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x408cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
label_408ccc:
    // 0x408ccc: 0x3444b8c2  ori         $a0, $v0, 0xB8C2
    ctx->pc = 0x408cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_408cd0:
    // 0x408cd0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x408cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_408cd4:
    // 0x408cd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x408cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_408cd8:
    // 0x408cd8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x408cd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_408cdc:
    // 0x408cdc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x408cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_408ce0:
    // 0x408ce0: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x408ce0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_408ce4:
    // 0x408ce4: 0x0  nop
    ctx->pc = 0x408ce4u;
    // NOP
label_408ce8:
    // 0x408ce8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x408ce8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_408cec:
    // 0x408cec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x408cecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408cf0:
    // 0x408cf0: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x408cf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_408cf4:
    // 0x408cf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x408cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_408cf8:
    // 0x408cf8: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x408cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_408cfc:
    // 0x408cfc: 0xc074740  jal         func_1D1D00
label_408d00:
    if (ctx->pc == 0x408D00u) {
        ctx->pc = 0x408D00u;
            // 0x408d00: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x408D04u;
        goto label_408d04;
    }
    ctx->pc = 0x408CFCu;
    SET_GPR_U32(ctx, 31, 0x408D04u);
    ctx->pc = 0x408D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408CFCu;
            // 0x408d00: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408D04u; }
        if (ctx->pc != 0x408D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408D04u; }
        if (ctx->pc != 0x408D04u) { return; }
    }
    ctx->pc = 0x408D04u;
label_408d04:
    // 0x408d04: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_408d08:
    if (ctx->pc == 0x408D08u) {
        ctx->pc = 0x408D08u;
            // 0x408d08: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x408D0Cu;
        goto label_408d0c;
    }
    ctx->pc = 0x408D04u;
    {
        const bool branch_taken_0x408d04 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x408d04) {
            ctx->pc = 0x408D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x408D04u;
            // 0x408d08: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x408D18u;
            goto label_408d18;
        }
    }
    ctx->pc = 0x408D0Cu;
label_408d0c:
    // 0x408d0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x408d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408d10:
    // 0x408d10: 0x10000007  b           . + 4 + (0x7 << 2)
label_408d14:
    if (ctx->pc == 0x408D14u) {
        ctx->pc = 0x408D14u;
            // 0x408d14: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x408D18u;
        goto label_408d18;
    }
    ctx->pc = 0x408D10u;
    {
        const bool branch_taken_0x408d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408D10u;
            // 0x408d14: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408d10) {
            ctx->pc = 0x408D30u;
            goto label_408d30;
        }
    }
    ctx->pc = 0x408D18u;
label_408d18:
    // 0x408d18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x408d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_408d1c:
    // 0x408d1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x408d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_408d20:
    // 0x408d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x408d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408d24:
    // 0x408d24: 0x0  nop
    ctx->pc = 0x408d24u;
    // NOP
label_408d28:
    // 0x408d28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x408d28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_408d2c:
    // 0x408d2c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x408d2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_408d30:
    // 0x408d30: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x408d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_408d34:
    // 0x408d34: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x408d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_408d38:
    // 0x408d38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x408d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408d3c:
    // 0x408d3c: 0x3448b8c2  ori         $t0, $v0, 0xB8C2
    ctx->pc = 0x408d3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_408d40:
    // 0x408d40: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x408d40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_408d44:
    // 0x408d44: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x408d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
label_408d48:
    // 0x408d48: 0x3447b8c2  ori         $a3, $v0, 0xB8C2
    ctx->pc = 0x408d48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_408d4c:
    // 0x408d4c: 0x3c064270  lui         $a2, 0x4270
    ctx->pc = 0x408d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17008 << 16));
label_408d50:
    // 0x408d50: 0x3c024127  lui         $v0, 0x4127
    ctx->pc = 0x408d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16679 << 16));
label_408d54:
    // 0x408d54: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x408d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_408d58:
    // 0x408d58: 0x34458d36  ori         $a1, $v0, 0x8D36
    ctx->pc = 0x408d58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36150);
label_408d5c:
    // 0x408d5c: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x408d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_408d60:
    // 0x408d60: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x408d60u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_408d64:
    // 0x408d64: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x408d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_408d68:
    // 0x408d68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x408d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_408d6c:
    // 0x408d6c: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x408d6cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_408d70:
    // 0x408d70: 0x0  nop
    ctx->pc = 0x408d70u;
    // NOP
label_408d74:
    // 0x408d74: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x408d74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_408d78:
    // 0x408d78: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x408d78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408d7c:
    // 0x408d7c: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x408d7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_408d80:
    // 0x408d80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x408d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_408d84:
    // 0x408d84: 0xe6000158  swc1        $f0, 0x158($s0)
    ctx->pc = 0x408d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
label_408d88:
    // 0x408d88: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x408d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_408d8c:
    // 0x408d8c: 0xac450158  sw          $a1, 0x158($v0)
    ctx->pc = 0x408d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 5));
label_408d90:
    // 0x408d90: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x408d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_408d94:
    // 0x408d94: 0xac440160  sw          $a0, 0x160($v0)
    ctx->pc = 0x408d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 4));
label_408d98:
    // 0x408d98: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x408d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_408d9c:
    // 0x408d9c: 0xac430154  sw          $v1, 0x154($v0)
    ctx->pc = 0x408d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 3));
label_408da0:
    // 0x408da0: 0xc6020158  lwc1        $f2, 0x158($s0)
    ctx->pc = 0x408da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408da4:
    // 0x408da4: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x408da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408da8:
    // 0x408da8: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x408da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408dac:
    // 0x408dac: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x408dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_408db0:
    // 0x408db0: 0xafa0024c  sw          $zero, 0x24C($sp)
    ctx->pc = 0x408db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 0));
label_408db4:
    // 0x408db4: 0xe7a10244  swc1        $f1, 0x244($sp)
    ctx->pc = 0x408db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_408db8:
    // 0x408db8: 0xe7a20248  swc1        $f2, 0x248($sp)
    ctx->pc = 0x408db8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_408dbc:
    // 0x408dbc: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x408dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_408dc0:
    // 0x408dc0: 0xc088b74  jal         func_222DD0
label_408dc4:
    if (ctx->pc == 0x408DC4u) {
        ctx->pc = 0x408DC4u;
            // 0x408dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408DC8u;
        goto label_408dc8;
    }
    ctx->pc = 0x408DC0u;
    SET_GPR_U32(ctx, 31, 0x408DC8u);
    ctx->pc = 0x408DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408DC0u;
            // 0x408dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408DC8u; }
        if (ctx->pc != 0x408DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408DC8u; }
        if (ctx->pc != 0x408DC8u) { return; }
    }
    ctx->pc = 0x408DC8u;
label_408dc8:
    // 0x408dc8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x408dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_408dcc:
    // 0x408dcc: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x408dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_408dd0:
    // 0x408dd0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x408dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_408dd4:
    // 0x408dd4: 0x320f809  jalr        $t9
label_408dd8:
    if (ctx->pc == 0x408DD8u) {
        ctx->pc = 0x408DD8u;
            // 0x408dd8: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->pc = 0x408DDCu;
        goto label_408ddc;
    }
    ctx->pc = 0x408DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x408DDCu);
        ctx->pc = 0x408DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408DD4u;
            // 0x408dd8: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x408DDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x408DDCu; }
            if (ctx->pc != 0x408DDCu) { return; }
        }
        }
    }
    ctx->pc = 0x408DDCu;
label_408ddc:
    // 0x408ddc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x408ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_408de0:
    // 0x408de0: 0xc04cce8  jal         func_1333A0
label_408de4:
    if (ctx->pc == 0x408DE4u) {
        ctx->pc = 0x408DE4u;
            // 0x408de4: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x408DE8u;
        goto label_408de8;
    }
    ctx->pc = 0x408DE0u;
    SET_GPR_U32(ctx, 31, 0x408DE8u);
    ctx->pc = 0x408DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408DE0u;
            // 0x408de4: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408DE8u; }
        if (ctx->pc != 0x408DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408DE8u; }
        if (ctx->pc != 0x408DE8u) { return; }
    }
    ctx->pc = 0x408DE8u;
label_408de8:
    // 0x408de8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x408de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_408dec:
    // 0x408dec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x408decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_408df0:
    // 0x408df0: 0xc04ce80  jal         func_133A00
label_408df4:
    if (ctx->pc == 0x408DF4u) {
        ctx->pc = 0x408DF4u;
            // 0x408df4: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->pc = 0x408DF8u;
        goto label_408df8;
    }
    ctx->pc = 0x408DF0u;
    SET_GPR_U32(ctx, 31, 0x408DF8u);
    ctx->pc = 0x408DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408DF0u;
            // 0x408df4: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408DF8u; }
        if (ctx->pc != 0x408DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408DF8u; }
        if (ctx->pc != 0x408DF8u) { return; }
    }
    ctx->pc = 0x408DF8u;
label_408df8:
    // 0x408df8: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x408df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_408dfc:
    // 0x408dfc: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x408dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_408e00:
    // 0x408e00: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x408e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_408e04:
    // 0x408e04: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x408e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_408e08:
    // 0x408e08: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x408e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_408e0c:
    // 0x408e0c: 0x2463bac0  addiu       $v1, $v1, -0x4540
    ctx->pc = 0x408e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949568));
label_408e10:
    // 0x408e10: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x408e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_408e14:
    // 0x408e14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x408e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_408e18:
    // 0x408e18: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x408e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_408e1c:
    // 0x408e1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x408e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_408e20:
    // 0x408e20: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x408e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408e24:
    // 0x408e24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x408e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_408e28:
    // 0x408e28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x408e28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_408e2c:
    // 0x408e2c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x408e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_408e30:
    // 0x408e30: 0xc04cdb0  jal         func_1336C0
label_408e34:
    if (ctx->pc == 0x408E34u) {
        ctx->pc = 0x408E34u;
            // 0x408e34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408E38u;
        goto label_408e38;
    }
    ctx->pc = 0x408E30u;
    SET_GPR_U32(ctx, 31, 0x408E38u);
    ctx->pc = 0x408E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408E30u;
            // 0x408e34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1336C0u;
    if (runtime->hasFunction(0x1336C0u)) {
        auto targetFn = runtime->lookupFunction(0x1336C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408E38u; }
        if (ctx->pc != 0x408E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001336C0_0x1336c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408E38u; }
        if (ctx->pc != 0x408E38u) { return; }
    }
    ctx->pc = 0x408E38u;
label_408e38:
    // 0x408e38: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x408e38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_408e3c:
    // 0x408e3c: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x408e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_408e40:
    // 0x408e40: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x408e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_408e44:
    // 0x408e44: 0xc04cca0  jal         func_133280
label_408e48:
    if (ctx->pc == 0x408E48u) {
        ctx->pc = 0x408E48u;
            // 0x408e48: 0x24c6bb50  addiu       $a2, $a2, -0x44B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949712));
        ctx->pc = 0x408E4Cu;
        goto label_408e4c;
    }
    ctx->pc = 0x408E44u;
    SET_GPR_U32(ctx, 31, 0x408E4Cu);
    ctx->pc = 0x408E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408E44u;
            // 0x408e48: 0x24c6bb50  addiu       $a2, $a2, -0x44B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408E4Cu; }
        if (ctx->pc != 0x408E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408E4Cu; }
        if (ctx->pc != 0x408E4Cu) { return; }
    }
    ctx->pc = 0x408E4Cu;
label_408e4c:
    // 0x408e4c: 0xc7a50230  lwc1        $f5, 0x230($sp)
    ctx->pc = 0x408e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_408e50:
    // 0x408e50: 0x3c02bf31  lui         $v0, 0xBF31
    ctx->pc = 0x408e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48945 << 16));
label_408e54:
    // 0x408e54: 0x3442c71c  ori         $v0, $v0, 0xC71C
    ctx->pc = 0x408e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50972);
label_408e58:
    // 0x408e58: 0xafa0022c  sw          $zero, 0x22C($sp)
    ctx->pc = 0x408e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 0));
label_408e5c:
    // 0x408e5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x408e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408e60:
    // 0x408e60: 0x0  nop
    ctx->pc = 0x408e60u;
    // NOP
label_408e64:
    // 0x408e64: 0x46002982  mul.s       $f6, $f5, $f0
    ctx->pc = 0x408e64u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_408e68:
    // 0x408e68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x408e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_408e6c:
    // 0x408e6c: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x408e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_408e70:
    // 0x408e70: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x408e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_408e74:
    // 0x408e74: 0xc7a40234  lwc1        $f4, 0x234($sp)
    ctx->pc = 0x408e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_408e78:
    // 0x408e78: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x408e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_408e7c:
    // 0x408e7c: 0xe7a50220  swc1        $f5, 0x220($sp)
    ctx->pc = 0x408e7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_408e80:
    // 0x408e80: 0xc7a20238  lwc1        $f2, 0x238($sp)
    ctx->pc = 0x408e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408e84:
    // 0x408e84: 0x46002142  mul.s       $f5, $f4, $f0
    ctx->pc = 0x408e84u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_408e88:
    // 0x408e88: 0xe7a40224  swc1        $f4, 0x224($sp)
    ctx->pc = 0x408e88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_408e8c:
    // 0x408e8c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x408e8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_408e90:
    // 0x408e90: 0x0  nop
    ctx->pc = 0x408e90u;
    // NOP
label_408e94:
    // 0x408e94: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x408e94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_408e98:
    // 0x408e98: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x408e98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_408e9c:
    // 0x408e9c: 0xe7a20228  swc1        $f2, 0x228($sp)
    ctx->pc = 0x408e9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_408ea0:
    // 0x408ea0: 0xe7a3022c  swc1        $f3, 0x22C($sp)
    ctx->pc = 0x408ea0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
label_408ea4:
    // 0x408ea4: 0xe7a60220  swc1        $f6, 0x220($sp)
    ctx->pc = 0x408ea4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_408ea8:
    // 0x408ea8: 0xe7a50224  swc1        $f5, 0x224($sp)
    ctx->pc = 0x408ea8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_408eac:
    // 0x408eac: 0xe7a40228  swc1        $f4, 0x228($sp)
    ctx->pc = 0x408eacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_408eb0:
    // 0x408eb0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x408eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408eb4:
    // 0x408eb4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x408eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408eb8:
    // 0x408eb8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x408eb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_408ebc:
    // 0x408ebc: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x408ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_408ec0:
    // 0x408ec0: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x408ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_408ec4:
    // 0x408ec4: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x408ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_408ec8:
    // 0x408ec8: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x408ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_408ecc:
    // 0x408ecc: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x408eccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_408ed0:
    // 0x408ed0: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x408ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_408ed4:
    // 0x408ed4: 0xe7a10228  swc1        $f1, 0x228($sp)
    ctx->pc = 0x408ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_408ed8:
    // 0x408ed8: 0xe7a0022c  swc1        $f0, 0x22C($sp)
    ctx->pc = 0x408ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
label_408edc:
    // 0x408edc: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x408edcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_408ee0:
    // 0x408ee0: 0xc088b74  jal         func_222DD0
label_408ee4:
    if (ctx->pc == 0x408EE4u) {
        ctx->pc = 0x408EE4u;
            // 0x408ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408EE8u;
        goto label_408ee8;
    }
    ctx->pc = 0x408EE0u;
    SET_GPR_U32(ctx, 31, 0x408EE8u);
    ctx->pc = 0x408EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408EE0u;
            // 0x408ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408EE8u; }
        if (ctx->pc != 0x408EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408EE8u; }
        if (ctx->pc != 0x408EE8u) { return; }
    }
    ctx->pc = 0x408EE8u;
label_408ee8:
    // 0x408ee8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x408ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_408eec:
    // 0x408eec: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x408eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_408ef0:
    // 0x408ef0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x408ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_408ef4:
    // 0x408ef4: 0x320f809  jalr        $t9
label_408ef8:
    if (ctx->pc == 0x408EF8u) {
        ctx->pc = 0x408EF8u;
            // 0x408ef8: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x408EFCu;
        goto label_408efc;
    }
    ctx->pc = 0x408EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x408EFCu);
        ctx->pc = 0x408EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408EF4u;
            // 0x408ef8: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x408EFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x408EFCu; }
            if (ctx->pc != 0x408EFCu) { return; }
        }
        }
    }
    ctx->pc = 0x408EFCu;
label_408efc:
    // 0x408efc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x408efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_408f00:
    // 0x408f00: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_408f04:
    if (ctx->pc == 0x408F04u) {
        ctx->pc = 0x408F04u;
            // 0x408f04: 0xae03015c  sw          $v1, 0x15C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 3));
        ctx->pc = 0x408F08u;
        goto label_408f08;
    }
    ctx->pc = 0x408F00u;
    {
        const bool branch_taken_0x408f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408F00u;
            // 0x408f04: 0xae03015c  sw          $v1, 0x15C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408f00) {
            ctx->pc = 0x409188u;
            goto label_409188;
        }
    }
    ctx->pc = 0x408F08u;
label_408f08:
    // 0x408f08: 0xc04cce8  jal         func_1333A0
label_408f0c:
    if (ctx->pc == 0x408F0Cu) {
        ctx->pc = 0x408F0Cu;
            // 0x408f0c: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x408F10u;
        goto label_408f10;
    }
    ctx->pc = 0x408F08u;
    SET_GPR_U32(ctx, 31, 0x408F10u);
    ctx->pc = 0x408F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408F08u;
            // 0x408f0c: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408F10u; }
        if (ctx->pc != 0x408F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408F10u; }
        if (ctx->pc != 0x408F10u) { return; }
    }
    ctx->pc = 0x408F10u;
label_408f10:
    // 0x408f10: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x408f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_408f14:
    // 0x408f14: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x408f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_408f18:
    // 0x408f18: 0xc04ce80  jal         func_133A00
label_408f1c:
    if (ctx->pc == 0x408F1Cu) {
        ctx->pc = 0x408F1Cu;
            // 0x408f1c: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->pc = 0x408F20u;
        goto label_408f20;
    }
    ctx->pc = 0x408F18u;
    SET_GPR_U32(ctx, 31, 0x408F20u);
    ctx->pc = 0x408F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408F18u;
            // 0x408f1c: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408F20u; }
        if (ctx->pc != 0x408F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408F20u; }
        if (ctx->pc != 0x408F20u) { return; }
    }
    ctx->pc = 0x408F20u;
label_408f20:
    // 0x408f20: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x408f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_408f24:
    // 0x408f24: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x408f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_408f28:
    // 0x408f28: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x408f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_408f2c:
    // 0x408f2c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x408f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_408f30:
    // 0x408f30: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x408f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_408f34:
    // 0x408f34: 0x2463bac0  addiu       $v1, $v1, -0x4540
    ctx->pc = 0x408f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949568));
label_408f38:
    // 0x408f38: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x408f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_408f3c:
    // 0x408f3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x408f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_408f40:
    // 0x408f40: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x408f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_408f44:
    // 0x408f44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x408f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_408f48:
    // 0x408f48: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x408f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408f4c:
    // 0x408f4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x408f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_408f50:
    // 0x408f50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x408f50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_408f54:
    // 0x408f54: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x408f54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_408f58:
    // 0x408f58: 0xc04cdb0  jal         func_1336C0
label_408f5c:
    if (ctx->pc == 0x408F5Cu) {
        ctx->pc = 0x408F5Cu;
            // 0x408f5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408F60u;
        goto label_408f60;
    }
    ctx->pc = 0x408F58u;
    SET_GPR_U32(ctx, 31, 0x408F60u);
    ctx->pc = 0x408F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408F58u;
            // 0x408f5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1336C0u;
    if (runtime->hasFunction(0x1336C0u)) {
        auto targetFn = runtime->lookupFunction(0x1336C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408F60u; }
        if (ctx->pc != 0x408F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001336C0_0x1336c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408F60u; }
        if (ctx->pc != 0x408F60u) { return; }
    }
    ctx->pc = 0x408F60u;
label_408f60:
    // 0x408f60: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x408f60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_408f64:
    // 0x408f64: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x408f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_408f68:
    // 0x408f68: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x408f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_408f6c:
    // 0x408f6c: 0xc04cca0  jal         func_133280
label_408f70:
    if (ctx->pc == 0x408F70u) {
        ctx->pc = 0x408F70u;
            // 0x408f70: 0x24c6bb50  addiu       $a2, $a2, -0x44B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949712));
        ctx->pc = 0x408F74u;
        goto label_408f74;
    }
    ctx->pc = 0x408F6Cu;
    SET_GPR_U32(ctx, 31, 0x408F74u);
    ctx->pc = 0x408F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408F6Cu;
            // 0x408f70: 0x24c6bb50  addiu       $a2, $a2, -0x44B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408F74u; }
        if (ctx->pc != 0x408F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408F74u; }
        if (ctx->pc != 0x408F74u) { return; }
    }
    ctx->pc = 0x408F74u;
label_408f74:
    // 0x408f74: 0x3c02bd39  lui         $v0, 0xBD39
    ctx->pc = 0x408f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48441 << 16));
label_408f78:
    // 0x408f78: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x408f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_408f7c:
    // 0x408f7c: 0x3442d648  ori         $v0, $v0, 0xD648
    ctx->pc = 0x408f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54856);
label_408f80:
    // 0x408f80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x408f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_408f84:
    // 0x408f84: 0xc04cc70  jal         func_1331C0
label_408f88:
    if (ctx->pc == 0x408F88u) {
        ctx->pc = 0x408F88u;
            // 0x408f88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408F8Cu;
        goto label_408f8c;
    }
    ctx->pc = 0x408F84u;
    SET_GPR_U32(ctx, 31, 0x408F8Cu);
    ctx->pc = 0x408F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408F84u;
            // 0x408f88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408F8Cu; }
        if (ctx->pc != 0x408F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408F8Cu; }
        if (ctx->pc != 0x408F8Cu) { return; }
    }
    ctx->pc = 0x408F8Cu;
label_408f8c:
    // 0x408f8c: 0x8e120050  lw          $s2, 0x50($s0)
    ctx->pc = 0x408f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_408f90:
    // 0x408f90: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x408f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408f94:
    // 0x408f94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x408f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_408f98:
    // 0x408f98: 0xc7a10214  lwc1        $f1, 0x214($sp)
    ctx->pc = 0x408f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408f9c:
    // 0x408f9c: 0x8c51e3e0  lw          $s1, -0x1C20($v0)
    ctx->pc = 0x408f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_408fa0:
    // 0x408fa0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x408fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_408fa4:
    // 0x408fa4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x408fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_408fa8:
    // 0x408fa8: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x408fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408fac:
    // 0x408fac: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x408facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_408fb0:
    // 0x408fb0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x408fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_408fb4:
    // 0x408fb4: 0xc6340020  lwc1        $f20, 0x20($s1)
    ctx->pc = 0x408fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_408fb8:
    // 0x408fb8: 0xc089638  jal         func_2258E0
label_408fbc:
    if (ctx->pc == 0x408FBCu) {
        ctx->pc = 0x408FBCu;
            // 0x408fbc: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->pc = 0x408FC0u;
        goto label_408fc0;
    }
    ctx->pc = 0x408FB8u;
    SET_GPR_U32(ctx, 31, 0x408FC0u);
    ctx->pc = 0x408FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408FB8u;
            // 0x408fbc: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408FC0u; }
        if (ctx->pc != 0x408FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408FC0u; }
        if (ctx->pc != 0x408FC0u) { return; }
    }
    ctx->pc = 0x408FC0u;
label_408fc0:
    // 0x408fc0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x408fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_408fc4:
    // 0x408fc4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x408fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_408fc8:
    // 0x408fc8: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x408fc8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_408fcc:
    // 0x408fcc: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x408fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_408fd0:
    // 0x408fd0: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x408fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_408fd4:
    // 0x408fd4: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x408fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408fd8:
    // 0x408fd8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x408fd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_408fdc:
    // 0x408fdc: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x408fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408fe0:
    // 0x408fe0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x408fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408fe4:
    // 0x408fe4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x408fe4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_408fe8:
    // 0x408fe8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x408fe8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_408fec:
    // 0x408fec: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x408fecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_408ff0:
    // 0x408ff0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x408ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_408ff4:
    // 0x408ff4: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x408ff4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_408ff8:
    // 0x408ff8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x408ff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_408ffc:
    // 0x408ffc: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x408ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_409000:
    // 0x409000: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x409000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_409004:
    // 0x409004: 0xc6340018  lwc1        $f20, 0x18($s1)
    ctx->pc = 0x409004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_409008:
    // 0x409008: 0xc088b74  jal         func_222DD0
label_40900c:
    if (ctx->pc == 0x40900Cu) {
        ctx->pc = 0x40900Cu;
            // 0x40900c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409010u;
        goto label_409010;
    }
    ctx->pc = 0x409008u;
    SET_GPR_U32(ctx, 31, 0x409010u);
    ctx->pc = 0x40900Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409008u;
            // 0x40900c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409010u; }
        if (ctx->pc != 0x409010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409010u; }
        if (ctx->pc != 0x409010u) { return; }
    }
    ctx->pc = 0x409010u;
label_409010:
    // 0x409010: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x409010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_409014:
    // 0x409014: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x409014u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_409018:
    // 0x409018: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x409018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_40901c:
    // 0x40901c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x40901cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_409020:
    // 0x409020: 0x320f809  jalr        $t9
label_409024:
    if (ctx->pc == 0x409024u) {
        ctx->pc = 0x409024u;
            // 0x409024: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x409028u;
        goto label_409028;
    }
    ctx->pc = 0x409020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x409028u);
        ctx->pc = 0x409024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409020u;
            // 0x409024: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x409028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x409028u; }
            if (ctx->pc != 0x409028u) { return; }
        }
        }
    }
    ctx->pc = 0x409028u;
label_409028:
    // 0x409028: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x409028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_40902c:
    // 0x40902c: 0xc04cce8  jal         func_1333A0
label_409030:
    if (ctx->pc == 0x409030u) {
        ctx->pc = 0x409030u;
            // 0x409030: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x409034u;
        goto label_409034;
    }
    ctx->pc = 0x40902Cu;
    SET_GPR_U32(ctx, 31, 0x409034u);
    ctx->pc = 0x409030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40902Cu;
            // 0x409030: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409034u; }
        if (ctx->pc != 0x409034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409034u; }
        if (ctx->pc != 0x409034u) { return; }
    }
    ctx->pc = 0x409034u;
label_409034:
    // 0x409034: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x409034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_409038:
    // 0x409038: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x409038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_40903c:
    // 0x40903c: 0xc04ce80  jal         func_133A00
label_409040:
    if (ctx->pc == 0x409040u) {
        ctx->pc = 0x409040u;
            // 0x409040: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->pc = 0x409044u;
        goto label_409044;
    }
    ctx->pc = 0x40903Cu;
    SET_GPR_U32(ctx, 31, 0x409044u);
    ctx->pc = 0x409040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40903Cu;
            // 0x409040: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409044u; }
        if (ctx->pc != 0x409044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409044u; }
        if (ctx->pc != 0x409044u) { return; }
    }
    ctx->pc = 0x409044u;
label_409044:
    // 0x409044: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x409044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_409048:
    // 0x409048: 0xc04cce8  jal         func_1333A0
label_40904c:
    if (ctx->pc == 0x40904Cu) {
        ctx->pc = 0x40904Cu;
            // 0x40904c: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x409050u;
        goto label_409050;
    }
    ctx->pc = 0x409048u;
    SET_GPR_U32(ctx, 31, 0x409050u);
    ctx->pc = 0x40904Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409048u;
            // 0x40904c: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409050u; }
        if (ctx->pc != 0x409050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409050u; }
        if (ctx->pc != 0x409050u) { return; }
    }
    ctx->pc = 0x409050u;
label_409050:
    // 0x409050: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x409050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_409054:
    // 0x409054: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x409054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_409058:
    // 0x409058: 0xc04ce80  jal         func_133A00
label_40905c:
    if (ctx->pc == 0x40905Cu) {
        ctx->pc = 0x40905Cu;
            // 0x40905c: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->pc = 0x409060u;
        goto label_409060;
    }
    ctx->pc = 0x409058u;
    SET_GPR_U32(ctx, 31, 0x409060u);
    ctx->pc = 0x40905Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409058u;
            // 0x40905c: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409060u; }
        if (ctx->pc != 0x409060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409060u; }
        if (ctx->pc != 0x409060u) { return; }
    }
    ctx->pc = 0x409060u;
label_409060:
    // 0x409060: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x409060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_409064:
    // 0x409064: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x409064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_409068:
    // 0x409068: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x409068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_40906c:
    // 0x40906c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x40906cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_409070:
    // 0x409070: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x409070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_409074:
    // 0x409074: 0x2463bac0  addiu       $v1, $v1, -0x4540
    ctx->pc = 0x409074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949568));
label_409078:
    // 0x409078: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x409078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_40907c:
    // 0x40907c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x40907cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_409080:
    // 0x409080: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x409080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_409084:
    // 0x409084: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x409084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_409088:
    // 0x409088: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x409088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40908c:
    // 0x40908c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x40908cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_409090:
    // 0x409090: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x409090u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_409094:
    // 0x409094: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x409094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_409098:
    // 0x409098: 0xc04cdb0  jal         func_1336C0
label_40909c:
    if (ctx->pc == 0x40909Cu) {
        ctx->pc = 0x40909Cu;
            // 0x40909c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4090A0u;
        goto label_4090a0;
    }
    ctx->pc = 0x409098u;
    SET_GPR_U32(ctx, 31, 0x4090A0u);
    ctx->pc = 0x40909Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409098u;
            // 0x40909c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1336C0u;
    if (runtime->hasFunction(0x1336C0u)) {
        auto targetFn = runtime->lookupFunction(0x1336C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4090A0u; }
        if (ctx->pc != 0x4090A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001336C0_0x1336c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4090A0u; }
        if (ctx->pc != 0x4090A0u) { return; }
    }
    ctx->pc = 0x4090A0u;
label_4090a0:
    // 0x4090a0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x4090a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_4090a4:
    // 0x4090a4: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x4090a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4090a8:
    // 0x4090a8: 0xc04cd60  jal         func_133580
label_4090ac:
    if (ctx->pc == 0x4090ACu) {
        ctx->pc = 0x4090ACu;
            // 0x4090ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4090B0u;
        goto label_4090b0;
    }
    ctx->pc = 0x4090A8u;
    SET_GPR_U32(ctx, 31, 0x4090B0u);
    ctx->pc = 0x4090ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4090A8u;
            // 0x4090ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4090B0u; }
        if (ctx->pc != 0x4090B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4090B0u; }
        if (ctx->pc != 0x4090B0u) { return; }
    }
    ctx->pc = 0x4090B0u;
label_4090b0:
    // 0x4090b0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4090b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4090b4:
    // 0x4090b4: 0xc04cce4  jal         func_133390
label_4090b8:
    if (ctx->pc == 0x4090B8u) {
        ctx->pc = 0x4090B8u;
            // 0x4090b8: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x4090BCu;
        goto label_4090bc;
    }
    ctx->pc = 0x4090B4u;
    SET_GPR_U32(ctx, 31, 0x4090BCu);
    ctx->pc = 0x4090B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4090B4u;
            // 0x4090b8: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4090BCu; }
        if (ctx->pc != 0x4090BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4090BCu; }
        if (ctx->pc != 0x4090BCu) { return; }
    }
    ctx->pc = 0x4090BCu;
label_4090bc:
    // 0x4090bc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x4090bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_4090c0:
    // 0x4090c0: 0xc04ce80  jal         func_133A00
label_4090c4:
    if (ctx->pc == 0x4090C4u) {
        ctx->pc = 0x4090C4u;
            // 0x4090c4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x4090C8u;
        goto label_4090c8;
    }
    ctx->pc = 0x4090C0u;
    SET_GPR_U32(ctx, 31, 0x4090C8u);
    ctx->pc = 0x4090C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4090C0u;
            // 0x4090c4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4090C8u; }
        if (ctx->pc != 0x4090C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4090C8u; }
        if (ctx->pc != 0x4090C8u) { return; }
    }
    ctx->pc = 0x4090C8u;
label_4090c8:
    // 0x4090c8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4090c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4090cc:
    // 0x4090cc: 0xc04ccf4  jal         func_1333D0
label_4090d0:
    if (ctx->pc == 0x4090D0u) {
        ctx->pc = 0x4090D0u;
            // 0x4090d0: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4090D4u;
        goto label_4090d4;
    }
    ctx->pc = 0x4090CCu;
    SET_GPR_U32(ctx, 31, 0x4090D4u);
    ctx->pc = 0x4090D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4090CCu;
            // 0x4090d0: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4090D4u; }
        if (ctx->pc != 0x4090D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4090D4u; }
        if (ctx->pc != 0x4090D4u) { return; }
    }
    ctx->pc = 0x4090D4u;
label_4090d4:
    // 0x4090d4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4090d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4090d8:
    // 0x4090d8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x4090d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4090dc:
    // 0x4090dc: 0xc04cca0  jal         func_133280
label_4090e0:
    if (ctx->pc == 0x4090E0u) {
        ctx->pc = 0x4090E0u;
            // 0x4090e0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4090E4u;
        goto label_4090e4;
    }
    ctx->pc = 0x4090DCu;
    SET_GPR_U32(ctx, 31, 0x4090E4u);
    ctx->pc = 0x4090E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4090DCu;
            // 0x4090e0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4090E4u; }
        if (ctx->pc != 0x4090E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4090E4u; }
        if (ctx->pc != 0x4090E4u) { return; }
    }
    ctx->pc = 0x4090E4u;
label_4090e4:
    // 0x4090e4: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x4090e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4090e8:
    // 0x4090e8: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x4090e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
label_4090ec:
    // 0x4090ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4090ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4090f0:
    // 0x4090f0: 0x0  nop
    ctx->pc = 0x4090f0u;
    // NOP
label_4090f4:
    // 0x4090f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4090f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4090f8:
    // 0x4090f8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_4090fc:
    if (ctx->pc == 0x4090FCu) {
        ctx->pc = 0x409100u;
        goto label_409100;
    }
    ctx->pc = 0x4090F8u;
    {
        const bool branch_taken_0x4090f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4090f8) {
            ctx->pc = 0x409188u;
            goto label_409188;
        }
    }
    ctx->pc = 0x409100u;
label_409100:
    // 0x409100: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x409100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_409104:
    // 0x409104: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x409104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_409108:
    // 0x409108: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x409108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40910c:
    // 0x40910c: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x40910cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_409110:
    // 0x409110: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x409110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_409114:
    // 0x409114: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x409114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_409118:
    // 0x409118: 0xc08bff0  jal         func_22FFC0
label_40911c:
    if (ctx->pc == 0x40911Cu) {
        ctx->pc = 0x40911Cu;
            // 0x40911c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409120u;
        goto label_409120;
    }
    ctx->pc = 0x409118u;
    SET_GPR_U32(ctx, 31, 0x409120u);
    ctx->pc = 0x40911Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409118u;
            // 0x40911c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409120u; }
        if (ctx->pc != 0x409120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409120u; }
        if (ctx->pc != 0x409120u) { return; }
    }
    ctx->pc = 0x409120u;
label_409120:
    // 0x409120: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x409120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_409124:
    // 0x409124: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x409124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_409128:
    // 0x409128: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x409128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40912c:
    // 0x40912c: 0xc08914c  jal         func_224530
label_409130:
    if (ctx->pc == 0x409130u) {
        ctx->pc = 0x409130u;
            // 0x409130: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409134u;
        goto label_409134;
    }
    ctx->pc = 0x40912Cu;
    SET_GPR_U32(ctx, 31, 0x409134u);
    ctx->pc = 0x409130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40912Cu;
            // 0x409130: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409134u; }
        if (ctx->pc != 0x409134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409134u; }
        if (ctx->pc != 0x409134u) { return; }
    }
    ctx->pc = 0x409134u;
label_409134:
    // 0x409134: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x409134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_409138:
    // 0x409138: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x409138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
label_40913c:
    // 0x40913c: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x40913cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
label_409140:
    // 0x409140: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x409140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_409144:
    // 0x409144: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x409144u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_409148:
    // 0x409148: 0xc088b74  jal         func_222DD0
label_40914c:
    if (ctx->pc == 0x40914Cu) {
        ctx->pc = 0x40914Cu;
            // 0x40914c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409150u;
        goto label_409150;
    }
    ctx->pc = 0x409148u;
    SET_GPR_U32(ctx, 31, 0x409150u);
    ctx->pc = 0x40914Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409148u;
            // 0x40914c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409150u; }
        if (ctx->pc != 0x409150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409150u; }
        if (ctx->pc != 0x409150u) { return; }
    }
    ctx->pc = 0x409150u;
label_409150:
    // 0x409150: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x409150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_409154:
    // 0x409154: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x409154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_409158:
    // 0x409158: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x409158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_40915c:
    // 0x40915c: 0x320f809  jalr        $t9
label_409160:
    if (ctx->pc == 0x409160u) {
        ctx->pc = 0x409160u;
            // 0x409160: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x409164u;
        goto label_409164;
    }
    ctx->pc = 0x40915Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x409164u);
        ctx->pc = 0x409160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40915Cu;
            // 0x409160: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x409164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x409164u; }
            if (ctx->pc != 0x409164u) { return; }
        }
        }
    }
    ctx->pc = 0x409164u;
label_409164:
    // 0x409164: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x409164u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_409168:
    // 0x409168: 0xc088b74  jal         func_222DD0
label_40916c:
    if (ctx->pc == 0x40916Cu) {
        ctx->pc = 0x40916Cu;
            // 0x40916c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409170u;
        goto label_409170;
    }
    ctx->pc = 0x409168u;
    SET_GPR_U32(ctx, 31, 0x409170u);
    ctx->pc = 0x40916Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409168u;
            // 0x40916c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409170u; }
        if (ctx->pc != 0x409170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409170u; }
        if (ctx->pc != 0x409170u) { return; }
    }
    ctx->pc = 0x409170u;
label_409170:
    // 0x409170: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x409170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_409174:
    // 0x409174: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x409174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_409178:
    // 0x409178: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x409178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_40917c:
    // 0x40917c: 0x320f809  jalr        $t9
label_409180:
    if (ctx->pc == 0x409180u) {
        ctx->pc = 0x409180u;
            // 0x409180: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x409184u;
        goto label_409184;
    }
    ctx->pc = 0x40917Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x409184u);
        ctx->pc = 0x409180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40917Cu;
            // 0x409180: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x409184u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x409184u; }
            if (ctx->pc != 0x409184u) { return; }
        }
        }
    }
    ctx->pc = 0x409184u;
label_409184:
    // 0x409184: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x409184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_409188:
    // 0x409188: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x409188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40918c:
    // 0x40918c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x40918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_409190:
    // 0x409190: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x409190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_409194:
    // 0x409194: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x409194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_409198:
    // 0x409198: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x409198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40919c:
    // 0x40919c: 0x3e00008  jr          $ra
label_4091a0:
    if (ctx->pc == 0x4091A0u) {
        ctx->pc = 0x4091A0u;
            // 0x4091a0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x4091A4u;
        goto label_4091a4;
    }
    ctx->pc = 0x40919Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4091A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40919Cu;
            // 0x4091a0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4091A4u;
label_4091a4:
    // 0x4091a4: 0x0  nop
    ctx->pc = 0x4091a4u;
    // NOP
label_4091a8:
    // 0x4091a8: 0x0  nop
    ctx->pc = 0x4091a8u;
    // NOP
label_4091ac:
    // 0x4091ac: 0x0  nop
    ctx->pc = 0x4091acu;
    // NOP
label_4091b0:
    // 0x4091b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4091b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4091b4:
    // 0x4091b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4091b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4091b8:
    // 0x4091b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4091b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4091bc:
    // 0x4091bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4091bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4091c0:
    // 0x4091c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4091c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4091c4:
    // 0x4091c4: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x4091c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4091c8:
    // 0x4091c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4091c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4091cc:
    // 0x4091cc: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x4091ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_4091d0:
    // 0x4091d0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4091d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4091d4:
    // 0x4091d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4091d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4091d8:
    // 0x4091d8: 0xc08bff0  jal         func_22FFC0
label_4091dc:
    if (ctx->pc == 0x4091DCu) {
        ctx->pc = 0x4091DCu;
            // 0x4091dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4091E0u;
        goto label_4091e0;
    }
    ctx->pc = 0x4091D8u;
    SET_GPR_U32(ctx, 31, 0x4091E0u);
    ctx->pc = 0x4091DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4091D8u;
            // 0x4091dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4091E0u; }
        if (ctx->pc != 0x4091E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4091E0u; }
        if (ctx->pc != 0x4091E0u) { return; }
    }
    ctx->pc = 0x4091E0u;
label_4091e0:
    // 0x4091e0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4091e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4091e4:
    // 0x4091e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4091e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4091e8:
    // 0x4091e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4091e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4091ec:
    // 0x4091ec: 0xc08914c  jal         func_224530
label_4091f0:
    if (ctx->pc == 0x4091F0u) {
        ctx->pc = 0x4091F0u;
            // 0x4091f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4091F4u;
        goto label_4091f4;
    }
    ctx->pc = 0x4091ECu;
    SET_GPR_U32(ctx, 31, 0x4091F4u);
    ctx->pc = 0x4091F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4091ECu;
            // 0x4091f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4091F4u; }
        if (ctx->pc != 0x4091F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4091F4u; }
        if (ctx->pc != 0x4091F4u) { return; }
    }
    ctx->pc = 0x4091F4u;
label_4091f4:
    // 0x4091f4: 0xc0e393c  jal         func_38E4F0
label_4091f8:
    if (ctx->pc == 0x4091F8u) {
        ctx->pc = 0x4091F8u;
            // 0x4091f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4091FCu;
        goto label_4091fc;
    }
    ctx->pc = 0x4091F4u;
    SET_GPR_U32(ctx, 31, 0x4091FCu);
    ctx->pc = 0x4091F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4091F4u;
            // 0x4091f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4091FCu; }
        if (ctx->pc != 0x4091FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4091FCu; }
        if (ctx->pc != 0x4091FCu) { return; }
    }
    ctx->pc = 0x4091FCu;
label_4091fc:
    // 0x4091fc: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x4091fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_409200:
    // 0x409200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x409200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_409204:
    // 0x409204: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x409204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
label_409208:
    // 0x409208: 0xa203016c  sb          $v1, 0x16C($s0)
    ctx->pc = 0x409208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 364), (uint8_t)GPR_U32(ctx, 3));
label_40920c:
    // 0x40920c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40920cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_409210:
    // 0x409210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x409210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_409214:
    // 0x409214: 0x3e00008  jr          $ra
label_409218:
    if (ctx->pc == 0x409218u) {
        ctx->pc = 0x409218u;
            // 0x409218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40921Cu;
        goto label_40921c;
    }
    ctx->pc = 0x409214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409214u;
            // 0x409218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40921Cu;
label_40921c:
    // 0x40921c: 0x0  nop
    ctx->pc = 0x40921cu;
    // NOP
label_409220:
    // 0x409220: 0x8101d8c  j           func_407630
label_409224:
    if (ctx->pc == 0x409224u) {
        ctx->pc = 0x409224u;
            // 0x409224: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x409228u;
        goto label_409228;
    }
    ctx->pc = 0x409220u;
    ctx->pc = 0x409224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409220u;
            // 0x409224: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x407630u;
    {
        auto targetFn = runtime->lookupFunction(0x407630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x409228u;
label_409228:
    // 0x409228: 0x0  nop
    ctx->pc = 0x409228u;
    // NOP
label_40922c:
    // 0x40922c: 0x0  nop
    ctx->pc = 0x40922cu;
    // NOP
label_409230:
    // 0x409230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x409230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_409234:
    // 0x409234: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x409234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_409238:
    // 0x409238: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x409238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40923c:
    // 0x40923c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_409240:
    // 0x409240: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x409240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_409244:
    // 0x409244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x409244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_409248:
    // 0x409248: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x409248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40924c:
    // 0x40924c: 0x12600032  beqz        $s3, . + 4 + (0x32 << 2)
label_409250:
    if (ctx->pc == 0x409250u) {
        ctx->pc = 0x409250u;
            // 0x409250: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x409254u;
        goto label_409254;
    }
    ctx->pc = 0x40924Cu;
    {
        const bool branch_taken_0x40924c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x409250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40924Cu;
            // 0x409250: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40924c) {
            ctx->pc = 0x409318u;
            goto label_409318;
        }
    }
    ctx->pc = 0x409254u;
label_409254:
    // 0x409254: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x409254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_409258:
    // 0x409258: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x409258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_40925c:
    // 0x40925c: 0x2463a9e0  addiu       $v1, $v1, -0x5620
    ctx->pc = 0x40925cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945248));
label_409260:
    // 0x409260: 0x2442aa18  addiu       $v0, $v0, -0x55E8
    ctx->pc = 0x409260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945304));
label_409264:
    // 0x409264: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x409264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_409268:
    // 0x409268: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x409268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40926c:
    // 0x40926c: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x40926cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_409270:
    // 0x409270: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x409270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_409274:
    // 0x409274: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x409274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_409278:
    // 0x409278: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x409278u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_40927c:
    // 0x40927c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_409280:
    if (ctx->pc == 0x409280u) {
        ctx->pc = 0x409284u;
        goto label_409284;
    }
    ctx->pc = 0x40927Cu;
    {
        const bool branch_taken_0x40927c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40927c) {
            ctx->pc = 0x4092B8u;
            goto label_4092b8;
        }
    }
    ctx->pc = 0x409284u;
label_409284:
    // 0x409284: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x409284u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_409288:
    // 0x409288: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x409288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_40928c:
    // 0x40928c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x40928cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_409290:
    // 0x409290: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x409290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_409294:
    // 0x409294: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x409294u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_409298:
    // 0x409298: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_40929c:
    if (ctx->pc == 0x40929Cu) {
        ctx->pc = 0x4092A0u;
        goto label_4092a0;
    }
    ctx->pc = 0x409298u;
    {
        const bool branch_taken_0x409298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x409298) {
            ctx->pc = 0x4092B8u;
            goto label_4092b8;
        }
    }
    ctx->pc = 0x4092A0u;
label_4092a0:
    // 0x4092a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4092a4:
    if (ctx->pc == 0x4092A4u) {
        ctx->pc = 0x4092A8u;
        goto label_4092a8;
    }
    ctx->pc = 0x4092A0u;
    {
        const bool branch_taken_0x4092a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4092a0) {
            ctx->pc = 0x4092B8u;
            goto label_4092b8;
        }
    }
    ctx->pc = 0x4092A8u;
label_4092a8:
    // 0x4092a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4092a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4092ac:
    // 0x4092ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4092acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4092b0:
    // 0x4092b0: 0x320f809  jalr        $t9
label_4092b4:
    if (ctx->pc == 0x4092B4u) {
        ctx->pc = 0x4092B4u;
            // 0x4092b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4092B8u;
        goto label_4092b8;
    }
    ctx->pc = 0x4092B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4092B8u);
        ctx->pc = 0x4092B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4092B0u;
            // 0x4092b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4092B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4092B8u; }
            if (ctx->pc != 0x4092B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4092B8u;
label_4092b8:
    // 0x4092b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4092b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4092bc:
    // 0x4092bc: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x4092bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_4092c0:
    // 0x4092c0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_4092c4:
    if (ctx->pc == 0x4092C4u) {
        ctx->pc = 0x4092C4u;
            // 0x4092c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4092C8u;
        goto label_4092c8;
    }
    ctx->pc = 0x4092C0u;
    {
        const bool branch_taken_0x4092c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4092C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4092C0u;
            // 0x4092c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4092c0) {
            ctx->pc = 0x409274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_409274;
        }
    }
    ctx->pc = 0x4092C8u;
label_4092c8:
    // 0x4092c8: 0x5260000e  beql        $s3, $zero, . + 4 + (0xE << 2)
label_4092cc:
    if (ctx->pc == 0x4092CCu) {
        ctx->pc = 0x4092CCu;
            // 0x4092cc: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x4092D0u;
        goto label_4092d0;
    }
    ctx->pc = 0x4092C8u;
    {
        const bool branch_taken_0x4092c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4092c8) {
            ctx->pc = 0x4092CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4092C8u;
            // 0x4092cc: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x409304u;
            goto label_409304;
        }
    }
    ctx->pc = 0x4092D0u;
label_4092d0:
    // 0x4092d0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4092d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4092d4:
    // 0x4092d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4092d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4092d8:
    // 0x4092d8: 0x2463aa90  addiu       $v1, $v1, -0x5570
    ctx->pc = 0x4092d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945424));
label_4092dc:
    // 0x4092dc: 0x2442aac8  addiu       $v0, $v0, -0x5538
    ctx->pc = 0x4092dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945480));
label_4092e0:
    // 0x4092e0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4092e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4092e4:
    // 0x4092e4: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x4092e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_4092e8:
    // 0x4092e8: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4092e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4092ec:
    // 0x4092ec: 0xc0aed1c  jal         func_2BB470
label_4092f0:
    if (ctx->pc == 0x4092F0u) {
        ctx->pc = 0x4092F0u;
            // 0x4092f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4092F4u;
        goto label_4092f4;
    }
    ctx->pc = 0x4092ECu;
    SET_GPR_U32(ctx, 31, 0x4092F4u);
    ctx->pc = 0x4092F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4092ECu;
            // 0x4092f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4092F4u; }
        if (ctx->pc != 0x4092F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4092F4u; }
        if (ctx->pc != 0x4092F4u) { return; }
    }
    ctx->pc = 0x4092F4u;
label_4092f4:
    // 0x4092f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4092f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4092f8:
    // 0x4092f8: 0xc1024d0  jal         func_409340
label_4092fc:
    if (ctx->pc == 0x4092FCu) {
        ctx->pc = 0x4092FCu;
            // 0x4092fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409300u;
        goto label_409300;
    }
    ctx->pc = 0x4092F8u;
    SET_GPR_U32(ctx, 31, 0x409300u);
    ctx->pc = 0x4092FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4092F8u;
            // 0x4092fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x409340u;
    if (runtime->hasFunction(0x409340u)) {
        auto targetFn = runtime->lookupFunction(0x409340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409300u; }
        if (ctx->pc != 0x409300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00409340_0x409340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409300u; }
        if (ctx->pc != 0x409300u) { return; }
    }
    ctx->pc = 0x409300u;
label_409300:
    // 0x409300: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x409300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_409304:
    // 0x409304: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x409304u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_409308:
    // 0x409308: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_40930c:
    if (ctx->pc == 0x40930Cu) {
        ctx->pc = 0x40930Cu;
            // 0x40930c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409310u;
        goto label_409310;
    }
    ctx->pc = 0x409308u;
    {
        const bool branch_taken_0x409308 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x409308) {
            ctx->pc = 0x40930Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409308u;
            // 0x40930c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40931Cu;
            goto label_40931c;
        }
    }
    ctx->pc = 0x409310u;
label_409310:
    // 0x409310: 0xc0400a8  jal         func_1002A0
label_409314:
    if (ctx->pc == 0x409314u) {
        ctx->pc = 0x409314u;
            // 0x409314: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409318u;
        goto label_409318;
    }
    ctx->pc = 0x409310u;
    SET_GPR_U32(ctx, 31, 0x409318u);
    ctx->pc = 0x409314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409310u;
            // 0x409314: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409318u; }
        if (ctx->pc != 0x409318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409318u; }
        if (ctx->pc != 0x409318u) { return; }
    }
    ctx->pc = 0x409318u;
label_409318:
    // 0x409318: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x409318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40931c:
    // 0x40931c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40931cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_409320:
    // 0x409320: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x409320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_409324:
    // 0x409324: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x409324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_409328:
    // 0x409328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x409328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40932c:
    // 0x40932c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40932cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_409330:
    // 0x409330: 0x3e00008  jr          $ra
label_409334:
    if (ctx->pc == 0x409334u) {
        ctx->pc = 0x409334u;
            // 0x409334: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x409338u;
        goto label_409338;
    }
    ctx->pc = 0x409330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409330u;
            // 0x409334: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x409338u;
label_409338:
    // 0x409338: 0x0  nop
    ctx->pc = 0x409338u;
    // NOP
label_40933c:
    // 0x40933c: 0x0  nop
    ctx->pc = 0x40933cu;
    // NOP
}
