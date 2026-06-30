#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027FE80
// Address: 0x27fe80 - 0x281060
void sub_0027FE80_0x27fe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FE80_0x27fe80");
#endif

    switch (ctx->pc) {
        case 0x27fe80u: goto label_27fe80;
        case 0x27fe84u: goto label_27fe84;
        case 0x27fe88u: goto label_27fe88;
        case 0x27fe8cu: goto label_27fe8c;
        case 0x27fe90u: goto label_27fe90;
        case 0x27fe94u: goto label_27fe94;
        case 0x27fe98u: goto label_27fe98;
        case 0x27fe9cu: goto label_27fe9c;
        case 0x27fea0u: goto label_27fea0;
        case 0x27fea4u: goto label_27fea4;
        case 0x27fea8u: goto label_27fea8;
        case 0x27feacu: goto label_27feac;
        case 0x27feb0u: goto label_27feb0;
        case 0x27feb4u: goto label_27feb4;
        case 0x27feb8u: goto label_27feb8;
        case 0x27febcu: goto label_27febc;
        case 0x27fec0u: goto label_27fec0;
        case 0x27fec4u: goto label_27fec4;
        case 0x27fec8u: goto label_27fec8;
        case 0x27feccu: goto label_27fecc;
        case 0x27fed0u: goto label_27fed0;
        case 0x27fed4u: goto label_27fed4;
        case 0x27fed8u: goto label_27fed8;
        case 0x27fedcu: goto label_27fedc;
        case 0x27fee0u: goto label_27fee0;
        case 0x27fee4u: goto label_27fee4;
        case 0x27fee8u: goto label_27fee8;
        case 0x27feecu: goto label_27feec;
        case 0x27fef0u: goto label_27fef0;
        case 0x27fef4u: goto label_27fef4;
        case 0x27fef8u: goto label_27fef8;
        case 0x27fefcu: goto label_27fefc;
        case 0x27ff00u: goto label_27ff00;
        case 0x27ff04u: goto label_27ff04;
        case 0x27ff08u: goto label_27ff08;
        case 0x27ff0cu: goto label_27ff0c;
        case 0x27ff10u: goto label_27ff10;
        case 0x27ff14u: goto label_27ff14;
        case 0x27ff18u: goto label_27ff18;
        case 0x27ff1cu: goto label_27ff1c;
        case 0x27ff20u: goto label_27ff20;
        case 0x27ff24u: goto label_27ff24;
        case 0x27ff28u: goto label_27ff28;
        case 0x27ff2cu: goto label_27ff2c;
        case 0x27ff30u: goto label_27ff30;
        case 0x27ff34u: goto label_27ff34;
        case 0x27ff38u: goto label_27ff38;
        case 0x27ff3cu: goto label_27ff3c;
        case 0x27ff40u: goto label_27ff40;
        case 0x27ff44u: goto label_27ff44;
        case 0x27ff48u: goto label_27ff48;
        case 0x27ff4cu: goto label_27ff4c;
        case 0x27ff50u: goto label_27ff50;
        case 0x27ff54u: goto label_27ff54;
        case 0x27ff58u: goto label_27ff58;
        case 0x27ff5cu: goto label_27ff5c;
        case 0x27ff60u: goto label_27ff60;
        case 0x27ff64u: goto label_27ff64;
        case 0x27ff68u: goto label_27ff68;
        case 0x27ff6cu: goto label_27ff6c;
        case 0x27ff70u: goto label_27ff70;
        case 0x27ff74u: goto label_27ff74;
        case 0x27ff78u: goto label_27ff78;
        case 0x27ff7cu: goto label_27ff7c;
        case 0x27ff80u: goto label_27ff80;
        case 0x27ff84u: goto label_27ff84;
        case 0x27ff88u: goto label_27ff88;
        case 0x27ff8cu: goto label_27ff8c;
        case 0x27ff90u: goto label_27ff90;
        case 0x27ff94u: goto label_27ff94;
        case 0x27ff98u: goto label_27ff98;
        case 0x27ff9cu: goto label_27ff9c;
        case 0x27ffa0u: goto label_27ffa0;
        case 0x27ffa4u: goto label_27ffa4;
        case 0x27ffa8u: goto label_27ffa8;
        case 0x27ffacu: goto label_27ffac;
        case 0x27ffb0u: goto label_27ffb0;
        case 0x27ffb4u: goto label_27ffb4;
        case 0x27ffb8u: goto label_27ffb8;
        case 0x27ffbcu: goto label_27ffbc;
        case 0x27ffc0u: goto label_27ffc0;
        case 0x27ffc4u: goto label_27ffc4;
        case 0x27ffc8u: goto label_27ffc8;
        case 0x27ffccu: goto label_27ffcc;
        case 0x27ffd0u: goto label_27ffd0;
        case 0x27ffd4u: goto label_27ffd4;
        case 0x27ffd8u: goto label_27ffd8;
        case 0x27ffdcu: goto label_27ffdc;
        case 0x27ffe0u: goto label_27ffe0;
        case 0x27ffe4u: goto label_27ffe4;
        case 0x27ffe8u: goto label_27ffe8;
        case 0x27ffecu: goto label_27ffec;
        case 0x27fff0u: goto label_27fff0;
        case 0x27fff4u: goto label_27fff4;
        case 0x27fff8u: goto label_27fff8;
        case 0x27fffcu: goto label_27fffc;
        case 0x280000u: goto label_280000;
        case 0x280004u: goto label_280004;
        case 0x280008u: goto label_280008;
        case 0x28000cu: goto label_28000c;
        case 0x280010u: goto label_280010;
        case 0x280014u: goto label_280014;
        case 0x280018u: goto label_280018;
        case 0x28001cu: goto label_28001c;
        case 0x280020u: goto label_280020;
        case 0x280024u: goto label_280024;
        case 0x280028u: goto label_280028;
        case 0x28002cu: goto label_28002c;
        case 0x280030u: goto label_280030;
        case 0x280034u: goto label_280034;
        case 0x280038u: goto label_280038;
        case 0x28003cu: goto label_28003c;
        case 0x280040u: goto label_280040;
        case 0x280044u: goto label_280044;
        case 0x280048u: goto label_280048;
        case 0x28004cu: goto label_28004c;
        case 0x280050u: goto label_280050;
        case 0x280054u: goto label_280054;
        case 0x280058u: goto label_280058;
        case 0x28005cu: goto label_28005c;
        case 0x280060u: goto label_280060;
        case 0x280064u: goto label_280064;
        case 0x280068u: goto label_280068;
        case 0x28006cu: goto label_28006c;
        case 0x280070u: goto label_280070;
        case 0x280074u: goto label_280074;
        case 0x280078u: goto label_280078;
        case 0x28007cu: goto label_28007c;
        case 0x280080u: goto label_280080;
        case 0x280084u: goto label_280084;
        case 0x280088u: goto label_280088;
        case 0x28008cu: goto label_28008c;
        case 0x280090u: goto label_280090;
        case 0x280094u: goto label_280094;
        case 0x280098u: goto label_280098;
        case 0x28009cu: goto label_28009c;
        case 0x2800a0u: goto label_2800a0;
        case 0x2800a4u: goto label_2800a4;
        case 0x2800a8u: goto label_2800a8;
        case 0x2800acu: goto label_2800ac;
        case 0x2800b0u: goto label_2800b0;
        case 0x2800b4u: goto label_2800b4;
        case 0x2800b8u: goto label_2800b8;
        case 0x2800bcu: goto label_2800bc;
        case 0x2800c0u: goto label_2800c0;
        case 0x2800c4u: goto label_2800c4;
        case 0x2800c8u: goto label_2800c8;
        case 0x2800ccu: goto label_2800cc;
        case 0x2800d0u: goto label_2800d0;
        case 0x2800d4u: goto label_2800d4;
        case 0x2800d8u: goto label_2800d8;
        case 0x2800dcu: goto label_2800dc;
        case 0x2800e0u: goto label_2800e0;
        case 0x2800e4u: goto label_2800e4;
        case 0x2800e8u: goto label_2800e8;
        case 0x2800ecu: goto label_2800ec;
        case 0x2800f0u: goto label_2800f0;
        case 0x2800f4u: goto label_2800f4;
        case 0x2800f8u: goto label_2800f8;
        case 0x2800fcu: goto label_2800fc;
        case 0x280100u: goto label_280100;
        case 0x280104u: goto label_280104;
        case 0x280108u: goto label_280108;
        case 0x28010cu: goto label_28010c;
        case 0x280110u: goto label_280110;
        case 0x280114u: goto label_280114;
        case 0x280118u: goto label_280118;
        case 0x28011cu: goto label_28011c;
        case 0x280120u: goto label_280120;
        case 0x280124u: goto label_280124;
        case 0x280128u: goto label_280128;
        case 0x28012cu: goto label_28012c;
        case 0x280130u: goto label_280130;
        case 0x280134u: goto label_280134;
        case 0x280138u: goto label_280138;
        case 0x28013cu: goto label_28013c;
        case 0x280140u: goto label_280140;
        case 0x280144u: goto label_280144;
        case 0x280148u: goto label_280148;
        case 0x28014cu: goto label_28014c;
        case 0x280150u: goto label_280150;
        case 0x280154u: goto label_280154;
        case 0x280158u: goto label_280158;
        case 0x28015cu: goto label_28015c;
        case 0x280160u: goto label_280160;
        case 0x280164u: goto label_280164;
        case 0x280168u: goto label_280168;
        case 0x28016cu: goto label_28016c;
        case 0x280170u: goto label_280170;
        case 0x280174u: goto label_280174;
        case 0x280178u: goto label_280178;
        case 0x28017cu: goto label_28017c;
        case 0x280180u: goto label_280180;
        case 0x280184u: goto label_280184;
        case 0x280188u: goto label_280188;
        case 0x28018cu: goto label_28018c;
        case 0x280190u: goto label_280190;
        case 0x280194u: goto label_280194;
        case 0x280198u: goto label_280198;
        case 0x28019cu: goto label_28019c;
        case 0x2801a0u: goto label_2801a0;
        case 0x2801a4u: goto label_2801a4;
        case 0x2801a8u: goto label_2801a8;
        case 0x2801acu: goto label_2801ac;
        case 0x2801b0u: goto label_2801b0;
        case 0x2801b4u: goto label_2801b4;
        case 0x2801b8u: goto label_2801b8;
        case 0x2801bcu: goto label_2801bc;
        case 0x2801c0u: goto label_2801c0;
        case 0x2801c4u: goto label_2801c4;
        case 0x2801c8u: goto label_2801c8;
        case 0x2801ccu: goto label_2801cc;
        case 0x2801d0u: goto label_2801d0;
        case 0x2801d4u: goto label_2801d4;
        case 0x2801d8u: goto label_2801d8;
        case 0x2801dcu: goto label_2801dc;
        case 0x2801e0u: goto label_2801e0;
        case 0x2801e4u: goto label_2801e4;
        case 0x2801e8u: goto label_2801e8;
        case 0x2801ecu: goto label_2801ec;
        case 0x2801f0u: goto label_2801f0;
        case 0x2801f4u: goto label_2801f4;
        case 0x2801f8u: goto label_2801f8;
        case 0x2801fcu: goto label_2801fc;
        case 0x280200u: goto label_280200;
        case 0x280204u: goto label_280204;
        case 0x280208u: goto label_280208;
        case 0x28020cu: goto label_28020c;
        case 0x280210u: goto label_280210;
        case 0x280214u: goto label_280214;
        case 0x280218u: goto label_280218;
        case 0x28021cu: goto label_28021c;
        case 0x280220u: goto label_280220;
        case 0x280224u: goto label_280224;
        case 0x280228u: goto label_280228;
        case 0x28022cu: goto label_28022c;
        case 0x280230u: goto label_280230;
        case 0x280234u: goto label_280234;
        case 0x280238u: goto label_280238;
        case 0x28023cu: goto label_28023c;
        case 0x280240u: goto label_280240;
        case 0x280244u: goto label_280244;
        case 0x280248u: goto label_280248;
        case 0x28024cu: goto label_28024c;
        case 0x280250u: goto label_280250;
        case 0x280254u: goto label_280254;
        case 0x280258u: goto label_280258;
        case 0x28025cu: goto label_28025c;
        case 0x280260u: goto label_280260;
        case 0x280264u: goto label_280264;
        case 0x280268u: goto label_280268;
        case 0x28026cu: goto label_28026c;
        case 0x280270u: goto label_280270;
        case 0x280274u: goto label_280274;
        case 0x280278u: goto label_280278;
        case 0x28027cu: goto label_28027c;
        case 0x280280u: goto label_280280;
        case 0x280284u: goto label_280284;
        case 0x280288u: goto label_280288;
        case 0x28028cu: goto label_28028c;
        case 0x280290u: goto label_280290;
        case 0x280294u: goto label_280294;
        case 0x280298u: goto label_280298;
        case 0x28029cu: goto label_28029c;
        case 0x2802a0u: goto label_2802a0;
        case 0x2802a4u: goto label_2802a4;
        case 0x2802a8u: goto label_2802a8;
        case 0x2802acu: goto label_2802ac;
        case 0x2802b0u: goto label_2802b0;
        case 0x2802b4u: goto label_2802b4;
        case 0x2802b8u: goto label_2802b8;
        case 0x2802bcu: goto label_2802bc;
        case 0x2802c0u: goto label_2802c0;
        case 0x2802c4u: goto label_2802c4;
        case 0x2802c8u: goto label_2802c8;
        case 0x2802ccu: goto label_2802cc;
        case 0x2802d0u: goto label_2802d0;
        case 0x2802d4u: goto label_2802d4;
        case 0x2802d8u: goto label_2802d8;
        case 0x2802dcu: goto label_2802dc;
        case 0x2802e0u: goto label_2802e0;
        case 0x2802e4u: goto label_2802e4;
        case 0x2802e8u: goto label_2802e8;
        case 0x2802ecu: goto label_2802ec;
        case 0x2802f0u: goto label_2802f0;
        case 0x2802f4u: goto label_2802f4;
        case 0x2802f8u: goto label_2802f8;
        case 0x2802fcu: goto label_2802fc;
        case 0x280300u: goto label_280300;
        case 0x280304u: goto label_280304;
        case 0x280308u: goto label_280308;
        case 0x28030cu: goto label_28030c;
        case 0x280310u: goto label_280310;
        case 0x280314u: goto label_280314;
        case 0x280318u: goto label_280318;
        case 0x28031cu: goto label_28031c;
        case 0x280320u: goto label_280320;
        case 0x280324u: goto label_280324;
        case 0x280328u: goto label_280328;
        case 0x28032cu: goto label_28032c;
        case 0x280330u: goto label_280330;
        case 0x280334u: goto label_280334;
        case 0x280338u: goto label_280338;
        case 0x28033cu: goto label_28033c;
        case 0x280340u: goto label_280340;
        case 0x280344u: goto label_280344;
        case 0x280348u: goto label_280348;
        case 0x28034cu: goto label_28034c;
        case 0x280350u: goto label_280350;
        case 0x280354u: goto label_280354;
        case 0x280358u: goto label_280358;
        case 0x28035cu: goto label_28035c;
        case 0x280360u: goto label_280360;
        case 0x280364u: goto label_280364;
        case 0x280368u: goto label_280368;
        case 0x28036cu: goto label_28036c;
        case 0x280370u: goto label_280370;
        case 0x280374u: goto label_280374;
        case 0x280378u: goto label_280378;
        case 0x28037cu: goto label_28037c;
        case 0x280380u: goto label_280380;
        case 0x280384u: goto label_280384;
        case 0x280388u: goto label_280388;
        case 0x28038cu: goto label_28038c;
        case 0x280390u: goto label_280390;
        case 0x280394u: goto label_280394;
        case 0x280398u: goto label_280398;
        case 0x28039cu: goto label_28039c;
        case 0x2803a0u: goto label_2803a0;
        case 0x2803a4u: goto label_2803a4;
        case 0x2803a8u: goto label_2803a8;
        case 0x2803acu: goto label_2803ac;
        case 0x2803b0u: goto label_2803b0;
        case 0x2803b4u: goto label_2803b4;
        case 0x2803b8u: goto label_2803b8;
        case 0x2803bcu: goto label_2803bc;
        case 0x2803c0u: goto label_2803c0;
        case 0x2803c4u: goto label_2803c4;
        case 0x2803c8u: goto label_2803c8;
        case 0x2803ccu: goto label_2803cc;
        case 0x2803d0u: goto label_2803d0;
        case 0x2803d4u: goto label_2803d4;
        case 0x2803d8u: goto label_2803d8;
        case 0x2803dcu: goto label_2803dc;
        case 0x2803e0u: goto label_2803e0;
        case 0x2803e4u: goto label_2803e4;
        case 0x2803e8u: goto label_2803e8;
        case 0x2803ecu: goto label_2803ec;
        case 0x2803f0u: goto label_2803f0;
        case 0x2803f4u: goto label_2803f4;
        case 0x2803f8u: goto label_2803f8;
        case 0x2803fcu: goto label_2803fc;
        case 0x280400u: goto label_280400;
        case 0x280404u: goto label_280404;
        case 0x280408u: goto label_280408;
        case 0x28040cu: goto label_28040c;
        case 0x280410u: goto label_280410;
        case 0x280414u: goto label_280414;
        case 0x280418u: goto label_280418;
        case 0x28041cu: goto label_28041c;
        case 0x280420u: goto label_280420;
        case 0x280424u: goto label_280424;
        case 0x280428u: goto label_280428;
        case 0x28042cu: goto label_28042c;
        case 0x280430u: goto label_280430;
        case 0x280434u: goto label_280434;
        case 0x280438u: goto label_280438;
        case 0x28043cu: goto label_28043c;
        case 0x280440u: goto label_280440;
        case 0x280444u: goto label_280444;
        case 0x280448u: goto label_280448;
        case 0x28044cu: goto label_28044c;
        case 0x280450u: goto label_280450;
        case 0x280454u: goto label_280454;
        case 0x280458u: goto label_280458;
        case 0x28045cu: goto label_28045c;
        case 0x280460u: goto label_280460;
        case 0x280464u: goto label_280464;
        case 0x280468u: goto label_280468;
        case 0x28046cu: goto label_28046c;
        case 0x280470u: goto label_280470;
        case 0x280474u: goto label_280474;
        case 0x280478u: goto label_280478;
        case 0x28047cu: goto label_28047c;
        case 0x280480u: goto label_280480;
        case 0x280484u: goto label_280484;
        case 0x280488u: goto label_280488;
        case 0x28048cu: goto label_28048c;
        case 0x280490u: goto label_280490;
        case 0x280494u: goto label_280494;
        case 0x280498u: goto label_280498;
        case 0x28049cu: goto label_28049c;
        case 0x2804a0u: goto label_2804a0;
        case 0x2804a4u: goto label_2804a4;
        case 0x2804a8u: goto label_2804a8;
        case 0x2804acu: goto label_2804ac;
        case 0x2804b0u: goto label_2804b0;
        case 0x2804b4u: goto label_2804b4;
        case 0x2804b8u: goto label_2804b8;
        case 0x2804bcu: goto label_2804bc;
        case 0x2804c0u: goto label_2804c0;
        case 0x2804c4u: goto label_2804c4;
        case 0x2804c8u: goto label_2804c8;
        case 0x2804ccu: goto label_2804cc;
        case 0x2804d0u: goto label_2804d0;
        case 0x2804d4u: goto label_2804d4;
        case 0x2804d8u: goto label_2804d8;
        case 0x2804dcu: goto label_2804dc;
        case 0x2804e0u: goto label_2804e0;
        case 0x2804e4u: goto label_2804e4;
        case 0x2804e8u: goto label_2804e8;
        case 0x2804ecu: goto label_2804ec;
        case 0x2804f0u: goto label_2804f0;
        case 0x2804f4u: goto label_2804f4;
        case 0x2804f8u: goto label_2804f8;
        case 0x2804fcu: goto label_2804fc;
        case 0x280500u: goto label_280500;
        case 0x280504u: goto label_280504;
        case 0x280508u: goto label_280508;
        case 0x28050cu: goto label_28050c;
        case 0x280510u: goto label_280510;
        case 0x280514u: goto label_280514;
        case 0x280518u: goto label_280518;
        case 0x28051cu: goto label_28051c;
        case 0x280520u: goto label_280520;
        case 0x280524u: goto label_280524;
        case 0x280528u: goto label_280528;
        case 0x28052cu: goto label_28052c;
        case 0x280530u: goto label_280530;
        case 0x280534u: goto label_280534;
        case 0x280538u: goto label_280538;
        case 0x28053cu: goto label_28053c;
        case 0x280540u: goto label_280540;
        case 0x280544u: goto label_280544;
        case 0x280548u: goto label_280548;
        case 0x28054cu: goto label_28054c;
        case 0x280550u: goto label_280550;
        case 0x280554u: goto label_280554;
        case 0x280558u: goto label_280558;
        case 0x28055cu: goto label_28055c;
        case 0x280560u: goto label_280560;
        case 0x280564u: goto label_280564;
        case 0x280568u: goto label_280568;
        case 0x28056cu: goto label_28056c;
        case 0x280570u: goto label_280570;
        case 0x280574u: goto label_280574;
        case 0x280578u: goto label_280578;
        case 0x28057cu: goto label_28057c;
        case 0x280580u: goto label_280580;
        case 0x280584u: goto label_280584;
        case 0x280588u: goto label_280588;
        case 0x28058cu: goto label_28058c;
        case 0x280590u: goto label_280590;
        case 0x280594u: goto label_280594;
        case 0x280598u: goto label_280598;
        case 0x28059cu: goto label_28059c;
        case 0x2805a0u: goto label_2805a0;
        case 0x2805a4u: goto label_2805a4;
        case 0x2805a8u: goto label_2805a8;
        case 0x2805acu: goto label_2805ac;
        case 0x2805b0u: goto label_2805b0;
        case 0x2805b4u: goto label_2805b4;
        case 0x2805b8u: goto label_2805b8;
        case 0x2805bcu: goto label_2805bc;
        case 0x2805c0u: goto label_2805c0;
        case 0x2805c4u: goto label_2805c4;
        case 0x2805c8u: goto label_2805c8;
        case 0x2805ccu: goto label_2805cc;
        case 0x2805d0u: goto label_2805d0;
        case 0x2805d4u: goto label_2805d4;
        case 0x2805d8u: goto label_2805d8;
        case 0x2805dcu: goto label_2805dc;
        case 0x2805e0u: goto label_2805e0;
        case 0x2805e4u: goto label_2805e4;
        case 0x2805e8u: goto label_2805e8;
        case 0x2805ecu: goto label_2805ec;
        case 0x2805f0u: goto label_2805f0;
        case 0x2805f4u: goto label_2805f4;
        case 0x2805f8u: goto label_2805f8;
        case 0x2805fcu: goto label_2805fc;
        case 0x280600u: goto label_280600;
        case 0x280604u: goto label_280604;
        case 0x280608u: goto label_280608;
        case 0x28060cu: goto label_28060c;
        case 0x280610u: goto label_280610;
        case 0x280614u: goto label_280614;
        case 0x280618u: goto label_280618;
        case 0x28061cu: goto label_28061c;
        case 0x280620u: goto label_280620;
        case 0x280624u: goto label_280624;
        case 0x280628u: goto label_280628;
        case 0x28062cu: goto label_28062c;
        case 0x280630u: goto label_280630;
        case 0x280634u: goto label_280634;
        case 0x280638u: goto label_280638;
        case 0x28063cu: goto label_28063c;
        case 0x280640u: goto label_280640;
        case 0x280644u: goto label_280644;
        case 0x280648u: goto label_280648;
        case 0x28064cu: goto label_28064c;
        case 0x280650u: goto label_280650;
        case 0x280654u: goto label_280654;
        case 0x280658u: goto label_280658;
        case 0x28065cu: goto label_28065c;
        case 0x280660u: goto label_280660;
        case 0x280664u: goto label_280664;
        case 0x280668u: goto label_280668;
        case 0x28066cu: goto label_28066c;
        case 0x280670u: goto label_280670;
        case 0x280674u: goto label_280674;
        case 0x280678u: goto label_280678;
        case 0x28067cu: goto label_28067c;
        case 0x280680u: goto label_280680;
        case 0x280684u: goto label_280684;
        case 0x280688u: goto label_280688;
        case 0x28068cu: goto label_28068c;
        case 0x280690u: goto label_280690;
        case 0x280694u: goto label_280694;
        case 0x280698u: goto label_280698;
        case 0x28069cu: goto label_28069c;
        case 0x2806a0u: goto label_2806a0;
        case 0x2806a4u: goto label_2806a4;
        case 0x2806a8u: goto label_2806a8;
        case 0x2806acu: goto label_2806ac;
        case 0x2806b0u: goto label_2806b0;
        case 0x2806b4u: goto label_2806b4;
        case 0x2806b8u: goto label_2806b8;
        case 0x2806bcu: goto label_2806bc;
        case 0x2806c0u: goto label_2806c0;
        case 0x2806c4u: goto label_2806c4;
        case 0x2806c8u: goto label_2806c8;
        case 0x2806ccu: goto label_2806cc;
        case 0x2806d0u: goto label_2806d0;
        case 0x2806d4u: goto label_2806d4;
        case 0x2806d8u: goto label_2806d8;
        case 0x2806dcu: goto label_2806dc;
        case 0x2806e0u: goto label_2806e0;
        case 0x2806e4u: goto label_2806e4;
        case 0x2806e8u: goto label_2806e8;
        case 0x2806ecu: goto label_2806ec;
        case 0x2806f0u: goto label_2806f0;
        case 0x2806f4u: goto label_2806f4;
        case 0x2806f8u: goto label_2806f8;
        case 0x2806fcu: goto label_2806fc;
        case 0x280700u: goto label_280700;
        case 0x280704u: goto label_280704;
        case 0x280708u: goto label_280708;
        case 0x28070cu: goto label_28070c;
        case 0x280710u: goto label_280710;
        case 0x280714u: goto label_280714;
        case 0x280718u: goto label_280718;
        case 0x28071cu: goto label_28071c;
        case 0x280720u: goto label_280720;
        case 0x280724u: goto label_280724;
        case 0x280728u: goto label_280728;
        case 0x28072cu: goto label_28072c;
        case 0x280730u: goto label_280730;
        case 0x280734u: goto label_280734;
        case 0x280738u: goto label_280738;
        case 0x28073cu: goto label_28073c;
        case 0x280740u: goto label_280740;
        case 0x280744u: goto label_280744;
        case 0x280748u: goto label_280748;
        case 0x28074cu: goto label_28074c;
        case 0x280750u: goto label_280750;
        case 0x280754u: goto label_280754;
        case 0x280758u: goto label_280758;
        case 0x28075cu: goto label_28075c;
        case 0x280760u: goto label_280760;
        case 0x280764u: goto label_280764;
        case 0x280768u: goto label_280768;
        case 0x28076cu: goto label_28076c;
        case 0x280770u: goto label_280770;
        case 0x280774u: goto label_280774;
        case 0x280778u: goto label_280778;
        case 0x28077cu: goto label_28077c;
        case 0x280780u: goto label_280780;
        case 0x280784u: goto label_280784;
        case 0x280788u: goto label_280788;
        case 0x28078cu: goto label_28078c;
        case 0x280790u: goto label_280790;
        case 0x280794u: goto label_280794;
        case 0x280798u: goto label_280798;
        case 0x28079cu: goto label_28079c;
        case 0x2807a0u: goto label_2807a0;
        case 0x2807a4u: goto label_2807a4;
        case 0x2807a8u: goto label_2807a8;
        case 0x2807acu: goto label_2807ac;
        case 0x2807b0u: goto label_2807b0;
        case 0x2807b4u: goto label_2807b4;
        case 0x2807b8u: goto label_2807b8;
        case 0x2807bcu: goto label_2807bc;
        case 0x2807c0u: goto label_2807c0;
        case 0x2807c4u: goto label_2807c4;
        case 0x2807c8u: goto label_2807c8;
        case 0x2807ccu: goto label_2807cc;
        case 0x2807d0u: goto label_2807d0;
        case 0x2807d4u: goto label_2807d4;
        case 0x2807d8u: goto label_2807d8;
        case 0x2807dcu: goto label_2807dc;
        case 0x2807e0u: goto label_2807e0;
        case 0x2807e4u: goto label_2807e4;
        case 0x2807e8u: goto label_2807e8;
        case 0x2807ecu: goto label_2807ec;
        case 0x2807f0u: goto label_2807f0;
        case 0x2807f4u: goto label_2807f4;
        case 0x2807f8u: goto label_2807f8;
        case 0x2807fcu: goto label_2807fc;
        case 0x280800u: goto label_280800;
        case 0x280804u: goto label_280804;
        case 0x280808u: goto label_280808;
        case 0x28080cu: goto label_28080c;
        case 0x280810u: goto label_280810;
        case 0x280814u: goto label_280814;
        case 0x280818u: goto label_280818;
        case 0x28081cu: goto label_28081c;
        case 0x280820u: goto label_280820;
        case 0x280824u: goto label_280824;
        case 0x280828u: goto label_280828;
        case 0x28082cu: goto label_28082c;
        case 0x280830u: goto label_280830;
        case 0x280834u: goto label_280834;
        case 0x280838u: goto label_280838;
        case 0x28083cu: goto label_28083c;
        case 0x280840u: goto label_280840;
        case 0x280844u: goto label_280844;
        case 0x280848u: goto label_280848;
        case 0x28084cu: goto label_28084c;
        case 0x280850u: goto label_280850;
        case 0x280854u: goto label_280854;
        case 0x280858u: goto label_280858;
        case 0x28085cu: goto label_28085c;
        case 0x280860u: goto label_280860;
        case 0x280864u: goto label_280864;
        case 0x280868u: goto label_280868;
        case 0x28086cu: goto label_28086c;
        case 0x280870u: goto label_280870;
        case 0x280874u: goto label_280874;
        case 0x280878u: goto label_280878;
        case 0x28087cu: goto label_28087c;
        case 0x280880u: goto label_280880;
        case 0x280884u: goto label_280884;
        case 0x280888u: goto label_280888;
        case 0x28088cu: goto label_28088c;
        case 0x280890u: goto label_280890;
        case 0x280894u: goto label_280894;
        case 0x280898u: goto label_280898;
        case 0x28089cu: goto label_28089c;
        case 0x2808a0u: goto label_2808a0;
        case 0x2808a4u: goto label_2808a4;
        case 0x2808a8u: goto label_2808a8;
        case 0x2808acu: goto label_2808ac;
        case 0x2808b0u: goto label_2808b0;
        case 0x2808b4u: goto label_2808b4;
        case 0x2808b8u: goto label_2808b8;
        case 0x2808bcu: goto label_2808bc;
        case 0x2808c0u: goto label_2808c0;
        case 0x2808c4u: goto label_2808c4;
        case 0x2808c8u: goto label_2808c8;
        case 0x2808ccu: goto label_2808cc;
        case 0x2808d0u: goto label_2808d0;
        case 0x2808d4u: goto label_2808d4;
        case 0x2808d8u: goto label_2808d8;
        case 0x2808dcu: goto label_2808dc;
        case 0x2808e0u: goto label_2808e0;
        case 0x2808e4u: goto label_2808e4;
        case 0x2808e8u: goto label_2808e8;
        case 0x2808ecu: goto label_2808ec;
        case 0x2808f0u: goto label_2808f0;
        case 0x2808f4u: goto label_2808f4;
        case 0x2808f8u: goto label_2808f8;
        case 0x2808fcu: goto label_2808fc;
        case 0x280900u: goto label_280900;
        case 0x280904u: goto label_280904;
        case 0x280908u: goto label_280908;
        case 0x28090cu: goto label_28090c;
        case 0x280910u: goto label_280910;
        case 0x280914u: goto label_280914;
        case 0x280918u: goto label_280918;
        case 0x28091cu: goto label_28091c;
        case 0x280920u: goto label_280920;
        case 0x280924u: goto label_280924;
        case 0x280928u: goto label_280928;
        case 0x28092cu: goto label_28092c;
        case 0x280930u: goto label_280930;
        case 0x280934u: goto label_280934;
        case 0x280938u: goto label_280938;
        case 0x28093cu: goto label_28093c;
        case 0x280940u: goto label_280940;
        case 0x280944u: goto label_280944;
        case 0x280948u: goto label_280948;
        case 0x28094cu: goto label_28094c;
        case 0x280950u: goto label_280950;
        case 0x280954u: goto label_280954;
        case 0x280958u: goto label_280958;
        case 0x28095cu: goto label_28095c;
        case 0x280960u: goto label_280960;
        case 0x280964u: goto label_280964;
        case 0x280968u: goto label_280968;
        case 0x28096cu: goto label_28096c;
        case 0x280970u: goto label_280970;
        case 0x280974u: goto label_280974;
        case 0x280978u: goto label_280978;
        case 0x28097cu: goto label_28097c;
        case 0x280980u: goto label_280980;
        case 0x280984u: goto label_280984;
        case 0x280988u: goto label_280988;
        case 0x28098cu: goto label_28098c;
        case 0x280990u: goto label_280990;
        case 0x280994u: goto label_280994;
        case 0x280998u: goto label_280998;
        case 0x28099cu: goto label_28099c;
        case 0x2809a0u: goto label_2809a0;
        case 0x2809a4u: goto label_2809a4;
        case 0x2809a8u: goto label_2809a8;
        case 0x2809acu: goto label_2809ac;
        case 0x2809b0u: goto label_2809b0;
        case 0x2809b4u: goto label_2809b4;
        case 0x2809b8u: goto label_2809b8;
        case 0x2809bcu: goto label_2809bc;
        case 0x2809c0u: goto label_2809c0;
        case 0x2809c4u: goto label_2809c4;
        case 0x2809c8u: goto label_2809c8;
        case 0x2809ccu: goto label_2809cc;
        case 0x2809d0u: goto label_2809d0;
        case 0x2809d4u: goto label_2809d4;
        case 0x2809d8u: goto label_2809d8;
        case 0x2809dcu: goto label_2809dc;
        case 0x2809e0u: goto label_2809e0;
        case 0x2809e4u: goto label_2809e4;
        case 0x2809e8u: goto label_2809e8;
        case 0x2809ecu: goto label_2809ec;
        case 0x2809f0u: goto label_2809f0;
        case 0x2809f4u: goto label_2809f4;
        case 0x2809f8u: goto label_2809f8;
        case 0x2809fcu: goto label_2809fc;
        case 0x280a00u: goto label_280a00;
        case 0x280a04u: goto label_280a04;
        case 0x280a08u: goto label_280a08;
        case 0x280a0cu: goto label_280a0c;
        case 0x280a10u: goto label_280a10;
        case 0x280a14u: goto label_280a14;
        case 0x280a18u: goto label_280a18;
        case 0x280a1cu: goto label_280a1c;
        case 0x280a20u: goto label_280a20;
        case 0x280a24u: goto label_280a24;
        case 0x280a28u: goto label_280a28;
        case 0x280a2cu: goto label_280a2c;
        case 0x280a30u: goto label_280a30;
        case 0x280a34u: goto label_280a34;
        case 0x280a38u: goto label_280a38;
        case 0x280a3cu: goto label_280a3c;
        case 0x280a40u: goto label_280a40;
        case 0x280a44u: goto label_280a44;
        case 0x280a48u: goto label_280a48;
        case 0x280a4cu: goto label_280a4c;
        case 0x280a50u: goto label_280a50;
        case 0x280a54u: goto label_280a54;
        case 0x280a58u: goto label_280a58;
        case 0x280a5cu: goto label_280a5c;
        case 0x280a60u: goto label_280a60;
        case 0x280a64u: goto label_280a64;
        case 0x280a68u: goto label_280a68;
        case 0x280a6cu: goto label_280a6c;
        case 0x280a70u: goto label_280a70;
        case 0x280a74u: goto label_280a74;
        case 0x280a78u: goto label_280a78;
        case 0x280a7cu: goto label_280a7c;
        case 0x280a80u: goto label_280a80;
        case 0x280a84u: goto label_280a84;
        case 0x280a88u: goto label_280a88;
        case 0x280a8cu: goto label_280a8c;
        case 0x280a90u: goto label_280a90;
        case 0x280a94u: goto label_280a94;
        case 0x280a98u: goto label_280a98;
        case 0x280a9cu: goto label_280a9c;
        case 0x280aa0u: goto label_280aa0;
        case 0x280aa4u: goto label_280aa4;
        case 0x280aa8u: goto label_280aa8;
        case 0x280aacu: goto label_280aac;
        case 0x280ab0u: goto label_280ab0;
        case 0x280ab4u: goto label_280ab4;
        case 0x280ab8u: goto label_280ab8;
        case 0x280abcu: goto label_280abc;
        case 0x280ac0u: goto label_280ac0;
        case 0x280ac4u: goto label_280ac4;
        case 0x280ac8u: goto label_280ac8;
        case 0x280accu: goto label_280acc;
        case 0x280ad0u: goto label_280ad0;
        case 0x280ad4u: goto label_280ad4;
        case 0x280ad8u: goto label_280ad8;
        case 0x280adcu: goto label_280adc;
        case 0x280ae0u: goto label_280ae0;
        case 0x280ae4u: goto label_280ae4;
        case 0x280ae8u: goto label_280ae8;
        case 0x280aecu: goto label_280aec;
        case 0x280af0u: goto label_280af0;
        case 0x280af4u: goto label_280af4;
        case 0x280af8u: goto label_280af8;
        case 0x280afcu: goto label_280afc;
        case 0x280b00u: goto label_280b00;
        case 0x280b04u: goto label_280b04;
        case 0x280b08u: goto label_280b08;
        case 0x280b0cu: goto label_280b0c;
        case 0x280b10u: goto label_280b10;
        case 0x280b14u: goto label_280b14;
        case 0x280b18u: goto label_280b18;
        case 0x280b1cu: goto label_280b1c;
        case 0x280b20u: goto label_280b20;
        case 0x280b24u: goto label_280b24;
        case 0x280b28u: goto label_280b28;
        case 0x280b2cu: goto label_280b2c;
        case 0x280b30u: goto label_280b30;
        case 0x280b34u: goto label_280b34;
        case 0x280b38u: goto label_280b38;
        case 0x280b3cu: goto label_280b3c;
        case 0x280b40u: goto label_280b40;
        case 0x280b44u: goto label_280b44;
        case 0x280b48u: goto label_280b48;
        case 0x280b4cu: goto label_280b4c;
        case 0x280b50u: goto label_280b50;
        case 0x280b54u: goto label_280b54;
        case 0x280b58u: goto label_280b58;
        case 0x280b5cu: goto label_280b5c;
        case 0x280b60u: goto label_280b60;
        case 0x280b64u: goto label_280b64;
        case 0x280b68u: goto label_280b68;
        case 0x280b6cu: goto label_280b6c;
        case 0x280b70u: goto label_280b70;
        case 0x280b74u: goto label_280b74;
        case 0x280b78u: goto label_280b78;
        case 0x280b7cu: goto label_280b7c;
        case 0x280b80u: goto label_280b80;
        case 0x280b84u: goto label_280b84;
        case 0x280b88u: goto label_280b88;
        case 0x280b8cu: goto label_280b8c;
        case 0x280b90u: goto label_280b90;
        case 0x280b94u: goto label_280b94;
        case 0x280b98u: goto label_280b98;
        case 0x280b9cu: goto label_280b9c;
        case 0x280ba0u: goto label_280ba0;
        case 0x280ba4u: goto label_280ba4;
        case 0x280ba8u: goto label_280ba8;
        case 0x280bacu: goto label_280bac;
        case 0x280bb0u: goto label_280bb0;
        case 0x280bb4u: goto label_280bb4;
        case 0x280bb8u: goto label_280bb8;
        case 0x280bbcu: goto label_280bbc;
        case 0x280bc0u: goto label_280bc0;
        case 0x280bc4u: goto label_280bc4;
        case 0x280bc8u: goto label_280bc8;
        case 0x280bccu: goto label_280bcc;
        case 0x280bd0u: goto label_280bd0;
        case 0x280bd4u: goto label_280bd4;
        case 0x280bd8u: goto label_280bd8;
        case 0x280bdcu: goto label_280bdc;
        case 0x280be0u: goto label_280be0;
        case 0x280be4u: goto label_280be4;
        case 0x280be8u: goto label_280be8;
        case 0x280becu: goto label_280bec;
        case 0x280bf0u: goto label_280bf0;
        case 0x280bf4u: goto label_280bf4;
        case 0x280bf8u: goto label_280bf8;
        case 0x280bfcu: goto label_280bfc;
        case 0x280c00u: goto label_280c00;
        case 0x280c04u: goto label_280c04;
        case 0x280c08u: goto label_280c08;
        case 0x280c0cu: goto label_280c0c;
        case 0x280c10u: goto label_280c10;
        case 0x280c14u: goto label_280c14;
        case 0x280c18u: goto label_280c18;
        case 0x280c1cu: goto label_280c1c;
        case 0x280c20u: goto label_280c20;
        case 0x280c24u: goto label_280c24;
        case 0x280c28u: goto label_280c28;
        case 0x280c2cu: goto label_280c2c;
        case 0x280c30u: goto label_280c30;
        case 0x280c34u: goto label_280c34;
        case 0x280c38u: goto label_280c38;
        case 0x280c3cu: goto label_280c3c;
        case 0x280c40u: goto label_280c40;
        case 0x280c44u: goto label_280c44;
        case 0x280c48u: goto label_280c48;
        case 0x280c4cu: goto label_280c4c;
        case 0x280c50u: goto label_280c50;
        case 0x280c54u: goto label_280c54;
        case 0x280c58u: goto label_280c58;
        case 0x280c5cu: goto label_280c5c;
        case 0x280c60u: goto label_280c60;
        case 0x280c64u: goto label_280c64;
        case 0x280c68u: goto label_280c68;
        case 0x280c6cu: goto label_280c6c;
        case 0x280c70u: goto label_280c70;
        case 0x280c74u: goto label_280c74;
        case 0x280c78u: goto label_280c78;
        case 0x280c7cu: goto label_280c7c;
        case 0x280c80u: goto label_280c80;
        case 0x280c84u: goto label_280c84;
        case 0x280c88u: goto label_280c88;
        case 0x280c8cu: goto label_280c8c;
        case 0x280c90u: goto label_280c90;
        case 0x280c94u: goto label_280c94;
        case 0x280c98u: goto label_280c98;
        case 0x280c9cu: goto label_280c9c;
        case 0x280ca0u: goto label_280ca0;
        case 0x280ca4u: goto label_280ca4;
        case 0x280ca8u: goto label_280ca8;
        case 0x280cacu: goto label_280cac;
        case 0x280cb0u: goto label_280cb0;
        case 0x280cb4u: goto label_280cb4;
        case 0x280cb8u: goto label_280cb8;
        case 0x280cbcu: goto label_280cbc;
        case 0x280cc0u: goto label_280cc0;
        case 0x280cc4u: goto label_280cc4;
        case 0x280cc8u: goto label_280cc8;
        case 0x280cccu: goto label_280ccc;
        case 0x280cd0u: goto label_280cd0;
        case 0x280cd4u: goto label_280cd4;
        case 0x280cd8u: goto label_280cd8;
        case 0x280cdcu: goto label_280cdc;
        case 0x280ce0u: goto label_280ce0;
        case 0x280ce4u: goto label_280ce4;
        case 0x280ce8u: goto label_280ce8;
        case 0x280cecu: goto label_280cec;
        case 0x280cf0u: goto label_280cf0;
        case 0x280cf4u: goto label_280cf4;
        case 0x280cf8u: goto label_280cf8;
        case 0x280cfcu: goto label_280cfc;
        case 0x280d00u: goto label_280d00;
        case 0x280d04u: goto label_280d04;
        case 0x280d08u: goto label_280d08;
        case 0x280d0cu: goto label_280d0c;
        case 0x280d10u: goto label_280d10;
        case 0x280d14u: goto label_280d14;
        case 0x280d18u: goto label_280d18;
        case 0x280d1cu: goto label_280d1c;
        case 0x280d20u: goto label_280d20;
        case 0x280d24u: goto label_280d24;
        case 0x280d28u: goto label_280d28;
        case 0x280d2cu: goto label_280d2c;
        case 0x280d30u: goto label_280d30;
        case 0x280d34u: goto label_280d34;
        case 0x280d38u: goto label_280d38;
        case 0x280d3cu: goto label_280d3c;
        case 0x280d40u: goto label_280d40;
        case 0x280d44u: goto label_280d44;
        case 0x280d48u: goto label_280d48;
        case 0x280d4cu: goto label_280d4c;
        case 0x280d50u: goto label_280d50;
        case 0x280d54u: goto label_280d54;
        case 0x280d58u: goto label_280d58;
        case 0x280d5cu: goto label_280d5c;
        case 0x280d60u: goto label_280d60;
        case 0x280d64u: goto label_280d64;
        case 0x280d68u: goto label_280d68;
        case 0x280d6cu: goto label_280d6c;
        case 0x280d70u: goto label_280d70;
        case 0x280d74u: goto label_280d74;
        case 0x280d78u: goto label_280d78;
        case 0x280d7cu: goto label_280d7c;
        case 0x280d80u: goto label_280d80;
        case 0x280d84u: goto label_280d84;
        case 0x280d88u: goto label_280d88;
        case 0x280d8cu: goto label_280d8c;
        case 0x280d90u: goto label_280d90;
        case 0x280d94u: goto label_280d94;
        case 0x280d98u: goto label_280d98;
        case 0x280d9cu: goto label_280d9c;
        case 0x280da0u: goto label_280da0;
        case 0x280da4u: goto label_280da4;
        case 0x280da8u: goto label_280da8;
        case 0x280dacu: goto label_280dac;
        case 0x280db0u: goto label_280db0;
        case 0x280db4u: goto label_280db4;
        case 0x280db8u: goto label_280db8;
        case 0x280dbcu: goto label_280dbc;
        case 0x280dc0u: goto label_280dc0;
        case 0x280dc4u: goto label_280dc4;
        case 0x280dc8u: goto label_280dc8;
        case 0x280dccu: goto label_280dcc;
        case 0x280dd0u: goto label_280dd0;
        case 0x280dd4u: goto label_280dd4;
        case 0x280dd8u: goto label_280dd8;
        case 0x280ddcu: goto label_280ddc;
        case 0x280de0u: goto label_280de0;
        case 0x280de4u: goto label_280de4;
        case 0x280de8u: goto label_280de8;
        case 0x280decu: goto label_280dec;
        case 0x280df0u: goto label_280df0;
        case 0x280df4u: goto label_280df4;
        case 0x280df8u: goto label_280df8;
        case 0x280dfcu: goto label_280dfc;
        case 0x280e00u: goto label_280e00;
        case 0x280e04u: goto label_280e04;
        case 0x280e08u: goto label_280e08;
        case 0x280e0cu: goto label_280e0c;
        case 0x280e10u: goto label_280e10;
        case 0x280e14u: goto label_280e14;
        case 0x280e18u: goto label_280e18;
        case 0x280e1cu: goto label_280e1c;
        case 0x280e20u: goto label_280e20;
        case 0x280e24u: goto label_280e24;
        case 0x280e28u: goto label_280e28;
        case 0x280e2cu: goto label_280e2c;
        case 0x280e30u: goto label_280e30;
        case 0x280e34u: goto label_280e34;
        case 0x280e38u: goto label_280e38;
        case 0x280e3cu: goto label_280e3c;
        case 0x280e40u: goto label_280e40;
        case 0x280e44u: goto label_280e44;
        case 0x280e48u: goto label_280e48;
        case 0x280e4cu: goto label_280e4c;
        case 0x280e50u: goto label_280e50;
        case 0x280e54u: goto label_280e54;
        case 0x280e58u: goto label_280e58;
        case 0x280e5cu: goto label_280e5c;
        case 0x280e60u: goto label_280e60;
        case 0x280e64u: goto label_280e64;
        case 0x280e68u: goto label_280e68;
        case 0x280e6cu: goto label_280e6c;
        case 0x280e70u: goto label_280e70;
        case 0x280e74u: goto label_280e74;
        case 0x280e78u: goto label_280e78;
        case 0x280e7cu: goto label_280e7c;
        case 0x280e80u: goto label_280e80;
        case 0x280e84u: goto label_280e84;
        case 0x280e88u: goto label_280e88;
        case 0x280e8cu: goto label_280e8c;
        case 0x280e90u: goto label_280e90;
        case 0x280e94u: goto label_280e94;
        case 0x280e98u: goto label_280e98;
        case 0x280e9cu: goto label_280e9c;
        case 0x280ea0u: goto label_280ea0;
        case 0x280ea4u: goto label_280ea4;
        case 0x280ea8u: goto label_280ea8;
        case 0x280eacu: goto label_280eac;
        case 0x280eb0u: goto label_280eb0;
        case 0x280eb4u: goto label_280eb4;
        case 0x280eb8u: goto label_280eb8;
        case 0x280ebcu: goto label_280ebc;
        case 0x280ec0u: goto label_280ec0;
        case 0x280ec4u: goto label_280ec4;
        case 0x280ec8u: goto label_280ec8;
        case 0x280eccu: goto label_280ecc;
        case 0x280ed0u: goto label_280ed0;
        case 0x280ed4u: goto label_280ed4;
        case 0x280ed8u: goto label_280ed8;
        case 0x280edcu: goto label_280edc;
        case 0x280ee0u: goto label_280ee0;
        case 0x280ee4u: goto label_280ee4;
        case 0x280ee8u: goto label_280ee8;
        case 0x280eecu: goto label_280eec;
        case 0x280ef0u: goto label_280ef0;
        case 0x280ef4u: goto label_280ef4;
        case 0x280ef8u: goto label_280ef8;
        case 0x280efcu: goto label_280efc;
        case 0x280f00u: goto label_280f00;
        case 0x280f04u: goto label_280f04;
        case 0x280f08u: goto label_280f08;
        case 0x280f0cu: goto label_280f0c;
        case 0x280f10u: goto label_280f10;
        case 0x280f14u: goto label_280f14;
        case 0x280f18u: goto label_280f18;
        case 0x280f1cu: goto label_280f1c;
        case 0x280f20u: goto label_280f20;
        case 0x280f24u: goto label_280f24;
        case 0x280f28u: goto label_280f28;
        case 0x280f2cu: goto label_280f2c;
        case 0x280f30u: goto label_280f30;
        case 0x280f34u: goto label_280f34;
        case 0x280f38u: goto label_280f38;
        case 0x280f3cu: goto label_280f3c;
        case 0x280f40u: goto label_280f40;
        case 0x280f44u: goto label_280f44;
        case 0x280f48u: goto label_280f48;
        case 0x280f4cu: goto label_280f4c;
        case 0x280f50u: goto label_280f50;
        case 0x280f54u: goto label_280f54;
        case 0x280f58u: goto label_280f58;
        case 0x280f5cu: goto label_280f5c;
        case 0x280f60u: goto label_280f60;
        case 0x280f64u: goto label_280f64;
        case 0x280f68u: goto label_280f68;
        case 0x280f6cu: goto label_280f6c;
        case 0x280f70u: goto label_280f70;
        case 0x280f74u: goto label_280f74;
        case 0x280f78u: goto label_280f78;
        case 0x280f7cu: goto label_280f7c;
        case 0x280f80u: goto label_280f80;
        case 0x280f84u: goto label_280f84;
        case 0x280f88u: goto label_280f88;
        case 0x280f8cu: goto label_280f8c;
        case 0x280f90u: goto label_280f90;
        case 0x280f94u: goto label_280f94;
        case 0x280f98u: goto label_280f98;
        case 0x280f9cu: goto label_280f9c;
        case 0x280fa0u: goto label_280fa0;
        case 0x280fa4u: goto label_280fa4;
        case 0x280fa8u: goto label_280fa8;
        case 0x280facu: goto label_280fac;
        case 0x280fb0u: goto label_280fb0;
        case 0x280fb4u: goto label_280fb4;
        case 0x280fb8u: goto label_280fb8;
        case 0x280fbcu: goto label_280fbc;
        case 0x280fc0u: goto label_280fc0;
        case 0x280fc4u: goto label_280fc4;
        case 0x280fc8u: goto label_280fc8;
        case 0x280fccu: goto label_280fcc;
        case 0x280fd0u: goto label_280fd0;
        case 0x280fd4u: goto label_280fd4;
        case 0x280fd8u: goto label_280fd8;
        case 0x280fdcu: goto label_280fdc;
        case 0x280fe0u: goto label_280fe0;
        case 0x280fe4u: goto label_280fe4;
        case 0x280fe8u: goto label_280fe8;
        case 0x280fecu: goto label_280fec;
        case 0x280ff0u: goto label_280ff0;
        case 0x280ff4u: goto label_280ff4;
        case 0x280ff8u: goto label_280ff8;
        case 0x280ffcu: goto label_280ffc;
        case 0x281000u: goto label_281000;
        case 0x281004u: goto label_281004;
        case 0x281008u: goto label_281008;
        case 0x28100cu: goto label_28100c;
        case 0x281010u: goto label_281010;
        case 0x281014u: goto label_281014;
        case 0x281018u: goto label_281018;
        case 0x28101cu: goto label_28101c;
        case 0x281020u: goto label_281020;
        case 0x281024u: goto label_281024;
        case 0x281028u: goto label_281028;
        case 0x28102cu: goto label_28102c;
        case 0x281030u: goto label_281030;
        case 0x281034u: goto label_281034;
        case 0x281038u: goto label_281038;
        case 0x28103cu: goto label_28103c;
        case 0x281040u: goto label_281040;
        case 0x281044u: goto label_281044;
        case 0x281048u: goto label_281048;
        case 0x28104cu: goto label_28104c;
        case 0x281050u: goto label_281050;
        case 0x281054u: goto label_281054;
        case 0x281058u: goto label_281058;
        case 0x28105cu: goto label_28105c;
        default: break;
    }

    ctx->pc = 0x27fe80u;

