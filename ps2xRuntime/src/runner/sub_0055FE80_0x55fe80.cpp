#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055FE80
// Address: 0x55fe80 - 0x561110
void sub_0055FE80_0x55fe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055FE80_0x55fe80");
#endif

    switch (ctx->pc) {
        case 0x55fe80u: goto label_55fe80;
        case 0x55fe84u: goto label_55fe84;
        case 0x55fe88u: goto label_55fe88;
        case 0x55fe8cu: goto label_55fe8c;
        case 0x55fe90u: goto label_55fe90;
        case 0x55fe94u: goto label_55fe94;
        case 0x55fe98u: goto label_55fe98;
        case 0x55fe9cu: goto label_55fe9c;
        case 0x55fea0u: goto label_55fea0;
        case 0x55fea4u: goto label_55fea4;
        case 0x55fea8u: goto label_55fea8;
        case 0x55feacu: goto label_55feac;
        case 0x55feb0u: goto label_55feb0;
        case 0x55feb4u: goto label_55feb4;
        case 0x55feb8u: goto label_55feb8;
        case 0x55febcu: goto label_55febc;
        case 0x55fec0u: goto label_55fec0;
        case 0x55fec4u: goto label_55fec4;
        case 0x55fec8u: goto label_55fec8;
        case 0x55feccu: goto label_55fecc;
        case 0x55fed0u: goto label_55fed0;
        case 0x55fed4u: goto label_55fed4;
        case 0x55fed8u: goto label_55fed8;
        case 0x55fedcu: goto label_55fedc;
        case 0x55fee0u: goto label_55fee0;
        case 0x55fee4u: goto label_55fee4;
        case 0x55fee8u: goto label_55fee8;
        case 0x55feecu: goto label_55feec;
        case 0x55fef0u: goto label_55fef0;
        case 0x55fef4u: goto label_55fef4;
        case 0x55fef8u: goto label_55fef8;
        case 0x55fefcu: goto label_55fefc;
        case 0x55ff00u: goto label_55ff00;
        case 0x55ff04u: goto label_55ff04;
        case 0x55ff08u: goto label_55ff08;
        case 0x55ff0cu: goto label_55ff0c;
        case 0x55ff10u: goto label_55ff10;
        case 0x55ff14u: goto label_55ff14;
        case 0x55ff18u: goto label_55ff18;
        case 0x55ff1cu: goto label_55ff1c;
        case 0x55ff20u: goto label_55ff20;
        case 0x55ff24u: goto label_55ff24;
        case 0x55ff28u: goto label_55ff28;
        case 0x55ff2cu: goto label_55ff2c;
        case 0x55ff30u: goto label_55ff30;
        case 0x55ff34u: goto label_55ff34;
        case 0x55ff38u: goto label_55ff38;
        case 0x55ff3cu: goto label_55ff3c;
        case 0x55ff40u: goto label_55ff40;
        case 0x55ff44u: goto label_55ff44;
        case 0x55ff48u: goto label_55ff48;
        case 0x55ff4cu: goto label_55ff4c;
        case 0x55ff50u: goto label_55ff50;
        case 0x55ff54u: goto label_55ff54;
        case 0x55ff58u: goto label_55ff58;
        case 0x55ff5cu: goto label_55ff5c;
        case 0x55ff60u: goto label_55ff60;
        case 0x55ff64u: goto label_55ff64;
        case 0x55ff68u: goto label_55ff68;
        case 0x55ff6cu: goto label_55ff6c;
        case 0x55ff70u: goto label_55ff70;
        case 0x55ff74u: goto label_55ff74;
        case 0x55ff78u: goto label_55ff78;
        case 0x55ff7cu: goto label_55ff7c;
        case 0x55ff80u: goto label_55ff80;
        case 0x55ff84u: goto label_55ff84;
        case 0x55ff88u: goto label_55ff88;
        case 0x55ff8cu: goto label_55ff8c;
        case 0x55ff90u: goto label_55ff90;
        case 0x55ff94u: goto label_55ff94;
        case 0x55ff98u: goto label_55ff98;
        case 0x55ff9cu: goto label_55ff9c;
        case 0x55ffa0u: goto label_55ffa0;
        case 0x55ffa4u: goto label_55ffa4;
        case 0x55ffa8u: goto label_55ffa8;
        case 0x55ffacu: goto label_55ffac;
        case 0x55ffb0u: goto label_55ffb0;
        case 0x55ffb4u: goto label_55ffb4;
        case 0x55ffb8u: goto label_55ffb8;
        case 0x55ffbcu: goto label_55ffbc;
        case 0x55ffc0u: goto label_55ffc0;
        case 0x55ffc4u: goto label_55ffc4;
        case 0x55ffc8u: goto label_55ffc8;
        case 0x55ffccu: goto label_55ffcc;
        case 0x55ffd0u: goto label_55ffd0;
        case 0x55ffd4u: goto label_55ffd4;
        case 0x55ffd8u: goto label_55ffd8;
        case 0x55ffdcu: goto label_55ffdc;
        case 0x55ffe0u: goto label_55ffe0;
        case 0x55ffe4u: goto label_55ffe4;
        case 0x55ffe8u: goto label_55ffe8;
        case 0x55ffecu: goto label_55ffec;
        case 0x55fff0u: goto label_55fff0;
        case 0x55fff4u: goto label_55fff4;
        case 0x55fff8u: goto label_55fff8;
        case 0x55fffcu: goto label_55fffc;
        case 0x560000u: goto label_560000;
        case 0x560004u: goto label_560004;
        case 0x560008u: goto label_560008;
        case 0x56000cu: goto label_56000c;
        case 0x560010u: goto label_560010;
        case 0x560014u: goto label_560014;
        case 0x560018u: goto label_560018;
        case 0x56001cu: goto label_56001c;
        case 0x560020u: goto label_560020;
        case 0x560024u: goto label_560024;
        case 0x560028u: goto label_560028;
        case 0x56002cu: goto label_56002c;
        case 0x560030u: goto label_560030;
        case 0x560034u: goto label_560034;
        case 0x560038u: goto label_560038;
        case 0x56003cu: goto label_56003c;
        case 0x560040u: goto label_560040;
        case 0x560044u: goto label_560044;
        case 0x560048u: goto label_560048;
        case 0x56004cu: goto label_56004c;
        case 0x560050u: goto label_560050;
        case 0x560054u: goto label_560054;
        case 0x560058u: goto label_560058;
        case 0x56005cu: goto label_56005c;
        case 0x560060u: goto label_560060;
        case 0x560064u: goto label_560064;
        case 0x560068u: goto label_560068;
        case 0x56006cu: goto label_56006c;
        case 0x560070u: goto label_560070;
        case 0x560074u: goto label_560074;
        case 0x560078u: goto label_560078;
        case 0x56007cu: goto label_56007c;
        case 0x560080u: goto label_560080;
        case 0x560084u: goto label_560084;
        case 0x560088u: goto label_560088;
        case 0x56008cu: goto label_56008c;
        case 0x560090u: goto label_560090;
        case 0x560094u: goto label_560094;
        case 0x560098u: goto label_560098;
        case 0x56009cu: goto label_56009c;
        case 0x5600a0u: goto label_5600a0;
        case 0x5600a4u: goto label_5600a4;
        case 0x5600a8u: goto label_5600a8;
        case 0x5600acu: goto label_5600ac;
        case 0x5600b0u: goto label_5600b0;
        case 0x5600b4u: goto label_5600b4;
        case 0x5600b8u: goto label_5600b8;
        case 0x5600bcu: goto label_5600bc;
        case 0x5600c0u: goto label_5600c0;
        case 0x5600c4u: goto label_5600c4;
        case 0x5600c8u: goto label_5600c8;
        case 0x5600ccu: goto label_5600cc;
        case 0x5600d0u: goto label_5600d0;
        case 0x5600d4u: goto label_5600d4;
        case 0x5600d8u: goto label_5600d8;
        case 0x5600dcu: goto label_5600dc;
        case 0x5600e0u: goto label_5600e0;
        case 0x5600e4u: goto label_5600e4;
        case 0x5600e8u: goto label_5600e8;
        case 0x5600ecu: goto label_5600ec;
        case 0x5600f0u: goto label_5600f0;
        case 0x5600f4u: goto label_5600f4;
        case 0x5600f8u: goto label_5600f8;
        case 0x5600fcu: goto label_5600fc;
        case 0x560100u: goto label_560100;
        case 0x560104u: goto label_560104;
        case 0x560108u: goto label_560108;
        case 0x56010cu: goto label_56010c;
        case 0x560110u: goto label_560110;
        case 0x560114u: goto label_560114;
        case 0x560118u: goto label_560118;
        case 0x56011cu: goto label_56011c;
        case 0x560120u: goto label_560120;
        case 0x560124u: goto label_560124;
        case 0x560128u: goto label_560128;
        case 0x56012cu: goto label_56012c;
        case 0x560130u: goto label_560130;
        case 0x560134u: goto label_560134;
        case 0x560138u: goto label_560138;
        case 0x56013cu: goto label_56013c;
        case 0x560140u: goto label_560140;
        case 0x560144u: goto label_560144;
        case 0x560148u: goto label_560148;
        case 0x56014cu: goto label_56014c;
        case 0x560150u: goto label_560150;
        case 0x560154u: goto label_560154;
        case 0x560158u: goto label_560158;
        case 0x56015cu: goto label_56015c;
        case 0x560160u: goto label_560160;
        case 0x560164u: goto label_560164;
        case 0x560168u: goto label_560168;
        case 0x56016cu: goto label_56016c;
        case 0x560170u: goto label_560170;
        case 0x560174u: goto label_560174;
        case 0x560178u: goto label_560178;
        case 0x56017cu: goto label_56017c;
        case 0x560180u: goto label_560180;
        case 0x560184u: goto label_560184;
        case 0x560188u: goto label_560188;
        case 0x56018cu: goto label_56018c;
        case 0x560190u: goto label_560190;
        case 0x560194u: goto label_560194;
        case 0x560198u: goto label_560198;
        case 0x56019cu: goto label_56019c;
        case 0x5601a0u: goto label_5601a0;
        case 0x5601a4u: goto label_5601a4;
        case 0x5601a8u: goto label_5601a8;
        case 0x5601acu: goto label_5601ac;
        case 0x5601b0u: goto label_5601b0;
        case 0x5601b4u: goto label_5601b4;
        case 0x5601b8u: goto label_5601b8;
        case 0x5601bcu: goto label_5601bc;
        case 0x5601c0u: goto label_5601c0;
        case 0x5601c4u: goto label_5601c4;
        case 0x5601c8u: goto label_5601c8;
        case 0x5601ccu: goto label_5601cc;
        case 0x5601d0u: goto label_5601d0;
        case 0x5601d4u: goto label_5601d4;
        case 0x5601d8u: goto label_5601d8;
        case 0x5601dcu: goto label_5601dc;
        case 0x5601e0u: goto label_5601e0;
        case 0x5601e4u: goto label_5601e4;
        case 0x5601e8u: goto label_5601e8;
        case 0x5601ecu: goto label_5601ec;
        case 0x5601f0u: goto label_5601f0;
        case 0x5601f4u: goto label_5601f4;
        case 0x5601f8u: goto label_5601f8;
        case 0x5601fcu: goto label_5601fc;
        case 0x560200u: goto label_560200;
        case 0x560204u: goto label_560204;
        case 0x560208u: goto label_560208;
        case 0x56020cu: goto label_56020c;
        case 0x560210u: goto label_560210;
        case 0x560214u: goto label_560214;
        case 0x560218u: goto label_560218;
        case 0x56021cu: goto label_56021c;
        case 0x560220u: goto label_560220;
        case 0x560224u: goto label_560224;
        case 0x560228u: goto label_560228;
        case 0x56022cu: goto label_56022c;
        case 0x560230u: goto label_560230;
        case 0x560234u: goto label_560234;
        case 0x560238u: goto label_560238;
        case 0x56023cu: goto label_56023c;
        case 0x560240u: goto label_560240;
        case 0x560244u: goto label_560244;
        case 0x560248u: goto label_560248;
        case 0x56024cu: goto label_56024c;
        case 0x560250u: goto label_560250;
        case 0x560254u: goto label_560254;
        case 0x560258u: goto label_560258;
        case 0x56025cu: goto label_56025c;
        case 0x560260u: goto label_560260;
        case 0x560264u: goto label_560264;
        case 0x560268u: goto label_560268;
        case 0x56026cu: goto label_56026c;
        case 0x560270u: goto label_560270;
        case 0x560274u: goto label_560274;
        case 0x560278u: goto label_560278;
        case 0x56027cu: goto label_56027c;
        case 0x560280u: goto label_560280;
        case 0x560284u: goto label_560284;
        case 0x560288u: goto label_560288;
        case 0x56028cu: goto label_56028c;
        case 0x560290u: goto label_560290;
        case 0x560294u: goto label_560294;
        case 0x560298u: goto label_560298;
        case 0x56029cu: goto label_56029c;
        case 0x5602a0u: goto label_5602a0;
        case 0x5602a4u: goto label_5602a4;
        case 0x5602a8u: goto label_5602a8;
        case 0x5602acu: goto label_5602ac;
        case 0x5602b0u: goto label_5602b0;
        case 0x5602b4u: goto label_5602b4;
        case 0x5602b8u: goto label_5602b8;
        case 0x5602bcu: goto label_5602bc;
        case 0x5602c0u: goto label_5602c0;
        case 0x5602c4u: goto label_5602c4;
        case 0x5602c8u: goto label_5602c8;
        case 0x5602ccu: goto label_5602cc;
        case 0x5602d0u: goto label_5602d0;
        case 0x5602d4u: goto label_5602d4;
        case 0x5602d8u: goto label_5602d8;
        case 0x5602dcu: goto label_5602dc;
        case 0x5602e0u: goto label_5602e0;
        case 0x5602e4u: goto label_5602e4;
        case 0x5602e8u: goto label_5602e8;
        case 0x5602ecu: goto label_5602ec;
        case 0x5602f0u: goto label_5602f0;
        case 0x5602f4u: goto label_5602f4;
        case 0x5602f8u: goto label_5602f8;
        case 0x5602fcu: goto label_5602fc;
        case 0x560300u: goto label_560300;
        case 0x560304u: goto label_560304;
        case 0x560308u: goto label_560308;
        case 0x56030cu: goto label_56030c;
        case 0x560310u: goto label_560310;
        case 0x560314u: goto label_560314;
        case 0x560318u: goto label_560318;
        case 0x56031cu: goto label_56031c;
        case 0x560320u: goto label_560320;
        case 0x560324u: goto label_560324;
        case 0x560328u: goto label_560328;
        case 0x56032cu: goto label_56032c;
        case 0x560330u: goto label_560330;
        case 0x560334u: goto label_560334;
        case 0x560338u: goto label_560338;
        case 0x56033cu: goto label_56033c;
        case 0x560340u: goto label_560340;
        case 0x560344u: goto label_560344;
        case 0x560348u: goto label_560348;
        case 0x56034cu: goto label_56034c;
        case 0x560350u: goto label_560350;
        case 0x560354u: goto label_560354;
        case 0x560358u: goto label_560358;
        case 0x56035cu: goto label_56035c;
        case 0x560360u: goto label_560360;
        case 0x560364u: goto label_560364;
        case 0x560368u: goto label_560368;
        case 0x56036cu: goto label_56036c;
        case 0x560370u: goto label_560370;
        case 0x560374u: goto label_560374;
        case 0x560378u: goto label_560378;
        case 0x56037cu: goto label_56037c;
        case 0x560380u: goto label_560380;
        case 0x560384u: goto label_560384;
        case 0x560388u: goto label_560388;
        case 0x56038cu: goto label_56038c;
        case 0x560390u: goto label_560390;
        case 0x560394u: goto label_560394;
        case 0x560398u: goto label_560398;
        case 0x56039cu: goto label_56039c;
        case 0x5603a0u: goto label_5603a0;
        case 0x5603a4u: goto label_5603a4;
        case 0x5603a8u: goto label_5603a8;
        case 0x5603acu: goto label_5603ac;
        case 0x5603b0u: goto label_5603b0;
        case 0x5603b4u: goto label_5603b4;
        case 0x5603b8u: goto label_5603b8;
        case 0x5603bcu: goto label_5603bc;
        case 0x5603c0u: goto label_5603c0;
        case 0x5603c4u: goto label_5603c4;
        case 0x5603c8u: goto label_5603c8;
        case 0x5603ccu: goto label_5603cc;
        case 0x5603d0u: goto label_5603d0;
        case 0x5603d4u: goto label_5603d4;
        case 0x5603d8u: goto label_5603d8;
        case 0x5603dcu: goto label_5603dc;
        case 0x5603e0u: goto label_5603e0;
        case 0x5603e4u: goto label_5603e4;
        case 0x5603e8u: goto label_5603e8;
        case 0x5603ecu: goto label_5603ec;
        case 0x5603f0u: goto label_5603f0;
        case 0x5603f4u: goto label_5603f4;
        case 0x5603f8u: goto label_5603f8;
        case 0x5603fcu: goto label_5603fc;
        case 0x560400u: goto label_560400;
        case 0x560404u: goto label_560404;
        case 0x560408u: goto label_560408;
        case 0x56040cu: goto label_56040c;
        case 0x560410u: goto label_560410;
        case 0x560414u: goto label_560414;
        case 0x560418u: goto label_560418;
        case 0x56041cu: goto label_56041c;
        case 0x560420u: goto label_560420;
        case 0x560424u: goto label_560424;
        case 0x560428u: goto label_560428;
        case 0x56042cu: goto label_56042c;
        case 0x560430u: goto label_560430;
        case 0x560434u: goto label_560434;
        case 0x560438u: goto label_560438;
        case 0x56043cu: goto label_56043c;
        case 0x560440u: goto label_560440;
        case 0x560444u: goto label_560444;
        case 0x560448u: goto label_560448;
        case 0x56044cu: goto label_56044c;
        case 0x560450u: goto label_560450;
        case 0x560454u: goto label_560454;
        case 0x560458u: goto label_560458;
        case 0x56045cu: goto label_56045c;
        case 0x560460u: goto label_560460;
        case 0x560464u: goto label_560464;
        case 0x560468u: goto label_560468;
        case 0x56046cu: goto label_56046c;
        case 0x560470u: goto label_560470;
        case 0x560474u: goto label_560474;
        case 0x560478u: goto label_560478;
        case 0x56047cu: goto label_56047c;
        case 0x560480u: goto label_560480;
        case 0x560484u: goto label_560484;
        case 0x560488u: goto label_560488;
        case 0x56048cu: goto label_56048c;
        case 0x560490u: goto label_560490;
        case 0x560494u: goto label_560494;
        case 0x560498u: goto label_560498;
        case 0x56049cu: goto label_56049c;
        case 0x5604a0u: goto label_5604a0;
        case 0x5604a4u: goto label_5604a4;
        case 0x5604a8u: goto label_5604a8;
        case 0x5604acu: goto label_5604ac;
        case 0x5604b0u: goto label_5604b0;
        case 0x5604b4u: goto label_5604b4;
        case 0x5604b8u: goto label_5604b8;
        case 0x5604bcu: goto label_5604bc;
        case 0x5604c0u: goto label_5604c0;
        case 0x5604c4u: goto label_5604c4;
        case 0x5604c8u: goto label_5604c8;
        case 0x5604ccu: goto label_5604cc;
        case 0x5604d0u: goto label_5604d0;
        case 0x5604d4u: goto label_5604d4;
        case 0x5604d8u: goto label_5604d8;
        case 0x5604dcu: goto label_5604dc;
        case 0x5604e0u: goto label_5604e0;
        case 0x5604e4u: goto label_5604e4;
        case 0x5604e8u: goto label_5604e8;
        case 0x5604ecu: goto label_5604ec;
        case 0x5604f0u: goto label_5604f0;
        case 0x5604f4u: goto label_5604f4;
        case 0x5604f8u: goto label_5604f8;
        case 0x5604fcu: goto label_5604fc;
        case 0x560500u: goto label_560500;
        case 0x560504u: goto label_560504;
        case 0x560508u: goto label_560508;
        case 0x56050cu: goto label_56050c;
        case 0x560510u: goto label_560510;
        case 0x560514u: goto label_560514;
        case 0x560518u: goto label_560518;
        case 0x56051cu: goto label_56051c;
        case 0x560520u: goto label_560520;
        case 0x560524u: goto label_560524;
        case 0x560528u: goto label_560528;
        case 0x56052cu: goto label_56052c;
        case 0x560530u: goto label_560530;
        case 0x560534u: goto label_560534;
        case 0x560538u: goto label_560538;
        case 0x56053cu: goto label_56053c;
        case 0x560540u: goto label_560540;
        case 0x560544u: goto label_560544;
        case 0x560548u: goto label_560548;
        case 0x56054cu: goto label_56054c;
        case 0x560550u: goto label_560550;
        case 0x560554u: goto label_560554;
        case 0x560558u: goto label_560558;
        case 0x56055cu: goto label_56055c;
        case 0x560560u: goto label_560560;
        case 0x560564u: goto label_560564;
        case 0x560568u: goto label_560568;
        case 0x56056cu: goto label_56056c;
        case 0x560570u: goto label_560570;
        case 0x560574u: goto label_560574;
        case 0x560578u: goto label_560578;
        case 0x56057cu: goto label_56057c;
        case 0x560580u: goto label_560580;
        case 0x560584u: goto label_560584;
        case 0x560588u: goto label_560588;
        case 0x56058cu: goto label_56058c;
        case 0x560590u: goto label_560590;
        case 0x560594u: goto label_560594;
        case 0x560598u: goto label_560598;
        case 0x56059cu: goto label_56059c;
        case 0x5605a0u: goto label_5605a0;
        case 0x5605a4u: goto label_5605a4;
        case 0x5605a8u: goto label_5605a8;
        case 0x5605acu: goto label_5605ac;
        case 0x5605b0u: goto label_5605b0;
        case 0x5605b4u: goto label_5605b4;
        case 0x5605b8u: goto label_5605b8;
        case 0x5605bcu: goto label_5605bc;
        case 0x5605c0u: goto label_5605c0;
        case 0x5605c4u: goto label_5605c4;
        case 0x5605c8u: goto label_5605c8;
        case 0x5605ccu: goto label_5605cc;
        case 0x5605d0u: goto label_5605d0;
        case 0x5605d4u: goto label_5605d4;
        case 0x5605d8u: goto label_5605d8;
        case 0x5605dcu: goto label_5605dc;
        case 0x5605e0u: goto label_5605e0;
        case 0x5605e4u: goto label_5605e4;
        case 0x5605e8u: goto label_5605e8;
        case 0x5605ecu: goto label_5605ec;
        case 0x5605f0u: goto label_5605f0;
        case 0x5605f4u: goto label_5605f4;
        case 0x5605f8u: goto label_5605f8;
        case 0x5605fcu: goto label_5605fc;
        case 0x560600u: goto label_560600;
        case 0x560604u: goto label_560604;
        case 0x560608u: goto label_560608;
        case 0x56060cu: goto label_56060c;
        case 0x560610u: goto label_560610;
        case 0x560614u: goto label_560614;
        case 0x560618u: goto label_560618;
        case 0x56061cu: goto label_56061c;
        case 0x560620u: goto label_560620;
        case 0x560624u: goto label_560624;
        case 0x560628u: goto label_560628;
        case 0x56062cu: goto label_56062c;
        case 0x560630u: goto label_560630;
        case 0x560634u: goto label_560634;
        case 0x560638u: goto label_560638;
        case 0x56063cu: goto label_56063c;
        case 0x560640u: goto label_560640;
        case 0x560644u: goto label_560644;
        case 0x560648u: goto label_560648;
        case 0x56064cu: goto label_56064c;
        case 0x560650u: goto label_560650;
        case 0x560654u: goto label_560654;
        case 0x560658u: goto label_560658;
        case 0x56065cu: goto label_56065c;
        case 0x560660u: goto label_560660;
        case 0x560664u: goto label_560664;
        case 0x560668u: goto label_560668;
        case 0x56066cu: goto label_56066c;
        case 0x560670u: goto label_560670;
        case 0x560674u: goto label_560674;
        case 0x560678u: goto label_560678;
        case 0x56067cu: goto label_56067c;
        case 0x560680u: goto label_560680;
        case 0x560684u: goto label_560684;
        case 0x560688u: goto label_560688;
        case 0x56068cu: goto label_56068c;
        case 0x560690u: goto label_560690;
        case 0x560694u: goto label_560694;
        case 0x560698u: goto label_560698;
        case 0x56069cu: goto label_56069c;
        case 0x5606a0u: goto label_5606a0;
        case 0x5606a4u: goto label_5606a4;
        case 0x5606a8u: goto label_5606a8;
        case 0x5606acu: goto label_5606ac;
        case 0x5606b0u: goto label_5606b0;
        case 0x5606b4u: goto label_5606b4;
        case 0x5606b8u: goto label_5606b8;
        case 0x5606bcu: goto label_5606bc;
        case 0x5606c0u: goto label_5606c0;
        case 0x5606c4u: goto label_5606c4;
        case 0x5606c8u: goto label_5606c8;
        case 0x5606ccu: goto label_5606cc;
        case 0x5606d0u: goto label_5606d0;
        case 0x5606d4u: goto label_5606d4;
        case 0x5606d8u: goto label_5606d8;
        case 0x5606dcu: goto label_5606dc;
        case 0x5606e0u: goto label_5606e0;
        case 0x5606e4u: goto label_5606e4;
        case 0x5606e8u: goto label_5606e8;
        case 0x5606ecu: goto label_5606ec;
        case 0x5606f0u: goto label_5606f0;
        case 0x5606f4u: goto label_5606f4;
        case 0x5606f8u: goto label_5606f8;
        case 0x5606fcu: goto label_5606fc;
        case 0x560700u: goto label_560700;
        case 0x560704u: goto label_560704;
        case 0x560708u: goto label_560708;
        case 0x56070cu: goto label_56070c;
        case 0x560710u: goto label_560710;
        case 0x560714u: goto label_560714;
        case 0x560718u: goto label_560718;
        case 0x56071cu: goto label_56071c;
        case 0x560720u: goto label_560720;
        case 0x560724u: goto label_560724;
        case 0x560728u: goto label_560728;
        case 0x56072cu: goto label_56072c;
        case 0x560730u: goto label_560730;
        case 0x560734u: goto label_560734;
        case 0x560738u: goto label_560738;
        case 0x56073cu: goto label_56073c;
        case 0x560740u: goto label_560740;
        case 0x560744u: goto label_560744;
        case 0x560748u: goto label_560748;
        case 0x56074cu: goto label_56074c;
        case 0x560750u: goto label_560750;
        case 0x560754u: goto label_560754;
        case 0x560758u: goto label_560758;
        case 0x56075cu: goto label_56075c;
        case 0x560760u: goto label_560760;
        case 0x560764u: goto label_560764;
        case 0x560768u: goto label_560768;
        case 0x56076cu: goto label_56076c;
        case 0x560770u: goto label_560770;
        case 0x560774u: goto label_560774;
        case 0x560778u: goto label_560778;
        case 0x56077cu: goto label_56077c;
        case 0x560780u: goto label_560780;
        case 0x560784u: goto label_560784;
        case 0x560788u: goto label_560788;
        case 0x56078cu: goto label_56078c;
        case 0x560790u: goto label_560790;
        case 0x560794u: goto label_560794;
        case 0x560798u: goto label_560798;
        case 0x56079cu: goto label_56079c;
        case 0x5607a0u: goto label_5607a0;
        case 0x5607a4u: goto label_5607a4;
        case 0x5607a8u: goto label_5607a8;
        case 0x5607acu: goto label_5607ac;
        case 0x5607b0u: goto label_5607b0;
        case 0x5607b4u: goto label_5607b4;
        case 0x5607b8u: goto label_5607b8;
        case 0x5607bcu: goto label_5607bc;
        case 0x5607c0u: goto label_5607c0;
        case 0x5607c4u: goto label_5607c4;
        case 0x5607c8u: goto label_5607c8;
        case 0x5607ccu: goto label_5607cc;
        case 0x5607d0u: goto label_5607d0;
        case 0x5607d4u: goto label_5607d4;
        case 0x5607d8u: goto label_5607d8;
        case 0x5607dcu: goto label_5607dc;
        case 0x5607e0u: goto label_5607e0;
        case 0x5607e4u: goto label_5607e4;
        case 0x5607e8u: goto label_5607e8;
        case 0x5607ecu: goto label_5607ec;
        case 0x5607f0u: goto label_5607f0;
        case 0x5607f4u: goto label_5607f4;
        case 0x5607f8u: goto label_5607f8;
        case 0x5607fcu: goto label_5607fc;
        case 0x560800u: goto label_560800;
        case 0x560804u: goto label_560804;
        case 0x560808u: goto label_560808;
        case 0x56080cu: goto label_56080c;
        case 0x560810u: goto label_560810;
        case 0x560814u: goto label_560814;
        case 0x560818u: goto label_560818;
        case 0x56081cu: goto label_56081c;
        case 0x560820u: goto label_560820;
        case 0x560824u: goto label_560824;
        case 0x560828u: goto label_560828;
        case 0x56082cu: goto label_56082c;
        case 0x560830u: goto label_560830;
        case 0x560834u: goto label_560834;
        case 0x560838u: goto label_560838;
        case 0x56083cu: goto label_56083c;
        case 0x560840u: goto label_560840;
        case 0x560844u: goto label_560844;
        case 0x560848u: goto label_560848;
        case 0x56084cu: goto label_56084c;
        case 0x560850u: goto label_560850;
        case 0x560854u: goto label_560854;
        case 0x560858u: goto label_560858;
        case 0x56085cu: goto label_56085c;
        case 0x560860u: goto label_560860;
        case 0x560864u: goto label_560864;
        case 0x560868u: goto label_560868;
        case 0x56086cu: goto label_56086c;
        case 0x560870u: goto label_560870;
        case 0x560874u: goto label_560874;
        case 0x560878u: goto label_560878;
        case 0x56087cu: goto label_56087c;
        case 0x560880u: goto label_560880;
        case 0x560884u: goto label_560884;
        case 0x560888u: goto label_560888;
        case 0x56088cu: goto label_56088c;
        case 0x560890u: goto label_560890;
        case 0x560894u: goto label_560894;
        case 0x560898u: goto label_560898;
        case 0x56089cu: goto label_56089c;
        case 0x5608a0u: goto label_5608a0;
        case 0x5608a4u: goto label_5608a4;
        case 0x5608a8u: goto label_5608a8;
        case 0x5608acu: goto label_5608ac;
        case 0x5608b0u: goto label_5608b0;
        case 0x5608b4u: goto label_5608b4;
        case 0x5608b8u: goto label_5608b8;
        case 0x5608bcu: goto label_5608bc;
        case 0x5608c0u: goto label_5608c0;
        case 0x5608c4u: goto label_5608c4;
        case 0x5608c8u: goto label_5608c8;
        case 0x5608ccu: goto label_5608cc;
        case 0x5608d0u: goto label_5608d0;
        case 0x5608d4u: goto label_5608d4;
        case 0x5608d8u: goto label_5608d8;
        case 0x5608dcu: goto label_5608dc;
        case 0x5608e0u: goto label_5608e0;
        case 0x5608e4u: goto label_5608e4;
        case 0x5608e8u: goto label_5608e8;
        case 0x5608ecu: goto label_5608ec;
        case 0x5608f0u: goto label_5608f0;
        case 0x5608f4u: goto label_5608f4;
        case 0x5608f8u: goto label_5608f8;
        case 0x5608fcu: goto label_5608fc;
        case 0x560900u: goto label_560900;
        case 0x560904u: goto label_560904;
        case 0x560908u: goto label_560908;
        case 0x56090cu: goto label_56090c;
        case 0x560910u: goto label_560910;
        case 0x560914u: goto label_560914;
        case 0x560918u: goto label_560918;
        case 0x56091cu: goto label_56091c;
        case 0x560920u: goto label_560920;
        case 0x560924u: goto label_560924;
        case 0x560928u: goto label_560928;
        case 0x56092cu: goto label_56092c;
        case 0x560930u: goto label_560930;
        case 0x560934u: goto label_560934;
        case 0x560938u: goto label_560938;
        case 0x56093cu: goto label_56093c;
        case 0x560940u: goto label_560940;
        case 0x560944u: goto label_560944;
        case 0x560948u: goto label_560948;
        case 0x56094cu: goto label_56094c;
        case 0x560950u: goto label_560950;
        case 0x560954u: goto label_560954;
        case 0x560958u: goto label_560958;
        case 0x56095cu: goto label_56095c;
        case 0x560960u: goto label_560960;
        case 0x560964u: goto label_560964;
        case 0x560968u: goto label_560968;
        case 0x56096cu: goto label_56096c;
        case 0x560970u: goto label_560970;
        case 0x560974u: goto label_560974;
        case 0x560978u: goto label_560978;
        case 0x56097cu: goto label_56097c;
        case 0x560980u: goto label_560980;
        case 0x560984u: goto label_560984;
        case 0x560988u: goto label_560988;
        case 0x56098cu: goto label_56098c;
        case 0x560990u: goto label_560990;
        case 0x560994u: goto label_560994;
        case 0x560998u: goto label_560998;
        case 0x56099cu: goto label_56099c;
        case 0x5609a0u: goto label_5609a0;
        case 0x5609a4u: goto label_5609a4;
        case 0x5609a8u: goto label_5609a8;
        case 0x5609acu: goto label_5609ac;
        case 0x5609b0u: goto label_5609b0;
        case 0x5609b4u: goto label_5609b4;
        case 0x5609b8u: goto label_5609b8;
        case 0x5609bcu: goto label_5609bc;
        case 0x5609c0u: goto label_5609c0;
        case 0x5609c4u: goto label_5609c4;
        case 0x5609c8u: goto label_5609c8;
        case 0x5609ccu: goto label_5609cc;
        case 0x5609d0u: goto label_5609d0;
        case 0x5609d4u: goto label_5609d4;
        case 0x5609d8u: goto label_5609d8;
        case 0x5609dcu: goto label_5609dc;
        case 0x5609e0u: goto label_5609e0;
        case 0x5609e4u: goto label_5609e4;
        case 0x5609e8u: goto label_5609e8;
        case 0x5609ecu: goto label_5609ec;
        case 0x5609f0u: goto label_5609f0;
        case 0x5609f4u: goto label_5609f4;
        case 0x5609f8u: goto label_5609f8;
        case 0x5609fcu: goto label_5609fc;
        case 0x560a00u: goto label_560a00;
        case 0x560a04u: goto label_560a04;
        case 0x560a08u: goto label_560a08;
        case 0x560a0cu: goto label_560a0c;
        case 0x560a10u: goto label_560a10;
        case 0x560a14u: goto label_560a14;
        case 0x560a18u: goto label_560a18;
        case 0x560a1cu: goto label_560a1c;
        case 0x560a20u: goto label_560a20;
        case 0x560a24u: goto label_560a24;
        case 0x560a28u: goto label_560a28;
        case 0x560a2cu: goto label_560a2c;
        case 0x560a30u: goto label_560a30;
        case 0x560a34u: goto label_560a34;
        case 0x560a38u: goto label_560a38;
        case 0x560a3cu: goto label_560a3c;
        case 0x560a40u: goto label_560a40;
        case 0x560a44u: goto label_560a44;
        case 0x560a48u: goto label_560a48;
        case 0x560a4cu: goto label_560a4c;
        case 0x560a50u: goto label_560a50;
        case 0x560a54u: goto label_560a54;
        case 0x560a58u: goto label_560a58;
        case 0x560a5cu: goto label_560a5c;
        case 0x560a60u: goto label_560a60;
        case 0x560a64u: goto label_560a64;
        case 0x560a68u: goto label_560a68;
        case 0x560a6cu: goto label_560a6c;
        case 0x560a70u: goto label_560a70;
        case 0x560a74u: goto label_560a74;
        case 0x560a78u: goto label_560a78;
        case 0x560a7cu: goto label_560a7c;
        case 0x560a80u: goto label_560a80;
        case 0x560a84u: goto label_560a84;
        case 0x560a88u: goto label_560a88;
        case 0x560a8cu: goto label_560a8c;
        case 0x560a90u: goto label_560a90;
        case 0x560a94u: goto label_560a94;
        case 0x560a98u: goto label_560a98;
        case 0x560a9cu: goto label_560a9c;
        case 0x560aa0u: goto label_560aa0;
        case 0x560aa4u: goto label_560aa4;
        case 0x560aa8u: goto label_560aa8;
        case 0x560aacu: goto label_560aac;
        case 0x560ab0u: goto label_560ab0;
        case 0x560ab4u: goto label_560ab4;
        case 0x560ab8u: goto label_560ab8;
        case 0x560abcu: goto label_560abc;
        case 0x560ac0u: goto label_560ac0;
        case 0x560ac4u: goto label_560ac4;
        case 0x560ac8u: goto label_560ac8;
        case 0x560accu: goto label_560acc;
        case 0x560ad0u: goto label_560ad0;
        case 0x560ad4u: goto label_560ad4;
        case 0x560ad8u: goto label_560ad8;
        case 0x560adcu: goto label_560adc;
        case 0x560ae0u: goto label_560ae0;
        case 0x560ae4u: goto label_560ae4;
        case 0x560ae8u: goto label_560ae8;
        case 0x560aecu: goto label_560aec;
        case 0x560af0u: goto label_560af0;
        case 0x560af4u: goto label_560af4;
        case 0x560af8u: goto label_560af8;
        case 0x560afcu: goto label_560afc;
        case 0x560b00u: goto label_560b00;
        case 0x560b04u: goto label_560b04;
        case 0x560b08u: goto label_560b08;
        case 0x560b0cu: goto label_560b0c;
        case 0x560b10u: goto label_560b10;
        case 0x560b14u: goto label_560b14;
        case 0x560b18u: goto label_560b18;
        case 0x560b1cu: goto label_560b1c;
        case 0x560b20u: goto label_560b20;
        case 0x560b24u: goto label_560b24;
        case 0x560b28u: goto label_560b28;
        case 0x560b2cu: goto label_560b2c;
        case 0x560b30u: goto label_560b30;
        case 0x560b34u: goto label_560b34;
        case 0x560b38u: goto label_560b38;
        case 0x560b3cu: goto label_560b3c;
        case 0x560b40u: goto label_560b40;
        case 0x560b44u: goto label_560b44;
        case 0x560b48u: goto label_560b48;
        case 0x560b4cu: goto label_560b4c;
        case 0x560b50u: goto label_560b50;
        case 0x560b54u: goto label_560b54;
        case 0x560b58u: goto label_560b58;
        case 0x560b5cu: goto label_560b5c;
        case 0x560b60u: goto label_560b60;
        case 0x560b64u: goto label_560b64;
        case 0x560b68u: goto label_560b68;
        case 0x560b6cu: goto label_560b6c;
        case 0x560b70u: goto label_560b70;
        case 0x560b74u: goto label_560b74;
        case 0x560b78u: goto label_560b78;
        case 0x560b7cu: goto label_560b7c;
        case 0x560b80u: goto label_560b80;
        case 0x560b84u: goto label_560b84;
        case 0x560b88u: goto label_560b88;
        case 0x560b8cu: goto label_560b8c;
        case 0x560b90u: goto label_560b90;
        case 0x560b94u: goto label_560b94;
        case 0x560b98u: goto label_560b98;
        case 0x560b9cu: goto label_560b9c;
        case 0x560ba0u: goto label_560ba0;
        case 0x560ba4u: goto label_560ba4;
        case 0x560ba8u: goto label_560ba8;
        case 0x560bacu: goto label_560bac;
        case 0x560bb0u: goto label_560bb0;
        case 0x560bb4u: goto label_560bb4;
        case 0x560bb8u: goto label_560bb8;
        case 0x560bbcu: goto label_560bbc;
        case 0x560bc0u: goto label_560bc0;
        case 0x560bc4u: goto label_560bc4;
        case 0x560bc8u: goto label_560bc8;
        case 0x560bccu: goto label_560bcc;
        case 0x560bd0u: goto label_560bd0;
        case 0x560bd4u: goto label_560bd4;
        case 0x560bd8u: goto label_560bd8;
        case 0x560bdcu: goto label_560bdc;
        case 0x560be0u: goto label_560be0;
        case 0x560be4u: goto label_560be4;
        case 0x560be8u: goto label_560be8;
        case 0x560becu: goto label_560bec;
        case 0x560bf0u: goto label_560bf0;
        case 0x560bf4u: goto label_560bf4;
        case 0x560bf8u: goto label_560bf8;
        case 0x560bfcu: goto label_560bfc;
        case 0x560c00u: goto label_560c00;
        case 0x560c04u: goto label_560c04;
        case 0x560c08u: goto label_560c08;
        case 0x560c0cu: goto label_560c0c;
        case 0x560c10u: goto label_560c10;
        case 0x560c14u: goto label_560c14;
        case 0x560c18u: goto label_560c18;
        case 0x560c1cu: goto label_560c1c;
        case 0x560c20u: goto label_560c20;
        case 0x560c24u: goto label_560c24;
        case 0x560c28u: goto label_560c28;
        case 0x560c2cu: goto label_560c2c;
        case 0x560c30u: goto label_560c30;
        case 0x560c34u: goto label_560c34;
        case 0x560c38u: goto label_560c38;
        case 0x560c3cu: goto label_560c3c;
        case 0x560c40u: goto label_560c40;
        case 0x560c44u: goto label_560c44;
        case 0x560c48u: goto label_560c48;
        case 0x560c4cu: goto label_560c4c;
        case 0x560c50u: goto label_560c50;
        case 0x560c54u: goto label_560c54;
        case 0x560c58u: goto label_560c58;
        case 0x560c5cu: goto label_560c5c;
        case 0x560c60u: goto label_560c60;
        case 0x560c64u: goto label_560c64;
        case 0x560c68u: goto label_560c68;
        case 0x560c6cu: goto label_560c6c;
        case 0x560c70u: goto label_560c70;
        case 0x560c74u: goto label_560c74;
        case 0x560c78u: goto label_560c78;
        case 0x560c7cu: goto label_560c7c;
        case 0x560c80u: goto label_560c80;
        case 0x560c84u: goto label_560c84;
        case 0x560c88u: goto label_560c88;
        case 0x560c8cu: goto label_560c8c;
        case 0x560c90u: goto label_560c90;
        case 0x560c94u: goto label_560c94;
        case 0x560c98u: goto label_560c98;
        case 0x560c9cu: goto label_560c9c;
        case 0x560ca0u: goto label_560ca0;
        case 0x560ca4u: goto label_560ca4;
        case 0x560ca8u: goto label_560ca8;
        case 0x560cacu: goto label_560cac;
        case 0x560cb0u: goto label_560cb0;
        case 0x560cb4u: goto label_560cb4;
        case 0x560cb8u: goto label_560cb8;
        case 0x560cbcu: goto label_560cbc;
        case 0x560cc0u: goto label_560cc0;
        case 0x560cc4u: goto label_560cc4;
        case 0x560cc8u: goto label_560cc8;
        case 0x560cccu: goto label_560ccc;
        case 0x560cd0u: goto label_560cd0;
        case 0x560cd4u: goto label_560cd4;
        case 0x560cd8u: goto label_560cd8;
        case 0x560cdcu: goto label_560cdc;
        case 0x560ce0u: goto label_560ce0;
        case 0x560ce4u: goto label_560ce4;
        case 0x560ce8u: goto label_560ce8;
        case 0x560cecu: goto label_560cec;
        case 0x560cf0u: goto label_560cf0;
        case 0x560cf4u: goto label_560cf4;
        case 0x560cf8u: goto label_560cf8;
        case 0x560cfcu: goto label_560cfc;
        case 0x560d00u: goto label_560d00;
        case 0x560d04u: goto label_560d04;
        case 0x560d08u: goto label_560d08;
        case 0x560d0cu: goto label_560d0c;
        case 0x560d10u: goto label_560d10;
        case 0x560d14u: goto label_560d14;
        case 0x560d18u: goto label_560d18;
        case 0x560d1cu: goto label_560d1c;
        case 0x560d20u: goto label_560d20;
        case 0x560d24u: goto label_560d24;
        case 0x560d28u: goto label_560d28;
        case 0x560d2cu: goto label_560d2c;
        case 0x560d30u: goto label_560d30;
        case 0x560d34u: goto label_560d34;
        case 0x560d38u: goto label_560d38;
        case 0x560d3cu: goto label_560d3c;
        case 0x560d40u: goto label_560d40;
        case 0x560d44u: goto label_560d44;
        case 0x560d48u: goto label_560d48;
        case 0x560d4cu: goto label_560d4c;
        case 0x560d50u: goto label_560d50;
        case 0x560d54u: goto label_560d54;
        case 0x560d58u: goto label_560d58;
        case 0x560d5cu: goto label_560d5c;
        case 0x560d60u: goto label_560d60;
        case 0x560d64u: goto label_560d64;
        case 0x560d68u: goto label_560d68;
        case 0x560d6cu: goto label_560d6c;
        case 0x560d70u: goto label_560d70;
        case 0x560d74u: goto label_560d74;
        case 0x560d78u: goto label_560d78;
        case 0x560d7cu: goto label_560d7c;
        case 0x560d80u: goto label_560d80;
        case 0x560d84u: goto label_560d84;
        case 0x560d88u: goto label_560d88;
        case 0x560d8cu: goto label_560d8c;
        case 0x560d90u: goto label_560d90;
        case 0x560d94u: goto label_560d94;
        case 0x560d98u: goto label_560d98;
        case 0x560d9cu: goto label_560d9c;
        case 0x560da0u: goto label_560da0;
        case 0x560da4u: goto label_560da4;
        case 0x560da8u: goto label_560da8;
        case 0x560dacu: goto label_560dac;
        case 0x560db0u: goto label_560db0;
        case 0x560db4u: goto label_560db4;
        case 0x560db8u: goto label_560db8;
        case 0x560dbcu: goto label_560dbc;
        case 0x560dc0u: goto label_560dc0;
        case 0x560dc4u: goto label_560dc4;
        case 0x560dc8u: goto label_560dc8;
        case 0x560dccu: goto label_560dcc;
        case 0x560dd0u: goto label_560dd0;
        case 0x560dd4u: goto label_560dd4;
        case 0x560dd8u: goto label_560dd8;
        case 0x560ddcu: goto label_560ddc;
        case 0x560de0u: goto label_560de0;
        case 0x560de4u: goto label_560de4;
        case 0x560de8u: goto label_560de8;
        case 0x560decu: goto label_560dec;
        case 0x560df0u: goto label_560df0;
        case 0x560df4u: goto label_560df4;
        case 0x560df8u: goto label_560df8;
        case 0x560dfcu: goto label_560dfc;
        case 0x560e00u: goto label_560e00;
        case 0x560e04u: goto label_560e04;
        case 0x560e08u: goto label_560e08;
        case 0x560e0cu: goto label_560e0c;
        case 0x560e10u: goto label_560e10;
        case 0x560e14u: goto label_560e14;
        case 0x560e18u: goto label_560e18;
        case 0x560e1cu: goto label_560e1c;
        case 0x560e20u: goto label_560e20;
        case 0x560e24u: goto label_560e24;
        case 0x560e28u: goto label_560e28;
        case 0x560e2cu: goto label_560e2c;
        case 0x560e30u: goto label_560e30;
        case 0x560e34u: goto label_560e34;
        case 0x560e38u: goto label_560e38;
        case 0x560e3cu: goto label_560e3c;
        case 0x560e40u: goto label_560e40;
        case 0x560e44u: goto label_560e44;
        case 0x560e48u: goto label_560e48;
        case 0x560e4cu: goto label_560e4c;
        case 0x560e50u: goto label_560e50;
        case 0x560e54u: goto label_560e54;
        case 0x560e58u: goto label_560e58;
        case 0x560e5cu: goto label_560e5c;
        case 0x560e60u: goto label_560e60;
        case 0x560e64u: goto label_560e64;
        case 0x560e68u: goto label_560e68;
        case 0x560e6cu: goto label_560e6c;
        case 0x560e70u: goto label_560e70;
        case 0x560e74u: goto label_560e74;
        case 0x560e78u: goto label_560e78;
        case 0x560e7cu: goto label_560e7c;
        case 0x560e80u: goto label_560e80;
        case 0x560e84u: goto label_560e84;
        case 0x560e88u: goto label_560e88;
        case 0x560e8cu: goto label_560e8c;
        case 0x560e90u: goto label_560e90;
        case 0x560e94u: goto label_560e94;
        case 0x560e98u: goto label_560e98;
        case 0x560e9cu: goto label_560e9c;
        case 0x560ea0u: goto label_560ea0;
        case 0x560ea4u: goto label_560ea4;
        case 0x560ea8u: goto label_560ea8;
        case 0x560eacu: goto label_560eac;
        case 0x560eb0u: goto label_560eb0;
        case 0x560eb4u: goto label_560eb4;
        case 0x560eb8u: goto label_560eb8;
        case 0x560ebcu: goto label_560ebc;
        case 0x560ec0u: goto label_560ec0;
        case 0x560ec4u: goto label_560ec4;
        case 0x560ec8u: goto label_560ec8;
        case 0x560eccu: goto label_560ecc;
        case 0x560ed0u: goto label_560ed0;
        case 0x560ed4u: goto label_560ed4;
        case 0x560ed8u: goto label_560ed8;
        case 0x560edcu: goto label_560edc;
        case 0x560ee0u: goto label_560ee0;
        case 0x560ee4u: goto label_560ee4;
        case 0x560ee8u: goto label_560ee8;
        case 0x560eecu: goto label_560eec;
        case 0x560ef0u: goto label_560ef0;
        case 0x560ef4u: goto label_560ef4;
        case 0x560ef8u: goto label_560ef8;
        case 0x560efcu: goto label_560efc;
        case 0x560f00u: goto label_560f00;
        case 0x560f04u: goto label_560f04;
        case 0x560f08u: goto label_560f08;
        case 0x560f0cu: goto label_560f0c;
        case 0x560f10u: goto label_560f10;
        case 0x560f14u: goto label_560f14;
        case 0x560f18u: goto label_560f18;
        case 0x560f1cu: goto label_560f1c;
        case 0x560f20u: goto label_560f20;
        case 0x560f24u: goto label_560f24;
        case 0x560f28u: goto label_560f28;
        case 0x560f2cu: goto label_560f2c;
        case 0x560f30u: goto label_560f30;
        case 0x560f34u: goto label_560f34;
        case 0x560f38u: goto label_560f38;
        case 0x560f3cu: goto label_560f3c;
        case 0x560f40u: goto label_560f40;
        case 0x560f44u: goto label_560f44;
        case 0x560f48u: goto label_560f48;
        case 0x560f4cu: goto label_560f4c;
        case 0x560f50u: goto label_560f50;
        case 0x560f54u: goto label_560f54;
        case 0x560f58u: goto label_560f58;
        case 0x560f5cu: goto label_560f5c;
        case 0x560f60u: goto label_560f60;
        case 0x560f64u: goto label_560f64;
        case 0x560f68u: goto label_560f68;
        case 0x560f6cu: goto label_560f6c;
        case 0x560f70u: goto label_560f70;
        case 0x560f74u: goto label_560f74;
        case 0x560f78u: goto label_560f78;
        case 0x560f7cu: goto label_560f7c;
        case 0x560f80u: goto label_560f80;
        case 0x560f84u: goto label_560f84;
        case 0x560f88u: goto label_560f88;
        case 0x560f8cu: goto label_560f8c;
        case 0x560f90u: goto label_560f90;
        case 0x560f94u: goto label_560f94;
        case 0x560f98u: goto label_560f98;
        case 0x560f9cu: goto label_560f9c;
        case 0x560fa0u: goto label_560fa0;
        case 0x560fa4u: goto label_560fa4;
        case 0x560fa8u: goto label_560fa8;
        case 0x560facu: goto label_560fac;
        case 0x560fb0u: goto label_560fb0;
        case 0x560fb4u: goto label_560fb4;
        case 0x560fb8u: goto label_560fb8;
        case 0x560fbcu: goto label_560fbc;
        case 0x560fc0u: goto label_560fc0;
        case 0x560fc4u: goto label_560fc4;
        case 0x560fc8u: goto label_560fc8;
        case 0x560fccu: goto label_560fcc;
        case 0x560fd0u: goto label_560fd0;
        case 0x560fd4u: goto label_560fd4;
        case 0x560fd8u: goto label_560fd8;
        case 0x560fdcu: goto label_560fdc;
        case 0x560fe0u: goto label_560fe0;
        case 0x560fe4u: goto label_560fe4;
        case 0x560fe8u: goto label_560fe8;
        case 0x560fecu: goto label_560fec;
        case 0x560ff0u: goto label_560ff0;
        case 0x560ff4u: goto label_560ff4;
        case 0x560ff8u: goto label_560ff8;
        case 0x560ffcu: goto label_560ffc;
        case 0x561000u: goto label_561000;
        case 0x561004u: goto label_561004;
        case 0x561008u: goto label_561008;
        case 0x56100cu: goto label_56100c;
        case 0x561010u: goto label_561010;
        case 0x561014u: goto label_561014;
        case 0x561018u: goto label_561018;
        case 0x56101cu: goto label_56101c;
        case 0x561020u: goto label_561020;
        case 0x561024u: goto label_561024;
        case 0x561028u: goto label_561028;
        case 0x56102cu: goto label_56102c;
        case 0x561030u: goto label_561030;
        case 0x561034u: goto label_561034;
        case 0x561038u: goto label_561038;
        case 0x56103cu: goto label_56103c;
        case 0x561040u: goto label_561040;
        case 0x561044u: goto label_561044;
        case 0x561048u: goto label_561048;
        case 0x56104cu: goto label_56104c;
        case 0x561050u: goto label_561050;
        case 0x561054u: goto label_561054;
        case 0x561058u: goto label_561058;
        case 0x56105cu: goto label_56105c;
        case 0x561060u: goto label_561060;
        case 0x561064u: goto label_561064;
        case 0x561068u: goto label_561068;
        case 0x56106cu: goto label_56106c;
        case 0x561070u: goto label_561070;
        case 0x561074u: goto label_561074;
        case 0x561078u: goto label_561078;
        case 0x56107cu: goto label_56107c;
        case 0x561080u: goto label_561080;
        case 0x561084u: goto label_561084;
        case 0x561088u: goto label_561088;
        case 0x56108cu: goto label_56108c;
        case 0x561090u: goto label_561090;
        case 0x561094u: goto label_561094;
        case 0x561098u: goto label_561098;
        case 0x56109cu: goto label_56109c;
        case 0x5610a0u: goto label_5610a0;
        case 0x5610a4u: goto label_5610a4;
        case 0x5610a8u: goto label_5610a8;
        case 0x5610acu: goto label_5610ac;
        case 0x5610b0u: goto label_5610b0;
        case 0x5610b4u: goto label_5610b4;
        case 0x5610b8u: goto label_5610b8;
        case 0x5610bcu: goto label_5610bc;
        case 0x5610c0u: goto label_5610c0;
        case 0x5610c4u: goto label_5610c4;
        case 0x5610c8u: goto label_5610c8;
        case 0x5610ccu: goto label_5610cc;
        case 0x5610d0u: goto label_5610d0;
        case 0x5610d4u: goto label_5610d4;
        case 0x5610d8u: goto label_5610d8;
        case 0x5610dcu: goto label_5610dc;
        case 0x5610e0u: goto label_5610e0;
        case 0x5610e4u: goto label_5610e4;
        case 0x5610e8u: goto label_5610e8;
        case 0x5610ecu: goto label_5610ec;
        case 0x5610f0u: goto label_5610f0;
        case 0x5610f4u: goto label_5610f4;
        case 0x5610f8u: goto label_5610f8;
        case 0x5610fcu: goto label_5610fc;
        case 0x561100u: goto label_561100;
        case 0x561104u: goto label_561104;
        case 0x561108u: goto label_561108;
        case 0x56110cu: goto label_56110c;
        default: break;
    }

    ctx->pc = 0x55fe80u;

