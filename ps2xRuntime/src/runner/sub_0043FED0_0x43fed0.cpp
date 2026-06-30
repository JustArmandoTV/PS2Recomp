#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043FED0
// Address: 0x43fed0 - 0x4405b0
void sub_0043FED0_0x43fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043FED0_0x43fed0");
#endif

    switch (ctx->pc) {
        case 0x43fed0u: goto label_43fed0;
        case 0x43fed4u: goto label_43fed4;
        case 0x43fed8u: goto label_43fed8;
        case 0x43fedcu: goto label_43fedc;
        case 0x43fee0u: goto label_43fee0;
        case 0x43fee4u: goto label_43fee4;
        case 0x43fee8u: goto label_43fee8;
        case 0x43feecu: goto label_43feec;
        case 0x43fef0u: goto label_43fef0;
        case 0x43fef4u: goto label_43fef4;
        case 0x43fef8u: goto label_43fef8;
        case 0x43fefcu: goto label_43fefc;
        case 0x43ff00u: goto label_43ff00;
        case 0x43ff04u: goto label_43ff04;
        case 0x43ff08u: goto label_43ff08;
        case 0x43ff0cu: goto label_43ff0c;
        case 0x43ff10u: goto label_43ff10;
        case 0x43ff14u: goto label_43ff14;
        case 0x43ff18u: goto label_43ff18;
        case 0x43ff1cu: goto label_43ff1c;
        case 0x43ff20u: goto label_43ff20;
        case 0x43ff24u: goto label_43ff24;
        case 0x43ff28u: goto label_43ff28;
        case 0x43ff2cu: goto label_43ff2c;
        case 0x43ff30u: goto label_43ff30;
        case 0x43ff34u: goto label_43ff34;
        case 0x43ff38u: goto label_43ff38;
        case 0x43ff3cu: goto label_43ff3c;
        case 0x43ff40u: goto label_43ff40;
        case 0x43ff44u: goto label_43ff44;
        case 0x43ff48u: goto label_43ff48;
        case 0x43ff4cu: goto label_43ff4c;
        case 0x43ff50u: goto label_43ff50;
        case 0x43ff54u: goto label_43ff54;
        case 0x43ff58u: goto label_43ff58;
        case 0x43ff5cu: goto label_43ff5c;
        case 0x43ff60u: goto label_43ff60;
        case 0x43ff64u: goto label_43ff64;
        case 0x43ff68u: goto label_43ff68;
        case 0x43ff6cu: goto label_43ff6c;
        case 0x43ff70u: goto label_43ff70;
        case 0x43ff74u: goto label_43ff74;
        case 0x43ff78u: goto label_43ff78;
        case 0x43ff7cu: goto label_43ff7c;
        case 0x43ff80u: goto label_43ff80;
        case 0x43ff84u: goto label_43ff84;
        case 0x43ff88u: goto label_43ff88;
        case 0x43ff8cu: goto label_43ff8c;
        case 0x43ff90u: goto label_43ff90;
        case 0x43ff94u: goto label_43ff94;
        case 0x43ff98u: goto label_43ff98;
        case 0x43ff9cu: goto label_43ff9c;
        case 0x43ffa0u: goto label_43ffa0;
        case 0x43ffa4u: goto label_43ffa4;
        case 0x43ffa8u: goto label_43ffa8;
        case 0x43ffacu: goto label_43ffac;
        case 0x43ffb0u: goto label_43ffb0;
        case 0x43ffb4u: goto label_43ffb4;
        case 0x43ffb8u: goto label_43ffb8;
        case 0x43ffbcu: goto label_43ffbc;
        case 0x43ffc0u: goto label_43ffc0;
        case 0x43ffc4u: goto label_43ffc4;
        case 0x43ffc8u: goto label_43ffc8;
        case 0x43ffccu: goto label_43ffcc;
        case 0x43ffd0u: goto label_43ffd0;
        case 0x43ffd4u: goto label_43ffd4;
        case 0x43ffd8u: goto label_43ffd8;
        case 0x43ffdcu: goto label_43ffdc;
        case 0x43ffe0u: goto label_43ffe0;
        case 0x43ffe4u: goto label_43ffe4;
        case 0x43ffe8u: goto label_43ffe8;
        case 0x43ffecu: goto label_43ffec;
        case 0x43fff0u: goto label_43fff0;
        case 0x43fff4u: goto label_43fff4;
        case 0x43fff8u: goto label_43fff8;
        case 0x43fffcu: goto label_43fffc;
        case 0x440000u: goto label_440000;
        case 0x440004u: goto label_440004;
        case 0x440008u: goto label_440008;
        case 0x44000cu: goto label_44000c;
        case 0x440010u: goto label_440010;
        case 0x440014u: goto label_440014;
        case 0x440018u: goto label_440018;
        case 0x44001cu: goto label_44001c;
        case 0x440020u: goto label_440020;
        case 0x440024u: goto label_440024;
        case 0x440028u: goto label_440028;
        case 0x44002cu: goto label_44002c;
        case 0x440030u: goto label_440030;
        case 0x440034u: goto label_440034;
        case 0x440038u: goto label_440038;
        case 0x44003cu: goto label_44003c;
        case 0x440040u: goto label_440040;
        case 0x440044u: goto label_440044;
        case 0x440048u: goto label_440048;
        case 0x44004cu: goto label_44004c;
        case 0x440050u: goto label_440050;
        case 0x440054u: goto label_440054;
        case 0x440058u: goto label_440058;
        case 0x44005cu: goto label_44005c;
        case 0x440060u: goto label_440060;
        case 0x440064u: goto label_440064;
        case 0x440068u: goto label_440068;
        case 0x44006cu: goto label_44006c;
        case 0x440070u: goto label_440070;
        case 0x440074u: goto label_440074;
        case 0x440078u: goto label_440078;
        case 0x44007cu: goto label_44007c;
        case 0x440080u: goto label_440080;
        case 0x440084u: goto label_440084;
        case 0x440088u: goto label_440088;
        case 0x44008cu: goto label_44008c;
        case 0x440090u: goto label_440090;
        case 0x440094u: goto label_440094;
        case 0x440098u: goto label_440098;
        case 0x44009cu: goto label_44009c;
        case 0x4400a0u: goto label_4400a0;
        case 0x4400a4u: goto label_4400a4;
        case 0x4400a8u: goto label_4400a8;
        case 0x4400acu: goto label_4400ac;
        case 0x4400b0u: goto label_4400b0;
        case 0x4400b4u: goto label_4400b4;
        case 0x4400b8u: goto label_4400b8;
        case 0x4400bcu: goto label_4400bc;
        case 0x4400c0u: goto label_4400c0;
        case 0x4400c4u: goto label_4400c4;
        case 0x4400c8u: goto label_4400c8;
        case 0x4400ccu: goto label_4400cc;
        case 0x4400d0u: goto label_4400d0;
        case 0x4400d4u: goto label_4400d4;
        case 0x4400d8u: goto label_4400d8;
        case 0x4400dcu: goto label_4400dc;
        case 0x4400e0u: goto label_4400e0;
        case 0x4400e4u: goto label_4400e4;
        case 0x4400e8u: goto label_4400e8;
        case 0x4400ecu: goto label_4400ec;
        case 0x4400f0u: goto label_4400f0;
        case 0x4400f4u: goto label_4400f4;
        case 0x4400f8u: goto label_4400f8;
        case 0x4400fcu: goto label_4400fc;
        case 0x440100u: goto label_440100;
        case 0x440104u: goto label_440104;
        case 0x440108u: goto label_440108;
        case 0x44010cu: goto label_44010c;
        case 0x440110u: goto label_440110;
        case 0x440114u: goto label_440114;
        case 0x440118u: goto label_440118;
        case 0x44011cu: goto label_44011c;
        case 0x440120u: goto label_440120;
        case 0x440124u: goto label_440124;
        case 0x440128u: goto label_440128;
        case 0x44012cu: goto label_44012c;
        case 0x440130u: goto label_440130;
        case 0x440134u: goto label_440134;
        case 0x440138u: goto label_440138;
        case 0x44013cu: goto label_44013c;
        case 0x440140u: goto label_440140;
        case 0x440144u: goto label_440144;
        case 0x440148u: goto label_440148;
        case 0x44014cu: goto label_44014c;
        case 0x440150u: goto label_440150;
        case 0x440154u: goto label_440154;
        case 0x440158u: goto label_440158;
        case 0x44015cu: goto label_44015c;
        case 0x440160u: goto label_440160;
        case 0x440164u: goto label_440164;
        case 0x440168u: goto label_440168;
        case 0x44016cu: goto label_44016c;
        case 0x440170u: goto label_440170;
        case 0x440174u: goto label_440174;
        case 0x440178u: goto label_440178;
        case 0x44017cu: goto label_44017c;
        case 0x440180u: goto label_440180;
        case 0x440184u: goto label_440184;
        case 0x440188u: goto label_440188;
        case 0x44018cu: goto label_44018c;
        case 0x440190u: goto label_440190;
        case 0x440194u: goto label_440194;
        case 0x440198u: goto label_440198;
        case 0x44019cu: goto label_44019c;
        case 0x4401a0u: goto label_4401a0;
        case 0x4401a4u: goto label_4401a4;
        case 0x4401a8u: goto label_4401a8;
        case 0x4401acu: goto label_4401ac;
        case 0x4401b0u: goto label_4401b0;
        case 0x4401b4u: goto label_4401b4;
        case 0x4401b8u: goto label_4401b8;
        case 0x4401bcu: goto label_4401bc;
        case 0x4401c0u: goto label_4401c0;
        case 0x4401c4u: goto label_4401c4;
        case 0x4401c8u: goto label_4401c8;
        case 0x4401ccu: goto label_4401cc;
        case 0x4401d0u: goto label_4401d0;
        case 0x4401d4u: goto label_4401d4;
        case 0x4401d8u: goto label_4401d8;
        case 0x4401dcu: goto label_4401dc;
        case 0x4401e0u: goto label_4401e0;
        case 0x4401e4u: goto label_4401e4;
        case 0x4401e8u: goto label_4401e8;
        case 0x4401ecu: goto label_4401ec;
        case 0x4401f0u: goto label_4401f0;
        case 0x4401f4u: goto label_4401f4;
        case 0x4401f8u: goto label_4401f8;
        case 0x4401fcu: goto label_4401fc;
        case 0x440200u: goto label_440200;
        case 0x440204u: goto label_440204;
        case 0x440208u: goto label_440208;
        case 0x44020cu: goto label_44020c;
        case 0x440210u: goto label_440210;
        case 0x440214u: goto label_440214;
        case 0x440218u: goto label_440218;
        case 0x44021cu: goto label_44021c;
        case 0x440220u: goto label_440220;
        case 0x440224u: goto label_440224;
        case 0x440228u: goto label_440228;
        case 0x44022cu: goto label_44022c;
        case 0x440230u: goto label_440230;
        case 0x440234u: goto label_440234;
        case 0x440238u: goto label_440238;
        case 0x44023cu: goto label_44023c;
        case 0x440240u: goto label_440240;
        case 0x440244u: goto label_440244;
        case 0x440248u: goto label_440248;
        case 0x44024cu: goto label_44024c;
        case 0x440250u: goto label_440250;
        case 0x440254u: goto label_440254;
        case 0x440258u: goto label_440258;
        case 0x44025cu: goto label_44025c;
        case 0x440260u: goto label_440260;
        case 0x440264u: goto label_440264;
        case 0x440268u: goto label_440268;
        case 0x44026cu: goto label_44026c;
        case 0x440270u: goto label_440270;
        case 0x440274u: goto label_440274;
        case 0x440278u: goto label_440278;
        case 0x44027cu: goto label_44027c;
        case 0x440280u: goto label_440280;
        case 0x440284u: goto label_440284;
        case 0x440288u: goto label_440288;
        case 0x44028cu: goto label_44028c;
        case 0x440290u: goto label_440290;
        case 0x440294u: goto label_440294;
        case 0x440298u: goto label_440298;
        case 0x44029cu: goto label_44029c;
        case 0x4402a0u: goto label_4402a0;
        case 0x4402a4u: goto label_4402a4;
        case 0x4402a8u: goto label_4402a8;
        case 0x4402acu: goto label_4402ac;
        case 0x4402b0u: goto label_4402b0;
        case 0x4402b4u: goto label_4402b4;
        case 0x4402b8u: goto label_4402b8;
        case 0x4402bcu: goto label_4402bc;
        case 0x4402c0u: goto label_4402c0;
        case 0x4402c4u: goto label_4402c4;
        case 0x4402c8u: goto label_4402c8;
        case 0x4402ccu: goto label_4402cc;
        case 0x4402d0u: goto label_4402d0;
        case 0x4402d4u: goto label_4402d4;
        case 0x4402d8u: goto label_4402d8;
        case 0x4402dcu: goto label_4402dc;
        case 0x4402e0u: goto label_4402e0;
        case 0x4402e4u: goto label_4402e4;
        case 0x4402e8u: goto label_4402e8;
        case 0x4402ecu: goto label_4402ec;
        case 0x4402f0u: goto label_4402f0;
        case 0x4402f4u: goto label_4402f4;
        case 0x4402f8u: goto label_4402f8;
        case 0x4402fcu: goto label_4402fc;
        case 0x440300u: goto label_440300;
        case 0x440304u: goto label_440304;
        case 0x440308u: goto label_440308;
        case 0x44030cu: goto label_44030c;
        case 0x440310u: goto label_440310;
        case 0x440314u: goto label_440314;
        case 0x440318u: goto label_440318;
        case 0x44031cu: goto label_44031c;
        case 0x440320u: goto label_440320;
        case 0x440324u: goto label_440324;
        case 0x440328u: goto label_440328;
        case 0x44032cu: goto label_44032c;
        case 0x440330u: goto label_440330;
        case 0x440334u: goto label_440334;
        case 0x440338u: goto label_440338;
        case 0x44033cu: goto label_44033c;
        case 0x440340u: goto label_440340;
        case 0x440344u: goto label_440344;
        case 0x440348u: goto label_440348;
        case 0x44034cu: goto label_44034c;
        case 0x440350u: goto label_440350;
        case 0x440354u: goto label_440354;
        case 0x440358u: goto label_440358;
        case 0x44035cu: goto label_44035c;
        case 0x440360u: goto label_440360;
        case 0x440364u: goto label_440364;
        case 0x440368u: goto label_440368;
        case 0x44036cu: goto label_44036c;
        case 0x440370u: goto label_440370;
        case 0x440374u: goto label_440374;
        case 0x440378u: goto label_440378;
        case 0x44037cu: goto label_44037c;
        case 0x440380u: goto label_440380;
        case 0x440384u: goto label_440384;
        case 0x440388u: goto label_440388;
        case 0x44038cu: goto label_44038c;
        case 0x440390u: goto label_440390;
        case 0x440394u: goto label_440394;
        case 0x440398u: goto label_440398;
        case 0x44039cu: goto label_44039c;
        case 0x4403a0u: goto label_4403a0;
        case 0x4403a4u: goto label_4403a4;
        case 0x4403a8u: goto label_4403a8;
        case 0x4403acu: goto label_4403ac;
        case 0x4403b0u: goto label_4403b0;
        case 0x4403b4u: goto label_4403b4;
        case 0x4403b8u: goto label_4403b8;
        case 0x4403bcu: goto label_4403bc;
        case 0x4403c0u: goto label_4403c0;
        case 0x4403c4u: goto label_4403c4;
        case 0x4403c8u: goto label_4403c8;
        case 0x4403ccu: goto label_4403cc;
        case 0x4403d0u: goto label_4403d0;
        case 0x4403d4u: goto label_4403d4;
        case 0x4403d8u: goto label_4403d8;
        case 0x4403dcu: goto label_4403dc;
        case 0x4403e0u: goto label_4403e0;
        case 0x4403e4u: goto label_4403e4;
        case 0x4403e8u: goto label_4403e8;
        case 0x4403ecu: goto label_4403ec;
        case 0x4403f0u: goto label_4403f0;
        case 0x4403f4u: goto label_4403f4;
        case 0x4403f8u: goto label_4403f8;
        case 0x4403fcu: goto label_4403fc;
        case 0x440400u: goto label_440400;
        case 0x440404u: goto label_440404;
        case 0x440408u: goto label_440408;
        case 0x44040cu: goto label_44040c;
        case 0x440410u: goto label_440410;
        case 0x440414u: goto label_440414;
        case 0x440418u: goto label_440418;
        case 0x44041cu: goto label_44041c;
        case 0x440420u: goto label_440420;
        case 0x440424u: goto label_440424;
        case 0x440428u: goto label_440428;
        case 0x44042cu: goto label_44042c;
        case 0x440430u: goto label_440430;
        case 0x440434u: goto label_440434;
        case 0x440438u: goto label_440438;
        case 0x44043cu: goto label_44043c;
        case 0x440440u: goto label_440440;
        case 0x440444u: goto label_440444;
        case 0x440448u: goto label_440448;
        case 0x44044cu: goto label_44044c;
        case 0x440450u: goto label_440450;
        case 0x440454u: goto label_440454;
        case 0x440458u: goto label_440458;
        case 0x44045cu: goto label_44045c;
        case 0x440460u: goto label_440460;
        case 0x440464u: goto label_440464;
        case 0x440468u: goto label_440468;
        case 0x44046cu: goto label_44046c;
        case 0x440470u: goto label_440470;
        case 0x440474u: goto label_440474;
        case 0x440478u: goto label_440478;
        case 0x44047cu: goto label_44047c;
        case 0x440480u: goto label_440480;
        case 0x440484u: goto label_440484;
        case 0x440488u: goto label_440488;
        case 0x44048cu: goto label_44048c;
        case 0x440490u: goto label_440490;
        case 0x440494u: goto label_440494;
        case 0x440498u: goto label_440498;
        case 0x44049cu: goto label_44049c;
        case 0x4404a0u: goto label_4404a0;
        case 0x4404a4u: goto label_4404a4;
        case 0x4404a8u: goto label_4404a8;
        case 0x4404acu: goto label_4404ac;
        case 0x4404b0u: goto label_4404b0;
        case 0x4404b4u: goto label_4404b4;
        case 0x4404b8u: goto label_4404b8;
        case 0x4404bcu: goto label_4404bc;
        case 0x4404c0u: goto label_4404c0;
        case 0x4404c4u: goto label_4404c4;
        case 0x4404c8u: goto label_4404c8;
        case 0x4404ccu: goto label_4404cc;
        case 0x4404d0u: goto label_4404d0;
        case 0x4404d4u: goto label_4404d4;
        case 0x4404d8u: goto label_4404d8;
        case 0x4404dcu: goto label_4404dc;
        case 0x4404e0u: goto label_4404e0;
        case 0x4404e4u: goto label_4404e4;
        case 0x4404e8u: goto label_4404e8;
        case 0x4404ecu: goto label_4404ec;
        case 0x4404f0u: goto label_4404f0;
        case 0x4404f4u: goto label_4404f4;
        case 0x4404f8u: goto label_4404f8;
        case 0x4404fcu: goto label_4404fc;
        case 0x440500u: goto label_440500;
        case 0x440504u: goto label_440504;
        case 0x440508u: goto label_440508;
        case 0x44050cu: goto label_44050c;
        case 0x440510u: goto label_440510;
        case 0x440514u: goto label_440514;
        case 0x440518u: goto label_440518;
        case 0x44051cu: goto label_44051c;
        case 0x440520u: goto label_440520;
        case 0x440524u: goto label_440524;
        case 0x440528u: goto label_440528;
        case 0x44052cu: goto label_44052c;
        case 0x440530u: goto label_440530;
        case 0x440534u: goto label_440534;
        case 0x440538u: goto label_440538;
        case 0x44053cu: goto label_44053c;
        case 0x440540u: goto label_440540;
        case 0x440544u: goto label_440544;
        case 0x440548u: goto label_440548;
        case 0x44054cu: goto label_44054c;
        case 0x440550u: goto label_440550;
        case 0x440554u: goto label_440554;
        case 0x440558u: goto label_440558;
        case 0x44055cu: goto label_44055c;
        case 0x440560u: goto label_440560;
        case 0x440564u: goto label_440564;
        case 0x440568u: goto label_440568;
        case 0x44056cu: goto label_44056c;
        case 0x440570u: goto label_440570;
        case 0x440574u: goto label_440574;
        case 0x440578u: goto label_440578;
        case 0x44057cu: goto label_44057c;
        case 0x440580u: goto label_440580;
        case 0x440584u: goto label_440584;
        case 0x440588u: goto label_440588;
        case 0x44058cu: goto label_44058c;
        case 0x440590u: goto label_440590;
        case 0x440594u: goto label_440594;
        case 0x440598u: goto label_440598;
        case 0x44059cu: goto label_44059c;
        case 0x4405a0u: goto label_4405a0;
        case 0x4405a4u: goto label_4405a4;
        case 0x4405a8u: goto label_4405a8;
        case 0x4405acu: goto label_4405ac;
        default: break;
    }

    ctx->pc = 0x43fed0u;

