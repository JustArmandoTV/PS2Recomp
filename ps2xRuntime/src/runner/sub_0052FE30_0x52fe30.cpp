#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052FE30
// Address: 0x52fe30 - 0x530800
void sub_0052FE30_0x52fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052FE30_0x52fe30");
#endif

    switch (ctx->pc) {
        case 0x52fe30u: goto label_52fe30;
        case 0x52fe34u: goto label_52fe34;
        case 0x52fe38u: goto label_52fe38;
        case 0x52fe3cu: goto label_52fe3c;
        case 0x52fe40u: goto label_52fe40;
        case 0x52fe44u: goto label_52fe44;
        case 0x52fe48u: goto label_52fe48;
        case 0x52fe4cu: goto label_52fe4c;
        case 0x52fe50u: goto label_52fe50;
        case 0x52fe54u: goto label_52fe54;
        case 0x52fe58u: goto label_52fe58;
        case 0x52fe5cu: goto label_52fe5c;
        case 0x52fe60u: goto label_52fe60;
        case 0x52fe64u: goto label_52fe64;
        case 0x52fe68u: goto label_52fe68;
        case 0x52fe6cu: goto label_52fe6c;
        case 0x52fe70u: goto label_52fe70;
        case 0x52fe74u: goto label_52fe74;
        case 0x52fe78u: goto label_52fe78;
        case 0x52fe7cu: goto label_52fe7c;
        case 0x52fe80u: goto label_52fe80;
        case 0x52fe84u: goto label_52fe84;
        case 0x52fe88u: goto label_52fe88;
        case 0x52fe8cu: goto label_52fe8c;
        case 0x52fe90u: goto label_52fe90;
        case 0x52fe94u: goto label_52fe94;
        case 0x52fe98u: goto label_52fe98;
        case 0x52fe9cu: goto label_52fe9c;
        case 0x52fea0u: goto label_52fea0;
        case 0x52fea4u: goto label_52fea4;
        case 0x52fea8u: goto label_52fea8;
        case 0x52feacu: goto label_52feac;
        case 0x52feb0u: goto label_52feb0;
        case 0x52feb4u: goto label_52feb4;
        case 0x52feb8u: goto label_52feb8;
        case 0x52febcu: goto label_52febc;
        case 0x52fec0u: goto label_52fec0;
        case 0x52fec4u: goto label_52fec4;
        case 0x52fec8u: goto label_52fec8;
        case 0x52feccu: goto label_52fecc;
        case 0x52fed0u: goto label_52fed0;
        case 0x52fed4u: goto label_52fed4;
        case 0x52fed8u: goto label_52fed8;
        case 0x52fedcu: goto label_52fedc;
        case 0x52fee0u: goto label_52fee0;
        case 0x52fee4u: goto label_52fee4;
        case 0x52fee8u: goto label_52fee8;
        case 0x52feecu: goto label_52feec;
        case 0x52fef0u: goto label_52fef0;
        case 0x52fef4u: goto label_52fef4;
        case 0x52fef8u: goto label_52fef8;
        case 0x52fefcu: goto label_52fefc;
        case 0x52ff00u: goto label_52ff00;
        case 0x52ff04u: goto label_52ff04;
        case 0x52ff08u: goto label_52ff08;
        case 0x52ff0cu: goto label_52ff0c;
        case 0x52ff10u: goto label_52ff10;
        case 0x52ff14u: goto label_52ff14;
        case 0x52ff18u: goto label_52ff18;
        case 0x52ff1cu: goto label_52ff1c;
        case 0x52ff20u: goto label_52ff20;
        case 0x52ff24u: goto label_52ff24;
        case 0x52ff28u: goto label_52ff28;
        case 0x52ff2cu: goto label_52ff2c;
        case 0x52ff30u: goto label_52ff30;
        case 0x52ff34u: goto label_52ff34;
        case 0x52ff38u: goto label_52ff38;
        case 0x52ff3cu: goto label_52ff3c;
        case 0x52ff40u: goto label_52ff40;
        case 0x52ff44u: goto label_52ff44;
        case 0x52ff48u: goto label_52ff48;
        case 0x52ff4cu: goto label_52ff4c;
        case 0x52ff50u: goto label_52ff50;
        case 0x52ff54u: goto label_52ff54;
        case 0x52ff58u: goto label_52ff58;
        case 0x52ff5cu: goto label_52ff5c;
        case 0x52ff60u: goto label_52ff60;
        case 0x52ff64u: goto label_52ff64;
        case 0x52ff68u: goto label_52ff68;
        case 0x52ff6cu: goto label_52ff6c;
        case 0x52ff70u: goto label_52ff70;
        case 0x52ff74u: goto label_52ff74;
        case 0x52ff78u: goto label_52ff78;
        case 0x52ff7cu: goto label_52ff7c;
        case 0x52ff80u: goto label_52ff80;
        case 0x52ff84u: goto label_52ff84;
        case 0x52ff88u: goto label_52ff88;
        case 0x52ff8cu: goto label_52ff8c;
        case 0x52ff90u: goto label_52ff90;
        case 0x52ff94u: goto label_52ff94;
        case 0x52ff98u: goto label_52ff98;
        case 0x52ff9cu: goto label_52ff9c;
        case 0x52ffa0u: goto label_52ffa0;
        case 0x52ffa4u: goto label_52ffa4;
        case 0x52ffa8u: goto label_52ffa8;
        case 0x52ffacu: goto label_52ffac;
        case 0x52ffb0u: goto label_52ffb0;
        case 0x52ffb4u: goto label_52ffb4;
        case 0x52ffb8u: goto label_52ffb8;
        case 0x52ffbcu: goto label_52ffbc;
        case 0x52ffc0u: goto label_52ffc0;
        case 0x52ffc4u: goto label_52ffc4;
        case 0x52ffc8u: goto label_52ffc8;
        case 0x52ffccu: goto label_52ffcc;
        case 0x52ffd0u: goto label_52ffd0;
        case 0x52ffd4u: goto label_52ffd4;
        case 0x52ffd8u: goto label_52ffd8;
        case 0x52ffdcu: goto label_52ffdc;
        case 0x52ffe0u: goto label_52ffe0;
        case 0x52ffe4u: goto label_52ffe4;
        case 0x52ffe8u: goto label_52ffe8;
        case 0x52ffecu: goto label_52ffec;
        case 0x52fff0u: goto label_52fff0;
        case 0x52fff4u: goto label_52fff4;
        case 0x52fff8u: goto label_52fff8;
        case 0x52fffcu: goto label_52fffc;
        case 0x530000u: goto label_530000;
        case 0x530004u: goto label_530004;
        case 0x530008u: goto label_530008;
        case 0x53000cu: goto label_53000c;
        case 0x530010u: goto label_530010;
        case 0x530014u: goto label_530014;
        case 0x530018u: goto label_530018;
        case 0x53001cu: goto label_53001c;
        case 0x530020u: goto label_530020;
        case 0x530024u: goto label_530024;
        case 0x530028u: goto label_530028;
        case 0x53002cu: goto label_53002c;
        case 0x530030u: goto label_530030;
        case 0x530034u: goto label_530034;
        case 0x530038u: goto label_530038;
        case 0x53003cu: goto label_53003c;
        case 0x530040u: goto label_530040;
        case 0x530044u: goto label_530044;
        case 0x530048u: goto label_530048;
        case 0x53004cu: goto label_53004c;
        case 0x530050u: goto label_530050;
        case 0x530054u: goto label_530054;
        case 0x530058u: goto label_530058;
        case 0x53005cu: goto label_53005c;
        case 0x530060u: goto label_530060;
        case 0x530064u: goto label_530064;
        case 0x530068u: goto label_530068;
        case 0x53006cu: goto label_53006c;
        case 0x530070u: goto label_530070;
        case 0x530074u: goto label_530074;
        case 0x530078u: goto label_530078;
        case 0x53007cu: goto label_53007c;
        case 0x530080u: goto label_530080;
        case 0x530084u: goto label_530084;
        case 0x530088u: goto label_530088;
        case 0x53008cu: goto label_53008c;
        case 0x530090u: goto label_530090;
        case 0x530094u: goto label_530094;
        case 0x530098u: goto label_530098;
        case 0x53009cu: goto label_53009c;
        case 0x5300a0u: goto label_5300a0;
        case 0x5300a4u: goto label_5300a4;
        case 0x5300a8u: goto label_5300a8;
        case 0x5300acu: goto label_5300ac;
        case 0x5300b0u: goto label_5300b0;
        case 0x5300b4u: goto label_5300b4;
        case 0x5300b8u: goto label_5300b8;
        case 0x5300bcu: goto label_5300bc;
        case 0x5300c0u: goto label_5300c0;
        case 0x5300c4u: goto label_5300c4;
        case 0x5300c8u: goto label_5300c8;
        case 0x5300ccu: goto label_5300cc;
        case 0x5300d0u: goto label_5300d0;
        case 0x5300d4u: goto label_5300d4;
        case 0x5300d8u: goto label_5300d8;
        case 0x5300dcu: goto label_5300dc;
        case 0x5300e0u: goto label_5300e0;
        case 0x5300e4u: goto label_5300e4;
        case 0x5300e8u: goto label_5300e8;
        case 0x5300ecu: goto label_5300ec;
        case 0x5300f0u: goto label_5300f0;
        case 0x5300f4u: goto label_5300f4;
        case 0x5300f8u: goto label_5300f8;
        case 0x5300fcu: goto label_5300fc;
        case 0x530100u: goto label_530100;
        case 0x530104u: goto label_530104;
        case 0x530108u: goto label_530108;
        case 0x53010cu: goto label_53010c;
        case 0x530110u: goto label_530110;
        case 0x530114u: goto label_530114;
        case 0x530118u: goto label_530118;
        case 0x53011cu: goto label_53011c;
        case 0x530120u: goto label_530120;
        case 0x530124u: goto label_530124;
        case 0x530128u: goto label_530128;
        case 0x53012cu: goto label_53012c;
        case 0x530130u: goto label_530130;
        case 0x530134u: goto label_530134;
        case 0x530138u: goto label_530138;
        case 0x53013cu: goto label_53013c;
        case 0x530140u: goto label_530140;
        case 0x530144u: goto label_530144;
        case 0x530148u: goto label_530148;
        case 0x53014cu: goto label_53014c;
        case 0x530150u: goto label_530150;
        case 0x530154u: goto label_530154;
        case 0x530158u: goto label_530158;
        case 0x53015cu: goto label_53015c;
        case 0x530160u: goto label_530160;
        case 0x530164u: goto label_530164;
        case 0x530168u: goto label_530168;
        case 0x53016cu: goto label_53016c;
        case 0x530170u: goto label_530170;
        case 0x530174u: goto label_530174;
        case 0x530178u: goto label_530178;
        case 0x53017cu: goto label_53017c;
        case 0x530180u: goto label_530180;
        case 0x530184u: goto label_530184;
        case 0x530188u: goto label_530188;
        case 0x53018cu: goto label_53018c;
        case 0x530190u: goto label_530190;
        case 0x530194u: goto label_530194;
        case 0x530198u: goto label_530198;
        case 0x53019cu: goto label_53019c;
        case 0x5301a0u: goto label_5301a0;
        case 0x5301a4u: goto label_5301a4;
        case 0x5301a8u: goto label_5301a8;
        case 0x5301acu: goto label_5301ac;
        case 0x5301b0u: goto label_5301b0;
        case 0x5301b4u: goto label_5301b4;
        case 0x5301b8u: goto label_5301b8;
        case 0x5301bcu: goto label_5301bc;
        case 0x5301c0u: goto label_5301c0;
        case 0x5301c4u: goto label_5301c4;
        case 0x5301c8u: goto label_5301c8;
        case 0x5301ccu: goto label_5301cc;
        case 0x5301d0u: goto label_5301d0;
        case 0x5301d4u: goto label_5301d4;
        case 0x5301d8u: goto label_5301d8;
        case 0x5301dcu: goto label_5301dc;
        case 0x5301e0u: goto label_5301e0;
        case 0x5301e4u: goto label_5301e4;
        case 0x5301e8u: goto label_5301e8;
        case 0x5301ecu: goto label_5301ec;
        case 0x5301f0u: goto label_5301f0;
        case 0x5301f4u: goto label_5301f4;
        case 0x5301f8u: goto label_5301f8;
        case 0x5301fcu: goto label_5301fc;
        case 0x530200u: goto label_530200;
        case 0x530204u: goto label_530204;
        case 0x530208u: goto label_530208;
        case 0x53020cu: goto label_53020c;
        case 0x530210u: goto label_530210;
        case 0x530214u: goto label_530214;
        case 0x530218u: goto label_530218;
        case 0x53021cu: goto label_53021c;
        case 0x530220u: goto label_530220;
        case 0x530224u: goto label_530224;
        case 0x530228u: goto label_530228;
        case 0x53022cu: goto label_53022c;
        case 0x530230u: goto label_530230;
        case 0x530234u: goto label_530234;
        case 0x530238u: goto label_530238;
        case 0x53023cu: goto label_53023c;
        case 0x530240u: goto label_530240;
        case 0x530244u: goto label_530244;
        case 0x530248u: goto label_530248;
        case 0x53024cu: goto label_53024c;
        case 0x530250u: goto label_530250;
        case 0x530254u: goto label_530254;
        case 0x530258u: goto label_530258;
        case 0x53025cu: goto label_53025c;
        case 0x530260u: goto label_530260;
        case 0x530264u: goto label_530264;
        case 0x530268u: goto label_530268;
        case 0x53026cu: goto label_53026c;
        case 0x530270u: goto label_530270;
        case 0x530274u: goto label_530274;
        case 0x530278u: goto label_530278;
        case 0x53027cu: goto label_53027c;
        case 0x530280u: goto label_530280;
        case 0x530284u: goto label_530284;
        case 0x530288u: goto label_530288;
        case 0x53028cu: goto label_53028c;
        case 0x530290u: goto label_530290;
        case 0x530294u: goto label_530294;
        case 0x530298u: goto label_530298;
        case 0x53029cu: goto label_53029c;
        case 0x5302a0u: goto label_5302a0;
        case 0x5302a4u: goto label_5302a4;
        case 0x5302a8u: goto label_5302a8;
        case 0x5302acu: goto label_5302ac;
        case 0x5302b0u: goto label_5302b0;
        case 0x5302b4u: goto label_5302b4;
        case 0x5302b8u: goto label_5302b8;
        case 0x5302bcu: goto label_5302bc;
        case 0x5302c0u: goto label_5302c0;
        case 0x5302c4u: goto label_5302c4;
        case 0x5302c8u: goto label_5302c8;
        case 0x5302ccu: goto label_5302cc;
        case 0x5302d0u: goto label_5302d0;
        case 0x5302d4u: goto label_5302d4;
        case 0x5302d8u: goto label_5302d8;
        case 0x5302dcu: goto label_5302dc;
        case 0x5302e0u: goto label_5302e0;
        case 0x5302e4u: goto label_5302e4;
        case 0x5302e8u: goto label_5302e8;
        case 0x5302ecu: goto label_5302ec;
        case 0x5302f0u: goto label_5302f0;
        case 0x5302f4u: goto label_5302f4;
        case 0x5302f8u: goto label_5302f8;
        case 0x5302fcu: goto label_5302fc;
        case 0x530300u: goto label_530300;
        case 0x530304u: goto label_530304;
        case 0x530308u: goto label_530308;
        case 0x53030cu: goto label_53030c;
        case 0x530310u: goto label_530310;
        case 0x530314u: goto label_530314;
        case 0x530318u: goto label_530318;
        case 0x53031cu: goto label_53031c;
        case 0x530320u: goto label_530320;
        case 0x530324u: goto label_530324;
        case 0x530328u: goto label_530328;
        case 0x53032cu: goto label_53032c;
        case 0x530330u: goto label_530330;
        case 0x530334u: goto label_530334;
        case 0x530338u: goto label_530338;
        case 0x53033cu: goto label_53033c;
        case 0x530340u: goto label_530340;
        case 0x530344u: goto label_530344;
        case 0x530348u: goto label_530348;
        case 0x53034cu: goto label_53034c;
        case 0x530350u: goto label_530350;
        case 0x530354u: goto label_530354;
        case 0x530358u: goto label_530358;
        case 0x53035cu: goto label_53035c;
        case 0x530360u: goto label_530360;
        case 0x530364u: goto label_530364;
        case 0x530368u: goto label_530368;
        case 0x53036cu: goto label_53036c;
        case 0x530370u: goto label_530370;
        case 0x530374u: goto label_530374;
        case 0x530378u: goto label_530378;
        case 0x53037cu: goto label_53037c;
        case 0x530380u: goto label_530380;
        case 0x530384u: goto label_530384;
        case 0x530388u: goto label_530388;
        case 0x53038cu: goto label_53038c;
        case 0x530390u: goto label_530390;
        case 0x530394u: goto label_530394;
        case 0x530398u: goto label_530398;
        case 0x53039cu: goto label_53039c;
        case 0x5303a0u: goto label_5303a0;
        case 0x5303a4u: goto label_5303a4;
        case 0x5303a8u: goto label_5303a8;
        case 0x5303acu: goto label_5303ac;
        case 0x5303b0u: goto label_5303b0;
        case 0x5303b4u: goto label_5303b4;
        case 0x5303b8u: goto label_5303b8;
        case 0x5303bcu: goto label_5303bc;
        case 0x5303c0u: goto label_5303c0;
        case 0x5303c4u: goto label_5303c4;
        case 0x5303c8u: goto label_5303c8;
        case 0x5303ccu: goto label_5303cc;
        case 0x5303d0u: goto label_5303d0;
        case 0x5303d4u: goto label_5303d4;
        case 0x5303d8u: goto label_5303d8;
        case 0x5303dcu: goto label_5303dc;
        case 0x5303e0u: goto label_5303e0;
        case 0x5303e4u: goto label_5303e4;
        case 0x5303e8u: goto label_5303e8;
        case 0x5303ecu: goto label_5303ec;
        case 0x5303f0u: goto label_5303f0;
        case 0x5303f4u: goto label_5303f4;
        case 0x5303f8u: goto label_5303f8;
        case 0x5303fcu: goto label_5303fc;
        case 0x530400u: goto label_530400;
        case 0x530404u: goto label_530404;
        case 0x530408u: goto label_530408;
        case 0x53040cu: goto label_53040c;
        case 0x530410u: goto label_530410;
        case 0x530414u: goto label_530414;
        case 0x530418u: goto label_530418;
        case 0x53041cu: goto label_53041c;
        case 0x530420u: goto label_530420;
        case 0x530424u: goto label_530424;
        case 0x530428u: goto label_530428;
        case 0x53042cu: goto label_53042c;
        case 0x530430u: goto label_530430;
        case 0x530434u: goto label_530434;
        case 0x530438u: goto label_530438;
        case 0x53043cu: goto label_53043c;
        case 0x530440u: goto label_530440;
        case 0x530444u: goto label_530444;
        case 0x530448u: goto label_530448;
        case 0x53044cu: goto label_53044c;
        case 0x530450u: goto label_530450;
        case 0x530454u: goto label_530454;
        case 0x530458u: goto label_530458;
        case 0x53045cu: goto label_53045c;
        case 0x530460u: goto label_530460;
        case 0x530464u: goto label_530464;
        case 0x530468u: goto label_530468;
        case 0x53046cu: goto label_53046c;
        case 0x530470u: goto label_530470;
        case 0x530474u: goto label_530474;
        case 0x530478u: goto label_530478;
        case 0x53047cu: goto label_53047c;
        case 0x530480u: goto label_530480;
        case 0x530484u: goto label_530484;
        case 0x530488u: goto label_530488;
        case 0x53048cu: goto label_53048c;
        case 0x530490u: goto label_530490;
        case 0x530494u: goto label_530494;
        case 0x530498u: goto label_530498;
        case 0x53049cu: goto label_53049c;
        case 0x5304a0u: goto label_5304a0;
        case 0x5304a4u: goto label_5304a4;
        case 0x5304a8u: goto label_5304a8;
        case 0x5304acu: goto label_5304ac;
        case 0x5304b0u: goto label_5304b0;
        case 0x5304b4u: goto label_5304b4;
        case 0x5304b8u: goto label_5304b8;
        case 0x5304bcu: goto label_5304bc;
        case 0x5304c0u: goto label_5304c0;
        case 0x5304c4u: goto label_5304c4;
        case 0x5304c8u: goto label_5304c8;
        case 0x5304ccu: goto label_5304cc;
        case 0x5304d0u: goto label_5304d0;
        case 0x5304d4u: goto label_5304d4;
        case 0x5304d8u: goto label_5304d8;
        case 0x5304dcu: goto label_5304dc;
        case 0x5304e0u: goto label_5304e0;
        case 0x5304e4u: goto label_5304e4;
        case 0x5304e8u: goto label_5304e8;
        case 0x5304ecu: goto label_5304ec;
        case 0x5304f0u: goto label_5304f0;
        case 0x5304f4u: goto label_5304f4;
        case 0x5304f8u: goto label_5304f8;
        case 0x5304fcu: goto label_5304fc;
        case 0x530500u: goto label_530500;
        case 0x530504u: goto label_530504;
        case 0x530508u: goto label_530508;
        case 0x53050cu: goto label_53050c;
        case 0x530510u: goto label_530510;
        case 0x530514u: goto label_530514;
        case 0x530518u: goto label_530518;
        case 0x53051cu: goto label_53051c;
        case 0x530520u: goto label_530520;
        case 0x530524u: goto label_530524;
        case 0x530528u: goto label_530528;
        case 0x53052cu: goto label_53052c;
        case 0x530530u: goto label_530530;
        case 0x530534u: goto label_530534;
        case 0x530538u: goto label_530538;
        case 0x53053cu: goto label_53053c;
        case 0x530540u: goto label_530540;
        case 0x530544u: goto label_530544;
        case 0x530548u: goto label_530548;
        case 0x53054cu: goto label_53054c;
        case 0x530550u: goto label_530550;
        case 0x530554u: goto label_530554;
        case 0x530558u: goto label_530558;
        case 0x53055cu: goto label_53055c;
        case 0x530560u: goto label_530560;
        case 0x530564u: goto label_530564;
        case 0x530568u: goto label_530568;
        case 0x53056cu: goto label_53056c;
        case 0x530570u: goto label_530570;
        case 0x530574u: goto label_530574;
        case 0x530578u: goto label_530578;
        case 0x53057cu: goto label_53057c;
        case 0x530580u: goto label_530580;
        case 0x530584u: goto label_530584;
        case 0x530588u: goto label_530588;
        case 0x53058cu: goto label_53058c;
        case 0x530590u: goto label_530590;
        case 0x530594u: goto label_530594;
        case 0x530598u: goto label_530598;
        case 0x53059cu: goto label_53059c;
        case 0x5305a0u: goto label_5305a0;
        case 0x5305a4u: goto label_5305a4;
        case 0x5305a8u: goto label_5305a8;
        case 0x5305acu: goto label_5305ac;
        case 0x5305b0u: goto label_5305b0;
        case 0x5305b4u: goto label_5305b4;
        case 0x5305b8u: goto label_5305b8;
        case 0x5305bcu: goto label_5305bc;
        case 0x5305c0u: goto label_5305c0;
        case 0x5305c4u: goto label_5305c4;
        case 0x5305c8u: goto label_5305c8;
        case 0x5305ccu: goto label_5305cc;
        case 0x5305d0u: goto label_5305d0;
        case 0x5305d4u: goto label_5305d4;
        case 0x5305d8u: goto label_5305d8;
        case 0x5305dcu: goto label_5305dc;
        case 0x5305e0u: goto label_5305e0;
        case 0x5305e4u: goto label_5305e4;
        case 0x5305e8u: goto label_5305e8;
        case 0x5305ecu: goto label_5305ec;
        case 0x5305f0u: goto label_5305f0;
        case 0x5305f4u: goto label_5305f4;
        case 0x5305f8u: goto label_5305f8;
        case 0x5305fcu: goto label_5305fc;
        case 0x530600u: goto label_530600;
        case 0x530604u: goto label_530604;
        case 0x530608u: goto label_530608;
        case 0x53060cu: goto label_53060c;
        case 0x530610u: goto label_530610;
        case 0x530614u: goto label_530614;
        case 0x530618u: goto label_530618;
        case 0x53061cu: goto label_53061c;
        case 0x530620u: goto label_530620;
        case 0x530624u: goto label_530624;
        case 0x530628u: goto label_530628;
        case 0x53062cu: goto label_53062c;
        case 0x530630u: goto label_530630;
        case 0x530634u: goto label_530634;
        case 0x530638u: goto label_530638;
        case 0x53063cu: goto label_53063c;
        case 0x530640u: goto label_530640;
        case 0x530644u: goto label_530644;
        case 0x530648u: goto label_530648;
        case 0x53064cu: goto label_53064c;
        case 0x530650u: goto label_530650;
        case 0x530654u: goto label_530654;
        case 0x530658u: goto label_530658;
        case 0x53065cu: goto label_53065c;
        case 0x530660u: goto label_530660;
        case 0x530664u: goto label_530664;
        case 0x530668u: goto label_530668;
        case 0x53066cu: goto label_53066c;
        case 0x530670u: goto label_530670;
        case 0x530674u: goto label_530674;
        case 0x530678u: goto label_530678;
        case 0x53067cu: goto label_53067c;
        case 0x530680u: goto label_530680;
        case 0x530684u: goto label_530684;
        case 0x530688u: goto label_530688;
        case 0x53068cu: goto label_53068c;
        case 0x530690u: goto label_530690;
        case 0x530694u: goto label_530694;
        case 0x530698u: goto label_530698;
        case 0x53069cu: goto label_53069c;
        case 0x5306a0u: goto label_5306a0;
        case 0x5306a4u: goto label_5306a4;
        case 0x5306a8u: goto label_5306a8;
        case 0x5306acu: goto label_5306ac;
        case 0x5306b0u: goto label_5306b0;
        case 0x5306b4u: goto label_5306b4;
        case 0x5306b8u: goto label_5306b8;
        case 0x5306bcu: goto label_5306bc;
        case 0x5306c0u: goto label_5306c0;
        case 0x5306c4u: goto label_5306c4;
        case 0x5306c8u: goto label_5306c8;
        case 0x5306ccu: goto label_5306cc;
        case 0x5306d0u: goto label_5306d0;
        case 0x5306d4u: goto label_5306d4;
        case 0x5306d8u: goto label_5306d8;
        case 0x5306dcu: goto label_5306dc;
        case 0x5306e0u: goto label_5306e0;
        case 0x5306e4u: goto label_5306e4;
        case 0x5306e8u: goto label_5306e8;
        case 0x5306ecu: goto label_5306ec;
        case 0x5306f0u: goto label_5306f0;
        case 0x5306f4u: goto label_5306f4;
        case 0x5306f8u: goto label_5306f8;
        case 0x5306fcu: goto label_5306fc;
        case 0x530700u: goto label_530700;
        case 0x530704u: goto label_530704;
        case 0x530708u: goto label_530708;
        case 0x53070cu: goto label_53070c;
        case 0x530710u: goto label_530710;
        case 0x530714u: goto label_530714;
        case 0x530718u: goto label_530718;
        case 0x53071cu: goto label_53071c;
        case 0x530720u: goto label_530720;
        case 0x530724u: goto label_530724;
        case 0x530728u: goto label_530728;
        case 0x53072cu: goto label_53072c;
        case 0x530730u: goto label_530730;
        case 0x530734u: goto label_530734;
        case 0x530738u: goto label_530738;
        case 0x53073cu: goto label_53073c;
        case 0x530740u: goto label_530740;
        case 0x530744u: goto label_530744;
        case 0x530748u: goto label_530748;
        case 0x53074cu: goto label_53074c;
        case 0x530750u: goto label_530750;
        case 0x530754u: goto label_530754;
        case 0x530758u: goto label_530758;
        case 0x53075cu: goto label_53075c;
        case 0x530760u: goto label_530760;
        case 0x530764u: goto label_530764;
        case 0x530768u: goto label_530768;
        case 0x53076cu: goto label_53076c;
        case 0x530770u: goto label_530770;
        case 0x530774u: goto label_530774;
        case 0x530778u: goto label_530778;
        case 0x53077cu: goto label_53077c;
        case 0x530780u: goto label_530780;
        case 0x530784u: goto label_530784;
        case 0x530788u: goto label_530788;
        case 0x53078cu: goto label_53078c;
        case 0x530790u: goto label_530790;
        case 0x530794u: goto label_530794;
        case 0x530798u: goto label_530798;
        case 0x53079cu: goto label_53079c;
        case 0x5307a0u: goto label_5307a0;
        case 0x5307a4u: goto label_5307a4;
        case 0x5307a8u: goto label_5307a8;
        case 0x5307acu: goto label_5307ac;
        case 0x5307b0u: goto label_5307b0;
        case 0x5307b4u: goto label_5307b4;
        case 0x5307b8u: goto label_5307b8;
        case 0x5307bcu: goto label_5307bc;
        case 0x5307c0u: goto label_5307c0;
        case 0x5307c4u: goto label_5307c4;
        case 0x5307c8u: goto label_5307c8;
        case 0x5307ccu: goto label_5307cc;
        case 0x5307d0u: goto label_5307d0;
        case 0x5307d4u: goto label_5307d4;
        case 0x5307d8u: goto label_5307d8;
        case 0x5307dcu: goto label_5307dc;
        case 0x5307e0u: goto label_5307e0;
        case 0x5307e4u: goto label_5307e4;
        case 0x5307e8u: goto label_5307e8;
        case 0x5307ecu: goto label_5307ec;
        case 0x5307f0u: goto label_5307f0;
        case 0x5307f4u: goto label_5307f4;
        case 0x5307f8u: goto label_5307f8;
        case 0x5307fcu: goto label_5307fc;
        default: break;
    }

    ctx->pc = 0x52fe30u;