label_55fe80:
    // 0x55fe80: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x55fe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_55fe84:
    // 0x55fe84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x55fe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_55fe88:
    // 0x55fe88: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x55fe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_55fe8c:
    // 0x55fe8c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x55fe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_55fe90:
    // 0x55fe90: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x55fe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_55fe94:
    // 0x55fe94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x55fe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_55fe98:
    // 0x55fe98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x55fe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_55fe9c:
    // 0x55fe9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x55fe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_55fea0:
    // 0x55fea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55fea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_55fea4:
    // 0x55fea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55fea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55fea8:
    // 0x55fea8: 0x90820180  lbu         $v0, 0x180($a0)
    ctx->pc = 0x55fea8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 384)));
label_55feac:
    // 0x55feac: 0x144000d8  bnez        $v0, . + 4 + (0xD8 << 2)
label_55feb0:
    if (ctx->pc == 0x55FEB0u) {
        ctx->pc = 0x55FEB0u;
            // 0x55feb0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55FEB4u;
        goto label_55feb4;
    }
    ctx->pc = 0x55FEACu;
    {
        const bool branch_taken_0x55feac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x55FEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FEACu;
            // 0x55feb0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55feac) {
            ctx->pc = 0x560210u;
            goto label_560210;
        }
    }
    ctx->pc = 0x55FEB4u;