label_43fed0:
    // 0x43fed0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x43fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_43fed4:
    // 0x43fed4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43fed8:
    // 0x43fed8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x43fed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_43fedc:
    // 0x43fedc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x43fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_43fee0:
    // 0x43fee0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x43fee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_43fee4:
    // 0x43fee4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x43fee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43fee8:
    // 0x43fee8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x43fee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_43feec:
    // 0x43feec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x43feecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43fef0:
    // 0x43fef0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x43fef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_43fef4:
    // 0x43fef4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x43fef4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43fef8:
    // 0x43fef8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x43fef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_43fefc:
    // 0x43fefc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x43fefcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43ff00:
    // 0x43ff00: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x43ff00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_43ff04:
    // 0x43ff04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x43ff04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43ff08:
    // 0x43ff08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x43ff08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_43ff0c:
    // 0x43ff0c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x43ff0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43ff10:
    // 0x43ff10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x43ff10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_43ff14:
    // 0x43ff14: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x43ff14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_43ff18:
    // 0x43ff18: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x43ff18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_43ff1c:
    // 0x43ff1c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x43ff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_43ff20:
    // 0x43ff20: 0x8c500e68  lw          $s0, 0xE68($v0)
    ctx->pc = 0x43ff20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_43ff24:
    // 0x43ff24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x43ff24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43ff28:
    // 0x43ff28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x43ff28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43ff2c:
    // 0x43ff2c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x43ff2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_43ff30:
    // 0x43ff30: 0x8e160010  lw          $s6, 0x10($s0)
    ctx->pc = 0x43ff30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_43ff34:
    // 0x43ff34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43ff34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43ff38:
    // 0x43ff38: 0xc0ee398  jal         func_3B8E60