label_52fe30:
    // 0x52fe30: 0x3e00008  jr          $ra
label_52fe34:
    if (ctx->pc == 0x52FE34u) {
        ctx->pc = 0x52FE34u;
            // 0x52fe34: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x52FE38u;
        goto label_52fe38;
    }
    ctx->pc = 0x52FE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52FE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FE30u;
            // 0x52fe34: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52FE38u;
label_52fe38:
    // 0x52fe38: 0x0  nop
    ctx->pc = 0x52fe38u;
    // NOP
label_52fe3c:
    // 0x52fe3c: 0x0  nop
    ctx->pc = 0x52fe3cu;
    // NOP
label_52fe40:
    // 0x52fe40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52fe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_52fe44:
    // 0x52fe44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52fe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52fe48:
    // 0x52fe48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52fe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52fe4c:
    // 0x52fe4c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x52fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_52fe50:
    // 0x52fe50: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_52fe54:
    if (ctx->pc == 0x52FE54u) {
        ctx->pc = 0x52FE54u;
            // 0x52fe54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FE58u;
        goto label_52fe58;
    }
    ctx->pc = 0x52FE50u;
    {
        const bool branch_taken_0x52fe50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x52FE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FE50u;
            // 0x52fe54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52fe50) {
            ctx->pc = 0x52FF70u;
            goto label_52ff70;
        }
    }
    ctx->pc = 0x52FE58u;