label_55feb4:
    // 0x55feb4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_55feb8:
    // 0x55feb8: 0x26a600e0  addiu       $a2, $s5, 0xE0
    ctx->pc = 0x55feb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
label_55febc:
    // 0x55febc: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x55febcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_55fec0:
    // 0x55fec0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x55fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_55fec4:
    // 0x55fec4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x55fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_55fec8:
    // 0x55fec8: 0x24570130  addiu       $s7, $v0, 0x130
    ctx->pc = 0x55fec8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_55fecc:
    // 0x55fecc: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x55feccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_55fed0:
    // 0x55fed0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x55fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_55fed4:
    // 0x55fed4: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x55fed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_55fed8:
    // 0x55fed8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x55fed8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_55fedc:
    // 0x55fedc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x55fedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_55fee0:
    // 0x55fee0: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x55fee0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_55fee4:
    // 0x55fee4: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_55fee8:
    if (ctx->pc == 0x55FEE8u) {
        ctx->pc = 0x55FEE8u;
            // 0x55fee8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x55FEECu;
        goto label_55feec;
    }
    ctx->pc = 0x55FEE4u;
    {
        const bool branch_taken_0x55fee4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x55FEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FEE4u;
            // 0x55fee8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55fee4) {
            ctx->pc = 0x55FECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55fecc;
        }
    }
    ctx->pc = 0x55FEECu;
label_55feec:
    // 0x55feec: 0x96a200f0  lhu         $v0, 0xF0($s5)
    ctx->pc = 0x55feecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 240)));
label_55fef0:
    // 0x55fef0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x55fef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_55fef4:
    // 0x55fef4: 0xa7a20140  sh          $v0, 0x140($sp)
    ctx->pc = 0x55fef4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 320), (uint16_t)GPR_U32(ctx, 2));
label_55fef8:
    // 0x55fef8: 0x96a200f2  lhu         $v0, 0xF2($s5)
    ctx->pc = 0x55fef8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 242)));
label_55fefc:
    // 0x55fefc: 0xa7a20142  sh          $v0, 0x142($sp)
    ctx->pc = 0x55fefcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 322), (uint16_t)GPR_U32(ctx, 2));
label_55ff00:
    // 0x55ff00: 0x96a300f4  lhu         $v1, 0xF4($s5)
    ctx->pc = 0x55ff00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 244)));
label_55ff04:
    // 0x55ff04: 0x97a20142  lhu         $v0, 0x142($sp)
    ctx->pc = 0x55ff04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 322)));
label_55ff08:
    // 0x55ff08: 0xa7a30144  sh          $v1, 0x144($sp)
    ctx->pc = 0x55ff08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 324), (uint16_t)GPR_U32(ctx, 3));
label_55ff0c:
    // 0x55ff0c: 0xc6a000f8  lwc1        $f0, 0xF8($s5)
    ctx->pc = 0x55ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55ff10:
    // 0x55ff10: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x55ff10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_55ff14:
    // 0x55ff14: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x55ff14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_55ff18:
    // 0x55ff18: 0xc6a000fc  lwc1        $f0, 0xFC($s5)
    ctx->pc = 0x55ff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55ff1c:
    // 0x55ff1c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x55ff1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_55ff20:
    // 0x55ff20: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x55ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_55ff24:
    // 0x55ff24: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x55ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_55ff28:
    // 0x55ff28: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x55ff28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_55ff2c:
    // 0x55ff2c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x55ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_55ff30:
    // 0x55ff30: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x55ff30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55ff34:
    // 0x55ff34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x55ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_55ff38:
    // 0x55ff38: 0xc04cc04  jal         func_133010
label_55ff3c:
    if (ctx->pc == 0x55FF3Cu) {
        ctx->pc = 0x55FF3Cu;
            // 0x55ff3c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x55FF40u;
        goto label_55ff40;
    }
    ctx->pc = 0x55FF38u;
    SET_GPR_U32(ctx, 31, 0x55FF40u);
    ctx->pc = 0x55FF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FF38u;
            // 0x55ff3c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FF40u; }
        if (ctx->pc != 0x55FF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FF40u; }
        if (ctx->pc != 0x55FF40u) { return; }
    }
    ctx->pc = 0x55FF40u;
label_55ff40:
    // 0x55ff40: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x55ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_55ff44:
    // 0x55ff44: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x55ff44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_55ff48:
    // 0x55ff48: 0xc04cc90  jal         func_133240
label_55ff4c:
    if (ctx->pc == 0x55FF4Cu) {
        ctx->pc = 0x55FF4Cu;
            // 0x55ff4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55FF50u;
        goto label_55ff50;
    }
    ctx->pc = 0x55FF48u;
    SET_GPR_U32(ctx, 31, 0x55FF50u);
    ctx->pc = 0x55FF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FF48u;
            // 0x55ff4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FF50u; }
        if (ctx->pc != 0x55FF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FF50u; }
        if (ctx->pc != 0x55FF50u) { return; }
    }
    ctx->pc = 0x55FF50u;
label_55ff50:
    // 0x55ff50: 0xc04cc2c  jal         func_1330B0
label_55ff54:
    if (ctx->pc == 0x55FF54u) {
        ctx->pc = 0x55FF54u;
            // 0x55ff54: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x55FF58u;
        goto label_55ff58;
    }
    ctx->pc = 0x55FF50u;
    SET_GPR_U32(ctx, 31, 0x55FF58u);
    ctx->pc = 0x55FF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FF50u;
            // 0x55ff54: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FF58u; }
        if (ctx->pc != 0x55FF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FF58u; }
        if (ctx->pc != 0x55FF58u) { return; }
    }
    ctx->pc = 0x55FF58u;
label_55ff58:
    // 0x55ff58: 0xc6a1017c  lwc1        $f1, 0x17C($s5)
    ctx->pc = 0x55ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55ff5c:
    // 0x55ff5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x55ff5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55ff60:
    // 0x55ff60: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_55ff64:
    if (ctx->pc == 0x55FF64u) {
        ctx->pc = 0x55FF64u;
            // 0x55ff64: 0x96160004  lhu         $s6, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x55FF68u;
        goto label_55ff68;
    }
    ctx->pc = 0x55FF60u;
    {
        const bool branch_taken_0x55ff60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x55ff60) {
            ctx->pc = 0x55FF64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55FF60u;
            // 0x55ff64: 0x96160004  lhu         $s6, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55FF70u;
            goto label_55ff70;
        }
    }
    ctx->pc = 0x55FF68u;
label_55ff68:
    // 0x55ff68: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_55ff6c:
    if (ctx->pc == 0x55FF6Cu) {
        ctx->pc = 0x55FF6Cu;
            // 0x55ff6c: 0xe6a0017c  swc1        $f0, 0x17C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 380), bits); }
        ctx->pc = 0x55FF70u;
        goto label_55ff70;
    }
    ctx->pc = 0x55FF68u;
    {
        const bool branch_taken_0x55ff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55FF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FF68u;
            // 0x55ff6c: 0xe6a0017c  swc1        $f0, 0x17C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 380), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55ff68) {
            ctx->pc = 0x560330u;
            goto label_560330;
        }
    }
    ctx->pc = 0x55FF70u;
label_55ff70:
    // 0x55ff70: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x55ff70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55ff74:
    // 0x55ff74: 0x1680001e  bnez        $s4, . + 4 + (0x1E << 2)
label_55ff78:
    if (ctx->pc == 0x55FF78u) {
        ctx->pc = 0x55FF7Cu;
        goto label_55ff7c;
    }
    ctx->pc = 0x55FF74u;
    {
        const bool branch_taken_0x55ff74 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x55ff74) {
            ctx->pc = 0x55FFF0u;
            goto label_55fff0;
        }
    }
    ctx->pc = 0x55FF7Cu;
label_55ff7c:
    // 0x55ff7c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x55ff7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_55ff80:
    // 0x55ff80: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x55ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_55ff84:
    // 0x55ff84: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x55ff84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_55ff88:
    // 0x55ff88: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x55ff88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_55ff8c:
    // 0x55ff8c: 0xc0c5ae8  jal         func_316BA0
label_55ff90:
    if (ctx->pc == 0x55FF90u) {
        ctx->pc = 0x55FF90u;
            // 0x55ff90: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55FF94u;
        goto label_55ff94;
    }
    ctx->pc = 0x55FF8Cu;
    SET_GPR_U32(ctx, 31, 0x55FF94u);
    ctx->pc = 0x55FF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FF8Cu;
            // 0x55ff90: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316BA0u;
    if (runtime->hasFunction(0x316BA0u)) {
        auto targetFn = runtime->lookupFunction(0x316BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FF94u; }
        if (ctx->pc != 0x55FF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316BA0_0x316ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FF94u; }
        if (ctx->pc != 0x55FF94u) { return; }
    }
    ctx->pc = 0x55FF94u;
label_55ff94:
    // 0x55ff94: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x55ff94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_55ff98:
    // 0x55ff98: 0x26a500e0  addiu       $a1, $s5, 0xE0
    ctx->pc = 0x55ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
label_55ff9c:
    // 0x55ff9c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x55ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_55ffa0:
    // 0x55ffa0: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x55ffa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_55ffa4:
    // 0x55ffa4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x55ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_55ffa8:
    // 0x55ffa8: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x55ffa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_55ffac:
    // 0x55ffac: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x55ffacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_55ffb0:
    // 0x55ffb0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x55ffb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_55ffb4:
    // 0x55ffb4: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x55ffb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_55ffb8:
    // 0x55ffb8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_55ffbc:
    if (ctx->pc == 0x55FFBCu) {
        ctx->pc = 0x55FFBCu;
            // 0x55ffbc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x55FFC0u;
        goto label_55ffc0;
    }
    ctx->pc = 0x55FFB8u;
    {
        const bool branch_taken_0x55ffb8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x55FFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FFB8u;
            // 0x55ffbc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55ffb8) {
            ctx->pc = 0x55FFA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55ffa0;
        }
    }
    ctx->pc = 0x55FFC0u;
label_55ffc0:
    // 0x55ffc0: 0x97a20140  lhu         $v0, 0x140($sp)
    ctx->pc = 0x55ffc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
label_55ffc4:
    // 0x55ffc4: 0xa6a200f0  sh          $v0, 0xF0($s5)
    ctx->pc = 0x55ffc4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 240), (uint16_t)GPR_U32(ctx, 2));
label_55ffc8:
    // 0x55ffc8: 0x97a20142  lhu         $v0, 0x142($sp)
    ctx->pc = 0x55ffc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 322)));
label_55ffcc:
    // 0x55ffcc: 0xa6a200f2  sh          $v0, 0xF2($s5)
    ctx->pc = 0x55ffccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 242), (uint16_t)GPR_U32(ctx, 2));
label_55ffd0:
    // 0x55ffd0: 0x97a20144  lhu         $v0, 0x144($sp)
    ctx->pc = 0x55ffd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 324)));
label_55ffd4:
    // 0x55ffd4: 0xa6a200f4  sh          $v0, 0xF4($s5)
    ctx->pc = 0x55ffd4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 244), (uint16_t)GPR_U32(ctx, 2));
label_55ffd8:
    // 0x55ffd8: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x55ffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55ffdc:
    // 0x55ffdc: 0xe6a000f8  swc1        $f0, 0xF8($s5)
    ctx->pc = 0x55ffdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 248), bits); }
label_55ffe0:
    // 0x55ffe0: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x55ffe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55ffe4:
    // 0x55ffe4: 0x1000000c  b           . + 4 + (0xC << 2)
label_55ffe8:
    if (ctx->pc == 0x55FFE8u) {
        ctx->pc = 0x55FFE8u;
            // 0x55ffe8: 0xe6a000fc  swc1        $f0, 0xFC($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 252), bits); }
        ctx->pc = 0x55FFECu;
        goto label_55ffec;
    }
    ctx->pc = 0x55FFE4u;
    {
        const bool branch_taken_0x55ffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55FFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FFE4u;
            // 0x55ffe8: 0xe6a000fc  swc1        $f0, 0xFC($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55ffe4) {
            ctx->pc = 0x560018u;
            goto label_560018;
        }
    }
    ctx->pc = 0x55FFECu;
label_55ffec:
    // 0x55ffec: 0x0  nop
    ctx->pc = 0x55ffecu;
    // NOP
label_55fff0:
    // 0x55fff0: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x55fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_55fff4:
    // 0x55fff4: 0x97a30142  lhu         $v1, 0x142($sp)
    ctx->pc = 0x55fff4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 322)));
label_55fff8:
    // 0x55fff8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x55fff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_55fffc:
    // 0x55fffc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x55fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_560000:
    // 0x560000: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x560000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_560004:
    // 0x560004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x560004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_560008:
    // 0x560008: 0x94460002  lhu         $a2, 0x2($v0)
    ctx->pc = 0x560008u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_56000c:
    // 0x56000c: 0xc0c5ba8  jal         func_316EA0
label_560010:
    if (ctx->pc == 0x560010u) {
        ctx->pc = 0x560010u;
            // 0x560010: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x560014u;
        goto label_560014;
    }
    ctx->pc = 0x56000Cu;
    SET_GPR_U32(ctx, 31, 0x560014u);
    ctx->pc = 0x560010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56000Cu;
            // 0x560010: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316EA0u;
    if (runtime->hasFunction(0x316EA0u)) {
        auto targetFn = runtime->lookupFunction(0x316EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560014u; }
        if (ctx->pc != 0x560014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316EA0_0x316ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560014u; }
        if (ctx->pc != 0x560014u) { return; }
    }
    ctx->pc = 0x560014u;
label_560014:
    // 0x560014: 0x0  nop
    ctx->pc = 0x560014u;
    // NOP
label_560018:
    // 0x560018: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x560018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_56001c:
    // 0x56001c: 0x97b20142  lhu         $s2, 0x142($sp)
    ctx->pc = 0x56001cu;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 322)));
label_560020:
    // 0x560020: 0x97b30140  lhu         $s3, 0x140($sp)
    ctx->pc = 0x560020u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
label_560024:
    // 0x560024: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x560024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_560028:
    // 0x560028: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x560028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_56002c:
    // 0x56002c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x56002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_560030:
    // 0x560030: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x560030u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_560034:
    // 0x560034: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_560038:
    if (ctx->pc == 0x560038u) {
        ctx->pc = 0x560038u;
            // 0x560038: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56003Cu;
        goto label_56003c;
    }
    ctx->pc = 0x560034u;
    {
        const bool branch_taken_0x560034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x560038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560034u;
            // 0x560038: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x560034) {
            ctx->pc = 0x560050u;
            goto label_560050;
        }
    }
    ctx->pc = 0x56003Cu;
label_56003c:
    // 0x56003c: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
label_560040:
    if (ctx->pc == 0x560040u) {
        ctx->pc = 0x560044u;
        goto label_560044;
    }
    ctx->pc = 0x56003Cu;
    {
        const bool branch_taken_0x56003c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x56003c) {
            ctx->pc = 0x560058u;
            goto label_560058;
        }
    }
    ctx->pc = 0x560044u;
label_560044:
    // 0x560044: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x560044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
label_560048:
    // 0x560048: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_56004c:
    if (ctx->pc == 0x56004Cu) {
        ctx->pc = 0x560050u;
        goto label_560050;
    }
    ctx->pc = 0x560048u;
    {
        const bool branch_taken_0x560048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x560048) {
            ctx->pc = 0x560058u;
            goto label_560058;
        }
    }
    ctx->pc = 0x560050u;
label_560050:
    // 0x560050: 0x1000003b  b           . + 4 + (0x3B << 2)
label_560054:
    if (ctx->pc == 0x560054u) {
        ctx->pc = 0x560054u;
            // 0x560054: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x560058u;
        goto label_560058;
    }
    ctx->pc = 0x560050u;
    {
        const bool branch_taken_0x560050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x560054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560050u;
            // 0x560054: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x560050) {
            ctx->pc = 0x560140u;
            goto label_560140;
        }
    }
    ctx->pc = 0x560058u;
label_560058:
    // 0x560058: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x560058u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_56005c:
    // 0x56005c: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x56005cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_560060:
    // 0x560060: 0x97a20144  lhu         $v0, 0x144($sp)
    ctx->pc = 0x560060u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 324)));
label_560064:
    // 0x560064: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x560064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_560068:
    // 0x560068: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x560068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_56006c:
    // 0x56006c: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x56006cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_560070:
    // 0x560070: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x560070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_560074:
    // 0x560074: 0xa7a20114  sh          $v0, 0x114($sp)
    ctx->pc = 0x560074u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 276), (uint16_t)GPR_U32(ctx, 2));
label_560078:
    // 0x560078: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x560078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_56007c:
    // 0x56007c: 0xa7b30110  sh          $s3, 0x110($sp)
    ctx->pc = 0x56007cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 272), (uint16_t)GPR_U32(ctx, 19));
label_560080:
    // 0x560080: 0xa7b20112  sh          $s2, 0x112($sp)
    ctx->pc = 0x560080u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 274), (uint16_t)GPR_U32(ctx, 18));
label_560084:
    // 0x560084: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x560084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_560088:
    // 0x560088: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x560088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_56008c:
    // 0x56008c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x56008cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_560090:
    // 0x560090: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x560090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_560094:
    // 0x560094: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x560094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_560098:
    // 0x560098: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x560098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_56009c:
    // 0x56009c: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x56009cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_5600a0:
    // 0x5600a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_5600a4:
    if (ctx->pc == 0x5600A4u) {
        ctx->pc = 0x5600A8u;
        goto label_5600a8;
    }
    ctx->pc = 0x5600A0u;
    {
        const bool branch_taken_0x5600a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5600a0) {
            ctx->pc = 0x5600B0u;
            goto label_5600b0;
        }
    }
    ctx->pc = 0x5600A8u;
label_5600a8:
    // 0x5600a8: 0x10000009  b           . + 4 + (0x9 << 2)
label_5600ac:
    if (ctx->pc == 0x5600ACu) {
        ctx->pc = 0x5600ACu;
            // 0x5600ac: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x5600B0u;
        goto label_5600b0;
    }
    ctx->pc = 0x5600A8u;
    {
        const bool branch_taken_0x5600a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5600ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5600A8u;
            // 0x5600ac: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5600a8) {
            ctx->pc = 0x5600D0u;
            goto label_5600d0;
        }
    }
    ctx->pc = 0x5600B0u;
label_5600b0:
    // 0x5600b0: 0x94660002  lhu         $a2, 0x2($v1)
    ctx->pc = 0x5600b0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_5600b4:
    // 0x5600b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x5600b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_5600b8:
    // 0x5600b8: 0xc0c5ba8  jal         func_316EA0
label_5600bc:
    if (ctx->pc == 0x5600BCu) {
        ctx->pc = 0x5600BCu;
            // 0x5600bc: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x5600C0u;
        goto label_5600c0;
    }
    ctx->pc = 0x5600B8u;
    SET_GPR_U32(ctx, 31, 0x5600C0u);
    ctx->pc = 0x5600BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5600B8u;
            // 0x5600bc: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316EA0u;
    if (runtime->hasFunction(0x316EA0u)) {
        auto targetFn = runtime->lookupFunction(0x316EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5600C0u; }
        if (ctx->pc != 0x5600C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316EA0_0x316ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5600C0u; }
        if (ctx->pc != 0x5600C0u) { return; }
    }
    ctx->pc = 0x5600C0u;
label_5600c0:
    // 0x5600c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x5600c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_5600c4:
    // 0x5600c4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x5600c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_5600c8:
    // 0x5600c8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_5600cc:
    if (ctx->pc == 0x5600CCu) {
        ctx->pc = 0x5600CCu;
            // 0x5600cc: 0x97a40112  lhu         $a0, 0x112($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 274)));
        ctx->pc = 0x5600D0u;
        goto label_5600d0;
    }
    ctx->pc = 0x5600C8u;
    {
        const bool branch_taken_0x5600c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5600CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5600C8u;
            // 0x5600cc: 0x97a40112  lhu         $a0, 0x112($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 274)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5600c8) {
            ctx->pc = 0x560088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_560088;
        }
    }
    ctx->pc = 0x5600D0u;
label_5600d0:
    // 0x5600d0: 0x1620001b  bnez        $s1, . + 4 + (0x1B << 2)
label_5600d4:
    if (ctx->pc == 0x5600D4u) {
        ctx->pc = 0x5600D8u;
        goto label_5600d8;
    }
    ctx->pc = 0x5600D0u;
    {
        const bool branch_taken_0x5600d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x5600d0) {
            ctx->pc = 0x560140u;
            goto label_560140;
        }
    }
    ctx->pc = 0x5600D8u;
label_5600d8:
    // 0x5600d8: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x5600d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_5600dc:
    // 0x5600dc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x5600dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_5600e0:
    // 0x5600e0: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x5600e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_5600e4:
    // 0x5600e4: 0x0  nop
    ctx->pc = 0x5600e4u;
    // NOP
label_5600e8:
    // 0x5600e8: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x5600e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_5600ec:
    // 0x5600ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x5600ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_5600f0:
    // 0x5600f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x5600f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_5600f4:
    // 0x5600f4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x5600f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_5600f8:
    // 0x5600f8: 0x94650130  lhu         $a1, 0x130($v1)
    ctx->pc = 0x5600f8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 304)));
label_5600fc:
    // 0x5600fc: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x5600fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_560100:
    // 0x560100: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x560100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_560104:
    // 0x560104: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x560104u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_560108:
    // 0x560108: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_56010c:
    if (ctx->pc == 0x56010Cu) {
        ctx->pc = 0x560110u;
        goto label_560110;
    }
    ctx->pc = 0x560108u;
    {
        const bool branch_taken_0x560108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x560108) {
            ctx->pc = 0x560128u;
            goto label_560128;
        }
    }
    ctx->pc = 0x560110u;
label_560110:
    // 0x560110: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
label_560114:
    if (ctx->pc == 0x560114u) {
        ctx->pc = 0x560118u;
        goto label_560118;
    }
    ctx->pc = 0x560110u;
    {
        const bool branch_taken_0x560110 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x560110) {
            ctx->pc = 0x560130u;
            goto label_560130;
        }
    }
    ctx->pc = 0x560118u;
label_560118:
    // 0x560118: 0x30630060  andi        $v1, $v1, 0x60
    ctx->pc = 0x560118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
label_56011c:
    // 0x56011c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_560120:
    if (ctx->pc == 0x560120u) {
        ctx->pc = 0x560124u;
        goto label_560124;
    }
    ctx->pc = 0x56011Cu;
    {
        const bool branch_taken_0x56011c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x56011c) {
            ctx->pc = 0x560130u;
            goto label_560130;
        }
    }
    ctx->pc = 0x560124u;
label_560124:
    // 0x560124: 0x0  nop
    ctx->pc = 0x560124u;
    // NOP
label_560128:
    // 0x560128: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x560128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_56012c:
    // 0x56012c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x56012cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_560130:
    // 0x560130: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x560130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_560134:
    // 0x560134: 0x1e60ffec  bgtz        $s3, . + 4 + (-0x14 << 2)
label_560138:
    if (ctx->pc == 0x560138u) {
        ctx->pc = 0x56013Cu;
        goto label_56013c;
    }
    ctx->pc = 0x560134u;
    {
        const bool branch_taken_0x560134 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x560134) {
            ctx->pc = 0x5600E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5600e8;
        }
    }
    ctx->pc = 0x56013Cu;
label_56013c:
    // 0x56013c: 0x0  nop
    ctx->pc = 0x56013cu;
    // NOP
label_560140:
    // 0x560140: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_560144:
    if (ctx->pc == 0x560144u) {
        ctx->pc = 0x560148u;
        goto label_560148;
    }
    ctx->pc = 0x560140u;
    {
        const bool branch_taken_0x560140 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x560140) {
            ctx->pc = 0x560150u;
            goto label_560150;
        }
    }
    ctx->pc = 0x560148u;
label_560148:
    // 0x560148: 0xa6b200f2  sh          $s2, 0xF2($s5)
    ctx->pc = 0x560148u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 242), (uint16_t)GPR_U32(ctx, 18));
label_56014c:
    // 0x56014c: 0x0  nop
    ctx->pc = 0x56014cu;
    // NOP
label_560150:
    // 0x560150: 0x8ee60008  lw          $a2, 0x8($s7)
    ctx->pc = 0x560150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_560154:
    // 0x560154: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x560154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_560158:
    // 0x560158: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x560158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_56015c:
    // 0x56015c: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x56015cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_560160:
    // 0x560160: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x560160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_560164:
    // 0x560164: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x560164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_560168:
    // 0x560168: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x560168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_56016c:
    // 0x56016c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x56016cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_560170:
    // 0x560170: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x560170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_560174:
    // 0x560174: 0xc04cc04  jal         func_133010