label_27fe80:
    // 0x27fe80: 0x27bdf6f0  addiu       $sp, $sp, -0x910
    ctx->pc = 0x27fe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964976));
label_27fe84:
    // 0x27fe84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27fe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_27fe88:
    // 0x27fe88: 0x27a205dc  addiu       $v0, $sp, 0x5DC
    ctx->pc = 0x27fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1500));
label_27fe8c:
    // 0x27fe8c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27fe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_27fe90:
    // 0x27fe90: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27fe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_27fe94:
    // 0x27fe94: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x27fe94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27fe98:
    // 0x27fe98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27fe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27fe9c:
    // 0x27fe9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27fe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_27fea0:
    // 0x27fea0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27fea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27fea4:
    // 0x27fea4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x27fea4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27fea8:
    // 0x27fea8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27fea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27feac:
    // 0x27feac: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x27feacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27feb0:
    // 0x27feb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27feb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27feb4:
    // 0x27feb4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x27feb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_27feb8:
    // 0x27feb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27feb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27febc:
    // 0x27febc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27febcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27fec0:
    // 0x27fec0: 0xafa205d0  sw          $v0, 0x5D0($sp)
    ctx->pc = 0x27fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1488), GPR_U32(ctx, 2));
label_27fec4:
    // 0x27fec4: 0xafa800d8  sw          $t0, 0xD8($sp)
    ctx->pc = 0x27fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 8));