label_43ff3c:
    if (ctx->pc == 0x43FF3Cu) {
        ctx->pc = 0x43FF3Cu;
            // 0x43ff3c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x43FF40u;
        goto label_43ff40;
    }
    ctx->pc = 0x43FF38u;
    SET_GPR_U32(ctx, 31, 0x43FF40u);
    ctx->pc = 0x43FF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FF38u;
            // 0x43ff3c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FF40u; }
        if (ctx->pc != 0x43FF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FF40u; }
        if (ctx->pc != 0x43FF40u) { return; }
    }
    ctx->pc = 0x43FF40u;
label_43ff40:
    // 0x43ff40: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x43ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_43ff44:
    // 0x43ff44: 0xae160010  sw          $s6, 0x10($s0)
    ctx->pc = 0x43ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
label_43ff48:
    // 0x43ff48: 0x2621824  and         $v1, $s3, $v0
    ctx->pc = 0x43ff48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_43ff4c:
    // 0x43ff4c: 0x96a40060  lhu         $a0, 0x60($s5)
    ctx->pc = 0x43ff4cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
label_43ff50:
    // 0x43ff50: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x43ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_43ff54:
    // 0x43ff54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x43ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43ff58:
    // 0x43ff58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x43ff58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_43ff5c:
    // 0x43ff5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x43ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_43ff60:
    // 0x43ff60: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x43ff60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_43ff64:
    // 0x43ff64: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x43ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_43ff68:
    // 0x43ff68: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x43ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43ff6c:
    // 0x43ff6c: 0x913018  mult        $a2, $a0, $s1
    ctx->pc = 0x43ff6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_43ff70:
    // 0x43ff70: 0x8c590008  lw          $t9, 0x8($v0)
    ctx->pc = 0x43ff70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_43ff74:
    // 0x43ff74: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x43ff74u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_43ff78:
    // 0x43ff78: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x43ff78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_43ff7c:
    // 0x43ff7c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x43ff7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_43ff80:
    // 0x43ff80: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x43ff80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_43ff84:
    // 0x43ff84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43ff84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43ff88:
    // 0x43ff88: 0x320f809  jalr        $t9
label_43ff8c:
    if (ctx->pc == 0x43FF8Cu) {
        ctx->pc = 0x43FF8Cu;
            // 0x43ff8c: 0x629825  or          $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x43FF90u;
        goto label_43ff90;
    }
    ctx->pc = 0x43FF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43FF90u);
        ctx->pc = 0x43FF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FF88u;
            // 0x43ff8c: 0x629825  or          $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43FF90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43FF90u; }
            if (ctx->pc != 0x43FF90u) { return; }
        }
        }
    }
    ctx->pc = 0x43FF90u;
label_43ff90:
    // 0x43ff90: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x43ff90u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43ff94:
    // 0x43ff94: 0x8e390004  lw          $t9, 0x4($s1)
    ctx->pc = 0x43ff94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_43ff98:
    // 0x43ff98: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x43ff98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_43ff9c:
    // 0x43ff9c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x43ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_43ffa0:
    // 0x43ffa0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x43ffa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43ffa4:
    // 0x43ffa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43ffa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43ffa8:
    // 0x43ffa8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x43ffa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_43ffac:
    // 0x43ffac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43ffacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43ffb0:
    // 0x43ffb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x43ffb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43ffb4:
    // 0x43ffb4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x43ffb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_43ffb8:
    // 0x43ffb8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x43ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_43ffbc:
    // 0x43ffbc: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x43ffbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_43ffc0:
    // 0x43ffc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x43ffc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43ffc4:
    // 0x43ffc4: 0x320f809  jalr        $t9
label_43ffc8:
    if (ctx->pc == 0x43FFC8u) {
        ctx->pc = 0x43FFC8u;
            // 0x43ffc8: 0x46146bc0  add.s       $f15, $f13, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
        ctx->pc = 0x43FFCCu;
        goto label_43ffcc;
    }
    ctx->pc = 0x43FFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43FFCCu);
        ctx->pc = 0x43FFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FFC4u;
            // 0x43ffc8: 0x46146bc0  add.s       $f15, $f13, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43FFCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43FFCCu; }
            if (ctx->pc != 0x43FFCCu) { return; }
        }
        }
    }
    ctx->pc = 0x43FFCCu;
label_43ffcc:
    // 0x43ffcc: 0x8e390004  lw          $t9, 0x4($s1)
    ctx->pc = 0x43ffccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_43ffd0:
    // 0x43ffd0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x43ffd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_43ffd4:
    // 0x43ffd4: 0x320f809  jalr        $t9
label_43ffd8:
    if (ctx->pc == 0x43FFD8u) {
        ctx->pc = 0x43FFD8u;
            // 0x43ffd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43FFDCu;
        goto label_43ffdc;
    }
    ctx->pc = 0x43FFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43FFDCu);
        ctx->pc = 0x43FFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FFD4u;
            // 0x43ffd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43FFDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43FFDCu; }
            if (ctx->pc != 0x43FFDCu) { return; }
        }
        }
    }
    ctx->pc = 0x43FFDCu;
label_43ffdc:
    // 0x43ffdc: 0x96a40060  lhu         $a0, 0x60($s5)
    ctx->pc = 0x43ffdcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
label_43ffe0:
    // 0x43ffe0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x43ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_43ffe4:
    // 0x43ffe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43ffe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43ffe8:
    // 0x43ffe8: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x43ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_43ffec:
    // 0x43ffec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x43ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43fff0:
    // 0x43fff0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x43fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_43fff4:
    // 0x43fff4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x43fff4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_43fff8:
    // 0x43fff8: 0x0  nop
    ctx->pc = 0x43fff8u;
    // NOP
label_43fffc:
    // 0x43fffc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x43fffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_440000:
    // 0x440000: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x440000u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_440004:
    // 0x440004: 0x0  nop
    ctx->pc = 0x440004u;
    // NOP
label_440008:
    // 0x440008: 0x0  nop
    ctx->pc = 0x440008u;
    // NOP
label_44000c:
    // 0x44000c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_440010:
    if (ctx->pc == 0x440010u) {
        ctx->pc = 0x440014u;
        goto label_440014;
    }
    ctx->pc = 0x44000Cu;
    {
        const bool branch_taken_0x44000c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44000c) {
            ctx->pc = 0x440030u;
            goto label_440030;
        }
    }
    ctx->pc = 0x440014u;
label_440014:
    // 0x440014: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x440014u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_440018:
    // 0x440018: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x440018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44001c:
    // 0x44001c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44001cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_440020:
    // 0x440020: 0x0  nop
    ctx->pc = 0x440020u;
    // NOP
label_440024:
    // 0x440024: 0x0  nop
    ctx->pc = 0x440024u;
    // NOP
label_440028:
    // 0x440028: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_44002c:
    if (ctx->pc == 0x44002Cu) {
        ctx->pc = 0x440030u;
        goto label_440030;
    }
    ctx->pc = 0x440028u;
    {
        const bool branch_taken_0x440028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x440028) {
            ctx->pc = 0x440014u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_440014;
        }
    }
    ctx->pc = 0x440030u;
label_440030:
    // 0x440030: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x440030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_440034:
    // 0x440034: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x440034u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_440038:
    // 0x440038: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x440038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_44003c:
    // 0x44003c: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x44003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_440040:
    // 0x440040: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x440040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_440044:
    // 0x440044: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x440044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_440048:
    // 0x440048: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x440048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_44004c:
    // 0x44004c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x44004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_440050:
    // 0x440050: 0xafa60094  sw          $a2, 0x94($sp)
    ctx->pc = 0x440050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 6));
label_440054:
    // 0x440054: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x440054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
label_440058:
    // 0x440058: 0xaca60014  sw          $a2, 0x14($a1)
    ctx->pc = 0x440058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
label_44005c:
    // 0x44005c: 0xaca60018  sw          $a2, 0x18($a1)
    ctx->pc = 0x44005cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 6));
label_440060:
    // 0x440060: 0xaca6001c  sw          $a2, 0x1C($a1)
    ctx->pc = 0x440060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 6));
label_440064:
    // 0x440064: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x440064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_440068:
    // 0x440068: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x440068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44006c:
    // 0x44006c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x44006cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_440070:
    // 0x440070: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x440070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_440074:
    // 0x440074: 0x0  nop
    ctx->pc = 0x440074u;
    // NOP
label_440078:
    // 0x440078: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x440078u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_44007c:
    // 0x44007c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x44007cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_440080:
    // 0x440080: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x440080u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_440084:
    // 0x440084: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_440088:
    if (ctx->pc == 0x440088u) {
        ctx->pc = 0x440088u;
            // 0x440088: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x44008Cu;
        goto label_44008c;
    }
    ctx->pc = 0x440084u;
    {
        const bool branch_taken_0x440084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x440088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440084u;
            // 0x440088: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x440084) {
            ctx->pc = 0x4400A8u;
            goto label_4400a8;
        }
    }
    ctx->pc = 0x44008Cu;