label_560178:
    if (ctx->pc == 0x560178u) {
        ctx->pc = 0x560178u;
            // 0x560178: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x56017Cu;
        goto label_56017c;
    }
    ctx->pc = 0x560174u;
    SET_GPR_U32(ctx, 31, 0x56017Cu);
    ctx->pc = 0x560178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560174u;
            // 0x560178: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56017Cu; }
        if (ctx->pc != 0x56017Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56017Cu; }
        if (ctx->pc != 0x56017Cu) { return; }
    }
    ctx->pc = 0x56017Cu;
label_56017c:
    // 0x56017c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x56017cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_560180:
    // 0x560180: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x560180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_560184:
    // 0x560184: 0xc04cc90  jal         func_133240
label_560188:
    if (ctx->pc == 0x560188u) {
        ctx->pc = 0x560188u;
            // 0x560188: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56018Cu;
        goto label_56018c;
    }
    ctx->pc = 0x560184u;
    SET_GPR_U32(ctx, 31, 0x56018Cu);
    ctx->pc = 0x560188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560184u;
            // 0x560188: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56018Cu; }
        if (ctx->pc != 0x56018Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56018Cu; }
        if (ctx->pc != 0x56018Cu) { return; }
    }
    ctx->pc = 0x56018Cu;
label_56018c:
    // 0x56018c: 0xc04cc2c  jal         func_1330B0
label_560190:
    if (ctx->pc == 0x560190u) {
        ctx->pc = 0x560190u;
            // 0x560190: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x560194u;
        goto label_560194;
    }
    ctx->pc = 0x56018Cu;
    SET_GPR_U32(ctx, 31, 0x560194u);
    ctx->pc = 0x560190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56018Cu;
            // 0x560190: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560194u; }
        if (ctx->pc != 0x560194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560194u; }
        if (ctx->pc != 0x560194u) { return; }
    }
    ctx->pc = 0x560194u;
label_560194:
    // 0x560194: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_560198:
    if (ctx->pc == 0x560198u) {
        ctx->pc = 0x560198u;
            // 0x560198: 0xe6a0017c  swc1        $f0, 0x17C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 380), bits); }
        ctx->pc = 0x56019Cu;
        goto label_56019c;
    }
    ctx->pc = 0x560194u;
    {
        const bool branch_taken_0x560194 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x560198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560194u;
            // 0x560198: 0xe6a0017c  swc1        $f0, 0x17C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 380), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x560194) {
            ctx->pc = 0x5601F8u;
            goto label_5601f8;
        }
    }
    ctx->pc = 0x56019Cu;
label_56019c:
    // 0x56019c: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x56019cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_5601a0:
    // 0x5601a0: 0x26a600e0  addiu       $a2, $s5, 0xE0
    ctx->pc = 0x5601a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
label_5601a4:
    // 0x5601a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x5601a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5601a8:
    // 0x5601a8: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x5601a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_5601ac:
    // 0x5601ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x5601acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_5601b0:
    // 0x5601b0: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x5601b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_5601b4:
    // 0x5601b4: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x5601b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_5601b8:
    // 0x5601b8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x5601b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_5601bc:
    // 0x5601bc: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x5601bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
label_5601c0:
    // 0x5601c0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_5601c4:
    if (ctx->pc == 0x5601C4u) {
        ctx->pc = 0x5601C4u;
            // 0x5601c4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x5601C8u;
        goto label_5601c8;
    }
    ctx->pc = 0x5601C0u;
    {
        const bool branch_taken_0x5601c0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x5601C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5601C0u;
            // 0x5601c4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5601c0) {
            ctx->pc = 0x5601A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5601a8;
        }
    }
    ctx->pc = 0x5601C8u;
label_5601c8:
    // 0x5601c8: 0x97a30140  lhu         $v1, 0x140($sp)
    ctx->pc = 0x5601c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
label_5601cc:
    // 0x5601cc: 0xa6a300f0  sh          $v1, 0xF0($s5)
    ctx->pc = 0x5601ccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 240), (uint16_t)GPR_U32(ctx, 3));
label_5601d0:
    // 0x5601d0: 0x97a30142  lhu         $v1, 0x142($sp)
    ctx->pc = 0x5601d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 322)));
label_5601d4:
    // 0x5601d4: 0xa6a300f2  sh          $v1, 0xF2($s5)
    ctx->pc = 0x5601d4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 242), (uint16_t)GPR_U32(ctx, 3));
label_5601d8:
    // 0x5601d8: 0x97a30144  lhu         $v1, 0x144($sp)
    ctx->pc = 0x5601d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 324)));
label_5601dc:
    // 0x5601dc: 0xa6a300f4  sh          $v1, 0xF4($s5)
    ctx->pc = 0x5601dcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 244), (uint16_t)GPR_U32(ctx, 3));
label_5601e0:
    // 0x5601e0: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x5601e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5601e4:
    // 0x5601e4: 0xe6a000f8  swc1        $f0, 0xF8($s5)
    ctx->pc = 0x5601e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 248), bits); }
label_5601e8:
    // 0x5601e8: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x5601e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5601ec:
    // 0x5601ec: 0xe6a000fc  swc1        $f0, 0xFC($s5)
    ctx->pc = 0x5601ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 252), bits); }
label_5601f0:
    // 0x5601f0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_5601f4:
    if (ctx->pc == 0x5601F4u) {
        ctx->pc = 0x5601F4u;
            // 0x5601f4: 0xa6b200f2  sh          $s2, 0xF2($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 242), (uint16_t)GPR_U32(ctx, 18));
        ctx->pc = 0x5601F8u;
        goto label_5601f8;
    }
    ctx->pc = 0x5601F0u;
    {
        const bool branch_taken_0x5601f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5601F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5601F0u;
            // 0x5601f4: 0xa6b200f2  sh          $s2, 0xF2($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 242), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5601f0) {
            ctx->pc = 0x560330u;
            goto label_560330;
        }
    }
    ctx->pc = 0x5601F8u;
label_5601f8:
    // 0x5601f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x5601f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_5601fc:
    // 0x5601fc: 0x2e830004  sltiu       $v1, $s4, 0x4
    ctx->pc = 0x5601fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_560200:
    // 0x560200: 0x1460ff5c  bnez        $v1, . + 4 + (-0xA4 << 2)
label_560204:
    if (ctx->pc == 0x560204u) {
        ctx->pc = 0x560208u;
        goto label_560208;
    }
    ctx->pc = 0x560200u;
    {
        const bool branch_taken_0x560200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x560200) {
            ctx->pc = 0x55FF74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55ff74;
        }
    }
    ctx->pc = 0x560208u;
label_560208:
    // 0x560208: 0x1000004a  b           . + 4 + (0x4A << 2)
label_56020c:
    if (ctx->pc == 0x56020Cu) {
        ctx->pc = 0x56020Cu;
            // 0x56020c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x560210u;
        goto label_560210;
    }
    ctx->pc = 0x560208u;
    {
        const bool branch_taken_0x560208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56020Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560208u;
            // 0x56020c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x560208) {
            ctx->pc = 0x560334u;
            goto label_560334;
        }
    }
    ctx->pc = 0x560210u;
label_560210:
    // 0x560210: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x560210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_560214:
    // 0x560214: 0x26a500e0  addiu       $a1, $s5, 0xE0
    ctx->pc = 0x560214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
label_560218:
    // 0x560218: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x560218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_56021c:
    // 0x56021c: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x56021cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_560220:
    // 0x560220: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x560220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_560224:
    // 0x560224: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x560224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_560228:
    // 0x560228: 0x24510130  addiu       $s1, $v0, 0x130
    ctx->pc = 0x560228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_56022c:
    // 0x56022c: 0xc0c5ae8  jal         func_316BA0
label_560230:
    if (ctx->pc == 0x560230u) {
        ctx->pc = 0x560230u;
            // 0x560230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560234u;
        goto label_560234;
    }
    ctx->pc = 0x56022Cu;
    SET_GPR_U32(ctx, 31, 0x560234u);
    ctx->pc = 0x560230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56022Cu;
            // 0x560230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316BA0u;
    if (runtime->hasFunction(0x316BA0u)) {
        auto targetFn = runtime->lookupFunction(0x316BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560234u; }
        if (ctx->pc != 0x560234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316BA0_0x316ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560234u; }
        if (ctx->pc != 0x560234u) { return; }
    }
    ctx->pc = 0x560234u;
label_560234:
    // 0x560234: 0x96a600f0  lhu         $a2, 0xF0($s5)
    ctx->pc = 0x560234u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 240)));
label_560238:
    // 0x560238: 0x58c0002e  blezl       $a2, . + 4 + (0x2E << 2)
label_56023c:
    if (ctx->pc == 0x56023Cu) {
        ctx->pc = 0x56023Cu;
            // 0x56023c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x560240u;
        goto label_560240;
    }
    ctx->pc = 0x560238u;
    {
        const bool branch_taken_0x560238 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x560238) {
            ctx->pc = 0x56023Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x560238u;
            // 0x56023c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5602F4u;
            goto label_5602f4;
        }
    }
    ctx->pc = 0x560240u;
label_560240:
    // 0x560240: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x560240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_560244:
    // 0x560244: 0x96a500f2  lhu         $a1, 0xF2($s5)
    ctx->pc = 0x560244u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 242)));
label_560248:
    // 0x560248: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x560248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_56024c:
    // 0x56024c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x56024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_560250:
    // 0x560250: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x560250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_560254:
    // 0x560254: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x560254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_560258:
    // 0x560258: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x560258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_56025c:
    // 0x56025c: 0x944300e0  lhu         $v1, 0xE0($v0)
    ctx->pc = 0x56025cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_560260:
    // 0x560260: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x560260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_560264:
    // 0x560264: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x560264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_560268:
    // 0x560268: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x560268u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_56026c:
    // 0x56026c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_560270:
    if (ctx->pc == 0x560270u) {
        ctx->pc = 0x560274u;
        goto label_560274;
    }
    ctx->pc = 0x56026Cu;
    {
        const bool branch_taken_0x56026c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x56026c) {
            ctx->pc = 0x560278u;
            goto label_560278;
        }
    }
    ctx->pc = 0x560274u;
label_560274:
    // 0x560274: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x560274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_560278:
    // 0x560278: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x560278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_56027c:
    // 0x56027c: 0x5cc0fff4  bgtzl       $a2, . + 4 + (-0xC << 2)
label_560280:
    if (ctx->pc == 0x560280u) {
        ctx->pc = 0x560280u;
            // 0x560280: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x560284u;
        goto label_560284;
    }
    ctx->pc = 0x56027Cu;
    {
        const bool branch_taken_0x56027c = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x56027c) {
            ctx->pc = 0x560280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56027Cu;
            // 0x560280: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x560250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_560250;
        }
    }
    ctx->pc = 0x560284u;
label_560284:
    // 0x560284: 0xa6a500f2  sh          $a1, 0xF2($s5)
    ctx->pc = 0x560284u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 242), (uint16_t)GPR_U32(ctx, 5));
label_560288:
    // 0x560288: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x560288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_56028c:
    // 0x56028c: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x56028cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_560290:
    // 0x560290: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x560290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_560294:
    // 0x560294: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x560294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_560298:
    // 0x560298: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x560298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_56029c:
    // 0x56029c: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x56029cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_5602a0:
    // 0x5602a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x5602a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_5602a4:
    // 0x5602a4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x5602a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_5602a8:
    // 0x5602a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x5602a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_5602ac:
    // 0x5602ac: 0xc04cc04  jal         func_133010
label_5602b0:
    if (ctx->pc == 0x5602B0u) {
        ctx->pc = 0x5602B0u;
            // 0x5602b0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x5602B4u;
        goto label_5602b4;
    }
    ctx->pc = 0x5602ACu;
    SET_GPR_U32(ctx, 31, 0x5602B4u);
    ctx->pc = 0x5602B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5602ACu;
            // 0x5602b0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5602B4u; }
        if (ctx->pc != 0x5602B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5602B4u; }
        if (ctx->pc != 0x5602B4u) { return; }
    }
    ctx->pc = 0x5602B4u;
label_5602b4:
    // 0x5602b4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x5602b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_5602b8:
    // 0x5602b8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x5602b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_5602bc:
    // 0x5602bc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x5602bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_5602c0:
    // 0x5602c0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x5602c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_5602c4:
    // 0x5602c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x5602c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_5602c8:
    // 0x5602c8: 0xc04cc04  jal         func_133010
label_5602cc:
    if (ctx->pc == 0x5602CCu) {
        ctx->pc = 0x5602CCu;
            // 0x5602cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x5602D0u;
        goto label_5602d0;
    }
    ctx->pc = 0x5602C8u;
    SET_GPR_U32(ctx, 31, 0x5602D0u);
    ctx->pc = 0x5602CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5602C8u;
            // 0x5602cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5602D0u; }
        if (ctx->pc != 0x5602D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5602D0u; }
        if (ctx->pc != 0x5602D0u) { return; }
    }
    ctx->pc = 0x5602D0u;
label_5602d0:
    // 0x5602d0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x5602d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_5602d4:
    // 0x5602d4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x5602d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5602d8:
    // 0x5602d8: 0xc04cc90  jal         func_133240
label_5602dc:
    if (ctx->pc == 0x5602DCu) {
        ctx->pc = 0x5602DCu;
            // 0x5602dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5602E0u;
        goto label_5602e0;
    }
    ctx->pc = 0x5602D8u;
    SET_GPR_U32(ctx, 31, 0x5602E0u);
    ctx->pc = 0x5602DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5602D8u;
            // 0x5602dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5602E0u; }
        if (ctx->pc != 0x5602E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5602E0u; }
        if (ctx->pc != 0x5602E0u) { return; }
    }
    ctx->pc = 0x5602E0u;
label_5602e0:
    // 0x5602e0: 0xc04cc2c  jal         func_1330B0
label_5602e4:
    if (ctx->pc == 0x5602E4u) {
        ctx->pc = 0x5602E4u;
            // 0x5602e4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x5602E8u;
        goto label_5602e8;
    }
    ctx->pc = 0x5602E0u;
    SET_GPR_U32(ctx, 31, 0x5602E8u);
    ctx->pc = 0x5602E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5602E0u;
            // 0x5602e4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5602E8u; }
        if (ctx->pc != 0x5602E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5602E8u; }
        if (ctx->pc != 0x5602E8u) { return; }
    }
    ctx->pc = 0x5602E8u;
label_5602e8:
    // 0x5602e8: 0xe6a0017c  swc1        $f0, 0x17C($s5)
    ctx->pc = 0x5602e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 380), bits); }
label_5602ec:
    // 0x5602ec: 0x10000010  b           . + 4 + (0x10 << 2)
label_5602f0:
    if (ctx->pc == 0x5602F0u) {
        ctx->pc = 0x5602F0u;
            // 0x5602f0: 0xa2a00180  sb          $zero, 0x180($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 384), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x5602F4u;
        goto label_5602f4;
    }
    ctx->pc = 0x5602ECu;
    {
        const bool branch_taken_0x5602ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5602F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5602ECu;
            // 0x5602f0: 0xa2a00180  sb          $zero, 0x180($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5602ec) {
            ctx->pc = 0x560330u;
            goto label_560330;
        }
    }
    ctx->pc = 0x5602F4u;
label_5602f4:
    // 0x5602f4: 0xc04f278  jal         func_13C9E0
label_5602f8:
    if (ctx->pc == 0x5602F8u) {
        ctx->pc = 0x5602F8u;
            // 0x5602f8: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x5602FCu;
        goto label_5602fc;
    }
    ctx->pc = 0x5602F4u;
    SET_GPR_U32(ctx, 31, 0x5602FCu);
    ctx->pc = 0x5602F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5602F4u;
            // 0x5602f8: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5602FCu; }
        if (ctx->pc != 0x5602FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5602FCu; }
        if (ctx->pc != 0x5602FCu) { return; }
    }
    ctx->pc = 0x5602FCu;
label_5602fc:
    // 0x5602fc: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5602fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_560300:
    // 0x560300: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x560300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_560304:
    // 0x560304: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x560304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_560308:
    // 0x560308: 0xc04cca0  jal         func_133280
label_56030c:
    if (ctx->pc == 0x56030Cu) {
        ctx->pc = 0x56030Cu;
            // 0x56030c: 0x24c6f8c0  addiu       $a2, $a2, -0x740 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965440));
        ctx->pc = 0x560310u;
        goto label_560310;
    }
    ctx->pc = 0x560308u;
    SET_GPR_U32(ctx, 31, 0x560310u);
    ctx->pc = 0x56030Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560308u;
            // 0x56030c: 0x24c6f8c0  addiu       $a2, $a2, -0x740 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560310u; }
        if (ctx->pc != 0x560310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560310u; }
        if (ctx->pc != 0x560310u) { return; }
    }
    ctx->pc = 0x560310u;
label_560310:
    // 0x560310: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x560310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_560314:
    // 0x560314: 0x26a500e0  addiu       $a1, $s5, 0xE0
    ctx->pc = 0x560314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
label_560318:
    // 0x560318: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x560318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_56031c:
    // 0x56031c: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x56031cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_560320:
    // 0x560320: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x560320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_560324:
    // 0x560324: 0x8c44012c  lw          $a0, 0x12C($v0)
    ctx->pc = 0x560324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_560328:
    // 0x560328: 0xc0c614c  jal         func_318530
label_56032c:
    if (ctx->pc == 0x56032Cu) {
        ctx->pc = 0x56032Cu;
            // 0x56032c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560330u;
        goto label_560330;
    }
    ctx->pc = 0x560328u;
    SET_GPR_U32(ctx, 31, 0x560330u);
    ctx->pc = 0x56032Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560328u;
            // 0x56032c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318530u;
    if (runtime->hasFunction(0x318530u)) {
        auto targetFn = runtime->lookupFunction(0x318530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560330u; }
        if (ctx->pc != 0x560330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318530_0x318530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560330u; }
        if (ctx->pc != 0x560330u) { return; }
    }
    ctx->pc = 0x560330u;
label_560330:
    // 0x560330: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x560330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_560334:
    // 0x560334: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x560334u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_560338:
    // 0x560338: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x560338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_56033c:
    // 0x56033c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x56033cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_560340:
    // 0x560340: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x560340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_560344:
    // 0x560344: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x560344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_560348:
    // 0x560348: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x560348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_56034c:
    // 0x56034c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x56034cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_560350:
    // 0x560350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x560350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_560354:
    // 0x560354: 0x3e00008  jr          $ra
label_560358:
    if (ctx->pc == 0x560358u) {
        ctx->pc = 0x560358u;
            // 0x560358: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x56035Cu;
        goto label_56035c;
    }
    ctx->pc = 0x560354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x560358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560354u;
            // 0x560358: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56035Cu;
label_56035c:
    // 0x56035c: 0x0  nop
    ctx->pc = 0x56035cu;
    // NOP
label_560360:
    // 0x560360: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x560360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_560364:
    // 0x560364: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x560364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_560368:
    // 0x560368: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x560368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_56036c:
    // 0x56036c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x56036cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_560370:
    // 0x560370: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x560370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_560374:
    // 0x560374: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x560374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_560378:
    // 0x560378: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x560378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_56037c:
    // 0x56037c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x56037cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_560380:
    // 0x560380: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x560380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_560384:
    // 0x560384: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x560384u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_560388:
    // 0x560388: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x560388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_56038c:
    // 0x56038c: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x56038cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_560390:
    // 0x560390: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x560390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_560394:
    // 0x560394: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x560394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_560398:
    // 0x560398: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x560398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_56039c:
    // 0x56039c: 0x106200ec  beq         $v1, $v0, . + 4 + (0xEC << 2)
label_5603a0:
    if (ctx->pc == 0x5603A0u) {
        ctx->pc = 0x5603A0u;
            // 0x5603a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5603A4u;
        goto label_5603a4;
    }
    ctx->pc = 0x56039Cu;
    {
        const bool branch_taken_0x56039c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x5603A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56039Cu;
            // 0x5603a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56039c) {
            ctx->pc = 0x560750u;
            goto label_560750;
        }
    }
    ctx->pc = 0x5603A4u;
label_5603a4:
    // 0x5603a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5603a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5603a8:
    // 0x5603a8: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
label_5603ac:
    if (ctx->pc == 0x5603ACu) {
        ctx->pc = 0x5603ACu;
            // 0x5603ac: 0x3c024657  lui         $v0, 0x4657 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18007 << 16));
        ctx->pc = 0x5603B0u;
        goto label_5603b0;
    }
    ctx->pc = 0x5603A8u;
    {
        const bool branch_taken_0x5603a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5603a8) {
            ctx->pc = 0x5603ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5603A8u;
            // 0x5603ac: 0x3c024657  lui         $v0, 0x4657 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18007 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5603FCu;
            goto label_5603fc;
        }
    }
    ctx->pc = 0x5603B0u;
label_5603b0:
    // 0x5603b0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_5603b4:
    if (ctx->pc == 0x5603B4u) {
        ctx->pc = 0x5603B4u;
            // 0x5603b4: 0x8e0200d0  lw          $v0, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->pc = 0x5603B8u;
        goto label_5603b8;
    }
    ctx->pc = 0x5603B0u;
    {
        const bool branch_taken_0x5603b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5603b0) {
            ctx->pc = 0x5603B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5603B0u;
            // 0x5603b4: 0x8e0200d0  lw          $v0, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5603C0u;
            goto label_5603c0;
        }
    }
    ctx->pc = 0x5603B8u;
label_5603b8:
    // 0x5603b8: 0x1000016c  b           . + 4 + (0x16C << 2)
label_5603bc:
    if (ctx->pc == 0x5603BCu) {
        ctx->pc = 0x5603BCu;
            // 0x5603bc: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x5603C0u;
        goto label_5603c0;
    }
    ctx->pc = 0x5603B8u;
    {
        const bool branch_taken_0x5603b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5603BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5603B8u;
            // 0x5603bc: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5603b8) {
            ctx->pc = 0x56096Cu;
            goto label_56096c;
        }
    }
    ctx->pc = 0x5603C0u;
label_5603c0:
    // 0x5603c0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x5603c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_5603c4:
    // 0x5603c4: 0x904200d8  lbu         $v0, 0xD8($v0)
    ctx->pc = 0x5603c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 216)));
label_5603c8:
    // 0x5603c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_5603cc:
    if (ctx->pc == 0x5603CCu) {
        ctx->pc = 0x5603D0u;
        goto label_5603d0;
    }
    ctx->pc = 0x5603C8u;
    {
        const bool branch_taken_0x5603c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5603c8) {
            ctx->pc = 0x5603E0u;
            goto label_5603e0;
        }
    }
    ctx->pc = 0x5603D0u;
label_5603d0:
    // 0x5603d0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5603d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5603d4:
    // 0x5603d4: 0x8c42b824  lw          $v0, -0x47DC($v0)
    ctx->pc = 0x5603d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948900)));
label_5603d8:
    // 0x5603d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_5603dc:
    if (ctx->pc == 0x5603DCu) {
        ctx->pc = 0x5603DCu;
            // 0x5603dc: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x5603E0u;
        goto label_5603e0;
    }
    ctx->pc = 0x5603D8u;
    {
        const bool branch_taken_0x5603d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5603DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5603D8u;
            // 0x5603dc: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5603d8) {
            ctx->pc = 0x5603ECu;
            goto label_5603ec;
        }
    }
    ctx->pc = 0x5603E0u;
label_5603e0:
    // 0x5603e0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5603e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5603e4:
    // 0x5603e4: 0x8c42b7f4  lw          $v0, -0x480C($v0)
    ctx->pc = 0x5603e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948852)));
label_5603e8:
    // 0x5603e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x5603e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5603ec:
    // 0x5603ec: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x5603ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
label_5603f0:
    // 0x5603f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5603f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5603f4:
    // 0x5603f4: 0x1000015c  b           . + 4 + (0x15C << 2)
label_5603f8:
    if (ctx->pc == 0x5603F8u) {
        ctx->pc = 0x5603F8u;
            // 0x5603f8: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x5603FCu;
        goto label_5603fc;
    }
    ctx->pc = 0x5603F4u;
    {
        const bool branch_taken_0x5603f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5603F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5603F4u;
            // 0x5603f8: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5603f4) {
            ctx->pc = 0x560968u;
            goto label_560968;
        }
    }
    ctx->pc = 0x5603FCu;
label_5603fc:
    // 0x5603fc: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x5603fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_560400:
    // 0x560400: 0x3446a000  ori         $a2, $v0, 0xA000
    ctx->pc = 0x560400u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
label_560404:
    // 0x560404: 0x3c0241a7  lui         $v0, 0x41A7
    ctx->pc = 0x560404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16807 << 16));
label_560408:
    // 0x560408: 0x34438d36  ori         $v1, $v0, 0x8D36
    ctx->pc = 0x560408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36150);
label_56040c:
    // 0x56040c: 0xaca60154  sw          $a2, 0x154($a1)
    ctx->pc = 0x56040cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 6));
label_560410:
    // 0x560410: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x560410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_560414:
    // 0x560414: 0xc157fa0  jal         func_55FE80
label_560418:
    if (ctx->pc == 0x560418u) {
        ctx->pc = 0x560418u;
            // 0x560418: 0xac430158  sw          $v1, 0x158($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
        ctx->pc = 0x56041Cu;
        goto label_56041c;
    }
    ctx->pc = 0x560414u;
    SET_GPR_U32(ctx, 31, 0x56041Cu);
    ctx->pc = 0x560418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560414u;
            // 0x560418: 0xac430158  sw          $v1, 0x158($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55FE80u;
    goto label_55fe80;
    ctx->pc = 0x56041Cu;
label_56041c:
    // 0x56041c: 0x92020180  lbu         $v0, 0x180($s0)
    ctx->pc = 0x56041cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
label_560420:
    // 0x560420: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_560424:
    if (ctx->pc == 0x560424u) {
        ctx->pc = 0x560428u;
        goto label_560428;
    }
    ctx->pc = 0x560420u;
    {
        const bool branch_taken_0x560420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x560420) {
            ctx->pc = 0x560484u;
            goto label_560484;
        }
    }
    ctx->pc = 0x560428u;
label_560428:
    // 0x560428: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x560428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_56042c:
    // 0x56042c: 0x960300f2  lhu         $v1, 0xF2($s0)
    ctx->pc = 0x56042cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
label_560430:
    // 0x560430: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x560430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_560434:
    // 0x560434: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x560434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_560438:
    // 0x560438: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x560438u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_56043c:
    // 0x56043c: 0x24520130  addiu       $s2, $v0, 0x130
    ctx->pc = 0x56043cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_560440:
    // 0x560440: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x560440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_560444:
    // 0x560444: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x560444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_560448:
    // 0x560448: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x560448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_56044c:
    // 0x56044c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x56044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_560450:
    // 0x560450: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x560450u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_560454:
    // 0x560454: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x560454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_560458:
    // 0x560458: 0xc04cc04  jal         func_133010
label_56045c:
    if (ctx->pc == 0x56045Cu) {
        ctx->pc = 0x56045Cu;
            // 0x56045c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x560460u;
        goto label_560460;
    }
    ctx->pc = 0x560458u;
    SET_GPR_U32(ctx, 31, 0x560460u);
    ctx->pc = 0x56045Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560458u;
            // 0x56045c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560460u; }
        if (ctx->pc != 0x560460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560460u; }
        if (ctx->pc != 0x560460u) { return; }
    }
    ctx->pc = 0x560460u;
label_560460:
    // 0x560460: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x560460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_560464:
    // 0x560464: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x560464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_560468:
    // 0x560468: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x560468u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_56046c:
    // 0x56046c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x56046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_560470:
    // 0x560470: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x560470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_560474:
    // 0x560474: 0xc04cc04  jal         func_133010