label_52fe58:
    // 0x52fe58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x52fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_52fe5c:
    // 0x52fe5c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x52fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_52fe60:
    // 0x52fe60: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x52fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_52fe64:
    // 0x52fe64: 0xc075128  jal         func_1D44A0
label_52fe68:
    if (ctx->pc == 0x52FE68u) {
        ctx->pc = 0x52FE68u;
            // 0x52fe68: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x52FE6Cu;
        goto label_52fe6c;
    }
    ctx->pc = 0x52FE64u;
    SET_GPR_U32(ctx, 31, 0x52FE6Cu);
    ctx->pc = 0x52FE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FE64u;
            // 0x52fe68: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FE6Cu; }
        if (ctx->pc != 0x52FE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FE6Cu; }
        if (ctx->pc != 0x52FE6Cu) { return; }
    }
    ctx->pc = 0x52FE6Cu;
label_52fe6c:
    // 0x52fe6c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x52fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52fe70:
    // 0x52fe70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52fe74:
    // 0x52fe74: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x52fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_52fe78:
    // 0x52fe78: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x52fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_52fe7c:
    // 0x52fe7c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x52fe7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52fe80:
    // 0x52fe80: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52fe84:
    if (ctx->pc == 0x52FE84u) {
        ctx->pc = 0x52FE84u;
            // 0x52fe84: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x52FE88u;
        goto label_52fe88;
    }
    ctx->pc = 0x52FE80u;
    {
        const bool branch_taken_0x52fe80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x52FE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FE80u;
            // 0x52fe84: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52fe80) {
            ctx->pc = 0x52FE90u;
            goto label_52fe90;
        }
    }
    ctx->pc = 0x52FE88u;
label_52fe88:
    // 0x52fe88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52fe8c:
    // 0x52fe8c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x52fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_52fe90:
    // 0x52fe90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x52fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52fe94:
    // 0x52fe94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52fe98:
    // 0x52fe98: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x52fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_52fe9c:
    // 0x52fe9c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x52fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_52fea0:
    // 0x52fea0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x52fea0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52fea4:
    // 0x52fea4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52fea8:
    if (ctx->pc == 0x52FEA8u) {
        ctx->pc = 0x52FEA8u;
            // 0x52fea8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x52FEACu;
        goto label_52feac;
    }
    ctx->pc = 0x52FEA4u;
    {
        const bool branch_taken_0x52fea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52fea4) {
            ctx->pc = 0x52FEA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52FEA4u;
            // 0x52fea8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52FEB8u;
            goto label_52feb8;
        }
    }
    ctx->pc = 0x52FEACu;
label_52feac:
    // 0x52feac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52feacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52feb0:
    // 0x52feb0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x52feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_52feb4:
    // 0x52feb4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x52feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52feb8:
    // 0x52feb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52febc:
    // 0x52febc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x52febcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_52fec0:
    // 0x52fec0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x52fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_52fec4:
    // 0x52fec4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x52fec4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52fec8:
    // 0x52fec8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52fecc:
    if (ctx->pc == 0x52FECCu) {
        ctx->pc = 0x52FECCu;
            // 0x52fecc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x52FED0u;
        goto label_52fed0;
    }
    ctx->pc = 0x52FEC8u;
    {
        const bool branch_taken_0x52fec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52fec8) {
            ctx->pc = 0x52FECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52FEC8u;
            // 0x52fecc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52FEDCu;
            goto label_52fedc;
        }
    }
    ctx->pc = 0x52FED0u;
label_52fed0:
    // 0x52fed0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52fed4:
    // 0x52fed4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x52fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_52fed8:
    // 0x52fed8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x52fed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_52fedc:
    // 0x52fedc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x52fedcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_52fee0:
    // 0x52fee0: 0x320f809  jalr        $t9
label_52fee4:
    if (ctx->pc == 0x52FEE4u) {
        ctx->pc = 0x52FEE4u;
            // 0x52fee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FEE8u;
        goto label_52fee8;
    }
    ctx->pc = 0x52FEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52FEE8u);
        ctx->pc = 0x52FEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FEE0u;
            // 0x52fee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52FEE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52FEE8u; }
            if (ctx->pc != 0x52FEE8u) { return; }
        }
        }
    }
    ctx->pc = 0x52FEE8u;
label_52fee8:
    // 0x52fee8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x52fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52feec:
    // 0x52feec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52feecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52fef0:
    // 0x52fef0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x52fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_52fef4:
    // 0x52fef4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x52fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_52fef8:
    // 0x52fef8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x52fef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_52fefc:
    // 0x52fefc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x52fefcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_52ff00:
    // 0x52ff00: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52ff04:
    if (ctx->pc == 0x52FF04u) {
        ctx->pc = 0x52FF04u;
            // 0x52ff04: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x52FF08u;
        goto label_52ff08;
    }
    ctx->pc = 0x52FF00u;
    {
        const bool branch_taken_0x52ff00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ff00) {
            ctx->pc = 0x52FF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52FF00u;
            // 0x52ff04: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52FF14u;
            goto label_52ff14;
        }
    }
    ctx->pc = 0x52FF08u;
label_52ff08:
    // 0x52ff08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52ff0c:
    // 0x52ff0c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x52ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_52ff10:
    // 0x52ff10: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x52ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52ff14:
    // 0x52ff14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52ff18:
    // 0x52ff18: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x52ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_52ff1c:
    // 0x52ff1c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x52ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_52ff20:
    // 0x52ff20: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x52ff20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_52ff24:
    // 0x52ff24: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x52ff24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_52ff28:
    // 0x52ff28: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52ff2c:
    if (ctx->pc == 0x52FF2Cu) {
        ctx->pc = 0x52FF30u;
        goto label_52ff30;
    }
    ctx->pc = 0x52FF28u;
    {
        const bool branch_taken_0x52ff28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ff28) {
            ctx->pc = 0x52FF38u;
            goto label_52ff38;
        }
    }
    ctx->pc = 0x52FF30u;
label_52ff30:
    // 0x52ff30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52ff34:
    // 0x52ff34: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x52ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_52ff38:
    // 0x52ff38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52ff3c:
    // 0x52ff3c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x52ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_52ff40:
    // 0x52ff40: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x52ff40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_52ff44:
    // 0x52ff44: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52ff48:
    if (ctx->pc == 0x52FF48u) {
        ctx->pc = 0x52FF4Cu;
        goto label_52ff4c;
    }
    ctx->pc = 0x52FF44u;
    {
        const bool branch_taken_0x52ff44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ff44) {
            ctx->pc = 0x52FF54u;
            goto label_52ff54;
        }
    }
    ctx->pc = 0x52FF4Cu;