label_44008c:
    // 0x44008c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x44008cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_440090:
    // 0x440090: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x440090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_440094:
    // 0x440094: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x440094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_440098:
    // 0x440098: 0x0  nop
    ctx->pc = 0x440098u;
    // NOP
label_44009c:
    // 0x44009c: 0x0  nop
    ctx->pc = 0x44009cu;
    // NOP
label_4400a0:
    // 0x4400a0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4400a4:
    if (ctx->pc == 0x4400A4u) {
        ctx->pc = 0x4400A8u;
        goto label_4400a8;
    }
    ctx->pc = 0x4400A0u;
    {
        const bool branch_taken_0x4400a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4400a0) {
            ctx->pc = 0x44008Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44008c;
        }
    }
    ctx->pc = 0x4400A8u;
label_4400a8:
    // 0x4400a8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x4400a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4400ac:
    // 0x4400ac: 0x26820004  addiu       $v0, $s4, 0x4
    ctx->pc = 0x4400acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_4400b0:
    // 0x4400b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4400b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4400b4:
    // 0x4400b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4400b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4400b8:
    // 0x4400b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4400b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4400bc:
    // 0x4400bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4400bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4400c0:
    // 0x4400c0: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x4400c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_4400c4:
    // 0x4400c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4400c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4400c8:
    // 0x4400c8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4400c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4400cc:
    // 0x4400cc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x4400ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4400d0:
    // 0x4400d0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4400d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4400d4:
    // 0x4400d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4400d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4400d8:
    // 0x4400d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4400d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4400dc:
    // 0x4400dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4400dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4400e0:
    // 0x4400e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4400e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4400e4:
    // 0x4400e4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x4400e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_4400e8:
    // 0x4400e8: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x4400e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4400ec:
    // 0x4400ec: 0xc0ee334  jal         func_3B8CD0
label_4400f0:
    if (ctx->pc == 0x4400F0u) {
        ctx->pc = 0x4400F0u;
            // 0x4400f0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x4400F4u;
        goto label_4400f4;
    }
    ctx->pc = 0x4400ECu;
    SET_GPR_U32(ctx, 31, 0x4400F4u);
    ctx->pc = 0x4400F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4400ECu;
            // 0x4400f0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4400F4u; }
        if (ctx->pc != 0x4400F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4400F4u; }
        if (ctx->pc != 0x4400F4u) { return; }
    }
    ctx->pc = 0x4400F4u;
label_4400f4:
    // 0x4400f4: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x4400f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_4400f8:
    // 0x4400f8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4400f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4400fc:
    // 0x4400fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4400fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_440100:
    // 0x440100: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x440100u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_440104:
    // 0x440104: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x440104u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_440108:
    // 0x440108: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x440108u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44010c:
    // 0x44010c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x44010cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_440110:
    // 0x440110: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x440110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_440114:
    // 0x440114: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x440114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_440118:
    // 0x440118: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x440118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44011c:
    // 0x44011c: 0x3e00008  jr          $ra
label_440120:
    if (ctx->pc == 0x440120u) {
        ctx->pc = 0x440120u;
            // 0x440120: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x440124u;
        goto label_440124;
    }
    ctx->pc = 0x44011Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44011Cu;
            // 0x440120: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x440124u;
label_440124:
    // 0x440124: 0x0  nop
    ctx->pc = 0x440124u;
    // NOP
label_440128:
    // 0x440128: 0x0  nop
    ctx->pc = 0x440128u;
    // NOP
label_44012c:
    // 0x44012c: 0x0  nop
    ctx->pc = 0x44012cu;
    // NOP
label_440130:
    // 0x440130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x440130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_440134:
    // 0x440134: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x440134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_440138:
    // 0x440138: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x440138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_44013c:
    // 0x44013c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x44013cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_440140:
    // 0x440140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x440140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_440144:
    // 0x440144: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x440144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_440148:
    // 0x440148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x440148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44014c:
    // 0x44014c: 0x8c7089e8  lw          $s0, -0x7618($v1)
    ctx->pc = 0x44014cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_440150:
    // 0x440150: 0x8cb1a140  lw          $s1, -0x5EC0($a1)
    ctx->pc = 0x440150u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294943040)));
label_440154:
    // 0x440154: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x440154u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_440158:
    // 0x440158: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x440158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_44015c:
    // 0x44015c: 0x1020010c  beqz        $at, . + 4 + (0x10C << 2)
label_440160:
    if (ctx->pc == 0x440160u) {
        ctx->pc = 0x440160u;
            // 0x440160: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x440164u;
        goto label_440164;
    }
    ctx->pc = 0x44015Cu;
    {
        const bool branch_taken_0x44015c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x440160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44015Cu;
            // 0x440160: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44015c) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x440164u;
label_440164:
    // 0x440164: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x440164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_440168:
    // 0x440168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x440168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44016c:
    // 0x44016c: 0x24a5d340  addiu       $a1, $a1, -0x2CC0
    ctx->pc = 0x44016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
label_440170:
    // 0x440170: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x440170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_440174:
    // 0x440174: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x440174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_440178:
    // 0x440178: 0x600008  jr          $v1
label_44017c:
    if (ctx->pc == 0x44017Cu) {
        ctx->pc = 0x440180u;
        goto label_440180;
    }
    ctx->pc = 0x440178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x440180u: goto label_440180;
            case 0x44020Cu: goto label_44020c;
            case 0x4402B0u: goto label_4402b0;
            case 0x4402E8u: goto label_4402e8;
            case 0x440334u: goto label_440334;
            case 0x440370u: goto label_440370;
            case 0x44041Cu: goto label_44041c;
            case 0x440454u: goto label_440454;
            case 0x440550u: goto label_440550;
            case 0x440588u: goto label_440588;
            case 0x440590u: goto label_440590;
            default: break;
        }
        return;
    }
    ctx->pc = 0x440180u;
label_440180:
    // 0x440180: 0xc073e70  jal         func_1CF9C0
label_440184:
    if (ctx->pc == 0x440184u) {
        ctx->pc = 0x440184u;
            // 0x440184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x440188u;
        goto label_440188;
    }
    ctx->pc = 0x440180u;
    SET_GPR_U32(ctx, 31, 0x440188u);
    ctx->pc = 0x440184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440180u;
            // 0x440184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9C0u;
    if (runtime->hasFunction(0x1CF9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440188u; }
        if (ctx->pc != 0x440188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF9C0_0x1cf9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440188u; }
        if (ctx->pc != 0x440188u) { return; }
    }
    ctx->pc = 0x440188u;
label_440188:
    // 0x440188: 0x54400102  bnel        $v0, $zero, . + 4 + (0x102 << 2)
label_44018c:
    if (ctx->pc == 0x44018Cu) {
        ctx->pc = 0x44018Cu;
            // 0x44018c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x440190u;
        goto label_440190;
    }
    ctx->pc = 0x440188u;
    {
        const bool branch_taken_0x440188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x440188) {
            ctx->pc = 0x44018Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440188u;
            // 0x44018c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440594u;
            goto label_440594;
        }
    }
    ctx->pc = 0x440190u;
label_440190:
    // 0x440190: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x440190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_440194:
    // 0x440194: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x440194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_440198:
    // 0x440198: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x440198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_44019c:
    // 0x44019c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x44019cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_4401a0:
    // 0x4401a0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_4401a4:
    if (ctx->pc == 0x4401A4u) {
        ctx->pc = 0x4401A4u;
            // 0x4401a4: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4401A8u;
        goto label_4401a8;
    }
    ctx->pc = 0x4401A0u;
    {
        const bool branch_taken_0x4401a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4401a0) {
            ctx->pc = 0x4401A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4401A0u;
            // 0x4401a4: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4401F4u;
            goto label_4401f4;
        }
    }
    ctx->pc = 0x4401A8u;
label_4401a8:
    // 0x4401a8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4401a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4401ac:
    // 0x4401ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4401acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4401b0:
    // 0x4401b0: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x4401b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_4401b4:
    // 0x4401b4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x4401b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4401b8:
    // 0x4401b8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x4401b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_4401bc:
    // 0x4401bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4401bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4401c0:
    // 0x4401c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_4401c4:
    if (ctx->pc == 0x4401C4u) {
        ctx->pc = 0x4401C8u;
        goto label_4401c8;
    }
    ctx->pc = 0x4401C0u;
    {
        const bool branch_taken_0x4401c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4401c0) {
            ctx->pc = 0x4401F0u;
            goto label_4401f0;
        }
    }
    ctx->pc = 0x4401C8u;
label_4401c8:
    // 0x4401c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4401c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4401cc:
    // 0x4401cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4401ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4401d0:
    // 0x4401d0: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x4401d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_4401d4:
    // 0x4401d4: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x4401d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
label_4401d8:
    // 0x4401d8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4401d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4401dc:
    // 0x4401dc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4401dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4401e0:
    // 0x4401e0: 0x320f809  jalr        $t9
label_4401e4:
    if (ctx->pc == 0x4401E4u) {
        ctx->pc = 0x4401E4u;
            // 0x4401e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4401E8u;
        goto label_4401e8;
    }
    ctx->pc = 0x4401E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4401E8u);
        ctx->pc = 0x4401E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4401E0u;
            // 0x4401e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4401E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4401E8u; }
            if (ctx->pc != 0x4401E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4401E8u;
label_4401e8:
    // 0x4401e8: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_4401ec:
    if (ctx->pc == 0x4401ECu) {
        ctx->pc = 0x4401ECu;
            // 0x4401ec: 0xa6400060  sh          $zero, 0x60($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4401F0u;
        goto label_4401f0;
    }
    ctx->pc = 0x4401E8u;
    {
        const bool branch_taken_0x4401e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4401ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4401E8u;
            // 0x4401ec: 0xa6400060  sh          $zero, 0x60($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4401e8) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x4401F0u;
label_4401f0:
    // 0x4401f0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4401f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4401f4:
    // 0x4401f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4401f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4401f8:
    // 0x4401f8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4401f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4401fc:
    // 0x4401fc: 0x320f809  jalr        $t9
label_440200:
    if (ctx->pc == 0x440200u) {
        ctx->pc = 0x440200u;
            // 0x440200: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x440204u;
        goto label_440204;
    }
    ctx->pc = 0x4401FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x440204u);
        ctx->pc = 0x440200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4401FCu;
            // 0x440200: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x440204u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x440204u; }
            if (ctx->pc != 0x440204u) { return; }
        }
        }
    }
    ctx->pc = 0x440204u;