label_560478:
    if (ctx->pc == 0x560478u) {
        ctx->pc = 0x560478u;
            // 0x560478: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x56047Cu;
        goto label_56047c;
    }
    ctx->pc = 0x560474u;
    SET_GPR_U32(ctx, 31, 0x56047Cu);
    ctx->pc = 0x560478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560474u;
            // 0x560478: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56047Cu; }
        if (ctx->pc != 0x56047Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56047Cu; }
        if (ctx->pc != 0x56047Cu) { return; }
    }
    ctx->pc = 0x56047Cu;
label_56047c:
    // 0x56047c: 0x10000017  b           . + 4 + (0x17 << 2)
label_560480:
    if (ctx->pc == 0x560480u) {
        ctx->pc = 0x560480u;
            // 0x560480: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x560484u;
        goto label_560484;
    }
    ctx->pc = 0x56047Cu;
    {
        const bool branch_taken_0x56047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x560480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56047Cu;
            // 0x560480: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56047c) {
            ctx->pc = 0x5604DCu;
            goto label_5604dc;
        }
    }
    ctx->pc = 0x560484u;
label_560484:
    // 0x560484: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x560484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_560488:
    // 0x560488: 0x960300f2  lhu         $v1, 0xF2($s0)
    ctx->pc = 0x560488u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
label_56048c:
    // 0x56048c: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x56048cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_560490:
    // 0x560490: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x560490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_560494:
    // 0x560494: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x560494u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_560498:
    // 0x560498: 0x8c52012c  lw          $s2, 0x12C($v0)
    ctx->pc = 0x560498u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_56049c:
    // 0x56049c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x56049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_5604a0:
    // 0x5604a0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x5604a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_5604a4:
    // 0x5604a4: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x5604a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_5604a8:
    // 0x5604a8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x5604a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_5604ac:
    // 0x5604ac: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x5604acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_5604b0:
    // 0x5604b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x5604b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_5604b4:
    // 0x5604b4: 0xc04cc04  jal         func_133010
label_5604b8:
    if (ctx->pc == 0x5604B8u) {
        ctx->pc = 0x5604B8u;
            // 0x5604b8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x5604BCu;
        goto label_5604bc;
    }
    ctx->pc = 0x5604B4u;
    SET_GPR_U32(ctx, 31, 0x5604BCu);
    ctx->pc = 0x5604B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5604B4u;
            // 0x5604b8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5604BCu; }
        if (ctx->pc != 0x5604BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5604BCu; }
        if (ctx->pc != 0x5604BCu) { return; }
    }
    ctx->pc = 0x5604BCu;
label_5604bc:
    // 0x5604bc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x5604bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_5604c0:
    // 0x5604c0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x5604c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5604c4:
    // 0x5604c4: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x5604c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_5604c8:
    // 0x5604c8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x5604c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_5604cc:
    // 0x5604cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x5604ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_5604d0:
    // 0x5604d0: 0xc04cc04  jal         func_133010
label_5604d4:
    if (ctx->pc == 0x5604D4u) {
        ctx->pc = 0x5604D4u;
            // 0x5604d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x5604D8u;
        goto label_5604d8;
    }
    ctx->pc = 0x5604D0u;
    SET_GPR_U32(ctx, 31, 0x5604D8u);
    ctx->pc = 0x5604D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5604D0u;
            // 0x5604d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5604D8u; }
        if (ctx->pc != 0x5604D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5604D8u; }
        if (ctx->pc != 0x5604D8u) { return; }
    }
    ctx->pc = 0x5604D8u;
label_5604d8:
    // 0x5604d8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x5604d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5604dc:
    // 0x5604dc: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x5604dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_5604e0:
    // 0x5604e0: 0xc04cc90  jal         func_133240
label_5604e4:
    if (ctx->pc == 0x5604E4u) {
        ctx->pc = 0x5604E4u;
            // 0x5604e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5604E8u;
        goto label_5604e8;
    }
    ctx->pc = 0x5604E0u;
    SET_GPR_U32(ctx, 31, 0x5604E8u);
    ctx->pc = 0x5604E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5604E0u;
            // 0x5604e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5604E8u; }
        if (ctx->pc != 0x5604E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5604E8u; }
        if (ctx->pc != 0x5604E8u) { return; }
    }
    ctx->pc = 0x5604E8u;
label_5604e8:
    // 0x5604e8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x5604e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5604ec:
    // 0x5604ec: 0xc04cc44  jal         func_133110
label_5604f0:
    if (ctx->pc == 0x5604F0u) {
        ctx->pc = 0x5604F0u;
            // 0x5604f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5604F4u;
        goto label_5604f4;
    }
    ctx->pc = 0x5604ECu;
    SET_GPR_U32(ctx, 31, 0x5604F4u);
    ctx->pc = 0x5604F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5604ECu;
            // 0x5604f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5604F4u; }
        if (ctx->pc != 0x5604F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5604F4u; }
        if (ctx->pc != 0x5604F4u) { return; }
    }
    ctx->pc = 0x5604F4u;
label_5604f4:
    // 0x5604f4: 0x3c023f88  lui         $v0, 0x3F88
    ctx->pc = 0x5604f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16264 << 16));
label_5604f8:
    // 0x5604f8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x5604f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5604fc:
    // 0x5604fc: 0x34424bda  ori         $v0, $v0, 0x4BDA
    ctx->pc = 0x5604fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19418);
label_560500:
    // 0x560500: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x560500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_560504:
    // 0x560504: 0xc04cc70  jal         func_1331C0
label_560508:
    if (ctx->pc == 0x560508u) {
        ctx->pc = 0x560508u;
            // 0x560508: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56050Cu;
        goto label_56050c;
    }
    ctx->pc = 0x560504u;
    SET_GPR_U32(ctx, 31, 0x56050Cu);
    ctx->pc = 0x560508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560504u;
            // 0x560508: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56050Cu; }
        if (ctx->pc != 0x56050Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56050Cu; }
        if (ctx->pc != 0x56050Cu) { return; }
    }
    ctx->pc = 0x56050Cu;
label_56050c:
    // 0x56050c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x56050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_560510:
    // 0x560510: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x560510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_560514:
    // 0x560514: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x560514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_560518:
    // 0x560518: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x560518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_56051c:
    // 0x56051c: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x56051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_560520:
    // 0x560520: 0xc089688  jal         func_225A20
label_560524:
    if (ctx->pc == 0x560524u) {
        ctx->pc = 0x560524u;
            // 0x560524: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x560528u;
        goto label_560528;
    }
    ctx->pc = 0x560520u;
    SET_GPR_U32(ctx, 31, 0x560528u);
    ctx->pc = 0x560524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560520u;
            // 0x560524: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560528u; }
        if (ctx->pc != 0x560528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560528u; }
        if (ctx->pc != 0x560528u) { return; }
    }
    ctx->pc = 0x560528u;
label_560528:
    // 0x560528: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x560528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_56052c:
    // 0x56052c: 0xc7ad00a4  lwc1        $f13, 0xA4($sp)
    ctx->pc = 0x56052cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_560530:
    // 0x560530: 0xc7ae00a8  lwc1        $f14, 0xA8($sp)
    ctx->pc = 0x560530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_560534:
    // 0x560534: 0xc04cbd8  jal         func_132F60
label_560538:
    if (ctx->pc == 0x560538u) {
        ctx->pc = 0x560538u;
            // 0x560538: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x56053Cu;
        goto label_56053c;
    }
    ctx->pc = 0x560534u;
    SET_GPR_U32(ctx, 31, 0x56053Cu);
    ctx->pc = 0x560538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560534u;
            // 0x560538: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56053Cu; }
        if (ctx->pc != 0x56053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56053Cu; }
        if (ctx->pc != 0x56053Cu) { return; }
    }
    ctx->pc = 0x56053Cu;
label_56053c:
    // 0x56053c: 0x86020154  lh          $v0, 0x154($s0)
    ctx->pc = 0x56053cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 340)));
label_560540:
    // 0x560540: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
label_560544:
    if (ctx->pc == 0x560544u) {
        ctx->pc = 0x560548u;
        goto label_560548;
    }
    ctx->pc = 0x560540u;
    {
        const bool branch_taken_0x560540 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x560540) {
            ctx->pc = 0x56056Cu;
            goto label_56056c;
        }
    }
    ctx->pc = 0x560548u;
label_560548:
    // 0x560548: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x560548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_56054c:
    // 0x56054c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x56054cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_560550:
    // 0x560550: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x560550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_560554:
    // 0x560554: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x560554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_560558:
    // 0x560558: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x560558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_56055c:
    // 0x56055c: 0xc0b82c4  jal         func_2E0B10
label_560560:
    if (ctx->pc == 0x560560u) {
        ctx->pc = 0x560560u;
            // 0x560560: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x560564u;
        goto label_560564;
    }
    ctx->pc = 0x56055Cu;
    SET_GPR_U32(ctx, 31, 0x560564u);
    ctx->pc = 0x560560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56055Cu;
            // 0x560560: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560564u; }
        if (ctx->pc != 0x560564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560564u; }
        if (ctx->pc != 0x560564u) { return; }
    }
    ctx->pc = 0x560564u;
label_560564:
    // 0x560564: 0x1000000d  b           . + 4 + (0xD << 2)
label_560568:
    if (ctx->pc == 0x560568u) {
        ctx->pc = 0x560568u;
            // 0x560568: 0x96020156  lhu         $v0, 0x156($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 342)));
        ctx->pc = 0x56056Cu;
        goto label_56056c;
    }
    ctx->pc = 0x560564u;
    {
        const bool branch_taken_0x560564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x560568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560564u;
            // 0x560568: 0x96020156  lhu         $v0, 0x156($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 342)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x560564) {
            ctx->pc = 0x56059Cu;
            goto label_56059c;
        }
    }
    ctx->pc = 0x56056Cu;
label_56056c:
    // 0x56056c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x56056cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_560570:
    // 0x560570: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x560570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_560574:
    // 0x560574: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x560574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_560578:
    // 0x560578: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x560578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_56057c:
    // 0x56057c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x56057cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_560580:
    // 0x560580: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x560580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_560584:
    // 0x560584: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x560584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_560588:
    // 0x560588: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x560588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_56058c:
    // 0x56058c: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x56058cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_560590:
    // 0x560590: 0xc0b884c  jal         func_2E2130
label_560594:
    if (ctx->pc == 0x560594u) {
        ctx->pc = 0x560594u;
            // 0x560594: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x560598u;
        goto label_560598;
    }
    ctx->pc = 0x560590u;
    SET_GPR_U32(ctx, 31, 0x560598u);
    ctx->pc = 0x560594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560590u;
            // 0x560594: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (runtime->hasFunction(0x2E2130u)) {
        auto targetFn = runtime->lookupFunction(0x2E2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560598u; }
        if (ctx->pc != 0x560598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2130_0x2e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560598u; }
        if (ctx->pc != 0x560598u) { return; }
    }
    ctx->pc = 0x560598u;
label_560598:
    // 0x560598: 0x96020156  lhu         $v0, 0x156($s0)
    ctx->pc = 0x560598u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 342)));
label_56059c:
    // 0x56059c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_5605a0:
    if (ctx->pc == 0x5605A0u) {
        ctx->pc = 0x5605A4u;
        goto label_5605a4;
    }
    ctx->pc = 0x56059Cu;
    {
        const bool branch_taken_0x56059c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x56059c) {
            ctx->pc = 0x5605CCu;
            goto label_5605cc;
        }
    }
    ctx->pc = 0x5605A4u;
label_5605a4:
    // 0x5605a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x5605a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_5605a8:
    // 0x5605a8: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x5605a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_5605ac:
    // 0x5605ac: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x5605acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_5605b0:
    // 0x5605b0: 0xc0b82c4  jal         func_2E0B10
label_5605b4:
    if (ctx->pc == 0x5605B4u) {
        ctx->pc = 0x5605B4u;
            // 0x5605b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5605B8u;
        goto label_5605b8;
    }
    ctx->pc = 0x5605B0u;
    SET_GPR_U32(ctx, 31, 0x5605B8u);
    ctx->pc = 0x5605B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5605B0u;
            // 0x5605b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5605B8u; }
        if (ctx->pc != 0x5605B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5605B8u; }
        if (ctx->pc != 0x5605B8u) { return; }
    }
    ctx->pc = 0x5605B8u;
label_5605b8:
    // 0x5605b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5605b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5605bc:
    // 0x5605bc: 0xc157ee4  jal         func_55FB90
label_5605c0:
    if (ctx->pc == 0x5605C0u) {
        ctx->pc = 0x5605C0u;
            // 0x5605c0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x5605C4u;
        goto label_5605c4;
    }
    ctx->pc = 0x5605BCu;
    SET_GPR_U32(ctx, 31, 0x5605C4u);
    ctx->pc = 0x5605C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5605BCu;
            // 0x5605c0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55FB90u;
    if (runtime->hasFunction(0x55FB90u)) {
        auto targetFn = runtime->lookupFunction(0x55FB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5605C4u; }
        if (ctx->pc != 0x5605C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055FB90_0x55fb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5605C4u; }
        if (ctx->pc != 0x5605C4u) { return; }
    }
    ctx->pc = 0x5605C4u;
label_5605c4:
    // 0x5605c4: 0x10000019  b           . + 4 + (0x19 << 2)
label_5605c8:
    if (ctx->pc == 0x5605C8u) {
        ctx->pc = 0x5605CCu;
        goto label_5605cc;
    }
    ctx->pc = 0x5605C4u;
    {
        const bool branch_taken_0x5605c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5605c4) {
            ctx->pc = 0x56062Cu;
            goto label_56062c;
        }
    }
    ctx->pc = 0x5605CCu;
label_5605cc:
    // 0x5605cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5605ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5605d0:
    // 0x5605d0: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x5605d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_5605d4:
    // 0x5605d4: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x5605d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_5605d8:
    // 0x5605d8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x5605d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_5605dc:
    // 0x5605dc: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x5605dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5605e0:
    // 0x5605e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x5605e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5605e4:
    // 0x5605e4: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x5605e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_5605e8:
    // 0x5605e8: 0xc0b838c  jal         func_2E0E30
label_5605ec:
    if (ctx->pc == 0x5605ECu) {
        ctx->pc = 0x5605ECu;
            // 0x5605ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x5605F0u;
        goto label_5605f0;
    }
    ctx->pc = 0x5605E8u;
    SET_GPR_U32(ctx, 31, 0x5605F0u);
    ctx->pc = 0x5605ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5605E8u;
            // 0x5605ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E30u;
    if (runtime->hasFunction(0x2E0E30u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5605F0u; }
        if (ctx->pc != 0x5605F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E30_0x2e0e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5605F0u; }
        if (ctx->pc != 0x5605F0u) { return; }
    }
    ctx->pc = 0x5605F0u;
label_5605f0:
    // 0x5605f0: 0x86020154  lh          $v0, 0x154($s0)
    ctx->pc = 0x5605f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 340)));
label_5605f4:
    // 0x5605f4: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
label_5605f8:
    if (ctx->pc == 0x5605F8u) {
        ctx->pc = 0x5605F8u;
            // 0x5605f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x5605FCu;
        goto label_5605fc;
    }
    ctx->pc = 0x5605F4u;
    {
        const bool branch_taken_0x5605f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x5605f4) {
            ctx->pc = 0x5605F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5605F4u;
            // 0x5605f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x560610u;
            goto label_560610;
        }
    }
    ctx->pc = 0x5605FCu;
label_5605fc:
    // 0x5605fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5605fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_560600:
    // 0x560600: 0xc157f48  jal         func_55FD20
label_560604:
    if (ctx->pc == 0x560604u) {
        ctx->pc = 0x560604u;
            // 0x560604: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x560608u;
        goto label_560608;
    }
    ctx->pc = 0x560600u;
    SET_GPR_U32(ctx, 31, 0x560608u);
    ctx->pc = 0x560604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560600u;
            // 0x560604: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55FD20u;
    if (runtime->hasFunction(0x55FD20u)) {
        auto targetFn = runtime->lookupFunction(0x55FD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560608u; }
        if (ctx->pc != 0x560608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055FD20_0x55fd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560608u; }
        if (ctx->pc != 0x560608u) { return; }
    }
    ctx->pc = 0x560608u;
label_560608:
    // 0x560608: 0x10000008  b           . + 4 + (0x8 << 2)
label_56060c:
    if (ctx->pc == 0x56060Cu) {
        ctx->pc = 0x560610u;
        goto label_560610;
    }
    ctx->pc = 0x560608u;
    {
        const bool branch_taken_0x560608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x560608) {
            ctx->pc = 0x56062Cu;
            goto label_56062c;
        }
    }
    ctx->pc = 0x560610u;
label_560610:
    // 0x560610: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x560610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_560614:
    // 0x560614: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x560614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_560618:
    // 0x560618: 0xc0b82c4  jal         func_2E0B10
label_56061c:
    if (ctx->pc == 0x56061Cu) {
        ctx->pc = 0x56061Cu;
            // 0x56061c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560620u;
        goto label_560620;
    }
    ctx->pc = 0x560618u;
    SET_GPR_U32(ctx, 31, 0x560620u);
    ctx->pc = 0x56061Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560618u;
            // 0x56061c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560620u; }
        if (ctx->pc != 0x560620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560620u; }
        if (ctx->pc != 0x560620u) { return; }
    }
    ctx->pc = 0x560620u;
label_560620:
    // 0x560620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x560620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_560624:
    // 0x560624: 0xc157ee4  jal         func_55FB90
label_560628:
    if (ctx->pc == 0x560628u) {
        ctx->pc = 0x560628u;
            // 0x560628: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x56062Cu;
        goto label_56062c;
    }
    ctx->pc = 0x560624u;
    SET_GPR_U32(ctx, 31, 0x56062Cu);
    ctx->pc = 0x560628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560624u;
            // 0x560628: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55FB90u;
    if (runtime->hasFunction(0x55FB90u)) {
        auto targetFn = runtime->lookupFunction(0x55FB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56062Cu; }
        if (ctx->pc != 0x56062Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055FB90_0x55fb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56062Cu; }
        if (ctx->pc != 0x56062Cu) { return; }
    }
    ctx->pc = 0x56062Cu;
label_56062c:
    // 0x56062c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56062cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_560630:
    // 0x560630: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x560630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_560634:
    // 0x560634: 0xc6000168  lwc1        $f0, 0x168($s0)
    ctx->pc = 0x560634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_560638:
    // 0x560638: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x560638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_56063c:
    // 0x56063c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x56063cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_560640:
    // 0x560640: 0xe6010168  swc1        $f1, 0x168($s0)
    ctx->pc = 0x560640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
label_560644:
    // 0x560644: 0xc600016c  lwc1        $f0, 0x16C($s0)
    ctx->pc = 0x560644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_560648:
    // 0x560648: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x560648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_56064c:
    // 0x56064c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_560650:
    if (ctx->pc == 0x560650u) {
        ctx->pc = 0x560654u;
        goto label_560654;
    }
    ctx->pc = 0x56064Cu;
    {
        const bool branch_taken_0x56064c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x56064c) {
            ctx->pc = 0x560658u;
            goto label_560658;
        }
    }
    ctx->pc = 0x560654u;
label_560654:
    // 0x560654: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x560654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
label_560658:
    // 0x560658: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x560658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_56065c:
    // 0x56065c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x56065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_560660:
    // 0x560660: 0xc6010164  lwc1        $f1, 0x164($s0)
    ctx->pc = 0x560660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_560664:
    // 0x560664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x560664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_560668:
    // 0x560668: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x560668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_56066c:
    // 0x56066c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x56066cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_560670:
    // 0x560670: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x560670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_560674:
    // 0x560674: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_560678:
    if (ctx->pc == 0x560678u) {
        ctx->pc = 0x560678u;
            // 0x560678: 0xe6010164  swc1        $f1, 0x164($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
        ctx->pc = 0x56067Cu;
        goto label_56067c;
    }
    ctx->pc = 0x560674u;
    {
        const bool branch_taken_0x560674 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x560678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560674u;
            // 0x560678: 0xe6010164  swc1        $f1, 0x164($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x560674) {
            ctx->pc = 0x560738u;
            goto label_560738;
        }
    }
    ctx->pc = 0x56067Cu;
label_56067c:
    // 0x56067c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x56067cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_560680:
    // 0x560680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x560680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_560684:
    // 0x560684: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x560684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_560688:
    // 0x560688: 0xa20200d8  sb          $v0, 0xD8($s0)
    ctx->pc = 0x560688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 2));
label_56068c:
    // 0x56068c: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x56068cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_560690:
    // 0x560690: 0xc088b74  jal         func_222DD0
label_560694:
    if (ctx->pc == 0x560694u) {
        ctx->pc = 0x560694u;
            // 0x560694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560698u;
        goto label_560698;
    }
    ctx->pc = 0x560690u;
    SET_GPR_U32(ctx, 31, 0x560698u);
    ctx->pc = 0x560694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560690u;
            // 0x560694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560698u; }
        if (ctx->pc != 0x560698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560698u; }
        if (ctx->pc != 0x560698u) { return; }
    }
    ctx->pc = 0x560698u;
label_560698:
    // 0x560698: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x560698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_56069c:
    // 0x56069c: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x56069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_5606a0:
    // 0x5606a0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x5606a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_5606a4:
    // 0x5606a4: 0x320f809  jalr        $t9
label_5606a8:
    if (ctx->pc == 0x5606A8u) {
        ctx->pc = 0x5606A8u;
            // 0x5606a8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x5606ACu;
        goto label_5606ac;
    }
    ctx->pc = 0x5606A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5606ACu);
        ctx->pc = 0x5606A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5606A4u;
            // 0x5606a8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5606ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5606ACu; }
            if (ctx->pc != 0x5606ACu) { return; }
        }
        }
    }
    ctx->pc = 0x5606ACu;
label_5606ac:
    // 0x5606ac: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x5606acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_5606b0:
    // 0x5606b0: 0xc088b74  jal         func_222DD0
label_5606b4:
    if (ctx->pc == 0x5606B4u) {
        ctx->pc = 0x5606B4u;
            // 0x5606b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5606B8u;
        goto label_5606b8;
    }
    ctx->pc = 0x5606B0u;
    SET_GPR_U32(ctx, 31, 0x5606B8u);
    ctx->pc = 0x5606B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5606B0u;
            // 0x5606b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5606B8u; }
        if (ctx->pc != 0x5606B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5606B8u; }
        if (ctx->pc != 0x5606B8u) { return; }
    }
    ctx->pc = 0x5606B8u;
label_5606b8:
    // 0x5606b8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x5606b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_5606bc:
    // 0x5606bc: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x5606bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_5606c0:
    // 0x5606c0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x5606c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_5606c4:
    // 0x5606c4: 0x320f809  jalr        $t9
label_5606c8:
    if (ctx->pc == 0x5606C8u) {
        ctx->pc = 0x5606C8u;
            // 0x5606c8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x5606CCu;
        goto label_5606cc;
    }
    ctx->pc = 0x5606C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5606CCu);
        ctx->pc = 0x5606C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5606C4u;
            // 0x5606c8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5606CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5606CCu; }
            if (ctx->pc != 0x5606CCu) { return; }
        }
        }
    }
    ctx->pc = 0x5606CCu;
label_5606cc:
    // 0x5606cc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x5606ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_5606d0:
    // 0x5606d0: 0xac40015c  sw          $zero, 0x15C($v0)
    ctx->pc = 0x5606d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 0));
label_5606d4:
    // 0x5606d4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x5606d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_5606d8:
    // 0x5606d8: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x5606d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
label_5606dc:
    // 0x5606dc: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x5606dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
label_5606e0:
    // 0x5606e0: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x5606e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_5606e4:
    // 0x5606e4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x5606e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_5606e8:
    // 0x5606e8: 0x904200d8  lbu         $v0, 0xD8($v0)
    ctx->pc = 0x5606e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 216)));
label_5606ec:
    // 0x5606ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_5606f0:
    if (ctx->pc == 0x5606F0u) {
        ctx->pc = 0x5606F4u;
        goto label_5606f4;
    }
    ctx->pc = 0x5606ECu;
    {
        const bool branch_taken_0x5606ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5606ec) {
            ctx->pc = 0x560704u;
            goto label_560704;
        }
    }
    ctx->pc = 0x5606F4u;
label_5606f4:
    // 0x5606f4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5606f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5606f8:
    // 0x5606f8: 0x8c42b824  lw          $v0, -0x47DC($v0)
    ctx->pc = 0x5606f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948900)));
label_5606fc:
    // 0x5606fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_560700:
    if (ctx->pc == 0x560700u) {
        ctx->pc = 0x560700u;
            // 0x560700: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x560704u;
        goto label_560704;
    }
    ctx->pc = 0x5606FCu;
    {
        const bool branch_taken_0x5606fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x560700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5606FCu;
            // 0x560700: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5606fc) {
            ctx->pc = 0x560710u;
            goto label_560710;
        }
    }
    ctx->pc = 0x560704u;
label_560704:
    // 0x560704: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x560704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_560708:
    // 0x560708: 0x8c42b7f4  lw          $v0, -0x480C($v0)
    ctx->pc = 0x560708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948852)));
label_56070c:
    // 0x56070c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x56070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_560710:
    // 0x560710: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x560710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
label_560714:
    // 0x560714: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x560714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_560718:
    // 0x560718: 0xc122c5c  jal         func_48B170
label_56071c:
    if (ctx->pc == 0x56071Cu) {
        ctx->pc = 0x56071Cu;
            // 0x56071c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x560720u;
        goto label_560720;
    }
    ctx->pc = 0x560718u;
    SET_GPR_U32(ctx, 31, 0x560720u);
    ctx->pc = 0x56071Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560718u;
            // 0x56071c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560720u; }
        if (ctx->pc != 0x560720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560720u; }
        if (ctx->pc != 0x560720u) { return; }
    }
    ctx->pc = 0x560720u;
label_560720:
    // 0x560720: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x560720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_560724:
    // 0x560724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x560724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_560728:
    // 0x560728: 0xc122d2c  jal         func_48B4B0
label_56072c:
    if (ctx->pc == 0x56072Cu) {
        ctx->pc = 0x56072Cu;
            // 0x56072c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x560730u;
        goto label_560730;
    }
    ctx->pc = 0x560728u;
    SET_GPR_U32(ctx, 31, 0x560730u);
    ctx->pc = 0x56072Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560728u;
            // 0x56072c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560730u; }
        if (ctx->pc != 0x560730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560730u; }
        if (ctx->pc != 0x560730u) { return; }
    }
    ctx->pc = 0x560730u;
label_560730:
    // 0x560730: 0x1000008d  b           . + 4 + (0x8D << 2)
label_560734:
    if (ctx->pc == 0x560734u) {
        ctx->pc = 0x560738u;
        goto label_560738;
    }
    ctx->pc = 0x560730u;
    {
        const bool branch_taken_0x560730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x560730) {
            ctx->pc = 0x560968u;
            goto label_560968;
        }
    }
    ctx->pc = 0x560738u;
label_560738:
    // 0x560738: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x560738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_56073c:
    // 0x56073c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x56073cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_560740:
    // 0x560740: 0xc122d2c  jal         func_48B4B0
label_560744:
    if (ctx->pc == 0x560744u) {
        ctx->pc = 0x560744u;
            // 0x560744: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x560748u;
        goto label_560748;
    }
    ctx->pc = 0x560740u;
    SET_GPR_U32(ctx, 31, 0x560748u);
    ctx->pc = 0x560744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560740u;
            // 0x560744: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560748u; }
        if (ctx->pc != 0x560748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560748u; }
        if (ctx->pc != 0x560748u) { return; }
    }
    ctx->pc = 0x560748u;