label_27fec8:
    // 0x27fec8: 0x27a205d4  addiu       $v0, $sp, 0x5D4
    ctx->pc = 0x27fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1492));
label_27fecc:
    // 0x27fecc: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x27feccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
label_27fed0:
    // 0x27fed0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_27fed4:
    // 0x27fed4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27fed8:
    // 0x27fed8: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x27fed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_27fedc:
    // 0x27fedc: 0x27a205d8  addiu       $v0, $sp, 0x5D8
    ctx->pc = 0x27fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1496));
label_27fee0:
    // 0x27fee0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_27fee4:
    // 0x27fee4: 0xafa0090c  sw          $zero, 0x90C($sp)
    ctx->pc = 0x27fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2316), GPR_U32(ctx, 0));
label_27fee8:
    // 0x27fee8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27feec:
    // 0x27feec: 0x906200a8  lbu         $v0, 0xA8($v1)
    ctx->pc = 0x27feecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
label_27fef0:
    // 0x27fef0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x27fef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_27fef4:
    // 0x27fef4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27fef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27fef8:
    // 0x27fef8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27fefc:
    if (ctx->pc == 0x27FEFCu) {
        ctx->pc = 0x27FEFCu;
            // 0x27fefc: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27FF00u;
        goto label_27ff00;
    }
    ctx->pc = 0x27FEF8u;
    {
        const bool branch_taken_0x27fef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FEF8u;
            // 0x27fefc: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fef8) {
            ctx->pc = 0x27FF14u;
            goto label_27ff14;
        }
    }
    ctx->pc = 0x27FF00u;
label_27ff00:
    // 0x27ff00: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x27ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_27ff04:
    // 0x27ff04: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x27ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_27ff08:
    // 0x27ff08: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x27ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_27ff0c:
    // 0x27ff0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_27ff10:
    if (ctx->pc == 0x27FF10u) {
        ctx->pc = 0x27FF10u;
            // 0x27ff10: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x27FF14u;
        goto label_27ff14;
    }
    ctx->pc = 0x27FF0Cu;
    {
        const bool branch_taken_0x27ff0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF0Cu;
            // 0x27ff10: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff0c) {
            ctx->pc = 0x27FF1Cu;
            goto label_27ff1c;
        }
    }
    ctx->pc = 0x27FF14u;
label_27ff14:
    // 0x27ff14: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x27ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_27ff18:
    // 0x27ff18: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x27ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_27ff1c:
    // 0x27ff1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x27ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_27ff20:
    // 0x27ff20: 0x27b005c4  addiu       $s0, $sp, 0x5C4
    ctx->pc = 0x27ff20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1476));
label_27ff24:
    // 0x27ff24: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27ff28:
    // 0x27ff28: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27ff28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27ff2c:
    // 0x27ff2c: 0x8c510050  lw          $s1, 0x50($v0)
    ctx->pc = 0x27ff2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_27ff30:
    // 0x27ff30: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x27ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_27ff34:
    // 0x27ff34: 0xafa005c0  sw          $zero, 0x5C0($sp)
    ctx->pc = 0x27ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1472), GPR_U32(ctx, 0));
label_27ff38:
    // 0x27ff38: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x27ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_27ff3c:
    // 0x27ff3c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x27ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_27ff40:
    // 0x27ff40: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x27ff40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27ff44:
    // 0x27ff44: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x27ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_27ff48:
    // 0x27ff48: 0x27a205c8  addiu       $v0, $sp, 0x5C8
    ctx->pc = 0x27ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1480));
label_27ff4c:
    // 0x27ff4c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x27ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_27ff50:
    // 0x27ff50: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27ff54:
    // 0x27ff54: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x27ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_27ff58:
    // 0x27ff58: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x27ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27ff5c:
    // 0x27ff5c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x27ff5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_27ff60:
    // 0x27ff60: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x27ff60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_27ff64:
    // 0x27ff64: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_27ff68:
    if (ctx->pc == 0x27FF68u) {
        ctx->pc = 0x27FF68u;
            // 0x27ff68: 0x27b605c0  addiu       $s6, $sp, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
        ctx->pc = 0x27FF6Cu;
        goto label_27ff6c;
    }
    ctx->pc = 0x27FF64u;
    {
        const bool branch_taken_0x27ff64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF64u;
            // 0x27ff68: 0x27b605c0  addiu       $s6, $sp, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff64) {
            ctx->pc = 0x27FF78u;
            goto label_27ff78;
        }
    }
    ctx->pc = 0x27FF6Cu;
label_27ff6c:
    // 0x27ff6c: 0x10000006  b           . + 4 + (0x6 << 2)
label_27ff70:
    if (ctx->pc == 0x27FF70u) {
        ctx->pc = 0x27FF70u;
            // 0x27ff70: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x27FF74u;
        goto label_27ff74;
    }
    ctx->pc = 0x27FF6Cu;
    {
        const bool branch_taken_0x27ff6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF6Cu;
            // 0x27ff70: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff6c) {
            ctx->pc = 0x27FF88u;
            goto label_27ff88;
        }
    }
    ctx->pc = 0x27FF74u;
label_27ff74:
    // 0x27ff74: 0x0  nop
    ctx->pc = 0x27ff74u;
    // NOP
label_27ff78:
    // 0x27ff78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27ff78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27ff7c:
    // 0x27ff7c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27ff7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27ff80:
    // 0x27ff80: 0x320f809  jalr        $t9
label_27ff84:
    if (ctx->pc == 0x27FF84u) {
        ctx->pc = 0x27FF88u;
        goto label_27ff88;
    }
    ctx->pc = 0x27FF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27FF88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27FF88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27FF88u; }
            if (ctx->pc != 0x27FF88u) { return; }
        }
        }
    }
    ctx->pc = 0x27FF88u;
label_27ff88:
    // 0x27ff88: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x27ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_27ff8c:
    // 0x27ff8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27ff90:
    // 0x27ff90: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x27ff90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_27ff94:
    // 0x27ff94: 0xaec20008  sw          $v0, 0x8($s6)
    ctx->pc = 0x27ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
label_27ff98:
    // 0x27ff98: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x27ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_27ff9c:
    // 0x27ff9c: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x27ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
label_27ffa0:
    // 0x27ffa0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x27ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_27ffa4:
    // 0x27ffa4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27ffa8:
    // 0x27ffa8: 0x908200a8  lbu         $v0, 0xA8($a0)
    ctx->pc = 0x27ffa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
label_27ffac:
    // 0x27ffac: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x27ffacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_27ffb0:
    // 0x27ffb0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27ffb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27ffb4:
    // 0x27ffb4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_27ffb8:
    if (ctx->pc == 0x27FFB8u) {
        ctx->pc = 0x27FFBCu;
        goto label_27ffbc;
    }
    ctx->pc = 0x27FFB4u;
    {
        const bool branch_taken_0x27ffb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ffb4) {
            ctx->pc = 0x280010u;
            goto label_280010;
        }
    }
    ctx->pc = 0x27FFBCu;
label_27ffbc:
    // 0x27ffbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27ffc0:
    // 0x27ffc0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27ffc4:
    // 0x27ffc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_27ffc8:
    // 0x27ffc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27ffcc:
    // 0x27ffcc: 0x8fa205c0  lw          $v0, 0x5C0($sp)
    ctx->pc = 0x27ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_27ffd0:
    // 0x27ffd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27ffd4:
    // 0x27ffd4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x27ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_27ffd8:
    // 0x27ffd8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x27ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_27ffdc:
    // 0x27ffdc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x27ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27ffe0:
    // 0x27ffe0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x27ffe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27ffe4:
    // 0x27ffe4: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x27ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_27ffe8:
    // 0x27ffe8: 0xc0a3a64  jal         func_28E990
label_27ffec:
    if (ctx->pc == 0x27FFECu) {
        ctx->pc = 0x27FFECu;
            // 0x27ffec: 0x24a40040  addiu       $a0, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->pc = 0x27FFF0u;
        goto label_27fff0;
    }
    ctx->pc = 0x27FFE8u;
    SET_GPR_U32(ctx, 31, 0x27FFF0u);
    ctx->pc = 0x27FFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FFE8u;
            // 0x27ffec: 0x24a40040  addiu       $a0, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FFF0u; }
        if (ctx->pc != 0x27FFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FFF0u; }
        if (ctx->pc != 0x27FFF0u) { return; }
    }
    ctx->pc = 0x27FFF0u;
label_27fff0:
    // 0x27fff0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x27fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_27fff4:
    // 0x27fff4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27fff8:
    // 0x27fff8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x27fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27fffc:
    // 0x27fffc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_280000:
    // 0x280000: 0x9463006c  lhu         $v1, 0x6C($v1)
    ctx->pc = 0x280000u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
label_280004:
    // 0x280004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280008:
    // 0x280008: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x280008u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_28000c:
    // 0x28000c: 0x0  nop
    ctx->pc = 0x28000cu;
    // NOP
label_280010:
    // 0x280010: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x280010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_280014:
    // 0x280014: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x280014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_280018:
    // 0x280018: 0x908200a8  lbu         $v0, 0xA8($a0)
    ctx->pc = 0x280018u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
label_28001c:
    // 0x28001c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x28001cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_280020:
    // 0x280020: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x280020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_280024:
    // 0x280024: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_280028:
    if (ctx->pc == 0x280028u) {
        ctx->pc = 0x28002Cu;
        goto label_28002c;
    }
    ctx->pc = 0x280024u;
    {
        const bool branch_taken_0x280024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280024) {
            ctx->pc = 0x280080u;
            goto label_280080;
        }
    }
    ctx->pc = 0x28002Cu;
label_28002c:
    // 0x28002c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_280030:
    // 0x280030: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x280030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_280034:
    // 0x280034: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x280034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_280038:
    // 0x280038: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x280038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28003c:
    // 0x28003c: 0x8fa205c0  lw          $v0, 0x5C0($sp)
    ctx->pc = 0x28003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_280040:
    // 0x280040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280044:
    // 0x280044: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x280044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_280048:
    // 0x280048: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x280048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_28004c:
    // 0x28004c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x28004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_280050:
    // 0x280050: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x280050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_280054:
    // 0x280054: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x280054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_280058:
    // 0x280058: 0xc0a3a64  jal         func_28E990
label_28005c:
    if (ctx->pc == 0x28005Cu) {
        ctx->pc = 0x28005Cu;
            // 0x28005c: 0x24a40040  addiu       $a0, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->pc = 0x280060u;
        goto label_280060;
    }
    ctx->pc = 0x280058u;
    SET_GPR_U32(ctx, 31, 0x280060u);
    ctx->pc = 0x28005Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280058u;
            // 0x28005c: 0x24a40040  addiu       $a0, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280060u; }
        if (ctx->pc != 0x280060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280060u; }
        if (ctx->pc != 0x280060u) { return; }
    }
    ctx->pc = 0x280060u;
label_280060:
    // 0x280060: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x280060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_280064:
    // 0x280064: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x280064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_280068:
    // 0x280068: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x280068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_28006c:
    // 0x28006c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_280070:
    // 0x280070: 0x9463006c  lhu         $v1, 0x6C($v1)
    ctx->pc = 0x280070u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
label_280074:
    // 0x280074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280078:
    // 0x280078: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x280078u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_28007c:
    // 0x28007c: 0x0  nop
    ctx->pc = 0x28007cu;
    // NOP
label_280080:
    // 0x280080: 0x27a204bc  addiu       $v0, $sp, 0x4BC
    ctx->pc = 0x280080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1212));
label_280084:
    // 0x280084: 0xafa204b0  sw          $v0, 0x4B0($sp)
    ctx->pc = 0x280084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
label_280088:
    // 0x280088: 0x27b604b4  addiu       $s6, $sp, 0x4B4
    ctx->pc = 0x280088u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1204));
label_28008c:
    // 0x28008c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x28008cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_280090:
    // 0x280090: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280094:
    // 0x280094: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x280094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_280098:
    // 0x280098: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x280098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_28009c:
    // 0x28009c: 0x27a204b8  addiu       $v0, $sp, 0x4B8
    ctx->pc = 0x28009cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
label_2800a0:
    // 0x2800a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2800a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2800a4:
    // 0x2800a4: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2800a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2800a8:
    // 0x2800a8: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2800a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2800ac:
    // 0x2800ac: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2800acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2800b0:
    // 0x2800b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2800b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2800b4:
    // 0x2800b4: 0xc44c00e0  lwc1        $f12, 0xE0($v0)
    ctx->pc = 0x2800b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2800b8:
    // 0x2800b8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x2800b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_2800bc:
    // 0x2800bc: 0x320f809  jalr        $t9
label_2800c0:
    if (ctx->pc == 0x2800C0u) {
        ctx->pc = 0x2800C0u;
            // 0x2800c0: 0x27a604b0  addiu       $a2, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->pc = 0x2800C4u;
        goto label_2800c4;
    }
    ctx->pc = 0x2800BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2800C4u);
        ctx->pc = 0x2800C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2800BCu;
            // 0x2800c0: 0x27a604b0  addiu       $a2, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2800C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2800C4u; }
            if (ctx->pc != 0x2800C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2800C4u;
label_2800c4:
    // 0x2800c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2800c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2800c8:
    // 0x2800c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2800c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2800cc:
    // 0x2800cc: 0x144000b2  bnez        $v0, . + 4 + (0xB2 << 2)
label_2800d0:
    if (ctx->pc == 0x2800D0u) {
        ctx->pc = 0x2800D4u;
        goto label_2800d4;
    }
    ctx->pc = 0x2800CCu;
    {
        const bool branch_taken_0x2800cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2800cc) {
            ctx->pc = 0x280398u;
            goto label_280398;
        }
    }
    ctx->pc = 0x2800D4u;
label_2800d4:
    // 0x2800d4: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2800d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2800d8:
    // 0x2800d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2800d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2800dc:
    // 0x2800dc: 0x906200a8  lbu         $v0, 0xA8($v1)
    ctx->pc = 0x2800dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
label_2800e0:
    // 0x2800e0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2800e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2800e4:
    // 0x2800e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2800e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2800e8:
    // 0x2800e8: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_2800ec:
    if (ctx->pc == 0x2800ECu) {
        ctx->pc = 0x2800F0u;
        goto label_2800f0;
    }
    ctx->pc = 0x2800E8u;
    {
        const bool branch_taken_0x2800e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2800e8) {
            ctx->pc = 0x2801B8u;
            goto label_2801b8;
        }
    }
    ctx->pc = 0x2800F0u;
label_2800f0:
    // 0x2800f0: 0x247100b0  addiu       $s1, $v1, 0xB0
    ctx->pc = 0x2800f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_2800f4:
    // 0x2800f4: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x2800f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_2800f8:
    // 0x2800f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2800f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2800fc:
    // 0x2800fc: 0xc0a3830  jal         func_28E0C0
label_280100:
    if (ctx->pc == 0x280100u) {
        ctx->pc = 0x280100u;
            // 0x280100: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x280104u;
        goto label_280104;
    }
    ctx->pc = 0x2800FCu;
    SET_GPR_U32(ctx, 31, 0x280104u);
    ctx->pc = 0x280100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2800FCu;
            // 0x280100: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280104u; }
        if (ctx->pc != 0x280104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280104u; }
        if (ctx->pc != 0x280104u) { return; }
    }
    ctx->pc = 0x280104u;
label_280104:
    // 0x280104: 0xc6060040  lwc1        $f6, 0x40($s0)
    ctx->pc = 0x280104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_280108:
    // 0x280108: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x280108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28010c:
    // 0x28010c: 0xc6050044  lwc1        $f5, 0x44($s0)
    ctx->pc = 0x28010cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_280110:
    // 0x280110: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x280110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280114:
    // 0x280114: 0xc6040048  lwc1        $f4, 0x48($s0)
    ctx->pc = 0x280114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_280118:
    // 0x280118: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x280118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28011c:
    // 0x28011c: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x28011cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_280120:
    // 0x280120: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x280120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_280124:
    // 0x280124: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x280124u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_280128:
    // 0x280128: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x280128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_28012c:
    // 0x28012c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x28012cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_280130:
    // 0x280130: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x280130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_280134:
    // 0x280134: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x280134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_280138:
    // 0x280138: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x280138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28013c:
    // 0x28013c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x28013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280140:
    // 0x280140: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x280140u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_280144:
    // 0x280144: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x280144u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_280148:
    // 0x280148: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x280148u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_28014c:
    // 0x28014c: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x28014cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_280150:
    // 0x280150: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x280150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_280154:
    // 0x280154: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x280154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_280158:
    // 0x280158: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x280158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28015c:
    // 0x28015c: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x28015cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280160:
    // 0x280160: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x280160u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_280164:
    // 0x280164: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x280164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_280168:
    // 0x280168: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x280168u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_28016c:
    // 0x28016c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x28016cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_280170:
    // 0x280170: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x280170u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_280174:
    // 0x280174: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x280174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_280178:
    // 0x280178: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x280178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28017c:
    // 0x28017c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28017cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_280180:
    // 0x280180: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x280180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_280184:
    // 0x280184: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x280184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280188:
    // 0x280188: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x280188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28018c:
    // 0x28018c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28018cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_280190:
    // 0x280190: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x280190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_280194:
    // 0x280194: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x280194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280198:
    // 0x280198: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x280198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28019c:
    // 0x28019c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28019cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2801a0:
    // 0x2801a0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2801a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_2801a4:
    // 0x2801a4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x2801a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2801a8:
    // 0x2801a8: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2801a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2801ac:
    // 0x2801ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2801acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2801b0:
    // 0x2801b0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x2801b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_2801b4:
    // 0x2801b4: 0x0  nop
    ctx->pc = 0x2801b4u;
    // NOP