label_440204:
    // 0x440204: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_440208:
    if (ctx->pc == 0x440208u) {
        ctx->pc = 0x44020Cu;
        goto label_44020c;
    }
    ctx->pc = 0x440204u;
    {
        const bool branch_taken_0x440204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x440204) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x44020Cu;
label_44020c:
    // 0x44020c: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x44020cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
label_440210:
    // 0x440210: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x440210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_440214:
    // 0x440214: 0xc1101c0  jal         func_440700
label_440218:
    if (ctx->pc == 0x440218u) {
        ctx->pc = 0x440218u;
            // 0x440218: 0x34450030  ori         $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
        ctx->pc = 0x44021Cu;
        goto label_44021c;
    }
    ctx->pc = 0x440214u;
    SET_GPR_U32(ctx, 31, 0x44021Cu);
    ctx->pc = 0x440218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440214u;
            // 0x440218: 0x34450030  ori         $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
    ctx->pc = 0x440700u;
    if (runtime->hasFunction(0x440700u)) {
        auto targetFn = runtime->lookupFunction(0x440700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44021Cu; }
        if (ctx->pc != 0x44021Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00440700_0x440700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44021Cu; }
        if (ctx->pc != 0x44021Cu) { return; }
    }
    ctx->pc = 0x44021Cu;
label_44021c:
    // 0x44021c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_440220:
    if (ctx->pc == 0x440220u) {
        ctx->pc = 0x440220u;
            // 0x440220: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x440224u;
        goto label_440224;
    }
    ctx->pc = 0x44021Cu;
    {
        const bool branch_taken_0x44021c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44021c) {
            ctx->pc = 0x440220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44021Cu;
            // 0x440220: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440240u;
            goto label_440240;
        }
    }
    ctx->pc = 0x440224u;
label_440224:
    // 0x440224: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x440224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_440228:
    // 0x440228: 0xc0ec314  jal         func_3B0C50
label_44022c:
    if (ctx->pc == 0x44022Cu) {
        ctx->pc = 0x44022Cu;
            // 0x44022c: 0x240500a9  addiu       $a1, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x440230u;
        goto label_440230;
    }
    ctx->pc = 0x440228u;
    SET_GPR_U32(ctx, 31, 0x440230u);
    ctx->pc = 0x44022Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440228u;
            // 0x44022c: 0x240500a9  addiu       $a1, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440230u; }
        if (ctx->pc != 0x440230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440230u; }
        if (ctx->pc != 0x440230u) { return; }
    }
    ctx->pc = 0x440230u;
label_440230:
    // 0x440230: 0x92420062  lbu         $v0, 0x62($s2)
    ctx->pc = 0x440230u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 98)));
label_440234:
    // 0x440234: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x440234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_440238:
    // 0x440238: 0xa2420062  sb          $v0, 0x62($s2)
    ctx->pc = 0x440238u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 2));
label_44023c:
    // 0x44023c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x44023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_440240:
    // 0x440240: 0xc1101c0  jal         func_440700
label_440244:
    if (ctx->pc == 0x440244u) {
        ctx->pc = 0x440244u;
            // 0x440244: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x440248u;
        goto label_440248;
    }
    ctx->pc = 0x440240u;
    SET_GPR_U32(ctx, 31, 0x440248u);
    ctx->pc = 0x440244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440240u;
            // 0x440244: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x440700u;
    if (runtime->hasFunction(0x440700u)) {
        auto targetFn = runtime->lookupFunction(0x440700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440248u; }
        if (ctx->pc != 0x440248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00440700_0x440700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440248u; }
        if (ctx->pc != 0x440248u) { return; }
    }
    ctx->pc = 0x440248u;
label_440248:
    // 0x440248: 0x104000d1  beqz        $v0, . + 4 + (0xD1 << 2)
label_44024c:
    if (ctx->pc == 0x44024Cu) {
        ctx->pc = 0x440250u;
        goto label_440250;
    }
    ctx->pc = 0x440248u;
    {
        const bool branch_taken_0x440248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x440248) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x440250u;
label_440250:
    // 0x440250: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x440250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_440254:
    // 0x440254: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x440254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_440258:
    // 0x440258: 0xc0ec314  jal         func_3B0C50
label_44025c:
    if (ctx->pc == 0x44025Cu) {
        ctx->pc = 0x44025Cu;
            // 0x44025c: 0x344500a9  ori         $a1, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x440260u;
        goto label_440260;
    }
    ctx->pc = 0x440258u;
    SET_GPR_U32(ctx, 31, 0x440260u);
    ctx->pc = 0x44025Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440258u;
            // 0x44025c: 0x344500a9  ori         $a1, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440260u; }
        if (ctx->pc != 0x440260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440260u; }
        if (ctx->pc != 0x440260u) { return; }
    }
    ctx->pc = 0x440260u;
label_440260:
    // 0x440260: 0x92420062  lbu         $v0, 0x62($s2)
    ctx->pc = 0x440260u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 98)));
label_440264:
    // 0x440264: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_440268:
    if (ctx->pc == 0x440268u) {
        ctx->pc = 0x440268u;
            // 0x440268: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44026Cu;
        goto label_44026c;
    }
    ctx->pc = 0x440264u;
    {
        const bool branch_taken_0x440264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x440264) {
            ctx->pc = 0x440268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440264u;
            // 0x440268: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440288u;
            goto label_440288;
        }
    }
    ctx->pc = 0x44026Cu;
label_44026c:
    // 0x44026c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x44026cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_440270:
    // 0x440270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x440270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_440274:
    // 0x440274: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x440274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_440278:
    // 0x440278: 0x320f809  jalr        $t9
label_44027c:
    if (ctx->pc == 0x44027Cu) {
        ctx->pc = 0x44027Cu;
            // 0x44027c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x440280u;
        goto label_440280;
    }
    ctx->pc = 0x440278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x440280u);
        ctx->pc = 0x44027Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440278u;
            // 0x44027c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x440280u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x440280u; }
            if (ctx->pc != 0x440280u) { return; }
        }
        }
    }
    ctx->pc = 0x440280u;
label_440280:
    // 0x440280: 0x10000009  b           . + 4 + (0x9 << 2)
label_440284:
    if (ctx->pc == 0x440284u) {
        ctx->pc = 0x440284u;
            // 0x440284: 0xa6400060  sh          $zero, 0x60($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x440288u;
        goto label_440288;
    }
    ctx->pc = 0x440280u;
    {
        const bool branch_taken_0x440280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x440284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440280u;
            // 0x440284: 0xa6400060  sh          $zero, 0x60($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440280) {
            ctx->pc = 0x4402A8u;
            goto label_4402a8;
        }
    }
    ctx->pc = 0x440288u;
label_440288:
    // 0x440288: 0xc1101c4  jal         func_440710
label_44028c:
    if (ctx->pc == 0x44028Cu) {
        ctx->pc = 0x44028Cu;
            // 0x44028c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x440290u;
        goto label_440290;
    }
    ctx->pc = 0x440288u;
    SET_GPR_U32(ctx, 31, 0x440290u);
    ctx->pc = 0x44028Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440288u;
            // 0x44028c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x440710u;
    if (runtime->hasFunction(0x440710u)) {
        auto targetFn = runtime->lookupFunction(0x440710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440290u; }
        if (ctx->pc != 0x440290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00440710_0x440710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440290u; }
        if (ctx->pc != 0x440290u) { return; }
    }
    ctx->pc = 0x440290u;
label_440290:
    // 0x440290: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x440290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_440294:
    // 0x440294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x440294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_440298:
    // 0x440298: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x440298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_44029c:
    // 0x44029c: 0x320f809  jalr        $t9
label_4402a0:
    if (ctx->pc == 0x4402A0u) {
        ctx->pc = 0x4402A0u;
            // 0x4402a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4402A4u;
        goto label_4402a4;
    }
    ctx->pc = 0x44029Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4402A4u);
        ctx->pc = 0x4402A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44029Cu;
            // 0x4402a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4402A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4402A4u; }
            if (ctx->pc != 0x4402A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4402A4u;
label_4402a4:
    // 0x4402a4: 0xa6400060  sh          $zero, 0x60($s2)
    ctx->pc = 0x4402a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 0));
label_4402a8:
    // 0x4402a8: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_4402ac:
    if (ctx->pc == 0x4402ACu) {
        ctx->pc = 0x4402B0u;
        goto label_4402b0;
    }
    ctx->pc = 0x4402A8u;
    {
        const bool branch_taken_0x4402a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4402a8) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x4402B0u;
label_4402b0:
    // 0x4402b0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4402b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4402b4:
    // 0x4402b4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x4402b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_4402b8:
    // 0x4402b8: 0x106000b5  beqz        $v1, . + 4 + (0xB5 << 2)
label_4402bc:
    if (ctx->pc == 0x4402BCu) {
        ctx->pc = 0x4402C0u;
        goto label_4402c0;
    }
    ctx->pc = 0x4402B8u;
    {
        const bool branch_taken_0x4402b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4402b8) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x4402C0u;
label_4402c0:
    // 0x4402c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4402c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4402c4:
    // 0x4402c4: 0xc073234  jal         func_1CC8D0
label_4402c8:
    if (ctx->pc == 0x4402C8u) {
        ctx->pc = 0x4402C8u;
            // 0x4402c8: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4402CCu;
        goto label_4402cc;
    }
    ctx->pc = 0x4402C4u;
    SET_GPR_U32(ctx, 31, 0x4402CCu);
    ctx->pc = 0x4402C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4402C4u;
            // 0x4402c8: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4402CCu; }
        if (ctx->pc != 0x4402CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4402CCu; }
        if (ctx->pc != 0x4402CCu) { return; }
    }
    ctx->pc = 0x4402CCu;
label_4402cc:
    // 0x4402cc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4402ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4402d0:
    // 0x4402d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4402d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4402d4:
    // 0x4402d4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4402d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4402d8:
    // 0x4402d8: 0x320f809  jalr        $t9
label_4402dc:
    if (ctx->pc == 0x4402DCu) {
        ctx->pc = 0x4402DCu;
            // 0x4402dc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4402E0u;
        goto label_4402e0;
    }
    ctx->pc = 0x4402D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4402E0u);
        ctx->pc = 0x4402DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4402D8u;
            // 0x4402dc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4402E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4402E0u; }
            if (ctx->pc != 0x4402E0u) { return; }
        }
        }
    }
    ctx->pc = 0x4402E0u;
label_4402e0:
    // 0x4402e0: 0x100000ab  b           . + 4 + (0xAB << 2)