label_560748:
    // 0x560748: 0x10000087  b           . + 4 + (0x87 << 2)
label_56074c:
    if (ctx->pc == 0x56074Cu) {
        ctx->pc = 0x560750u;
        goto label_560750;
    }
    ctx->pc = 0x560748u;
    {
        const bool branch_taken_0x560748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x560748) {
            ctx->pc = 0x560968u;
            goto label_560968;
        }
    }
    ctx->pc = 0x560750u;
label_560750:
    // 0x560750: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x560750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_560754:
    // 0x560754: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x560754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_560758:
    // 0x560758: 0xc6000168  lwc1        $f0, 0x168($s0)
    ctx->pc = 0x560758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_56075c:
    // 0x56075c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x56075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_560760:
    // 0x560760: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x560760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_560764:
    // 0x560764: 0xe6010168  swc1        $f1, 0x168($s0)
    ctx->pc = 0x560764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
label_560768:
    // 0x560768: 0xc600016c  lwc1        $f0, 0x16C($s0)
    ctx->pc = 0x560768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_56076c:
    // 0x56076c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x56076cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_560770:
    // 0x560770: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_560774:
    if (ctx->pc == 0x560774u) {
        ctx->pc = 0x560774u;
            // 0x560774: 0x3c023e4c  lui         $v0, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
        ctx->pc = 0x560778u;
        goto label_560778;
    }
    ctx->pc = 0x560770u;
    {
        const bool branch_taken_0x560770 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x560770) {
            ctx->pc = 0x560774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x560770u;
            // 0x560774: 0x3c023e4c  lui         $v0, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x560794u;
            goto label_560794;
        }
    }
    ctx->pc = 0x560778u;
label_560778:
    // 0x560778: 0xe6020168  swc1        $f2, 0x168($s0)
    ctx->pc = 0x560778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
label_56077c:
    // 0x56077c: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x56077cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_560780:
    // 0x560780: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x560780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_560784:
    // 0x560784: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x560784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_560788:
    // 0x560788: 0x320f809  jalr        $t9
label_56078c:
    if (ctx->pc == 0x56078Cu) {
        ctx->pc = 0x560790u;
        goto label_560790;
    }
    ctx->pc = 0x560788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x560790u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x560790u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x560790u; }
            if (ctx->pc != 0x560790u) { return; }
        }
        }
    }
    ctx->pc = 0x560790u;
label_560790:
    // 0x560790: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x560790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_560794:
    // 0x560794: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x560794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_560798:
    // 0x560798: 0xc6010174  lwc1        $f1, 0x174($s0)
    ctx->pc = 0x560798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_56079c:
    // 0x56079c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x56079cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5607a0:
    // 0x5607a0: 0x0  nop
    ctx->pc = 0x5607a0u;
    // NOP
label_5607a4:
    // 0x5607a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x5607a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5607a8:
    // 0x5607a8: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_5607ac:
    if (ctx->pc == 0x5607ACu) {
        ctx->pc = 0x5607ACu;
            // 0x5607ac: 0xc6010170  lwc1        $f1, 0x170($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x5607B0u;
        goto label_5607b0;
    }
    ctx->pc = 0x5607A8u;
    {
        const bool branch_taken_0x5607a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5607a8) {
            ctx->pc = 0x5607ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5607A8u;
            // 0x5607ac: 0xc6010170  lwc1        $f1, 0x170($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5607D8u;
            goto label_5607d8;
        }
    }
    ctx->pc = 0x5607B0u;
label_5607b0:
    // 0x5607b0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x5607b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_5607b4:
    // 0x5607b4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x5607b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_5607b8:
    // 0x5607b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5607b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5607bc:
    // 0x5607bc: 0x0  nop
    ctx->pc = 0x5607bcu;
    // NOP
label_5607c0:
    // 0x5607c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x5607c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_5607c4:
    // 0x5607c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5607c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5607c8:
    // 0x5607c8: 0x0  nop
    ctx->pc = 0x5607c8u;
    // NOP
label_5607cc:
    // 0x5607cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x5607ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_5607d0:
    // 0x5607d0: 0xe6000174  swc1        $f0, 0x174($s0)
    ctx->pc = 0x5607d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
label_5607d4:
    // 0x5607d4: 0xc6010170  lwc1        $f1, 0x170($s0)
    ctx->pc = 0x5607d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5607d8:
    // 0x5607d8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x5607d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_5607dc:
    // 0x5607dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5607dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5607e0:
    // 0x5607e0: 0x0  nop
    ctx->pc = 0x5607e0u;
    // NOP
label_5607e4:
    // 0x5607e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x5607e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5607e8:
    // 0x5607e8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_5607ec:
    if (ctx->pc == 0x5607ECu) {
        ctx->pc = 0x5607F0u;
        goto label_5607f0;
    }
    ctx->pc = 0x5607E8u;
    {
        const bool branch_taken_0x5607e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5607e8) {
            ctx->pc = 0x5607FCu;
            goto label_5607fc;
        }
    }
    ctx->pc = 0x5607F0u;
label_5607f0:
    // 0x5607f0: 0xc6000174  lwc1        $f0, 0x174($s0)
    ctx->pc = 0x5607f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5607f4:
    // 0x5607f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x5607f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_5607f8:
    // 0x5607f8: 0xe6000170  swc1        $f0, 0x170($s0)
    ctx->pc = 0x5607f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
label_5607fc:
    // 0x5607fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5607fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_560800:
    // 0x560800: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x560800u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_560804:
    // 0x560804: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x560804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_560808:
    // 0x560808: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x560808u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56080c:
    // 0x56080c: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x56080cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_560810:
    // 0x560810: 0x8c51077c  lw          $s1, 0x77C($v0)
    ctx->pc = 0x560810u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_560814:
    // 0x560814: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x560814u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_560818:
    // 0x560818: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x560818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_56081c:
    // 0x56081c: 0xc04cc1c  jal         func_133070
label_560820:
    if (ctx->pc == 0x560820u) {
        ctx->pc = 0x560820u;
            // 0x560820: 0x266402c0  addiu       $a0, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->pc = 0x560824u;
        goto label_560824;
    }
    ctx->pc = 0x56081Cu;
    SET_GPR_U32(ctx, 31, 0x560824u);
    ctx->pc = 0x560820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56081Cu;
            // 0x560820: 0x266402c0  addiu       $a0, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560824u; }
        if (ctx->pc != 0x560824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560824u; }
        if (ctx->pc != 0x560824u) { return; }
    }
    ctx->pc = 0x560824u;
label_560824:
    // 0x560824: 0xc6010170  lwc1        $f1, 0x170($s0)
    ctx->pc = 0x560824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_560828:
    // 0x560828: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x560828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_56082c:
    // 0x56082c: 0x45010034  bc1t        . + 4 + (0x34 << 2)
label_560830:
    if (ctx->pc == 0x560830u) {
        ctx->pc = 0x560834u;
        goto label_560834;
    }
    ctx->pc = 0x56082Cu;
    {
        const bool branch_taken_0x56082c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x56082c) {
            ctx->pc = 0x560900u;
            goto label_560900;
        }
    }
    ctx->pc = 0x560834u;
label_560834:
    // 0x560834: 0x8e630db0  lw          $v1, 0xDB0($s3)
    ctx->pc = 0x560834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3504)));
label_560838:
    // 0x560838: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x560838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_56083c:
    // 0x56083c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_560840:
    if (ctx->pc == 0x560840u) {
        ctx->pc = 0x560844u;
        goto label_560844;
    }
    ctx->pc = 0x56083Cu;
    {
        const bool branch_taken_0x56083c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x56083c) {
            ctx->pc = 0x5608C8u;
            goto label_5608c8;
        }
    }
    ctx->pc = 0x560844u;
label_560844:
    // 0x560844: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x560844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_560848:
    // 0x560848: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_56084c:
    if (ctx->pc == 0x56084Cu) {
        ctx->pc = 0x560850u;
        goto label_560850;
    }
    ctx->pc = 0x560848u;
    {
        const bool branch_taken_0x560848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x560848) {
            ctx->pc = 0x5608C8u;
            goto label_5608c8;
        }
    }
    ctx->pc = 0x560850u;
label_560850:
    // 0x560850: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x560850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_560854:
    // 0x560854: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_560858:
    if (ctx->pc == 0x560858u) {
        ctx->pc = 0x56085Cu;
        goto label_56085c;
    }
    ctx->pc = 0x560854u;
    {
        const bool branch_taken_0x560854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x560854) {
            ctx->pc = 0x5608C8u;
            goto label_5608c8;
        }
    }
    ctx->pc = 0x56085Cu;
label_56085c:
    // 0x56085c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x56085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_560860:
    // 0x560860: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_560864:
    if (ctx->pc == 0x560864u) {
        ctx->pc = 0x560868u;
        goto label_560868;
    }
    ctx->pc = 0x560860u;
    {
        const bool branch_taken_0x560860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x560860) {
            ctx->pc = 0x5608C8u;
            goto label_5608c8;
        }
    }
    ctx->pc = 0x560868u;
label_560868:
    // 0x560868: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x560868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_56086c:
    // 0x56086c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_560870:
    if (ctx->pc == 0x560870u) {
        ctx->pc = 0x560874u;
        goto label_560874;
    }
    ctx->pc = 0x56086Cu;
    {
        const bool branch_taken_0x56086c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x56086c) {
            ctx->pc = 0x5608C8u;
            goto label_5608c8;
        }
    }
    ctx->pc = 0x560874u;
label_560874:
    // 0x560874: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x560874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_560878:
    // 0x560878: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_56087c:
    if (ctx->pc == 0x56087Cu) {
        ctx->pc = 0x560880u;
        goto label_560880;
    }
    ctx->pc = 0x560878u;
    {
        const bool branch_taken_0x560878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x560878) {
            ctx->pc = 0x5608C8u;
            goto label_5608c8;
        }
    }
    ctx->pc = 0x560880u;
label_560880:
    // 0x560880: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x560880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_560884:
    // 0x560884: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_560888:
    if (ctx->pc == 0x560888u) {
        ctx->pc = 0x56088Cu;
        goto label_56088c;
    }
    ctx->pc = 0x560884u;
    {
        const bool branch_taken_0x560884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x560884) {
            ctx->pc = 0x5608C8u;
            goto label_5608c8;
        }
    }
    ctx->pc = 0x56088Cu;
label_56088c:
    // 0x56088c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x56088cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_560890:
    // 0x560890: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_560894:
    if (ctx->pc == 0x560894u) {
        ctx->pc = 0x560898u;
        goto label_560898;
    }
    ctx->pc = 0x560890u;
    {
        const bool branch_taken_0x560890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x560890) {
            ctx->pc = 0x5608C8u;
            goto label_5608c8;
        }
    }
    ctx->pc = 0x560898u;
label_560898:
    // 0x560898: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x560898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_56089c:
    // 0x56089c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_5608a0:
    if (ctx->pc == 0x5608A0u) {
        ctx->pc = 0x5608A4u;
        goto label_5608a4;
    }
    ctx->pc = 0x56089Cu;
    {
        const bool branch_taken_0x56089c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x56089c) {
            ctx->pc = 0x5608C8u;
            goto label_5608c8;
        }
    }
    ctx->pc = 0x5608A4u;
label_5608a4:
    // 0x5608a4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x5608a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_5608a8:
    // 0x5608a8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_5608ac:
    if (ctx->pc == 0x5608ACu) {
        ctx->pc = 0x5608B0u;
        goto label_5608b0;
    }
    ctx->pc = 0x5608A8u;
    {
        const bool branch_taken_0x5608a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5608a8) {
            ctx->pc = 0x5608C8u;
            goto label_5608c8;
        }
    }
    ctx->pc = 0x5608B0u;
label_5608b0:
    // 0x5608b0: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x5608b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_5608b4:
    // 0x5608b4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_5608b8:
    if (ctx->pc == 0x5608B8u) {
        ctx->pc = 0x5608BCu;
        goto label_5608bc;
    }
    ctx->pc = 0x5608B4u;
    {
        const bool branch_taken_0x5608b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5608b4) {
            ctx->pc = 0x5608C8u;
            goto label_5608c8;
        }
    }
    ctx->pc = 0x5608BCu;
label_5608bc:
    // 0x5608bc: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x5608bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_5608c0:
    // 0x5608c0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_5608c4:
    if (ctx->pc == 0x5608C4u) {
        ctx->pc = 0x5608C8u;
        goto label_5608c8;
    }
    ctx->pc = 0x5608C0u;
    {
        const bool branch_taken_0x5608c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x5608c0) {
            ctx->pc = 0x560900u;
            goto label_560900;
        }
    }
    ctx->pc = 0x5608C8u;
label_5608c8:
    // 0x5608c8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5608c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5608cc:
    // 0x5608cc: 0x8e640da0  lw          $a0, 0xDA0($s3)
    ctx->pc = 0x5608ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3488)));
label_5608d0:
    // 0x5608d0: 0x8c43dca0  lw          $v1, -0x2360($v0)
    ctx->pc = 0x5608d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958240)));
label_5608d4:
    // 0x5608d4: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x5608d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_5608d8:
    // 0x5608d8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x5608d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_5608dc:
    // 0x5608dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x5608dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_5608e0:
    // 0x5608e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_5608e4:
    if (ctx->pc == 0x5608E4u) {
        ctx->pc = 0x5608E8u;
        goto label_5608e8;
    }
    ctx->pc = 0x5608E0u;
    {
        const bool branch_taken_0x5608e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5608e0) {
            ctx->pc = 0x560900u;
            goto label_560900;
        }
    }
    ctx->pc = 0x5608E8u;
label_5608e8:
    // 0x5608e8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x5608e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_5608ec:
    // 0x5608ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5608ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5608f0:
    // 0x5608f0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x5608f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_5608f4:
    // 0x5608f4: 0x320f809  jalr        $t9
label_5608f8:
    if (ctx->pc == 0x5608F8u) {
        ctx->pc = 0x5608F8u;
            // 0x5608f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5608FCu;
        goto label_5608fc;
    }
    ctx->pc = 0x5608F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5608FCu);
        ctx->pc = 0x5608F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5608F4u;
            // 0x5608f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5608FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5608FCu; }
            if (ctx->pc != 0x5608FCu) { return; }
        }
        }
    }
    ctx->pc = 0x5608FCu;
label_5608fc:
    // 0x5608fc: 0x0  nop
    ctx->pc = 0x5608fcu;
    // NOP
label_560900:
    // 0x560900: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x560900u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_560904:
    // 0x560904: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x560904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_560908:
    // 0x560908: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
label_56090c:
    if (ctx->pc == 0x56090Cu) {
        ctx->pc = 0x56090Cu;
            // 0x56090c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x560910u;
        goto label_560910;
    }
    ctx->pc = 0x560908u;
    {
        const bool branch_taken_0x560908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x56090Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560908u;
            // 0x56090c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x560908) {
            ctx->pc = 0x560814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_560814;
        }
    }
    ctx->pc = 0x560910u;
label_560910:
    // 0x560910: 0xc157dac  jal         func_55F6B0
label_560914:
    if (ctx->pc == 0x560914u) {
        ctx->pc = 0x560914u;
            // 0x560914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560918u;
        goto label_560918;
    }
    ctx->pc = 0x560910u;
    SET_GPR_U32(ctx, 31, 0x560918u);
    ctx->pc = 0x560914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560910u;
            // 0x560914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55F6B0u;
    if (runtime->hasFunction(0x55F6B0u)) {
        auto targetFn = runtime->lookupFunction(0x55F6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560918u; }
        if (ctx->pc != 0x560918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055F6B0_0x55f6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560918u; }
        if (ctx->pc != 0x560918u) { return; }
    }
    ctx->pc = 0x560918u;
label_560918:
    // 0x560918: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x560918u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_56091c:
    // 0x56091c: 0xc088b74  jal         func_222DD0
label_560920:
    if (ctx->pc == 0x560920u) {
        ctx->pc = 0x560920u;
            // 0x560920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560924u;
        goto label_560924;
    }
    ctx->pc = 0x56091Cu;
    SET_GPR_U32(ctx, 31, 0x560924u);
    ctx->pc = 0x560920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56091Cu;
            // 0x560920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560924u; }
        if (ctx->pc != 0x560924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560924u; }
        if (ctx->pc != 0x560924u) { return; }
    }
    ctx->pc = 0x560924u;
label_560924:
    // 0x560924: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x560924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_560928:
    // 0x560928: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x560928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_56092c:
    // 0x56092c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x56092cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_560930:
    // 0x560930: 0x320f809  jalr        $t9
label_560934:
    if (ctx->pc == 0x560934u) {
        ctx->pc = 0x560934u;
            // 0x560934: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x560938u;
        goto label_560938;
    }
    ctx->pc = 0x560930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x560938u);
        ctx->pc = 0x560934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560930u;
            // 0x560934: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x560938u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x560938u; }
            if (ctx->pc != 0x560938u) { return; }
        }
        }
    }
    ctx->pc = 0x560938u;
label_560938:
    // 0x560938: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x560938u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_56093c:
    // 0x56093c: 0xc088b74  jal         func_222DD0
label_560940:
    if (ctx->pc == 0x560940u) {
        ctx->pc = 0x560940u;
            // 0x560940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560944u;
        goto label_560944;
    }
    ctx->pc = 0x56093Cu;
    SET_GPR_U32(ctx, 31, 0x560944u);
    ctx->pc = 0x560940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56093Cu;
            // 0x560940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560944u; }
        if (ctx->pc != 0x560944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560944u; }
        if (ctx->pc != 0x560944u) { return; }
    }
    ctx->pc = 0x560944u;
label_560944:
    // 0x560944: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x560944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_560948:
    // 0x560948: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x560948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_56094c:
    // 0x56094c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x56094cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_560950:
    // 0x560950: 0x320f809  jalr        $t9
label_560954:
    if (ctx->pc == 0x560954u) {
        ctx->pc = 0x560954u;
            // 0x560954: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x560958u;
        goto label_560958;
    }
    ctx->pc = 0x560950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x560958u);
        ctx->pc = 0x560954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560950u;
            // 0x560954: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x560958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x560958u; }
            if (ctx->pc != 0x560958u) { return; }
        }
        }
    }
    ctx->pc = 0x560958u;
label_560958:
    // 0x560958: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x560958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_56095c:
    // 0x56095c: 0xac40015c  sw          $zero, 0x15C($v0)
    ctx->pc = 0x56095cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 0));
label_560960:
    // 0x560960: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x560960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_560964:
    // 0x560964: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x560964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
label_560968:
    // 0x560968: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x560968u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_56096c:
    // 0x56096c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x56096cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_560970:
    // 0x560970: 0xc0dc9bc  jal         func_3726F0
label_560974:
    if (ctx->pc == 0x560974u) {
        ctx->pc = 0x560974u;
            // 0x560974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560978u;
        goto label_560978;
    }
    ctx->pc = 0x560970u;
    SET_GPR_U32(ctx, 31, 0x560978u);
    ctx->pc = 0x560974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560970u;
            // 0x560974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560978u; }
        if (ctx->pc != 0x560978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560978u; }
        if (ctx->pc != 0x560978u) { return; }
    }
    ctx->pc = 0x560978u;
label_560978:
    // 0x560978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x560978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_56097c:
    // 0x56097c: 0xc0dc9a0  jal         func_372680
label_560980:
    if (ctx->pc == 0x560980u) {
        ctx->pc = 0x560980u;
            // 0x560980: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x560984u;
        goto label_560984;
    }
    ctx->pc = 0x56097Cu;
    SET_GPR_U32(ctx, 31, 0x560984u);
    ctx->pc = 0x560980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56097Cu;
            // 0x560980: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560984u; }
        if (ctx->pc != 0x560984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560984u; }
        if (ctx->pc != 0x560984u) { return; }
    }
    ctx->pc = 0x560984u;
label_560984:
    // 0x560984: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x560984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_560988:
    // 0x560988: 0xc04cc04  jal         func_133010
label_56098c:
    if (ctx->pc == 0x56098Cu) {
        ctx->pc = 0x56098Cu;
            // 0x56098c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x560990u;
        goto label_560990;
    }
    ctx->pc = 0x560988u;
    SET_GPR_U32(ctx, 31, 0x560990u);
    ctx->pc = 0x56098Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560988u;
            // 0x56098c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560990u; }
        if (ctx->pc != 0x560990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560990u; }
        if (ctx->pc != 0x560990u) { return; }
    }
    ctx->pc = 0x560990u;
label_560990:
    // 0x560990: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x560990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_560994:
    // 0x560994: 0xc04c720  jal         func_131C80
label_560998:
    if (ctx->pc == 0x560998u) {
        ctx->pc = 0x560998u;
            // 0x560998: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x56099Cu;
        goto label_56099c;
    }
    ctx->pc = 0x560994u;
    SET_GPR_U32(ctx, 31, 0x56099Cu);
    ctx->pc = 0x560998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560994u;
            // 0x560998: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56099Cu; }
        if (ctx->pc != 0x56099Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56099Cu; }
        if (ctx->pc != 0x56099Cu) { return; }
    }
    ctx->pc = 0x56099Cu;
label_56099c:
    // 0x56099c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x56099cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_5609a0:
    // 0x5609a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5609a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5609a4:
    // 0x5609a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x5609a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5609a8:
    // 0x5609a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5609a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5609ac:
    // 0x5609ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x5609acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5609b0:
    // 0x5609b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5609b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5609b4:
    // 0x5609b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5609b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5609b8:
    // 0x5609b8: 0x3e00008  jr          $ra
label_5609bc:
    if (ctx->pc == 0x5609BCu) {
        ctx->pc = 0x5609BCu;
            // 0x5609bc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x5609C0u;
        goto label_5609c0;
    }
    ctx->pc = 0x5609B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5609BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5609B8u;
            // 0x5609bc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5609C0u;
label_5609c0:
    // 0x5609c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5609c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5609c4:
    // 0x5609c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5609c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5609c8:
    // 0x5609c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5609c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5609cc:
    // 0x5609cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5609ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5609d0:
    // 0x5609d0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x5609d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_5609d4:
    // 0x5609d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5609d8:
    if (ctx->pc == 0x5609D8u) {
        ctx->pc = 0x5609D8u;
            // 0x5609d8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x5609DCu;
        goto label_5609dc;
    }
    ctx->pc = 0x5609D4u;
    {
        const bool branch_taken_0x5609d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5609d4) {
            ctx->pc = 0x5609D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5609D4u;
            // 0x5609d8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5609F0u;
            goto label_5609f0;
        }
    }
    ctx->pc = 0x5609DCu;
label_5609dc:
    // 0x5609dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5609dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5609e0:
    // 0x5609e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5609e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5609e4:
    // 0x5609e4: 0x320f809  jalr        $t9
label_5609e8:
    if (ctx->pc == 0x5609E8u) {
        ctx->pc = 0x5609E8u;
            // 0x5609e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5609ECu;
        goto label_5609ec;
    }
    ctx->pc = 0x5609E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5609ECu);
        ctx->pc = 0x5609E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5609E4u;
            // 0x5609e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5609ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5609ECu; }
            if (ctx->pc != 0x5609ECu) { return; }
        }
        }
    }
    ctx->pc = 0x5609ECu;
label_5609ec:
    // 0x5609ec: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x5609ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_5609f0:
    // 0x5609f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5609f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5609f4:
    // 0x5609f4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x5609f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_5609f8:
    // 0x5609f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x5609f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_5609fc:
    // 0x5609fc: 0xc08c8fc  jal         func_2323F0
label_560a00:
    if (ctx->pc == 0x560A00u) {
        ctx->pc = 0x560A00u;
            // 0x560a00: 0x8e0500dc  lw          $a1, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->pc = 0x560A04u;
        goto label_560a04;
    }
    ctx->pc = 0x5609FCu;
    SET_GPR_U32(ctx, 31, 0x560A04u);
    ctx->pc = 0x560A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5609FCu;
            // 0x560a00: 0x8e0500dc  lw          $a1, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560A04u; }
        if (ctx->pc != 0x560A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560A04u; }
        if (ctx->pc != 0x560A04u) { return; }
    }
    ctx->pc = 0x560A04u;
label_560a04:
    // 0x560a04: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x560a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_560a08:
    // 0x560a08: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x560a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_560a0c:
    // 0x560a0c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_560a10:
    if (ctx->pc == 0x560A10u) {
        ctx->pc = 0x560A10u;
            // 0x560a10: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->pc = 0x560A14u;
        goto label_560a14;
    }
    ctx->pc = 0x560A0Cu;
    {
        const bool branch_taken_0x560a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x560a0c) {
            ctx->pc = 0x560A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x560A0Cu;
            // 0x560a10: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x560A28u;
            goto label_560a28;
        }
    }
    ctx->pc = 0x560A14u;
label_560a14:
    // 0x560a14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x560a14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_560a18:
    // 0x560a18: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x560a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_560a1c:
    // 0x560a1c: 0x320f809  jalr        $t9
label_560a20:
    if (ctx->pc == 0x560A20u) {
        ctx->pc = 0x560A20u;
            // 0x560a20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x560A24u;
        goto label_560a24;
    }
    ctx->pc = 0x560A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x560A24u);
        ctx->pc = 0x560A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560A1Cu;
            // 0x560a20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x560A24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x560A24u; }
            if (ctx->pc != 0x560A24u) { return; }
        }
        }
    }
    ctx->pc = 0x560A24u;
label_560a24:
    // 0x560a24: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x560a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_560a28:
    // 0x560a28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x560a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_560a2c:
    // 0x560a2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x560a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_560a30:
    // 0x560a30: 0x3e00008  jr          $ra
label_560a34:
    if (ctx->pc == 0x560A34u) {
        ctx->pc = 0x560A34u;
            // 0x560a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x560A38u;
        goto label_560a38;
    }
    ctx->pc = 0x560A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x560A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560A30u;
            // 0x560a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x560A38u;
label_560a38:
    // 0x560a38: 0x0  nop
    ctx->pc = 0x560a38u;
    // NOP
label_560a3c:
    // 0x560a3c: 0x0  nop
    ctx->pc = 0x560a3cu;
    // NOP
label_560a40:
    // 0x560a40: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x560a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_560a44:
    // 0x560a44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x560a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_560a48:
    // 0x560a48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x560a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_560a4c:
    // 0x560a4c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x560a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_560a50:
    // 0x560a50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x560a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_560a54:
    // 0x560a54: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x560a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_560a58:
    // 0x560a58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x560a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_560a5c:
    // 0x560a5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x560a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_560a60:
    // 0x560a60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x560a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_560a64:
    // 0x560a64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x560a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_560a68:
    // 0x560a68: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x560a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_560a6c:
    // 0x560a6c: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x560a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_560a70:
    // 0x560a70: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x560a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_560a74:
    // 0x560a74: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x560a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_560a78:
    // 0x560a78: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x560a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_560a7c:
    // 0x560a7c: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x560a7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_560a80:
    // 0x560a80: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x560a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
label_560a84:
    // 0x560a84: 0xc0a7a88  jal         func_29EA20