label_2801b8:
    // 0x2801b8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2801b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2801bc:
    // 0x2801bc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2801bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2801c0:
    // 0x2801c0: 0x906200a8  lbu         $v0, 0xA8($v1)
    ctx->pc = 0x2801c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
label_2801c4:
    // 0x2801c4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2801c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2801c8:
    // 0x2801c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2801c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2801cc:
    // 0x2801cc: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_2801d0:
    if (ctx->pc == 0x2801D0u) {
        ctx->pc = 0x2801D4u;
        goto label_2801d4;
    }
    ctx->pc = 0x2801CCu;
    {
        const bool branch_taken_0x2801cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2801cc) {
            ctx->pc = 0x280298u;
            goto label_280298;
        }
    }
    ctx->pc = 0x2801D4u;
label_2801d4:
    // 0x2801d4: 0x247100b0  addiu       $s1, $v1, 0xB0
    ctx->pc = 0x2801d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_2801d8:
    // 0x2801d8: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x2801d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_2801dc:
    // 0x2801dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2801dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2801e0:
    // 0x2801e0: 0xc0a3830  jal         func_28E0C0
label_2801e4:
    if (ctx->pc == 0x2801E4u) {
        ctx->pc = 0x2801E4u;
            // 0x2801e4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x2801E8u;
        goto label_2801e8;
    }
    ctx->pc = 0x2801E0u;
    SET_GPR_U32(ctx, 31, 0x2801E8u);
    ctx->pc = 0x2801E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2801E0u;
            // 0x2801e4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801E8u; }
        if (ctx->pc != 0x2801E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801E8u; }
        if (ctx->pc != 0x2801E8u) { return; }
    }
    ctx->pc = 0x2801E8u;
label_2801e8:
    // 0x2801e8: 0xc6060040  lwc1        $f6, 0x40($s0)
    ctx->pc = 0x2801e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2801ec:
    // 0x2801ec: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2801ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2801f0:
    // 0x2801f0: 0xc6050044  lwc1        $f5, 0x44($s0)
    ctx->pc = 0x2801f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2801f4:
    // 0x2801f4: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2801f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2801f8:
    // 0x2801f8: 0xc6040048  lwc1        $f4, 0x48($s0)
    ctx->pc = 0x2801f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2801fc:
    // 0x2801fc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2801fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280200:
    // 0x280200: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x280200u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_280204:
    // 0x280204: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x280204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_280208:
    // 0x280208: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x280208u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_28020c:
    // 0x28020c: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x28020cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_280210:
    // 0x280210: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x280210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_280214:
    // 0x280214: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x280214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_280218:
    // 0x280218: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x280218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28021c:
    // 0x28021c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x28021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280220:
    // 0x280220: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x280220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280224:
    // 0x280224: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x280224u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_280228:
    // 0x280228: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x280228u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_28022c:
    // 0x28022c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x28022cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_280230:
    // 0x280230: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x280230u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_280234:
    // 0x280234: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x280234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_280238:
    // 0x280238: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x280238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28023c:
    // 0x28023c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x28023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_280240:
    // 0x280240: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x280240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280244:
    // 0x280244: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x280244u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_280248:
    // 0x280248: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x280248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_28024c:
    // 0x28024c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x28024cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_280250:
    // 0x280250: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x280250u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_280254:
    // 0x280254: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x280254u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_280258:
    // 0x280258: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x280258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_28025c:
    // 0x28025c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x28025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280260:
    // 0x280260: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x280260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_280264:
    // 0x280264: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x280264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_280268:
    // 0x280268: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x280268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28026c:
    // 0x28026c: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x28026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280270:
    // 0x280270: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x280270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_280274:
    // 0x280274: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x280274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_280278:
    // 0x280278: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x280278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28027c:
    // 0x28027c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x28027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280280:
    // 0x280280: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x280280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_280284:
    // 0x280284: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x280284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_280288:
    // 0x280288: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x280288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28028c:
    // 0x28028c: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x28028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280290:
    // 0x280290: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x280290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_280294:
    // 0x280294: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x280294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_280298:
    // 0x280298: 0x27a204b8  addiu       $v0, $sp, 0x4B8
    ctx->pc = 0x280298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
label_28029c:
    // 0x28029c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2802a0:
    // 0x2802a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2802a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2802a4:
    // 0x2802a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2802a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2802a8:
    // 0x2802a8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2802ac:
    if (ctx->pc == 0x2802ACu) {
        ctx->pc = 0x2802B0u;
        goto label_2802b0;
    }
    ctx->pc = 0x2802A8u;
    {
        const bool branch_taken_0x2802a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2802a8) {
            ctx->pc = 0x2802D8u;
            goto label_2802d8;
        }
    }
    ctx->pc = 0x2802B0u;
label_2802b0:
    // 0x2802b0: 0x8fa204b8  lw          $v0, 0x4B8($sp)
    ctx->pc = 0x2802b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
label_2802b4:
    // 0x2802b4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2802b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2802b8:
    // 0x2802b8: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2802b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2802bc:
    // 0x2802bc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2802bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2802c0:
    // 0x2802c0: 0x8fa504b0  lw          $a1, 0x4B0($sp)
    ctx->pc = 0x2802c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_2802c4:
    // 0x2802c4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2802c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_2802c8:
    // 0x2802c8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2802c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2802cc:
    // 0x2802cc: 0xc0a7ab4  jal         func_29EAD0
label_2802d0:
    if (ctx->pc == 0x2802D0u) {
        ctx->pc = 0x2802D0u;
            // 0x2802d0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2802D4u;
        goto label_2802d4;
    }
    ctx->pc = 0x2802CCu;
    SET_GPR_U32(ctx, 31, 0x2802D4u);
    ctx->pc = 0x2802D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2802CCu;
            // 0x2802d0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2802D4u; }
        if (ctx->pc != 0x2802D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2802D4u; }
        if (ctx->pc != 0x2802D4u) { return; }
    }
    ctx->pc = 0x2802D4u;
label_2802d4:
    // 0x2802d4: 0x0  nop
    ctx->pc = 0x2802d4u;
    // NOP
label_2802d8:
    // 0x2802d8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2802d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2802dc:
    // 0x2802dc: 0x8fa505cc  lw          $a1, 0x5CC($sp)
    ctx->pc = 0x2802dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1484)));
label_2802e0:
    // 0x2802e0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2802e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2802e4:
    // 0x2802e4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2802e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2802e8:
    // 0x2802e8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2802e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2802ec:
    // 0x2802ec: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_2802f0:
    if (ctx->pc == 0x2802F0u) {
        ctx->pc = 0x2802F4u;
        goto label_2802f4;
    }
    ctx->pc = 0x2802ECu;
    {
        const bool branch_taken_0x2802ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2802ec) {
            ctx->pc = 0x280308u;
            goto label_280308;
        }
    }
    ctx->pc = 0x2802F4u;
label_2802f4:
    // 0x2802f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2802f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2802f8:
    // 0x2802f8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2802f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2802fc:
    // 0x2802fc: 0x320f809  jalr        $t9
label_280300:
    if (ctx->pc == 0x280300u) {
        ctx->pc = 0x280304u;
        goto label_280304;
    }
    ctx->pc = 0x2802FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x280304u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x280304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x280304u; }
            if (ctx->pc != 0x280304u) { return; }
        }
        }
    }
    ctx->pc = 0x280304u;
label_280304:
    // 0x280304: 0x0  nop
    ctx->pc = 0x280304u;
    // NOP
label_280308:
    // 0x280308: 0x27a205c8  addiu       $v0, $sp, 0x5C8
    ctx->pc = 0x280308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1480));
label_28030c:
    // 0x28030c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280310:
    // 0x280310: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280314:
    // 0x280314: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280318:
    // 0x280318: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_28031c:
    if (ctx->pc == 0x28031Cu) {
        ctx->pc = 0x280320u;
        goto label_280320;
    }
    ctx->pc = 0x280318u;
    {
        const bool branch_taken_0x280318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280318) {
            ctx->pc = 0x280348u;
            goto label_280348;
        }
    }
    ctx->pc = 0x280320u;
label_280320:
    // 0x280320: 0x8fa205c8  lw          $v0, 0x5C8($sp)
    ctx->pc = 0x280320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1480)));
label_280324:
    // 0x280324: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280328:
    // 0x280328: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_28032c:
    // 0x28032c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x28032cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280330:
    // 0x280330: 0x8fa505c0  lw          $a1, 0x5C0($sp)
    ctx->pc = 0x280330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_280334:
    // 0x280334: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x280334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_280338:
    // 0x280338: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x280338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_28033c:
    // 0x28033c: 0xc0a7ab4  jal         func_29EAD0
label_280340:
    if (ctx->pc == 0x280340u) {
        ctx->pc = 0x280340u;
            // 0x280340: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280344u;
        goto label_280344;
    }
    ctx->pc = 0x28033Cu;
    SET_GPR_U32(ctx, 31, 0x280344u);
    ctx->pc = 0x280340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28033Cu;
            // 0x280340: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280344u; }
        if (ctx->pc != 0x280344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280344u; }
        if (ctx->pc != 0x280344u) { return; }
    }
    ctx->pc = 0x280344u;
label_280344:
    // 0x280344: 0x0  nop
    ctx->pc = 0x280344u;
    // NOP
label_280348:
    // 0x280348: 0x27a205d8  addiu       $v0, $sp, 0x5D8
    ctx->pc = 0x280348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1496));
label_28034c:
    // 0x28034c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28034cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280350:
    // 0x280350: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280354:
    // 0x280354: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280358:
    // 0x280358: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_28035c:
    if (ctx->pc == 0x28035Cu) {
        ctx->pc = 0x280360u;
        goto label_280360;
    }
    ctx->pc = 0x280358u;
    {
        const bool branch_taken_0x280358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280358) {
            ctx->pc = 0x280390u;
            goto label_280390;
        }
    }
    ctx->pc = 0x280360u;
label_280360:
    // 0x280360: 0x8fa205d8  lw          $v0, 0x5D8($sp)
    ctx->pc = 0x280360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1496)));
label_280364:
    // 0x280364: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280368:
    // 0x280368: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_28036c:
    // 0x28036c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x28036cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280370:
    // 0x280370: 0x8fa505d0  lw          $a1, 0x5D0($sp)
    ctx->pc = 0x280370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1488)));
label_280374:
    // 0x280374: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x280374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_280378:
    // 0x280378: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x280378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_28037c:
    // 0x28037c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28037cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_280380:
    // 0x280380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280384:
    // 0x280384: 0xc0a7ab4  jal         func_29EAD0
label_280388:
    if (ctx->pc == 0x280388u) {
        ctx->pc = 0x280388u;
            // 0x280388: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x28038Cu;
        goto label_28038c;
    }
    ctx->pc = 0x280384u;
    SET_GPR_U32(ctx, 31, 0x28038Cu);
    ctx->pc = 0x280388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280384u;
            // 0x280388: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28038Cu; }
        if (ctx->pc != 0x28038Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28038Cu; }
        if (ctx->pc != 0x28038Cu) { return; }
    }
    ctx->pc = 0x28038Cu;
label_28038c:
    // 0x28038c: 0x0  nop
    ctx->pc = 0x28038cu;
    // NOP
label_280390:
    // 0x280390: 0x1000031f  b           . + 4 + (0x31F << 2)
label_280394:
    if (ctx->pc == 0x280394u) {
        ctx->pc = 0x280394u;
            // 0x280394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x280398u;
        goto label_280398;
    }
    ctx->pc = 0x280390u;
    {
        const bool branch_taken_0x280390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280390u;
            // 0x280394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280390) {
            ctx->pc = 0x281010u;
            goto label_281010;
        }
    }
    ctx->pc = 0x280398u;
label_280398:
    // 0x280398: 0x27a308e8  addiu       $v1, $sp, 0x8E8
    ctx->pc = 0x280398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2280));
label_28039c:
    // 0x28039c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2803a0:
    if (ctx->pc == 0x2803A0u) {
        ctx->pc = 0x2803A0u;
            // 0x2803a0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2803A4u;
        goto label_2803a4;
    }
    ctx->pc = 0x28039Cu;
    {
        const bool branch_taken_0x28039c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2803A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28039Cu;
            // 0x2803a0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28039c) {
            ctx->pc = 0x2803C0u;
            goto label_2803c0;
        }
    }
    ctx->pc = 0x2803A4u;
label_2803a4:
    // 0x2803a4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2803a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2803a8:
    // 0x2803a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2803a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2803ac:
    // 0x2803ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2803acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2803b0:
    // 0x2803b0: 0x0  nop
    ctx->pc = 0x2803b0u;
    // NOP
label_2803b4:
    // 0x2803b4: 0x0  nop
    ctx->pc = 0x2803b4u;
    // NOP
label_2803b8:
    // 0x2803b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2803bc:
    if (ctx->pc == 0x2803BCu) {
        ctx->pc = 0x2803C0u;
        goto label_2803c0;
    }
    ctx->pc = 0x2803B8u;
    {
        const bool branch_taken_0x2803b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2803b8) {
            ctx->pc = 0x2803A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2803a4;
        }
    }
    ctx->pc = 0x2803C0u;
label_2803c0:
    // 0x2803c0: 0x8fa304b0  lw          $v1, 0x4B0($sp)
    ctx->pc = 0x2803c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_2803c4:
    // 0x2803c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2803c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2803c8:
    // 0x2803c8: 0xafa208e8  sw          $v0, 0x8E8($sp)
    ctx->pc = 0x2803c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2280), GPR_U32(ctx, 2));
label_2803cc:
    // 0x2803cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2803ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2803d0:
    // 0x2803d0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2803d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2803d4:
    // 0x2803d4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2803d8:
    if (ctx->pc == 0x2803D8u) {
        ctx->pc = 0x2803D8u;
            // 0x2803d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2803DCu;
        goto label_2803dc;
    }
    ctx->pc = 0x2803D4u;
    {
        const bool branch_taken_0x2803d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2803D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2803D4u;
            // 0x2803d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2803d4) {
            ctx->pc = 0x2803E8u;
            goto label_2803e8;
        }
    }
    ctx->pc = 0x2803DCu;
label_2803dc:
    // 0x2803dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2803e0:
    if (ctx->pc == 0x2803E0u) {
        ctx->pc = 0x2803E0u;
            // 0x2803e0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x2803E4u;
        goto label_2803e4;
    }
    ctx->pc = 0x2803DCu;
    {
        const bool branch_taken_0x2803dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2803E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2803DCu;
            // 0x2803e0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2803dc) {
            ctx->pc = 0x2803E8u;
            goto label_2803e8;
        }
    }
    ctx->pc = 0x2803E4u;
label_2803e4:
    // 0x2803e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2803e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2803e8:
    // 0x2803e8: 0xc0863e2  jal         func_218F88
label_2803ec:
    if (ctx->pc == 0x2803ECu) {
        ctx->pc = 0x2803ECu;
            // 0x2803ec: 0xafa208ec  sw          $v0, 0x8EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2284), GPR_U32(ctx, 2));
        ctx->pc = 0x2803F0u;
        goto label_2803f0;
    }
    ctx->pc = 0x2803E8u;
    SET_GPR_U32(ctx, 31, 0x2803F0u);
    ctx->pc = 0x2803ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2803E8u;
            // 0x2803ec: 0xafa208ec  sw          $v0, 0x8EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218F88u;
    if (runtime->hasFunction(0x218F88u)) {
        auto targetFn = runtime->lookupFunction(0x218F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2803F0u; }
        if (ctx->pc != 0x2803F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218F88_0x218f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2803F0u; }
        if (ctx->pc != 0x2803F0u) { return; }
    }
    ctx->pc = 0x2803F0u;
label_2803f0:
    // 0x2803f0: 0x8fa505c0  lw          $a1, 0x5C0($sp)
    ctx->pc = 0x2803f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_2803f4:
    // 0x2803f4: 0x8fa605c4  lw          $a2, 0x5C4($sp)
    ctx->pc = 0x2803f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1476)));
label_2803f8:
    // 0x2803f8: 0xc0884fc  jal         func_2213F0
label_2803fc:
    if (ctx->pc == 0x2803FCu) {
        ctx->pc = 0x2803FCu;
            // 0x2803fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280400u;
        goto label_280400;
    }
    ctx->pc = 0x2803F8u;
    SET_GPR_U32(ctx, 31, 0x280400u);
    ctx->pc = 0x2803FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2803F8u;
            // 0x2803fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2213F0u;
    if (runtime->hasFunction(0x2213F0u)) {
        auto targetFn = runtime->lookupFunction(0x2213F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280400u; }
        if (ctx->pc != 0x280400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002213F0_0x2213f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280400u; }
        if (ctx->pc != 0x280400u) { return; }
    }
    ctx->pc = 0x280400u;
label_280400:
    // 0x280400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_280404:
    // 0x280404: 0x27b103a4  addiu       $s1, $sp, 0x3A4
    ctx->pc = 0x280404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 932));
label_280408:
    // 0x280408: 0xa3a200a0  sb          $v0, 0xA0($sp)
    ctx->pc = 0x280408u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 2));
label_28040c:
    // 0x28040c: 0x27a3029c  addiu       $v1, $sp, 0x29C
    ctx->pc = 0x28040cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
label_280410:
    // 0x280410: 0x27a203ac  addiu       $v0, $sp, 0x3AC
    ctx->pc = 0x280410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 940));
label_280414:
    // 0x280414: 0x27b70294  addiu       $s7, $sp, 0x294
    ctx->pc = 0x280414u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
label_280418:
    // 0x280418: 0xafa203a0  sw          $v0, 0x3A0($sp)
    ctx->pc = 0x280418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 2));
label_28041c:
    // 0x28041c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280420:
    // 0x280420: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x280420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_280424:
    // 0x280424: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x280424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_280428:
    // 0x280428: 0x27a203a8  addiu       $v0, $sp, 0x3A8
    ctx->pc = 0x280428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 936));
label_28042c:
    // 0x28042c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x28042cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_280430:
    // 0x280430: 0xafa30290  sw          $v1, 0x290($sp)
    ctx->pc = 0x280430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 3));
label_280434:
    // 0x280434: 0x27a20298  addiu       $v0, $sp, 0x298
    ctx->pc = 0x280434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_280438:
    // 0x280438: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x280438u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_28043c:
    // 0x28043c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x28043cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_280440:
    // 0x280440: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x280440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_280444:
    // 0x280444: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x280444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_280448:
    // 0x280448: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x280448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28044c:
    // 0x28044c: 0x1840016a  blez        $v0, . + 4 + (0x16A << 2)
label_280450:
    if (ctx->pc == 0x280450u) {
        ctx->pc = 0x280454u;
        goto label_280454;
    }
    ctx->pc = 0x28044Cu;
    {
        const bool branch_taken_0x28044c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x28044c) {
            ctx->pc = 0x2809F8u;
            goto label_2809f8;
        }
    }
    ctx->pc = 0x280454u;
label_280454:
    // 0x280454: 0x0  nop
    ctx->pc = 0x280454u;
    // NOP
label_280458:
    // 0x280458: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x280458u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_28045c:
    // 0x28045c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x28045cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_280460:
    // 0x280460: 0x83a200a0  lb          $v0, 0xA0($sp)
    ctx->pc = 0x280460u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_280464:
    // 0x280464: 0x8fa3090c  lw          $v1, 0x90C($sp)
    ctx->pc = 0x280464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2316)));
label_280468:
    // 0x280468: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x280468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28046c:
    // 0x28046c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_280470:
    if (ctx->pc == 0x280470u) {
        ctx->pc = 0x280470u;
            // 0x280470: 0xafa30908  sw          $v1, 0x908($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2312), GPR_U32(ctx, 3));
        ctx->pc = 0x280474u;
        goto label_280474;
    }
    ctx->pc = 0x28046Cu;
    {
        const bool branch_taken_0x28046c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28046Cu;
            // 0x280470: 0xafa30908  sw          $v1, 0x908($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28046c) {
            ctx->pc = 0x2804C0u;
            goto label_2804c0;
        }
    }
    ctx->pc = 0x280474u;
label_280474:
    // 0x280474: 0x27a205d4  addiu       $v0, $sp, 0x5D4
    ctx->pc = 0x280474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1492));
label_280478:
    // 0x280478: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x280478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28047c:
    // 0x28047c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x28047cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_280480:
    // 0x280480: 0x10200153  beqz        $at, . + 4 + (0x153 << 2)
label_280484:
    if (ctx->pc == 0x280484u) {
        ctx->pc = 0x280488u;
        goto label_280488;
    }
    ctx->pc = 0x280480u;
    {
        const bool branch_taken_0x280480 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x280480) {
            ctx->pc = 0x2809D0u;
            goto label_2809d0;
        }
    }
    ctx->pc = 0x280488u;
label_280488:
    // 0x280488: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x280488u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_28048c:
    // 0x28048c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28048cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_280490:
    // 0x280490: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x280490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_280494:
    // 0x280494: 0x27a605d0  addiu       $a2, $sp, 0x5D0
    ctx->pc = 0x280494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
label_280498:
    // 0x280498: 0x8fc80000  lw          $t0, 0x0($fp)
    ctx->pc = 0x280498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_28049c:
    // 0x28049c: 0x27a70908  addiu       $a3, $sp, 0x908
    ctx->pc = 0x28049cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2312));
label_2804a0:
    // 0x2804a0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2804a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2804a4:
    // 0x2804a4: 0x27aa05c0  addiu       $t2, $sp, 0x5C0
    ctx->pc = 0x2804a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
label_2804a8:
    // 0x2804a8: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x2804a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2804ac:
    // 0x2804ac: 0xc09fad8  jal         func_27EB60
label_2804b0:
    if (ctx->pc == 0x2804B0u) {
        ctx->pc = 0x2804B0u;
            // 0x2804b0: 0x27ab04b0  addiu       $t3, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->pc = 0x2804B4u;
        goto label_2804b4;
    }
    ctx->pc = 0x2804ACu;
    SET_GPR_U32(ctx, 31, 0x2804B4u);
    ctx->pc = 0x2804B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2804ACu;
            // 0x2804b0: 0x27ab04b0  addiu       $t3, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (runtime->hasFunction(0x27EB60u)) {
        auto targetFn = runtime->lookupFunction(0x27EB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804B4u; }
        if (ctx->pc != 0x2804B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027EB60_0x27eb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804B4u; }
        if (ctx->pc != 0x2804B4u) { return; }
    }
    ctx->pc = 0x2804B4u;
label_2804b4:
    // 0x2804b4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2804b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2804b8:
    // 0x2804b8: 0x10400145  beqz        $v0, . + 4 + (0x145 << 2)
label_2804bc:
    if (ctx->pc == 0x2804BCu) {
        ctx->pc = 0x2804C0u;
        goto label_2804c0;
    }
    ctx->pc = 0x2804B8u;
    {
        const bool branch_taken_0x2804b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2804b8) {
            ctx->pc = 0x2809D0u;
            goto label_2809d0;
        }
    }
    ctx->pc = 0x2804C0u;