label_4402e4:
    if (ctx->pc == 0x4402E4u) {
        ctx->pc = 0x4402E8u;
        goto label_4402e8;
    }
    ctx->pc = 0x4402E0u;
    {
        const bool branch_taken_0x4402e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4402e0) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x4402E8u;
label_4402e8:
    // 0x4402e8: 0xc642005c  lwc1        $f2, 0x5C($s2)
    ctx->pc = 0x4402e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4402ec:
    // 0x4402ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4402ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4402f0:
    // 0x4402f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4402f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4402f4:
    // 0x4402f4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4402f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4402f8:
    // 0x4402f8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x4402f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4402fc:
    // 0x4402fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4402fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_440300:
    // 0x440300: 0x0  nop
    ctx->pc = 0x440300u;
    // NOP
label_440304:
    // 0x440304: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x440304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_440308:
    // 0x440308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x440308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44030c:
    // 0x44030c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_440310:
    if (ctx->pc == 0x440310u) {
        ctx->pc = 0x440310u;
            // 0x440310: 0xe641005c  swc1        $f1, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x440314u;
        goto label_440314;
    }
    ctx->pc = 0x44030Cu;
    {
        const bool branch_taken_0x44030c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x440310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44030Cu;
            // 0x440310: 0xe641005c  swc1        $f1, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44030c) {
            ctx->pc = 0x440318u;
            goto label_440318;
        }
    }
    ctx->pc = 0x440314u;
label_440314:
    // 0x440314: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x440314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440318:
    // 0x440318: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x440318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_44031c:
    // 0x44031c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x44031cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_440320:
    // 0x440320: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x440320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_440324:
    // 0x440324: 0x320f809  jalr        $t9
label_440328:
    if (ctx->pc == 0x440328u) {
        ctx->pc = 0x440328u;
            // 0x440328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44032Cu;
        goto label_44032c;
    }
    ctx->pc = 0x440324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44032Cu);
        ctx->pc = 0x440328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440324u;
            // 0x440328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44032Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44032Cu; }
            if (ctx->pc != 0x44032Cu) { return; }
        }
        }
    }
    ctx->pc = 0x44032Cu;
label_44032c:
    // 0x44032c: 0x10000098  b           . + 4 + (0x98 << 2)
label_440330:
    if (ctx->pc == 0x440330u) {
        ctx->pc = 0x440334u;
        goto label_440334;
    }
    ctx->pc = 0x44032Cu;
    {
        const bool branch_taken_0x44032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44032c) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x440334u;
label_440334:
    // 0x440334: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x440334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_440338:
    // 0x440338: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x440338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_44033c:
    // 0x44033c: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
label_440340:
    if (ctx->pc == 0x440340u) {
        ctx->pc = 0x440344u;
        goto label_440344;
    }
    ctx->pc = 0x44033Cu;
    {
        const bool branch_taken_0x44033c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44033c) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x440344u;
label_440344:
    // 0x440344: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x440344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_440348:
    // 0x440348: 0xc073234  jal         func_1CC8D0
label_44034c:
    if (ctx->pc == 0x44034Cu) {
        ctx->pc = 0x44034Cu;
            // 0x44034c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x440350u;
        goto label_440350;
    }
    ctx->pc = 0x440348u;
    SET_GPR_U32(ctx, 31, 0x440350u);
    ctx->pc = 0x44034Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440348u;
            // 0x44034c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440350u; }
        if (ctx->pc != 0x440350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440350u; }
        if (ctx->pc != 0x440350u) { return; }
    }
    ctx->pc = 0x440350u;
label_440350:
    // 0x440350: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x440350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_440354:
    // 0x440354: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x440354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_440358:
    // 0x440358: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x440358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_44035c:
    // 0x44035c: 0x320f809  jalr        $t9
label_440360:
    if (ctx->pc == 0x440360u) {
        ctx->pc = 0x440360u;
            // 0x440360: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x440364u;
        goto label_440364;
    }
    ctx->pc = 0x44035Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x440364u);
        ctx->pc = 0x440360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44035Cu;
            // 0x440360: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x440364u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x440364u; }
            if (ctx->pc != 0x440364u) { return; }
        }
        }
    }
    ctx->pc = 0x440364u;
label_440364:
    // 0x440364: 0xa6400060  sh          $zero, 0x60($s2)
    ctx->pc = 0x440364u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 0));
label_440368:
    // 0x440368: 0x10000089  b           . + 4 + (0x89 << 2)
label_44036c:
    if (ctx->pc == 0x44036Cu) {
        ctx->pc = 0x44036Cu;
            // 0x44036c: 0xa2400062  sb          $zero, 0x62($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x440370u;
        goto label_440370;
    }
    ctx->pc = 0x440368u;
    {
        const bool branch_taken_0x440368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44036Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440368u;
            // 0x44036c: 0xa2400062  sb          $zero, 0x62($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440368) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x440370u;
label_440370:
    // 0x440370: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x440370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
label_440374:
    // 0x440374: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x440374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_440378:
    // 0x440378: 0xc1101c0  jal         func_440700
label_44037c:
    if (ctx->pc == 0x44037Cu) {
        ctx->pc = 0x44037Cu;
            // 0x44037c: 0x34450030  ori         $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
        ctx->pc = 0x440380u;
        goto label_440380;
    }
    ctx->pc = 0x440378u;
    SET_GPR_U32(ctx, 31, 0x440380u);
    ctx->pc = 0x44037Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440378u;
            // 0x44037c: 0x34450030  ori         $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
    ctx->pc = 0x440700u;
    if (runtime->hasFunction(0x440700u)) {
        auto targetFn = runtime->lookupFunction(0x440700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440380u; }
        if (ctx->pc != 0x440380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00440700_0x440700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440380u; }
        if (ctx->pc != 0x440380u) { return; }
    }
    ctx->pc = 0x440380u;
label_440380:
    // 0x440380: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_440384:
    if (ctx->pc == 0x440384u) {
        ctx->pc = 0x440384u;
            // 0x440384: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x440388u;
        goto label_440388;
    }
    ctx->pc = 0x440380u;
    {
        const bool branch_taken_0x440380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x440380) {
            ctx->pc = 0x440384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440380u;
            // 0x440384: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4403A4u;
            goto label_4403a4;
        }
    }
    ctx->pc = 0x440388u;
label_440388:
    // 0x440388: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x440388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_44038c:
    // 0x44038c: 0xc0ec314  jal         func_3B0C50
label_440390:
    if (ctx->pc == 0x440390u) {
        ctx->pc = 0x440390u;
            // 0x440390: 0x240500a9  addiu       $a1, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x440394u;
        goto label_440394;
    }
    ctx->pc = 0x44038Cu;
    SET_GPR_U32(ctx, 31, 0x440394u);
    ctx->pc = 0x440390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44038Cu;
            // 0x440390: 0x240500a9  addiu       $a1, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440394u; }
        if (ctx->pc != 0x440394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440394u; }
        if (ctx->pc != 0x440394u) { return; }
    }
    ctx->pc = 0x440394u;
label_440394:
    // 0x440394: 0x92420062  lbu         $v0, 0x62($s2)
    ctx->pc = 0x440394u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 98)));
label_440398:
    // 0x440398: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x440398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_44039c:
    // 0x44039c: 0xa2420062  sb          $v0, 0x62($s2)
    ctx->pc = 0x44039cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 2));
label_4403a0:
    // 0x4403a0: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4403a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4403a4:
    // 0x4403a4: 0xc1101c0  jal         func_440700
label_4403a8:
    if (ctx->pc == 0x4403A8u) {
        ctx->pc = 0x4403A8u;
            // 0x4403a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4403ACu;
        goto label_4403ac;
    }
    ctx->pc = 0x4403A4u;
    SET_GPR_U32(ctx, 31, 0x4403ACu);
    ctx->pc = 0x4403A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4403A4u;
            // 0x4403a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x440700u;
    if (runtime->hasFunction(0x440700u)) {
        auto targetFn = runtime->lookupFunction(0x440700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4403ACu; }
        if (ctx->pc != 0x4403ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00440700_0x440700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4403ACu; }
        if (ctx->pc != 0x4403ACu) { return; }
    }
    ctx->pc = 0x4403ACu;
label_4403ac:
    // 0x4403ac: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
label_4403b0:
    if (ctx->pc == 0x4403B0u) {
        ctx->pc = 0x4403B4u;
        goto label_4403b4;
    }
    ctx->pc = 0x4403ACu;
    {
        const bool branch_taken_0x4403ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4403ac) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x4403B4u;
label_4403b4:
    // 0x4403b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4403b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4403b8:
    // 0x4403b8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4403b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4403bc:
    // 0x4403bc: 0xc0ec314  jal         func_3B0C50
label_4403c0:
    if (ctx->pc == 0x4403C0u) {
        ctx->pc = 0x4403C0u;
            // 0x4403c0: 0x344500a9  ori         $a1, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4403C4u;
        goto label_4403c4;
    }
    ctx->pc = 0x4403BCu;
    SET_GPR_U32(ctx, 31, 0x4403C4u);
    ctx->pc = 0x4403C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4403BCu;
            // 0x4403c0: 0x344500a9  ori         $a1, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4403C4u; }
        if (ctx->pc != 0x4403C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4403C4u; }
        if (ctx->pc != 0x4403C4u) { return; }
    }
    ctx->pc = 0x4403C4u;
label_4403c4:
    // 0x4403c4: 0x92420062  lbu         $v0, 0x62($s2)
    ctx->pc = 0x4403c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 98)));
label_4403c8:
    // 0x4403c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_4403cc:
    if (ctx->pc == 0x4403CCu) {
        ctx->pc = 0x4403CCu;
            // 0x4403cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4403D0u;
        goto label_4403d0;
    }
    ctx->pc = 0x4403C8u;
    {
        const bool branch_taken_0x4403c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4403c8) {
            ctx->pc = 0x4403CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4403C8u;
            // 0x4403cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4403ECu;
            goto label_4403ec;
        }
    }
    ctx->pc = 0x4403D0u;
label_4403d0:
    // 0x4403d0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4403d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4403d4:
    // 0x4403d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4403d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4403d8:
    // 0x4403d8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4403d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4403dc:
    // 0x4403dc: 0x320f809  jalr        $t9