label_560a88:
    if (ctx->pc == 0x560A88u) {
        ctx->pc = 0x560A88u;
            // 0x560a88: 0xe7a201c8  swc1        $f2, 0x1C8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
        ctx->pc = 0x560A8Cu;
        goto label_560a8c;
    }
    ctx->pc = 0x560A84u;
    SET_GPR_U32(ctx, 31, 0x560A8Cu);
    ctx->pc = 0x560A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560A84u;
            // 0x560a88: 0xe7a201c8  swc1        $f2, 0x1C8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560A8Cu; }
        if (ctx->pc != 0x560A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560A8Cu; }
        if (ctx->pc != 0x560A8Cu) { return; }
    }
    ctx->pc = 0x560A8Cu;
label_560a8c:
    // 0x560a8c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x560a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_560a90:
    // 0x560a90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x560a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_560a94:
    // 0x560a94: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_560a98:
    if (ctx->pc == 0x560A98u) {
        ctx->pc = 0x560A98u;
            // 0x560a98: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x560A9Cu;
        goto label_560a9c;
    }
    ctx->pc = 0x560A94u;
    {
        const bool branch_taken_0x560a94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x560A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560A94u;
            // 0x560a98: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x560a94) {
            ctx->pc = 0x560AB0u;
            goto label_560ab0;
        }
    }
    ctx->pc = 0x560A9Cu;
label_560a9c:
    // 0x560a9c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x560a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_560aa0:
    // 0x560aa0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x560aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_560aa4:
    // 0x560aa4: 0xc0827ac  jal         func_209EB0
label_560aa8:
    if (ctx->pc == 0x560AA8u) {
        ctx->pc = 0x560AA8u;
            // 0x560aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560AACu;
        goto label_560aac;
    }
    ctx->pc = 0x560AA4u;
    SET_GPR_U32(ctx, 31, 0x560AACu);
    ctx->pc = 0x560AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560AA4u;
            // 0x560aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560AACu; }
        if (ctx->pc != 0x560AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560AACu; }
        if (ctx->pc != 0x560AACu) { return; }
    }
    ctx->pc = 0x560AACu;
label_560aac:
    // 0x560aac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x560aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_560ab0:
    // 0x560ab0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x560ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_560ab4:
    // 0x560ab4: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x560ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_560ab8:
    // 0x560ab8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x560ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_560abc:
    // 0x560abc: 0xc0a7a88  jal         func_29EA20
label_560ac0:
    if (ctx->pc == 0x560AC0u) {
        ctx->pc = 0x560AC0u;
            // 0x560ac0: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x560AC4u;
        goto label_560ac4;
    }
    ctx->pc = 0x560ABCu;
    SET_GPR_U32(ctx, 31, 0x560AC4u);
    ctx->pc = 0x560AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560ABCu;
            // 0x560ac0: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560AC4u; }
        if (ctx->pc != 0x560AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560AC4u; }
        if (ctx->pc != 0x560AC4u) { return; }
    }
    ctx->pc = 0x560AC4u;
label_560ac4:
    // 0x560ac4: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x560ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_560ac8:
    // 0x560ac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x560ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_560acc:
    // 0x560acc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_560ad0:
    if (ctx->pc == 0x560AD0u) {
        ctx->pc = 0x560AD0u;
            // 0x560ad0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x560AD4u;
        goto label_560ad4;
    }
    ctx->pc = 0x560ACCu;
    {
        const bool branch_taken_0x560acc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x560AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560ACCu;
            // 0x560ad0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x560acc) {
            ctx->pc = 0x560AECu;
            goto label_560aec;
        }
    }
    ctx->pc = 0x560AD4u;
label_560ad4:
    // 0x560ad4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x560ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_560ad8:
    // 0x560ad8: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x560ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_560adc:
    // 0x560adc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x560adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_560ae0:
    // 0x560ae0: 0xc08afe0  jal         func_22BF80
label_560ae4:
    if (ctx->pc == 0x560AE4u) {
        ctx->pc = 0x560AE4u;
            // 0x560ae4: 0x3c0700a0  lui         $a3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)160 << 16));
        ctx->pc = 0x560AE8u;
        goto label_560ae8;
    }
    ctx->pc = 0x560AE0u;
    SET_GPR_U32(ctx, 31, 0x560AE8u);
    ctx->pc = 0x560AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560AE0u;
            // 0x560ae4: 0x3c0700a0  lui         $a3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)160 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560AE8u; }
        if (ctx->pc != 0x560AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560AE8u; }
        if (ctx->pc != 0x560AE8u) { return; }
    }
    ctx->pc = 0x560AE8u;
label_560ae8:
    // 0x560ae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x560ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_560aec:
    // 0x560aec: 0xae4500dc  sw          $a1, 0xDC($s2)
    ctx->pc = 0x560aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 5));
label_560af0:
    // 0x560af0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x560af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_560af4:
    // 0x560af4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x560af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_560af8:
    // 0x560af8: 0xc08c798  jal         func_231E60
label_560afc:
    if (ctx->pc == 0x560AFCu) {
        ctx->pc = 0x560AFCu;
            // 0x560afc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x560B00u;
        goto label_560b00;
    }
    ctx->pc = 0x560AF8u;
    SET_GPR_U32(ctx, 31, 0x560B00u);
    ctx->pc = 0x560AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560AF8u;
            // 0x560afc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560B00u; }
        if (ctx->pc != 0x560B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560B00u; }
        if (ctx->pc != 0x560B00u) { return; }
    }
    ctx->pc = 0x560B00u;
label_560b00:
    // 0x560b00: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x560b00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_560b04:
    // 0x560b04: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_560b08:
    if (ctx->pc == 0x560B08u) {
        ctx->pc = 0x560B08u;
            // 0x560b08: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->pc = 0x560B0Cu;
        goto label_560b0c;
    }
    ctx->pc = 0x560B04u;
    {
        const bool branch_taken_0x560b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x560b04) {
            ctx->pc = 0x560B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x560B04u;
            // 0x560b08: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x560B48u;
            goto label_560b48;
        }
    }
    ctx->pc = 0x560B0Cu;
label_560b0c:
    // 0x560b0c: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x560b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_560b10:
    // 0x560b10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x560b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_560b14:
    // 0x560b14: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x560b14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_560b18:
    // 0x560b18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x560b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_560b1c:
    // 0x560b1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x560b1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_560b20:
    // 0x560b20: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_560b24:
    if (ctx->pc == 0x560B24u) {
        ctx->pc = 0x560B28u;
        goto label_560b28;
    }
    ctx->pc = 0x560B20u;
    {
        const bool branch_taken_0x560b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x560b20) {
            ctx->pc = 0x560B44u;
            goto label_560b44;
        }
    }
    ctx->pc = 0x560B28u;
label_560b28:
    // 0x560b28: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_560b2c:
    if (ctx->pc == 0x560B2Cu) {
        ctx->pc = 0x560B30u;
        goto label_560b30;
    }
    ctx->pc = 0x560B28u;
    {
        const bool branch_taken_0x560b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x560b28) {
            ctx->pc = 0x560B44u;
            goto label_560b44;
        }
    }
    ctx->pc = 0x560B30u;
label_560b30:
    // 0x560b30: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x560b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_560b34:
    // 0x560b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x560b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_560b38:
    // 0x560b38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x560b38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_560b3c:
    // 0x560b3c: 0x320f809  jalr        $t9
label_560b40:
    if (ctx->pc == 0x560B40u) {
        ctx->pc = 0x560B40u;
            // 0x560b40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x560B44u;
        goto label_560b44;
    }
    ctx->pc = 0x560B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x560B44u);
        ctx->pc = 0x560B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560B3Cu;
            // 0x560b40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x560B44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x560B44u; }
            if (ctx->pc != 0x560B44u) { return; }
        }
        }
    }
    ctx->pc = 0x560B44u;
label_560b44:
    // 0x560b44: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x560b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_560b48:
    // 0x560b48: 0xc08d414  jal         func_235050
label_560b4c:
    if (ctx->pc == 0x560B4Cu) {
        ctx->pc = 0x560B50u;
        goto label_560b50;
    }
    ctx->pc = 0x560B48u;
    SET_GPR_U32(ctx, 31, 0x560B50u);
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560B50u; }
        if (ctx->pc != 0x560B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560B50u; }
        if (ctx->pc != 0x560B50u) { return; }
    }
    ctx->pc = 0x560B50u;
label_560b50:
    // 0x560b50: 0xc0892d0  jal         func_224B40
label_560b54:
    if (ctx->pc == 0x560B54u) {
        ctx->pc = 0x560B54u;
            // 0x560b54: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x560B58u;
        goto label_560b58;
    }
    ctx->pc = 0x560B50u;
    SET_GPR_U32(ctx, 31, 0x560B58u);
    ctx->pc = 0x560B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560B50u;
            // 0x560b54: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560B58u; }
        if (ctx->pc != 0x560B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560B58u; }
        if (ctx->pc != 0x560B58u) { return; }
    }
    ctx->pc = 0x560B58u;
label_560b58:
    // 0x560b58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x560b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_560b5c:
    // 0x560b5c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x560b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_560b60:
    // 0x560b60: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x560b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_560b64:
    // 0x560b64: 0xc0a7a88  jal         func_29EA20
label_560b68:
    if (ctx->pc == 0x560B68u) {
        ctx->pc = 0x560B68u;
            // 0x560b68: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x560B6Cu;
        goto label_560b6c;
    }
    ctx->pc = 0x560B64u;
    SET_GPR_U32(ctx, 31, 0x560B6Cu);
    ctx->pc = 0x560B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560B64u;
            // 0x560b68: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560B6Cu; }
        if (ctx->pc != 0x560B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560B6Cu; }
        if (ctx->pc != 0x560B6Cu) { return; }
    }
    ctx->pc = 0x560B6Cu;
label_560b6c:
    // 0x560b6c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x560b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_560b70:
    // 0x560b70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x560b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_560b74:
    // 0x560b74: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_560b78:
    if (ctx->pc == 0x560B78u) {
        ctx->pc = 0x560B78u;
            // 0x560b78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x560B7Cu;
        goto label_560b7c;
    }
    ctx->pc = 0x560B74u;
    {
        const bool branch_taken_0x560b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x560B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560B74u;
            // 0x560b78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x560b74) {
            ctx->pc = 0x560B90u;
            goto label_560b90;
        }
    }
    ctx->pc = 0x560B7Cu;
label_560b7c:
    // 0x560b7c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x560b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_560b80:
    // 0x560b80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x560b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_560b84:
    // 0x560b84: 0xc0827ac  jal         func_209EB0
label_560b88:
    if (ctx->pc == 0x560B88u) {
        ctx->pc = 0x560B88u;
            // 0x560b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560B8Cu;
        goto label_560b8c;
    }
    ctx->pc = 0x560B84u;
    SET_GPR_U32(ctx, 31, 0x560B8Cu);
    ctx->pc = 0x560B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560B84u;
            // 0x560b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560B8Cu; }
        if (ctx->pc != 0x560B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560B8Cu; }
        if (ctx->pc != 0x560B8Cu) { return; }
    }
    ctx->pc = 0x560B8Cu;
label_560b8c:
    // 0x560b8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x560b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_560b90:
    // 0x560b90: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x560b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_560b94:
    // 0x560b94: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x560b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_560b98:
    // 0x560b98: 0xc0b6e68  jal         func_2DB9A0
label_560b9c:
    if (ctx->pc == 0x560B9Cu) {
        ctx->pc = 0x560B9Cu;
            // 0x560b9c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x560BA0u;
        goto label_560ba0;
    }
    ctx->pc = 0x560B98u;
    SET_GPR_U32(ctx, 31, 0x560BA0u);
    ctx->pc = 0x560B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560B98u;
            // 0x560b9c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560BA0u; }
        if (ctx->pc != 0x560BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560BA0u; }
        if (ctx->pc != 0x560BA0u) { return; }
    }
    ctx->pc = 0x560BA0u;
label_560ba0:
    // 0x560ba0: 0xc0b6dac  jal         func_2DB6B0
label_560ba4:
    if (ctx->pc == 0x560BA4u) {
        ctx->pc = 0x560BA4u;
            // 0x560ba4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x560BA8u;
        goto label_560ba8;
    }
    ctx->pc = 0x560BA0u;
    SET_GPR_U32(ctx, 31, 0x560BA8u);
    ctx->pc = 0x560BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560BA0u;
            // 0x560ba4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560BA8u; }
        if (ctx->pc != 0x560BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560BA8u; }
        if (ctx->pc != 0x560BA8u) { return; }
    }
    ctx->pc = 0x560BA8u;
label_560ba8:
    // 0x560ba8: 0xc0cac94  jal         func_32B250
label_560bac:
    if (ctx->pc == 0x560BACu) {
        ctx->pc = 0x560BACu;
            // 0x560bac: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x560BB0u;
        goto label_560bb0;
    }
    ctx->pc = 0x560BA8u;
    SET_GPR_U32(ctx, 31, 0x560BB0u);
    ctx->pc = 0x560BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560BA8u;
            // 0x560bac: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560BB0u; }
        if (ctx->pc != 0x560BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560BB0u; }
        if (ctx->pc != 0x560BB0u) { return; }
    }
    ctx->pc = 0x560BB0u;
label_560bb0:
    // 0x560bb0: 0xc0cac84  jal         func_32B210
label_560bb4:
    if (ctx->pc == 0x560BB4u) {
        ctx->pc = 0x560BB4u;
            // 0x560bb4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x560BB8u;
        goto label_560bb8;
    }
    ctx->pc = 0x560BB0u;
    SET_GPR_U32(ctx, 31, 0x560BB8u);
    ctx->pc = 0x560BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560BB0u;
            // 0x560bb4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560BB8u; }
        if (ctx->pc != 0x560BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560BB8u; }
        if (ctx->pc != 0x560BB8u) { return; }
    }
    ctx->pc = 0x560BB8u;
label_560bb8:
    // 0x560bb8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x560bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_560bbc:
    // 0x560bbc: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x560bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_560bc0:
    // 0x560bc0: 0xc44dc928  lwc1        $f13, -0x36D8($v0)
    ctx->pc = 0x560bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_560bc4:
    // 0x560bc4: 0xc0a562c  jal         func_2958B0
label_560bc8:
    if (ctx->pc == 0x560BC8u) {
        ctx->pc = 0x560BC8u;
            // 0x560bc8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x560BCCu;
        goto label_560bcc;
    }
    ctx->pc = 0x560BC4u;
    SET_GPR_U32(ctx, 31, 0x560BCCu);
    ctx->pc = 0x560BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560BC4u;
            // 0x560bc8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560BCCu; }
        if (ctx->pc != 0x560BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560BCCu; }
        if (ctx->pc != 0x560BCCu) { return; }
    }
    ctx->pc = 0x560BCCu;
label_560bcc:
    // 0x560bcc: 0xafb100d4  sw          $s1, 0xD4($sp)
    ctx->pc = 0x560bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 17));
label_560bd0:
    // 0x560bd0: 0x3c0201e1  lui         $v0, 0x1E1
    ctx->pc = 0x560bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)481 << 16));
label_560bd4:
    // 0x560bd4: 0xc6460018  lwc1        $f6, 0x18($s2)
    ctx->pc = 0x560bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_560bd8:
    // 0x560bd8: 0x34450020  ori         $a1, $v0, 0x20
    ctx->pc = 0x560bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_560bdc:
    // 0x560bdc: 0xc6450014  lwc1        $f5, 0x14($s2)
    ctx->pc = 0x560bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_560be0:
    // 0x560be0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x560be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_560be4:
    // 0x560be4: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x560be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_560be8:
    // 0x560be8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x560be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_560bec:
    // 0x560bec: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x560becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_560bf0:
    // 0x560bf0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x560bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_560bf4:
    // 0x560bf4: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x560bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_560bf8:
    // 0x560bf8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x560bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_560bfc:
    // 0x560bfc: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x560bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_560c00:
    // 0x560c00: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x560c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_560c04:
    // 0x560c04: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x560c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_560c08:
    // 0x560c08: 0xa3a70180  sb          $a3, 0x180($sp)
    ctx->pc = 0x560c08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 7));
label_560c0c:
    // 0x560c0c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x560c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_560c10:
    // 0x560c10: 0xafa6017c  sw          $a2, 0x17C($sp)
    ctx->pc = 0x560c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 6));
label_560c14:
    // 0x560c14: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x560c14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_560c18:
    // 0x560c18: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x560c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
label_560c1c:
    // 0x560c1c: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x560c1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_560c20:
    // 0x560c20: 0xa3a40182  sb          $a0, 0x182($sp)
    ctx->pc = 0x560c20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 4));
label_560c24:
    // 0x560c24: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x560c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_560c28:
    // 0x560c28: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x560c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_560c2c:
    // 0x560c2c: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x560c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_560c30:
    // 0x560c30: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x560c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_560c34:
    // 0x560c34: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x560c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_560c38:
    // 0x560c38: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x560c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_560c3c:
    // 0x560c3c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x560c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_560c40:
    // 0x560c40: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x560c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_560c44:
    // 0x560c44: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x560c44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_560c48:
    // 0x560c48: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x560c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_560c4c:
    // 0x560c4c: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x560c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_560c50:
    // 0x560c50: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x560c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_560c54:
    // 0x560c54: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x560c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_560c58:
    // 0x560c58: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x560c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_560c5c:
    // 0x560c5c: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x560c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_560c60:
    // 0x560c60: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x560c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_560c64:
    // 0x560c64: 0xe7a3013c  swc1        $f3, 0x13C($sp)
    ctx->pc = 0x560c64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_560c68:
    // 0x560c68: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x560c68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_560c6c:
    // 0x560c6c: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x560c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_560c70:
    // 0x560c70: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x560c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_560c74:
    // 0x560c74: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x560c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_560c78:
    // 0x560c78: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x560c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_560c7c:
    // 0x560c7c: 0xe7a30148  swc1        $f3, 0x148($sp)
    ctx->pc = 0x560c7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_560c80:
    // 0x560c80: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x560c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_560c84:
    // 0x560c84: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x560c84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_560c88:
    // 0x560c88: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x560c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_560c8c:
    // 0x560c8c: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x560c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_560c90:
    // 0x560c90: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x560c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_560c94:
    // 0x560c94: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x560c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_560c98:
    // 0x560c98: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x560c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_560c9c:
    // 0x560c9c: 0xe7a500e4  swc1        $f5, 0xE4($sp)
    ctx->pc = 0x560c9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_560ca0:
    // 0x560ca0: 0xe7a600e8  swc1        $f6, 0xE8($sp)
    ctx->pc = 0x560ca0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_560ca4:
    // 0x560ca4: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x560ca4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_560ca8:
    // 0x560ca8: 0xe7a30154  swc1        $f3, 0x154($sp)
    ctx->pc = 0x560ca8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_560cac:
    // 0x560cac: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x560cacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_560cb0:
    // 0x560cb0: 0xe7a10160  swc1        $f1, 0x160($sp)
    ctx->pc = 0x560cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_560cb4:
    // 0x560cb4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x560cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_560cb8:
    // 0x560cb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x560cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_560cbc:
    // 0x560cbc: 0x0  nop
    ctx->pc = 0x560cbcu;
    // NOP
label_560cc0:
    // 0x560cc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x560cc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_560cc4:
    // 0x560cc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_560cc8:
    if (ctx->pc == 0x560CC8u) {
        ctx->pc = 0x560CCCu;
        goto label_560ccc;
    }
    ctx->pc = 0x560CC4u;
    {
        const bool branch_taken_0x560cc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x560cc4) {
            ctx->pc = 0x560CD4u;
            goto label_560cd4;
        }
    }
    ctx->pc = 0x560CCCu;
label_560ccc:
    // 0x560ccc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x560cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_560cd0:
    // 0x560cd0: 0xa3a20183  sb          $v0, 0x183($sp)
    ctx->pc = 0x560cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 387), (uint8_t)GPR_U32(ctx, 2));
label_560cd4:
    // 0x560cd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x560cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_560cd8:
    // 0x560cd8: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x560cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_560cdc:
    // 0x560cdc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x560cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_560ce0:
    // 0x560ce0: 0xc0a7a88  jal         func_29EA20
label_560ce4:
    if (ctx->pc == 0x560CE4u) {
        ctx->pc = 0x560CE4u;
            // 0x560ce4: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x560CE8u;
        goto label_560ce8;
    }
    ctx->pc = 0x560CE0u;
    SET_GPR_U32(ctx, 31, 0x560CE8u);
    ctx->pc = 0x560CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560CE0u;
            // 0x560ce4: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560CE8u; }
        if (ctx->pc != 0x560CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560CE8u; }
        if (ctx->pc != 0x560CE8u) { return; }
    }
    ctx->pc = 0x560CE8u;
label_560ce8:
    // 0x560ce8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x560ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_560cec:
    // 0x560cec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x560cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_560cf0:
    // 0x560cf0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_560cf4:
    if (ctx->pc == 0x560CF4u) {
        ctx->pc = 0x560CF4u;
            // 0x560cf4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x560CF8u;
        goto label_560cf8;
    }
    ctx->pc = 0x560CF0u;
    {
        const bool branch_taken_0x560cf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x560CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560CF0u;
            // 0x560cf4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x560cf0) {
            ctx->pc = 0x560D40u;
            goto label_560d40;
        }
    }
    ctx->pc = 0x560CF8u;
label_560cf8:
    // 0x560cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x560cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_560cfc:
    // 0x560cfc: 0xc088ef4  jal         func_223BD0
label_560d00:
    if (ctx->pc == 0x560D00u) {
        ctx->pc = 0x560D00u;
            // 0x560d00: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x560D04u;
        goto label_560d04;
    }
    ctx->pc = 0x560CFCu;
    SET_GPR_U32(ctx, 31, 0x560D04u);
    ctx->pc = 0x560D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560CFCu;
            // 0x560d00: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560D04u; }
        if (ctx->pc != 0x560D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560D04u; }
        if (ctx->pc != 0x560D04u) { return; }
    }
    ctx->pc = 0x560D04u;
label_560d04:
    // 0x560d04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x560d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_560d08:
    // 0x560d08: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x560d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_560d0c:
    // 0x560d0c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x560d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_560d10:
    // 0x560d10: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x560d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_560d14:
    // 0x560d14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x560d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_560d18:
    // 0x560d18: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x560d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_560d1c:
    // 0x560d1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x560d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_560d20:
    // 0x560d20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x560d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_560d24:
    // 0x560d24: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x560d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_560d28:
    // 0x560d28: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x560d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_560d2c:
    // 0x560d2c: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x560d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_560d30:
    // 0x560d30: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x560d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_560d34:
    // 0x560d34: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x560d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_560d38:
    // 0x560d38: 0xc088b38  jal         func_222CE0
label_560d3c:
    if (ctx->pc == 0x560D3Cu) {
        ctx->pc = 0x560D3Cu;
            // 0x560d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560D40u;
        goto label_560d40;
    }
    ctx->pc = 0x560D38u;
    SET_GPR_U32(ctx, 31, 0x560D40u);
    ctx->pc = 0x560D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560D38u;
            // 0x560d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560D40u; }
        if (ctx->pc != 0x560D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560D40u; }
        if (ctx->pc != 0x560D40u) { return; }
    }
    ctx->pc = 0x560D40u;
label_560d40:
    // 0x560d40: 0x3c024657  lui         $v0, 0x4657
    ctx->pc = 0x560d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18007 << 16));
label_560d44:
    // 0x560d44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x560d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_560d48:
    // 0x560d48: 0x3443a000  ori         $v1, $v0, 0xA000
    ctx->pc = 0x560d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
label_560d4c:
    // 0x560d4c: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x560d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_560d50:
    // 0x560d50: 0x3c0241a7  lui         $v0, 0x41A7
    ctx->pc = 0x560d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16807 << 16));
label_560d54:
    // 0x560d54: 0xae030154  sw          $v1, 0x154($s0)
    ctx->pc = 0x560d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
label_560d58:
    // 0x560d58: 0x34428d36  ori         $v0, $v0, 0x8D36
    ctx->pc = 0x560d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36150);
label_560d5c:
    // 0x560d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x560d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_560d60:
    // 0x560d60: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x560d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_560d64:
    // 0x560d64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x560d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_560d68:
    // 0x560d68: 0xc08914c  jal         func_224530
label_560d6c:
    if (ctx->pc == 0x560D6Cu) {
        ctx->pc = 0x560D6Cu;
            // 0x560d6c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560D70u;
        goto label_560d70;
    }
    ctx->pc = 0x560D68u;
    SET_GPR_U32(ctx, 31, 0x560D70u);
    ctx->pc = 0x560D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560D68u;
            // 0x560d6c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560D70u; }
        if (ctx->pc != 0x560D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560D70u; }
        if (ctx->pc != 0x560D70u) { return; }
    }
    ctx->pc = 0x560D70u;
label_560d70:
    // 0x560d70: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x560d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_560d74:
    // 0x560d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x560d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_560d78:
    // 0x560d78: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x560d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_560d7c:
    // 0x560d7c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x560d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_560d80:
    // 0x560d80: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x560d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_560d84:
    // 0x560d84: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x560d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_560d88:
    // 0x560d88: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x560d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_560d8c:
    // 0x560d8c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x560d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_560d90:
    // 0x560d90: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x560d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_560d94:
    // 0x560d94: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x560d94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_560d98:
    // 0x560d98: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x560d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_560d9c:
    // 0x560d9c: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x560d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_560da0:
    // 0x560da0: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x560da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_560da4:
    // 0x560da4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x560da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_560da8:
    // 0x560da8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x560da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_560dac:
    // 0x560dac: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x560dacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_560db0:
    // 0x560db0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x560db0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_560db4:
    // 0x560db4: 0xc0892b0  jal         func_224AC0
label_560db8:
    if (ctx->pc == 0x560DB8u) {
        ctx->pc = 0x560DB8u;
            // 0x560db8: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x560DBCu;
        goto label_560dbc;
    }
    ctx->pc = 0x560DB4u;
    SET_GPR_U32(ctx, 31, 0x560DBCu);
    ctx->pc = 0x560DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560DB4u;
            // 0x560db8: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560DBCu; }
        if (ctx->pc != 0x560DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560DBCu; }
        if (ctx->pc != 0x560DBCu) { return; }
    }
    ctx->pc = 0x560DBCu;
label_560dbc:
    // 0x560dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x560dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_560dc0:
    // 0x560dc0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x560dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_560dc4:
    // 0x560dc4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x560dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_560dc8:
    // 0x560dc8: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x560dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_560dcc:
    // 0x560dcc: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x560dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_560dd0:
    // 0x560dd0: 0xc0891d8  jal         func_224760
label_560dd4:
    if (ctx->pc == 0x560DD4u) {
        ctx->pc = 0x560DD4u;
            // 0x560dd4: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x560DD8u;
        goto label_560dd8;
    }
    ctx->pc = 0x560DD0u;
    SET_GPR_U32(ctx, 31, 0x560DD8u);
    ctx->pc = 0x560DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560DD0u;
            // 0x560dd4: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560DD8u; }
        if (ctx->pc != 0x560DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560DD8u; }
        if (ctx->pc != 0x560DD8u) { return; }
    }
    ctx->pc = 0x560DD8u;
label_560dd8:
    // 0x560dd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x560dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_560ddc:
    // 0x560ddc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x560ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_560de0:
    // 0x560de0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x560de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_560de4:
    // 0x560de4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x560de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_560de8:
    // 0x560de8: 0xc08c164  jal         func_230590
label_560dec:
    if (ctx->pc == 0x560DECu) {
        ctx->pc = 0x560DECu;
            // 0x560dec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x560DF0u;
        goto label_560df0;
    }
    ctx->pc = 0x560DE8u;
    SET_GPR_U32(ctx, 31, 0x560DF0u);
    ctx->pc = 0x560DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560DE8u;
            // 0x560dec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560DF0u; }
        if (ctx->pc != 0x560DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560DF0u; }
        if (ctx->pc != 0x560DF0u) { return; }
    }
    ctx->pc = 0x560DF0u;