label_52ff4c:
    // 0x52ff4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52ff50:
    // 0x52ff50: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x52ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_52ff54:
    // 0x52ff54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52ff58:
    // 0x52ff58: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x52ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_52ff5c:
    // 0x52ff5c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x52ff5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_52ff60:
    // 0x52ff60: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52ff64:
    if (ctx->pc == 0x52FF64u) {
        ctx->pc = 0x52FF64u;
            // 0x52ff64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x52FF68u;
        goto label_52ff68;
    }
    ctx->pc = 0x52FF60u;
    {
        const bool branch_taken_0x52ff60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ff60) {
            ctx->pc = 0x52FF64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52FF60u;
            // 0x52ff64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52FF74u;
            goto label_52ff74;
        }
    }
    ctx->pc = 0x52FF68u;
label_52ff68:
    // 0x52ff68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52ff6c:
    // 0x52ff6c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x52ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_52ff70:
    // 0x52ff70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52ff70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52ff74:
    // 0x52ff74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52ff74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52ff78:
    // 0x52ff78: 0x3e00008  jr          $ra
label_52ff7c:
    if (ctx->pc == 0x52FF7Cu) {
        ctx->pc = 0x52FF7Cu;
            // 0x52ff7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52FF80u;
        goto label_52ff80;
    }
    ctx->pc = 0x52FF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52FF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FF78u;
            // 0x52ff7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52FF80u;
label_52ff80:
    // 0x52ff80: 0x814bcc8  j           func_52F320
label_52ff84:
    if (ctx->pc == 0x52FF84u) {
        ctx->pc = 0x52FF84u;
            // 0x52ff84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x52FF88u;
        goto label_52ff88;
    }
    ctx->pc = 0x52FF80u;
    ctx->pc = 0x52FF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FF80u;
            // 0x52ff84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52F320u;
    {
        auto targetFn = runtime->lookupFunction(0x52F320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x52FF88u;
label_52ff88:
    // 0x52ff88: 0x0  nop
    ctx->pc = 0x52ff88u;
    // NOP
label_52ff8c:
    // 0x52ff8c: 0x0  nop
    ctx->pc = 0x52ff8cu;
    // NOP
label_52ff90:
    // 0x52ff90: 0x814bb08  j           func_52EC20
label_52ff94:
    if (ctx->pc == 0x52FF94u) {
        ctx->pc = 0x52FF94u;
            // 0x52ff94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x52FF98u;
        goto label_52ff98;
    }
    ctx->pc = 0x52FF90u;
    ctx->pc = 0x52FF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FF90u;
            // 0x52ff94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52EC20u;
    if (runtime->hasFunction(0x52EC20u)) {
        auto targetFn = runtime->lookupFunction(0x52EC20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0052EC20_0x52ec20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x52FF98u;
label_52ff98:
    // 0x52ff98: 0x0  nop
    ctx->pc = 0x52ff98u;
    // NOP
label_52ff9c:
    // 0x52ff9c: 0x0  nop
    ctx->pc = 0x52ff9cu;
    // NOP
label_52ffa0:
    // 0x52ffa0: 0x814bae4  j           func_52EB90
label_52ffa4:
    if (ctx->pc == 0x52FFA4u) {
        ctx->pc = 0x52FFA4u;
            // 0x52ffa4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x52FFA8u;
        goto label_52ffa8;
    }
    ctx->pc = 0x52FFA0u;
    ctx->pc = 0x52FFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FFA0u;
            // 0x52ffa4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52EB90u;
    {
        auto targetFn = runtime->lookupFunction(0x52EB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x52FFA8u;
label_52ffa8:
    // 0x52ffa8: 0x0  nop
    ctx->pc = 0x52ffa8u;
    // NOP
label_52ffac:
    // 0x52ffac: 0x0  nop
    ctx->pc = 0x52ffacu;
    // NOP
label_52ffb0:
    // 0x52ffb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x52ffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_52ffb4:
    // 0x52ffb4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x52ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_52ffb8:
    // 0x52ffb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x52ffb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_52ffbc:
    // 0x52ffbc: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x52ffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_52ffc0:
    // 0x52ffc0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x52ffc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_52ffc4:
    // 0x52ffc4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x52ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_52ffc8:
    // 0x52ffc8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x52ffc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_52ffcc:
    // 0x52ffcc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x52ffccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_52ffd0:
    // 0x52ffd0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x52ffd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_52ffd4:
    // 0x52ffd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x52ffd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52ffd8:
    // 0x52ffd8: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x52ffd8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_52ffdc:
    // 0x52ffdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52ffe0:
    // 0x52ffe0: 0x26b5ce00  addiu       $s5, $s5, -0x3200
    ctx->pc = 0x52ffe0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954496));
label_52ffe4:
    // 0x52ffe4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52ffe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52ffe8:
    // 0x52ffe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52ffe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52ffec:
    // 0x52ffec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52ffecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52fff0:
    // 0x52fff0: 0x8c7e0e80  lw          $fp, 0xE80($v1)
    ctx->pc = 0x52fff0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_52fff4:
    // 0x52fff4: 0x8c840eac  lw          $a0, 0xEAC($a0)
    ctx->pc = 0x52fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3756)));
label_52fff8:
    // 0x52fff8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x52fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_52fffc:
    // 0x52fffc: 0x8463cf20  lh          $v1, -0x30E0($v1)
    ctx->pc = 0x52fffcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294954784)));
label_530000:
    // 0x530000: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x530000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
label_530004:
    // 0x530004: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x530004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_530008:
    // 0x530008: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x530008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_53000c:
    // 0x53000c: 0x84a3cf22  lh          $v1, -0x30DE($a1)
    ctx->pc = 0x53000cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294954786)));
label_530010:
    // 0x530010: 0x8fc50cb4  lw          $a1, 0xCB4($fp)
    ctx->pc = 0x530010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3252)));
label_530014:
    // 0x530014: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x530014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_530018:
    // 0x530018: 0x14a4008f  bne         $a1, $a0, . + 4 + (0x8F << 2)
label_53001c:
    if (ctx->pc == 0x53001Cu) {
        ctx->pc = 0x53001Cu;
            // 0x53001c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x530020u;
        goto label_530020;
    }
    ctx->pc = 0x530018u;
    {
        const bool branch_taken_0x530018 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x53001Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530018u;
            // 0x53001c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x530018) {
            ctx->pc = 0x530258u;
            goto label_530258;
        }
    }
    ctx->pc = 0x530020u;
label_530020:
    // 0x530020: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x530020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_530024:
    // 0x530024: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x530024u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_530028:
    // 0x530028: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x530028u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53002c:
    // 0x53002c: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x53002cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
label_530030:
    // 0x530030: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x530030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_530034:
    // 0x530034: 0x8c840da0  lw          $a0, 0xDA0($a0)
    ctx->pc = 0x530034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_530038:
    // 0x530038: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x530038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_53003c:
    // 0x53003c: 0x14800078  bnez        $a0, . + 4 + (0x78 << 2)
label_530040:
    if (ctx->pc == 0x530040u) {
        ctx->pc = 0x530044u;
        goto label_530044;
    }
    ctx->pc = 0x53003Cu;
    {
        const bool branch_taken_0x53003c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x53003c) {
            ctx->pc = 0x530220u;
            goto label_530220;
        }
    }
    ctx->pc = 0x530044u;
label_530044:
    // 0x530044: 0x8fc40ccc  lw          $a0, 0xCCC($fp)
    ctx->pc = 0x530044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3276)));
label_530048:
    // 0x530048: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x530048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53004c:
    // 0x53004c: 0x2862804  sllv        $a1, $a2, $s4
    ctx->pc = 0x53004cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 20) & 0x1F));
label_530050:
    // 0x530050: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x530050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_530054:
    // 0x530054: 0x10800072  beqz        $a0, . + 4 + (0x72 << 2)
label_530058:
    if (ctx->pc == 0x530058u) {
        ctx->pc = 0x53005Cu;
        goto label_53005c;
    }
    ctx->pc = 0x530054u;
    {
        const bool branch_taken_0x530054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x530054) {
            ctx->pc = 0x530220u;
            goto label_530220;
        }
    }
    ctx->pc = 0x53005Cu;
label_53005c:
    // 0x53005c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x53005cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_530060:
    // 0x530060: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x530060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_530064:
    // 0x530064: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x530064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_530068:
    // 0x530068: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x530068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_53006c:
    // 0x53006c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x53006cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_530070:
    // 0x530070: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
label_530074:
    if (ctx->pc == 0x530074u) {
        ctx->pc = 0x530074u;
            // 0x530074: 0x26470094  addiu       $a3, $s2, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
        ctx->pc = 0x530078u;
        goto label_530078;
    }
    ctx->pc = 0x530070u;
    {
        const bool branch_taken_0x530070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x530074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530070u;
            // 0x530074: 0x26470094  addiu       $a3, $s2, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x530070) {
            ctx->pc = 0x5300C8u;
            goto label_5300c8;
        }
    }
    ctx->pc = 0x530078u;
label_530078:
    // 0x530078: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x530078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53007c:
    // 0x53007c: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
label_530080:
    if (ctx->pc == 0x530080u) {
        ctx->pc = 0x530084u;
        goto label_530084;
    }
    ctx->pc = 0x53007Cu;
    {
        const bool branch_taken_0x53007c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x53007c) {
            ctx->pc = 0x5300C8u;
            goto label_5300c8;
        }
    }
    ctx->pc = 0x530084u;
label_530084:
    // 0x530084: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x530084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_530088:
    // 0x530088: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_53008c:
    if (ctx->pc == 0x53008Cu) {
        ctx->pc = 0x530090u;
        goto label_530090;
    }
    ctx->pc = 0x530088u;
    {
        const bool branch_taken_0x530088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x530088) {
            ctx->pc = 0x5300B0u;
            goto label_5300b0;
        }
    }
    ctx->pc = 0x530090u;
label_530090:
    // 0x530090: 0x10860003  beq         $a0, $a2, . + 4 + (0x3 << 2)
label_530094:
    if (ctx->pc == 0x530094u) {
        ctx->pc = 0x530098u;
        goto label_530098;
    }
    ctx->pc = 0x530090u;
    {
        const bool branch_taken_0x530090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x530090) {
            ctx->pc = 0x5300A0u;
            goto label_5300a0;
        }
    }
    ctx->pc = 0x530098u;
label_530098:
    // 0x530098: 0x1000000f  b           . + 4 + (0xF << 2)
label_53009c:
    if (ctx->pc == 0x53009Cu) {
        ctx->pc = 0x5300A0u;
        goto label_5300a0;
    }
    ctx->pc = 0x530098u;
    {
        const bool branch_taken_0x530098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x530098) {
            ctx->pc = 0x5300D8u;
            goto label_5300d8;
        }
    }
    ctx->pc = 0x5300A0u;
label_5300a0:
    // 0x5300a0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x5300a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_5300a4:
    // 0x5300a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x5300a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_5300a8:
    // 0x5300a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_5300ac:
    if (ctx->pc == 0x5300ACu) {
        ctx->pc = 0x5300B0u;
        goto label_5300b0;
    }
    ctx->pc = 0x5300A8u;
    {
        const bool branch_taken_0x5300a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5300a8) {
            ctx->pc = 0x5300D8u;
            goto label_5300d8;
        }
    }
    ctx->pc = 0x5300B0u;
label_5300b0:
    // 0x5300b0: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x5300b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
label_5300b4:
    // 0x5300b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x5300b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_5300b8:
    // 0x5300b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x5300b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_5300bc:
    // 0x5300bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_5300c0:
    if (ctx->pc == 0x5300C0u) {
        ctx->pc = 0x5300C4u;
        goto label_5300c4;
    }
    ctx->pc = 0x5300BCu;
    {
        const bool branch_taken_0x5300bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5300bc) {
            ctx->pc = 0x5300D8u;
            goto label_5300d8;
        }
    }
    ctx->pc = 0x5300C4u;
label_5300c4:
    // 0x5300c4: 0x0  nop
    ctx->pc = 0x5300c4u;
    // NOP
label_5300c8:
    // 0x5300c8: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x5300c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
label_5300cc:
    // 0x5300cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x5300ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_5300d0:
    // 0x5300d0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x5300d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_5300d4:
    // 0x5300d4: 0x0  nop
    ctx->pc = 0x5300d4u;
    // NOP