label_2804c0:
    // 0x2804c0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2804c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2804c4:
    // 0x2804c4: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x2804c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2804c8:
    // 0x2804c8: 0x27a604b0  addiu       $a2, $sp, 0x4B0
    ctx->pc = 0x2804c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_2804cc:
    // 0x2804cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2804ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2804d0:
    // 0x2804d0: 0x27a803a0  addiu       $t0, $sp, 0x3A0
    ctx->pc = 0x2804d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_2804d4:
    // 0x2804d4: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x2804d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2804d8:
    // 0x2804d8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2804d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2804dc:
    // 0x2804dc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2804dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2804e0:
    // 0x2804e0: 0xc09fc20  jal         func_27F080
label_2804e4:
    if (ctx->pc == 0x2804E4u) {
        ctx->pc = 0x2804E4u;
            // 0x2804e4: 0x27a90290  addiu       $t1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x2804E8u;
        goto label_2804e8;
    }
    ctx->pc = 0x2804E0u;
    SET_GPR_U32(ctx, 31, 0x2804E8u);
    ctx->pc = 0x2804E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2804E0u;
            // 0x2804e4: 0x27a90290  addiu       $t1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F080u;
    if (runtime->hasFunction(0x27F080u)) {
        auto targetFn = runtime->lookupFunction(0x27F080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804E8u; }
        if (ctx->pc != 0x2804E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F080_0x27f080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804E8u; }
        if (ctx->pc != 0x2804E8u) { return; }
    }
    ctx->pc = 0x2804E8u;
label_2804e8:
    // 0x2804e8: 0xa3a000a0  sb          $zero, 0xA0($sp)
    ctx->pc = 0x2804e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 0));
label_2804ec:
    // 0x2804ec: 0x27a40900  addiu       $a0, $sp, 0x900
    ctx->pc = 0x2804ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
label_2804f0:
    // 0x2804f0: 0x8fa603a0  lw          $a2, 0x3A0($sp)
    ctx->pc = 0x2804f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_2804f4:
    // 0x2804f4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2804f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2804f8:
    // 0x2804f8: 0xc0886ac  jal         func_221AB0
label_2804fc:
    if (ctx->pc == 0x2804FCu) {
        ctx->pc = 0x2804FCu;
            // 0x2804fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280500u;
        goto label_280500;
    }
    ctx->pc = 0x2804F8u;
    SET_GPR_U32(ctx, 31, 0x280500u);
    ctx->pc = 0x2804FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2804F8u;
            // 0x2804fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280500u; }
        if (ctx->pc != 0x280500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221AB0_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280500u; }
        if (ctx->pc != 0x280500u) { return; }
    }
    ctx->pc = 0x280500u;
label_280500:
    // 0x280500: 0x27a20900  addiu       $v0, $sp, 0x900
    ctx->pc = 0x280500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
label_280504:
    // 0x280504: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x280504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_280508:
    // 0x280508: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_28050c:
    if (ctx->pc == 0x28050Cu) {
        ctx->pc = 0x280510u;
        goto label_280510;
    }
    ctx->pc = 0x280508u;
    {
        const bool branch_taken_0x280508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280508) {
            ctx->pc = 0x280590u;
            goto label_280590;
        }
    }
    ctx->pc = 0x280510u;
label_280510:
    // 0x280510: 0x8fa60290  lw          $a2, 0x290($sp)
    ctx->pc = 0x280510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_280514:
    // 0x280514: 0x27a408fc  addiu       $a0, $sp, 0x8FC
    ctx->pc = 0x280514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2300));
label_280518:
    // 0x280518: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x280518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_28051c:
    // 0x28051c: 0xc0886bc  jal         func_221AF0
label_280520:
    if (ctx->pc == 0x280520u) {
        ctx->pc = 0x280520u;
            // 0x280520: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280524u;
        goto label_280524;
    }
    ctx->pc = 0x28051Cu;
    SET_GPR_U32(ctx, 31, 0x280524u);
    ctx->pc = 0x280520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28051Cu;
            // 0x280520: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AF0u;
    if (runtime->hasFunction(0x221AF0u)) {
        auto targetFn = runtime->lookupFunction(0x221AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280524u; }
        if (ctx->pc != 0x280524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221AF0_0x221af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280524u; }
        if (ctx->pc != 0x280524u) { return; }
    }
    ctx->pc = 0x280524u;
label_280524:
    // 0x280524: 0x27a208fc  addiu       $v0, $sp, 0x8FC
    ctx->pc = 0x280524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2300));
label_280528:
    // 0x280528: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x280528u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_28052c:
    // 0x28052c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_280530:
    if (ctx->pc == 0x280530u) {
        ctx->pc = 0x280534u;
        goto label_280534;
    }
    ctx->pc = 0x28052Cu;
    {
        const bool branch_taken_0x28052c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28052c) {
            ctx->pc = 0x280590u;
            goto label_280590;
        }
    }
    ctx->pc = 0x280534u;
label_280534:
    // 0x280534: 0x27a205d4  addiu       $v0, $sp, 0x5D4
    ctx->pc = 0x280534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1492));
label_280538:
    // 0x280538: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x280538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_28053c:
    // 0x28053c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280540:
    // 0x280540: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x280540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_280544:
    // 0x280544: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x280544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_280548:
    // 0x280548: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x280548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28054c:
    // 0x28054c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_280550:
    if (ctx->pc == 0x280550u) {
        ctx->pc = 0x280554u;
        goto label_280554;
    }
    ctx->pc = 0x28054Cu;
    {
        const bool branch_taken_0x28054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28054c) {
            ctx->pc = 0x280590u;
            goto label_280590;
        }
    }
    ctx->pc = 0x280554u;
label_280554:
    // 0x280554: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x280554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_280558:
    // 0x280558: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x280558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28055c:
    // 0x28055c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x28055cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_280560:
    // 0x280560: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x280560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_280564:
    // 0x280564: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x280564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_280568:
    // 0x280568: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x280568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_28056c:
    // 0x28056c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x28056cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_280570:
    // 0x280570: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_280574:
    if (ctx->pc == 0x280574u) {
        ctx->pc = 0x280578u;
        goto label_280578;
    }
    ctx->pc = 0x280570u;
    {
        const bool branch_taken_0x280570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280570) {
            ctx->pc = 0x280590u;
            goto label_280590;
        }
    }
    ctx->pc = 0x280578u;
label_280578:
    // 0x280578: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x280578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_28057c:
    // 0x28057c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x28057cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_280580:
    // 0x280580: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x280580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_280584:
    // 0x280584: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x280584u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_280588:
    // 0x280588: 0x102000a3  beqz        $at, . + 4 + (0xA3 << 2)
label_28058c:
    if (ctx->pc == 0x28058Cu) {
        ctx->pc = 0x280590u;
        goto label_280590;
    }
    ctx->pc = 0x280588u;
    {
        const bool branch_taken_0x280588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x280588) {
            ctx->pc = 0x280818u;
            goto label_280818;
        }
    }
    ctx->pc = 0x280590u;
label_280590:
    // 0x280590: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x280590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_280594:
    // 0x280594: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x280594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_280598:
    // 0x280598: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_28059c:
    if (ctx->pc == 0x28059Cu) {
        ctx->pc = 0x28059Cu;
            // 0x28059c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2805A0u;
        goto label_2805a0;
    }
    ctx->pc = 0x280598u;
    {
        const bool branch_taken_0x280598 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28059Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280598u;
            // 0x28059c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280598) {
            ctx->pc = 0x2805D8u;
            goto label_2805d8;
        }
    }
    ctx->pc = 0x2805A0u;
label_2805a0:
    // 0x2805a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2805a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2805a4:
    // 0x2805a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2805a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2805a8:
    // 0x2805a8: 0x8fa304b0  lw          $v1, 0x4B0($sp)
    ctx->pc = 0x2805a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_2805ac:
    // 0x2805ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2805acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2805b0:
    // 0x2805b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2805b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2805b4:
    // 0x2805b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2805b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2805b8:
    // 0x2805b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2805b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2805bc:
    // 0x2805bc: 0x9463006c  lhu         $v1, 0x6C($v1)
    ctx->pc = 0x2805bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
label_2805c0:
    // 0x2805c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2805c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2805c4:
    // 0x2805c4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2805c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_2805c8:
    // 0x2805c8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2805c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2805cc:
    // 0x2805cc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2805ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2805d0:
    // 0x2805d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2805d4:
    if (ctx->pc == 0x2805D4u) {
        ctx->pc = 0x2805D4u;
            // 0x2805d4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x2805D8u;
        goto label_2805d8;
    }
    ctx->pc = 0x2805D0u;
    {
        const bool branch_taken_0x2805d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2805D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2805D0u;
            // 0x2805d4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805d0) {
            ctx->pc = 0x2805A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2805a8;
        }
    }
    ctx->pc = 0x2805D8u;
label_2805d8:
    // 0x2805d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2805d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2805dc:
    // 0x2805dc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2805dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2805e0:
    // 0x2805e0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_2805e4:
    if (ctx->pc == 0x2805E4u) {
        ctx->pc = 0x2805E4u;
            // 0x2805e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2805E8u;
        goto label_2805e8;
    }
    ctx->pc = 0x2805E0u;
    {
        const bool branch_taken_0x2805e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2805E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2805E0u;
            // 0x2805e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805e0) {
            ctx->pc = 0x280620u;
            goto label_280620;
        }
    }
    ctx->pc = 0x2805E8u;
label_2805e8:
    // 0x2805e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2805e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2805ec:
    // 0x2805ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2805ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2805f0:
    // 0x2805f0: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x2805f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_2805f4:
    // 0x2805f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2805f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2805f8:
    // 0x2805f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2805f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2805fc:
    // 0x2805fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2805fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_280600:
    // 0x280600: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x280600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_280604:
    // 0x280604: 0x9463006c  lhu         $v1, 0x6C($v1)
    ctx->pc = 0x280604u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
label_280608:
    // 0x280608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28060c:
    // 0x28060c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x28060cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_280610:
    // 0x280610: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x280610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_280614:
    // 0x280614: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x280614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_280618:
    // 0x280618: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_28061c:
    if (ctx->pc == 0x28061Cu) {
        ctx->pc = 0x28061Cu;
            // 0x28061c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x280620u;
        goto label_280620;
    }
    ctx->pc = 0x280618u;
    {
        const bool branch_taken_0x280618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28061Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280618u;
            // 0x28061c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280618) {
            ctx->pc = 0x2805F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2805f0;
        }
    }
    ctx->pc = 0x280620u;
label_280620:
    // 0x280620: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x280620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_280624:
    // 0x280624: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x280624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_280628:
    // 0x280628: 0x320f809  jalr        $t9
label_28062c:
    if (ctx->pc == 0x28062Cu) {
        ctx->pc = 0x28062Cu;
            // 0x28062c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280630u;
        goto label_280630;
    }
    ctx->pc = 0x280628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x280630u);
        ctx->pc = 0x28062Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280628u;
            // 0x28062c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x280630u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x280630u; }
            if (ctx->pc != 0x280630u) { return; }
        }
        }
    }
    ctx->pc = 0x280630u;
label_280630:
    // 0x280630: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x280630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_280634:
    // 0x280634: 0x144300e6  bne         $v0, $v1, . + 4 + (0xE6 << 2)
label_280638:
    if (ctx->pc == 0x280638u) {
        ctx->pc = 0x28063Cu;
        goto label_28063c;
    }
    ctx->pc = 0x280634u;
    {
        const bool branch_taken_0x280634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x280634) {
            ctx->pc = 0x2809D0u;
            goto label_2809d0;
        }
    }
    ctx->pc = 0x28063Cu;
label_28063c:
    // 0x28063c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x28063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_280640:
    // 0x280640: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x280640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_280644:
    // 0x280644: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x280644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_280648:
    // 0x280648: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x280648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28064c:
    // 0x28064c: 0xc09fe5c  jal         func_27F970
label_280650:
    if (ctx->pc == 0x280650u) {
        ctx->pc = 0x280650u;
            // 0x280650: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280654u;
        goto label_280654;
    }
    ctx->pc = 0x28064Cu;
    SET_GPR_U32(ctx, 31, 0x280654u);
    ctx->pc = 0x280650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28064Cu;
            // 0x280650: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F970u;
    if (runtime->hasFunction(0x27F970u)) {
        auto targetFn = runtime->lookupFunction(0x27F970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280654u; }
        if (ctx->pc != 0x280654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F970_0x27f970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280654u; }
        if (ctx->pc != 0x280654u) { return; }
    }
    ctx->pc = 0x280654u;
label_280654:
    // 0x280654: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x280654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_280658:
    // 0x280658: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x280658u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28065c:
    // 0x28065c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_280660:
    if (ctx->pc == 0x280660u) {
        ctx->pc = 0x280660u;
            // 0x280660: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280664u;
        goto label_280664;
    }
    ctx->pc = 0x28065Cu;
    {
        const bool branch_taken_0x28065c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x280660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28065Cu;
            // 0x280660: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28065c) {
            ctx->pc = 0x280698u;
            goto label_280698;
        }
    }
    ctx->pc = 0x280664u;
label_280664:
    // 0x280664: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x280664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280668:
    // 0x280668: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x280668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_28066c:
    // 0x28066c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x28066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_280670:
    // 0x280670: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x280670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_280674:
    // 0x280674: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x280674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_280678:
    // 0x280678: 0xc08e330  jal         func_238CC0
label_28067c:
    if (ctx->pc == 0x28067Cu) {
        ctx->pc = 0x28067Cu;
            // 0x28067c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x280680u;
        goto label_280680;
    }
    ctx->pc = 0x280678u;
    SET_GPR_U32(ctx, 31, 0x280680u);
    ctx->pc = 0x28067Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280678u;
            // 0x28067c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CC0u;
    if (runtime->hasFunction(0x238CC0u)) {
        auto targetFn = runtime->lookupFunction(0x238CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280680u; }
        if (ctx->pc != 0x280680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CC0_0x238cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280680u; }
        if (ctx->pc != 0x280680u) { return; }
    }
    ctx->pc = 0x280680u;
label_280680:
    // 0x280680: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x280680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_280684:
    // 0x280684: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x280684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_280688:
    // 0x280688: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x280688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28068c:
    // 0x28068c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_280690:
    if (ctx->pc == 0x280690u) {
        ctx->pc = 0x280690u;
            // 0x280690: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x280694u;
        goto label_280694;
    }
    ctx->pc = 0x28068Cu;
    {
        const bool branch_taken_0x28068c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28068Cu;
            // 0x280690: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28068c) {
            ctx->pc = 0x280668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280668;
        }
    }
    ctx->pc = 0x280694u;
label_280694:
    // 0x280694: 0x0  nop
    ctx->pc = 0x280694u;
    // NOP
label_280698:
    // 0x280698: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x280698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_28069c:
    // 0x28069c: 0x27a20298  addiu       $v0, $sp, 0x298
    ctx->pc = 0x28069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_2806a0:
    // 0x2806a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2806a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2806a4:
    // 0x2806a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2806a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2806a8:
    // 0x2806a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2806a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2806ac:
    // 0x2806ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2806b0:
    if (ctx->pc == 0x2806B0u) {
        ctx->pc = 0x2806B4u;
        goto label_2806b4;
    }
    ctx->pc = 0x2806ACu;
    {
        const bool branch_taken_0x2806ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2806ac) {
            ctx->pc = 0x2806D8u;
            goto label_2806d8;
        }
    }
    ctx->pc = 0x2806B4u;
label_2806b4:
    // 0x2806b4: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x2806b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_2806b8:
    // 0x2806b8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2806b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2806bc:
    // 0x2806bc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2806bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2806c0:
    // 0x2806c0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2806c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2806c4:
    // 0x2806c4: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x2806c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_2806c8:
    // 0x2806c8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2806c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_2806cc:
    // 0x2806cc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2806ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2806d0:
    // 0x2806d0: 0xc0a7ab4  jal         func_29EAD0
label_2806d4:
    if (ctx->pc == 0x2806D4u) {
        ctx->pc = 0x2806D4u;
            // 0x2806d4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2806D8u;
        goto label_2806d8;
    }
    ctx->pc = 0x2806D0u;
    SET_GPR_U32(ctx, 31, 0x2806D8u);
    ctx->pc = 0x2806D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2806D0u;
            // 0x2806d4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2806D8u; }
        if (ctx->pc != 0x2806D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2806D8u; }
        if (ctx->pc != 0x2806D8u) { return; }
    }
    ctx->pc = 0x2806D8u;
label_2806d8:
    // 0x2806d8: 0x27a203a8  addiu       $v0, $sp, 0x3A8
    ctx->pc = 0x2806d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 936));
label_2806dc:
    // 0x2806dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2806dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2806e0:
    // 0x2806e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2806e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2806e4:
    // 0x2806e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2806e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2806e8:
    // 0x2806e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2806ec:
    if (ctx->pc == 0x2806ECu) {
        ctx->pc = 0x2806F0u;
        goto label_2806f0;
    }
    ctx->pc = 0x2806E8u;
    {
        const bool branch_taken_0x2806e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2806e8) {
            ctx->pc = 0x280718u;
            goto label_280718;
        }
    }
    ctx->pc = 0x2806F0u;
label_2806f0:
    // 0x2806f0: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x2806f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_2806f4:
    // 0x2806f4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2806f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2806f8:
    // 0x2806f8: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2806f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2806fc:
    // 0x2806fc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2806fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280700:
    // 0x280700: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x280700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_280704:
    // 0x280704: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x280704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_280708:
    // 0x280708: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x280708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_28070c:
    // 0x28070c: 0xc0a7ab4  jal         func_29EAD0
label_280710:
    if (ctx->pc == 0x280710u) {
        ctx->pc = 0x280710u;
            // 0x280710: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280714u;
        goto label_280714;
    }
    ctx->pc = 0x28070Cu;
    SET_GPR_U32(ctx, 31, 0x280714u);
    ctx->pc = 0x280710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28070Cu;
            // 0x280710: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280714u; }
        if (ctx->pc != 0x280714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280714u; }
        if (ctx->pc != 0x280714u) { return; }
    }
    ctx->pc = 0x280714u;
label_280714:
    // 0x280714: 0x0  nop
    ctx->pc = 0x280714u;
    // NOP
label_280718:
    // 0x280718: 0x27a204b8  addiu       $v0, $sp, 0x4B8
    ctx->pc = 0x280718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
label_28071c:
    // 0x28071c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280720:
    // 0x280720: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280724:
    // 0x280724: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280728:
    // 0x280728: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_28072c:
    if (ctx->pc == 0x28072Cu) {
        ctx->pc = 0x280730u;
        goto label_280730;
    }
    ctx->pc = 0x280728u;
    {
        const bool branch_taken_0x280728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280728) {
            ctx->pc = 0x280758u;
            goto label_280758;
        }
    }
    ctx->pc = 0x280730u;
label_280730:
    // 0x280730: 0x8fa204b8  lw          $v0, 0x4B8($sp)
    ctx->pc = 0x280730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
label_280734:
    // 0x280734: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280738:
    // 0x280738: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_28073c:
    // 0x28073c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x28073cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280740:
    // 0x280740: 0x8fa504b0  lw          $a1, 0x4B0($sp)
    ctx->pc = 0x280740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_280744:
    // 0x280744: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x280744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_280748:
    // 0x280748: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x280748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_28074c:
    // 0x28074c: 0xc0a7ab4  jal         func_29EAD0
label_280750:
    if (ctx->pc == 0x280750u) {
        ctx->pc = 0x280750u;
            // 0x280750: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280754u;
        goto label_280754;
    }
    ctx->pc = 0x28074Cu;
    SET_GPR_U32(ctx, 31, 0x280754u);
    ctx->pc = 0x280750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28074Cu;
            // 0x280750: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280754u; }
        if (ctx->pc != 0x280754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280754u; }
        if (ctx->pc != 0x280754u) { return; }
    }
    ctx->pc = 0x280754u;
label_280754:
    // 0x280754: 0x0  nop
    ctx->pc = 0x280754u;
    // NOP
label_280758:
    // 0x280758: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_28075c:
    // 0x28075c: 0x8fa505cc  lw          $a1, 0x5CC($sp)
    ctx->pc = 0x28075cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1484)));
label_280760:
    // 0x280760: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280764:
    // 0x280764: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x280764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_280768:
    // 0x280768: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x280768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_28076c:
    // 0x28076c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_280770:
    if (ctx->pc == 0x280770u) {
        ctx->pc = 0x280774u;
        goto label_280774;
    }
    ctx->pc = 0x28076Cu;
    {
        const bool branch_taken_0x28076c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x28076c) {
            ctx->pc = 0x280788u;
            goto label_280788;
        }
    }
    ctx->pc = 0x280774u;
label_280774:
    // 0x280774: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x280774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_280778:
    // 0x280778: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x280778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_28077c:
    // 0x28077c: 0x320f809  jalr        $t9
label_280780:
    if (ctx->pc == 0x280780u) {
        ctx->pc = 0x280784u;
        goto label_280784;
    }
    ctx->pc = 0x28077Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x280784u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x280784u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x280784u; }
            if (ctx->pc != 0x280784u) { return; }
        }
        }
    }
    ctx->pc = 0x280784u;
label_280784:
    // 0x280784: 0x0  nop
    ctx->pc = 0x280784u;
    // NOP
label_280788:
    // 0x280788: 0x27a205c8  addiu       $v0, $sp, 0x5C8
    ctx->pc = 0x280788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1480));
label_28078c:
    // 0x28078c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28078cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280790:
    // 0x280790: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280794:
    // 0x280794: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280798:
    // 0x280798: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_28079c:
    if (ctx->pc == 0x28079Cu) {
        ctx->pc = 0x2807A0u;
        goto label_2807a0;
    }
    ctx->pc = 0x280798u;
    {
        const bool branch_taken_0x280798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280798) {
            ctx->pc = 0x2807C8u;
            goto label_2807c8;
        }
    }
    ctx->pc = 0x2807A0u;
label_2807a0:
    // 0x2807a0: 0x8fa205c8  lw          $v0, 0x5C8($sp)
    ctx->pc = 0x2807a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1480)));
label_2807a4:
    // 0x2807a4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2807a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2807a8:
    // 0x2807a8: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2807a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2807ac:
    // 0x2807ac: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2807acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2807b0:
    // 0x2807b0: 0x8fa505c0  lw          $a1, 0x5C0($sp)
    ctx->pc = 0x2807b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_2807b4:
    // 0x2807b4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2807b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_2807b8:
    // 0x2807b8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2807b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2807bc:
    // 0x2807bc: 0xc0a7ab4  jal         func_29EAD0
label_2807c0:
    if (ctx->pc == 0x2807C0u) {
        ctx->pc = 0x2807C0u;
            // 0x2807c0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2807C4u;
        goto label_2807c4;
    }
    ctx->pc = 0x2807BCu;
    SET_GPR_U32(ctx, 31, 0x2807C4u);
    ctx->pc = 0x2807C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2807BCu;
            // 0x2807c0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2807C4u; }
        if (ctx->pc != 0x2807C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2807C4u; }
        if (ctx->pc != 0x2807C4u) { return; }
    }
    ctx->pc = 0x2807C4u;
label_2807c4:
    // 0x2807c4: 0x0  nop
    ctx->pc = 0x2807c4u;
    // NOP
label_2807c8:
    // 0x2807c8: 0x27a205d8  addiu       $v0, $sp, 0x5D8
    ctx->pc = 0x2807c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1496));
label_2807cc:
    // 0x2807cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2807ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2807d0:
    // 0x2807d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2807d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2807d4:
    // 0x2807d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2807d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2807d8:
    // 0x2807d8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2807dc:
    if (ctx->pc == 0x2807DCu) {
        ctx->pc = 0x2807E0u;
        goto label_2807e0;
    }
    ctx->pc = 0x2807D8u;
    {
        const bool branch_taken_0x2807d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2807d8) {
            ctx->pc = 0x280810u;
            goto label_280810;
        }
    }
    ctx->pc = 0x2807E0u;
label_2807e0:
    // 0x2807e0: 0x8fa205d8  lw          $v0, 0x5D8($sp)
    ctx->pc = 0x2807e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1496)));
label_2807e4:
    // 0x2807e4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2807e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2807e8:
    // 0x2807e8: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2807e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2807ec:
    // 0x2807ec: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2807ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2807f0:
    // 0x2807f0: 0x8fa505d0  lw          $a1, 0x5D0($sp)
    ctx->pc = 0x2807f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1488)));