label_560df0:
    // 0x560df0: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x560df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_560df4:
    // 0x560df4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x560df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_560df8:
    // 0x560df8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x560df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_560dfc:
    // 0x560dfc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x560dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_560e00:
    // 0x560e00: 0xc0a7a88  jal         func_29EA20
label_560e04:
    if (ctx->pc == 0x560E04u) {
        ctx->pc = 0x560E04u;
            // 0x560e04: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x560E08u;
        goto label_560e08;
    }
    ctx->pc = 0x560E00u;
    SET_GPR_U32(ctx, 31, 0x560E08u);
    ctx->pc = 0x560E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560E00u;
            // 0x560e04: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560E08u; }
        if (ctx->pc != 0x560E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560E08u; }
        if (ctx->pc != 0x560E08u) { return; }
    }
    ctx->pc = 0x560E08u;
label_560e08:
    // 0x560e08: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x560e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_560e0c:
    // 0x560e0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x560e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_560e10:
    // 0x560e10: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_560e14:
    if (ctx->pc == 0x560E14u) {
        ctx->pc = 0x560E14u;
            // 0x560e14: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x560E18u;
        goto label_560e18;
    }
    ctx->pc = 0x560E10u;
    {
        const bool branch_taken_0x560e10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x560E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560E10u;
            // 0x560e14: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x560e10) {
            ctx->pc = 0x560E34u;
            goto label_560e34;
        }
    }
    ctx->pc = 0x560E18u;
label_560e18:
    // 0x560e18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x560e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_560e1c:
    // 0x560e1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x560e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_560e20:
    // 0x560e20: 0xc0869d0  jal         func_21A740
label_560e24:
    if (ctx->pc == 0x560E24u) {
        ctx->pc = 0x560E24u;
            // 0x560e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560E28u;
        goto label_560e28;
    }
    ctx->pc = 0x560E20u;
    SET_GPR_U32(ctx, 31, 0x560E28u);
    ctx->pc = 0x560E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560E20u;
            // 0x560e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560E28u; }
        if (ctx->pc != 0x560E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560E28u; }
        if (ctx->pc != 0x560E28u) { return; }
    }
    ctx->pc = 0x560E28u;
label_560e28:
    // 0x560e28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x560e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_560e2c:
    // 0x560e2c: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x560e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_560e30:
    // 0x560e30: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x560e30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_560e34:
    // 0x560e34: 0xae130210  sw          $s3, 0x210($s0)
    ctx->pc = 0x560e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 19));
label_560e38:
    // 0x560e38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x560e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_560e3c:
    // 0x560e3c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x560e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_560e40:
    // 0x560e40: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x560e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_560e44:
    // 0x560e44: 0xc08c650  jal         func_231940
label_560e48:
    if (ctx->pc == 0x560E48u) {
        ctx->pc = 0x560E48u;
            // 0x560e48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560E4Cu;
        goto label_560e4c;
    }
    ctx->pc = 0x560E44u;
    SET_GPR_U32(ctx, 31, 0x560E4Cu);
    ctx->pc = 0x560E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560E44u;
            // 0x560e48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560E4Cu; }
        if (ctx->pc != 0x560E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560E4Cu; }
        if (ctx->pc != 0x560E4Cu) { return; }
    }
    ctx->pc = 0x560E4Cu;
label_560e4c:
    // 0x560e4c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x560e4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_560e50:
    // 0x560e50: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_560e54:
    if (ctx->pc == 0x560E54u) {
        ctx->pc = 0x560E54u;
            // 0x560e54: 0x8e4500b0  lw          $a1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->pc = 0x560E58u;
        goto label_560e58;
    }
    ctx->pc = 0x560E50u;
    {
        const bool branch_taken_0x560e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x560e50) {
            ctx->pc = 0x560E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x560E50u;
            // 0x560e54: 0x8e4500b0  lw          $a1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x560E94u;
            goto label_560e94;
        }
    }
    ctx->pc = 0x560E58u;
label_560e58:
    // 0x560e58: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x560e58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_560e5c:
    // 0x560e5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x560e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_560e60:
    // 0x560e60: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x560e60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_560e64:
    // 0x560e64: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x560e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_560e68:
    // 0x560e68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x560e68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_560e6c:
    // 0x560e6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_560e70:
    if (ctx->pc == 0x560E70u) {
        ctx->pc = 0x560E74u;
        goto label_560e74;
    }
    ctx->pc = 0x560E6Cu;
    {
        const bool branch_taken_0x560e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x560e6c) {
            ctx->pc = 0x560E90u;
            goto label_560e90;
        }
    }
    ctx->pc = 0x560E74u;
label_560e74:
    // 0x560e74: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_560e78:
    if (ctx->pc == 0x560E78u) {
        ctx->pc = 0x560E7Cu;
        goto label_560e7c;
    }
    ctx->pc = 0x560E74u;
    {
        const bool branch_taken_0x560e74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x560e74) {
            ctx->pc = 0x560E90u;
            goto label_560e90;
        }
    }
    ctx->pc = 0x560E7Cu;
label_560e7c:
    // 0x560e7c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x560e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_560e80:
    // 0x560e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x560e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_560e84:
    // 0x560e84: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x560e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_560e88:
    // 0x560e88: 0x320f809  jalr        $t9
label_560e8c:
    if (ctx->pc == 0x560E8Cu) {
        ctx->pc = 0x560E8Cu;
            // 0x560e8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x560E90u;
        goto label_560e90;
    }
    ctx->pc = 0x560E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x560E90u);
        ctx->pc = 0x560E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560E88u;
            // 0x560e8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x560E90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x560E90u; }
            if (ctx->pc != 0x560E90u) { return; }
        }
        }
    }
    ctx->pc = 0x560E90u;
label_560e90:
    // 0x560e90: 0x8e4500b0  lw          $a1, 0xB0($s2)
    ctx->pc = 0x560e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_560e94:
    // 0x560e94: 0x2403f9ff  addiu       $v1, $zero, -0x601
    ctx->pc = 0x560e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_560e98:
    // 0x560e98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x560e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_560e9c:
    // 0x560e9c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x560e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_560ea0:
    // 0x560ea0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x560ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_560ea4:
    // 0x560ea4: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x560ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
label_560ea8:
    // 0x560ea8: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x560ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
label_560eac:
    // 0x560eac: 0xa2420064  sb          $v0, 0x64($s2)
    ctx->pc = 0x560eacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 2));
label_560eb0:
    // 0x560eb0: 0xa2400065  sb          $zero, 0x65($s2)
    ctx->pc = 0x560eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 0));
label_560eb4:
    // 0x560eb4: 0xa2420066  sb          $v0, 0x66($s2)
    ctx->pc = 0x560eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
label_560eb8:
    // 0x560eb8: 0xa2400067  sb          $zero, 0x67($s2)
    ctx->pc = 0x560eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 0));
label_560ebc:
    // 0x560ebc: 0xa242006a  sb          $v0, 0x6A($s2)
    ctx->pc = 0x560ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 2));
label_560ec0:
    // 0x560ec0: 0xc040180  jal         func_100600
label_560ec4:
    if (ctx->pc == 0x560EC4u) {
        ctx->pc = 0x560EC4u;
            // 0x560ec4: 0xa240006b  sb          $zero, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x560EC8u;
        goto label_560ec8;
    }
    ctx->pc = 0x560EC0u;
    SET_GPR_U32(ctx, 31, 0x560EC8u);
    ctx->pc = 0x560EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560EC0u;
            // 0x560ec4: 0xa240006b  sb          $zero, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560EC8u; }
        if (ctx->pc != 0x560EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560EC8u; }
        if (ctx->pc != 0x560EC8u) { return; }
    }
    ctx->pc = 0x560EC8u;
label_560ec8:
    // 0x560ec8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x560ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_560ecc:
    // 0x560ecc: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_560ed0:
    if (ctx->pc == 0x560ED0u) {
        ctx->pc = 0x560ED0u;
            // 0x560ed0: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x560ED4u;
        goto label_560ed4;
    }
    ctx->pc = 0x560ECCu;
    {
        const bool branch_taken_0x560ecc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x560ecc) {
            ctx->pc = 0x560ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x560ECCu;
            // 0x560ed0: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x560F0Cu;
            goto label_560f0c;
        }
    }
    ctx->pc = 0x560ED4u;
label_560ed4:
    // 0x560ed4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x560ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_560ed8:
    // 0x560ed8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x560ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_560edc:
    // 0x560edc: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x560edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_560ee0:
    // 0x560ee0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x560ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_560ee4:
    // 0x560ee4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x560ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_560ee8:
    // 0x560ee8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x560ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_560eec:
    // 0x560eec: 0xc040138  jal         func_1004E0
label_560ef0:
    if (ctx->pc == 0x560EF0u) {
        ctx->pc = 0x560EF0u;
            // 0x560ef0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x560EF4u;
        goto label_560ef4;
    }
    ctx->pc = 0x560EECu;
    SET_GPR_U32(ctx, 31, 0x560EF4u);
    ctx->pc = 0x560EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560EECu;
            // 0x560ef0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560EF4u; }
        if (ctx->pc != 0x560EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560EF4u; }
        if (ctx->pc != 0x560EF4u) { return; }
    }
    ctx->pc = 0x560EF4u;
label_560ef4:
    // 0x560ef4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x560ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_560ef8:
    // 0x560ef8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x560ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_560efc:
    // 0x560efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x560efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_560f00:
    // 0x560f00: 0xc04a576  jal         func_1295D8
label_560f04:
    if (ctx->pc == 0x560F04u) {
        ctx->pc = 0x560F04u;
            // 0x560f04: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x560F08u;
        goto label_560f08;
    }
    ctx->pc = 0x560F00u;
    SET_GPR_U32(ctx, 31, 0x560F08u);
    ctx->pc = 0x560F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560F00u;
            // 0x560f04: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560F08u; }
        if (ctx->pc != 0x560F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560F08u; }
        if (ctx->pc != 0x560F08u) { return; }
    }
    ctx->pc = 0x560F08u;
label_560f08:
    // 0x560f08: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x560f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_560f0c:
    // 0x560f0c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x560f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_560f10:
    // 0x560f10: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x560f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_560f14:
    // 0x560f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x560f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_560f18:
    // 0x560f18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x560f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_560f1c:
    // 0x560f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x560f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_560f20:
    // 0x560f20: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x560f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_560f24:
    // 0x560f24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x560f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_560f28:
    // 0x560f28: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x560f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_560f2c:
    // 0x560f2c: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x560f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_560f30:
    // 0x560f30: 0xc122cd8  jal         func_48B360
label_560f34:
    if (ctx->pc == 0x560F34u) {
        ctx->pc = 0x560F34u;
            // 0x560f34: 0xae500160  sw          $s0, 0x160($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 16));
        ctx->pc = 0x560F38u;
        goto label_560f38;
    }
    ctx->pc = 0x560F30u;
    SET_GPR_U32(ctx, 31, 0x560F38u);
    ctx->pc = 0x560F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560F30u;
            // 0x560f34: 0xae500160  sw          $s0, 0x160($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560F38u; }
        if (ctx->pc != 0x560F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560F38u; }
        if (ctx->pc != 0x560F38u) { return; }
    }
    ctx->pc = 0x560F38u;
label_560f38:
    // 0x560f38: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x560f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_560f3c:
    // 0x560f3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x560f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_560f40:
    // 0x560f40: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x560f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_560f44:
    // 0x560f44: 0x8e440160  lw          $a0, 0x160($s2)
    ctx->pc = 0x560f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_560f48:
    // 0x560f48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x560f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_560f4c:
    // 0x560f4c: 0x240601ae  addiu       $a2, $zero, 0x1AE
    ctx->pc = 0x560f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
label_560f50:
    // 0x560f50: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x560f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_560f54:
    // 0x560f54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x560f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_560f58:
    // 0x560f58: 0xc122cd8  jal         func_48B360
label_560f5c:
    if (ctx->pc == 0x560F5Cu) {
        ctx->pc = 0x560F5Cu;
            // 0x560f5c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560F60u;
        goto label_560f60;
    }
    ctx->pc = 0x560F58u;
    SET_GPR_U32(ctx, 31, 0x560F60u);
    ctx->pc = 0x560F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560F58u;
            // 0x560f5c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560F60u; }
        if (ctx->pc != 0x560F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560F60u; }
        if (ctx->pc != 0x560F60u) { return; }
    }
    ctx->pc = 0x560F60u;
label_560f60:
    // 0x560f60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x560f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_560f64:
    // 0x560f64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x560f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_560f68:
    // 0x560f68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x560f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_560f6c:
    // 0x560f6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x560f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_560f70:
    // 0x560f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x560f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_560f74:
    // 0x560f74: 0x3e00008  jr          $ra
label_560f78:
    if (ctx->pc == 0x560F78u) {
        ctx->pc = 0x560F78u;
            // 0x560f78: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x560F7Cu;
        goto label_560f7c;
    }
    ctx->pc = 0x560F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x560F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x560F74u;
            // 0x560f78: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x560F7Cu;
label_560f7c:
    // 0x560f7c: 0x0  nop
    ctx->pc = 0x560f7cu;
    // NOP
label_560f80:
    // 0x560f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x560f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_560f84:
    // 0x560f84: 0x3c0301e1  lui         $v1, 0x1E1
    ctx->pc = 0x560f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)481 << 16));
label_560f88:
    // 0x560f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x560f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_560f8c:
    // 0x560f8c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x560f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_560f90:
    // 0x560f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x560f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_560f94:
    // 0x560f94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x560f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_560f98:
    // 0x560f98: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x560f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_560f9c:
    // 0x560f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x560f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_560fa0:
    // 0x560fa0: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x560fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_560fa4:
    // 0x560fa4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x560fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_560fa8:
    // 0x560fa8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x560fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_560fac:
    // 0x560fac: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x560facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_560fb0:
    // 0x560fb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x560fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_560fb4:
    // 0x560fb4: 0xc08bff0  jal         func_22FFC0
label_560fb8:
    if (ctx->pc == 0x560FB8u) {
        ctx->pc = 0x560FB8u;
            // 0x560fb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560FBCu;
        goto label_560fbc;
    }
    ctx->pc = 0x560FB4u;
    SET_GPR_U32(ctx, 31, 0x560FBCu);
    ctx->pc = 0x560FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560FB4u;
            // 0x560fb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560FBCu; }
        if (ctx->pc != 0x560FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560FBCu; }
        if (ctx->pc != 0x560FBCu) { return; }
    }
    ctx->pc = 0x560FBCu;
label_560fbc:
    // 0x560fbc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x560fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_560fc0:
    // 0x560fc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x560fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_560fc4:
    // 0x560fc4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x560fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_560fc8:
    // 0x560fc8: 0xc08914c  jal         func_224530
label_560fcc:
    if (ctx->pc == 0x560FCCu) {
        ctx->pc = 0x560FCCu;
            // 0x560fcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560FD0u;
        goto label_560fd0;
    }
    ctx->pc = 0x560FC8u;
    SET_GPR_U32(ctx, 31, 0x560FD0u);
    ctx->pc = 0x560FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560FC8u;
            // 0x560fcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560FD0u; }
        if (ctx->pc != 0x560FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560FD0u; }
        if (ctx->pc != 0x560FD0u) { return; }
    }
    ctx->pc = 0x560FD0u;
label_560fd0:
    // 0x560fd0: 0xc0e393c  jal         func_38E4F0
label_560fd4:
    if (ctx->pc == 0x560FD4u) {
        ctx->pc = 0x560FD4u;
            // 0x560fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x560FD8u;
        goto label_560fd8;
    }
    ctx->pc = 0x560FD0u;
    SET_GPR_U32(ctx, 31, 0x560FD8u);
    ctx->pc = 0x560FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x560FD0u;
            // 0x560fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560FD8u; }
        if (ctx->pc != 0x560FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x560FD8u; }
        if (ctx->pc != 0x560FD8u) { return; }
    }
    ctx->pc = 0x560FD8u;
label_560fd8:
    // 0x560fd8: 0x3c034657  lui         $v1, 0x4657
    ctx->pc = 0x560fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18007 << 16));
label_560fdc:
    // 0x560fdc: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x560fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_560fe0:
    // 0x560fe0: 0x3466a000  ori         $a2, $v1, 0xA000
    ctx->pc = 0x560fe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_560fe4:
    // 0x560fe4: 0x3c0341a7  lui         $v1, 0x41A7
    ctx->pc = 0x560fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16807 << 16));
label_560fe8:
    // 0x560fe8: 0x34648d36  ori         $a0, $v1, 0x8D36
    ctx->pc = 0x560fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36150);
label_560fec:
    // 0x560fec: 0xaca60154  sw          $a2, 0x154($a1)
    ctx->pc = 0x560fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 6));
label_560ff0:
    // 0x560ff0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x560ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_560ff4:
    // 0x560ff4: 0xac640158  sw          $a0, 0x158($v1)
    ctx->pc = 0x560ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 4));
label_560ff8:
    // 0x560ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x560ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_560ffc:
    // 0x560ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x560ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_561000:
    // 0x561000: 0x3e00008  jr          $ra
label_561004:
    if (ctx->pc == 0x561004u) {
        ctx->pc = 0x561004u;
            // 0x561004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x561008u;
        goto label_561008;
    }
    ctx->pc = 0x561000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x561004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561000u;
            // 0x561004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x561008u;
label_561008:
    // 0x561008: 0x0  nop
    ctx->pc = 0x561008u;
    // NOP
label_56100c:
    // 0x56100c: 0x0  nop
    ctx->pc = 0x56100cu;
    // NOP
label_561010:
    // 0x561010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x561010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_561014:
    // 0x561014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x561014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_561018:
    // 0x561018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x561018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56101c:
    // 0x56101c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_561020:
    // 0x561020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x561020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_561024:
    // 0x561024: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
label_561028:
    if (ctx->pc == 0x561028u) {
        ctx->pc = 0x561028u;
            // 0x561028: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56102Cu;
        goto label_56102c;
    }
    ctx->pc = 0x561024u;
    {
        const bool branch_taken_0x561024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x561028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561024u;
            // 0x561028: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x561024) {
            ctx->pc = 0x5610F4u;
            goto label_5610f4;
        }
    }
    ctx->pc = 0x56102Cu;
label_56102c:
    // 0x56102c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x56102cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_561030:
    // 0x561030: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x561030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_561034:
    // 0x561034: 0x24637d20  addiu       $v1, $v1, 0x7D20
    ctx->pc = 0x561034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32032));
label_561038:
    // 0x561038: 0x24427d60  addiu       $v0, $v0, 0x7D60
    ctx->pc = 0x561038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32096));
label_56103c:
    // 0x56103c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x56103cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_561040:
    // 0x561040: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x561040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_561044:
    // 0x561044: 0xc122c94  jal         func_48B250
label_561048:
    if (ctx->pc == 0x561048u) {
        ctx->pc = 0x561048u;
            // 0x561048: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->pc = 0x56104Cu;
        goto label_56104c;
    }
    ctx->pc = 0x561044u;
    SET_GPR_U32(ctx, 31, 0x56104Cu);
    ctx->pc = 0x561048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561044u;
            // 0x561048: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56104Cu; }
        if (ctx->pc != 0x56104Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56104Cu; }
        if (ctx->pc != 0x56104Cu) { return; }
    }
    ctx->pc = 0x56104Cu;
label_56104c:
    // 0x56104c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x56104cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_561050:
    // 0x561050: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x561050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_561054:
    // 0x561054: 0x320f809  jalr        $t9
label_561058:
    if (ctx->pc == 0x561058u) {
        ctx->pc = 0x561058u;
            // 0x561058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56105Cu;
        goto label_56105c;
    }
    ctx->pc = 0x561054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56105Cu);
        ctx->pc = 0x561058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561054u;
            // 0x561058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56105Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56105Cu; }
            if (ctx->pc != 0x56105Cu) { return; }
        }
        }
    }
    ctx->pc = 0x56105Cu;
label_56105c:
    // 0x56105c: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_561060:
    if (ctx->pc == 0x561060u) {
        ctx->pc = 0x561060u;
            // 0x561060: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x561064u;
        goto label_561064;
    }
    ctx->pc = 0x56105Cu;
    {
        const bool branch_taken_0x56105c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x56105c) {
            ctx->pc = 0x561060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56105Cu;
            // 0x561060: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5610E0u;
            goto label_5610e0;
        }
    }
    ctx->pc = 0x561064u;
label_561064:
    // 0x561064: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x561064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_561068:
    // 0x561068: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x561068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_56106c:
    // 0x56106c: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x56106cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_561070:
    // 0x561070: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x561070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_561074:
    // 0x561074: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x561074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_561078:
    // 0x561078: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x561078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_56107c:
    // 0x56107c: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x56107cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_561080:
    // 0x561080: 0xc0aecc4  jal         func_2BB310
label_561084:
    if (ctx->pc == 0x561084u) {
        ctx->pc = 0x561084u;
            // 0x561084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x561088u;
        goto label_561088;
    }
    ctx->pc = 0x561080u;
    SET_GPR_U32(ctx, 31, 0x561088u);
    ctx->pc = 0x561084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561080u;
            // 0x561084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561088u; }
        if (ctx->pc != 0x561088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561088u; }
        if (ctx->pc != 0x561088u) { return; }
    }
    ctx->pc = 0x561088u;
label_561088:
    // 0x561088: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x561088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_56108c:
    // 0x56108c: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x56108cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_561090:
    // 0x561090: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_561094:
    if (ctx->pc == 0x561094u) {
        ctx->pc = 0x561094u;
            // 0x561094: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x561098u;
        goto label_561098;
    }
    ctx->pc = 0x561090u;
    {
        const bool branch_taken_0x561090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x561090) {
            ctx->pc = 0x561094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x561090u;
            // 0x561094: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5610ACu;
            goto label_5610ac;
        }
    }
    ctx->pc = 0x561098u;
label_561098:
    // 0x561098: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x561098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_56109c:
    // 0x56109c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x56109cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5610a0:
    // 0x5610a0: 0x320f809  jalr        $t9
label_5610a4:
    if (ctx->pc == 0x5610A4u) {
        ctx->pc = 0x5610A4u;
            // 0x5610a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5610A8u;
        goto label_5610a8;
    }
    ctx->pc = 0x5610A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5610A8u);
        ctx->pc = 0x5610A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5610A0u;
            // 0x5610a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5610A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5610A8u; }
            if (ctx->pc != 0x5610A8u) { return; }
        }
        }
    }
    ctx->pc = 0x5610A8u;
label_5610a8:
    // 0x5610a8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x5610a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_5610ac:
    // 0x5610ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x5610acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5610b0:
    // 0x5610b0: 0xc0aec9c  jal         func_2BB270
label_5610b4:
    if (ctx->pc == 0x5610B4u) {
        ctx->pc = 0x5610B4u;
            // 0x5610b4: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x5610B8u;
        goto label_5610b8;
    }
    ctx->pc = 0x5610B0u;
    SET_GPR_U32(ctx, 31, 0x5610B8u);
    ctx->pc = 0x5610B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5610B0u;
            // 0x5610b4: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5610B8u; }
        if (ctx->pc != 0x5610B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5610B8u; }
        if (ctx->pc != 0x5610B8u) { return; }
    }
    ctx->pc = 0x5610B8u;
label_5610b8:
    // 0x5610b8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x5610b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_5610bc:
    // 0x5610bc: 0xc0aec88  jal         func_2BB220
label_5610c0:
    if (ctx->pc == 0x5610C0u) {
        ctx->pc = 0x5610C0u;
            // 0x5610c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x5610C4u;
        goto label_5610c4;
    }
    ctx->pc = 0x5610BCu;
    SET_GPR_U32(ctx, 31, 0x5610C4u);
    ctx->pc = 0x5610C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5610BCu;
            // 0x5610c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5610C4u; }
        if (ctx->pc != 0x5610C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5610C4u; }
        if (ctx->pc != 0x5610C4u) { return; }
    }
    ctx->pc = 0x5610C4u;
label_5610c4:
    // 0x5610c4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x5610c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_5610c8:
    // 0x5610c8: 0xc0aec0c  jal         func_2BB030
label_5610cc:
    if (ctx->pc == 0x5610CCu) {
        ctx->pc = 0x5610CCu;
            // 0x5610cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5610D0u;
        goto label_5610d0;
    }
    ctx->pc = 0x5610C8u;
    SET_GPR_U32(ctx, 31, 0x5610D0u);
    ctx->pc = 0x5610CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5610C8u;
            // 0x5610cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5610D0u; }
        if (ctx->pc != 0x5610D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5610D0u; }
        if (ctx->pc != 0x5610D0u) { return; }
    }
    ctx->pc = 0x5610D0u;
label_5610d0:
    // 0x5610d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5610d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5610d4:
    // 0x5610d4: 0xc0aeaa8  jal         func_2BAAA0
label_5610d8:
    if (ctx->pc == 0x5610D8u) {
        ctx->pc = 0x5610D8u;
            // 0x5610d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5610DCu;
        goto label_5610dc;
    }
    ctx->pc = 0x5610D4u;
    SET_GPR_U32(ctx, 31, 0x5610DCu);
    ctx->pc = 0x5610D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5610D4u;
            // 0x5610d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5610DCu; }
        if (ctx->pc != 0x5610DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5610DCu; }
        if (ctx->pc != 0x5610DCu) { return; }
    }
    ctx->pc = 0x5610DCu;
label_5610dc:
    // 0x5610dc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5610dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_5610e0:
    // 0x5610e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5610e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5610e4:
    // 0x5610e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5610e8:
    if (ctx->pc == 0x5610E8u) {
        ctx->pc = 0x5610E8u;
            // 0x5610e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5610ECu;
        goto label_5610ec;
    }
    ctx->pc = 0x5610E4u;
    {
        const bool branch_taken_0x5610e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5610e4) {
            ctx->pc = 0x5610E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5610E4u;
            // 0x5610e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5610F8u;
            goto label_5610f8;
        }
    }
    ctx->pc = 0x5610ECu;
label_5610ec:
    // 0x5610ec: 0xc0400a8  jal         func_1002A0
label_5610f0:
    if (ctx->pc == 0x5610F0u) {
        ctx->pc = 0x5610F0u;
            // 0x5610f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5610F4u;
        goto label_5610f4;
    }
    ctx->pc = 0x5610ECu;
    SET_GPR_U32(ctx, 31, 0x5610F4u);
    ctx->pc = 0x5610F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5610ECu;
            // 0x5610f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5610F4u; }
        if (ctx->pc != 0x5610F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5610F4u; }
        if (ctx->pc != 0x5610F4u) { return; }
    }
    ctx->pc = 0x5610F4u;
label_5610f4:
    // 0x5610f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5610f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5610f8:
    // 0x5610f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5610f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5610fc:
    // 0x5610fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5610fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_561100:
    // 0x561100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x561100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_561104:
    // 0x561104: 0x3e00008  jr          $ra
label_561108:
    if (ctx->pc == 0x561108u) {
        ctx->pc = 0x561108u;
            // 0x561108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x56110Cu;
        goto label_56110c;
    }
    ctx->pc = 0x561104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x561108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561104u;
            // 0x561108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56110Cu;
label_56110c:
    // 0x56110c: 0x0  nop
    ctx->pc = 0x56110cu;
    // NOP
}