label_5300d8:
    // 0x5300d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x5300d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_5300dc:
    // 0x5300dc: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x5300dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5300e0:
    // 0x5300e0: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x5300e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_5300e4:
    // 0x5300e4: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x5300e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_5300e8:
    // 0x5300e8: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x5300e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_5300ec:
    // 0x5300ec: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x5300ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5300f0:
    // 0x5300f0: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x5300f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_5300f4:
    // 0x5300f4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x5300f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_5300f8:
    // 0x5300f8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x5300f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_5300fc:
    // 0x5300fc: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x5300fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_530100:
    // 0x530100: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x530100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_530104:
    // 0x530104: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x530104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_530108:
    // 0x530108: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x530108u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_53010c:
    // 0x53010c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x53010cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_530110:
    // 0x530110: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x530110u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_530114:
    // 0x530114: 0x0  nop
    ctx->pc = 0x530114u;
    // NOP
label_530118:
    // 0x530118: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x530118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_53011c:
    // 0x53011c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x53011cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_530120:
    // 0x530120: 0x0  nop
    ctx->pc = 0x530120u;
    // NOP
label_530124:
    // 0x530124: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x530124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_530128:
    // 0x530128: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x530128u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_53012c:
    // 0x53012c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x53012cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_530130:
    // 0x530130: 0x44111000  mfc1        $s1, $f2
    ctx->pc = 0x530130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_530134:
    // 0x530134: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x530134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_530138:
    // 0x530138: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x530138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_53013c:
    // 0x53013c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x53013cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_530140:
    // 0x530140: 0x0  nop
    ctx->pc = 0x530140u;
    // NOP
label_530144:
    // 0x530144: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x530144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_530148:
    // 0x530148: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x530148u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53014c:
    // 0x53014c: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x53014cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_530150:
    // 0x530150: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x530150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_530154:
    // 0x530154: 0x460428dc  madd.s      $f3, $f5, $f4
    ctx->pc = 0x530154u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_530158:
    // 0x530158: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x530158u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_53015c:
    // 0x53015c: 0x4601281c  madd.s      $f0, $f5, $f1
    ctx->pc = 0x53015cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_530160:
    // 0x530160: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x530160u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_530164:
    // 0x530164: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x530164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_530168:
    // 0x530168: 0x44160800  mfc1        $s6, $f1
    ctx->pc = 0x530168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_53016c:
    // 0x53016c: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x53016cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_530170:
    // 0x530170: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_530174:
    if (ctx->pc == 0x530174u) {
        ctx->pc = 0x530178u;
        goto label_530178;
    }
    ctx->pc = 0x530170u;
    {
        const bool branch_taken_0x530170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x530170) {
            ctx->pc = 0x5301A0u;
            goto label_5301a0;
        }
    }
    ctx->pc = 0x530178u;
label_530178:
    // 0x530178: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x530178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53017c:
    // 0x53017c: 0x8c447c30  lw          $a0, 0x7C30($v0)
    ctx->pc = 0x53017cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31792)));
label_530180:
    // 0x530180: 0xc0506ac  jal         func_141AB0
label_530184:
    if (ctx->pc == 0x530184u) {
        ctx->pc = 0x530184u;
            // 0x530184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x530188u;
        goto label_530188;
    }
    ctx->pc = 0x530180u;
    SET_GPR_U32(ctx, 31, 0x530188u);
    ctx->pc = 0x530184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530180u;
            // 0x530184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530188u; }
        if (ctx->pc != 0x530188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530188u; }
        if (ctx->pc != 0x530188u) { return; }
    }
    ctx->pc = 0x530188u;
label_530188:
    // 0x530188: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x530188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_53018c:
    // 0x53018c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x53018cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_530190:
    // 0x530190: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x530190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_530194:
    // 0x530194: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x530194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_530198:
    // 0x530198: 0x320f809  jalr        $t9
label_53019c:
    if (ctx->pc == 0x53019Cu) {
        ctx->pc = 0x53019Cu;
            // 0x53019c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5301A0u;
        goto label_5301a0;
    }
    ctx->pc = 0x530198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5301A0u);
        ctx->pc = 0x53019Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530198u;
            // 0x53019c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5301A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5301A0u; }
            if (ctx->pc != 0x5301A0u) { return; }
        }
        }
    }
    ctx->pc = 0x5301A0u;
label_5301a0:
    // 0x5301a0: 0x2d11823  subu        $v1, $s6, $s1
    ctx->pc = 0x5301a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_5301a4:
    // 0x5301a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5301a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5301a8:
    // 0x5301a8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x5301a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_5301ac:
    // 0x5301ac: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x5301acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_5301b0:
    // 0x5301b0: 0x2f05023  subu        $t2, $s7, $s0
    ctx->pc = 0x5301b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_5301b4:
    // 0x5301b4: 0x2d14821  addu        $t1, $s6, $s1
    ctx->pc = 0x5301b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_5301b8:
    // 0x5301b8: 0x2f04021  addu        $t0, $s7, $s0
    ctx->pc = 0x5301b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_5301bc:
    // 0x5301bc: 0x90440116  lbu         $a0, 0x116($v0)
    ctx->pc = 0x5301bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_5301c0:
    // 0x5301c0: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x5301c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_5301c4:
    // 0x5301c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x5301c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5301c8:
    // 0x5301c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5301c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5301cc:
    // 0x5301cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5301ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5301d0:
    // 0x5301d0: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x5301d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_5301d4:
    // 0x5301d4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x5301d4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5301d8:
    // 0x5301d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5301d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5301dc:
    // 0x5301dc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5301dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_5301e0:
    // 0x5301e0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x5301e0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5301e4:
    // 0x5301e4: 0x0  nop
    ctx->pc = 0x5301e4u;
    // NOP
label_5301e8:
    // 0x5301e8: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x5301e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_5301ec:
    // 0x5301ec: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x5301ecu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5301f0:
    // 0x5301f0: 0x0  nop
    ctx->pc = 0x5301f0u;
    // NOP
label_5301f4:
    // 0x5301f4: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x5301f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_5301f8:
    // 0x5301f8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5301f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5301fc:
    // 0x5301fc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x5301fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_530200:
    // 0x530200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x530200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_530204:
    // 0x530204: 0x0  nop
    ctx->pc = 0x530204u;
    // NOP
label_530208:
    // 0x530208: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x530208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_53020c:
    // 0x53020c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x53020cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_530210:
    // 0x530210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x530210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_530214:
    // 0x530214: 0xc0bc284  jal         func_2F0A10
label_530218:
    if (ctx->pc == 0x530218u) {
        ctx->pc = 0x530218u;
            // 0x530218: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x53021Cu;
        goto label_53021c;
    }
    ctx->pc = 0x530214u;
    SET_GPR_U32(ctx, 31, 0x53021Cu);
    ctx->pc = 0x530218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530214u;
            // 0x530218: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53021Cu; }
        if (ctx->pc != 0x53021Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53021Cu; }
        if (ctx->pc != 0x53021Cu) { return; }
    }
    ctx->pc = 0x53021Cu;
label_53021c:
    // 0x53021c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x53021cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_530220:
    // 0x530220: 0x8fc40780  lw          $a0, 0x780($fp)
    ctx->pc = 0x530220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1920)));
label_530224:
    // 0x530224: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x530224u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_530228:
    // 0x530228: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x530228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_53022c:
    // 0x53022c: 0x284202a  slt         $a0, $s4, $a0
    ctx->pc = 0x53022cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_530230:
    // 0x530230: 0x1480ff7f  bnez        $a0, . + 4 + (-0x81 << 2)
label_530234:
    if (ctx->pc == 0x530234u) {
        ctx->pc = 0x530234u;
            // 0x530234: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x530238u;
        goto label_530238;
    }
    ctx->pc = 0x530230u;
    {
        const bool branch_taken_0x530230 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x530234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530230u;
            // 0x530234: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x530230) {
            ctx->pc = 0x530030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_530030;
        }
    }
    ctx->pc = 0x530238u;
label_530238:
    // 0x530238: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_53023c:
    if (ctx->pc == 0x53023Cu) {
        ctx->pc = 0x53023Cu;
            // 0x53023c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x530240u;
        goto label_530240;
    }
    ctx->pc = 0x530238u;
    {
        const bool branch_taken_0x530238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x530238) {
            ctx->pc = 0x53023Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530238u;
            // 0x53023c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53025Cu;
            goto label_53025c;
        }
    }
    ctx->pc = 0x530240u;
label_530240:
    // 0x530240: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x530240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_530244:
    // 0x530244: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x530244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_530248:
    // 0x530248: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x530248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53024c:
    // 0x53024c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x53024cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_530250:
    // 0x530250: 0x320f809  jalr        $t9
label_530254:
    if (ctx->pc == 0x530254u) {
        ctx->pc = 0x530258u;
        goto label_530258;
    }
    ctx->pc = 0x530250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x530258u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x530258u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x530258u; }
            if (ctx->pc != 0x530258u) { return; }
        }
        }
    }
    ctx->pc = 0x530258u;
label_530258:
    // 0x530258: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x530258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_53025c:
    // 0x53025c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x53025cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_530260:
    // 0x530260: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x530260u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_530264:
    // 0x530264: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x530264u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_530268:
    // 0x530268: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x530268u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_53026c:
    // 0x53026c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x53026cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_530270:
    // 0x530270: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x530270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_530274:
    // 0x530274: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x530274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_530278:
    // 0x530278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x530278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53027c:
    // 0x53027c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53027cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_530280:
    // 0x530280: 0x3e00008  jr          $ra
label_530284:
    if (ctx->pc == 0x530284u) {
        ctx->pc = 0x530284u;
            // 0x530284: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x530288u;
        goto label_530288;
    }
    ctx->pc = 0x530280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x530284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530280u;
            // 0x530284: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x530288u;
label_530288:
    // 0x530288: 0x0  nop
    ctx->pc = 0x530288u;
    // NOP
label_53028c:
    // 0x53028c: 0x0  nop
    ctx->pc = 0x53028cu;
    // NOP
label_530290:
    // 0x530290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x530290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_530294:
    // 0x530294: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x530294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_530298:
    // 0x530298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x530298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_53029c:
    // 0x53029c: 0x8c670e80  lw          $a3, 0xE80($v1)
    ctx->pc = 0x53029cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5302a0:
    // 0x5302a0: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x5302a0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_5302a4:
    // 0x5302a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5302a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5302a8:
    // 0x5302a8: 0x10c30019  beq         $a2, $v1, . + 4 + (0x19 << 2)
label_5302ac:
    if (ctx->pc == 0x5302ACu) {
        ctx->pc = 0x5302ACu;
            // 0x5302ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5302B0u;
        goto label_5302b0;
    }
    ctx->pc = 0x5302A8u;
    {
        const bool branch_taken_0x5302a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x5302ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5302A8u;
            // 0x5302ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5302a8) {
            ctx->pc = 0x530310u;
            goto label_530310;
        }
    }
    ctx->pc = 0x5302B0u;
label_5302b0:
    // 0x5302b0: 0x50c00012  beql        $a2, $zero, . + 4 + (0x12 << 2)
label_5302b4:
    if (ctx->pc == 0x5302B4u) {
        ctx->pc = 0x5302B4u;
            // 0x5302b4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x5302B8u;
        goto label_5302b8;
    }
    ctx->pc = 0x5302B0u;
    {
        const bool branch_taken_0x5302b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x5302b0) {
            ctx->pc = 0x5302B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5302B0u;
            // 0x5302b4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5302FCu;
            goto label_5302fc;
        }
    }
    ctx->pc = 0x5302B8u;
label_5302b8:
    // 0x5302b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5302b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5302bc:
    // 0x5302bc: 0x50c30019  beql        $a2, $v1, . + 4 + (0x19 << 2)
label_5302c0:
    if (ctx->pc == 0x5302C0u) {
        ctx->pc = 0x5302C0u;
            // 0x5302c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x5302C4u;
        goto label_5302c4;
    }
    ctx->pc = 0x5302BCu;
    {
        const bool branch_taken_0x5302bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x5302bc) {
            ctx->pc = 0x5302C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5302BCu;
            // 0x5302c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530324u;
            goto label_530324;
        }
    }
    ctx->pc = 0x5302C4u;
label_5302c4:
    // 0x5302c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5302c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5302c8:
    // 0x5302c8: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_5302cc:
    if (ctx->pc == 0x5302CCu) {
        ctx->pc = 0x5302CCu;
            // 0x5302cc: 0x8ce30cb4  lw          $v1, 0xCB4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
        ctx->pc = 0x5302D0u;
        goto label_5302d0;
    }
    ctx->pc = 0x5302C8u;
    {
        const bool branch_taken_0x5302c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x5302c8) {
            ctx->pc = 0x5302CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5302C8u;
            // 0x5302cc: 0x8ce30cb4  lw          $v1, 0xCB4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5302D8u;
            goto label_5302d8;
        }
    }
    ctx->pc = 0x5302D0u;