label_4403e0:
    if (ctx->pc == 0x4403E0u) {
        ctx->pc = 0x4403E0u;
            // 0x4403e0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4403E4u;
        goto label_4403e4;
    }
    ctx->pc = 0x4403DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4403E4u);
        ctx->pc = 0x4403E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4403DCu;
            // 0x4403e0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4403E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4403E4u; }
            if (ctx->pc != 0x4403E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4403E4u;
label_4403e4:
    // 0x4403e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_4403e8:
    if (ctx->pc == 0x4403E8u) {
        ctx->pc = 0x4403E8u;
            // 0x4403e8: 0xa6400060  sh          $zero, 0x60($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4403ECu;
        goto label_4403ec;
    }
    ctx->pc = 0x4403E4u;
    {
        const bool branch_taken_0x4403e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4403E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4403E4u;
            // 0x4403e8: 0xa6400060  sh          $zero, 0x60($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4403e4) {
            ctx->pc = 0x440414u;
            goto label_440414;
        }
    }
    ctx->pc = 0x4403ECu;
label_4403ec:
    // 0x4403ec: 0xc1101c4  jal         func_440710
label_4403f0:
    if (ctx->pc == 0x4403F0u) {
        ctx->pc = 0x4403F0u;
            // 0x4403f0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x4403F4u;
        goto label_4403f4;
    }
    ctx->pc = 0x4403ECu;
    SET_GPR_U32(ctx, 31, 0x4403F4u);
    ctx->pc = 0x4403F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4403ECu;
            // 0x4403f0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x440710u;
    if (runtime->hasFunction(0x440710u)) {
        auto targetFn = runtime->lookupFunction(0x440710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4403F4u; }
        if (ctx->pc != 0x4403F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00440710_0x440710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4403F4u; }
        if (ctx->pc != 0x4403F4u) { return; }
    }
    ctx->pc = 0x4403F4u;
label_4403f4:
    // 0x4403f4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4403f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4403f8:
    // 0x4403f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4403f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4403fc:
    // 0x4403fc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4403fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_440400:
    // 0x440400: 0x320f809  jalr        $t9
label_440404:
    if (ctx->pc == 0x440404u) {
        ctx->pc = 0x440404u;
            // 0x440404: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x440408u;
        goto label_440408;
    }
    ctx->pc = 0x440400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x440408u);
        ctx->pc = 0x440404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440400u;
            // 0x440404: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x440408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x440408u; }
            if (ctx->pc != 0x440408u) { return; }
        }
        }
    }
    ctx->pc = 0x440408u;
label_440408:
    // 0x440408: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x440408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_44040c:
    // 0x44040c: 0xa2400062  sb          $zero, 0x62($s2)
    ctx->pc = 0x44040cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 0));
label_440410:
    // 0x440410: 0xa6400060  sh          $zero, 0x60($s2)
    ctx->pc = 0x440410u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 0));
label_440414:
    // 0x440414: 0x1000005e  b           . + 4 + (0x5E << 2)
label_440418:
    if (ctx->pc == 0x440418u) {
        ctx->pc = 0x44041Cu;
        goto label_44041c;
    }
    ctx->pc = 0x440414u;
    {
        const bool branch_taken_0x440414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x440414) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x44041Cu;
label_44041c:
    // 0x44041c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x44041cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_440420:
    // 0x440420: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x440420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_440424:
    // 0x440424: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
label_440428:
    if (ctx->pc == 0x440428u) {
        ctx->pc = 0x44042Cu;
        goto label_44042c;
    }
    ctx->pc = 0x440424u;
    {
        const bool branch_taken_0x440424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x440424) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x44042Cu;
label_44042c:
    // 0x44042c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x44042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_440430:
    // 0x440430: 0xc073234  jal         func_1CC8D0
label_440434:
    if (ctx->pc == 0x440434u) {
        ctx->pc = 0x440434u;
            // 0x440434: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x440438u;
        goto label_440438;
    }
    ctx->pc = 0x440430u;
    SET_GPR_U32(ctx, 31, 0x440438u);
    ctx->pc = 0x440434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440430u;
            // 0x440434: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440438u; }
        if (ctx->pc != 0x440438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440438u; }
        if (ctx->pc != 0x440438u) { return; }
    }
    ctx->pc = 0x440438u;
label_440438:
    // 0x440438: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x440438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_44043c:
    // 0x44043c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44043cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_440440:
    // 0x440440: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x440440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_440444:
    // 0x440444: 0x320f809  jalr        $t9
label_440448:
    if (ctx->pc == 0x440448u) {
        ctx->pc = 0x440448u;
            // 0x440448: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x44044Cu;
        goto label_44044c;
    }
    ctx->pc = 0x440444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44044Cu);
        ctx->pc = 0x440448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440444u;
            // 0x440448: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44044Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44044Cu; }
            if (ctx->pc != 0x44044Cu) { return; }
        }
        }
    }
    ctx->pc = 0x44044Cu;
label_44044c:
    // 0x44044c: 0x10000050  b           . + 4 + (0x50 << 2)
label_440450:
    if (ctx->pc == 0x440450u) {
        ctx->pc = 0x440454u;
        goto label_440454;
    }
    ctx->pc = 0x44044Cu;
    {
        const bool branch_taken_0x44044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44044c) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x440454u;
label_440454:
    // 0x440454: 0xc077318  jal         func_1DCC60
label_440458:
    if (ctx->pc == 0x440458u) {
        ctx->pc = 0x44045Cu;
        goto label_44045c;
    }
    ctx->pc = 0x440454u;
    SET_GPR_U32(ctx, 31, 0x44045Cu);
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44045Cu; }
        if (ctx->pc != 0x44045Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44045Cu; }
        if (ctx->pc != 0x44045Cu) { return; }
    }
    ctx->pc = 0x44045Cu;
label_44045c:
    // 0x44045c: 0xc0775b4  jal         func_1DD6D0
label_440460:
    if (ctx->pc == 0x440460u) {
        ctx->pc = 0x440460u;
            // 0x440460: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x440464u;
        goto label_440464;
    }
    ctx->pc = 0x44045Cu;
    SET_GPR_U32(ctx, 31, 0x440464u);
    ctx->pc = 0x440460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44045Cu;
            // 0x440460: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440464u; }
        if (ctx->pc != 0x440464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440464u; }
        if (ctx->pc != 0x440464u) { return; }
    }
    ctx->pc = 0x440464u;
label_440464:
    // 0x440464: 0xc641005c  lwc1        $f1, 0x5C($s2)
    ctx->pc = 0x440464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_440468:
    // 0x440468: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x440468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
label_44046c:
    // 0x44046c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x44046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_440470:
    // 0x440470: 0x34450030  ori         $a1, $v0, 0x30
    ctx->pc = 0x440470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
label_440474:
    // 0x440474: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x440474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_440478:
    // 0x440478: 0xc1101c0  jal         func_440700
label_44047c:
    if (ctx->pc == 0x44047Cu) {
        ctx->pc = 0x44047Cu;
            // 0x44047c: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x440480u;
        goto label_440480;
    }
    ctx->pc = 0x440478u;
    SET_GPR_U32(ctx, 31, 0x440480u);
    ctx->pc = 0x44047Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440478u;
            // 0x44047c: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x440700u;
    if (runtime->hasFunction(0x440700u)) {
        auto targetFn = runtime->lookupFunction(0x440700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440480u; }
        if (ctx->pc != 0x440480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00440700_0x440700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440480u; }
        if (ctx->pc != 0x440480u) { return; }
    }
    ctx->pc = 0x440480u;
label_440480:
    // 0x440480: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_440484:
    if (ctx->pc == 0x440484u) {
        ctx->pc = 0x440484u;
            // 0x440484: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x440488u;
        goto label_440488;
    }
    ctx->pc = 0x440480u;
    {
        const bool branch_taken_0x440480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x440480) {
            ctx->pc = 0x440484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440480u;
            // 0x440484: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4404A4u;
            goto label_4404a4;
        }
    }
    ctx->pc = 0x440488u;
label_440488:
    // 0x440488: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x440488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_44048c:
    // 0x44048c: 0xc0ec314  jal         func_3B0C50
label_440490:
    if (ctx->pc == 0x440490u) {
        ctx->pc = 0x440490u;
            // 0x440490: 0x240500a9  addiu       $a1, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x440494u;
        goto label_440494;
    }
    ctx->pc = 0x44048Cu;
    SET_GPR_U32(ctx, 31, 0x440494u);
    ctx->pc = 0x440490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44048Cu;
            // 0x440490: 0x240500a9  addiu       $a1, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440494u; }
        if (ctx->pc != 0x440494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440494u; }
        if (ctx->pc != 0x440494u) { return; }
    }
    ctx->pc = 0x440494u;
label_440494:
    // 0x440494: 0x92420062  lbu         $v0, 0x62($s2)
    ctx->pc = 0x440494u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 98)));
label_440498:
    // 0x440498: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x440498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_44049c:
    // 0x44049c: 0xa2420062  sb          $v0, 0x62($s2)
    ctx->pc = 0x44049cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 2));
label_4404a0:
    // 0x4404a0: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4404a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4404a4:
    // 0x4404a4: 0xc1101c0  jal         func_440700
label_4404a8:
    if (ctx->pc == 0x4404A8u) {
        ctx->pc = 0x4404A8u;
            // 0x4404a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4404ACu;
        goto label_4404ac;
    }
    ctx->pc = 0x4404A4u;
    SET_GPR_U32(ctx, 31, 0x4404ACu);
    ctx->pc = 0x4404A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4404A4u;
            // 0x4404a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x440700u;
    if (runtime->hasFunction(0x440700u)) {
        auto targetFn = runtime->lookupFunction(0x440700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4404ACu; }
        if (ctx->pc != 0x4404ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00440700_0x440700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4404ACu; }
        if (ctx->pc != 0x4404ACu) { return; }
    }
    ctx->pc = 0x4404ACu;
label_4404ac:
    // 0x4404ac: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_4404b0:
    if (ctx->pc == 0x4404B0u) {
        ctx->pc = 0x4404B0u;
            // 0x4404b0: 0xc641005c  lwc1        $f1, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4404B4u;
        goto label_4404b4;
    }
    ctx->pc = 0x4404ACu;
    {
        const bool branch_taken_0x4404ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4404ac) {
            ctx->pc = 0x4404B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4404ACu;
            // 0x4404b0: 0xc641005c  lwc1        $f1, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x440510u;
            goto label_440510;
        }
    }
    ctx->pc = 0x4404B4u;
label_4404b4:
    // 0x4404b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4404b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4404b8:
    // 0x4404b8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4404b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4404bc:
    // 0x4404bc: 0xc0ec314  jal         func_3B0C50
label_4404c0:
    if (ctx->pc == 0x4404C0u) {
        ctx->pc = 0x4404C0u;
            // 0x4404c0: 0x344500a9  ori         $a1, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4404C4u;
        goto label_4404c4;
    }
    ctx->pc = 0x4404BCu;
    SET_GPR_U32(ctx, 31, 0x4404C4u);
    ctx->pc = 0x4404C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4404BCu;
            // 0x4404c0: 0x344500a9  ori         $a1, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4404C4u; }
        if (ctx->pc != 0x4404C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4404C4u; }
        if (ctx->pc != 0x4404C4u) { return; }
    }
    ctx->pc = 0x4404C4u;