label_2807f4:
    // 0x2807f4: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x2807f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_2807f8:
    // 0x2807f8: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2807f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_2807fc:
    // 0x2807fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2807fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_280800:
    // 0x280800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280804:
    // 0x280804: 0xc0a7ab4  jal         func_29EAD0
label_280808:
    if (ctx->pc == 0x280808u) {
        ctx->pc = 0x280808u;
            // 0x280808: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x28080Cu;
        goto label_28080c;
    }
    ctx->pc = 0x280804u;
    SET_GPR_U32(ctx, 31, 0x28080Cu);
    ctx->pc = 0x280808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280804u;
            // 0x280808: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28080Cu; }
        if (ctx->pc != 0x28080Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28080Cu; }
        if (ctx->pc != 0x28080Cu) { return; }
    }
    ctx->pc = 0x28080Cu;
label_28080c:
    // 0x28080c: 0x0  nop
    ctx->pc = 0x28080cu;
    // NOP
label_280810:
    // 0x280810: 0x100001ff  b           . + 4 + (0x1FF << 2)
label_280814:
    if (ctx->pc == 0x280814u) {
        ctx->pc = 0x280814u;
            // 0x280814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280818u;
        goto label_280818;
    }
    ctx->pc = 0x280810u;
    {
        const bool branch_taken_0x280810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280810u;
            // 0x280814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280810) {
            ctx->pc = 0x281010u;
            goto label_281010;
        }
    }
    ctx->pc = 0x280818u;
label_280818:
    // 0x280818: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x280818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_28081c:
    // 0x28081c: 0xc0884fc  jal         func_2213F0
label_280820:
    if (ctx->pc == 0x280820u) {
        ctx->pc = 0x280820u;
            // 0x280820: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280824u;
        goto label_280824;
    }
    ctx->pc = 0x28081Cu;
    SET_GPR_U32(ctx, 31, 0x280824u);
    ctx->pc = 0x280820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28081Cu;
            // 0x280820: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2213F0u;
    if (runtime->hasFunction(0x2213F0u)) {
        auto targetFn = runtime->lookupFunction(0x2213F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280824u; }
        if (ctx->pc != 0x280824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002213F0_0x2213f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280824u; }
        if (ctx->pc != 0x280824u) { return; }
    }
    ctx->pc = 0x280824u;
label_280824:
    // 0x280824: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x280824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_280828:
    // 0x280828: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x280828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28082c:
    // 0x28082c: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x28082cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_280830:
    // 0x280830: 0xc0885c8  jal         func_221720
label_280834:
    if (ctx->pc == 0x280834u) {
        ctx->pc = 0x280834u;
            // 0x280834: 0x27a705d0  addiu       $a3, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->pc = 0x280838u;
        goto label_280838;
    }
    ctx->pc = 0x280830u;
    SET_GPR_U32(ctx, 31, 0x280838u);
    ctx->pc = 0x280834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280830u;
            // 0x280834: 0x27a705d0  addiu       $a3, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221720u;
    if (runtime->hasFunction(0x221720u)) {
        auto targetFn = runtime->lookupFunction(0x221720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280838u; }
        if (ctx->pc != 0x280838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221720_0x221720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280838u; }
        if (ctx->pc != 0x280838u) { return; }
    }
    ctx->pc = 0x280838u;
label_280838:
    // 0x280838: 0x8fa30908  lw          $v1, 0x908($sp)
    ctx->pc = 0x280838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2312)));
label_28083c:
    // 0x28083c: 0xafa3090c  sw          $v1, 0x90C($sp)
    ctx->pc = 0x28083cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2316), GPR_U32(ctx, 3));
label_280840:
    // 0x280840: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x280840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_280844:
    // 0x280844: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x280844u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_280848:
    // 0x280848: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_28084c:
    if (ctx->pc == 0x28084Cu) {
        ctx->pc = 0x28084Cu;
            // 0x28084c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280850u;
        goto label_280850;
    }
    ctx->pc = 0x280848u;
    {
        const bool branch_taken_0x280848 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28084Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280848u;
            // 0x28084c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280848) {
            ctx->pc = 0x2808C8u;
            goto label_2808c8;
        }
    }
    ctx->pc = 0x280850u;
label_280850:
    // 0x280850: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x280850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_280854:
    // 0x280854: 0x0  nop
    ctx->pc = 0x280854u;
    // NOP
label_280858:
    // 0x280858: 0x8fa405c0  lw          $a0, 0x5C0($sp)
    ctx->pc = 0x280858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_28085c:
    // 0x28085c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x28085cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_280860:
    // 0x280860: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x280860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_280864:
    // 0x280864: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x280864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_280868:
    // 0x280868: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x280868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28086c:
    // 0x28086c: 0x9484006c  lhu         $a0, 0x6C($a0)
    ctx->pc = 0x28086cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
label_280870:
    // 0x280870: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_280874:
    // 0x280874: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x280874u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_280878:
    // 0x280878: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
label_28087c:
    if (ctx->pc == 0x28087Cu) {
        ctx->pc = 0x280880u;
        goto label_280880;
    }
    ctx->pc = 0x280878u;
    {
        const bool branch_taken_0x280878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x280878) {
            ctx->pc = 0x2808B0u;
            goto label_2808b0;
        }
    }
    ctx->pc = 0x280880u;
label_280880:
    // 0x280880: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x280880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_280884:
    // 0x280884: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x280884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_280888:
    // 0x280888: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x280888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_28088c:
    // 0x28088c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28088cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_280890:
    // 0x280890: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x280890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_280894:
    // 0x280894: 0x8fa705c0  lw          $a3, 0x5C0($sp)
    ctx->pc = 0x280894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_280898:
    // 0x280898: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x280898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28089c:
    // 0x28089c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x28089cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_2808a0:
    // 0x2808a0: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x2808a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2808a4:
    // 0x2808a4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2808a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2808a8:
    // 0x2808a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2808a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2808ac:
    // 0x2808ac: 0x0  nop
    ctx->pc = 0x2808acu;
    // NOP
label_2808b0:
    // 0x2808b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2808b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2808b4:
    // 0x2808b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2808b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2808b8:
    // 0x2808b8: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2808b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2808bc:
    // 0x2808bc: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_2808c0:
    if (ctx->pc == 0x2808C0u) {
        ctx->pc = 0x2808C4u;
        goto label_2808c4;
    }
    ctx->pc = 0x2808BCu;
    {
        const bool branch_taken_0x2808bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2808bc) {
            ctx->pc = 0x280858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280858;
        }
    }
    ctx->pc = 0x2808C4u;
label_2808c4:
    // 0x2808c4: 0x0  nop
    ctx->pc = 0x2808c4u;
    // NOP
label_2808c8:
    // 0x2808c8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2808c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2808cc:
    // 0x2808cc: 0x8fa604b0  lw          $a2, 0x4B0($sp)
    ctx->pc = 0x2808ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_2808d0:
    // 0x2808d0: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x2808d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2808d4:
    // 0x2808d4: 0xc0a0488  jal         func_281220
label_2808d8:
    if (ctx->pc == 0x2808D8u) {
        ctx->pc = 0x2808D8u;
            // 0x2808d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2808DCu;
        goto label_2808dc;
    }
    ctx->pc = 0x2808D4u;
    SET_GPR_U32(ctx, 31, 0x2808DCu);
    ctx->pc = 0x2808D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2808D4u;
            // 0x2808d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281220u;
    if (runtime->hasFunction(0x281220u)) {
        auto targetFn = runtime->lookupFunction(0x281220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808DCu; }
        if (ctx->pc != 0x2808DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281220_0x281220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808DCu; }
        if (ctx->pc != 0x2808DCu) { return; }
    }
    ctx->pc = 0x2808DCu;
label_2808dc:
    // 0x2808dc: 0x27a205c8  addiu       $v0, $sp, 0x5C8
    ctx->pc = 0x2808dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1480));
label_2808e0:
    // 0x2808e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2808e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2808e4:
    // 0x2808e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2808e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2808e8:
    // 0x2808e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2808e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2808ec:
    // 0x2808ec: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2808ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_2808f0:
    // 0x2808f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2808f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2808f4:
    // 0x2808f4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2808f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2808f8:
    // 0x2808f8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2808f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2808fc:
    // 0x2808fc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_280900:
    if (ctx->pc == 0x280900u) {
        ctx->pc = 0x280904u;
        goto label_280904;
    }
    ctx->pc = 0x2808FCu;
    {
        const bool branch_taken_0x2808fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2808fc) {
            ctx->pc = 0x280920u;
            goto label_280920;
        }
    }
    ctx->pc = 0x280904u;
label_280904:
    // 0x280904: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x280904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_280908:
    // 0x280908: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x280908u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_28090c:
    // 0x28090c: 0x61280a  movz        $a1, $v1, $at
    ctx->pc = 0x28090cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_280910:
    // 0x280910: 0x27a405c0  addiu       $a0, $sp, 0x5C0
    ctx->pc = 0x280910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
label_280914:
    // 0x280914: 0xc0a725c  jal         func_29C970
label_280918:
    if (ctx->pc == 0x280918u) {
        ctx->pc = 0x280918u;
            // 0x280918: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x28091Cu;
        goto label_28091c;
    }
    ctx->pc = 0x280914u;
    SET_GPR_U32(ctx, 31, 0x28091Cu);
    ctx->pc = 0x280918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280914u;
            // 0x280918: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28091Cu; }
        if (ctx->pc != 0x28091Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28091Cu; }
        if (ctx->pc != 0x28091Cu) { return; }
    }
    ctx->pc = 0x28091Cu;
label_28091c:
    // 0x28091c: 0x0  nop
    ctx->pc = 0x28091cu;
    // NOP
label_280920:
    // 0x280920: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x280920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_280924:
    // 0x280924: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x280924u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_280928:
    // 0x280928: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_28092c:
    if (ctx->pc == 0x28092Cu) {
        ctx->pc = 0x28092Cu;
            // 0x28092c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280930u;
        goto label_280930;
    }
    ctx->pc = 0x280928u;
    {
        const bool branch_taken_0x280928 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28092Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280928u;
            // 0x28092c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280928) {
            ctx->pc = 0x280988u;
            goto label_280988;
        }
    }
    ctx->pc = 0x280930u;
label_280930:
    // 0x280930: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280934:
    // 0x280934: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x280934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_280938:
    // 0x280938: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x280938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_28093c:
    // 0x28093c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x28093cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_280940:
    // 0x280940: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x280940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_280944:
    // 0x280944: 0x90c300a8  lbu         $v1, 0xA8($a2)
    ctx->pc = 0x280944u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 168)));
label_280948:
    // 0x280948: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
label_28094c:
    if (ctx->pc == 0x28094Cu) {
        ctx->pc = 0x280950u;
        goto label_280950;
    }
    ctx->pc = 0x280948u;
    {
        const bool branch_taken_0x280948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x280948) {
            ctx->pc = 0x280970u;
            goto label_280970;
        }
    }
    ctx->pc = 0x280950u;
label_280950:
    // 0x280950: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x280950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_280954:
    // 0x280954: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x280954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_280958:
    // 0x280958: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x280958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_28095c:
    // 0x28095c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x28095cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_280960:
    // 0x280960: 0x8fa305c0  lw          $v1, 0x5C0($sp)
    ctx->pc = 0x280960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_280964:
    // 0x280964: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_280968:
    // 0x280968: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x280968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_28096c:
    // 0x28096c: 0x0  nop
    ctx->pc = 0x28096cu;
    // NOP
label_280970:
    // 0x280970: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x280970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_280974:
    // 0x280974: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_280978:
    // 0x280978: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x280978u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28097c:
    // 0x28097c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_280980:
    if (ctx->pc == 0x280980u) {
        ctx->pc = 0x280980u;
            // 0x280980: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x280984u;
        goto label_280984;
    }
    ctx->pc = 0x28097Cu;
    {
        const bool branch_taken_0x28097c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28097Cu;
            // 0x280980: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28097c) {
            ctx->pc = 0x280938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280938;
        }
    }
    ctx->pc = 0x280984u;
label_280984:
    // 0x280984: 0x0  nop
    ctx->pc = 0x280984u;
    // NOP
label_280988:
    // 0x280988: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x280988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_28098c:
    // 0x28098c: 0x27a405d0  addiu       $a0, $sp, 0x5D0
    ctx->pc = 0x28098cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
label_280990:
    // 0x280990: 0xc09fd8c  jal         func_27F630
label_280994:
    if (ctx->pc == 0x280994u) {
        ctx->pc = 0x280994u;
            // 0x280994: 0x27a5090c  addiu       $a1, $sp, 0x90C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2316));
        ctx->pc = 0x280998u;
        goto label_280998;
    }
    ctx->pc = 0x280990u;
    SET_GPR_U32(ctx, 31, 0x280998u);
    ctx->pc = 0x280994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280990u;
            // 0x280994: 0x27a5090c  addiu       $a1, $sp, 0x90C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F630u;
    if (runtime->hasFunction(0x27F630u)) {
        auto targetFn = runtime->lookupFunction(0x27F630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280998u; }
        if (ctx->pc != 0x280998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F630_0x27f630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280998u; }
        if (ctx->pc != 0x280998u) { return; }
    }
    ctx->pc = 0x280998u;
label_280998:
    // 0x280998: 0x27a405d0  addiu       $a0, $sp, 0x5D0
    ctx->pc = 0x280998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
label_28099c:
    // 0x28099c: 0x27a5090c  addiu       $a1, $sp, 0x90C
    ctx->pc = 0x28099cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2316));
label_2809a0:
    // 0x2809a0: 0xc09fde0  jal         func_27F780
label_2809a4:
    if (ctx->pc == 0x2809A4u) {
        ctx->pc = 0x2809A4u;
            // 0x2809a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2809A8u;
        goto label_2809a8;
    }
    ctx->pc = 0x2809A0u;
    SET_GPR_U32(ctx, 31, 0x2809A8u);
    ctx->pc = 0x2809A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2809A0u;
            // 0x2809a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F780u;
    if (runtime->hasFunction(0x27F780u)) {
        auto targetFn = runtime->lookupFunction(0x27F780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809A8u; }
        if (ctx->pc != 0x2809A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F780_0x27f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809A8u; }
        if (ctx->pc != 0x2809A8u) { return; }
    }
    ctx->pc = 0x2809A8u;
label_2809a8:
    // 0x2809a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2809a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2809ac:
    // 0x2809ac: 0xc08879c  jal         func_221E70
label_2809b0:
    if (ctx->pc == 0x2809B0u) {
        ctx->pc = 0x2809B0u;
            // 0x2809b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2809B4u;
        goto label_2809b4;
    }
    ctx->pc = 0x2809ACu;
    SET_GPR_U32(ctx, 31, 0x2809B4u);
    ctx->pc = 0x2809B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2809ACu;
            // 0x2809b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E70u;
    if (runtime->hasFunction(0x221E70u)) {
        auto targetFn = runtime->lookupFunction(0x221E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809B4u; }
        if (ctx->pc != 0x2809B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221E70_0x221e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809B4u; }
        if (ctx->pc != 0x2809B4u) { return; }
    }
    ctx->pc = 0x2809B4u;
label_2809b4:
    // 0x2809b4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2809b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2809b8:
    // 0x2809b8: 0x1440fea7  bnez        $v0, . + 4 + (-0x159 << 2)
label_2809bc:
    if (ctx->pc == 0x2809BCu) {
        ctx->pc = 0x2809C0u;
        goto label_2809c0;
    }
    ctx->pc = 0x2809B8u;
    {
        const bool branch_taken_0x2809b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2809b8) {
            ctx->pc = 0x280458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280458;
        }
    }
    ctx->pc = 0x2809C0u;
label_2809c0:
    // 0x2809c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2809c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2809c4:
    // 0x2809c4: 0x1440fea4  bnez        $v0, . + 4 + (-0x15C << 2)
label_2809c8:
    if (ctx->pc == 0x2809C8u) {
        ctx->pc = 0x2809CCu;
        goto label_2809cc;
    }
    ctx->pc = 0x2809C4u;
    {
        const bool branch_taken_0x2809c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2809c4) {
            ctx->pc = 0x280458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280458;
        }
    }
    ctx->pc = 0x2809CCu;
label_2809cc:
    // 0x2809cc: 0x0  nop
    ctx->pc = 0x2809ccu;
    // NOP
label_2809d0:
    // 0x2809d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2809d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2809d4:
    // 0x2809d4: 0xc08879c  jal         func_221E70
label_2809d8:
    if (ctx->pc == 0x2809D8u) {
        ctx->pc = 0x2809D8u;
            // 0x2809d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2809DCu;
        goto label_2809dc;
    }
    ctx->pc = 0x2809D4u;
    SET_GPR_U32(ctx, 31, 0x2809DCu);
    ctx->pc = 0x2809D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2809D4u;
            // 0x2809d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E70u;
    if (runtime->hasFunction(0x221E70u)) {
        auto targetFn = runtime->lookupFunction(0x221E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809DCu; }
        if (ctx->pc != 0x2809DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221E70_0x221e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809DCu; }
        if (ctx->pc != 0x2809DCu) { return; }
    }
    ctx->pc = 0x2809DCu;
label_2809dc:
    // 0x2809dc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2809dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2809e0:
    // 0x2809e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2809e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2809e4:
    // 0x2809e4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2809e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_2809e8:
    // 0x2809e8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2809e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2809ec:
    // 0x2809ec: 0x1c40fe9a  bgtz        $v0, . + 4 + (-0x166 << 2)
label_2809f0:
    if (ctx->pc == 0x2809F0u) {
        ctx->pc = 0x2809F4u;
        goto label_2809f4;
    }
    ctx->pc = 0x2809ECu;
    {
        const bool branch_taken_0x2809ec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2809ec) {
            ctx->pc = 0x280458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280458;
        }
    }
    ctx->pc = 0x2809F4u;
label_2809f4:
    // 0x2809f4: 0x0  nop
    ctx->pc = 0x2809f4u;
    // NOP
label_2809f8:
    // 0x2809f8: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x2809f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_2809fc:
    // 0x2809fc: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x2809fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_280a00:
    // 0x280a00: 0x106200db  beq         $v1, $v0, . + 4 + (0xDB << 2)
label_280a04:
    if (ctx->pc == 0x280A04u) {
        ctx->pc = 0x280A08u;
        goto label_280a08;
    }
    ctx->pc = 0x280A00u;
    {
        const bool branch_taken_0x280a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x280a00) {
            ctx->pc = 0x280D70u;
            goto label_280d70;
        }
    }
    ctx->pc = 0x280A08u;
label_280a08:
    // 0x280a08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x280a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_280a0c:
    // 0x280a0c: 0xc09fe20  jal         func_27F880
label_280a10:
    if (ctx->pc == 0x280A10u) {
        ctx->pc = 0x280A10u;
            // 0x280a10: 0x27a505c0  addiu       $a1, $sp, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
        ctx->pc = 0x280A14u;
        goto label_280a14;
    }
    ctx->pc = 0x280A0Cu;
    SET_GPR_U32(ctx, 31, 0x280A14u);
    ctx->pc = 0x280A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A0Cu;
            // 0x280a10: 0x27a505c0  addiu       $a1, $sp, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F880u;
    if (runtime->hasFunction(0x27F880u)) {
        auto targetFn = runtime->lookupFunction(0x27F880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A14u; }
        if (ctx->pc != 0x280A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F880_0x27f880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A14u; }
        if (ctx->pc != 0x280A14u) { return; }
    }
    ctx->pc = 0x280A14u;
label_280a14:
    // 0x280a14: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x280a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_280a18:
    // 0x280a18: 0x27a40904  addiu       $a0, $sp, 0x904
    ctx->pc = 0x280a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2308));
label_280a1c:
    // 0x280a1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x280a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_280a20:
    // 0x280a20: 0x27a605d0  addiu       $a2, $sp, 0x5D0
    ctx->pc = 0x280a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
label_280a24:
    // 0x280a24: 0x8c47006c  lw          $a3, 0x6C($v0)
    ctx->pc = 0x280a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_280a28:
    // 0x280a28: 0xc09ff24  jal         func_27FC90
label_280a2c:
    if (ctx->pc == 0x280A2Cu) {
        ctx->pc = 0x280A2Cu;
            // 0x280a2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280A30u;
        goto label_280a30;
    }
    ctx->pc = 0x280A28u;
    SET_GPR_U32(ctx, 31, 0x280A30u);
    ctx->pc = 0x280A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A28u;
            // 0x280a2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27FC90u;
    if (runtime->hasFunction(0x27FC90u)) {
        auto targetFn = runtime->lookupFunction(0x27FC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A30u; }
        if (ctx->pc != 0x280A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027FC90_0x27fc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A30u; }
        if (ctx->pc != 0x280A30u) { return; }
    }
    ctx->pc = 0x280A30u;
label_280a30:
    // 0x280a30: 0x83a20904  lb          $v0, 0x904($sp)
    ctx->pc = 0x280a30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 2308)));
label_280a34:
    // 0x280a34: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_280a38:
    if (ctx->pc == 0x280A38u) {
        ctx->pc = 0x280A3Cu;
        goto label_280a3c;
    }
    ctx->pc = 0x280A34u;
    {
        const bool branch_taken_0x280a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280a34) {
            ctx->pc = 0x280AA8u;
            goto label_280aa8;
        }
    }
    ctx->pc = 0x280A3Cu;
label_280a3c:
    // 0x280a3c: 0x10000014  b           . + 4 + (0x14 << 2)
label_280a40:
    if (ctx->pc == 0x280A40u) {
        ctx->pc = 0x280A40u;
            // 0x280a40: 0x8fd00014  lw          $s0, 0x14($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
        ctx->pc = 0x280A44u;
        goto label_280a44;
    }
    ctx->pc = 0x280A3Cu;
    {
        const bool branch_taken_0x280a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280A3Cu;
            // 0x280a40: 0x8fd00014  lw          $s0, 0x14($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a3c) {
            ctx->pc = 0x280A90u;
            goto label_280a90;
        }
    }
    ctx->pc = 0x280A44u;
label_280a44:
    // 0x280a44: 0x0  nop
    ctx->pc = 0x280a44u;
    // NOP
label_280a48:
    // 0x280a48: 0x8ea50030  lw          $a1, 0x30($s5)
    ctx->pc = 0x280a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_280a4c:
    // 0x280a4c: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x280a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_280a50:
    // 0x280a50: 0x8ea70040  lw          $a3, 0x40($s5)
    ctx->pc = 0x280a50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_280a54:
    // 0x280a54: 0xc0854ea  jal         func_2153A8
label_280a58:
    if (ctx->pc == 0x280A58u) {
        ctx->pc = 0x280A58u;
            // 0x280a58: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x280A5Cu;
        goto label_280a5c;
    }
    ctx->pc = 0x280A54u;
    SET_GPR_U32(ctx, 31, 0x280A5Cu);
    ctx->pc = 0x280A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A54u;
            // 0x280a58: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2153A8u;
    if (runtime->hasFunction(0x2153A8u)) {
        auto targetFn = runtime->lookupFunction(0x2153A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A5Cu; }
        if (ctx->pc != 0x280A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002153A8_0x2153a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A5Cu; }
        if (ctx->pc != 0x280A5Cu) { return; }
    }
    ctx->pc = 0x280A5Cu;
label_280a5c:
    // 0x280a5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x280a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_280a60:
    // 0x280a60: 0xc09fe20  jal         func_27F880
label_280a64:
    if (ctx->pc == 0x280A64u) {
        ctx->pc = 0x280A64u;
            // 0x280a64: 0x27a505c0  addiu       $a1, $sp, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
        ctx->pc = 0x280A68u;
        goto label_280a68;
    }
    ctx->pc = 0x280A60u;
    SET_GPR_U32(ctx, 31, 0x280A68u);
    ctx->pc = 0x280A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A60u;
            // 0x280a64: 0x27a505c0  addiu       $a1, $sp, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F880u;
    if (runtime->hasFunction(0x27F880u)) {
        auto targetFn = runtime->lookupFunction(0x27F880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A68u; }
        if (ctx->pc != 0x280A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F880_0x27f880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A68u; }
        if (ctx->pc != 0x280A68u) { return; }
    }
    ctx->pc = 0x280A68u;