label_5302d0:
    // 0x5302d0: 0x10000013  b           . + 4 + (0x13 << 2)
label_5302d4:
    if (ctx->pc == 0x5302D4u) {
        ctx->pc = 0x5302D8u;
        goto label_5302d8;
    }
    ctx->pc = 0x5302D0u;
    {
        const bool branch_taken_0x5302d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5302d0) {
            ctx->pc = 0x530320u;
            goto label_530320;
        }
    }
    ctx->pc = 0x5302D8u;
label_5302d8:
    // 0x5302d8: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x5302d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_5302dc:
    // 0x5302dc: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_5302e0:
    if (ctx->pc == 0x5302E0u) {
        ctx->pc = 0x5302E4u;
        goto label_5302e4;
    }
    ctx->pc = 0x5302DCu;
    {
        const bool branch_taken_0x5302dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5302dc) {
            ctx->pc = 0x530320u;
            goto label_530320;
        }
    }
    ctx->pc = 0x5302E4u;
label_5302e4:
    // 0x5302e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5302e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5302e8:
    // 0x5302e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x5302e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_5302ec:
    // 0x5302ec: 0x320f809  jalr        $t9
label_5302f0:
    if (ctx->pc == 0x5302F0u) {
        ctx->pc = 0x5302F4u;
        goto label_5302f4;
    }
    ctx->pc = 0x5302ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5302F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5302F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5302F4u; }
            if (ctx->pc != 0x5302F4u) { return; }
        }
        }
    }
    ctx->pc = 0x5302F4u;
label_5302f4:
    // 0x5302f4: 0x1000000a  b           . + 4 + (0xA << 2)
label_5302f8:
    if (ctx->pc == 0x5302F8u) {
        ctx->pc = 0x5302FCu;
        goto label_5302fc;
    }
    ctx->pc = 0x5302F4u;
    {
        const bool branch_taken_0x5302f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5302f4) {
            ctx->pc = 0x530320u;
            goto label_530320;
        }
    }
    ctx->pc = 0x5302FCu;
label_5302fc:
    // 0x5302fc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x5302fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_530300:
    // 0x530300: 0x320f809  jalr        $t9
label_530304:
    if (ctx->pc == 0x530304u) {
        ctx->pc = 0x530308u;
        goto label_530308;
    }
    ctx->pc = 0x530300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x530308u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x530308u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x530308u; }
            if (ctx->pc != 0x530308u) { return; }
        }
        }
    }
    ctx->pc = 0x530308u;
label_530308:
    // 0x530308: 0x10000005  b           . + 4 + (0x5 << 2)
label_53030c:
    if (ctx->pc == 0x53030Cu) {
        ctx->pc = 0x530310u;
        goto label_530310;
    }
    ctx->pc = 0x530308u;
    {
        const bool branch_taken_0x530308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x530308) {
            ctx->pc = 0x530320u;
            goto label_530320;
        }
    }
    ctx->pc = 0x530310u;
label_530310:
    // 0x530310: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x530310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_530314:
    // 0x530314: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x530314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_530318:
    // 0x530318: 0xc057b7c  jal         func_15EDF0
label_53031c:
    if (ctx->pc == 0x53031Cu) {
        ctx->pc = 0x53031Cu;
            // 0x53031c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x530320u;
        goto label_530320;
    }
    ctx->pc = 0x530318u;
    SET_GPR_U32(ctx, 31, 0x530320u);
    ctx->pc = 0x53031Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530318u;
            // 0x53031c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530320u; }
        if (ctx->pc != 0x530320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530320u; }
        if (ctx->pc != 0x530320u) { return; }
    }
    ctx->pc = 0x530320u;
label_530320:
    // 0x530320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x530320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_530324:
    // 0x530324: 0x3e00008  jr          $ra
label_530328:
    if (ctx->pc == 0x530328u) {
        ctx->pc = 0x530328u;
            // 0x530328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x53032Cu;
        goto label_53032c;
    }
    ctx->pc = 0x530324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x530328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530324u;
            // 0x530328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53032Cu;
label_53032c:
    // 0x53032c: 0x0  nop
    ctx->pc = 0x53032cu;
    // NOP
label_530330:
    // 0x530330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x530330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_530334:
    // 0x530334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x530334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_530338:
    // 0x530338: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x530338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_53033c:
    // 0x53033c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_530340:
    // 0x530340: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x530340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_530344:
    // 0x530344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x530344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_530348:
    // 0x530348: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x530348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_53034c:
    // 0x53034c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x53034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_530350:
    // 0x530350: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x530350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_530354:
    // 0x530354: 0x2484fa80  addiu       $a0, $a0, -0x580
    ctx->pc = 0x530354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965888));
label_530358:
    // 0x530358: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x530358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_53035c:
    // 0x53035c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x53035cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_530360:
    // 0x530360: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x530360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_530364:
    // 0x530364: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x530364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_530368:
    // 0x530368: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x530368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_53036c:
    // 0x53036c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x53036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_530370:
    // 0x530370: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x530370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_530374:
    // 0x530374: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x530374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_530378:
    // 0x530378: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x530378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_53037c:
    // 0x53037c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x53037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_530380:
    // 0x530380: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x530380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_530384:
    // 0x530384: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x530384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_530388:
    // 0x530388: 0xc075128  jal         func_1D44A0
label_53038c:
    if (ctx->pc == 0x53038Cu) {
        ctx->pc = 0x53038Cu;
            // 0x53038c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x530390u;
        goto label_530390;
    }
    ctx->pc = 0x530388u;
    SET_GPR_U32(ctx, 31, 0x530390u);
    ctx->pc = 0x53038Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530388u;
            // 0x53038c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530390u; }
        if (ctx->pc != 0x530390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530390u; }
        if (ctx->pc != 0x530390u) { return; }
    }
    ctx->pc = 0x530390u;
label_530390:
    // 0x530390: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x530390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_530394:
    // 0x530394: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x530394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_530398:
    // 0x530398: 0x8c86fa80  lw          $a2, -0x580($a0)
    ctx->pc = 0x530398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965888)));
label_53039c:
    // 0x53039c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x53039cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_5303a0:
    // 0x5303a0: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x5303a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_5303a4:
    // 0x5303a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x5303a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_5303a8:
    // 0x5303a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5303ac:
    if (ctx->pc == 0x5303ACu) {
        ctx->pc = 0x5303B0u;
        goto label_5303b0;
    }
    ctx->pc = 0x5303A8u;
    {
        const bool branch_taken_0x5303a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5303a8) {
            ctx->pc = 0x5303B8u;
            goto label_5303b8;
        }
    }
    ctx->pc = 0x5303B0u;
label_5303b0:
    // 0x5303b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5303b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5303b4:
    // 0x5303b4: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x5303b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_5303b8:
    // 0x5303b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5303b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5303bc:
    // 0x5303bc: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x5303bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_5303c0:
    // 0x5303c0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x5303c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_5303c4:
    // 0x5303c4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x5303c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_5303c8:
    // 0x5303c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5303cc:
    if (ctx->pc == 0x5303CCu) {
        ctx->pc = 0x5303CCu;
            // 0x5303cc: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x5303D0u;
        goto label_5303d0;
    }
    ctx->pc = 0x5303C8u;
    {
        const bool branch_taken_0x5303c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5303CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5303C8u;
            // 0x5303cc: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5303c8) {
            ctx->pc = 0x5303D8u;
            goto label_5303d8;
        }
    }
    ctx->pc = 0x5303D0u;
label_5303d0:
    // 0x5303d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5303d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5303d4:
    // 0x5303d4: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x5303d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_5303d8:
    // 0x5303d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5303d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5303dc:
    // 0x5303dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x5303dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_5303e0:
    // 0x5303e0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x5303e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_5303e4:
    // 0x5303e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x5303e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_5303e8:
    // 0x5303e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5303ec:
    if (ctx->pc == 0x5303ECu) {
        ctx->pc = 0x5303F0u;
        goto label_5303f0;
    }
    ctx->pc = 0x5303E8u;
    {
        const bool branch_taken_0x5303e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5303e8) {
            ctx->pc = 0x5303F8u;
            goto label_5303f8;
        }
    }
    ctx->pc = 0x5303F0u;
label_5303f0:
    // 0x5303f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5303f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5303f4:
    // 0x5303f4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x5303f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_5303f8:
    // 0x5303f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5303f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5303fc:
    // 0x5303fc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x5303fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_530400:
    // 0x530400: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x530400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_530404:
    // 0x530404: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x530404u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_530408:
    // 0x530408: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_53040c:
    if (ctx->pc == 0x53040Cu) {
        ctx->pc = 0x530410u;
        goto label_530410;
    }
    ctx->pc = 0x530408u;
    {
        const bool branch_taken_0x530408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x530408) {
            ctx->pc = 0x530418u;
            goto label_530418;
        }
    }
    ctx->pc = 0x530410u;
label_530410:
    // 0x530410: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x530410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_530414:
    // 0x530414: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x530414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_530418:
    // 0x530418: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x530418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_53041c:
    // 0x53041c: 0x8c63f590  lw          $v1, -0xA70($v1)
    ctx->pc = 0x53041cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964624)));
label_530420:
    // 0x530420: 0x54600036  bnel        $v1, $zero, . + 4 + (0x36 << 2)
label_530424:
    if (ctx->pc == 0x530424u) {
        ctx->pc = 0x530424u;
            // 0x530424: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x530428u;
        goto label_530428;
    }
    ctx->pc = 0x530420u;
    {
        const bool branch_taken_0x530420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x530420) {
            ctx->pc = 0x530424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530420u;
            // 0x530424: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5304FCu;
            goto label_5304fc;
        }
    }
    ctx->pc = 0x530428u;
label_530428:
    // 0x530428: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x530428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_53042c:
    // 0x53042c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x53042cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_530430:
    // 0x530430: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x530430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_530434:
    // 0x530434: 0x2484f590  addiu       $a0, $a0, -0xA70
    ctx->pc = 0x530434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964624));
label_530438:
    // 0x530438: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x530438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_53043c:
    // 0x53043c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x53043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_530440:
    // 0x530440: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x530440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_530444:
    // 0x530444: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x530444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_530448:
    // 0x530448: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x530448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_53044c:
    // 0x53044c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x53044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_530450:
    // 0x530450: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x530450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_530454:
    // 0x530454: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x530454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_530458:
    // 0x530458: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x530458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_53045c:
    // 0x53045c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x53045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_530460:
    // 0x530460: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x530460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_530464:
    // 0x530464: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x530464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_530468:
    // 0x530468: 0xc075128  jal         func_1D44A0
label_53046c:
    if (ctx->pc == 0x53046Cu) {
        ctx->pc = 0x53046Cu;
            // 0x53046c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x530470u;
        goto label_530470;
    }
    ctx->pc = 0x530468u;
    SET_GPR_U32(ctx, 31, 0x530470u);
    ctx->pc = 0x53046Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530468u;
            // 0x53046c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530470u; }
        if (ctx->pc != 0x530470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530470u; }
        if (ctx->pc != 0x530470u) { return; }
    }
    ctx->pc = 0x530470u;
label_530470:
    // 0x530470: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x530470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_530474:
    // 0x530474: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x530474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_530478:
    // 0x530478: 0x8c86f590  lw          $a2, -0xA70($a0)
    ctx->pc = 0x530478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964624)));
label_53047c:
    // 0x53047c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x53047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_530480:
    // 0x530480: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x530480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_530484:
    // 0x530484: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x530484u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_530488:
    // 0x530488: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_53048c:
    if (ctx->pc == 0x53048Cu) {
        ctx->pc = 0x530490u;
        goto label_530490;
    }
    ctx->pc = 0x530488u;
    {
        const bool branch_taken_0x530488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x530488) {
            ctx->pc = 0x530498u;
            goto label_530498;
        }
    }
    ctx->pc = 0x530490u;
label_530490:
    // 0x530490: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x530490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_530494:
    // 0x530494: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x530494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_530498:
    // 0x530498: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x530498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53049c:
    // 0x53049c: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x53049cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_5304a0:
    // 0x5304a0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x5304a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_5304a4:
    // 0x5304a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x5304a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_5304a8:
    // 0x5304a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5304ac:
    if (ctx->pc == 0x5304ACu) {
        ctx->pc = 0x5304ACu;
            // 0x5304ac: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x5304B0u;
        goto label_5304b0;
    }
    ctx->pc = 0x5304A8u;
    {
        const bool branch_taken_0x5304a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5304ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5304A8u;
            // 0x5304ac: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5304a8) {
            ctx->pc = 0x5304B8u;
            goto label_5304b8;
        }
    }
    ctx->pc = 0x5304B0u;