label_4404c4:
    // 0x4404c4: 0x92420062  lbu         $v0, 0x62($s2)
    ctx->pc = 0x4404c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 98)));
label_4404c8:
    // 0x4404c8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_4404cc:
    if (ctx->pc == 0x4404CCu) {
        ctx->pc = 0x4404CCu;
            // 0x4404cc: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4404D0u;
        goto label_4404d0;
    }
    ctx->pc = 0x4404C8u;
    {
        const bool branch_taken_0x4404c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4404c8) {
            ctx->pc = 0x4404CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4404C8u;
            // 0x4404cc: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4404F4u;
            goto label_4404f4;
        }
    }
    ctx->pc = 0x4404D0u;
label_4404d0:
    // 0x4404d0: 0xc11016c  jal         func_4405B0
label_4404d4:
    if (ctx->pc == 0x4404D4u) {
        ctx->pc = 0x4404D4u;
            // 0x4404d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4404D8u;
        goto label_4404d8;
    }
    ctx->pc = 0x4404D0u;
    SET_GPR_U32(ctx, 31, 0x4404D8u);
    ctx->pc = 0x4404D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4404D0u;
            // 0x4404d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4405B0u;
    if (runtime->hasFunction(0x4405B0u)) {
        auto targetFn = runtime->lookupFunction(0x4405B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4404D8u; }
        if (ctx->pc != 0x4404D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004405B0_0x4405b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4404D8u; }
        if (ctx->pc != 0x4404D8u) { return; }
    }
    ctx->pc = 0x4404D8u;
label_4404d8:
    // 0x4404d8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4404d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4404dc:
    // 0x4404dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4404dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4404e0:
    // 0x4404e0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4404e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4404e4:
    // 0x4404e4: 0x320f809  jalr        $t9
label_4404e8:
    if (ctx->pc == 0x4404E8u) {
        ctx->pc = 0x4404E8u;
            // 0x4404e8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4404ECu;
        goto label_4404ec;
    }
    ctx->pc = 0x4404E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4404ECu);
        ctx->pc = 0x4404E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4404E4u;
            // 0x4404e8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4404ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4404ECu; }
            if (ctx->pc != 0x4404ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4404ECu;
label_4404ec:
    // 0x4404ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_4404f0:
    if (ctx->pc == 0x4404F0u) {
        ctx->pc = 0x4404F0u;
            // 0x4404f0: 0xa6400060  sh          $zero, 0x60($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4404F4u;
        goto label_4404f4;
    }
    ctx->pc = 0x4404ECu;
    {
        const bool branch_taken_0x4404ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4404F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4404ECu;
            // 0x4404f0: 0xa6400060  sh          $zero, 0x60($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4404ec) {
            ctx->pc = 0x440508u;
            goto label_440508;
        }
    }
    ctx->pc = 0x4404F4u;
label_4404f4:
    // 0x4404f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4404f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4404f8:
    // 0x4404f8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4404f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4404fc:
    // 0x4404fc: 0x320f809  jalr        $t9
label_440500:
    if (ctx->pc == 0x440500u) {
        ctx->pc = 0x440500u;
            // 0x440500: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x440504u;
        goto label_440504;
    }
    ctx->pc = 0x4404FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x440504u);
        ctx->pc = 0x440500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4404FCu;
            // 0x440500: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x440504u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x440504u; }
            if (ctx->pc != 0x440504u) { return; }
        }
        }
    }
    ctx->pc = 0x440504u;
label_440504:
    // 0x440504: 0xa6400060  sh          $zero, 0x60($s2)
    ctx->pc = 0x440504u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 0));
label_440508:
    // 0x440508: 0x10000021  b           . + 4 + (0x21 << 2)
label_44050c:
    if (ctx->pc == 0x44050Cu) {
        ctx->pc = 0x44050Cu;
            // 0x44050c: 0xa2400062  sb          $zero, 0x62($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x440510u;
        goto label_440510;
    }
    ctx->pc = 0x440508u;
    {
        const bool branch_taken_0x440508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44050Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440508u;
            // 0x44050c: 0xa2400062  sb          $zero, 0x62($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440508) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x440510u;
label_440510:
    // 0x440510: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x440510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_440514:
    // 0x440514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x440514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_440518:
    // 0x440518: 0x0  nop
    ctx->pc = 0x440518u;
    // NOP
label_44051c:
    // 0x44051c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x44051cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_440520:
    // 0x440520: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_440524:
    if (ctx->pc == 0x440524u) {
        ctx->pc = 0x440528u;
        goto label_440528;
    }
    ctx->pc = 0x440520u;
    {
        const bool branch_taken_0x440520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x440520) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x440528u;
label_440528:
    // 0x440528: 0xc11016c  jal         func_4405B0
label_44052c:
    if (ctx->pc == 0x44052Cu) {
        ctx->pc = 0x44052Cu;
            // 0x44052c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x440530u;
        goto label_440530;
    }
    ctx->pc = 0x440528u;
    SET_GPR_U32(ctx, 31, 0x440530u);
    ctx->pc = 0x44052Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440528u;
            // 0x44052c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4405B0u;
    if (runtime->hasFunction(0x4405B0u)) {
        auto targetFn = runtime->lookupFunction(0x4405B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440530u; }
        if (ctx->pc != 0x440530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004405B0_0x4405b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440530u; }
        if (ctx->pc != 0x440530u) { return; }
    }
    ctx->pc = 0x440530u;
label_440530:
    // 0x440530: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x440530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_440534:
    // 0x440534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x440534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_440538:
    // 0x440538: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x440538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_44053c:
    // 0x44053c: 0x320f809  jalr        $t9
label_440540:
    if (ctx->pc == 0x440540u) {
        ctx->pc = 0x440540u;
            // 0x440540: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x440544u;
        goto label_440544;
    }
    ctx->pc = 0x44053Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x440544u);
        ctx->pc = 0x440540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44053Cu;
            // 0x440540: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x440544u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x440544u; }
            if (ctx->pc != 0x440544u) { return; }
        }
        }
    }
    ctx->pc = 0x440544u;
label_440544:
    // 0x440544: 0xa6400060  sh          $zero, 0x60($s2)
    ctx->pc = 0x440544u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 0));
label_440548:
    // 0x440548: 0x10000011  b           . + 4 + (0x11 << 2)
label_44054c:
    if (ctx->pc == 0x44054Cu) {
        ctx->pc = 0x44054Cu;
            // 0x44054c: 0xa2400062  sb          $zero, 0x62($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x440550u;
        goto label_440550;
    }
    ctx->pc = 0x440548u;
    {
        const bool branch_taken_0x440548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44054Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440548u;
            // 0x44054c: 0xa2400062  sb          $zero, 0x62($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440548) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x440550u;
label_440550:
    // 0x440550: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x440550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_440554:
    // 0x440554: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x440554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_440558:
    // 0x440558: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_44055c:
    if (ctx->pc == 0x44055Cu) {
        ctx->pc = 0x440560u;
        goto label_440560;
    }
    ctx->pc = 0x440558u;
    {
        const bool branch_taken_0x440558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x440558) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x440560u;
label_440560:
    // 0x440560: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x440560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_440564:
    // 0x440564: 0xc073234  jal         func_1CC8D0
label_440568:
    if (ctx->pc == 0x440568u) {
        ctx->pc = 0x440568u;
            // 0x440568: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x44056Cu;
        goto label_44056c;
    }
    ctx->pc = 0x440564u;
    SET_GPR_U32(ctx, 31, 0x44056Cu);
    ctx->pc = 0x440568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440564u;
            // 0x440568: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44056Cu; }
        if (ctx->pc != 0x44056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44056Cu; }
        if (ctx->pc != 0x44056Cu) { return; }
    }
    ctx->pc = 0x44056Cu;
label_44056c:
    // 0x44056c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x44056cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_440570:
    // 0x440570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x440570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_440574:
    // 0x440574: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x440574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_440578:
    // 0x440578: 0x320f809  jalr        $t9
label_44057c:
    if (ctx->pc == 0x44057Cu) {
        ctx->pc = 0x44057Cu;
            // 0x44057c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x440580u;
        goto label_440580;
    }
    ctx->pc = 0x440578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x440580u);
        ctx->pc = 0x44057Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440578u;
            // 0x44057c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x440580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x440580u; }
            if (ctx->pc != 0x440580u) { return; }
        }
        }
    }
    ctx->pc = 0x440580u;
label_440580:
    // 0x440580: 0x10000003  b           . + 4 + (0x3 << 2)
label_440584:
    if (ctx->pc == 0x440584u) {
        ctx->pc = 0x440588u;
        goto label_440588;
    }
    ctx->pc = 0x440580u;
    {
        const bool branch_taken_0x440580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x440580) {
            ctx->pc = 0x440590u;
            goto label_440590;
        }
    }
    ctx->pc = 0x440588u;
label_440588:
    // 0x440588: 0xc11f398  jal         func_47CE60
label_44058c:
    if (ctx->pc == 0x44058Cu) {
        ctx->pc = 0x440590u;
        goto label_440590;
    }
    ctx->pc = 0x440588u;
    SET_GPR_U32(ctx, 31, 0x440590u);
    ctx->pc = 0x47CE60u;
    if (runtime->hasFunction(0x47CE60u)) {
        auto targetFn = runtime->lookupFunction(0x47CE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440590u; }
        if (ctx->pc != 0x440590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047CE60_0x47ce60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440590u; }
        if (ctx->pc != 0x440590u) { return; }
    }
    ctx->pc = 0x440590u;
label_440590:
    // 0x440590: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x440590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_440594:
    // 0x440594: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x440594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_440598:
    // 0x440598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x440598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44059c:
    // 0x44059c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44059cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4405a0:
    // 0x4405a0: 0x3e00008  jr          $ra
label_4405a4:
    if (ctx->pc == 0x4405A4u) {
        ctx->pc = 0x4405A4u;
            // 0x4405a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4405A8u;
        goto label_4405a8;
    }
    ctx->pc = 0x4405A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4405A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4405A0u;
            // 0x4405a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4405A8u;
label_4405a8:
    // 0x4405a8: 0x0  nop
    ctx->pc = 0x4405a8u;
    // NOP
label_4405ac:
    // 0x4405ac: 0x0  nop
    ctx->pc = 0x4405acu;
    // NOP
}