label_280a68:
    // 0x280a68: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x280a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_280a6c:
    // 0x280a6c: 0x27a408f8  addiu       $a0, $sp, 0x8F8
    ctx->pc = 0x280a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2296));
label_280a70:
    // 0x280a70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x280a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_280a74:
    // 0x280a74: 0x27a605d0  addiu       $a2, $sp, 0x5D0
    ctx->pc = 0x280a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
label_280a78:
    // 0x280a78: 0x8c47006c  lw          $a3, 0x6C($v0)
    ctx->pc = 0x280a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_280a7c:
    // 0x280a7c: 0xc09ff24  jal         func_27FC90
label_280a80:
    if (ctx->pc == 0x280A80u) {
        ctx->pc = 0x280A80u;
            // 0x280a80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280A84u;
        goto label_280a84;
    }
    ctx->pc = 0x280A7Cu;
    SET_GPR_U32(ctx, 31, 0x280A84u);
    ctx->pc = 0x280A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A7Cu;
            // 0x280a80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27FC90u;
    if (runtime->hasFunction(0x27FC90u)) {
        auto targetFn = runtime->lookupFunction(0x27FC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A84u; }
        if (ctx->pc != 0x280A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027FC90_0x27fc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A84u; }
        if (ctx->pc != 0x280A84u) { return; }
    }
    ctx->pc = 0x280A84u;
label_280a84:
    // 0x280a84: 0x83a208f8  lb          $v0, 0x8F8($sp)
    ctx->pc = 0x280a84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 2296)));
label_280a88:
    // 0x280a88: 0xa3a20904  sb          $v0, 0x904($sp)
    ctx->pc = 0x280a88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2308), (uint8_t)GPR_U32(ctx, 2));
label_280a8c:
    // 0x280a8c: 0x0  nop
    ctx->pc = 0x280a8cu;
    // NOP
label_280a90:
    // 0x280a90: 0x83a20904  lb          $v0, 0x904($sp)
    ctx->pc = 0x280a90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 2308)));
label_280a94:
    // 0x280a94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_280a98:
    if (ctx->pc == 0x280A98u) {
        ctx->pc = 0x280A9Cu;
        goto label_280a9c;
    }
    ctx->pc = 0x280A94u;
    {
        const bool branch_taken_0x280a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280a94) {
            ctx->pc = 0x280AA8u;
            goto label_280aa8;
        }
    }
    ctx->pc = 0x280A9Cu;
label_280a9c:
    // 0x280a9c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x280a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_280aa0:
    // 0x280aa0: 0x601ffe9  bgez        $s0, . + 4 + (-0x17 << 2)
label_280aa4:
    if (ctx->pc == 0x280AA4u) {
        ctx->pc = 0x280AA8u;
        goto label_280aa8;
    }
    ctx->pc = 0x280AA0u;
    {
        const bool branch_taken_0x280aa0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x280aa0) {
            ctx->pc = 0x280A48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280a48;
        }
    }
    ctx->pc = 0x280AA8u;
label_280aa8:
    // 0x280aa8: 0x144000b1  bnez        $v0, . + 4 + (0xB1 << 2)
label_280aac:
    if (ctx->pc == 0x280AACu) {
        ctx->pc = 0x280AB0u;
        goto label_280ab0;
    }
    ctx->pc = 0x280AA8u;
    {
        const bool branch_taken_0x280aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280aa8) {
            ctx->pc = 0x280D70u;
            goto label_280d70;
        }
    }
    ctx->pc = 0x280AB0u;
label_280ab0:
    // 0x280ab0: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x280ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_280ab4:
    // 0x280ab4: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x280ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_280ab8:
    // 0x280ab8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x280ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_280abc:
    // 0x280abc: 0x27b00108  addiu       $s0, $sp, 0x108
    ctx->pc = 0x280abcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_280ac0:
    // 0x280ac0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280ac4:
    // 0x280ac4: 0x27a408f4  addiu       $a0, $sp, 0x8F4
    ctx->pc = 0x280ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2292));
label_280ac8:
    // 0x280ac8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x280ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_280acc:
    // 0x280acc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x280accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_280ad0:
    // 0x280ad0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x280ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_280ad4:
    // 0x280ad4: 0x27a605d0  addiu       $a2, $sp, 0x5D0
    ctx->pc = 0x280ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
label_280ad8:
    // 0x280ad8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x280ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_280adc:
    // 0x280adc: 0x8c47006c  lw          $a3, 0x6C($v0)
    ctx->pc = 0x280adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_280ae0:
    // 0x280ae0: 0xc09ff24  jal         func_27FC90
label_280ae4:
    if (ctx->pc == 0x280AE4u) {
        ctx->pc = 0x280AE4u;
            // 0x280ae4: 0x27a80100  addiu       $t0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x280AE8u;
        goto label_280ae8;
    }
    ctx->pc = 0x280AE0u;
    SET_GPR_U32(ctx, 31, 0x280AE8u);
    ctx->pc = 0x280AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280AE0u;
            // 0x280ae4: 0x27a80100  addiu       $t0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27FC90u;
    if (runtime->hasFunction(0x27FC90u)) {
        auto targetFn = runtime->lookupFunction(0x27FC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AE8u; }
        if (ctx->pc != 0x280AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027FC90_0x27fc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AE8u; }
        if (ctx->pc != 0x280AE8u) { return; }
    }
    ctx->pc = 0x280AE8u;
label_280ae8:
    // 0x280ae8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x280ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_280aec:
    // 0x280aec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x280aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_280af0:
    // 0x280af0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x280af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_280af4:
    // 0x280af4: 0x320f809  jalr        $t9
label_280af8:
    if (ctx->pc == 0x280AF8u) {
        ctx->pc = 0x280AF8u;
            // 0x280af8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x280AFCu;
        goto label_280afc;
    }
    ctx->pc = 0x280AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x280AFCu);
        ctx->pc = 0x280AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280AF4u;
            // 0x280af8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x280AFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x280AFCu; }
            if (ctx->pc != 0x280AFCu) { return; }
        }
        }
    }
    ctx->pc = 0x280AFCu;
label_280afc:
    // 0x280afc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x280afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_280b00:
    // 0x280b00: 0x1443008b  bne         $v0, $v1, . + 4 + (0x8B << 2)
label_280b04:
    if (ctx->pc == 0x280B04u) {
        ctx->pc = 0x280B08u;
        goto label_280b08;
    }
    ctx->pc = 0x280B00u;
    {
        const bool branch_taken_0x280b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x280b00) {
            ctx->pc = 0x280D30u;
            goto label_280d30;
        }
    }
    ctx->pc = 0x280B08u;
label_280b08:
    // 0x280b08: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x280b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_280b0c:
    // 0x280b0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x280b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_280b10:
    // 0x280b10: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x280b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_280b14:
    // 0x280b14: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x280b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_280b18:
    // 0x280b18: 0xc09fe5c  jal         func_27F970
label_280b1c:
    if (ctx->pc == 0x280B1Cu) {
        ctx->pc = 0x280B1Cu;
            // 0x280b1c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280B20u;
        goto label_280b20;
    }
    ctx->pc = 0x280B18u;
    SET_GPR_U32(ctx, 31, 0x280B20u);
    ctx->pc = 0x280B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280B18u;
            // 0x280b1c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F970u;
    if (runtime->hasFunction(0x27F970u)) {
        auto targetFn = runtime->lookupFunction(0x27F970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B20u; }
        if (ctx->pc != 0x280B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F970_0x27f970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B20u; }
        if (ctx->pc != 0x280B20u) { return; }
    }
    ctx->pc = 0x280B20u;
label_280b20:
    // 0x280b20: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x280b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_280b24:
    // 0x280b24: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x280b24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_280b28:
    // 0x280b28: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_280b2c:
    if (ctx->pc == 0x280B2Cu) {
        ctx->pc = 0x280B2Cu;
            // 0x280b2c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280B30u;
        goto label_280b30;
    }
    ctx->pc = 0x280B28u;
    {
        const bool branch_taken_0x280b28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280B28u;
            // 0x280b2c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b28) {
            ctx->pc = 0x280B68u;
            goto label_280b68;
        }
    }
    ctx->pc = 0x280B30u;
label_280b30:
    // 0x280b30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x280b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280b34:
    // 0x280b34: 0x0  nop
    ctx->pc = 0x280b34u;
    // NOP
label_280b38:
    // 0x280b38: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x280b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_280b3c:
    // 0x280b3c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x280b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_280b40:
    // 0x280b40: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x280b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_280b44:
    // 0x280b44: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x280b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_280b48:
    // 0x280b48: 0xc08e330  jal         func_238CC0
label_280b4c:
    if (ctx->pc == 0x280B4Cu) {
        ctx->pc = 0x280B4Cu;
            // 0x280b4c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x280B50u;
        goto label_280b50;
    }
    ctx->pc = 0x280B48u;
    SET_GPR_U32(ctx, 31, 0x280B50u);
    ctx->pc = 0x280B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280B48u;
            // 0x280b4c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CC0u;
    if (runtime->hasFunction(0x238CC0u)) {
        auto targetFn = runtime->lookupFunction(0x238CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B50u; }
        if (ctx->pc != 0x280B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CC0_0x238cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B50u; }
        if (ctx->pc != 0x280B50u) { return; }
    }
    ctx->pc = 0x280B50u;
label_280b50:
    // 0x280b50: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x280b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_280b54:
    // 0x280b54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x280b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_280b58:
    // 0x280b58: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x280b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_280b5c:
    // 0x280b5c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_280b60:
    if (ctx->pc == 0x280B60u) {
        ctx->pc = 0x280B60u;
            // 0x280b60: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x280B64u;
        goto label_280b64;
    }
    ctx->pc = 0x280B5Cu;
    {
        const bool branch_taken_0x280b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280B5Cu;
            // 0x280b60: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b5c) {
            ctx->pc = 0x280B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280b38;
        }
    }
    ctx->pc = 0x280B64u;
label_280b64:
    // 0x280b64: 0x0  nop
    ctx->pc = 0x280b64u;
    // NOP
label_280b68:
    // 0x280b68: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x280b68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_280b6c:
    // 0x280b6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x280b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_280b70:
    // 0x280b70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280b74:
    // 0x280b74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280b78:
    // 0x280b78: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_280b7c:
    if (ctx->pc == 0x280B7Cu) {
        ctx->pc = 0x280B80u;
        goto label_280b80;
    }
    ctx->pc = 0x280B78u;
    {
        const bool branch_taken_0x280b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280b78) {
            ctx->pc = 0x280BB0u;
            goto label_280bb0;
        }
    }
    ctx->pc = 0x280B80u;
label_280b80:
    // 0x280b80: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x280b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_280b84:
    // 0x280b84: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280b88:
    // 0x280b88: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280b8c:
    // 0x280b8c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x280b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280b90:
    // 0x280b90: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x280b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_280b94:
    // 0x280b94: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x280b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_280b98:
    // 0x280b98: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x280b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_280b9c:
    // 0x280b9c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x280b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_280ba0:
    // 0x280ba0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280ba4:
    // 0x280ba4: 0xc0a7ab4  jal         func_29EAD0
label_280ba8:
    if (ctx->pc == 0x280BA8u) {
        ctx->pc = 0x280BA8u;
            // 0x280ba8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280BACu;
        goto label_280bac;
    }
    ctx->pc = 0x280BA4u;
    SET_GPR_U32(ctx, 31, 0x280BACu);
    ctx->pc = 0x280BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280BA4u;
            // 0x280ba8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280BACu; }
        if (ctx->pc != 0x280BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280BACu; }
        if (ctx->pc != 0x280BACu) { return; }
    }
    ctx->pc = 0x280BACu;
label_280bac:
    // 0x280bac: 0x0  nop
    ctx->pc = 0x280bacu;
    // NOP
label_280bb0:
    // 0x280bb0: 0x27a20298  addiu       $v0, $sp, 0x298
    ctx->pc = 0x280bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_280bb4:
    // 0x280bb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x280bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280bb8:
    // 0x280bb8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280bbc:
    // 0x280bbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280bc0:
    // 0x280bc0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_280bc4:
    if (ctx->pc == 0x280BC4u) {
        ctx->pc = 0x280BC8u;
        goto label_280bc8;
    }
    ctx->pc = 0x280BC0u;
    {
        const bool branch_taken_0x280bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280bc0) {
            ctx->pc = 0x280BF0u;
            goto label_280bf0;
        }
    }
    ctx->pc = 0x280BC8u;
label_280bc8:
    // 0x280bc8: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x280bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_280bcc:
    // 0x280bcc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280bd0:
    // 0x280bd0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280bd4:
    // 0x280bd4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x280bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280bd8:
    // 0x280bd8: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x280bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_280bdc:
    // 0x280bdc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x280bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_280be0:
    // 0x280be0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x280be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_280be4:
    // 0x280be4: 0xc0a7ab4  jal         func_29EAD0
label_280be8:
    if (ctx->pc == 0x280BE8u) {
        ctx->pc = 0x280BE8u;
            // 0x280be8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280BECu;
        goto label_280bec;
    }
    ctx->pc = 0x280BE4u;
    SET_GPR_U32(ctx, 31, 0x280BECu);
    ctx->pc = 0x280BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280BE4u;
            // 0x280be8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280BECu; }
        if (ctx->pc != 0x280BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280BECu; }
        if (ctx->pc != 0x280BECu) { return; }
    }
    ctx->pc = 0x280BECu;
label_280bec:
    // 0x280bec: 0x0  nop
    ctx->pc = 0x280becu;
    // NOP
label_280bf0:
    // 0x280bf0: 0x27a203a8  addiu       $v0, $sp, 0x3A8
    ctx->pc = 0x280bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 936));
label_280bf4:
    // 0x280bf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x280bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280bf8:
    // 0x280bf8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280bfc:
    // 0x280bfc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280c00:
    // 0x280c00: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_280c04:
    if (ctx->pc == 0x280C04u) {
        ctx->pc = 0x280C08u;
        goto label_280c08;
    }
    ctx->pc = 0x280C00u;
    {
        const bool branch_taken_0x280c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280c00) {
            ctx->pc = 0x280C30u;
            goto label_280c30;
        }
    }
    ctx->pc = 0x280C08u;
label_280c08:
    // 0x280c08: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x280c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_280c0c:
    // 0x280c0c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280c10:
    // 0x280c10: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280c14:
    // 0x280c14: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x280c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280c18:
    // 0x280c18: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x280c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_280c1c:
    // 0x280c1c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x280c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_280c20:
    // 0x280c20: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x280c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_280c24:
    // 0x280c24: 0xc0a7ab4  jal         func_29EAD0
label_280c28:
    if (ctx->pc == 0x280C28u) {
        ctx->pc = 0x280C28u;
            // 0x280c28: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280C2Cu;
        goto label_280c2c;
    }
    ctx->pc = 0x280C24u;
    SET_GPR_U32(ctx, 31, 0x280C2Cu);
    ctx->pc = 0x280C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280C24u;
            // 0x280c28: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C2Cu; }
        if (ctx->pc != 0x280C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C2Cu; }
        if (ctx->pc != 0x280C2Cu) { return; }
    }
    ctx->pc = 0x280C2Cu;
label_280c2c:
    // 0x280c2c: 0x0  nop
    ctx->pc = 0x280c2cu;
    // NOP
label_280c30:
    // 0x280c30: 0x27a204b8  addiu       $v0, $sp, 0x4B8
    ctx->pc = 0x280c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
label_280c34:
    // 0x280c34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x280c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280c38:
    // 0x280c38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280c3c:
    // 0x280c3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280c40:
    // 0x280c40: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_280c44:
    if (ctx->pc == 0x280C44u) {
        ctx->pc = 0x280C48u;
        goto label_280c48;
    }
    ctx->pc = 0x280C40u;
    {
        const bool branch_taken_0x280c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280c40) {
            ctx->pc = 0x280C70u;
            goto label_280c70;
        }
    }
    ctx->pc = 0x280C48u;
label_280c48:
    // 0x280c48: 0x8fa204b8  lw          $v0, 0x4B8($sp)
    ctx->pc = 0x280c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
label_280c4c:
    // 0x280c4c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280c50:
    // 0x280c50: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280c54:
    // 0x280c54: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x280c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280c58:
    // 0x280c58: 0x8fa504b0  lw          $a1, 0x4B0($sp)
    ctx->pc = 0x280c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_280c5c:
    // 0x280c5c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x280c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_280c60:
    // 0x280c60: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x280c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_280c64:
    // 0x280c64: 0xc0a7ab4  jal         func_29EAD0
label_280c68:
    if (ctx->pc == 0x280C68u) {
        ctx->pc = 0x280C68u;
            // 0x280c68: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280C6Cu;
        goto label_280c6c;
    }
    ctx->pc = 0x280C64u;
    SET_GPR_U32(ctx, 31, 0x280C6Cu);
    ctx->pc = 0x280C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280C64u;
            // 0x280c68: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C6Cu; }
        if (ctx->pc != 0x280C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C6Cu; }
        if (ctx->pc != 0x280C6Cu) { return; }
    }
    ctx->pc = 0x280C6Cu;
label_280c6c:
    // 0x280c6c: 0x0  nop
    ctx->pc = 0x280c6cu;
    // NOP
label_280c70:
    // 0x280c70: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280c74:
    // 0x280c74: 0x8fa505cc  lw          $a1, 0x5CC($sp)
    ctx->pc = 0x280c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1484)));
label_280c78:
    // 0x280c78: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280c7c:
    // 0x280c7c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x280c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_280c80:
    // 0x280c80: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x280c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_280c84:
    // 0x280c84: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_280c88:
    if (ctx->pc == 0x280C88u) {
        ctx->pc = 0x280C8Cu;
        goto label_280c8c;
    }
    ctx->pc = 0x280C84u;
    {
        const bool branch_taken_0x280c84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x280c84) {
            ctx->pc = 0x280CA0u;
            goto label_280ca0;
        }
    }
    ctx->pc = 0x280C8Cu;
label_280c8c:
    // 0x280c8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x280c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_280c90:
    // 0x280c90: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x280c90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_280c94:
    // 0x280c94: 0x320f809  jalr        $t9
label_280c98:
    if (ctx->pc == 0x280C98u) {
        ctx->pc = 0x280C9Cu;
        goto label_280c9c;
    }
    ctx->pc = 0x280C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x280C9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x280C9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x280C9Cu; }
            if (ctx->pc != 0x280C9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x280C9Cu;
label_280c9c:
    // 0x280c9c: 0x0  nop
    ctx->pc = 0x280c9cu;
    // NOP
label_280ca0:
    // 0x280ca0: 0x27a205c8  addiu       $v0, $sp, 0x5C8
    ctx->pc = 0x280ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1480));
label_280ca4:
    // 0x280ca4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x280ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280ca8:
    // 0x280ca8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280cac:
    // 0x280cac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280cb0:
    // 0x280cb0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_280cb4:
    if (ctx->pc == 0x280CB4u) {
        ctx->pc = 0x280CB8u;
        goto label_280cb8;
    }
    ctx->pc = 0x280CB0u;
    {
        const bool branch_taken_0x280cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280cb0) {
            ctx->pc = 0x280CE0u;
            goto label_280ce0;
        }
    }
    ctx->pc = 0x280CB8u;
label_280cb8:
    // 0x280cb8: 0x8fa205c8  lw          $v0, 0x5C8($sp)
    ctx->pc = 0x280cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1480)));
label_280cbc:
    // 0x280cbc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280cc0:
    // 0x280cc0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280cc4:
    // 0x280cc4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x280cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280cc8:
    // 0x280cc8: 0x8fa505c0  lw          $a1, 0x5C0($sp)
    ctx->pc = 0x280cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_280ccc:
    // 0x280ccc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x280cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_280cd0:
    // 0x280cd0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x280cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_280cd4:
    // 0x280cd4: 0xc0a7ab4  jal         func_29EAD0
label_280cd8:
    if (ctx->pc == 0x280CD8u) {
        ctx->pc = 0x280CD8u;
            // 0x280cd8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280CDCu;
        goto label_280cdc;
    }
    ctx->pc = 0x280CD4u;
    SET_GPR_U32(ctx, 31, 0x280CDCu);
    ctx->pc = 0x280CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280CD4u;
            // 0x280cd8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280CDCu; }
        if (ctx->pc != 0x280CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280CDCu; }
        if (ctx->pc != 0x280CDCu) { return; }
    }
    ctx->pc = 0x280CDCu;
label_280cdc:
    // 0x280cdc: 0x0  nop
    ctx->pc = 0x280cdcu;
    // NOP
label_280ce0:
    // 0x280ce0: 0x27a205d8  addiu       $v0, $sp, 0x5D8
    ctx->pc = 0x280ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1496));
label_280ce4:
    // 0x280ce4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x280ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280ce8:
    // 0x280ce8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280cec:
    // 0x280cec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280cf0:
    // 0x280cf0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_280cf4:
    if (ctx->pc == 0x280CF4u) {
        ctx->pc = 0x280CF8u;
        goto label_280cf8;
    }
    ctx->pc = 0x280CF0u;
    {
        const bool branch_taken_0x280cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280cf0) {
            ctx->pc = 0x280D28u;
            goto label_280d28;
        }
    }
    ctx->pc = 0x280CF8u;
label_280cf8:
    // 0x280cf8: 0x8fa205d8  lw          $v0, 0x5D8($sp)
    ctx->pc = 0x280cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1496)));
label_280cfc:
    // 0x280cfc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280d00:
    // 0x280d00: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280d04:
    // 0x280d04: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x280d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280d08:
    // 0x280d08: 0x8fa505d0  lw          $a1, 0x5D0($sp)
    ctx->pc = 0x280d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1488)));
label_280d0c:
    // 0x280d0c: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x280d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_280d10:
    // 0x280d10: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x280d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_280d14:
    // 0x280d14: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x280d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_280d18:
    // 0x280d18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280d1c:
    // 0x280d1c: 0xc0a7ab4  jal         func_29EAD0
label_280d20:
    if (ctx->pc == 0x280D20u) {
        ctx->pc = 0x280D20u;
            // 0x280d20: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280D24u;
        goto label_280d24;
    }
    ctx->pc = 0x280D1Cu;
    SET_GPR_U32(ctx, 31, 0x280D24u);
    ctx->pc = 0x280D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D1Cu;
            // 0x280d20: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D24u; }
        if (ctx->pc != 0x280D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D24u; }
        if (ctx->pc != 0x280D24u) { return; }
    }
    ctx->pc = 0x280D24u;
label_280d24:
    // 0x280d24: 0x0  nop
    ctx->pc = 0x280d24u;
    // NOP
label_280d28:
    // 0x280d28: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_280d2c:
    if (ctx->pc == 0x280D2Cu) {
        ctx->pc = 0x280D2Cu;
            // 0x280d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280D30u;
        goto label_280d30;
    }
    ctx->pc = 0x280D28u;
    {
        const bool branch_taken_0x280d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280D28u;
            // 0x280d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d28) {
            ctx->pc = 0x281010u;
            goto label_281010;
        }
    }
    ctx->pc = 0x280D30u;
label_280d30:
    // 0x280d30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x280d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_280d34:
    // 0x280d34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280d38:
    // 0x280d38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280d3c:
    // 0x280d3c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_280d40:
    if (ctx->pc == 0x280D40u) {
        ctx->pc = 0x280D44u;
        goto label_280d44;
    }
    ctx->pc = 0x280D3Cu;
    {
        const bool branch_taken_0x280d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280d3c) {
            ctx->pc = 0x280D70u;
            goto label_280d70;
        }
    }
    ctx->pc = 0x280D44u;
label_280d44:
    // 0x280d44: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x280d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_280d48:
    // 0x280d48: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280d4c:
    // 0x280d4c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280d50:
    // 0x280d50: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x280d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280d54:
    // 0x280d54: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x280d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_280d58:
    // 0x280d58: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x280d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_280d5c:
    // 0x280d5c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x280d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_280d60:
    // 0x280d60: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x280d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_280d64:
    // 0x280d64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280d68:
    // 0x280d68: 0xc0a7ab4  jal         func_29EAD0