label_5304b0:
    // 0x5304b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5304b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5304b4:
    // 0x5304b4: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x5304b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_5304b8:
    // 0x5304b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5304b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5304bc:
    // 0x5304bc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x5304bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_5304c0:
    // 0x5304c0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x5304c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_5304c4:
    // 0x5304c4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x5304c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_5304c8:
    // 0x5304c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5304cc:
    if (ctx->pc == 0x5304CCu) {
        ctx->pc = 0x5304D0u;
        goto label_5304d0;
    }
    ctx->pc = 0x5304C8u;
    {
        const bool branch_taken_0x5304c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5304c8) {
            ctx->pc = 0x5304D8u;
            goto label_5304d8;
        }
    }
    ctx->pc = 0x5304D0u;
label_5304d0:
    // 0x5304d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5304d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5304d4:
    // 0x5304d4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x5304d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_5304d8:
    // 0x5304d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5304d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5304dc:
    // 0x5304dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x5304dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_5304e0:
    // 0x5304e0: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x5304e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_5304e4:
    // 0x5304e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x5304e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_5304e8:
    // 0x5304e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5304ec:
    if (ctx->pc == 0x5304ECu) {
        ctx->pc = 0x5304F0u;
        goto label_5304f0;
    }
    ctx->pc = 0x5304E8u;
    {
        const bool branch_taken_0x5304e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5304e8) {
            ctx->pc = 0x5304F8u;
            goto label_5304f8;
        }
    }
    ctx->pc = 0x5304F0u;
label_5304f0:
    // 0x5304f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5304f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5304f4:
    // 0x5304f4: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x5304f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_5304f8:
    // 0x5304f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5304f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5304fc:
    // 0x5304fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5304fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_530500:
    // 0x530500: 0x3e00008  jr          $ra
label_530504:
    if (ctx->pc == 0x530504u) {
        ctx->pc = 0x530504u;
            // 0x530504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x530508u;
        goto label_530508;
    }
    ctx->pc = 0x530500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x530504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530500u;
            // 0x530504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x530508u;
label_530508:
    // 0x530508: 0x0  nop
    ctx->pc = 0x530508u;
    // NOP
label_53050c:
    // 0x53050c: 0x0  nop
    ctx->pc = 0x53050cu;
    // NOP
label_530510:
    // 0x530510: 0x3e00008  jr          $ra
label_530514:
    if (ctx->pc == 0x530514u) {
        ctx->pc = 0x530518u;
        goto label_530518;
    }
    ctx->pc = 0x530510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x530518u;
label_530518:
    // 0x530518: 0x0  nop
    ctx->pc = 0x530518u;
    // NOP
label_53051c:
    // 0x53051c: 0x0  nop
    ctx->pc = 0x53051cu;
    // NOP
label_530520:
    // 0x530520: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x530520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_530524:
    // 0x530524: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x530524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_530528:
    // 0x530528: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x530528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_53052c:
    // 0x53052c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53052cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_530530:
    // 0x530530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x530530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_530534:
    // 0x530534: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x530534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_530538:
    // 0x530538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x530538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53053c:
    // 0x53053c: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x53053cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_530540:
    // 0x530540: 0x8e230e30  lw          $v1, 0xE30($s1)
    ctx->pc = 0x530540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3632)));
label_530544:
    // 0x530544: 0x5060003f  beql        $v1, $zero, . + 4 + (0x3F << 2)
label_530548:
    if (ctx->pc == 0x530548u) {
        ctx->pc = 0x530548u;
            // 0x530548: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x53054Cu;
        goto label_53054c;
    }
    ctx->pc = 0x530544u;
    {
        const bool branch_taken_0x530544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x530544) {
            ctx->pc = 0x530548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530544u;
            // 0x530548: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530644u;
            goto label_530644;
        }
    }
    ctx->pc = 0x53054Cu;
label_53054c:
    // 0x53054c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53054cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_530550:
    // 0x530550: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x530550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_530554:
    // 0x530554: 0x8c53e370  lw          $s3, -0x1C90($v0)
    ctx->pc = 0x530554u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_530558:
    // 0x530558: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x530558u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_53055c:
    // 0x53055c: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x53055cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_530560:
    // 0x530560: 0x2610fa80  addiu       $s0, $s0, -0x580
    ctx->pc = 0x530560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965888));
label_530564:
    // 0x530564: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x530564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_530568:
    // 0x530568: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x530568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_53056c:
    // 0x53056c: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x53056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_530570:
    // 0x530570: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x530570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_530574:
    // 0x530574: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x530574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_530578:
    // 0x530578: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x530578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_53057c:
    // 0x53057c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x53057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_530580:
    // 0x530580: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x530580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_530584:
    // 0x530584: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x530584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_530588:
    // 0x530588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x530588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53058c:
    // 0x53058c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x53058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_530590:
    // 0x530590: 0x320f809  jalr        $t9
label_530594:
    if (ctx->pc == 0x530594u) {
        ctx->pc = 0x530594u;
            // 0x530594: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x530598u;
        goto label_530598;
    }
    ctx->pc = 0x530590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x530598u);
        ctx->pc = 0x530594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530590u;
            // 0x530594: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x530598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x530598u; }
            if (ctx->pc != 0x530598u) { return; }
        }
        }
    }
    ctx->pc = 0x530598u;
label_530598:
    // 0x530598: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x530598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_53059c:
    // 0x53059c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x53059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_5305a0:
    // 0x5305a0: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x5305a0u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
label_5305a4:
    // 0x5305a4: 0xc04f3fc  jal         func_13CFF0
label_5305a8:
    if (ctx->pc == 0x5305A8u) {
        ctx->pc = 0x5305A8u;
            // 0x5305a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5305ACu;
        goto label_5305ac;
    }
    ctx->pc = 0x5305A4u;
    SET_GPR_U32(ctx, 31, 0x5305ACu);
    ctx->pc = 0x5305A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5305A4u;
            // 0x5305a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5305ACu; }
        if (ctx->pc != 0x5305ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5305ACu; }
        if (ctx->pc != 0x5305ACu) { return; }
    }
    ctx->pc = 0x5305ACu;
label_5305ac:
    // 0x5305ac: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x5305acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_5305b0:
    // 0x5305b0: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x5305b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_5305b4:
    // 0x5305b4: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
label_5305b8:
    if (ctx->pc == 0x5305B8u) {
        ctx->pc = 0x5305BCu;
        goto label_5305bc;
    }
    ctx->pc = 0x5305B4u;
    {
        const bool branch_taken_0x5305b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x5305b4) {
            ctx->pc = 0x530640u;
            goto label_530640;
        }
    }
    ctx->pc = 0x5305BCu;
label_5305bc:
    // 0x5305bc: 0x92220e3d  lbu         $v0, 0xE3D($s1)
    ctx->pc = 0x5305bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3645)));
label_5305c0:
    // 0x5305c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5305c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5305c4:
    // 0x5305c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x5305c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_5305c8:
    // 0x5305c8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x5305c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_5305cc:
    // 0x5305cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x5305ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_5305d0:
    // 0x5305d0: 0xc04cd60  jal         func_133580
label_5305d4:
    if (ctx->pc == 0x5305D4u) {
        ctx->pc = 0x5305D4u;
            // 0x5305d4: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x5305D8u;
        goto label_5305d8;
    }
    ctx->pc = 0x5305D0u;
    SET_GPR_U32(ctx, 31, 0x5305D8u);
    ctx->pc = 0x5305D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5305D0u;
            // 0x5305d4: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5305D8u; }
        if (ctx->pc != 0x5305D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5305D8u; }
        if (ctx->pc != 0x5305D8u) { return; }
    }
    ctx->pc = 0x5305D8u;
label_5305d8:
    // 0x5305d8: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x5305d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5305dc:
    // 0x5305dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x5305dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5305e0:
    // 0x5305e0: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x5305e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_5305e4:
    // 0x5305e4: 0xc054bbc  jal         func_152EF0
label_5305e8:
    if (ctx->pc == 0x5305E8u) {
        ctx->pc = 0x5305E8u;
            // 0x5305e8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x5305ECu;
        goto label_5305ec;
    }
    ctx->pc = 0x5305E4u;
    SET_GPR_U32(ctx, 31, 0x5305ECu);
    ctx->pc = 0x5305E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5305E4u;
            // 0x5305e8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5305ECu; }
        if (ctx->pc != 0x5305ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5305ECu; }
        if (ctx->pc != 0x5305ECu) { return; }
    }
    ctx->pc = 0x5305ECu;
label_5305ec:
    // 0x5305ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x5305ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5305f0:
    // 0x5305f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x5305f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5305f4:
    // 0x5305f4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x5305f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_5305f8:
    // 0x5305f8: 0xc04e4a4  jal         func_139290
label_5305fc:
    if (ctx->pc == 0x5305FCu) {
        ctx->pc = 0x5305FCu;
            // 0x5305fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x530600u;
        goto label_530600;
    }
    ctx->pc = 0x5305F8u;
    SET_GPR_U32(ctx, 31, 0x530600u);
    ctx->pc = 0x5305FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5305F8u;
            // 0x5305fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530600u; }
        if (ctx->pc != 0x530600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530600u; }
        if (ctx->pc != 0x530600u) { return; }
    }
    ctx->pc = 0x530600u;
label_530600:
    // 0x530600: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x530600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_530604:
    // 0x530604: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x530604u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_530608:
    // 0x530608: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x530608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53060c:
    // 0x53060c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x53060cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_530610:
    // 0x530610: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x530610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_530614:
    // 0x530614: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x530614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_530618:
    // 0x530618: 0xc04cfcc  jal         func_133F30
label_53061c:
    if (ctx->pc == 0x53061Cu) {
        ctx->pc = 0x53061Cu;
            // 0x53061c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x530620u;
        goto label_530620;
    }
    ctx->pc = 0x530618u;
    SET_GPR_U32(ctx, 31, 0x530620u);
    ctx->pc = 0x53061Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530618u;
            // 0x53061c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530620u; }
        if (ctx->pc != 0x530620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530620u; }
        if (ctx->pc != 0x530620u) { return; }
    }
    ctx->pc = 0x530620u;
label_530620:
    // 0x530620: 0xc04e738  jal         func_139CE0
label_530624:
    if (ctx->pc == 0x530624u) {
        ctx->pc = 0x530624u;
            // 0x530624: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x530628u;
        goto label_530628;
    }
    ctx->pc = 0x530620u;
    SET_GPR_U32(ctx, 31, 0x530628u);
    ctx->pc = 0x530624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530620u;
            // 0x530624: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530628u; }
        if (ctx->pc != 0x530628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530628u; }
        if (ctx->pc != 0x530628u) { return; }
    }
    ctx->pc = 0x530628u;
label_530628:
    // 0x530628: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x530628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_53062c:
    // 0x53062c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x53062cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_530630:
    // 0x530630: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x530630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_530634:
    // 0x530634: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x530634u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_530638:
    // 0x530638: 0xc054c2c  jal         func_1530B0
label_53063c:
    if (ctx->pc == 0x53063Cu) {
        ctx->pc = 0x53063Cu;
            // 0x53063c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x530640u;
        goto label_530640;
    }
    ctx->pc = 0x530638u;
    SET_GPR_U32(ctx, 31, 0x530640u);
    ctx->pc = 0x53063Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530638u;
            // 0x53063c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530640u; }
        if (ctx->pc != 0x530640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530640u; }
        if (ctx->pc != 0x530640u) { return; }
    }
    ctx->pc = 0x530640u;
label_530640:
    // 0x530640: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x530640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_530644:
    // 0x530644: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x530644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_530648:
    // 0x530648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x530648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53064c:
    // 0x53064c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53064cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_530650:
    // 0x530650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x530650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_530654:
    // 0x530654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x530654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_530658:
    // 0x530658: 0x3e00008  jr          $ra
label_53065c:
    if (ctx->pc == 0x53065Cu) {
        ctx->pc = 0x53065Cu;
            // 0x53065c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x530660u;
        goto label_530660;
    }
    ctx->pc = 0x530658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53065Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530658u;
            // 0x53065c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x530660u;
label_530660:
    // 0x530660: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x530660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_530664:
    // 0x530664: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x530664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_530668:
    // 0x530668: 0xc440cf80  lwc1        $f0, -0x3080($v0)
    ctx->pc = 0x530668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53066c:
    // 0x53066c: 0x3e00008  jr          $ra