label_280d6c:
    if (ctx->pc == 0x280D6Cu) {
        ctx->pc = 0x280D6Cu;
            // 0x280d6c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280D70u;
        goto label_280d70;
    }
    ctx->pc = 0x280D68u;
    SET_GPR_U32(ctx, 31, 0x280D70u);
    ctx->pc = 0x280D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D68u;
            // 0x280d6c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D70u; }
        if (ctx->pc != 0x280D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D70u; }
        if (ctx->pc != 0x280D70u) { return; }
    }
    ctx->pc = 0x280D70u;
label_280d70:
    // 0x280d70: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x280d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_280d74:
    // 0x280d74: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_280d78:
    if (ctx->pc == 0x280D78u) {
        ctx->pc = 0x280D7Cu;
        goto label_280d7c;
    }
    ctx->pc = 0x280D74u;
    {
        const bool branch_taken_0x280d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280d74) {
            ctx->pc = 0x280DE0u;
            goto label_280de0;
        }
    }
    ctx->pc = 0x280D7Cu;
label_280d7c:
    // 0x280d7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x280d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_280d80:
    // 0x280d80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280d84:
    // 0x280d84: 0xc0a0418  jal         func_281060
label_280d88:
    if (ctx->pc == 0x280D88u) {
        ctx->pc = 0x280D88u;
            // 0x280d88: 0x27a608e8  addiu       $a2, $sp, 0x8E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2280));
        ctx->pc = 0x280D8Cu;
        goto label_280d8c;
    }
    ctx->pc = 0x280D84u;
    SET_GPR_U32(ctx, 31, 0x280D8Cu);
    ctx->pc = 0x280D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D84u;
            // 0x280d88: 0x27a608e8  addiu       $a2, $sp, 0x8E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281060u;
    if (runtime->hasFunction(0x281060u)) {
        auto targetFn = runtime->lookupFunction(0x281060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D8Cu; }
        if (ctx->pc != 0x280D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281060_0x281060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D8Cu; }
        if (ctx->pc != 0x280D8Cu) { return; }
    }
    ctx->pc = 0x280D8Cu;
label_280d8c:
    // 0x280d8c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x280d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_280d90:
    // 0x280d90: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x280d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_280d94:
    // 0x280d94: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x280d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_280d98:
    // 0x280d98: 0x27a608ec  addiu       $a2, $sp, 0x8EC
    ctx->pc = 0x280d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2284));
label_280d9c:
    // 0x280d9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x280d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_280da0:
    // 0x280da0: 0x9463006c  lhu         $v1, 0x6C($v1)
    ctx->pc = 0x280da0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
label_280da4:
    // 0x280da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280da8:
    // 0x280da8: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x280da8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_280dac:
    // 0x280dac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x280dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_280db0:
    // 0x280db0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_280db4:
    if (ctx->pc == 0x280DB4u) {
        ctx->pc = 0x280DB8u;
        goto label_280db8;
    }
    ctx->pc = 0x280DB0u;
    {
        const bool branch_taken_0x280db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280db0) {
            ctx->pc = 0x280DE0u;
            goto label_280de0;
        }
    }
    ctx->pc = 0x280DB8u;
label_280db8:
    // 0x280db8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x280db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_280dbc:
    // 0x280dbc: 0xc0a0418  jal         func_281060
label_280dc0:
    if (ctx->pc == 0x280DC0u) {
        ctx->pc = 0x280DC0u;
            // 0x280dc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x280DC4u;
        goto label_280dc4;
    }
    ctx->pc = 0x280DBCu;
    SET_GPR_U32(ctx, 31, 0x280DC4u);
    ctx->pc = 0x280DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280DBCu;
            // 0x280dc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281060u;
    if (runtime->hasFunction(0x281060u)) {
        auto targetFn = runtime->lookupFunction(0x281060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DC4u; }
        if (ctx->pc != 0x280DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281060_0x281060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DC4u; }
        if (ctx->pc != 0x280DC4u) { return; }
    }
    ctx->pc = 0x280DC4u;
label_280dc4:
    // 0x280dc4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x280dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_280dc8:
    // 0x280dc8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x280dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_280dcc:
    // 0x280dcc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x280dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_280dd0:
    // 0x280dd0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x280dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_280dd4:
    // 0x280dd4: 0x9463006c  lhu         $v1, 0x6C($v1)
    ctx->pc = 0x280dd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
label_280dd8:
    // 0x280dd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280ddc:
    // 0x280ddc: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x280ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_280de0:
    // 0x280de0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x280de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_280de4:
    // 0x280de4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x280de4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_280de8:
    // 0x280de8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_280dec:
    if (ctx->pc == 0x280DECu) {
        ctx->pc = 0x280DECu;
            // 0x280dec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280DF0u;
        goto label_280df0;
    }
    ctx->pc = 0x280DE8u;
    {
        const bool branch_taken_0x280de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x280DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280DE8u;
            // 0x280dec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280de8) {
            ctx->pc = 0x280E28u;
            goto label_280e28;
        }
    }
    ctx->pc = 0x280DF0u;
label_280df0:
    // 0x280df0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x280df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280df4:
    // 0x280df4: 0x0  nop
    ctx->pc = 0x280df4u;
    // NOP
label_280df8:
    // 0x280df8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x280df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_280dfc:
    // 0x280dfc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x280dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_280e00:
    // 0x280e00: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x280e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_280e04:
    // 0x280e04: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x280e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_280e08:
    // 0x280e08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x280e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280e0c:
    // 0x280e0c: 0xc0a3f04  jal         func_28FC10
label_280e10:
    if (ctx->pc == 0x280E10u) {
        ctx->pc = 0x280E10u;
            // 0x280e10: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->pc = 0x280E14u;
        goto label_280e14;
    }
    ctx->pc = 0x280E0Cu;
    SET_GPR_U32(ctx, 31, 0x280E14u);
    ctx->pc = 0x280E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E0Cu;
            // 0x280e10: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28FC10u;
    if (runtime->hasFunction(0x28FC10u)) {
        auto targetFn = runtime->lookupFunction(0x28FC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E14u; }
        if (ctx->pc != 0x280E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028FC10_0x28fc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E14u; }
        if (ctx->pc != 0x280E14u) { return; }
    }
    ctx->pc = 0x280E14u;
label_280e14:
    // 0x280e14: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x280e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_280e18:
    // 0x280e18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x280e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_280e1c:
    // 0x280e1c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x280e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_280e20:
    // 0x280e20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_280e24:
    if (ctx->pc == 0x280E24u) {
        ctx->pc = 0x280E24u;
            // 0x280e24: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x280E28u;
        goto label_280e28;
    }
    ctx->pc = 0x280E20u;
    {
        const bool branch_taken_0x280e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E20u;
            // 0x280e24: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e20) {
            ctx->pc = 0x280DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280df8;
        }
    }
    ctx->pc = 0x280E28u;
label_280e28:
    // 0x280e28: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x280e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_280e2c:
    // 0x280e2c: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x280e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_280e30:
    // 0x280e30: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x280e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_280e34:
    // 0x280e34: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x280e34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_280e38:
    // 0x280e38: 0xc0881d4  jal         func_220750
label_280e3c:
    if (ctx->pc == 0x280E3Cu) {
        ctx->pc = 0x280E3Cu;
            // 0x280e3c: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x280E40u;
        goto label_280e40;
    }
    ctx->pc = 0x280E38u;
    SET_GPR_U32(ctx, 31, 0x280E40u);
    ctx->pc = 0x280E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E38u;
            // 0x280e3c: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220750u;
    if (runtime->hasFunction(0x220750u)) {
        auto targetFn = runtime->lookupFunction(0x220750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E40u; }
        if (ctx->pc != 0x280E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220750_0x220750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E40u; }
        if (ctx->pc != 0x280E40u) { return; }
    }
    ctx->pc = 0x280E40u;
label_280e40:
    // 0x280e40: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x280e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_280e44:
    // 0x280e44: 0xc09fec0  jal         func_27FB00
label_280e48:
    if (ctx->pc == 0x280E48u) {
        ctx->pc = 0x280E48u;
            // 0x280e48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280E4Cu;
        goto label_280e4c;
    }
    ctx->pc = 0x280E44u;
    SET_GPR_U32(ctx, 31, 0x280E4Cu);
    ctx->pc = 0x280E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E44u;
            // 0x280e48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27FB00u;
    if (runtime->hasFunction(0x27FB00u)) {
        auto targetFn = runtime->lookupFunction(0x27FB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E4Cu; }
        if (ctx->pc != 0x280E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027FB00_0x27fb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E4Cu; }
        if (ctx->pc != 0x280E4Cu) { return; }
    }
    ctx->pc = 0x280E4Cu;
label_280e4c:
    // 0x280e4c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x280e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_280e50:
    // 0x280e50: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x280e50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_280e54:
    // 0x280e54: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_280e58:
    if (ctx->pc == 0x280E58u) {
        ctx->pc = 0x280E58u;
            // 0x280e58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280E5Cu;
        goto label_280e5c;
    }
    ctx->pc = 0x280E54u;
    {
        const bool branch_taken_0x280e54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E54u;
            // 0x280e58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e54) {
            ctx->pc = 0x280E90u;
            goto label_280e90;
        }
    }
    ctx->pc = 0x280E5Cu;
label_280e5c:
    // 0x280e5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x280e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280e60:
    // 0x280e60: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x280e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_280e64:
    // 0x280e64: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x280e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_280e68:
    // 0x280e68: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x280e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_280e6c:
    // 0x280e6c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x280e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_280e70:
    // 0x280e70: 0xc08e330  jal         func_238CC0
label_280e74:
    if (ctx->pc == 0x280E74u) {
        ctx->pc = 0x280E74u;
            // 0x280e74: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x280E78u;
        goto label_280e78;
    }
    ctx->pc = 0x280E70u;
    SET_GPR_U32(ctx, 31, 0x280E78u);
    ctx->pc = 0x280E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E70u;
            // 0x280e74: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CC0u;
    if (runtime->hasFunction(0x238CC0u)) {
        auto targetFn = runtime->lookupFunction(0x238CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E78u; }
        if (ctx->pc != 0x280E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CC0_0x238cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E78u; }
        if (ctx->pc != 0x280E78u) { return; }
    }
    ctx->pc = 0x280E78u;
label_280e78:
    // 0x280e78: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x280e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_280e7c:
    // 0x280e7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x280e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_280e80:
    // 0x280e80: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x280e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_280e84:
    // 0x280e84: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_280e88:
    if (ctx->pc == 0x280E88u) {
        ctx->pc = 0x280E88u;
            // 0x280e88: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x280E8Cu;
        goto label_280e8c;
    }
    ctx->pc = 0x280E84u;
    {
        const bool branch_taken_0x280e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E84u;
            // 0x280e88: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e84) {
            ctx->pc = 0x280E60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280e60;
        }
    }
    ctx->pc = 0x280E8Cu;
label_280e8c:
    // 0x280e8c: 0x0  nop
    ctx->pc = 0x280e8cu;
    // NOP
label_280e90:
    // 0x280e90: 0x27a20298  addiu       $v0, $sp, 0x298
    ctx->pc = 0x280e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_280e94:
    // 0x280e94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x280e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280e98:
    // 0x280e98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280e9c:
    // 0x280e9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280ea0:
    // 0x280ea0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_280ea4:
    if (ctx->pc == 0x280EA4u) {
        ctx->pc = 0x280EA8u;
        goto label_280ea8;
    }
    ctx->pc = 0x280EA0u;
    {
        const bool branch_taken_0x280ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280ea0) {
            ctx->pc = 0x280ED0u;
            goto label_280ed0;
        }
    }
    ctx->pc = 0x280EA8u;
label_280ea8:
    // 0x280ea8: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x280ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_280eac:
    // 0x280eac: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280eb0:
    // 0x280eb0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280eb4:
    // 0x280eb4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x280eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280eb8:
    // 0x280eb8: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x280eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_280ebc:
    // 0x280ebc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x280ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_280ec0:
    // 0x280ec0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x280ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_280ec4:
    // 0x280ec4: 0xc0a7ab4  jal         func_29EAD0
label_280ec8:
    if (ctx->pc == 0x280EC8u) {
        ctx->pc = 0x280EC8u;
            // 0x280ec8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280ECCu;
        goto label_280ecc;
    }
    ctx->pc = 0x280EC4u;
    SET_GPR_U32(ctx, 31, 0x280ECCu);
    ctx->pc = 0x280EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280EC4u;
            // 0x280ec8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280ECCu; }
        if (ctx->pc != 0x280ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280ECCu; }
        if (ctx->pc != 0x280ECCu) { return; }
    }
    ctx->pc = 0x280ECCu;
label_280ecc:
    // 0x280ecc: 0x0  nop
    ctx->pc = 0x280eccu;
    // NOP
label_280ed0:
    // 0x280ed0: 0x27a203a8  addiu       $v0, $sp, 0x3A8
    ctx->pc = 0x280ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 936));
label_280ed4:
    // 0x280ed4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x280ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280ed8:
    // 0x280ed8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280edc:
    // 0x280edc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280ee0:
    // 0x280ee0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_280ee4:
    if (ctx->pc == 0x280EE4u) {
        ctx->pc = 0x280EE8u;
        goto label_280ee8;
    }
    ctx->pc = 0x280EE0u;
    {
        const bool branch_taken_0x280ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280ee0) {
            ctx->pc = 0x280F10u;
            goto label_280f10;
        }
    }
    ctx->pc = 0x280EE8u;
label_280ee8:
    // 0x280ee8: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x280ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_280eec:
    // 0x280eec: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280ef0:
    // 0x280ef0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280ef4:
    // 0x280ef4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x280ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280ef8:
    // 0x280ef8: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x280ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_280efc:
    // 0x280efc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x280efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_280f00:
    // 0x280f00: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x280f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_280f04:
    // 0x280f04: 0xc0a7ab4  jal         func_29EAD0
label_280f08:
    if (ctx->pc == 0x280F08u) {
        ctx->pc = 0x280F08u;
            // 0x280f08: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280F0Cu;
        goto label_280f0c;
    }
    ctx->pc = 0x280F04u;
    SET_GPR_U32(ctx, 31, 0x280F0Cu);
    ctx->pc = 0x280F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280F04u;
            // 0x280f08: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F0Cu; }
        if (ctx->pc != 0x280F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F0Cu; }
        if (ctx->pc != 0x280F0Cu) { return; }
    }
    ctx->pc = 0x280F0Cu;
label_280f0c:
    // 0x280f0c: 0x0  nop
    ctx->pc = 0x280f0cu;
    // NOP
label_280f10:
    // 0x280f10: 0x27a204b8  addiu       $v0, $sp, 0x4B8
    ctx->pc = 0x280f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
label_280f14:
    // 0x280f14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x280f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280f18:
    // 0x280f18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280f1c:
    // 0x280f1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280f20:
    // 0x280f20: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_280f24:
    if (ctx->pc == 0x280F24u) {
        ctx->pc = 0x280F28u;
        goto label_280f28;
    }
    ctx->pc = 0x280F20u;
    {
        const bool branch_taken_0x280f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280f20) {
            ctx->pc = 0x280F50u;
            goto label_280f50;
        }
    }
    ctx->pc = 0x280F28u;
label_280f28:
    // 0x280f28: 0x8fa204b8  lw          $v0, 0x4B8($sp)
    ctx->pc = 0x280f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
label_280f2c:
    // 0x280f2c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280f30:
    // 0x280f30: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280f34:
    // 0x280f34: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x280f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280f38:
    // 0x280f38: 0x8fa504b0  lw          $a1, 0x4B0($sp)
    ctx->pc = 0x280f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_280f3c:
    // 0x280f3c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x280f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_280f40:
    // 0x280f40: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x280f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_280f44:
    // 0x280f44: 0xc0a7ab4  jal         func_29EAD0
label_280f48:
    if (ctx->pc == 0x280F48u) {
        ctx->pc = 0x280F48u;
            // 0x280f48: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280F4Cu;
        goto label_280f4c;
    }
    ctx->pc = 0x280F44u;
    SET_GPR_U32(ctx, 31, 0x280F4Cu);
    ctx->pc = 0x280F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280F44u;
            // 0x280f48: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F4Cu; }
        if (ctx->pc != 0x280F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F4Cu; }
        if (ctx->pc != 0x280F4Cu) { return; }
    }
    ctx->pc = 0x280F4Cu;
label_280f4c:
    // 0x280f4c: 0x0  nop
    ctx->pc = 0x280f4cu;
    // NOP
label_280f50:
    // 0x280f50: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280f54:
    // 0x280f54: 0x8fa505cc  lw          $a1, 0x5CC($sp)
    ctx->pc = 0x280f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1484)));
label_280f58:
    // 0x280f58: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280f5c:
    // 0x280f5c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x280f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_280f60:
    // 0x280f60: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x280f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_280f64:
    // 0x280f64: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_280f68:
    if (ctx->pc == 0x280F68u) {
        ctx->pc = 0x280F6Cu;
        goto label_280f6c;
    }
    ctx->pc = 0x280F64u;
    {
        const bool branch_taken_0x280f64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x280f64) {
            ctx->pc = 0x280F80u;
            goto label_280f80;
        }
    }
    ctx->pc = 0x280F6Cu;
label_280f6c:
    // 0x280f6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x280f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_280f70:
    // 0x280f70: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x280f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_280f74:
    // 0x280f74: 0x320f809  jalr        $t9
label_280f78:
    if (ctx->pc == 0x280F78u) {
        ctx->pc = 0x280F7Cu;
        goto label_280f7c;
    }
    ctx->pc = 0x280F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x280F7Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x280F7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x280F7Cu; }
            if (ctx->pc != 0x280F7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x280F7Cu;
label_280f7c:
    // 0x280f7c: 0x0  nop
    ctx->pc = 0x280f7cu;
    // NOP
label_280f80:
    // 0x280f80: 0x27a205c8  addiu       $v0, $sp, 0x5C8
    ctx->pc = 0x280f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1480));
label_280f84:
    // 0x280f84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x280f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280f88:
    // 0x280f88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280f8c:
    // 0x280f8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280f90:
    // 0x280f90: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_280f94:
    if (ctx->pc == 0x280F94u) {
        ctx->pc = 0x280F98u;
        goto label_280f98;
    }
    ctx->pc = 0x280F90u;
    {
        const bool branch_taken_0x280f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280f90) {
            ctx->pc = 0x280FC0u;
            goto label_280fc0;
        }
    }
    ctx->pc = 0x280F98u;
label_280f98:
    // 0x280f98: 0x8fa205c8  lw          $v0, 0x5C8($sp)
    ctx->pc = 0x280f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1480)));
label_280f9c:
    // 0x280f9c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280fa0:
    // 0x280fa0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280fa4:
    // 0x280fa4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x280fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280fa8:
    // 0x280fa8: 0x8fa505c0  lw          $a1, 0x5C0($sp)
    ctx->pc = 0x280fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_280fac:
    // 0x280fac: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x280facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_280fb0:
    // 0x280fb0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x280fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_280fb4:
    // 0x280fb4: 0xc0a7ab4  jal         func_29EAD0
label_280fb8:
    if (ctx->pc == 0x280FB8u) {
        ctx->pc = 0x280FB8u;
            // 0x280fb8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x280FBCu;
        goto label_280fbc;
    }
    ctx->pc = 0x280FB4u;
    SET_GPR_U32(ctx, 31, 0x280FBCu);
    ctx->pc = 0x280FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280FB4u;
            // 0x280fb8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280FBCu; }
        if (ctx->pc != 0x280FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280FBCu; }
        if (ctx->pc != 0x280FBCu) { return; }
    }
    ctx->pc = 0x280FBCu;
label_280fbc:
    // 0x280fbc: 0x0  nop
    ctx->pc = 0x280fbcu;
    // NOP
label_280fc0:
    // 0x280fc0: 0x27a205d8  addiu       $v0, $sp, 0x5D8
    ctx->pc = 0x280fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1496));
label_280fc4:
    // 0x280fc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x280fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280fc8:
    // 0x280fc8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_280fcc:
    // 0x280fcc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_280fd0:
    // 0x280fd0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_280fd4:
    if (ctx->pc == 0x280FD4u) {
        ctx->pc = 0x280FD8u;
        goto label_280fd8;
    }
    ctx->pc = 0x280FD0u;
    {
        const bool branch_taken_0x280fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280fd0) {
            ctx->pc = 0x281008u;
            goto label_281008;
        }
    }
    ctx->pc = 0x280FD8u;
label_280fd8:
    // 0x280fd8: 0x8fa205d8  lw          $v0, 0x5D8($sp)
    ctx->pc = 0x280fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1496)));
label_280fdc:
    // 0x280fdc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x280fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_280fe0:
    // 0x280fe0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x280fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_280fe4:
    // 0x280fe4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x280fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_280fe8:
    // 0x280fe8: 0x8fa505d0  lw          $a1, 0x5D0($sp)
    ctx->pc = 0x280fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1488)));
label_280fec:
    // 0x280fec: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x280fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_280ff0:
    // 0x280ff0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x280ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_280ff4:
    // 0x280ff4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x280ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_280ff8:
    // 0x280ff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_280ffc:
    // 0x280ffc: 0xc0a7ab4  jal         func_29EAD0
label_281000:
    if (ctx->pc == 0x281000u) {
        ctx->pc = 0x281000u;
            // 0x281000: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x281004u;
        goto label_281004;
    }
    ctx->pc = 0x280FFCu;
    SET_GPR_U32(ctx, 31, 0x281004u);
    ctx->pc = 0x281000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280FFCu;
            // 0x281000: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281004u; }
        if (ctx->pc != 0x281004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281004u; }
        if (ctx->pc != 0x281004u) { return; }
    }
    ctx->pc = 0x281004u;
label_281004:
    // 0x281004: 0x0  nop
    ctx->pc = 0x281004u;
    // NOP
label_281008:
    // 0x281008: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x281008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28100c:
    // 0x28100c: 0x0  nop
    ctx->pc = 0x28100cu;
    // NOP
label_281010:
    // 0x281010: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x281010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_281014:
    // 0x281014: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x281014u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_281018:
    // 0x281018: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x281018u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28101c:
    // 0x28101c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28101cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_281020:
    // 0x281020: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x281020u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_281024:
    // 0x281024: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x281024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_281028:
    // 0x281028: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x281028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28102c:
    // 0x28102c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28102cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_281030:
    // 0x281030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_281034:
    // 0x281034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_281038:
    // 0x281038: 0x3e00008  jr          $ra
label_28103c:
    if (ctx->pc == 0x28103Cu) {
        ctx->pc = 0x28103Cu;
            // 0x28103c: 0x27bd0910  addiu       $sp, $sp, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2320));
        ctx->pc = 0x281040u;
        goto label_281040;
    }
    ctx->pc = 0x281038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28103Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281038u;
            // 0x28103c: 0x27bd0910  addiu       $sp, $sp, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281040u;
label_281040:
    // 0x281040: 0x3e00008  jr          $ra
label_281044:
    if (ctx->pc == 0x281044u) {
        ctx->pc = 0x281044u;
            // 0x281044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x281048u;
        goto label_281048;
    }
    ctx->pc = 0x281040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281040u;
            // 0x281044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281048u;
label_281048:
    // 0x281048: 0x0  nop
    ctx->pc = 0x281048u;
    // NOP
label_28104c:
    // 0x28104c: 0x0  nop
    ctx->pc = 0x28104cu;
    // NOP
label_281050:
    // 0x281050: 0x3e00008  jr          $ra
label_281054:
    if (ctx->pc == 0x281054u) {
        ctx->pc = 0x281054u;
            // 0x281054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x281058u;
        goto label_281058;
    }
    ctx->pc = 0x281050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281050u;
            // 0x281054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281058u;
label_281058:
    // 0x281058: 0x0  nop
    ctx->pc = 0x281058u;
    // NOP
label_28105c:
    // 0x28105c: 0x0  nop
    ctx->pc = 0x28105cu;
    // NOP
}