label_530670:
    if (ctx->pc == 0x530670u) {
        ctx->pc = 0x530670u;
            // 0x530670: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x530674u;
        goto label_530674;
    }
    ctx->pc = 0x53066Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x530670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53066Cu;
            // 0x530670: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x530674u;
label_530674:
    // 0x530674: 0x0  nop
    ctx->pc = 0x530674u;
    // NOP
label_530678:
    // 0x530678: 0x0  nop
    ctx->pc = 0x530678u;
    // NOP
label_53067c:
    // 0x53067c: 0x0  nop
    ctx->pc = 0x53067cu;
    // NOP
label_530680:
    // 0x530680: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x530680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_530684:
    // 0x530684: 0x8c630e30  lw          $v1, 0xE30($v1)
    ctx->pc = 0x530684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3632)));
label_530688:
    // 0x530688: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_53068c:
    if (ctx->pc == 0x53068Cu) {
        ctx->pc = 0x530690u;
        goto label_530690;
    }
    ctx->pc = 0x530688u;
    {
        const bool branch_taken_0x530688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x530688) {
            ctx->pc = 0x5306C8u;
            goto label_5306c8;
        }
    }
    ctx->pc = 0x530690u;
label_530690:
    // 0x530690: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x530690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_530694:
    // 0x530694: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x530694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_530698:
    // 0x530698: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x530698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_53069c:
    // 0x53069c: 0x24a5fa80  addiu       $a1, $a1, -0x580
    ctx->pc = 0x53069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965888));
label_5306a0:
    // 0x5306a0: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x5306a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5306a4:
    // 0x5306a4: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x5306a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5306a8:
    // 0x5306a8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x5306a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_5306ac:
    // 0x5306ac: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x5306acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5306b0:
    // 0x5306b0: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x5306b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_5306b4:
    // 0x5306b4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x5306b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5306b8:
    // 0x5306b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5306b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5306bc:
    // 0x5306bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_5306c0:
    if (ctx->pc == 0x5306C0u) {
        ctx->pc = 0x5306C4u;
        goto label_5306c4;
    }
    ctx->pc = 0x5306BCu;
    {
        const bool branch_taken_0x5306bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5306bc) {
            ctx->pc = 0x5306C8u;
            goto label_5306c8;
        }
    }
    ctx->pc = 0x5306C4u;
label_5306c4:
    // 0x5306c4: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x5306c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_5306c8:
    // 0x5306c8: 0x3e00008  jr          $ra
label_5306cc:
    if (ctx->pc == 0x5306CCu) {
        ctx->pc = 0x5306D0u;
        goto label_5306d0;
    }
    ctx->pc = 0x5306C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5306D0u;
label_5306d0:
    // 0x5306d0: 0x3e00008  jr          $ra
label_5306d4:
    if (ctx->pc == 0x5306D4u) {
        ctx->pc = 0x5306D8u;
        goto label_5306d8;
    }
    ctx->pc = 0x5306D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5306D8u;
label_5306d8:
    // 0x5306d8: 0x0  nop
    ctx->pc = 0x5306d8u;
    // NOP
label_5306dc:
    // 0x5306dc: 0x0  nop
    ctx->pc = 0x5306dcu;
    // NOP
label_5306e0:
    // 0x5306e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5306e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_5306e4:
    // 0x5306e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5306e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5306e8:
    // 0x5306e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5306e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_5306ec:
    // 0x5306ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5306ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5306f0:
    // 0x5306f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5306f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5306f4:
    // 0x5306f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5306f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5306f8:
    // 0x5306f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5306f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5306fc:
    // 0x5306fc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x5306fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_530700:
    // 0x530700: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x530700u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_530704:
    // 0x530704: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x530704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_530708:
    // 0x530708: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_53070c:
    if (ctx->pc == 0x53070Cu) {
        ctx->pc = 0x53070Cu;
            // 0x53070c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x530710u;
        goto label_530710;
    }
    ctx->pc = 0x530708u;
    {
        const bool branch_taken_0x530708 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x53070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530708u;
            // 0x53070c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x530708) {
            ctx->pc = 0x530720u;
            goto label_530720;
        }
    }
    ctx->pc = 0x530710u;
label_530710:
    // 0x530710: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x530710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_530714:
    // 0x530714: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_530718:
    if (ctx->pc == 0x530718u) {
        ctx->pc = 0x53071Cu;
        goto label_53071c;
    }
    ctx->pc = 0x530714u;
    {
        const bool branch_taken_0x530714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x530714) {
            ctx->pc = 0x530720u;
            goto label_530720;
        }
    }
    ctx->pc = 0x53071Cu;
label_53071c:
    // 0x53071c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x53071cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_530720:
    // 0x530720: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_530724:
    if (ctx->pc == 0x530724u) {
        ctx->pc = 0x530728u;
        goto label_530728;
    }
    ctx->pc = 0x530720u;
    {
        const bool branch_taken_0x530720 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x530720) {
            ctx->pc = 0x53073Cu;
            goto label_53073c;
        }
    }
    ctx->pc = 0x530728u;
label_530728:
    // 0x530728: 0xc075eb4  jal         func_1D7AD0
label_53072c:
    if (ctx->pc == 0x53072Cu) {
        ctx->pc = 0x530730u;
        goto label_530730;
    }
    ctx->pc = 0x530728u;
    SET_GPR_U32(ctx, 31, 0x530730u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530730u; }
        if (ctx->pc != 0x530730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530730u; }
        if (ctx->pc != 0x530730u) { return; }
    }
    ctx->pc = 0x530730u;
label_530730:
    // 0x530730: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_530734:
    if (ctx->pc == 0x530734u) {
        ctx->pc = 0x530738u;
        goto label_530738;
    }
    ctx->pc = 0x530730u;
    {
        const bool branch_taken_0x530730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x530730) {
            ctx->pc = 0x53073Cu;
            goto label_53073c;
        }
    }
    ctx->pc = 0x530738u;
label_530738:
    // 0x530738: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x530738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53073c:
    // 0x53073c: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_530740:
    if (ctx->pc == 0x530740u) {
        ctx->pc = 0x530744u;
        goto label_530744;
    }
    ctx->pc = 0x53073Cu;
    {
        const bool branch_taken_0x53073c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x53073c) {
            ctx->pc = 0x53075Cu;
            goto label_53075c;
        }
    }
    ctx->pc = 0x530744u;
label_530744:
    // 0x530744: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x530744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_530748:
    // 0x530748: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x530748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_53074c:
    // 0x53074c: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x53074cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_530750:
    // 0x530750: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_530754:
    if (ctx->pc == 0x530754u) {
        ctx->pc = 0x530758u;
        goto label_530758;
    }
    ctx->pc = 0x530750u;
    {
        const bool branch_taken_0x530750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530750) {
            ctx->pc = 0x53075Cu;
            goto label_53075c;
        }
    }
    ctx->pc = 0x530758u;
label_530758:
    // 0x530758: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x530758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53075c:
    // 0x53075c: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_530760:
    if (ctx->pc == 0x530760u) {
        ctx->pc = 0x530760u;
            // 0x530760: 0x8e2300a4  lw          $v1, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->pc = 0x530764u;
        goto label_530764;
    }
    ctx->pc = 0x53075Cu;
    {
        const bool branch_taken_0x53075c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53075c) {
            ctx->pc = 0x530760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53075Cu;
            // 0x530760: 0x8e2300a4  lw          $v1, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530794u;
            goto label_530794;
        }
    }
    ctx->pc = 0x530764u;
label_530764:
    // 0x530764: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x530764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_530768:
    // 0x530768: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x530768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_53076c:
    // 0x53076c: 0x8c640d60  lw          $a0, 0xD60($v1)
    ctx->pc = 0x53076cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3424)));
label_530770:
    // 0x530770: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x530770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_530774:
    // 0x530774: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x530774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_530778:
    // 0x530778: 0x320f809  jalr        $t9
label_53077c:
    if (ctx->pc == 0x53077Cu) {
        ctx->pc = 0x53077Cu;
            // 0x53077c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x530780u;
        goto label_530780;
    }
    ctx->pc = 0x530778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x530780u);
        ctx->pc = 0x53077Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530778u;
            // 0x53077c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x530780u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x530780u; }
            if (ctx->pc != 0x530780u) { return; }
        }
        }
    }
    ctx->pc = 0x530780u;
label_530780:
    // 0x530780: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x530780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_530784:
    // 0x530784: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x530784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_530788:
    // 0x530788: 0xc12ca3c  jal         func_4B28F0
label_53078c:
    if (ctx->pc == 0x53078Cu) {
        ctx->pc = 0x53078Cu;
            // 0x53078c: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x530790u;
        goto label_530790;
    }
    ctx->pc = 0x530788u;
    SET_GPR_U32(ctx, 31, 0x530790u);
    ctx->pc = 0x53078Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530788u;
            // 0x53078c: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530790u; }
        if (ctx->pc != 0x530790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530790u; }
        if (ctx->pc != 0x530790u) { return; }
    }
    ctx->pc = 0x530790u;
label_530790:
    // 0x530790: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x530790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_530794:
    // 0x530794: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_530798:
    if (ctx->pc == 0x530798u) {
        ctx->pc = 0x530798u;
            // 0x530798: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x53079Cu;
        goto label_53079c;
    }
    ctx->pc = 0x530794u;
    {
        const bool branch_taken_0x530794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x530794) {
            ctx->pc = 0x530798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530794u;
            // 0x530798: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5307E8u;
            goto label_5307e8;
        }
    }
    ctx->pc = 0x53079Cu;
label_53079c:
    // 0x53079c: 0xc040180  jal         func_100600
label_5307a0:
    if (ctx->pc == 0x5307A0u) {
        ctx->pc = 0x5307A0u;
            // 0x5307a0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x5307A4u;
        goto label_5307a4;
    }
    ctx->pc = 0x53079Cu;
    SET_GPR_U32(ctx, 31, 0x5307A4u);
    ctx->pc = 0x5307A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53079Cu;
            // 0x5307a0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5307A4u; }
        if (ctx->pc != 0x5307A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5307A4u; }
        if (ctx->pc != 0x5307A4u) { return; }
    }
    ctx->pc = 0x5307A4u;
label_5307a4:
    // 0x5307a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_5307a8:
    if (ctx->pc == 0x5307A8u) {
        ctx->pc = 0x5307A8u;
            // 0x5307a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5307ACu;
        goto label_5307ac;
    }
    ctx->pc = 0x5307A4u;
    {
        const bool branch_taken_0x5307a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5307A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5307A4u;
            // 0x5307a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5307a4) {
            ctx->pc = 0x5307E0u;
            goto label_5307e0;
        }
    }
    ctx->pc = 0x5307ACu;
label_5307ac:
    // 0x5307ac: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x5307acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_5307b0:
    // 0x5307b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5307b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5307b4:
    // 0x5307b4: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x5307b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_5307b8:
    // 0x5307b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5307b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5307bc:
    // 0x5307bc: 0xc10ca68  jal         func_4329A0
label_5307c0:
    if (ctx->pc == 0x5307C0u) {
        ctx->pc = 0x5307C0u;
            // 0x5307c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5307C4u;
        goto label_5307c4;
    }
    ctx->pc = 0x5307BCu;
    SET_GPR_U32(ctx, 31, 0x5307C4u);
    ctx->pc = 0x5307C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5307BCu;
            // 0x5307c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5307C4u; }
        if (ctx->pc != 0x5307C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5307C4u; }
        if (ctx->pc != 0x5307C4u) { return; }
    }
    ctx->pc = 0x5307C4u;
label_5307c4:
    // 0x5307c4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x5307c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_5307c8:
    // 0x5307c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x5307c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_5307cc:
    // 0x5307cc: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x5307ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_5307d0:
    // 0x5307d0: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x5307d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_5307d4:
    // 0x5307d4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x5307d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_5307d8:
    // 0x5307d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5307d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5307dc:
    // 0x5307dc: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x5307dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
label_5307e0:
    // 0x5307e0: 0xae3000a4  sw          $s0, 0xA4($s1)
    ctx->pc = 0x5307e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 16));
label_5307e4:
    // 0x5307e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5307e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_5307e8:
    // 0x5307e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5307e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5307ec:
    // 0x5307ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5307ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5307f0:
    // 0x5307f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5307f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5307f4:
    // 0x5307f4: 0x3e00008  jr          $ra
label_5307f8:
    if (ctx->pc == 0x5307F8u) {
        ctx->pc = 0x5307F8u;
            // 0x5307f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x5307FCu;
        goto label_5307fc;
    }
    ctx->pc = 0x5307F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5307F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5307F4u;
            // 0x5307f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5307FCu;
label_5307fc:
    // 0x5307fc: 0x0  nop
    ctx->pc = 0x5307fcu;
    // NOP
}
