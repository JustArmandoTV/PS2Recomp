#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048FF40
// Address: 0x48ff40 - 0x491490
void sub_0048FF40_0x48ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FF40_0x48ff40");
#endif

    switch (ctx->pc) {
        case 0x48ff40u: goto label_48ff40;
        case 0x48ff44u: goto label_48ff44;
        case 0x48ff48u: goto label_48ff48;
        case 0x48ff4cu: goto label_48ff4c;
        case 0x48ff50u: goto label_48ff50;
        case 0x48ff54u: goto label_48ff54;
        case 0x48ff58u: goto label_48ff58;
        case 0x48ff5cu: goto label_48ff5c;
        case 0x48ff60u: goto label_48ff60;
        case 0x48ff64u: goto label_48ff64;
        case 0x48ff68u: goto label_48ff68;
        case 0x48ff6cu: goto label_48ff6c;
        case 0x48ff70u: goto label_48ff70;
        case 0x48ff74u: goto label_48ff74;
        case 0x48ff78u: goto label_48ff78;
        case 0x48ff7cu: goto label_48ff7c;
        case 0x48ff80u: goto label_48ff80;
        case 0x48ff84u: goto label_48ff84;
        case 0x48ff88u: goto label_48ff88;
        case 0x48ff8cu: goto label_48ff8c;
        case 0x48ff90u: goto label_48ff90;
        case 0x48ff94u: goto label_48ff94;
        case 0x48ff98u: goto label_48ff98;
        case 0x48ff9cu: goto label_48ff9c;
        case 0x48ffa0u: goto label_48ffa0;
        case 0x48ffa4u: goto label_48ffa4;
        case 0x48ffa8u: goto label_48ffa8;
        case 0x48ffacu: goto label_48ffac;
        case 0x48ffb0u: goto label_48ffb0;
        case 0x48ffb4u: goto label_48ffb4;
        case 0x48ffb8u: goto label_48ffb8;
        case 0x48ffbcu: goto label_48ffbc;
        case 0x48ffc0u: goto label_48ffc0;
        case 0x48ffc4u: goto label_48ffc4;
        case 0x48ffc8u: goto label_48ffc8;
        case 0x48ffccu: goto label_48ffcc;
        case 0x48ffd0u: goto label_48ffd0;
        case 0x48ffd4u: goto label_48ffd4;
        case 0x48ffd8u: goto label_48ffd8;
        case 0x48ffdcu: goto label_48ffdc;
        case 0x48ffe0u: goto label_48ffe0;
        case 0x48ffe4u: goto label_48ffe4;
        case 0x48ffe8u: goto label_48ffe8;
        case 0x48ffecu: goto label_48ffec;
        case 0x48fff0u: goto label_48fff0;
        case 0x48fff4u: goto label_48fff4;
        case 0x48fff8u: goto label_48fff8;
        case 0x48fffcu: goto label_48fffc;
        case 0x490000u: goto label_490000;
        case 0x490004u: goto label_490004;
        case 0x490008u: goto label_490008;
        case 0x49000cu: goto label_49000c;
        case 0x490010u: goto label_490010;
        case 0x490014u: goto label_490014;
        case 0x490018u: goto label_490018;
        case 0x49001cu: goto label_49001c;
        case 0x490020u: goto label_490020;
        case 0x490024u: goto label_490024;
        case 0x490028u: goto label_490028;
        case 0x49002cu: goto label_49002c;
        case 0x490030u: goto label_490030;
        case 0x490034u: goto label_490034;
        case 0x490038u: goto label_490038;
        case 0x49003cu: goto label_49003c;
        case 0x490040u: goto label_490040;
        case 0x490044u: goto label_490044;
        case 0x490048u: goto label_490048;
        case 0x49004cu: goto label_49004c;
        case 0x490050u: goto label_490050;
        case 0x490054u: goto label_490054;
        case 0x490058u: goto label_490058;
        case 0x49005cu: goto label_49005c;
        case 0x490060u: goto label_490060;
        case 0x490064u: goto label_490064;
        case 0x490068u: goto label_490068;
        case 0x49006cu: goto label_49006c;
        case 0x490070u: goto label_490070;
        case 0x490074u: goto label_490074;
        case 0x490078u: goto label_490078;
        case 0x49007cu: goto label_49007c;
        case 0x490080u: goto label_490080;
        case 0x490084u: goto label_490084;
        case 0x490088u: goto label_490088;
        case 0x49008cu: goto label_49008c;
        case 0x490090u: goto label_490090;
        case 0x490094u: goto label_490094;
        case 0x490098u: goto label_490098;
        case 0x49009cu: goto label_49009c;
        case 0x4900a0u: goto label_4900a0;
        case 0x4900a4u: goto label_4900a4;
        case 0x4900a8u: goto label_4900a8;
        case 0x4900acu: goto label_4900ac;
        case 0x4900b0u: goto label_4900b0;
        case 0x4900b4u: goto label_4900b4;
        case 0x4900b8u: goto label_4900b8;
        case 0x4900bcu: goto label_4900bc;
        case 0x4900c0u: goto label_4900c0;
        case 0x4900c4u: goto label_4900c4;
        case 0x4900c8u: goto label_4900c8;
        case 0x4900ccu: goto label_4900cc;
        case 0x4900d0u: goto label_4900d0;
        case 0x4900d4u: goto label_4900d4;
        case 0x4900d8u: goto label_4900d8;
        case 0x4900dcu: goto label_4900dc;
        case 0x4900e0u: goto label_4900e0;
        case 0x4900e4u: goto label_4900e4;
        case 0x4900e8u: goto label_4900e8;
        case 0x4900ecu: goto label_4900ec;
        case 0x4900f0u: goto label_4900f0;
        case 0x4900f4u: goto label_4900f4;
        case 0x4900f8u: goto label_4900f8;
        case 0x4900fcu: goto label_4900fc;
        case 0x490100u: goto label_490100;
        case 0x490104u: goto label_490104;
        case 0x490108u: goto label_490108;
        case 0x49010cu: goto label_49010c;
        case 0x490110u: goto label_490110;
        case 0x490114u: goto label_490114;
        case 0x490118u: goto label_490118;
        case 0x49011cu: goto label_49011c;
        case 0x490120u: goto label_490120;
        case 0x490124u: goto label_490124;
        case 0x490128u: goto label_490128;
        case 0x49012cu: goto label_49012c;
        case 0x490130u: goto label_490130;
        case 0x490134u: goto label_490134;
        case 0x490138u: goto label_490138;
        case 0x49013cu: goto label_49013c;
        case 0x490140u: goto label_490140;
        case 0x490144u: goto label_490144;
        case 0x490148u: goto label_490148;
        case 0x49014cu: goto label_49014c;
        case 0x490150u: goto label_490150;
        case 0x490154u: goto label_490154;
        case 0x490158u: goto label_490158;
        case 0x49015cu: goto label_49015c;
        case 0x490160u: goto label_490160;
        case 0x490164u: goto label_490164;
        case 0x490168u: goto label_490168;
        case 0x49016cu: goto label_49016c;
        case 0x490170u: goto label_490170;
        case 0x490174u: goto label_490174;
        case 0x490178u: goto label_490178;
        case 0x49017cu: goto label_49017c;
        case 0x490180u: goto label_490180;
        case 0x490184u: goto label_490184;
        case 0x490188u: goto label_490188;
        case 0x49018cu: goto label_49018c;
        case 0x490190u: goto label_490190;
        case 0x490194u: goto label_490194;
        case 0x490198u: goto label_490198;
        case 0x49019cu: goto label_49019c;
        case 0x4901a0u: goto label_4901a0;
        case 0x4901a4u: goto label_4901a4;
        case 0x4901a8u: goto label_4901a8;
        case 0x4901acu: goto label_4901ac;
        case 0x4901b0u: goto label_4901b0;
        case 0x4901b4u: goto label_4901b4;
        case 0x4901b8u: goto label_4901b8;
        case 0x4901bcu: goto label_4901bc;
        case 0x4901c0u: goto label_4901c0;
        case 0x4901c4u: goto label_4901c4;
        case 0x4901c8u: goto label_4901c8;
        case 0x4901ccu: goto label_4901cc;
        case 0x4901d0u: goto label_4901d0;
        case 0x4901d4u: goto label_4901d4;
        case 0x4901d8u: goto label_4901d8;
        case 0x4901dcu: goto label_4901dc;
        case 0x4901e0u: goto label_4901e0;
        case 0x4901e4u: goto label_4901e4;
        case 0x4901e8u: goto label_4901e8;
        case 0x4901ecu: goto label_4901ec;
        case 0x4901f0u: goto label_4901f0;
        case 0x4901f4u: goto label_4901f4;
        case 0x4901f8u: goto label_4901f8;
        case 0x4901fcu: goto label_4901fc;
        case 0x490200u: goto label_490200;
        case 0x490204u: goto label_490204;
        case 0x490208u: goto label_490208;
        case 0x49020cu: goto label_49020c;
        case 0x490210u: goto label_490210;
        case 0x490214u: goto label_490214;
        case 0x490218u: goto label_490218;
        case 0x49021cu: goto label_49021c;
        case 0x490220u: goto label_490220;
        case 0x490224u: goto label_490224;
        case 0x490228u: goto label_490228;
        case 0x49022cu: goto label_49022c;
        case 0x490230u: goto label_490230;
        case 0x490234u: goto label_490234;
        case 0x490238u: goto label_490238;
        case 0x49023cu: goto label_49023c;
        case 0x490240u: goto label_490240;
        case 0x490244u: goto label_490244;
        case 0x490248u: goto label_490248;
        case 0x49024cu: goto label_49024c;
        case 0x490250u: goto label_490250;
        case 0x490254u: goto label_490254;
        case 0x490258u: goto label_490258;
        case 0x49025cu: goto label_49025c;
        case 0x490260u: goto label_490260;
        case 0x490264u: goto label_490264;
        case 0x490268u: goto label_490268;
        case 0x49026cu: goto label_49026c;
        case 0x490270u: goto label_490270;
        case 0x490274u: goto label_490274;
        case 0x490278u: goto label_490278;
        case 0x49027cu: goto label_49027c;
        case 0x490280u: goto label_490280;
        case 0x490284u: goto label_490284;
        case 0x490288u: goto label_490288;
        case 0x49028cu: goto label_49028c;
        case 0x490290u: goto label_490290;
        case 0x490294u: goto label_490294;
        case 0x490298u: goto label_490298;
        case 0x49029cu: goto label_49029c;
        case 0x4902a0u: goto label_4902a0;
        case 0x4902a4u: goto label_4902a4;
        case 0x4902a8u: goto label_4902a8;
        case 0x4902acu: goto label_4902ac;
        case 0x4902b0u: goto label_4902b0;
        case 0x4902b4u: goto label_4902b4;
        case 0x4902b8u: goto label_4902b8;
        case 0x4902bcu: goto label_4902bc;
        case 0x4902c0u: goto label_4902c0;
        case 0x4902c4u: goto label_4902c4;
        case 0x4902c8u: goto label_4902c8;
        case 0x4902ccu: goto label_4902cc;
        case 0x4902d0u: goto label_4902d0;
        case 0x4902d4u: goto label_4902d4;
        case 0x4902d8u: goto label_4902d8;
        case 0x4902dcu: goto label_4902dc;
        case 0x4902e0u: goto label_4902e0;
        case 0x4902e4u: goto label_4902e4;
        case 0x4902e8u: goto label_4902e8;
        case 0x4902ecu: goto label_4902ec;
        case 0x4902f0u: goto label_4902f0;
        case 0x4902f4u: goto label_4902f4;
        case 0x4902f8u: goto label_4902f8;
        case 0x4902fcu: goto label_4902fc;
        case 0x490300u: goto label_490300;
        case 0x490304u: goto label_490304;
        case 0x490308u: goto label_490308;
        case 0x49030cu: goto label_49030c;
        case 0x490310u: goto label_490310;
        case 0x490314u: goto label_490314;
        case 0x490318u: goto label_490318;
        case 0x49031cu: goto label_49031c;
        case 0x490320u: goto label_490320;
        case 0x490324u: goto label_490324;
        case 0x490328u: goto label_490328;
        case 0x49032cu: goto label_49032c;
        case 0x490330u: goto label_490330;
        case 0x490334u: goto label_490334;
        case 0x490338u: goto label_490338;
        case 0x49033cu: goto label_49033c;
        case 0x490340u: goto label_490340;
        case 0x490344u: goto label_490344;
        case 0x490348u: goto label_490348;
        case 0x49034cu: goto label_49034c;
        case 0x490350u: goto label_490350;
        case 0x490354u: goto label_490354;
        case 0x490358u: goto label_490358;
        case 0x49035cu: goto label_49035c;
        case 0x490360u: goto label_490360;
        case 0x490364u: goto label_490364;
        case 0x490368u: goto label_490368;
        case 0x49036cu: goto label_49036c;
        case 0x490370u: goto label_490370;
        case 0x490374u: goto label_490374;
        case 0x490378u: goto label_490378;
        case 0x49037cu: goto label_49037c;
        case 0x490380u: goto label_490380;
        case 0x490384u: goto label_490384;
        case 0x490388u: goto label_490388;
        case 0x49038cu: goto label_49038c;
        case 0x490390u: goto label_490390;
        case 0x490394u: goto label_490394;
        case 0x490398u: goto label_490398;
        case 0x49039cu: goto label_49039c;
        case 0x4903a0u: goto label_4903a0;
        case 0x4903a4u: goto label_4903a4;
        case 0x4903a8u: goto label_4903a8;
        case 0x4903acu: goto label_4903ac;
        case 0x4903b0u: goto label_4903b0;
        case 0x4903b4u: goto label_4903b4;
        case 0x4903b8u: goto label_4903b8;
        case 0x4903bcu: goto label_4903bc;
        case 0x4903c0u: goto label_4903c0;
        case 0x4903c4u: goto label_4903c4;
        case 0x4903c8u: goto label_4903c8;
        case 0x4903ccu: goto label_4903cc;
        case 0x4903d0u: goto label_4903d0;
        case 0x4903d4u: goto label_4903d4;
        case 0x4903d8u: goto label_4903d8;
        case 0x4903dcu: goto label_4903dc;
        case 0x4903e0u: goto label_4903e0;
        case 0x4903e4u: goto label_4903e4;
        case 0x4903e8u: goto label_4903e8;
        case 0x4903ecu: goto label_4903ec;
        case 0x4903f0u: goto label_4903f0;
        case 0x4903f4u: goto label_4903f4;
        case 0x4903f8u: goto label_4903f8;
        case 0x4903fcu: goto label_4903fc;
        case 0x490400u: goto label_490400;
        case 0x490404u: goto label_490404;
        case 0x490408u: goto label_490408;
        case 0x49040cu: goto label_49040c;
        case 0x490410u: goto label_490410;
        case 0x490414u: goto label_490414;
        case 0x490418u: goto label_490418;
        case 0x49041cu: goto label_49041c;
        case 0x490420u: goto label_490420;
        case 0x490424u: goto label_490424;
        case 0x490428u: goto label_490428;
        case 0x49042cu: goto label_49042c;
        case 0x490430u: goto label_490430;
        case 0x490434u: goto label_490434;
        case 0x490438u: goto label_490438;
        case 0x49043cu: goto label_49043c;
        case 0x490440u: goto label_490440;
        case 0x490444u: goto label_490444;
        case 0x490448u: goto label_490448;
        case 0x49044cu: goto label_49044c;
        case 0x490450u: goto label_490450;
        case 0x490454u: goto label_490454;
        case 0x490458u: goto label_490458;
        case 0x49045cu: goto label_49045c;
        case 0x490460u: goto label_490460;
        case 0x490464u: goto label_490464;
        case 0x490468u: goto label_490468;
        case 0x49046cu: goto label_49046c;
        case 0x490470u: goto label_490470;
        case 0x490474u: goto label_490474;
        case 0x490478u: goto label_490478;
        case 0x49047cu: goto label_49047c;
        case 0x490480u: goto label_490480;
        case 0x490484u: goto label_490484;
        case 0x490488u: goto label_490488;
        case 0x49048cu: goto label_49048c;
        case 0x490490u: goto label_490490;
        case 0x490494u: goto label_490494;
        case 0x490498u: goto label_490498;
        case 0x49049cu: goto label_49049c;
        case 0x4904a0u: goto label_4904a0;
        case 0x4904a4u: goto label_4904a4;
        case 0x4904a8u: goto label_4904a8;
        case 0x4904acu: goto label_4904ac;
        case 0x4904b0u: goto label_4904b0;
        case 0x4904b4u: goto label_4904b4;
        case 0x4904b8u: goto label_4904b8;
        case 0x4904bcu: goto label_4904bc;
        case 0x4904c0u: goto label_4904c0;
        case 0x4904c4u: goto label_4904c4;
        case 0x4904c8u: goto label_4904c8;
        case 0x4904ccu: goto label_4904cc;
        case 0x4904d0u: goto label_4904d0;
        case 0x4904d4u: goto label_4904d4;
        case 0x4904d8u: goto label_4904d8;
        case 0x4904dcu: goto label_4904dc;
        case 0x4904e0u: goto label_4904e0;
        case 0x4904e4u: goto label_4904e4;
        case 0x4904e8u: goto label_4904e8;
        case 0x4904ecu: goto label_4904ec;
        case 0x4904f0u: goto label_4904f0;
        case 0x4904f4u: goto label_4904f4;
        case 0x4904f8u: goto label_4904f8;
        case 0x4904fcu: goto label_4904fc;
        case 0x490500u: goto label_490500;
        case 0x490504u: goto label_490504;
        case 0x490508u: goto label_490508;
        case 0x49050cu: goto label_49050c;
        case 0x490510u: goto label_490510;
        case 0x490514u: goto label_490514;
        case 0x490518u: goto label_490518;
        case 0x49051cu: goto label_49051c;
        case 0x490520u: goto label_490520;
        case 0x490524u: goto label_490524;
        case 0x490528u: goto label_490528;
        case 0x49052cu: goto label_49052c;
        case 0x490530u: goto label_490530;
        case 0x490534u: goto label_490534;
        case 0x490538u: goto label_490538;
        case 0x49053cu: goto label_49053c;
        case 0x490540u: goto label_490540;
        case 0x490544u: goto label_490544;
        case 0x490548u: goto label_490548;
        case 0x49054cu: goto label_49054c;
        case 0x490550u: goto label_490550;
        case 0x490554u: goto label_490554;
        case 0x490558u: goto label_490558;
        case 0x49055cu: goto label_49055c;
        case 0x490560u: goto label_490560;
        case 0x490564u: goto label_490564;
        case 0x490568u: goto label_490568;
        case 0x49056cu: goto label_49056c;
        case 0x490570u: goto label_490570;
        case 0x490574u: goto label_490574;
        case 0x490578u: goto label_490578;
        case 0x49057cu: goto label_49057c;
        case 0x490580u: goto label_490580;
        case 0x490584u: goto label_490584;
        case 0x490588u: goto label_490588;
        case 0x49058cu: goto label_49058c;
        case 0x490590u: goto label_490590;
        case 0x490594u: goto label_490594;
        case 0x490598u: goto label_490598;
        case 0x49059cu: goto label_49059c;
        case 0x4905a0u: goto label_4905a0;
        case 0x4905a4u: goto label_4905a4;
        case 0x4905a8u: goto label_4905a8;
        case 0x4905acu: goto label_4905ac;
        case 0x4905b0u: goto label_4905b0;
        case 0x4905b4u: goto label_4905b4;
        case 0x4905b8u: goto label_4905b8;
        case 0x4905bcu: goto label_4905bc;
        case 0x4905c0u: goto label_4905c0;
        case 0x4905c4u: goto label_4905c4;
        case 0x4905c8u: goto label_4905c8;
        case 0x4905ccu: goto label_4905cc;
        case 0x4905d0u: goto label_4905d0;
        case 0x4905d4u: goto label_4905d4;
        case 0x4905d8u: goto label_4905d8;
        case 0x4905dcu: goto label_4905dc;
        case 0x4905e0u: goto label_4905e0;
        case 0x4905e4u: goto label_4905e4;
        case 0x4905e8u: goto label_4905e8;
        case 0x4905ecu: goto label_4905ec;
        case 0x4905f0u: goto label_4905f0;
        case 0x4905f4u: goto label_4905f4;
        case 0x4905f8u: goto label_4905f8;
        case 0x4905fcu: goto label_4905fc;
        case 0x490600u: goto label_490600;
        case 0x490604u: goto label_490604;
        case 0x490608u: goto label_490608;
        case 0x49060cu: goto label_49060c;
        case 0x490610u: goto label_490610;
        case 0x490614u: goto label_490614;
        case 0x490618u: goto label_490618;
        case 0x49061cu: goto label_49061c;
        case 0x490620u: goto label_490620;
        case 0x490624u: goto label_490624;
        case 0x490628u: goto label_490628;
        case 0x49062cu: goto label_49062c;
        case 0x490630u: goto label_490630;
        case 0x490634u: goto label_490634;
        case 0x490638u: goto label_490638;
        case 0x49063cu: goto label_49063c;
        case 0x490640u: goto label_490640;
        case 0x490644u: goto label_490644;
        case 0x490648u: goto label_490648;
        case 0x49064cu: goto label_49064c;
        case 0x490650u: goto label_490650;
        case 0x490654u: goto label_490654;
        case 0x490658u: goto label_490658;
        case 0x49065cu: goto label_49065c;
        case 0x490660u: goto label_490660;
        case 0x490664u: goto label_490664;
        case 0x490668u: goto label_490668;
        case 0x49066cu: goto label_49066c;
        case 0x490670u: goto label_490670;
        case 0x490674u: goto label_490674;
        case 0x490678u: goto label_490678;
        case 0x49067cu: goto label_49067c;
        case 0x490680u: goto label_490680;
        case 0x490684u: goto label_490684;
        case 0x490688u: goto label_490688;
        case 0x49068cu: goto label_49068c;
        case 0x490690u: goto label_490690;
        case 0x490694u: goto label_490694;
        case 0x490698u: goto label_490698;
        case 0x49069cu: goto label_49069c;
        case 0x4906a0u: goto label_4906a0;
        case 0x4906a4u: goto label_4906a4;
        case 0x4906a8u: goto label_4906a8;
        case 0x4906acu: goto label_4906ac;
        case 0x4906b0u: goto label_4906b0;
        case 0x4906b4u: goto label_4906b4;
        case 0x4906b8u: goto label_4906b8;
        case 0x4906bcu: goto label_4906bc;
        case 0x4906c0u: goto label_4906c0;
        case 0x4906c4u: goto label_4906c4;
        case 0x4906c8u: goto label_4906c8;
        case 0x4906ccu: goto label_4906cc;
        case 0x4906d0u: goto label_4906d0;
        case 0x4906d4u: goto label_4906d4;
        case 0x4906d8u: goto label_4906d8;
        case 0x4906dcu: goto label_4906dc;
        case 0x4906e0u: goto label_4906e0;
        case 0x4906e4u: goto label_4906e4;
        case 0x4906e8u: goto label_4906e8;
        case 0x4906ecu: goto label_4906ec;
        case 0x4906f0u: goto label_4906f0;
        case 0x4906f4u: goto label_4906f4;
        case 0x4906f8u: goto label_4906f8;
        case 0x4906fcu: goto label_4906fc;
        case 0x490700u: goto label_490700;
        case 0x490704u: goto label_490704;
        case 0x490708u: goto label_490708;
        case 0x49070cu: goto label_49070c;
        case 0x490710u: goto label_490710;
        case 0x490714u: goto label_490714;
        case 0x490718u: goto label_490718;
        case 0x49071cu: goto label_49071c;
        case 0x490720u: goto label_490720;
        case 0x490724u: goto label_490724;
        case 0x490728u: goto label_490728;
        case 0x49072cu: goto label_49072c;
        case 0x490730u: goto label_490730;
        case 0x490734u: goto label_490734;
        case 0x490738u: goto label_490738;
        case 0x49073cu: goto label_49073c;
        case 0x490740u: goto label_490740;
        case 0x490744u: goto label_490744;
        case 0x490748u: goto label_490748;
        case 0x49074cu: goto label_49074c;
        case 0x490750u: goto label_490750;
        case 0x490754u: goto label_490754;
        case 0x490758u: goto label_490758;
        case 0x49075cu: goto label_49075c;
        case 0x490760u: goto label_490760;
        case 0x490764u: goto label_490764;
        case 0x490768u: goto label_490768;
        case 0x49076cu: goto label_49076c;
        case 0x490770u: goto label_490770;
        case 0x490774u: goto label_490774;
        case 0x490778u: goto label_490778;
        case 0x49077cu: goto label_49077c;
        case 0x490780u: goto label_490780;
        case 0x490784u: goto label_490784;
        case 0x490788u: goto label_490788;
        case 0x49078cu: goto label_49078c;
        case 0x490790u: goto label_490790;
        case 0x490794u: goto label_490794;
        case 0x490798u: goto label_490798;
        case 0x49079cu: goto label_49079c;
        case 0x4907a0u: goto label_4907a0;
        case 0x4907a4u: goto label_4907a4;
        case 0x4907a8u: goto label_4907a8;
        case 0x4907acu: goto label_4907ac;
        case 0x4907b0u: goto label_4907b0;
        case 0x4907b4u: goto label_4907b4;
        case 0x4907b8u: goto label_4907b8;
        case 0x4907bcu: goto label_4907bc;
        case 0x4907c0u: goto label_4907c0;
        case 0x4907c4u: goto label_4907c4;
        case 0x4907c8u: goto label_4907c8;
        case 0x4907ccu: goto label_4907cc;
        case 0x4907d0u: goto label_4907d0;
        case 0x4907d4u: goto label_4907d4;
        case 0x4907d8u: goto label_4907d8;
        case 0x4907dcu: goto label_4907dc;
        case 0x4907e0u: goto label_4907e0;
        case 0x4907e4u: goto label_4907e4;
        case 0x4907e8u: goto label_4907e8;
        case 0x4907ecu: goto label_4907ec;
        case 0x4907f0u: goto label_4907f0;
        case 0x4907f4u: goto label_4907f4;
        case 0x4907f8u: goto label_4907f8;
        case 0x4907fcu: goto label_4907fc;
        case 0x490800u: goto label_490800;
        case 0x490804u: goto label_490804;
        case 0x490808u: goto label_490808;
        case 0x49080cu: goto label_49080c;
        case 0x490810u: goto label_490810;
        case 0x490814u: goto label_490814;
        case 0x490818u: goto label_490818;
        case 0x49081cu: goto label_49081c;
        case 0x490820u: goto label_490820;
        case 0x490824u: goto label_490824;
        case 0x490828u: goto label_490828;
        case 0x49082cu: goto label_49082c;
        case 0x490830u: goto label_490830;
        case 0x490834u: goto label_490834;
        case 0x490838u: goto label_490838;
        case 0x49083cu: goto label_49083c;
        case 0x490840u: goto label_490840;
        case 0x490844u: goto label_490844;
        case 0x490848u: goto label_490848;
        case 0x49084cu: goto label_49084c;
        case 0x490850u: goto label_490850;
        case 0x490854u: goto label_490854;
        case 0x490858u: goto label_490858;
        case 0x49085cu: goto label_49085c;
        case 0x490860u: goto label_490860;
        case 0x490864u: goto label_490864;
        case 0x490868u: goto label_490868;
        case 0x49086cu: goto label_49086c;
        case 0x490870u: goto label_490870;
        case 0x490874u: goto label_490874;
        case 0x490878u: goto label_490878;
        case 0x49087cu: goto label_49087c;
        case 0x490880u: goto label_490880;
        case 0x490884u: goto label_490884;
        case 0x490888u: goto label_490888;
        case 0x49088cu: goto label_49088c;
        case 0x490890u: goto label_490890;
        case 0x490894u: goto label_490894;
        case 0x490898u: goto label_490898;
        case 0x49089cu: goto label_49089c;
        case 0x4908a0u: goto label_4908a0;
        case 0x4908a4u: goto label_4908a4;
        case 0x4908a8u: goto label_4908a8;
        case 0x4908acu: goto label_4908ac;
        case 0x4908b0u: goto label_4908b0;
        case 0x4908b4u: goto label_4908b4;
        case 0x4908b8u: goto label_4908b8;
        case 0x4908bcu: goto label_4908bc;
        case 0x4908c0u: goto label_4908c0;
        case 0x4908c4u: goto label_4908c4;
        case 0x4908c8u: goto label_4908c8;
        case 0x4908ccu: goto label_4908cc;
        case 0x4908d0u: goto label_4908d0;
        case 0x4908d4u: goto label_4908d4;
        case 0x4908d8u: goto label_4908d8;
        case 0x4908dcu: goto label_4908dc;
        case 0x4908e0u: goto label_4908e0;
        case 0x4908e4u: goto label_4908e4;
        case 0x4908e8u: goto label_4908e8;
        case 0x4908ecu: goto label_4908ec;
        case 0x4908f0u: goto label_4908f0;
        case 0x4908f4u: goto label_4908f4;
        case 0x4908f8u: goto label_4908f8;
        case 0x4908fcu: goto label_4908fc;
        case 0x490900u: goto label_490900;
        case 0x490904u: goto label_490904;
        case 0x490908u: goto label_490908;
        case 0x49090cu: goto label_49090c;
        case 0x490910u: goto label_490910;
        case 0x490914u: goto label_490914;
        case 0x490918u: goto label_490918;
        case 0x49091cu: goto label_49091c;
        case 0x490920u: goto label_490920;
        case 0x490924u: goto label_490924;
        case 0x490928u: goto label_490928;
        case 0x49092cu: goto label_49092c;
        case 0x490930u: goto label_490930;
        case 0x490934u: goto label_490934;
        case 0x490938u: goto label_490938;
        case 0x49093cu: goto label_49093c;
        case 0x490940u: goto label_490940;
        case 0x490944u: goto label_490944;
        case 0x490948u: goto label_490948;
        case 0x49094cu: goto label_49094c;
        case 0x490950u: goto label_490950;
        case 0x490954u: goto label_490954;
        case 0x490958u: goto label_490958;
        case 0x49095cu: goto label_49095c;
        case 0x490960u: goto label_490960;
        case 0x490964u: goto label_490964;
        case 0x490968u: goto label_490968;
        case 0x49096cu: goto label_49096c;
        case 0x490970u: goto label_490970;
        case 0x490974u: goto label_490974;
        case 0x490978u: goto label_490978;
        case 0x49097cu: goto label_49097c;
        case 0x490980u: goto label_490980;
        case 0x490984u: goto label_490984;
        case 0x490988u: goto label_490988;
        case 0x49098cu: goto label_49098c;
        case 0x490990u: goto label_490990;
        case 0x490994u: goto label_490994;
        case 0x490998u: goto label_490998;
        case 0x49099cu: goto label_49099c;
        case 0x4909a0u: goto label_4909a0;
        case 0x4909a4u: goto label_4909a4;
        case 0x4909a8u: goto label_4909a8;
        case 0x4909acu: goto label_4909ac;
        case 0x4909b0u: goto label_4909b0;
        case 0x4909b4u: goto label_4909b4;
        case 0x4909b8u: goto label_4909b8;
        case 0x4909bcu: goto label_4909bc;
        case 0x4909c0u: goto label_4909c0;
        case 0x4909c4u: goto label_4909c4;
        case 0x4909c8u: goto label_4909c8;
        case 0x4909ccu: goto label_4909cc;
        case 0x4909d0u: goto label_4909d0;
        case 0x4909d4u: goto label_4909d4;
        case 0x4909d8u: goto label_4909d8;
        case 0x4909dcu: goto label_4909dc;
        case 0x4909e0u: goto label_4909e0;
        case 0x4909e4u: goto label_4909e4;
        case 0x4909e8u: goto label_4909e8;
        case 0x4909ecu: goto label_4909ec;
        case 0x4909f0u: goto label_4909f0;
        case 0x4909f4u: goto label_4909f4;
        case 0x4909f8u: goto label_4909f8;
        case 0x4909fcu: goto label_4909fc;
        case 0x490a00u: goto label_490a00;
        case 0x490a04u: goto label_490a04;
        case 0x490a08u: goto label_490a08;
        case 0x490a0cu: goto label_490a0c;
        case 0x490a10u: goto label_490a10;
        case 0x490a14u: goto label_490a14;
        case 0x490a18u: goto label_490a18;
        case 0x490a1cu: goto label_490a1c;
        case 0x490a20u: goto label_490a20;
        case 0x490a24u: goto label_490a24;
        case 0x490a28u: goto label_490a28;
        case 0x490a2cu: goto label_490a2c;
        case 0x490a30u: goto label_490a30;
        case 0x490a34u: goto label_490a34;
        case 0x490a38u: goto label_490a38;
        case 0x490a3cu: goto label_490a3c;
        case 0x490a40u: goto label_490a40;
        case 0x490a44u: goto label_490a44;
        case 0x490a48u: goto label_490a48;
        case 0x490a4cu: goto label_490a4c;
        case 0x490a50u: goto label_490a50;
        case 0x490a54u: goto label_490a54;
        case 0x490a58u: goto label_490a58;
        case 0x490a5cu: goto label_490a5c;
        case 0x490a60u: goto label_490a60;
        case 0x490a64u: goto label_490a64;
        case 0x490a68u: goto label_490a68;
        case 0x490a6cu: goto label_490a6c;
        case 0x490a70u: goto label_490a70;
        case 0x490a74u: goto label_490a74;
        case 0x490a78u: goto label_490a78;
        case 0x490a7cu: goto label_490a7c;
        case 0x490a80u: goto label_490a80;
        case 0x490a84u: goto label_490a84;
        case 0x490a88u: goto label_490a88;
        case 0x490a8cu: goto label_490a8c;
        case 0x490a90u: goto label_490a90;
        case 0x490a94u: goto label_490a94;
        case 0x490a98u: goto label_490a98;
        case 0x490a9cu: goto label_490a9c;
        case 0x490aa0u: goto label_490aa0;
        case 0x490aa4u: goto label_490aa4;
        case 0x490aa8u: goto label_490aa8;
        case 0x490aacu: goto label_490aac;
        case 0x490ab0u: goto label_490ab0;
        case 0x490ab4u: goto label_490ab4;
        case 0x490ab8u: goto label_490ab8;
        case 0x490abcu: goto label_490abc;
        case 0x490ac0u: goto label_490ac0;
        case 0x490ac4u: goto label_490ac4;
        case 0x490ac8u: goto label_490ac8;
        case 0x490accu: goto label_490acc;
        case 0x490ad0u: goto label_490ad0;
        case 0x490ad4u: goto label_490ad4;
        case 0x490ad8u: goto label_490ad8;
        case 0x490adcu: goto label_490adc;
        case 0x490ae0u: goto label_490ae0;
        case 0x490ae4u: goto label_490ae4;
        case 0x490ae8u: goto label_490ae8;
        case 0x490aecu: goto label_490aec;
        case 0x490af0u: goto label_490af0;
        case 0x490af4u: goto label_490af4;
        case 0x490af8u: goto label_490af8;
        case 0x490afcu: goto label_490afc;
        case 0x490b00u: goto label_490b00;
        case 0x490b04u: goto label_490b04;
        case 0x490b08u: goto label_490b08;
        case 0x490b0cu: goto label_490b0c;
        case 0x490b10u: goto label_490b10;
        case 0x490b14u: goto label_490b14;
        case 0x490b18u: goto label_490b18;
        case 0x490b1cu: goto label_490b1c;
        case 0x490b20u: goto label_490b20;
        case 0x490b24u: goto label_490b24;
        case 0x490b28u: goto label_490b28;
        case 0x490b2cu: goto label_490b2c;
        case 0x490b30u: goto label_490b30;
        case 0x490b34u: goto label_490b34;
        case 0x490b38u: goto label_490b38;
        case 0x490b3cu: goto label_490b3c;
        case 0x490b40u: goto label_490b40;
        case 0x490b44u: goto label_490b44;
        case 0x490b48u: goto label_490b48;
        case 0x490b4cu: goto label_490b4c;
        case 0x490b50u: goto label_490b50;
        case 0x490b54u: goto label_490b54;
        case 0x490b58u: goto label_490b58;
        case 0x490b5cu: goto label_490b5c;
        case 0x490b60u: goto label_490b60;
        case 0x490b64u: goto label_490b64;
        case 0x490b68u: goto label_490b68;
        case 0x490b6cu: goto label_490b6c;
        case 0x490b70u: goto label_490b70;
        case 0x490b74u: goto label_490b74;
        case 0x490b78u: goto label_490b78;
        case 0x490b7cu: goto label_490b7c;
        case 0x490b80u: goto label_490b80;
        case 0x490b84u: goto label_490b84;
        case 0x490b88u: goto label_490b88;
        case 0x490b8cu: goto label_490b8c;
        case 0x490b90u: goto label_490b90;
        case 0x490b94u: goto label_490b94;
        case 0x490b98u: goto label_490b98;
        case 0x490b9cu: goto label_490b9c;
        case 0x490ba0u: goto label_490ba0;
        case 0x490ba4u: goto label_490ba4;
        case 0x490ba8u: goto label_490ba8;
        case 0x490bacu: goto label_490bac;
        case 0x490bb0u: goto label_490bb0;
        case 0x490bb4u: goto label_490bb4;
        case 0x490bb8u: goto label_490bb8;
        case 0x490bbcu: goto label_490bbc;
        case 0x490bc0u: goto label_490bc0;
        case 0x490bc4u: goto label_490bc4;
        case 0x490bc8u: goto label_490bc8;
        case 0x490bccu: goto label_490bcc;
        case 0x490bd0u: goto label_490bd0;
        case 0x490bd4u: goto label_490bd4;
        case 0x490bd8u: goto label_490bd8;
        case 0x490bdcu: goto label_490bdc;
        case 0x490be0u: goto label_490be0;
        case 0x490be4u: goto label_490be4;
        case 0x490be8u: goto label_490be8;
        case 0x490becu: goto label_490bec;
        case 0x490bf0u: goto label_490bf0;
        case 0x490bf4u: goto label_490bf4;
        case 0x490bf8u: goto label_490bf8;
        case 0x490bfcu: goto label_490bfc;
        case 0x490c00u: goto label_490c00;
        case 0x490c04u: goto label_490c04;
        case 0x490c08u: goto label_490c08;
        case 0x490c0cu: goto label_490c0c;
        case 0x490c10u: goto label_490c10;
        case 0x490c14u: goto label_490c14;
        case 0x490c18u: goto label_490c18;
        case 0x490c1cu: goto label_490c1c;
        case 0x490c20u: goto label_490c20;
        case 0x490c24u: goto label_490c24;
        case 0x490c28u: goto label_490c28;
        case 0x490c2cu: goto label_490c2c;
        case 0x490c30u: goto label_490c30;
        case 0x490c34u: goto label_490c34;
        case 0x490c38u: goto label_490c38;
        case 0x490c3cu: goto label_490c3c;
        case 0x490c40u: goto label_490c40;
        case 0x490c44u: goto label_490c44;
        case 0x490c48u: goto label_490c48;
        case 0x490c4cu: goto label_490c4c;
        case 0x490c50u: goto label_490c50;
        case 0x490c54u: goto label_490c54;
        case 0x490c58u: goto label_490c58;
        case 0x490c5cu: goto label_490c5c;
        case 0x490c60u: goto label_490c60;
        case 0x490c64u: goto label_490c64;
        case 0x490c68u: goto label_490c68;
        case 0x490c6cu: goto label_490c6c;
        case 0x490c70u: goto label_490c70;
        case 0x490c74u: goto label_490c74;
        case 0x490c78u: goto label_490c78;
        case 0x490c7cu: goto label_490c7c;
        case 0x490c80u: goto label_490c80;
        case 0x490c84u: goto label_490c84;
        case 0x490c88u: goto label_490c88;
        case 0x490c8cu: goto label_490c8c;
        case 0x490c90u: goto label_490c90;
        case 0x490c94u: goto label_490c94;
        case 0x490c98u: goto label_490c98;
        case 0x490c9cu: goto label_490c9c;
        case 0x490ca0u: goto label_490ca0;
        case 0x490ca4u: goto label_490ca4;
        case 0x490ca8u: goto label_490ca8;
        case 0x490cacu: goto label_490cac;
        case 0x490cb0u: goto label_490cb0;
        case 0x490cb4u: goto label_490cb4;
        case 0x490cb8u: goto label_490cb8;
        case 0x490cbcu: goto label_490cbc;
        case 0x490cc0u: goto label_490cc0;
        case 0x490cc4u: goto label_490cc4;
        case 0x490cc8u: goto label_490cc8;
        case 0x490cccu: goto label_490ccc;
        case 0x490cd0u: goto label_490cd0;
        case 0x490cd4u: goto label_490cd4;
        case 0x490cd8u: goto label_490cd8;
        case 0x490cdcu: goto label_490cdc;
        case 0x490ce0u: goto label_490ce0;
        case 0x490ce4u: goto label_490ce4;
        case 0x490ce8u: goto label_490ce8;
        case 0x490cecu: goto label_490cec;
        case 0x490cf0u: goto label_490cf0;
        case 0x490cf4u: goto label_490cf4;
        case 0x490cf8u: goto label_490cf8;
        case 0x490cfcu: goto label_490cfc;
        case 0x490d00u: goto label_490d00;
        case 0x490d04u: goto label_490d04;
        case 0x490d08u: goto label_490d08;
        case 0x490d0cu: goto label_490d0c;
        case 0x490d10u: goto label_490d10;
        case 0x490d14u: goto label_490d14;
        case 0x490d18u: goto label_490d18;
        case 0x490d1cu: goto label_490d1c;
        case 0x490d20u: goto label_490d20;
        case 0x490d24u: goto label_490d24;
        case 0x490d28u: goto label_490d28;
        case 0x490d2cu: goto label_490d2c;
        case 0x490d30u: goto label_490d30;
        case 0x490d34u: goto label_490d34;
        case 0x490d38u: goto label_490d38;
        case 0x490d3cu: goto label_490d3c;
        case 0x490d40u: goto label_490d40;
        case 0x490d44u: goto label_490d44;
        case 0x490d48u: goto label_490d48;
        case 0x490d4cu: goto label_490d4c;
        case 0x490d50u: goto label_490d50;
        case 0x490d54u: goto label_490d54;
        case 0x490d58u: goto label_490d58;
        case 0x490d5cu: goto label_490d5c;
        case 0x490d60u: goto label_490d60;
        case 0x490d64u: goto label_490d64;
        case 0x490d68u: goto label_490d68;
        case 0x490d6cu: goto label_490d6c;
        case 0x490d70u: goto label_490d70;
        case 0x490d74u: goto label_490d74;
        case 0x490d78u: goto label_490d78;
        case 0x490d7cu: goto label_490d7c;
        case 0x490d80u: goto label_490d80;
        case 0x490d84u: goto label_490d84;
        case 0x490d88u: goto label_490d88;
        case 0x490d8cu: goto label_490d8c;
        case 0x490d90u: goto label_490d90;
        case 0x490d94u: goto label_490d94;
        case 0x490d98u: goto label_490d98;
        case 0x490d9cu: goto label_490d9c;
        case 0x490da0u: goto label_490da0;
        case 0x490da4u: goto label_490da4;
        case 0x490da8u: goto label_490da8;
        case 0x490dacu: goto label_490dac;
        case 0x490db0u: goto label_490db0;
        case 0x490db4u: goto label_490db4;
        case 0x490db8u: goto label_490db8;
        case 0x490dbcu: goto label_490dbc;
        case 0x490dc0u: goto label_490dc0;
        case 0x490dc4u: goto label_490dc4;
        case 0x490dc8u: goto label_490dc8;
        case 0x490dccu: goto label_490dcc;
        case 0x490dd0u: goto label_490dd0;
        case 0x490dd4u: goto label_490dd4;
        case 0x490dd8u: goto label_490dd8;
        case 0x490ddcu: goto label_490ddc;
        case 0x490de0u: goto label_490de0;
        case 0x490de4u: goto label_490de4;
        case 0x490de8u: goto label_490de8;
        case 0x490decu: goto label_490dec;
        case 0x490df0u: goto label_490df0;
        case 0x490df4u: goto label_490df4;
        case 0x490df8u: goto label_490df8;
        case 0x490dfcu: goto label_490dfc;
        case 0x490e00u: goto label_490e00;
        case 0x490e04u: goto label_490e04;
        case 0x490e08u: goto label_490e08;
        case 0x490e0cu: goto label_490e0c;
        case 0x490e10u: goto label_490e10;
        case 0x490e14u: goto label_490e14;
        case 0x490e18u: goto label_490e18;
        case 0x490e1cu: goto label_490e1c;
        case 0x490e20u: goto label_490e20;
        case 0x490e24u: goto label_490e24;
        case 0x490e28u: goto label_490e28;
        case 0x490e2cu: goto label_490e2c;
        case 0x490e30u: goto label_490e30;
        case 0x490e34u: goto label_490e34;
        case 0x490e38u: goto label_490e38;
        case 0x490e3cu: goto label_490e3c;
        case 0x490e40u: goto label_490e40;
        case 0x490e44u: goto label_490e44;
        case 0x490e48u: goto label_490e48;
        case 0x490e4cu: goto label_490e4c;
        case 0x490e50u: goto label_490e50;
        case 0x490e54u: goto label_490e54;
        case 0x490e58u: goto label_490e58;
        case 0x490e5cu: goto label_490e5c;
        case 0x490e60u: goto label_490e60;
        case 0x490e64u: goto label_490e64;
        case 0x490e68u: goto label_490e68;
        case 0x490e6cu: goto label_490e6c;
        case 0x490e70u: goto label_490e70;
        case 0x490e74u: goto label_490e74;
        case 0x490e78u: goto label_490e78;
        case 0x490e7cu: goto label_490e7c;
        case 0x490e80u: goto label_490e80;
        case 0x490e84u: goto label_490e84;
        case 0x490e88u: goto label_490e88;
        case 0x490e8cu: goto label_490e8c;
        case 0x490e90u: goto label_490e90;
        case 0x490e94u: goto label_490e94;
        case 0x490e98u: goto label_490e98;
        case 0x490e9cu: goto label_490e9c;
        case 0x490ea0u: goto label_490ea0;
        case 0x490ea4u: goto label_490ea4;
        case 0x490ea8u: goto label_490ea8;
        case 0x490eacu: goto label_490eac;
        case 0x490eb0u: goto label_490eb0;
        case 0x490eb4u: goto label_490eb4;
        case 0x490eb8u: goto label_490eb8;
        case 0x490ebcu: goto label_490ebc;
        case 0x490ec0u: goto label_490ec0;
        case 0x490ec4u: goto label_490ec4;
        case 0x490ec8u: goto label_490ec8;
        case 0x490eccu: goto label_490ecc;
        case 0x490ed0u: goto label_490ed0;
        case 0x490ed4u: goto label_490ed4;
        case 0x490ed8u: goto label_490ed8;
        case 0x490edcu: goto label_490edc;
        case 0x490ee0u: goto label_490ee0;
        case 0x490ee4u: goto label_490ee4;
        case 0x490ee8u: goto label_490ee8;
        case 0x490eecu: goto label_490eec;
        case 0x490ef0u: goto label_490ef0;
        case 0x490ef4u: goto label_490ef4;
        case 0x490ef8u: goto label_490ef8;
        case 0x490efcu: goto label_490efc;
        case 0x490f00u: goto label_490f00;
        case 0x490f04u: goto label_490f04;
        case 0x490f08u: goto label_490f08;
        case 0x490f0cu: goto label_490f0c;
        case 0x490f10u: goto label_490f10;
        case 0x490f14u: goto label_490f14;
        case 0x490f18u: goto label_490f18;
        case 0x490f1cu: goto label_490f1c;
        case 0x490f20u: goto label_490f20;
        case 0x490f24u: goto label_490f24;
        case 0x490f28u: goto label_490f28;
        case 0x490f2cu: goto label_490f2c;
        case 0x490f30u: goto label_490f30;
        case 0x490f34u: goto label_490f34;
        case 0x490f38u: goto label_490f38;
        case 0x490f3cu: goto label_490f3c;
        case 0x490f40u: goto label_490f40;
        case 0x490f44u: goto label_490f44;
        case 0x490f48u: goto label_490f48;
        case 0x490f4cu: goto label_490f4c;
        case 0x490f50u: goto label_490f50;
        case 0x490f54u: goto label_490f54;
        case 0x490f58u: goto label_490f58;
        case 0x490f5cu: goto label_490f5c;
        case 0x490f60u: goto label_490f60;
        case 0x490f64u: goto label_490f64;
        case 0x490f68u: goto label_490f68;
        case 0x490f6cu: goto label_490f6c;
        case 0x490f70u: goto label_490f70;
        case 0x490f74u: goto label_490f74;
        case 0x490f78u: goto label_490f78;
        case 0x490f7cu: goto label_490f7c;
        case 0x490f80u: goto label_490f80;
        case 0x490f84u: goto label_490f84;
        case 0x490f88u: goto label_490f88;
        case 0x490f8cu: goto label_490f8c;
        case 0x490f90u: goto label_490f90;
        case 0x490f94u: goto label_490f94;
        case 0x490f98u: goto label_490f98;
        case 0x490f9cu: goto label_490f9c;
        case 0x490fa0u: goto label_490fa0;
        case 0x490fa4u: goto label_490fa4;
        case 0x490fa8u: goto label_490fa8;
        case 0x490facu: goto label_490fac;
        case 0x490fb0u: goto label_490fb0;
        case 0x490fb4u: goto label_490fb4;
        case 0x490fb8u: goto label_490fb8;
        case 0x490fbcu: goto label_490fbc;
        case 0x490fc0u: goto label_490fc0;
        case 0x490fc4u: goto label_490fc4;
        case 0x490fc8u: goto label_490fc8;
        case 0x490fccu: goto label_490fcc;
        case 0x490fd0u: goto label_490fd0;
        case 0x490fd4u: goto label_490fd4;
        case 0x490fd8u: goto label_490fd8;
        case 0x490fdcu: goto label_490fdc;
        case 0x490fe0u: goto label_490fe0;
        case 0x490fe4u: goto label_490fe4;
        case 0x490fe8u: goto label_490fe8;
        case 0x490fecu: goto label_490fec;
        case 0x490ff0u: goto label_490ff0;
        case 0x490ff4u: goto label_490ff4;
        case 0x490ff8u: goto label_490ff8;
        case 0x490ffcu: goto label_490ffc;
        case 0x491000u: goto label_491000;
        case 0x491004u: goto label_491004;
        case 0x491008u: goto label_491008;
        case 0x49100cu: goto label_49100c;
        case 0x491010u: goto label_491010;
        case 0x491014u: goto label_491014;
        case 0x491018u: goto label_491018;
        case 0x49101cu: goto label_49101c;
        case 0x491020u: goto label_491020;
        case 0x491024u: goto label_491024;
        case 0x491028u: goto label_491028;
        case 0x49102cu: goto label_49102c;
        case 0x491030u: goto label_491030;
        case 0x491034u: goto label_491034;
        case 0x491038u: goto label_491038;
        case 0x49103cu: goto label_49103c;
        case 0x491040u: goto label_491040;
        case 0x491044u: goto label_491044;
        case 0x491048u: goto label_491048;
        case 0x49104cu: goto label_49104c;
        case 0x491050u: goto label_491050;
        case 0x491054u: goto label_491054;
        case 0x491058u: goto label_491058;
        case 0x49105cu: goto label_49105c;
        case 0x491060u: goto label_491060;
        case 0x491064u: goto label_491064;
        case 0x491068u: goto label_491068;
        case 0x49106cu: goto label_49106c;
        case 0x491070u: goto label_491070;
        case 0x491074u: goto label_491074;
        case 0x491078u: goto label_491078;
        case 0x49107cu: goto label_49107c;
        case 0x491080u: goto label_491080;
        case 0x491084u: goto label_491084;
        case 0x491088u: goto label_491088;
        case 0x49108cu: goto label_49108c;
        case 0x491090u: goto label_491090;
        case 0x491094u: goto label_491094;
        case 0x491098u: goto label_491098;
        case 0x49109cu: goto label_49109c;
        case 0x4910a0u: goto label_4910a0;
        case 0x4910a4u: goto label_4910a4;
        case 0x4910a8u: goto label_4910a8;
        case 0x4910acu: goto label_4910ac;
        case 0x4910b0u: goto label_4910b0;
        case 0x4910b4u: goto label_4910b4;
        case 0x4910b8u: goto label_4910b8;
        case 0x4910bcu: goto label_4910bc;
        case 0x4910c0u: goto label_4910c0;
        case 0x4910c4u: goto label_4910c4;
        case 0x4910c8u: goto label_4910c8;
        case 0x4910ccu: goto label_4910cc;
        case 0x4910d0u: goto label_4910d0;
        case 0x4910d4u: goto label_4910d4;
        case 0x4910d8u: goto label_4910d8;
        case 0x4910dcu: goto label_4910dc;
        case 0x4910e0u: goto label_4910e0;
        case 0x4910e4u: goto label_4910e4;
        case 0x4910e8u: goto label_4910e8;
        case 0x4910ecu: goto label_4910ec;
        case 0x4910f0u: goto label_4910f0;
        case 0x4910f4u: goto label_4910f4;
        case 0x4910f8u: goto label_4910f8;
        case 0x4910fcu: goto label_4910fc;
        case 0x491100u: goto label_491100;
        case 0x491104u: goto label_491104;
        case 0x491108u: goto label_491108;
        case 0x49110cu: goto label_49110c;
        case 0x491110u: goto label_491110;
        case 0x491114u: goto label_491114;
        case 0x491118u: goto label_491118;
        case 0x49111cu: goto label_49111c;
        case 0x491120u: goto label_491120;
        case 0x491124u: goto label_491124;
        case 0x491128u: goto label_491128;
        case 0x49112cu: goto label_49112c;
        case 0x491130u: goto label_491130;
        case 0x491134u: goto label_491134;
        case 0x491138u: goto label_491138;
        case 0x49113cu: goto label_49113c;
        case 0x491140u: goto label_491140;
        case 0x491144u: goto label_491144;
        case 0x491148u: goto label_491148;
        case 0x49114cu: goto label_49114c;
        case 0x491150u: goto label_491150;
        case 0x491154u: goto label_491154;
        case 0x491158u: goto label_491158;
        case 0x49115cu: goto label_49115c;
        case 0x491160u: goto label_491160;
        case 0x491164u: goto label_491164;
        case 0x491168u: goto label_491168;
        case 0x49116cu: goto label_49116c;
        case 0x491170u: goto label_491170;
        case 0x491174u: goto label_491174;
        case 0x491178u: goto label_491178;
        case 0x49117cu: goto label_49117c;
        case 0x491180u: goto label_491180;
        case 0x491184u: goto label_491184;
        case 0x491188u: goto label_491188;
        case 0x49118cu: goto label_49118c;
        case 0x491190u: goto label_491190;
        case 0x491194u: goto label_491194;
        case 0x491198u: goto label_491198;
        case 0x49119cu: goto label_49119c;
        case 0x4911a0u: goto label_4911a0;
        case 0x4911a4u: goto label_4911a4;
        case 0x4911a8u: goto label_4911a8;
        case 0x4911acu: goto label_4911ac;
        case 0x4911b0u: goto label_4911b0;
        case 0x4911b4u: goto label_4911b4;
        case 0x4911b8u: goto label_4911b8;
        case 0x4911bcu: goto label_4911bc;
        case 0x4911c0u: goto label_4911c0;
        case 0x4911c4u: goto label_4911c4;
        case 0x4911c8u: goto label_4911c8;
        case 0x4911ccu: goto label_4911cc;
        case 0x4911d0u: goto label_4911d0;
        case 0x4911d4u: goto label_4911d4;
        case 0x4911d8u: goto label_4911d8;
        case 0x4911dcu: goto label_4911dc;
        case 0x4911e0u: goto label_4911e0;
        case 0x4911e4u: goto label_4911e4;
        case 0x4911e8u: goto label_4911e8;
        case 0x4911ecu: goto label_4911ec;
        case 0x4911f0u: goto label_4911f0;
        case 0x4911f4u: goto label_4911f4;
        case 0x4911f8u: goto label_4911f8;
        case 0x4911fcu: goto label_4911fc;
        case 0x491200u: goto label_491200;
        case 0x491204u: goto label_491204;
        case 0x491208u: goto label_491208;
        case 0x49120cu: goto label_49120c;
        case 0x491210u: goto label_491210;
        case 0x491214u: goto label_491214;
        case 0x491218u: goto label_491218;
        case 0x49121cu: goto label_49121c;
        case 0x491220u: goto label_491220;
        case 0x491224u: goto label_491224;
        case 0x491228u: goto label_491228;
        case 0x49122cu: goto label_49122c;
        case 0x491230u: goto label_491230;
        case 0x491234u: goto label_491234;
        case 0x491238u: goto label_491238;
        case 0x49123cu: goto label_49123c;
        case 0x491240u: goto label_491240;
        case 0x491244u: goto label_491244;
        case 0x491248u: goto label_491248;
        case 0x49124cu: goto label_49124c;
        case 0x491250u: goto label_491250;
        case 0x491254u: goto label_491254;
        case 0x491258u: goto label_491258;
        case 0x49125cu: goto label_49125c;
        case 0x491260u: goto label_491260;
        case 0x491264u: goto label_491264;
        case 0x491268u: goto label_491268;
        case 0x49126cu: goto label_49126c;
        case 0x491270u: goto label_491270;
        case 0x491274u: goto label_491274;
        case 0x491278u: goto label_491278;
        case 0x49127cu: goto label_49127c;
        case 0x491280u: goto label_491280;
        case 0x491284u: goto label_491284;
        case 0x491288u: goto label_491288;
        case 0x49128cu: goto label_49128c;
        case 0x491290u: goto label_491290;
        case 0x491294u: goto label_491294;
        case 0x491298u: goto label_491298;
        case 0x49129cu: goto label_49129c;
        case 0x4912a0u: goto label_4912a0;
        case 0x4912a4u: goto label_4912a4;
        case 0x4912a8u: goto label_4912a8;
        case 0x4912acu: goto label_4912ac;
        case 0x4912b0u: goto label_4912b0;
        case 0x4912b4u: goto label_4912b4;
        case 0x4912b8u: goto label_4912b8;
        case 0x4912bcu: goto label_4912bc;
        case 0x4912c0u: goto label_4912c0;
        case 0x4912c4u: goto label_4912c4;
        case 0x4912c8u: goto label_4912c8;
        case 0x4912ccu: goto label_4912cc;
        case 0x4912d0u: goto label_4912d0;
        case 0x4912d4u: goto label_4912d4;
        case 0x4912d8u: goto label_4912d8;
        case 0x4912dcu: goto label_4912dc;
        case 0x4912e0u: goto label_4912e0;
        case 0x4912e4u: goto label_4912e4;
        case 0x4912e8u: goto label_4912e8;
        case 0x4912ecu: goto label_4912ec;
        case 0x4912f0u: goto label_4912f0;
        case 0x4912f4u: goto label_4912f4;
        case 0x4912f8u: goto label_4912f8;
        case 0x4912fcu: goto label_4912fc;
        case 0x491300u: goto label_491300;
        case 0x491304u: goto label_491304;
        case 0x491308u: goto label_491308;
        case 0x49130cu: goto label_49130c;
        case 0x491310u: goto label_491310;
        case 0x491314u: goto label_491314;
        case 0x491318u: goto label_491318;
        case 0x49131cu: goto label_49131c;
        case 0x491320u: goto label_491320;
        case 0x491324u: goto label_491324;
        case 0x491328u: goto label_491328;
        case 0x49132cu: goto label_49132c;
        case 0x491330u: goto label_491330;
        case 0x491334u: goto label_491334;
        case 0x491338u: goto label_491338;
        case 0x49133cu: goto label_49133c;
        case 0x491340u: goto label_491340;
        case 0x491344u: goto label_491344;
        case 0x491348u: goto label_491348;
        case 0x49134cu: goto label_49134c;
        case 0x491350u: goto label_491350;
        case 0x491354u: goto label_491354;
        case 0x491358u: goto label_491358;
        case 0x49135cu: goto label_49135c;
        case 0x491360u: goto label_491360;
        case 0x491364u: goto label_491364;
        case 0x491368u: goto label_491368;
        case 0x49136cu: goto label_49136c;
        case 0x491370u: goto label_491370;
        case 0x491374u: goto label_491374;
        case 0x491378u: goto label_491378;
        case 0x49137cu: goto label_49137c;
        case 0x491380u: goto label_491380;
        case 0x491384u: goto label_491384;
        case 0x491388u: goto label_491388;
        case 0x49138cu: goto label_49138c;
        case 0x491390u: goto label_491390;
        case 0x491394u: goto label_491394;
        case 0x491398u: goto label_491398;
        case 0x49139cu: goto label_49139c;
        case 0x4913a0u: goto label_4913a0;
        case 0x4913a4u: goto label_4913a4;
        case 0x4913a8u: goto label_4913a8;
        case 0x4913acu: goto label_4913ac;
        case 0x4913b0u: goto label_4913b0;
        case 0x4913b4u: goto label_4913b4;
        case 0x4913b8u: goto label_4913b8;
        case 0x4913bcu: goto label_4913bc;
        case 0x4913c0u: goto label_4913c0;
        case 0x4913c4u: goto label_4913c4;
        case 0x4913c8u: goto label_4913c8;
        case 0x4913ccu: goto label_4913cc;
        case 0x4913d0u: goto label_4913d0;
        case 0x4913d4u: goto label_4913d4;
        case 0x4913d8u: goto label_4913d8;
        case 0x4913dcu: goto label_4913dc;
        case 0x4913e0u: goto label_4913e0;
        case 0x4913e4u: goto label_4913e4;
        case 0x4913e8u: goto label_4913e8;
        case 0x4913ecu: goto label_4913ec;
        case 0x4913f0u: goto label_4913f0;
        case 0x4913f4u: goto label_4913f4;
        case 0x4913f8u: goto label_4913f8;
        case 0x4913fcu: goto label_4913fc;
        case 0x491400u: goto label_491400;
        case 0x491404u: goto label_491404;
        case 0x491408u: goto label_491408;
        case 0x49140cu: goto label_49140c;
        case 0x491410u: goto label_491410;
        case 0x491414u: goto label_491414;
        case 0x491418u: goto label_491418;
        case 0x49141cu: goto label_49141c;
        case 0x491420u: goto label_491420;
        case 0x491424u: goto label_491424;
        case 0x491428u: goto label_491428;
        case 0x49142cu: goto label_49142c;
        case 0x491430u: goto label_491430;
        case 0x491434u: goto label_491434;
        case 0x491438u: goto label_491438;
        case 0x49143cu: goto label_49143c;
        case 0x491440u: goto label_491440;
        case 0x491444u: goto label_491444;
        case 0x491448u: goto label_491448;
        case 0x49144cu: goto label_49144c;
        case 0x491450u: goto label_491450;
        case 0x491454u: goto label_491454;
        case 0x491458u: goto label_491458;
        case 0x49145cu: goto label_49145c;
        case 0x491460u: goto label_491460;
        case 0x491464u: goto label_491464;
        case 0x491468u: goto label_491468;
        case 0x49146cu: goto label_49146c;
        case 0x491470u: goto label_491470;
        case 0x491474u: goto label_491474;
        case 0x491478u: goto label_491478;
        case 0x49147cu: goto label_49147c;
        case 0x491480u: goto label_491480;
        case 0x491484u: goto label_491484;
        case 0x491488u: goto label_491488;
        case 0x49148cu: goto label_49148c;
        default: break;
    }

    ctx->pc = 0x48ff40u;

label_48ff40:
    // 0x48ff40: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x48ff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_48ff44:
    // 0x48ff44: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x48ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_48ff48:
    // 0x48ff48: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x48ff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_48ff4c:
    // 0x48ff4c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x48ff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_48ff50:
    // 0x48ff50: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x48ff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_48ff54:
    // 0x48ff54: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x48ff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_48ff58:
    // 0x48ff58: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x48ff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_48ff5c:
    // 0x48ff5c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x48ff5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_48ff60:
    // 0x48ff60: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x48ff60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48ff64:
    // 0x48ff64: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x48ff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_48ff68:
    // 0x48ff68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x48ff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_48ff6c:
    // 0x48ff6c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48ff6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48ff70:
    // 0x48ff70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_48ff74:
    // 0x48ff74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48ff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_48ff78:
    // 0x48ff78: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x48ff78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_48ff7c:
    // 0x48ff7c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x48ff7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_48ff80:
    // 0x48ff80: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x48ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_48ff84:
    // 0x48ff84: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x48ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_48ff88:
    // 0x48ff88: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x48ff88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_48ff8c:
    // 0x48ff8c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x48ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_48ff90:
    // 0x48ff90: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x48ff90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_48ff94:
    // 0x48ff94: 0xafa30218  sw          $v1, 0x218($sp)
    ctx->pc = 0x48ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 3));
label_48ff98:
    // 0x48ff98: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x48ff98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_48ff9c:
    // 0x48ff9c: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x48ff9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ffa0:
    // 0x48ffa0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x48ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_48ffa4:
    // 0x48ffa4: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x48ffa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_48ffa8:
    // 0x48ffa8: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x48ffa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_48ffac:
    // 0x48ffac: 0x90e8fff0  lbu         $t0, -0x10($a3)
    ctx->pc = 0x48ffacu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967280)));
label_48ffb0:
    // 0x48ffb0: 0xdce7fff8  ld          $a3, -0x8($a3)
    ctx->pc = 0x48ffb0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 4294967288)));
label_48ffb4:
    // 0x48ffb4: 0xac85004c  sw          $a1, 0x4C($a0)
    ctx->pc = 0x48ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
label_48ffb8:
    // 0x48ffb8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x48ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_48ffbc:
    // 0x48ffbc: 0xffa70128  sd          $a3, 0x128($sp)
    ctx->pc = 0x48ffbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 7));
label_48ffc0:
    // 0x48ffc0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x48ffc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_48ffc4:
    // 0x48ffc4: 0xafa50210  sw          $a1, 0x210($sp)
    ctx->pc = 0x48ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
label_48ffc8:
    // 0x48ffc8: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x48ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ffcc:
    // 0x48ffcc: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x48ffccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_48ffd0:
    // 0x48ffd0: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x48ffd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_48ffd4:
    // 0x48ffd4: 0x90b2fff0  lbu         $s2, -0x10($a1)
    ctx->pc = 0x48ffd4u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_48ffd8:
    // 0x48ffd8: 0xdca5fff8  ld          $a1, -0x8($a1)
    ctx->pc = 0x48ffd8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_48ffdc:
    // 0x48ffdc: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x48ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
label_48ffe0:
    // 0x48ffe0: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x48ffe0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48ffe4:
    // 0x48ffe4: 0x11020005  beq         $t0, $v0, . + 4 + (0x5 << 2)
label_48ffe8:
    if (ctx->pc == 0x48FFE8u) {
        ctx->pc = 0x48FFE8u;
            // 0x48ffe8: 0xffa50118  sd          $a1, 0x118($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 5));
        ctx->pc = 0x48FFECu;
        goto label_48ffec;
    }
    ctx->pc = 0x48FFE4u;
    {
        const bool branch_taken_0x48ffe4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x48FFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FFE4u;
            // 0x48ffe8: 0xffa50118  sd          $a1, 0x118($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ffe4) {
            ctx->pc = 0x48FFFCu;
            goto label_48fffc;
        }
    }
    ctx->pc = 0x48FFECu;
label_48ffec:
    // 0x48ffec: 0x51000009  beql        $t0, $zero, . + 4 + (0x9 << 2)
label_48fff0:
    if (ctx->pc == 0x48FFF0u) {
        ctx->pc = 0x48FFF0u;
            // 0x48fff0: 0x8fb30128  lw          $s3, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->pc = 0x48FFF4u;
        goto label_48fff4;
    }
    ctx->pc = 0x48FFECu;
    {
        const bool branch_taken_0x48ffec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ffec) {
            ctx->pc = 0x48FFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48FFECu;
            // 0x48fff0: 0x8fb30128  lw          $s3, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490014u;
            goto label_490014;
        }
    }
    ctx->pc = 0x48FFF4u;
label_48fff4:
    // 0x48fff4: 0x10000008  b           . + 4 + (0x8 << 2)
label_48fff8:
    if (ctx->pc == 0x48FFF8u) {
        ctx->pc = 0x48FFF8u;
            // 0x48fff8: 0x8e230074  lw          $v1, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->pc = 0x48FFFCu;
        goto label_48fffc;
    }
    ctx->pc = 0x48FFF4u;
    {
        const bool branch_taken_0x48fff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FFF4u;
            // 0x48fff8: 0x8e230074  lw          $v1, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fff4) {
            ctx->pc = 0x490018u;
            goto label_490018;
        }
    }
    ctx->pc = 0x48FFFCu;
label_48fffc:
    // 0x48fffc: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x48fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_490000:
    // 0x490000: 0x93a30128  lbu         $v1, 0x128($sp)
    ctx->pc = 0x490000u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 296)));
label_490004:
    // 0x490004: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x490004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_490008:
    // 0x490008: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x490008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_49000c:
    // 0x49000c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_490010:
    // 0x490010: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x490010u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_490014:
    // 0x490014: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x490014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_490018:
    // 0x490018: 0x8e300078  lw          $s0, 0x78($s1)
    ctx->pc = 0x490018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_49001c:
    // 0x49001c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x49001cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_490020:
    // 0x490020: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x490020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_490024:
    // 0x490024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x490024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_490028:
    // 0x490028: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x490028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_49002c:
    // 0x49002c: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x49002cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_490030:
    // 0x490030: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x490030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_490034:
    // 0x490034: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x490034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_490038:
    // 0x490038: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_49003c:
    if (ctx->pc == 0x49003Cu) {
        ctx->pc = 0x490040u;
        goto label_490040;
    }
    ctx->pc = 0x490038u;
    {
        const bool branch_taken_0x490038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490038) {
            ctx->pc = 0x4900D0u;
            goto label_4900d0;
        }
    }
    ctx->pc = 0x490040u;
label_490040:
    // 0x490040: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x490040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_490044:
    // 0x490044: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x490044u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_490048:
    // 0x490048: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x490048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_49004c:
    // 0x49004c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_490050:
    if (ctx->pc == 0x490050u) {
        ctx->pc = 0x490050u;
            // 0x490050: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->pc = 0x490054u;
        goto label_490054;
    }
    ctx->pc = 0x49004Cu;
    {
        const bool branch_taken_0x49004c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49004c) {
            ctx->pc = 0x490050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49004Cu;
            // 0x490050: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490074u;
            goto label_490074;
        }
    }
    ctx->pc = 0x490054u;
label_490054:
    // 0x490054: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x490054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_490058:
    // 0x490058: 0xc04af96  jal         func_12BE58
label_49005c:
    if (ctx->pc == 0x49005Cu) {
        ctx->pc = 0x49005Cu;
            // 0x49005c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x490060u;
        goto label_490060;
    }
    ctx->pc = 0x490058u;
    SET_GPR_U32(ctx, 31, 0x490060u);
    ctx->pc = 0x49005Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490058u;
            // 0x49005c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490060u; }
        if (ctx->pc != 0x490060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490060u; }
        if (ctx->pc != 0x490060u) { return; }
    }
    ctx->pc = 0x490060u;
label_490060:
    // 0x490060: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_490064:
    if (ctx->pc == 0x490064u) {
        ctx->pc = 0x490064u;
            // 0x490064: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x490068u;
        goto label_490068;
    }
    ctx->pc = 0x490060u;
    {
        const bool branch_taken_0x490060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x490060) {
            ctx->pc = 0x490064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490060u;
            // 0x490064: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490098u;
            goto label_490098;
        }
    }
    ctx->pc = 0x490068u;
label_490068:
    // 0x490068: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x490068u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_49006c:
    // 0x49006c: 0x10000019  b           . + 4 + (0x19 << 2)
label_490070:
    if (ctx->pc == 0x490070u) {
        ctx->pc = 0x490070u;
            // 0x490070: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->pc = 0x490074u;
        goto label_490074;
    }
    ctx->pc = 0x49006Cu;
    {
        const bool branch_taken_0x49006c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49006Cu;
            // 0x490070: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49006c) {
            ctx->pc = 0x4900D4u;
            goto label_4900d4;
        }
    }
    ctx->pc = 0x490074u;
label_490074:
    // 0x490074: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x490074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_490078:
    // 0x490078: 0xc04af96  jal         func_12BE58
label_49007c:
    if (ctx->pc == 0x49007Cu) {
        ctx->pc = 0x49007Cu;
            // 0x49007c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x490080u;
        goto label_490080;
    }
    ctx->pc = 0x490078u;
    SET_GPR_U32(ctx, 31, 0x490080u);
    ctx->pc = 0x49007Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490078u;
            // 0x49007c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490080u; }
        if (ctx->pc != 0x490080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490080u; }
        if (ctx->pc != 0x490080u) { return; }
    }
    ctx->pc = 0x490080u;
label_490080:
    // 0x490080: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_490084:
    if (ctx->pc == 0x490084u) {
        ctx->pc = 0x490088u;
        goto label_490088;
    }
    ctx->pc = 0x490080u;
    {
        const bool branch_taken_0x490080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x490080) {
            ctx->pc = 0x490094u;
            goto label_490094;
        }
    }
    ctx->pc = 0x490088u;
label_490088:
    // 0x490088: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x490088u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_49008c:
    // 0x49008c: 0x10000011  b           . + 4 + (0x11 << 2)
label_490090:
    if (ctx->pc == 0x490090u) {
        ctx->pc = 0x490090u;
            // 0x490090: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->pc = 0x490094u;
        goto label_490094;
    }
    ctx->pc = 0x49008Cu;
    {
        const bool branch_taken_0x49008c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49008Cu;
            // 0x490090: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49008c) {
            ctx->pc = 0x4900D4u;
            goto label_4900d4;
        }
    }
    ctx->pc = 0x490094u;
label_490094:
    // 0x490094: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x490094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_490098:
    // 0x490098: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x490098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_49009c:
    // 0x49009c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x49009cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4900a0:
    // 0x4900a0: 0x2450001c  addiu       $s0, $v0, 0x1C
    ctx->pc = 0x4900a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_4900a4:
    // 0x4900a4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x4900a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4900a8:
    // 0x4900a8: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x4900a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_4900ac:
    // 0x4900ac: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4900acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4900b0:
    // 0x4900b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4900b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4900b4:
    // 0x4900b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4900b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4900b8:
    // 0x4900b8: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x4900b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_4900bc:
    // 0x4900bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4900bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4900c0:
    // 0x4900c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4900c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4900c4:
    // 0x4900c4: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
label_4900c8:
    if (ctx->pc == 0x4900C8u) {
        ctx->pc = 0x4900C8u;
            // 0x4900c8: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x4900CCu;
        goto label_4900cc;
    }
    ctx->pc = 0x4900C4u;
    {
        const bool branch_taken_0x4900c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4900c4) {
            ctx->pc = 0x4900C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4900C4u;
            // 0x4900c8: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490044u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_490044;
        }
    }
    ctx->pc = 0x4900CCu;
label_4900cc:
    // 0x4900cc: 0x0  nop
    ctx->pc = 0x4900ccu;
    // NOP
label_4900d0:
    // 0x4900d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4900d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4900d4:
    // 0x4900d4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4900d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4900d8:
    // 0x4900d8: 0x50400497  beql        $v0, $zero, . + 4 + (0x497 << 2)
label_4900dc:
    if (ctx->pc == 0x4900DCu) {
        ctx->pc = 0x4900DCu;
            // 0x4900dc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x4900E0u;
        goto label_4900e0;
    }
    ctx->pc = 0x4900D8u;
    {
        const bool branch_taken_0x4900d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4900d8) {
            ctx->pc = 0x4900DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4900D8u;
            // 0x4900dc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491338u;
            goto label_491338;
        }
    }
    ctx->pc = 0x4900E0u;
label_4900e0:
    // 0x4900e0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4900e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4900e4:
    // 0x4900e4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4900e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4900e8:
    // 0x4900e8: 0xc04af96  jal         func_12BE58
label_4900ec:
    if (ctx->pc == 0x4900ECu) {
        ctx->pc = 0x4900ECu;
            // 0x4900ec: 0x24a50810  addiu       $a1, $a1, 0x810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2064));
        ctx->pc = 0x4900F0u;
        goto label_4900f0;
    }
    ctx->pc = 0x4900E8u;
    SET_GPR_U32(ctx, 31, 0x4900F0u);
    ctx->pc = 0x4900ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4900E8u;
            // 0x4900ec: 0x24a50810  addiu       $a1, $a1, 0x810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4900F0u; }
        if (ctx->pc != 0x4900F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4900F0u; }
        if (ctx->pc != 0x4900F0u) { return; }
    }
    ctx->pc = 0x4900F0u;
label_4900f0:
    // 0x4900f0: 0x544000a5  bnel        $v0, $zero, . + 4 + (0xA5 << 2)
label_4900f4:
    if (ctx->pc == 0x4900F4u) {
        ctx->pc = 0x4900F4u;
            // 0x4900f4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x4900F8u;
        goto label_4900f8;
    }
    ctx->pc = 0x4900F0u;
    {
        const bool branch_taken_0x4900f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4900f0) {
            ctx->pc = 0x4900F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4900F0u;
            // 0x4900f4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490388u;
            goto label_490388;
        }
    }
    ctx->pc = 0x4900F8u;
label_4900f8:
    // 0x4900f8: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x4900f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_4900fc:
    // 0x4900fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4900fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_490100:
    // 0x490100: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x490100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_490104:
    // 0x490104: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x490104u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_490108:
    // 0x490108: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x490108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_49010c:
    // 0x49010c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49010cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_490110:
    // 0x490110: 0xafa60208  sw          $a2, 0x208($sp)
    ctx->pc = 0x490110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 6));
label_490114:
    // 0x490114: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x490114u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_490118:
    // 0x490118: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x490118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49011c:
    // 0x49011c: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x49011cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_490120:
    // 0x490120: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x490120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_490124:
    // 0x490124: 0x90c7fff0  lbu         $a3, -0x10($a2)
    ctx->pc = 0x490124u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_490128:
    // 0x490128: 0xdcc6fff8  ld          $a2, -0x8($a2)
    ctx->pc = 0x490128u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_49012c:
    // 0x49012c: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x49012cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
label_490130:
    // 0x490130: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x490130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_490134:
    // 0x490134: 0xffa600f8  sd          $a2, 0xF8($sp)
    ctx->pc = 0x490134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 6));
label_490138:
    // 0x490138: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x490138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_49013c:
    // 0x49013c: 0xafa30200  sw          $v1, 0x200($sp)
    ctx->pc = 0x49013cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
label_490140:
    // 0x490140: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x490140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_490144:
    // 0x490144: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x490144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_490148:
    // 0x490148: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x490148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_49014c:
    // 0x49014c: 0x9083fff0  lbu         $v1, -0x10($a0)
    ctx->pc = 0x49014cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_490150:
    // 0x490150: 0xa3a30100  sb          $v1, 0x100($sp)
    ctx->pc = 0x490150u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 3));
label_490154:
    // 0x490154: 0xdc83fff8  ld          $v1, -0x8($a0)
    ctx->pc = 0x490154u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_490158:
    // 0x490158: 0xffa30108  sd          $v1, 0x108($sp)
    ctx->pc = 0x490158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 3));
label_49015c:
    // 0x49015c: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x49015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_490160:
    // 0x490160: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x490160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_490164:
    // 0x490164: 0x10e2001d  beq         $a3, $v0, . + 4 + (0x1D << 2)
label_490168:
    if (ctx->pc == 0x490168u) {
        ctx->pc = 0x490168u;
            // 0x490168: 0xaea3004c  sw          $v1, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x49016Cu;
        goto label_49016c;
    }
    ctx->pc = 0x490164u;
    {
        const bool branch_taken_0x490164 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x490168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490164u;
            // 0x490168: 0xaea3004c  sw          $v1, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490164) {
            ctx->pc = 0x4901DCu;
            goto label_4901dc;
        }
    }
    ctx->pc = 0x49016Cu;
label_49016c:
    // 0x49016c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49016cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490170:
    // 0x490170: 0x50e20021  beql        $a3, $v0, . + 4 + (0x21 << 2)
label_490174:
    if (ctx->pc == 0x490174u) {
        ctx->pc = 0x490174u;
            // 0x490174: 0xc7b400f8  lwc1        $f20, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x490178u;
        goto label_490178;
    }
    ctx->pc = 0x490170u;
    {
        const bool branch_taken_0x490170 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x490170) {
            ctx->pc = 0x490174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490170u;
            // 0x490174: 0xc7b400f8  lwc1        $f20, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4901F8u;
            goto label_4901f8;
        }
    }
    ctx->pc = 0x490178u;
label_490178:
    // 0x490178: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x490178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_49017c:
    // 0x49017c: 0x50e20013  beql        $a3, $v0, . + 4 + (0x13 << 2)
label_490180:
    if (ctx->pc == 0x490180u) {
        ctx->pc = 0x490180u;
            // 0x490180: 0xdfa400f8  ld          $a0, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->pc = 0x490184u;
        goto label_490184;
    }
    ctx->pc = 0x49017Cu;
    {
        const bool branch_taken_0x49017c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x49017c) {
            ctx->pc = 0x490180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49017Cu;
            // 0x490180: 0xdfa400f8  ld          $a0, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4901CCu;
            goto label_4901cc;
        }
    }
    ctx->pc = 0x490184u;
label_490184:
    // 0x490184: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x490184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_490188:
    // 0x490188: 0x50e20003  beql        $a3, $v0, . + 4 + (0x3 << 2)
label_49018c:
    if (ctx->pc == 0x49018Cu) {
        ctx->pc = 0x49018Cu;
            // 0x49018c: 0x8fa200f8  lw          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->pc = 0x490190u;
        goto label_490190;
    }
    ctx->pc = 0x490188u;
    {
        const bool branch_taken_0x490188 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x490188) {
            ctx->pc = 0x49018Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490188u;
            // 0x49018c: 0x8fa200f8  lw          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490198u;
            goto label_490198;
        }
    }
    ctx->pc = 0x490190u;
label_490190:
    // 0x490190: 0x1000001a  b           . + 4 + (0x1A << 2)
label_490194:
    if (ctx->pc == 0x490194u) {
        ctx->pc = 0x490194u;
            // 0x490194: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->pc = 0x490198u;
        goto label_490198;
    }
    ctx->pc = 0x490190u;
    {
        const bool branch_taken_0x490190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490190u;
            // 0x490194: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490190) {
            ctx->pc = 0x4901FCu;
            goto label_4901fc;
        }
    }
    ctx->pc = 0x490198u;
label_490198:
    // 0x490198: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_49019c:
    if (ctx->pc == 0x49019Cu) {
        ctx->pc = 0x49019Cu;
            // 0x49019c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4901A0u;
        goto label_4901a0;
    }
    ctx->pc = 0x490198u;
    {
        const bool branch_taken_0x490198 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x490198) {
            ctx->pc = 0x49019Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490198u;
            // 0x49019c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4901ACu;
            goto label_4901ac;
        }
    }
    ctx->pc = 0x4901A0u;
label_4901a0:
    // 0x4901a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4901a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4901a4:
    // 0x4901a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4901a8:
    if (ctx->pc == 0x4901A8u) {
        ctx->pc = 0x4901A8u;
            // 0x4901a8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4901ACu;
        goto label_4901ac;
    }
    ctx->pc = 0x4901A4u;
    {
        const bool branch_taken_0x4901a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4901A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4901A4u;
            // 0x4901a8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4901a4) {
            ctx->pc = 0x4901C4u;
            goto label_4901c4;
        }
    }
    ctx->pc = 0x4901ACu;
label_4901ac:
    // 0x4901ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4901acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4901b0:
    // 0x4901b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4901b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4901b4:
    // 0x4901b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4901b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4901b8:
    // 0x4901b8: 0x0  nop
    ctx->pc = 0x4901b8u;
    // NOP
label_4901bc:
    // 0x4901bc: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x4901bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_4901c0:
    // 0x4901c0: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x4901c0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_4901c4:
    // 0x4901c4: 0x1000000c  b           . + 4 + (0xC << 2)
label_4901c8:
    if (ctx->pc == 0x4901C8u) {
        ctx->pc = 0x4901CCu;
        goto label_4901cc;
    }
    ctx->pc = 0x4901C4u;
    {
        const bool branch_taken_0x4901c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4901c4) {
            ctx->pc = 0x4901F8u;
            goto label_4901f8;
        }
    }
    ctx->pc = 0x4901CCu;
label_4901cc:
    // 0x4901cc: 0xc0497dc  jal         func_125F70
label_4901d0:
    if (ctx->pc == 0x4901D0u) {
        ctx->pc = 0x4901D4u;
        goto label_4901d4;
    }
    ctx->pc = 0x4901CCu;
    SET_GPR_U32(ctx, 31, 0x4901D4u);
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4901D4u; }
        if (ctx->pc != 0x4901D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4901D4u; }
        if (ctx->pc != 0x4901D4u) { return; }
    }
    ctx->pc = 0x4901D4u;
label_4901d4:
    // 0x4901d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_4901d8:
    if (ctx->pc == 0x4901D8u) {
        ctx->pc = 0x4901D8u;
            // 0x4901d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4901DCu;
        goto label_4901dc;
    }
    ctx->pc = 0x4901D4u;
    {
        const bool branch_taken_0x4901d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4901D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4901D4u;
            // 0x4901d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4901d4) {
            ctx->pc = 0x4901F8u;
            goto label_4901f8;
        }
    }
    ctx->pc = 0x4901DCu;
label_4901dc:
    // 0x4901dc: 0x93a200f8  lbu         $v0, 0xF8($sp)
    ctx->pc = 0x4901dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 248)));
label_4901e0:
    // 0x4901e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4901e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4901e4:
    // 0x4901e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4901e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4901e8:
    // 0x4901e8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4901e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4901ec:
    // 0x4901ec: 0xc124524  jal         func_491490
label_4901f0:
    if (ctx->pc == 0x4901F0u) {
        ctx->pc = 0x4901F0u;
            // 0x4901f0: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x4901F4u;
        goto label_4901f4;
    }
    ctx->pc = 0x4901ECu;
    SET_GPR_U32(ctx, 31, 0x4901F4u);
    ctx->pc = 0x4901F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4901ECu;
            // 0x4901f0: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4901F4u; }
        if (ctx->pc != 0x4901F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4901F4u; }
        if (ctx->pc != 0x4901F4u) { return; }
    }
    ctx->pc = 0x4901F4u;
label_4901f4:
    // 0x4901f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4901f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4901f8:
    // 0x4901f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4901f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4901fc:
    // 0x4901fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4901fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490200:
    // 0x490200: 0x0  nop
    ctx->pc = 0x490200u;
    // NOP
label_490204:
    // 0x490204: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x490204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_490208:
    // 0x490208: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_49020c:
    if (ctx->pc == 0x49020Cu) {
        ctx->pc = 0x49020Cu;
            // 0x49020c: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x490210u;
        goto label_490210;
    }
    ctx->pc = 0x490208u;
    {
        const bool branch_taken_0x490208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x490208) {
            ctx->pc = 0x49020Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490208u;
            // 0x49020c: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x490220u;
            goto label_490220;
        }
    }
    ctx->pc = 0x490210u;
label_490210:
    // 0x490210: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x490210u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_490214:
    // 0x490214: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x490214u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_490218:
    // 0x490218: 0x10000007  b           . + 4 + (0x7 << 2)
label_49021c:
    if (ctx->pc == 0x49021Cu) {
        ctx->pc = 0x49021Cu;
            // 0x49021c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x490220u;
        goto label_490220;
    }
    ctx->pc = 0x490218u;
    {
        const bool branch_taken_0x490218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49021Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490218u;
            // 0x49021c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x490218) {
            ctx->pc = 0x490238u;
            goto label_490238;
        }
    }
    ctx->pc = 0x490220u;
label_490220:
    // 0x490220: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x490220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_490224:
    // 0x490224: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x490224u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_490228:
    // 0x490228: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x490228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_49022c:
    // 0x49022c: 0x0  nop
    ctx->pc = 0x49022cu;
    // NOP
label_490230:
    // 0x490230: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x490230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_490234:
    // 0x490234: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x490234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_490238:
    // 0x490238: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x490238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_49023c:
    // 0x49023c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x49023cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_490240:
    // 0x490240: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x490240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_490244:
    // 0x490244: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_490248:
    if (ctx->pc == 0x490248u) {
        ctx->pc = 0x490248u;
            // 0x490248: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x49024Cu;
        goto label_49024c;
    }
    ctx->pc = 0x490244u;
    {
        const bool branch_taken_0x490244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490244) {
            ctx->pc = 0x490248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490244u;
            // 0x490248: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490258u;
            goto label_490258;
        }
    }
    ctx->pc = 0x49024Cu;
label_49024c:
    // 0x49024c: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x49024cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_490250:
    // 0x490250: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x490250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_490254:
    // 0x490254: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x490254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_490258:
    // 0x490258: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x490258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_49025c:
    // 0x49025c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_490260:
    if (ctx->pc == 0x490260u) {
        ctx->pc = 0x490260u;
            // 0x490260: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x490264u;
        goto label_490264;
    }
    ctx->pc = 0x49025Cu;
    {
        const bool branch_taken_0x49025c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49025c) {
            ctx->pc = 0x490260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49025Cu;
            // 0x490260: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x490270u;
            goto label_490270;
        }
    }
    ctx->pc = 0x490264u;
label_490264:
    // 0x490264: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x490264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_490268:
    // 0x490268: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x490268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_49026c:
    // 0x49026c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x49026cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_490270:
    // 0x490270: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x490270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_490274:
    // 0x490274: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x490274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_490278:
    // 0x490278: 0x24429760  addiu       $v0, $v0, -0x68A0
    ctx->pc = 0x490278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940512));
label_49027c:
    // 0x49027c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x49027cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_490280:
    // 0x490280: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x490280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_490284:
    // 0x490284: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x490284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_490288:
    // 0x490288: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x490288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49028c:
    // 0x49028c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x49028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_490290:
    // 0x490290: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x490290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_490294:
    // 0x490294: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_490298:
    if (ctx->pc == 0x490298u) {
        ctx->pc = 0x490298u;
            // 0x490298: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x49029Cu;
        goto label_49029c;
    }
    ctx->pc = 0x490294u;
    {
        const bool branch_taken_0x490294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490294) {
            ctx->pc = 0x490298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490294u;
            // 0x490298: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490358u;
            goto label_490358;
        }
    }
    ctx->pc = 0x49029Cu;
label_49029c:
    // 0x49029c: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x49029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
label_4902a0:
    // 0x4902a0: 0x344200f0  ori         $v0, $v0, 0xF0
    ctx->pc = 0x4902a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)240);
label_4902a4:
    // 0x4902a4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4902a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4902a8:
    // 0x4902a8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_4902ac:
    if (ctx->pc == 0x4902ACu) {
        ctx->pc = 0x4902ACu;
            // 0x4902ac: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x4902B0u;
        goto label_4902b0;
    }
    ctx->pc = 0x4902A8u;
    {
        const bool branch_taken_0x4902a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4902a8) {
            ctx->pc = 0x4902ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4902A8u;
            // 0x4902ac: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4902D0u;
            goto label_4902d0;
        }
    }
    ctx->pc = 0x4902B0u;
label_4902b0:
    // 0x4902b0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4902b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4902b4:
    // 0x4902b4: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x4902b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_4902b8:
    // 0x4902b8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_4902bc:
    if (ctx->pc == 0x4902BCu) {
        ctx->pc = 0x4902BCu;
            // 0x4902bc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4902C0u;
        goto label_4902c0;
    }
    ctx->pc = 0x4902B8u;
    {
        const bool branch_taken_0x4902b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4902b8) {
            ctx->pc = 0x4902BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4902B8u;
            // 0x4902bc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490328u;
            goto label_490328;
        }
    }
    ctx->pc = 0x4902C0u;
label_4902c0:
    // 0x4902c0: 0xc073234  jal         func_1CC8D0
label_4902c4:
    if (ctx->pc == 0x4902C4u) {
        ctx->pc = 0x4902C4u;
            // 0x4902c4: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x4902C8u;
        goto label_4902c8;
    }
    ctx->pc = 0x4902C0u;
    SET_GPR_U32(ctx, 31, 0x4902C8u);
    ctx->pc = 0x4902C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4902C0u;
            // 0x4902c4: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4902C8u; }
        if (ctx->pc != 0x4902C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4902C8u; }
        if (ctx->pc != 0x4902C8u) { return; }
    }
    ctx->pc = 0x4902C8u;
label_4902c8:
    // 0x4902c8: 0x10000016  b           . + 4 + (0x16 << 2)
label_4902cc:
    if (ctx->pc == 0x4902CCu) {
        ctx->pc = 0x4902D0u;
        goto label_4902d0;
    }
    ctx->pc = 0x4902C8u;
    {
        const bool branch_taken_0x4902c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4902c8) {
            ctx->pc = 0x490324u;
            goto label_490324;
        }
    }
    ctx->pc = 0x4902D0u;
label_4902d0:
    // 0x4902d0: 0x34620402  ori         $v0, $v1, 0x402
    ctx->pc = 0x4902d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1026);
label_4902d4:
    // 0x4902d4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4902d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4902d8:
    // 0x4902d8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_4902dc:
    if (ctx->pc == 0x4902DCu) {
        ctx->pc = 0x4902DCu;
            // 0x4902dc: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x4902E0u;
        goto label_4902e0;
    }
    ctx->pc = 0x4902D8u;
    {
        const bool branch_taken_0x4902d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4902d8) {
            ctx->pc = 0x4902DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4902D8u;
            // 0x4902dc: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x490300u;
            goto label_490300;
        }
    }
    ctx->pc = 0x4902E0u;
label_4902e0:
    // 0x4902e0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4902e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4902e4:
    // 0x4902e4: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x4902e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_4902e8:
    // 0x4902e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4902ec:
    if (ctx->pc == 0x4902ECu) {
        ctx->pc = 0x4902F0u;
        goto label_4902f0;
    }
    ctx->pc = 0x4902E8u;
    {
        const bool branch_taken_0x4902e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4902e8) {
            ctx->pc = 0x490324u;
            goto label_490324;
        }
    }
    ctx->pc = 0x4902F0u;
label_4902f0:
    // 0x4902f0: 0xc073234  jal         func_1CC8D0
label_4902f4:
    if (ctx->pc == 0x4902F4u) {
        ctx->pc = 0x4902F4u;
            // 0x4902f4: 0x346400a9  ori         $a0, $v1, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4902F8u;
        goto label_4902f8;
    }
    ctx->pc = 0x4902F0u;
    SET_GPR_U32(ctx, 31, 0x4902F8u);
    ctx->pc = 0x4902F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4902F0u;
            // 0x4902f4: 0x346400a9  ori         $a0, $v1, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4902F8u; }
        if (ctx->pc != 0x4902F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4902F8u; }
        if (ctx->pc != 0x4902F8u) { return; }
    }
    ctx->pc = 0x4902F8u;
label_4902f8:
    // 0x4902f8: 0x1000000a  b           . + 4 + (0xA << 2)
label_4902fc:
    if (ctx->pc == 0x4902FCu) {
        ctx->pc = 0x490300u;
        goto label_490300;
    }
    ctx->pc = 0x4902F8u;
    {
        const bool branch_taken_0x4902f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4902f8) {
            ctx->pc = 0x490324u;
            goto label_490324;
        }
    }
    ctx->pc = 0x490300u;
label_490300:
    // 0x490300: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_490304:
    if (ctx->pc == 0x490304u) {
        ctx->pc = 0x490308u;
        goto label_490308;
    }
    ctx->pc = 0x490300u;
    {
        const bool branch_taken_0x490300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490300) {
            ctx->pc = 0x490324u;
            goto label_490324;
        }
    }
    ctx->pc = 0x490308u;
label_490308:
    // 0x490308: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x490308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_49030c:
    // 0x49030c: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x49030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_490310:
    // 0x490310: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_490314:
    if (ctx->pc == 0x490314u) {
        ctx->pc = 0x490318u;
        goto label_490318;
    }
    ctx->pc = 0x490310u;
    {
        const bool branch_taken_0x490310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490310) {
            ctx->pc = 0x490324u;
            goto label_490324;
        }
    }
    ctx->pc = 0x490318u;
label_490318:
    // 0x490318: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x490318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_49031c:
    // 0x49031c: 0xc073234  jal         func_1CC8D0
label_490320:
    if (ctx->pc == 0x490320u) {
        ctx->pc = 0x490320u;
            // 0x490320: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x490324u;
        goto label_490324;
    }
    ctx->pc = 0x49031Cu;
    SET_GPR_U32(ctx, 31, 0x490324u);
    ctx->pc = 0x490320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49031Cu;
            // 0x490320: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490324u; }
        if (ctx->pc != 0x490324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490324u; }
        if (ctx->pc != 0x490324u) { return; }
    }
    ctx->pc = 0x490324u;
label_490324:
    // 0x490324: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x490324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_490328:
    // 0x490328: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x490328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49032c:
    // 0x49032c: 0xa3a20100  sb          $v0, 0x100($sp)
    ctx->pc = 0x49032cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
label_490330:
    // 0x490330: 0x26a40048  addiu       $a0, $s5, 0x48
    ctx->pc = 0x490330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
label_490334:
    // 0x490334: 0xa3a60108  sb          $a2, 0x108($sp)
    ctx->pc = 0x490334u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 264), (uint8_t)GPR_U32(ctx, 6));
label_490338:
    // 0x490338: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x490338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_49033c:
    // 0x49033c: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x49033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_490340:
    // 0x490340: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x490340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_490344:
    // 0x490344: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x490344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_490348:
    // 0x490348: 0xc125914  jal         func_496450
label_49034c:
    if (ctx->pc == 0x49034Cu) {
        ctx->pc = 0x49034Cu;
            // 0x49034c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x490350u;
        goto label_490350;
    }
    ctx->pc = 0x490348u;
    SET_GPR_U32(ctx, 31, 0x490350u);
    ctx->pc = 0x49034Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490348u;
            // 0x49034c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490350u; }
        if (ctx->pc != 0x490350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490350u; }
        if (ctx->pc != 0x490350u) { return; }
    }
    ctx->pc = 0x490350u;
label_490350:
    // 0x490350: 0x10000441  b           . + 4 + (0x441 << 2)
label_490354:
    if (ctx->pc == 0x490354u) {
        ctx->pc = 0x490354u;
            // 0x490354: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x490358u;
        goto label_490358;
    }
    ctx->pc = 0x490350u;
    {
        const bool branch_taken_0x490350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490350u;
            // 0x490354: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490350) {
            ctx->pc = 0x491458u;
            goto label_491458;
        }
    }
    ctx->pc = 0x490358u;
label_490358:
    // 0x490358: 0xa3a00108  sb          $zero, 0x108($sp)
    ctx->pc = 0x490358u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 264), (uint8_t)GPR_U32(ctx, 0));
label_49035c:
    // 0x49035c: 0xa3a20100  sb          $v0, 0x100($sp)
    ctx->pc = 0x49035cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
label_490360:
    // 0x490360: 0x26a40048  addiu       $a0, $s5, 0x48
    ctx->pc = 0x490360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
label_490364:
    // 0x490364: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x490364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_490368:
    // 0x490368: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x490368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49036c:
    // 0x49036c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x49036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_490370:
    // 0x490370: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x490370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_490374:
    // 0x490374: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x490374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_490378:
    // 0x490378: 0xc125914  jal         func_496450
label_49037c:
    if (ctx->pc == 0x49037Cu) {
        ctx->pc = 0x49037Cu;
            // 0x49037c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x490380u;
        goto label_490380;
    }
    ctx->pc = 0x490378u;
    SET_GPR_U32(ctx, 31, 0x490380u);
    ctx->pc = 0x49037Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490378u;
            // 0x49037c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490380u; }
        if (ctx->pc != 0x490380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490380u; }
        if (ctx->pc != 0x490380u) { return; }
    }
    ctx->pc = 0x490380u;
label_490380:
    // 0x490380: 0x10000434  b           . + 4 + (0x434 << 2)
label_490384:
    if (ctx->pc == 0x490384u) {
        ctx->pc = 0x490388u;
        goto label_490388;
    }
    ctx->pc = 0x490380u;
    {
        const bool branch_taken_0x490380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490380) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x490388u;
label_490388:
    // 0x490388: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x490388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_49038c:
    // 0x49038c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49038cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_490390:
    // 0x490390: 0xc04af96  jal         func_12BE58
label_490394:
    if (ctx->pc == 0x490394u) {
        ctx->pc = 0x490394u;
            // 0x490394: 0x24a50820  addiu       $a1, $a1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
        ctx->pc = 0x490398u;
        goto label_490398;
    }
    ctx->pc = 0x490390u;
    SET_GPR_U32(ctx, 31, 0x490398u);
    ctx->pc = 0x490394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490390u;
            // 0x490394: 0x24a50820  addiu       $a1, $a1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490398u; }
        if (ctx->pc != 0x490398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490398u; }
        if (ctx->pc != 0x490398u) { return; }
    }
    ctx->pc = 0x490398u;
label_490398:
    // 0x490398: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_49039c:
    if (ctx->pc == 0x49039Cu) {
        ctx->pc = 0x49039Cu;
            // 0x49039c: 0x8ea3004c  lw          $v1, 0x4C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
        ctx->pc = 0x4903A0u;
        goto label_4903a0;
    }
    ctx->pc = 0x490398u;
    {
        const bool branch_taken_0x490398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490398) {
            ctx->pc = 0x49039Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490398u;
            // 0x49039c: 0x8ea3004c  lw          $v1, 0x4C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4903C0u;
            goto label_4903c0;
        }
    }
    ctx->pc = 0x4903A0u;
label_4903a0:
    // 0x4903a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4903a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4903a4:
    // 0x4903a4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4903a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4903a8:
    // 0x4903a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4903a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4903ac:
    // 0x4903ac: 0xc04af96  jal         func_12BE58
label_4903b0:
    if (ctx->pc == 0x4903B0u) {
        ctx->pc = 0x4903B0u;
            // 0x4903b0: 0x24a50830  addiu       $a1, $a1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2096));
        ctx->pc = 0x4903B4u;
        goto label_4903b4;
    }
    ctx->pc = 0x4903ACu;
    SET_GPR_U32(ctx, 31, 0x4903B4u);
    ctx->pc = 0x4903B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4903ACu;
            // 0x4903b0: 0x24a50830  addiu       $a1, $a1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4903B4u; }
        if (ctx->pc != 0x4903B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4903B4u; }
        if (ctx->pc != 0x4903B4u) { return; }
    }
    ctx->pc = 0x4903B4u;
label_4903b4:
    // 0x4903b4: 0x544000ad  bnel        $v0, $zero, . + 4 + (0xAD << 2)
label_4903b8:
    if (ctx->pc == 0x4903B8u) {
        ctx->pc = 0x4903B8u;
            // 0x4903b8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x4903BCu;
        goto label_4903bc;
    }
    ctx->pc = 0x4903B4u;
    {
        const bool branch_taken_0x4903b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4903b4) {
            ctx->pc = 0x4903B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4903B4u;
            // 0x4903b8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49066Cu;
            goto label_49066c;
        }
    }
    ctx->pc = 0x4903BCu;
label_4903bc:
    // 0x4903bc: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x4903bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_4903c0:
    // 0x4903c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4903c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4903c4:
    // 0x4903c4: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x4903c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_4903c8:
    // 0x4903c8: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x4903c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4903cc:
    // 0x4903cc: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x4903ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4903d0:
    // 0x4903d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4903d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4903d4:
    // 0x4903d4: 0xafa601f8  sw          $a2, 0x1F8($sp)
    ctx->pc = 0x4903d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 6));
label_4903d8:
    // 0x4903d8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x4903d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4903dc:
    // 0x4903dc: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x4903dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4903e0:
    // 0x4903e0: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x4903e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_4903e4:
    // 0x4903e4: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x4903e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4903e8:
    // 0x4903e8: 0x90c7fff0  lbu         $a3, -0x10($a2)
    ctx->pc = 0x4903e8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_4903ec:
    // 0x4903ec: 0xdcc6fff8  ld          $a2, -0x8($a2)
    ctx->pc = 0x4903ecu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_4903f0:
    // 0x4903f0: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x4903f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
label_4903f4:
    // 0x4903f4: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x4903f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_4903f8:
    // 0x4903f8: 0xffa600f8  sd          $a2, 0xF8($sp)
    ctx->pc = 0x4903f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 6));
label_4903fc:
    // 0x4903fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4903fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_490400:
    // 0x490400: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x490400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
label_490404:
    // 0x490404: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x490404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_490408:
    // 0x490408: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x490408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_49040c:
    // 0x49040c: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x49040cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_490410:
    // 0x490410: 0x9083fff0  lbu         $v1, -0x10($a0)
    ctx->pc = 0x490410u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_490414:
    // 0x490414: 0xa3a30100  sb          $v1, 0x100($sp)
    ctx->pc = 0x490414u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 3));
label_490418:
    // 0x490418: 0xdc83fff8  ld          $v1, -0x8($a0)
    ctx->pc = 0x490418u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_49041c:
    // 0x49041c: 0xffa30108  sd          $v1, 0x108($sp)
    ctx->pc = 0x49041cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 3));
label_490420:
    // 0x490420: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x490420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_490424:
    // 0x490424: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x490424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_490428:
    // 0x490428: 0x10e2001d  beq         $a3, $v0, . + 4 + (0x1D << 2)
label_49042c:
    if (ctx->pc == 0x49042Cu) {
        ctx->pc = 0x49042Cu;
            // 0x49042c: 0xaea3004c  sw          $v1, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x490430u;
        goto label_490430;
    }
    ctx->pc = 0x490428u;
    {
        const bool branch_taken_0x490428 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x49042Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490428u;
            // 0x49042c: 0xaea3004c  sw          $v1, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490428) {
            ctx->pc = 0x4904A0u;
            goto label_4904a0;
        }
    }
    ctx->pc = 0x490430u;
label_490430:
    // 0x490430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x490430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490434:
    // 0x490434: 0x50e20021  beql        $a3, $v0, . + 4 + (0x21 << 2)
label_490438:
    if (ctx->pc == 0x490438u) {
        ctx->pc = 0x490438u;
            // 0x490438: 0xc7b400f8  lwc1        $f20, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x49043Cu;
        goto label_49043c;
    }
    ctx->pc = 0x490434u;
    {
        const bool branch_taken_0x490434 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x490434) {
            ctx->pc = 0x490438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490434u;
            // 0x490438: 0xc7b400f8  lwc1        $f20, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4904BCu;
            goto label_4904bc;
        }
    }
    ctx->pc = 0x49043Cu;
label_49043c:
    // 0x49043c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x49043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_490440:
    // 0x490440: 0x50e20013  beql        $a3, $v0, . + 4 + (0x13 << 2)
label_490444:
    if (ctx->pc == 0x490444u) {
        ctx->pc = 0x490444u;
            // 0x490444: 0xdfa400f8  ld          $a0, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->pc = 0x490448u;
        goto label_490448;
    }
    ctx->pc = 0x490440u;
    {
        const bool branch_taken_0x490440 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x490440) {
            ctx->pc = 0x490444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490440u;
            // 0x490444: 0xdfa400f8  ld          $a0, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490490u;
            goto label_490490;
        }
    }
    ctx->pc = 0x490448u;
label_490448:
    // 0x490448: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x490448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_49044c:
    // 0x49044c: 0x50e20003  beql        $a3, $v0, . + 4 + (0x3 << 2)
label_490450:
    if (ctx->pc == 0x490450u) {
        ctx->pc = 0x490450u;
            // 0x490450: 0x8fa200f8  lw          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->pc = 0x490454u;
        goto label_490454;
    }
    ctx->pc = 0x49044Cu;
    {
        const bool branch_taken_0x49044c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x49044c) {
            ctx->pc = 0x490450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49044Cu;
            // 0x490450: 0x8fa200f8  lw          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49045Cu;
            goto label_49045c;
        }
    }
    ctx->pc = 0x490454u;
label_490454:
    // 0x490454: 0x1000001a  b           . + 4 + (0x1A << 2)
label_490458:
    if (ctx->pc == 0x490458u) {
        ctx->pc = 0x490458u;
            // 0x490458: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->pc = 0x49045Cu;
        goto label_49045c;
    }
    ctx->pc = 0x490454u;
    {
        const bool branch_taken_0x490454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490454u;
            // 0x490458: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490454) {
            ctx->pc = 0x4904C0u;
            goto label_4904c0;
        }
    }
    ctx->pc = 0x49045Cu;
label_49045c:
    // 0x49045c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_490460:
    if (ctx->pc == 0x490460u) {
        ctx->pc = 0x490460u;
            // 0x490460: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x490464u;
        goto label_490464;
    }
    ctx->pc = 0x49045Cu;
    {
        const bool branch_taken_0x49045c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x49045c) {
            ctx->pc = 0x490460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49045Cu;
            // 0x490460: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490470u;
            goto label_490470;
        }
    }
    ctx->pc = 0x490464u;
label_490464:
    // 0x490464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x490464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490468:
    // 0x490468: 0x10000007  b           . + 4 + (0x7 << 2)
label_49046c:
    if (ctx->pc == 0x49046Cu) {
        ctx->pc = 0x49046Cu;
            // 0x49046c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x490470u;
        goto label_490470;
    }
    ctx->pc = 0x490468u;
    {
        const bool branch_taken_0x490468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490468u;
            // 0x49046c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x490468) {
            ctx->pc = 0x490488u;
            goto label_490488;
        }
    }
    ctx->pc = 0x490470u;
label_490470:
    // 0x490470: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x490470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_490474:
    // 0x490474: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x490474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_490478:
    // 0x490478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x490478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49047c:
    // 0x49047c: 0x0  nop
    ctx->pc = 0x49047cu;
    // NOP
label_490480:
    // 0x490480: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x490480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_490484:
    // 0x490484: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x490484u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_490488:
    // 0x490488: 0x1000000c  b           . + 4 + (0xC << 2)
label_49048c:
    if (ctx->pc == 0x49048Cu) {
        ctx->pc = 0x490490u;
        goto label_490490;
    }
    ctx->pc = 0x490488u;
    {
        const bool branch_taken_0x490488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490488) {
            ctx->pc = 0x4904BCu;
            goto label_4904bc;
        }
    }
    ctx->pc = 0x490490u;
label_490490:
    // 0x490490: 0xc0497dc  jal         func_125F70
label_490494:
    if (ctx->pc == 0x490494u) {
        ctx->pc = 0x490498u;
        goto label_490498;
    }
    ctx->pc = 0x490490u;
    SET_GPR_U32(ctx, 31, 0x490498u);
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490498u; }
        if (ctx->pc != 0x490498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490498u; }
        if (ctx->pc != 0x490498u) { return; }
    }
    ctx->pc = 0x490498u;
label_490498:
    // 0x490498: 0x10000008  b           . + 4 + (0x8 << 2)
label_49049c:
    if (ctx->pc == 0x49049Cu) {
        ctx->pc = 0x49049Cu;
            // 0x49049c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4904A0u;
        goto label_4904a0;
    }
    ctx->pc = 0x490498u;
    {
        const bool branch_taken_0x490498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49049Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490498u;
            // 0x49049c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x490498) {
            ctx->pc = 0x4904BCu;
            goto label_4904bc;
        }
    }
    ctx->pc = 0x4904A0u;
label_4904a0:
    // 0x4904a0: 0x93a200f8  lbu         $v0, 0xF8($sp)
    ctx->pc = 0x4904a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 248)));
label_4904a4:
    // 0x4904a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4904a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4904a8:
    // 0x4904a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4904a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4904ac:
    // 0x4904ac: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4904acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4904b0:
    // 0x4904b0: 0xc124524  jal         func_491490
label_4904b4:
    if (ctx->pc == 0x4904B4u) {
        ctx->pc = 0x4904B4u;
            // 0x4904b4: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x4904B8u;
        goto label_4904b8;
    }
    ctx->pc = 0x4904B0u;
    SET_GPR_U32(ctx, 31, 0x4904B8u);
    ctx->pc = 0x4904B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4904B0u;
            // 0x4904b4: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4904B8u; }
        if (ctx->pc != 0x4904B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4904B8u; }
        if (ctx->pc != 0x4904B8u) { return; }
    }
    ctx->pc = 0x4904B8u;
label_4904b8:
    // 0x4904b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4904b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4904bc:
    // 0x4904bc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4904bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4904c0:
    // 0x4904c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4904c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4904c4:
    // 0x4904c4: 0x0  nop
    ctx->pc = 0x4904c4u;
    // NOP
label_4904c8:
    // 0x4904c8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x4904c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4904cc:
    // 0x4904cc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4904d0:
    if (ctx->pc == 0x4904D0u) {
        ctx->pc = 0x4904D0u;
            // 0x4904d0: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x4904D4u;
        goto label_4904d4;
    }
    ctx->pc = 0x4904CCu;
    {
        const bool branch_taken_0x4904cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4904cc) {
            ctx->pc = 0x4904D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4904CCu;
            // 0x4904d0: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4904E4u;
            goto label_4904e4;
        }
    }
    ctx->pc = 0x4904D4u;
label_4904d4:
    // 0x4904d4: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4904d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4904d8:
    // 0x4904d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4904d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4904dc:
    // 0x4904dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_4904e0:
    if (ctx->pc == 0x4904E0u) {
        ctx->pc = 0x4904E0u;
            // 0x4904e0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4904E4u;
        goto label_4904e4;
    }
    ctx->pc = 0x4904DCu;
    {
        const bool branch_taken_0x4904dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4904E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4904DCu;
            // 0x4904e0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4904dc) {
            ctx->pc = 0x4904FCu;
            goto label_4904fc;
        }
    }
    ctx->pc = 0x4904E4u;
label_4904e4:
    // 0x4904e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4904e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4904e8:
    // 0x4904e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4904e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4904ec:
    // 0x4904ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4904ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4904f0:
    // 0x4904f0: 0x0  nop
    ctx->pc = 0x4904f0u;
    // NOP
label_4904f4:
    // 0x4904f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4904f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4904f8:
    // 0x4904f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4904f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4904fc:
    // 0x4904fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4904fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_490500:
    // 0x490500: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x490500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_490504:
    // 0x490504: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x490504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_490508:
    // 0x490508: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_49050c:
    if (ctx->pc == 0x49050Cu) {
        ctx->pc = 0x49050Cu;
            // 0x49050c: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x490510u;
        goto label_490510;
    }
    ctx->pc = 0x490508u;
    {
        const bool branch_taken_0x490508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490508) {
            ctx->pc = 0x49050Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490508u;
            // 0x49050c: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49051Cu;
            goto label_49051c;
        }
    }
    ctx->pc = 0x490510u;
label_490510:
    // 0x490510: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x490510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_490514:
    // 0x490514: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x490514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_490518:
    // 0x490518: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x490518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_49051c:
    // 0x49051c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x49051cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_490520:
    // 0x490520: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_490524:
    if (ctx->pc == 0x490524u) {
        ctx->pc = 0x490524u;
            // 0x490524: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x490528u;
        goto label_490528;
    }
    ctx->pc = 0x490520u;
    {
        const bool branch_taken_0x490520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490520) {
            ctx->pc = 0x490524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490520u;
            // 0x490524: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x490534u;
            goto label_490534;
        }
    }
    ctx->pc = 0x490528u;
label_490528:
    // 0x490528: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x490528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_49052c:
    // 0x49052c: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x49052cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_490530:
    // 0x490530: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x490530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_490534:
    // 0x490534: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x490534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_490538:
    // 0x490538: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x490538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_49053c:
    // 0x49053c: 0x2463976c  addiu       $v1, $v1, -0x6894
    ctx->pc = 0x49053cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940524));
label_490540:
    // 0x490540: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x490540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_490544:
    // 0x490544: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x490544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_490548:
    // 0x490548: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x490548u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_49054c:
    // 0x49054c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x49054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_490550:
    // 0x490550: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x490550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_490554:
    // 0x490554: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x490554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_490558:
    // 0x490558: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_49055c:
    if (ctx->pc == 0x49055Cu) {
        ctx->pc = 0x49055Cu;
            // 0x49055c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x490560u;
        goto label_490560;
    }
    ctx->pc = 0x490558u;
    {
        const bool branch_taken_0x490558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490558) {
            ctx->pc = 0x49055Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490558u;
            // 0x49055c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49063Cu;
            goto label_49063c;
        }
    }
    ctx->pc = 0x490560u;
label_490560:
    // 0x490560: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x490560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_490564:
    // 0x490564: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x490564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_490568:
    // 0x490568: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x490568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49056c:
    // 0x49056c: 0xc04af96  jal         func_12BE58
label_490570:
    if (ctx->pc == 0x490570u) {
        ctx->pc = 0x490570u;
            // 0x490570: 0x24a50820  addiu       $a1, $a1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
        ctx->pc = 0x490574u;
        goto label_490574;
    }
    ctx->pc = 0x49056Cu;
    SET_GPR_U32(ctx, 31, 0x490574u);
    ctx->pc = 0x490570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49056Cu;
            // 0x490570: 0x24a50820  addiu       $a1, $a1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490574u; }
        if (ctx->pc != 0x490574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490574u; }
        if (ctx->pc != 0x490574u) { return; }
    }
    ctx->pc = 0x490574u;
label_490574:
    // 0x490574: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_490578:
    if (ctx->pc == 0x490578u) {
        ctx->pc = 0x490578u;
            // 0x490578: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x49057Cu;
        goto label_49057c;
    }
    ctx->pc = 0x490574u;
    {
        const bool branch_taken_0x490574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x490574) {
            ctx->pc = 0x490578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490574u;
            // 0x490578: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49060Cu;
            goto label_49060c;
        }
    }
    ctx->pc = 0x49057Cu;
label_49057c:
    // 0x49057c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x49057cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_490580:
    // 0x490580: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x490580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
label_490584:
    // 0x490584: 0x344200f0  ori         $v0, $v0, 0xF0
    ctx->pc = 0x490584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)240);
label_490588:
    // 0x490588: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x490588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_49058c:
    // 0x49058c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_490590:
    if (ctx->pc == 0x490590u) {
        ctx->pc = 0x490590u;
            // 0x490590: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x490594u;
        goto label_490594;
    }
    ctx->pc = 0x49058Cu;
    {
        const bool branch_taken_0x49058c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49058c) {
            ctx->pc = 0x490590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49058Cu;
            // 0x490590: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4905B4u;
            goto label_4905b4;
        }
    }
    ctx->pc = 0x490594u;
label_490594:
    // 0x490594: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x490594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_490598:
    // 0x490598: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x490598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_49059c:
    // 0x49059c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4905a0:
    if (ctx->pc == 0x4905A0u) {
        ctx->pc = 0x4905A4u;
        goto label_4905a4;
    }
    ctx->pc = 0x49059Cu;
    {
        const bool branch_taken_0x49059c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49059c) {
            ctx->pc = 0x490608u;
            goto label_490608;
        }
    }
    ctx->pc = 0x4905A4u;
label_4905a4:
    // 0x4905a4: 0xc073234  jal         func_1CC8D0
label_4905a8:
    if (ctx->pc == 0x4905A8u) {
        ctx->pc = 0x4905A8u;
            // 0x4905a8: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x4905ACu;
        goto label_4905ac;
    }
    ctx->pc = 0x4905A4u;
    SET_GPR_U32(ctx, 31, 0x4905ACu);
    ctx->pc = 0x4905A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4905A4u;
            // 0x4905a8: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4905ACu; }
        if (ctx->pc != 0x4905ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4905ACu; }
        if (ctx->pc != 0x4905ACu) { return; }
    }
    ctx->pc = 0x4905ACu;
label_4905ac:
    // 0x4905ac: 0x10000016  b           . + 4 + (0x16 << 2)
label_4905b0:
    if (ctx->pc == 0x4905B0u) {
        ctx->pc = 0x4905B4u;
        goto label_4905b4;
    }
    ctx->pc = 0x4905ACu;
    {
        const bool branch_taken_0x4905ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4905ac) {
            ctx->pc = 0x490608u;
            goto label_490608;
        }
    }
    ctx->pc = 0x4905B4u;
label_4905b4:
    // 0x4905b4: 0x34620402  ori         $v0, $v1, 0x402
    ctx->pc = 0x4905b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1026);
label_4905b8:
    // 0x4905b8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4905b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4905bc:
    // 0x4905bc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_4905c0:
    if (ctx->pc == 0x4905C0u) {
        ctx->pc = 0x4905C0u;
            // 0x4905c0: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x4905C4u;
        goto label_4905c4;
    }
    ctx->pc = 0x4905BCu;
    {
        const bool branch_taken_0x4905bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4905bc) {
            ctx->pc = 0x4905C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4905BCu;
            // 0x4905c0: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4905E4u;
            goto label_4905e4;
        }
    }
    ctx->pc = 0x4905C4u;
label_4905c4:
    // 0x4905c4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4905c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4905c8:
    // 0x4905c8: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x4905c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_4905cc:
    // 0x4905cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4905d0:
    if (ctx->pc == 0x4905D0u) {
        ctx->pc = 0x4905D4u;
        goto label_4905d4;
    }
    ctx->pc = 0x4905CCu;
    {
        const bool branch_taken_0x4905cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4905cc) {
            ctx->pc = 0x490608u;
            goto label_490608;
        }
    }
    ctx->pc = 0x4905D4u;
label_4905d4:
    // 0x4905d4: 0xc073234  jal         func_1CC8D0
label_4905d8:
    if (ctx->pc == 0x4905D8u) {
        ctx->pc = 0x4905D8u;
            // 0x4905d8: 0x346400a9  ori         $a0, $v1, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4905DCu;
        goto label_4905dc;
    }
    ctx->pc = 0x4905D4u;
    SET_GPR_U32(ctx, 31, 0x4905DCu);
    ctx->pc = 0x4905D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4905D4u;
            // 0x4905d8: 0x346400a9  ori         $a0, $v1, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4905DCu; }
        if (ctx->pc != 0x4905DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4905DCu; }
        if (ctx->pc != 0x4905DCu) { return; }
    }
    ctx->pc = 0x4905DCu;
label_4905dc:
    // 0x4905dc: 0x1000000a  b           . + 4 + (0xA << 2)
label_4905e0:
    if (ctx->pc == 0x4905E0u) {
        ctx->pc = 0x4905E4u;
        goto label_4905e4;
    }
    ctx->pc = 0x4905DCu;
    {
        const bool branch_taken_0x4905dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4905dc) {
            ctx->pc = 0x490608u;
            goto label_490608;
        }
    }
    ctx->pc = 0x4905E4u;
label_4905e4:
    // 0x4905e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4905e8:
    if (ctx->pc == 0x4905E8u) {
        ctx->pc = 0x4905ECu;
        goto label_4905ec;
    }
    ctx->pc = 0x4905E4u;
    {
        const bool branch_taken_0x4905e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4905e4) {
            ctx->pc = 0x490608u;
            goto label_490608;
        }
    }
    ctx->pc = 0x4905ECu;
label_4905ec:
    // 0x4905ec: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4905ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4905f0:
    // 0x4905f0: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x4905f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_4905f4:
    // 0x4905f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4905f8:
    if (ctx->pc == 0x4905F8u) {
        ctx->pc = 0x4905FCu;
        goto label_4905fc;
    }
    ctx->pc = 0x4905F4u;
    {
        const bool branch_taken_0x4905f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4905f4) {
            ctx->pc = 0x490608u;
            goto label_490608;
        }
    }
    ctx->pc = 0x4905FCu;
label_4905fc:
    // 0x4905fc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4905fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_490600:
    // 0x490600: 0xc073234  jal         func_1CC8D0
label_490604:
    if (ctx->pc == 0x490604u) {
        ctx->pc = 0x490604u;
            // 0x490604: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x490608u;
        goto label_490608;
    }
    ctx->pc = 0x490600u;
    SET_GPR_U32(ctx, 31, 0x490608u);
    ctx->pc = 0x490604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490600u;
            // 0x490604: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490608u; }
        if (ctx->pc != 0x490608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490608u; }
        if (ctx->pc != 0x490608u) { return; }
    }
    ctx->pc = 0x490608u;
label_490608:
    // 0x490608: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x490608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_49060c:
    // 0x49060c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49060cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490610:
    // 0x490610: 0xa3a20100  sb          $v0, 0x100($sp)
    ctx->pc = 0x490610u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
label_490614:
    // 0x490614: 0x26a40048  addiu       $a0, $s5, 0x48
    ctx->pc = 0x490614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
label_490618:
    // 0x490618: 0xa3a60108  sb          $a2, 0x108($sp)
    ctx->pc = 0x490618u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 264), (uint8_t)GPR_U32(ctx, 6));
label_49061c:
    // 0x49061c: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x49061cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_490620:
    // 0x490620: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x490620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_490624:
    // 0x490624: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x490624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_490628:
    // 0x490628: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x490628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_49062c:
    // 0x49062c: 0xc125914  jal         func_496450
label_490630:
    if (ctx->pc == 0x490630u) {
        ctx->pc = 0x490630u;
            // 0x490630: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x490634u;
        goto label_490634;
    }
    ctx->pc = 0x49062Cu;
    SET_GPR_U32(ctx, 31, 0x490634u);
    ctx->pc = 0x490630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49062Cu;
            // 0x490630: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490634u; }
        if (ctx->pc != 0x490634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490634u; }
        if (ctx->pc != 0x490634u) { return; }
    }
    ctx->pc = 0x490634u;
label_490634:
    // 0x490634: 0x10000387  b           . + 4 + (0x387 << 2)
label_490638:
    if (ctx->pc == 0x490638u) {
        ctx->pc = 0x49063Cu;
        goto label_49063c;
    }
    ctx->pc = 0x490634u;
    {
        const bool branch_taken_0x490634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490634) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x49063Cu;
label_49063c:
    // 0x49063c: 0xa3a00108  sb          $zero, 0x108($sp)
    ctx->pc = 0x49063cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 264), (uint8_t)GPR_U32(ctx, 0));
label_490640:
    // 0x490640: 0xa3a20100  sb          $v0, 0x100($sp)
    ctx->pc = 0x490640u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
label_490644:
    // 0x490644: 0x26a40048  addiu       $a0, $s5, 0x48
    ctx->pc = 0x490644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
label_490648:
    // 0x490648: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x490648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_49064c:
    // 0x49064c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49064cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490650:
    // 0x490650: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x490650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_490654:
    // 0x490654: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x490654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_490658:
    // 0x490658: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x490658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_49065c:
    // 0x49065c: 0xc125914  jal         func_496450
label_490660:
    if (ctx->pc == 0x490660u) {
        ctx->pc = 0x490660u;
            // 0x490660: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x490664u;
        goto label_490664;
    }
    ctx->pc = 0x49065Cu;
    SET_GPR_U32(ctx, 31, 0x490664u);
    ctx->pc = 0x490660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49065Cu;
            // 0x490660: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490664u; }
        if (ctx->pc != 0x490664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490664u; }
        if (ctx->pc != 0x490664u) { return; }
    }
    ctx->pc = 0x490664u;
label_490664:
    // 0x490664: 0x1000037b  b           . + 4 + (0x37B << 2)
label_490668:
    if (ctx->pc == 0x490668u) {
        ctx->pc = 0x49066Cu;
        goto label_49066c;
    }
    ctx->pc = 0x490664u;
    {
        const bool branch_taken_0x490664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490664) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x49066Cu;
label_49066c:
    // 0x49066c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x49066cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_490670:
    // 0x490670: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x490670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_490674:
    // 0x490674: 0xc04af96  jal         func_12BE58
label_490678:
    if (ctx->pc == 0x490678u) {
        ctx->pc = 0x490678u;
            // 0x490678: 0x24a50840  addiu       $a1, $a1, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2112));
        ctx->pc = 0x49067Cu;
        goto label_49067c;
    }
    ctx->pc = 0x490674u;
    SET_GPR_U32(ctx, 31, 0x49067Cu);
    ctx->pc = 0x490678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490674u;
            // 0x490678: 0x24a50840  addiu       $a1, $a1, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49067Cu; }
        if (ctx->pc != 0x49067Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49067Cu; }
        if (ctx->pc != 0x49067Cu) { return; }
    }
    ctx->pc = 0x49067Cu;
label_49067c:
    // 0x49067c: 0x544000a5  bnel        $v0, $zero, . + 4 + (0xA5 << 2)
label_490680:
    if (ctx->pc == 0x490680u) {
        ctx->pc = 0x490680u;
            // 0x490680: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x490684u;
        goto label_490684;
    }
    ctx->pc = 0x49067Cu;
    {
        const bool branch_taken_0x49067c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49067c) {
            ctx->pc = 0x490680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49067Cu;
            // 0x490680: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490914u;
            goto label_490914;
        }
    }
    ctx->pc = 0x490684u;
label_490684:
    // 0x490684: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x490684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_490688:
    // 0x490688: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x490688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49068c:
    // 0x49068c: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x49068cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_490690:
    // 0x490690: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x490690u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_490694:
    // 0x490694: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x490694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_490698:
    // 0x490698: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x490698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_49069c:
    // 0x49069c: 0xafa601e8  sw          $a2, 0x1E8($sp)
    ctx->pc = 0x49069cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 6));
label_4906a0:
    // 0x4906a0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x4906a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4906a4:
    // 0x4906a4: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x4906a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4906a8:
    // 0x4906a8: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x4906a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_4906ac:
    // 0x4906ac: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x4906acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_4906b0:
    // 0x4906b0: 0x90c7fff0  lbu         $a3, -0x10($a2)
    ctx->pc = 0x4906b0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_4906b4:
    // 0x4906b4: 0xdcc6fff8  ld          $a2, -0x8($a2)
    ctx->pc = 0x4906b4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_4906b8:
    // 0x4906b8: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x4906b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
label_4906bc:
    // 0x4906bc: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x4906bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_4906c0:
    // 0x4906c0: 0xffa600f8  sd          $a2, 0xF8($sp)
    ctx->pc = 0x4906c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 6));
label_4906c4:
    // 0x4906c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4906c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4906c8:
    // 0x4906c8: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x4906c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
label_4906cc:
    // 0x4906cc: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x4906ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4906d0:
    // 0x4906d0: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x4906d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_4906d4:
    // 0x4906d4: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x4906d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_4906d8:
    // 0x4906d8: 0x9083fff0  lbu         $v1, -0x10($a0)
    ctx->pc = 0x4906d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_4906dc:
    // 0x4906dc: 0xa3a30100  sb          $v1, 0x100($sp)
    ctx->pc = 0x4906dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 3));
label_4906e0:
    // 0x4906e0: 0xdc83fff8  ld          $v1, -0x8($a0)
    ctx->pc = 0x4906e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_4906e4:
    // 0x4906e4: 0xffa30108  sd          $v1, 0x108($sp)
    ctx->pc = 0x4906e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 3));
label_4906e8:
    // 0x4906e8: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x4906e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_4906ec:
    // 0x4906ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4906ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4906f0:
    // 0x4906f0: 0x10e2001d  beq         $a3, $v0, . + 4 + (0x1D << 2)
label_4906f4:
    if (ctx->pc == 0x4906F4u) {
        ctx->pc = 0x4906F4u;
            // 0x4906f4: 0xaea3004c  sw          $v1, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x4906F8u;
        goto label_4906f8;
    }
    ctx->pc = 0x4906F0u;
    {
        const bool branch_taken_0x4906f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4906F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4906F0u;
            // 0x4906f4: 0xaea3004c  sw          $v1, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4906f0) {
            ctx->pc = 0x490768u;
            goto label_490768;
        }
    }
    ctx->pc = 0x4906F8u;
label_4906f8:
    // 0x4906f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4906f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4906fc:
    // 0x4906fc: 0x50e20021  beql        $a3, $v0, . + 4 + (0x21 << 2)
label_490700:
    if (ctx->pc == 0x490700u) {
        ctx->pc = 0x490700u;
            // 0x490700: 0xc7b400f8  lwc1        $f20, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x490704u;
        goto label_490704;
    }
    ctx->pc = 0x4906FCu;
    {
        const bool branch_taken_0x4906fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x4906fc) {
            ctx->pc = 0x490700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4906FCu;
            // 0x490700: 0xc7b400f8  lwc1        $f20, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x490784u;
            goto label_490784;
        }
    }
    ctx->pc = 0x490704u;
label_490704:
    // 0x490704: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x490704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_490708:
    // 0x490708: 0x50e20013  beql        $a3, $v0, . + 4 + (0x13 << 2)
label_49070c:
    if (ctx->pc == 0x49070Cu) {
        ctx->pc = 0x49070Cu;
            // 0x49070c: 0xdfa400f8  ld          $a0, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->pc = 0x490710u;
        goto label_490710;
    }
    ctx->pc = 0x490708u;
    {
        const bool branch_taken_0x490708 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x490708) {
            ctx->pc = 0x49070Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490708u;
            // 0x49070c: 0xdfa400f8  ld          $a0, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490758u;
            goto label_490758;
        }
    }
    ctx->pc = 0x490710u;
label_490710:
    // 0x490710: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x490710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_490714:
    // 0x490714: 0x50e20003  beql        $a3, $v0, . + 4 + (0x3 << 2)
label_490718:
    if (ctx->pc == 0x490718u) {
        ctx->pc = 0x490718u;
            // 0x490718: 0x8fa200f8  lw          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->pc = 0x49071Cu;
        goto label_49071c;
    }
    ctx->pc = 0x490714u;
    {
        const bool branch_taken_0x490714 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x490714) {
            ctx->pc = 0x490718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490714u;
            // 0x490718: 0x8fa200f8  lw          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490724u;
            goto label_490724;
        }
    }
    ctx->pc = 0x49071Cu;
label_49071c:
    // 0x49071c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_490720:
    if (ctx->pc == 0x490720u) {
        ctx->pc = 0x490720u;
            // 0x490720: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->pc = 0x490724u;
        goto label_490724;
    }
    ctx->pc = 0x49071Cu;
    {
        const bool branch_taken_0x49071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49071Cu;
            // 0x490720: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49071c) {
            ctx->pc = 0x490788u;
            goto label_490788;
        }
    }
    ctx->pc = 0x490724u;
label_490724:
    // 0x490724: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_490728:
    if (ctx->pc == 0x490728u) {
        ctx->pc = 0x490728u;
            // 0x490728: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x49072Cu;
        goto label_49072c;
    }
    ctx->pc = 0x490724u;
    {
        const bool branch_taken_0x490724 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x490724) {
            ctx->pc = 0x490728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490724u;
            // 0x490728: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490738u;
            goto label_490738;
        }
    }
    ctx->pc = 0x49072Cu;
label_49072c:
    // 0x49072c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x49072cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490730:
    // 0x490730: 0x10000007  b           . + 4 + (0x7 << 2)
label_490734:
    if (ctx->pc == 0x490734u) {
        ctx->pc = 0x490734u;
            // 0x490734: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x490738u;
        goto label_490738;
    }
    ctx->pc = 0x490730u;
    {
        const bool branch_taken_0x490730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490730u;
            // 0x490734: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x490730) {
            ctx->pc = 0x490750u;
            goto label_490750;
        }
    }
    ctx->pc = 0x490738u;
label_490738:
    // 0x490738: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x490738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_49073c:
    // 0x49073c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49073cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_490740:
    // 0x490740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x490740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490744:
    // 0x490744: 0x0  nop
    ctx->pc = 0x490744u;
    // NOP
label_490748:
    // 0x490748: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x490748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_49074c:
    // 0x49074c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x49074cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_490750:
    // 0x490750: 0x1000000c  b           . + 4 + (0xC << 2)
label_490754:
    if (ctx->pc == 0x490754u) {
        ctx->pc = 0x490758u;
        goto label_490758;
    }
    ctx->pc = 0x490750u;
    {
        const bool branch_taken_0x490750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490750) {
            ctx->pc = 0x490784u;
            goto label_490784;
        }
    }
    ctx->pc = 0x490758u;
label_490758:
    // 0x490758: 0xc0497dc  jal         func_125F70
label_49075c:
    if (ctx->pc == 0x49075Cu) {
        ctx->pc = 0x490760u;
        goto label_490760;
    }
    ctx->pc = 0x490758u;
    SET_GPR_U32(ctx, 31, 0x490760u);
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490760u; }
        if (ctx->pc != 0x490760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490760u; }
        if (ctx->pc != 0x490760u) { return; }
    }
    ctx->pc = 0x490760u;
label_490760:
    // 0x490760: 0x10000008  b           . + 4 + (0x8 << 2)
label_490764:
    if (ctx->pc == 0x490764u) {
        ctx->pc = 0x490764u;
            // 0x490764: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x490768u;
        goto label_490768;
    }
    ctx->pc = 0x490760u;
    {
        const bool branch_taken_0x490760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490760u;
            // 0x490764: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x490760) {
            ctx->pc = 0x490784u;
            goto label_490784;
        }
    }
    ctx->pc = 0x490768u;
label_490768:
    // 0x490768: 0x93a200f8  lbu         $v0, 0xF8($sp)
    ctx->pc = 0x490768u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 248)));
label_49076c:
    // 0x49076c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x49076cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_490770:
    // 0x490770: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x490770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_490774:
    // 0x490774: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x490774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_490778:
    // 0x490778: 0xc124524  jal         func_491490
label_49077c:
    if (ctx->pc == 0x49077Cu) {
        ctx->pc = 0x49077Cu;
            // 0x49077c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x490780u;
        goto label_490780;
    }
    ctx->pc = 0x490778u;
    SET_GPR_U32(ctx, 31, 0x490780u);
    ctx->pc = 0x49077Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490778u;
            // 0x49077c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490780u; }
        if (ctx->pc != 0x490780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490780u; }
        if (ctx->pc != 0x490780u) { return; }
    }
    ctx->pc = 0x490780u;
label_490780:
    // 0x490780: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x490780u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_490784:
    // 0x490784: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x490784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_490788:
    // 0x490788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x490788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49078c:
    // 0x49078c: 0x0  nop
    ctx->pc = 0x49078cu;
    // NOP
label_490790:
    // 0x490790: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x490790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_490794:
    // 0x490794: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_490798:
    if (ctx->pc == 0x490798u) {
        ctx->pc = 0x490798u;
            // 0x490798: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x49079Cu;
        goto label_49079c;
    }
    ctx->pc = 0x490794u;
    {
        const bool branch_taken_0x490794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x490794) {
            ctx->pc = 0x490798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490794u;
            // 0x490798: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4907ACu;
            goto label_4907ac;
        }
    }
    ctx->pc = 0x49079Cu;
label_49079c:
    // 0x49079c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49079cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4907a0:
    // 0x4907a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4907a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4907a4:
    // 0x4907a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4907a8:
    if (ctx->pc == 0x4907A8u) {
        ctx->pc = 0x4907A8u;
            // 0x4907a8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4907ACu;
        goto label_4907ac;
    }
    ctx->pc = 0x4907A4u;
    {
        const bool branch_taken_0x4907a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4907A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4907A4u;
            // 0x4907a8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4907a4) {
            ctx->pc = 0x4907C4u;
            goto label_4907c4;
        }
    }
    ctx->pc = 0x4907ACu;
label_4907ac:
    // 0x4907ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4907acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4907b0:
    // 0x4907b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4907b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4907b4:
    // 0x4907b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4907b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4907b8:
    // 0x4907b8: 0x0  nop
    ctx->pc = 0x4907b8u;
    // NOP
label_4907bc:
    // 0x4907bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4907bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4907c0:
    // 0x4907c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4907c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4907c4:
    // 0x4907c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4907c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4907c8:
    // 0x4907c8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x4907c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_4907cc:
    // 0x4907cc: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x4907ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_4907d0:
    // 0x4907d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4907d4:
    if (ctx->pc == 0x4907D4u) {
        ctx->pc = 0x4907D4u;
            // 0x4907d4: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x4907D8u;
        goto label_4907d8;
    }
    ctx->pc = 0x4907D0u;
    {
        const bool branch_taken_0x4907d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4907d0) {
            ctx->pc = 0x4907D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4907D0u;
            // 0x4907d4: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4907E4u;
            goto label_4907e4;
        }
    }
    ctx->pc = 0x4907D8u;
label_4907d8:
    // 0x4907d8: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x4907d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_4907dc:
    // 0x4907dc: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x4907dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_4907e0:
    // 0x4907e0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x4907e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_4907e4:
    // 0x4907e4: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x4907e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_4907e8:
    // 0x4907e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4907ec:
    if (ctx->pc == 0x4907ECu) {
        ctx->pc = 0x4907ECu;
            // 0x4907ec: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4907F0u;
        goto label_4907f0;
    }
    ctx->pc = 0x4907E8u;
    {
        const bool branch_taken_0x4907e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4907e8) {
            ctx->pc = 0x4907ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4907E8u;
            // 0x4907ec: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4907FCu;
            goto label_4907fc;
        }
    }
    ctx->pc = 0x4907F0u;
label_4907f0:
    // 0x4907f0: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x4907f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_4907f4:
    // 0x4907f4: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x4907f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_4907f8:
    // 0x4907f8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4907f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4907fc:
    // 0x4907fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4907fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_490800:
    // 0x490800: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x490800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_490804:
    // 0x490804: 0x24429764  addiu       $v0, $v0, -0x689C
    ctx->pc = 0x490804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940516));
label_490808:
    // 0x490808: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x490808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_49080c:
    // 0x49080c: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x49080cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_490810:
    // 0x490810: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x490810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_490814:
    // 0x490814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x490814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_490818:
    // 0x490818: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x490818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49081c:
    // 0x49081c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x49081cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_490820:
    // 0x490820: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_490824:
    if (ctx->pc == 0x490824u) {
        ctx->pc = 0x490824u;
            // 0x490824: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x490828u;
        goto label_490828;
    }
    ctx->pc = 0x490820u;
    {
        const bool branch_taken_0x490820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490820) {
            ctx->pc = 0x490824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490820u;
            // 0x490824: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4908E4u;
            goto label_4908e4;
        }
    }
    ctx->pc = 0x490828u;
label_490828:
    // 0x490828: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x490828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
label_49082c:
    // 0x49082c: 0x344200f0  ori         $v0, $v0, 0xF0
    ctx->pc = 0x49082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)240);
label_490830:
    // 0x490830: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x490830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_490834:
    // 0x490834: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_490838:
    if (ctx->pc == 0x490838u) {
        ctx->pc = 0x490838u;
            // 0x490838: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x49083Cu;
        goto label_49083c;
    }
    ctx->pc = 0x490834u;
    {
        const bool branch_taken_0x490834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490834) {
            ctx->pc = 0x490838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490834u;
            // 0x490838: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49085Cu;
            goto label_49085c;
        }
    }
    ctx->pc = 0x49083Cu;
label_49083c:
    // 0x49083c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x49083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_490840:
    // 0x490840: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x490840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_490844:
    // 0x490844: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_490848:
    if (ctx->pc == 0x490848u) {
        ctx->pc = 0x490848u;
            // 0x490848: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x49084Cu;
        goto label_49084c;
    }
    ctx->pc = 0x490844u;
    {
        const bool branch_taken_0x490844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490844) {
            ctx->pc = 0x490848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490844u;
            // 0x490848: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4908B4u;
            goto label_4908b4;
        }
    }
    ctx->pc = 0x49084Cu;
label_49084c:
    // 0x49084c: 0xc073234  jal         func_1CC8D0
label_490850:
    if (ctx->pc == 0x490850u) {
        ctx->pc = 0x490850u;
            // 0x490850: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x490854u;
        goto label_490854;
    }
    ctx->pc = 0x49084Cu;
    SET_GPR_U32(ctx, 31, 0x490854u);
    ctx->pc = 0x490850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49084Cu;
            // 0x490850: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490854u; }
        if (ctx->pc != 0x490854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490854u; }
        if (ctx->pc != 0x490854u) { return; }
    }
    ctx->pc = 0x490854u;
label_490854:
    // 0x490854: 0x10000016  b           . + 4 + (0x16 << 2)
label_490858:
    if (ctx->pc == 0x490858u) {
        ctx->pc = 0x49085Cu;
        goto label_49085c;
    }
    ctx->pc = 0x490854u;
    {
        const bool branch_taken_0x490854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490854) {
            ctx->pc = 0x4908B0u;
            goto label_4908b0;
        }
    }
    ctx->pc = 0x49085Cu;
label_49085c:
    // 0x49085c: 0x34620402  ori         $v0, $v1, 0x402
    ctx->pc = 0x49085cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1026);
label_490860:
    // 0x490860: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x490860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_490864:
    // 0x490864: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_490868:
    if (ctx->pc == 0x490868u) {
        ctx->pc = 0x490868u;
            // 0x490868: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x49086Cu;
        goto label_49086c;
    }
    ctx->pc = 0x490864u;
    {
        const bool branch_taken_0x490864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490864) {
            ctx->pc = 0x490868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490864u;
            // 0x490868: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x49088Cu;
            goto label_49088c;
        }
    }
    ctx->pc = 0x49086Cu;
label_49086c:
    // 0x49086c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x49086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_490870:
    // 0x490870: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x490870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_490874:
    // 0x490874: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_490878:
    if (ctx->pc == 0x490878u) {
        ctx->pc = 0x49087Cu;
        goto label_49087c;
    }
    ctx->pc = 0x490874u;
    {
        const bool branch_taken_0x490874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490874) {
            ctx->pc = 0x4908B0u;
            goto label_4908b0;
        }
    }
    ctx->pc = 0x49087Cu;
label_49087c:
    // 0x49087c: 0xc073234  jal         func_1CC8D0
label_490880:
    if (ctx->pc == 0x490880u) {
        ctx->pc = 0x490880u;
            // 0x490880: 0x346400a9  ori         $a0, $v1, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x490884u;
        goto label_490884;
    }
    ctx->pc = 0x49087Cu;
    SET_GPR_U32(ctx, 31, 0x490884u);
    ctx->pc = 0x490880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49087Cu;
            // 0x490880: 0x346400a9  ori         $a0, $v1, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490884u; }
        if (ctx->pc != 0x490884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490884u; }
        if (ctx->pc != 0x490884u) { return; }
    }
    ctx->pc = 0x490884u;
label_490884:
    // 0x490884: 0x1000000a  b           . + 4 + (0xA << 2)
label_490888:
    if (ctx->pc == 0x490888u) {
        ctx->pc = 0x49088Cu;
        goto label_49088c;
    }
    ctx->pc = 0x490884u;
    {
        const bool branch_taken_0x490884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490884) {
            ctx->pc = 0x4908B0u;
            goto label_4908b0;
        }
    }
    ctx->pc = 0x49088Cu;
label_49088c:
    // 0x49088c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_490890:
    if (ctx->pc == 0x490890u) {
        ctx->pc = 0x490894u;
        goto label_490894;
    }
    ctx->pc = 0x49088Cu;
    {
        const bool branch_taken_0x49088c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49088c) {
            ctx->pc = 0x4908B0u;
            goto label_4908b0;
        }
    }
    ctx->pc = 0x490894u;
label_490894:
    // 0x490894: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x490894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_490898:
    // 0x490898: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x490898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_49089c:
    // 0x49089c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4908a0:
    if (ctx->pc == 0x4908A0u) {
        ctx->pc = 0x4908A4u;
        goto label_4908a4;
    }
    ctx->pc = 0x49089Cu;
    {
        const bool branch_taken_0x49089c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49089c) {
            ctx->pc = 0x4908B0u;
            goto label_4908b0;
        }
    }
    ctx->pc = 0x4908A4u;
label_4908a4:
    // 0x4908a4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4908a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4908a8:
    // 0x4908a8: 0xc073234  jal         func_1CC8D0
label_4908ac:
    if (ctx->pc == 0x4908ACu) {
        ctx->pc = 0x4908ACu;
            // 0x4908ac: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4908B0u;
        goto label_4908b0;
    }
    ctx->pc = 0x4908A8u;
    SET_GPR_U32(ctx, 31, 0x4908B0u);
    ctx->pc = 0x4908ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4908A8u;
            // 0x4908ac: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4908B0u; }
        if (ctx->pc != 0x4908B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4908B0u; }
        if (ctx->pc != 0x4908B0u) { return; }
    }
    ctx->pc = 0x4908B0u;
label_4908b0:
    // 0x4908b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4908b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4908b4:
    // 0x4908b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4908b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4908b8:
    // 0x4908b8: 0xa3a20100  sb          $v0, 0x100($sp)
    ctx->pc = 0x4908b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
label_4908bc:
    // 0x4908bc: 0x26a40048  addiu       $a0, $s5, 0x48
    ctx->pc = 0x4908bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
label_4908c0:
    // 0x4908c0: 0xa3a60108  sb          $a2, 0x108($sp)
    ctx->pc = 0x4908c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 264), (uint8_t)GPR_U32(ctx, 6));
label_4908c4:
    // 0x4908c4: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4908c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4908c8:
    // 0x4908c8: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x4908c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_4908cc:
    // 0x4908cc: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x4908ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_4908d0:
    // 0x4908d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4908d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4908d4:
    // 0x4908d4: 0xc125914  jal         func_496450
label_4908d8:
    if (ctx->pc == 0x4908D8u) {
        ctx->pc = 0x4908D8u;
            // 0x4908d8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4908DCu;
        goto label_4908dc;
    }
    ctx->pc = 0x4908D4u;
    SET_GPR_U32(ctx, 31, 0x4908DCu);
    ctx->pc = 0x4908D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4908D4u;
            // 0x4908d8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4908DCu; }
        if (ctx->pc != 0x4908DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4908DCu; }
        if (ctx->pc != 0x4908DCu) { return; }
    }
    ctx->pc = 0x4908DCu;
label_4908dc:
    // 0x4908dc: 0x100002dd  b           . + 4 + (0x2DD << 2)
label_4908e0:
    if (ctx->pc == 0x4908E0u) {
        ctx->pc = 0x4908E4u;
        goto label_4908e4;
    }
    ctx->pc = 0x4908DCu;
    {
        const bool branch_taken_0x4908dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4908dc) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x4908E4u;
label_4908e4:
    // 0x4908e4: 0xa3a00108  sb          $zero, 0x108($sp)
    ctx->pc = 0x4908e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 264), (uint8_t)GPR_U32(ctx, 0));
label_4908e8:
    // 0x4908e8: 0xa3a20100  sb          $v0, 0x100($sp)
    ctx->pc = 0x4908e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
label_4908ec:
    // 0x4908ec: 0x26a40048  addiu       $a0, $s5, 0x48
    ctx->pc = 0x4908ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
label_4908f0:
    // 0x4908f0: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x4908f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_4908f4:
    // 0x4908f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4908f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4908f8:
    // 0x4908f8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x4908f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_4908fc:
    // 0x4908fc: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4908fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_490900:
    // 0x490900: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x490900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_490904:
    // 0x490904: 0xc125914  jal         func_496450
label_490908:
    if (ctx->pc == 0x490908u) {
        ctx->pc = 0x490908u;
            // 0x490908: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x49090Cu;
        goto label_49090c;
    }
    ctx->pc = 0x490904u;
    SET_GPR_U32(ctx, 31, 0x49090Cu);
    ctx->pc = 0x490908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490904u;
            // 0x490908: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49090Cu; }
        if (ctx->pc != 0x49090Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49090Cu; }
        if (ctx->pc != 0x49090Cu) { return; }
    }
    ctx->pc = 0x49090Cu;
label_49090c:
    // 0x49090c: 0x100002d1  b           . + 4 + (0x2D1 << 2)
label_490910:
    if (ctx->pc == 0x490910u) {
        ctx->pc = 0x490914u;
        goto label_490914;
    }
    ctx->pc = 0x49090Cu;
    {
        const bool branch_taken_0x49090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49090c) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x490914u;
label_490914:
    // 0x490914: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x490914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_490918:
    // 0x490918: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x490918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49091c:
    // 0x49091c: 0xc04af96  jal         func_12BE58
label_490920:
    if (ctx->pc == 0x490920u) {
        ctx->pc = 0x490920u;
            // 0x490920: 0x24a50850  addiu       $a1, $a1, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2128));
        ctx->pc = 0x490924u;
        goto label_490924;
    }
    ctx->pc = 0x49091Cu;
    SET_GPR_U32(ctx, 31, 0x490924u);
    ctx->pc = 0x490920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49091Cu;
            // 0x490920: 0x24a50850  addiu       $a1, $a1, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490924u; }
        if (ctx->pc != 0x490924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490924u; }
        if (ctx->pc != 0x490924u) { return; }
    }
    ctx->pc = 0x490924u;
label_490924:
    // 0x490924: 0x5440008f  bnel        $v0, $zero, . + 4 + (0x8F << 2)
label_490928:
    if (ctx->pc == 0x490928u) {
        ctx->pc = 0x490928u;
            // 0x490928: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x49092Cu;
        goto label_49092c;
    }
    ctx->pc = 0x490924u;
    {
        const bool branch_taken_0x490924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x490924) {
            ctx->pc = 0x490928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490924u;
            // 0x490928: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490B64u;
            goto label_490b64;
        }
    }
    ctx->pc = 0x49092Cu;
label_49092c:
    // 0x49092c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x49092cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_490930:
    // 0x490930: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x490930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_490934:
    // 0x490934: 0x5062001d  beql        $v1, $v0, . + 4 + (0x1D << 2)
label_490938:
    if (ctx->pc == 0x490938u) {
        ctx->pc = 0x490938u;
            // 0x490938: 0x93a20118  lbu         $v0, 0x118($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->pc = 0x49093Cu;
        goto label_49093c;
    }
    ctx->pc = 0x490934u;
    {
        const bool branch_taken_0x490934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x490934) {
            ctx->pc = 0x490938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490934u;
            // 0x490938: 0x93a20118  lbu         $v0, 0x118($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4909ACu;
            goto label_4909ac;
        }
    }
    ctx->pc = 0x49093Cu;
label_49093c:
    // 0x49093c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49093cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490940:
    // 0x490940: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
label_490944:
    if (ctx->pc == 0x490944u) {
        ctx->pc = 0x490944u;
            // 0x490944: 0xc7b50118  lwc1        $f21, 0x118($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x490948u;
        goto label_490948;
    }
    ctx->pc = 0x490940u;
    {
        const bool branch_taken_0x490940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x490940) {
            ctx->pc = 0x490944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490940u;
            // 0x490944: 0xc7b50118  lwc1        $f21, 0x118($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4909C4u;
            goto label_4909c4;
        }
    }
    ctx->pc = 0x490948u;
label_490948:
    // 0x490948: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x490948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_49094c:
    // 0x49094c: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
label_490950:
    if (ctx->pc == 0x490950u) {
        ctx->pc = 0x490950u;
            // 0x490950: 0xdfa40118  ld          $a0, 0x118($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->pc = 0x490954u;
        goto label_490954;
    }
    ctx->pc = 0x49094Cu;
    {
        const bool branch_taken_0x49094c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49094c) {
            ctx->pc = 0x490950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49094Cu;
            // 0x490950: 0xdfa40118  ld          $a0, 0x118($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49099Cu;
            goto label_49099c;
        }
    }
    ctx->pc = 0x490954u;
label_490954:
    // 0x490954: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x490954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_490958:
    // 0x490958: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_49095c:
    if (ctx->pc == 0x49095Cu) {
        ctx->pc = 0x49095Cu;
            // 0x49095c: 0x8fa20118  lw          $v0, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->pc = 0x490960u;
        goto label_490960;
    }
    ctx->pc = 0x490958u;
    {
        const bool branch_taken_0x490958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x490958) {
            ctx->pc = 0x49095Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490958u;
            // 0x49095c: 0x8fa20118  lw          $v0, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490968u;
            goto label_490968;
        }
    }
    ctx->pc = 0x490960u;
label_490960:
    // 0x490960: 0x10000019  b           . + 4 + (0x19 << 2)
label_490964:
    if (ctx->pc == 0x490964u) {
        ctx->pc = 0x490964u;
            // 0x490964: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->pc = 0x490968u;
        goto label_490968;
    }
    ctx->pc = 0x490960u;
    {
        const bool branch_taken_0x490960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490960u;
            // 0x490964: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490960) {
            ctx->pc = 0x4909C8u;
            goto label_4909c8;
        }
    }
    ctx->pc = 0x490968u;
label_490968:
    // 0x490968: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_49096c:
    if (ctx->pc == 0x49096Cu) {
        ctx->pc = 0x49096Cu;
            // 0x49096c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x490970u;
        goto label_490970;
    }
    ctx->pc = 0x490968u;
    {
        const bool branch_taken_0x490968 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x490968) {
            ctx->pc = 0x49096Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490968u;
            // 0x49096c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49097Cu;
            goto label_49097c;
        }
    }
    ctx->pc = 0x490970u;
label_490970:
    // 0x490970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x490970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490974:
    // 0x490974: 0x10000007  b           . + 4 + (0x7 << 2)
label_490978:
    if (ctx->pc == 0x490978u) {
        ctx->pc = 0x490978u;
            // 0x490978: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x49097Cu;
        goto label_49097c;
    }
    ctx->pc = 0x490974u;
    {
        const bool branch_taken_0x490974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490974u;
            // 0x490978: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x490974) {
            ctx->pc = 0x490994u;
            goto label_490994;
        }
    }
    ctx->pc = 0x49097Cu;
label_49097c:
    // 0x49097c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49097cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_490980:
    // 0x490980: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x490980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_490984:
    // 0x490984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x490984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490988:
    // 0x490988: 0x0  nop
    ctx->pc = 0x490988u;
    // NOP
label_49098c:
    // 0x49098c: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x49098cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_490990:
    // 0x490990: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x490990u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_490994:
    // 0x490994: 0x1000000b  b           . + 4 + (0xB << 2)
label_490998:
    if (ctx->pc == 0x490998u) {
        ctx->pc = 0x49099Cu;
        goto label_49099c;
    }
    ctx->pc = 0x490994u;
    {
        const bool branch_taken_0x490994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490994) {
            ctx->pc = 0x4909C4u;
            goto label_4909c4;
        }
    }
    ctx->pc = 0x49099Cu;
label_49099c:
    // 0x49099c: 0xc0497dc  jal         func_125F70
label_4909a0:
    if (ctx->pc == 0x4909A0u) {
        ctx->pc = 0x4909A4u;
        goto label_4909a4;
    }
    ctx->pc = 0x49099Cu;
    SET_GPR_U32(ctx, 31, 0x4909A4u);
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4909A4u; }
        if (ctx->pc != 0x4909A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4909A4u; }
        if (ctx->pc != 0x4909A4u) { return; }
    }
    ctx->pc = 0x4909A4u;
label_4909a4:
    // 0x4909a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4909a8:
    if (ctx->pc == 0x4909A8u) {
        ctx->pc = 0x4909A8u;
            // 0x4909a8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4909ACu;
        goto label_4909ac;
    }
    ctx->pc = 0x4909A4u;
    {
        const bool branch_taken_0x4909a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4909A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4909A4u;
            // 0x4909a8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4909a4) {
            ctx->pc = 0x4909C4u;
            goto label_4909c4;
        }
    }
    ctx->pc = 0x4909ACu;
label_4909ac:
    // 0x4909ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4909acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4909b0:
    // 0x4909b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4909b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4909b4:
    // 0x4909b4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4909b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4909b8:
    // 0x4909b8: 0xc124524  jal         func_491490
label_4909bc:
    if (ctx->pc == 0x4909BCu) {
        ctx->pc = 0x4909BCu;
            // 0x4909bc: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x4909C0u;
        goto label_4909c0;
    }
    ctx->pc = 0x4909B8u;
    SET_GPR_U32(ctx, 31, 0x4909C0u);
    ctx->pc = 0x4909BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4909B8u;
            // 0x4909bc: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4909C0u; }
        if (ctx->pc != 0x4909C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4909C0u; }
        if (ctx->pc != 0x4909C0u) { return; }
    }
    ctx->pc = 0x4909C0u;
label_4909c0:
    // 0x4909c0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4909c0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_4909c4:
    // 0x4909c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4909c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4909c8:
    // 0x4909c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4909c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4909cc:
    // 0x4909cc: 0x0  nop
    ctx->pc = 0x4909ccu;
    // NOP
label_4909d0:
    // 0x4909d0: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x4909d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4909d4:
    // 0x4909d4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4909d8:
    if (ctx->pc == 0x4909D8u) {
        ctx->pc = 0x4909D8u;
            // 0x4909d8: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x4909DCu;
        goto label_4909dc;
    }
    ctx->pc = 0x4909D4u;
    {
        const bool branch_taken_0x4909d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4909d4) {
            ctx->pc = 0x4909D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4909D4u;
            // 0x4909d8: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4909ECu;
            goto label_4909ec;
        }
    }
    ctx->pc = 0x4909DCu;
label_4909dc:
    // 0x4909dc: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4909dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4909e0:
    // 0x4909e0: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x4909e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_4909e4:
    // 0x4909e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4909e8:
    if (ctx->pc == 0x4909E8u) {
        ctx->pc = 0x4909E8u;
            // 0x4909e8: 0x26a400c4  addiu       $a0, $s5, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
        ctx->pc = 0x4909ECu;
        goto label_4909ec;
    }
    ctx->pc = 0x4909E4u;
    {
        const bool branch_taken_0x4909e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4909E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4909E4u;
            // 0x4909e8: 0x26a400c4  addiu       $a0, $s5, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4909e4) {
            ctx->pc = 0x490A04u;
            goto label_490a04;
        }
    }
    ctx->pc = 0x4909ECu;
label_4909ec:
    // 0x4909ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4909ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4909f0:
    // 0x4909f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4909f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4909f4:
    // 0x4909f4: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x4909f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_4909f8:
    // 0x4909f8: 0x0  nop
    ctx->pc = 0x4909f8u;
    // NOP
label_4909fc:
    // 0x4909fc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x4909fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_490a00:
    // 0x490a00: 0x26a400c4  addiu       $a0, $s5, 0xC4
    ctx->pc = 0x490a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
label_490a04:
    // 0x490a04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x490a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_490a08:
    // 0x490a08: 0xc04a576  jal         func_1295D8
label_490a0c:
    if (ctx->pc == 0x490A0Cu) {
        ctx->pc = 0x490A0Cu;
            // 0x490a0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x490A10u;
        goto label_490a10;
    }
    ctx->pc = 0x490A08u;
    SET_GPR_U32(ctx, 31, 0x490A10u);
    ctx->pc = 0x490A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490A08u;
            // 0x490a0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490A10u; }
        if (ctx->pc != 0x490A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490A10u; }
        if (ctx->pc != 0x490A10u) { return; }
    }
    ctx->pc = 0x490A10u;
label_490a10:
    // 0x490a10: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x490a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_490a14:
    // 0x490a14: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x490a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_490a18:
    // 0x490a18: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x490a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_490a1c:
    // 0x490a1c: 0x247100b0  addiu       $s1, $v1, 0xB0
    ctx->pc = 0x490a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_490a20:
    // 0x490a20: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x490a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_490a24:
    // 0x490a24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x490a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_490a28:
    // 0x490a28: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x490a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_490a2c:
    // 0x490a2c: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x490a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_490a30:
    // 0x490a30: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x490a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_490a34:
    // 0x490a34: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x490a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_490a38:
    // 0x490a38: 0xafa601d8  sw          $a2, 0x1D8($sp)
    ctx->pc = 0x490a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 6));
label_490a3c:
    // 0x490a3c: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x490a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_490a40:
    // 0x490a40: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x490a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_490a44:
    // 0x490a44: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x490a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_490a48:
    // 0x490a48: 0x90c7fff0  lbu         $a3, -0x10($a2)
    ctx->pc = 0x490a48u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_490a4c:
    // 0x490a4c: 0xdcc6fff8  ld          $a2, -0x8($a2)
    ctx->pc = 0x490a4cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_490a50:
    // 0x490a50: 0xa227fff0  sb          $a3, -0x10($s1)
    ctx->pc = 0x490a50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294967280), (uint8_t)GPR_U32(ctx, 7));
label_490a54:
    // 0x490a54: 0xfe26fff8  sd          $a2, -0x8($s1)
    ctx->pc = 0x490a54u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U64(ctx, 6));
label_490a58:
    // 0x490a58: 0xaea4004c  sw          $a0, 0x4C($s5)
    ctx->pc = 0x490a58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 4));
label_490a5c:
    // 0x490a5c: 0x9224fff0  lbu         $a0, -0x10($s1)
    ctx->pc = 0x490a5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967280)));
label_490a60:
    // 0x490a60: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_490a64:
    if (ctx->pc == 0x490A64u) {
        ctx->pc = 0x490A68u;
        goto label_490a68;
    }
    ctx->pc = 0x490A60u;
    {
        const bool branch_taken_0x490a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x490a60) {
            ctx->pc = 0x490AE8u;
            goto label_490ae8;
        }
    }
    ctx->pc = 0x490A68u;
label_490a68:
    // 0x490a68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x490a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490a6c:
    // 0x490a6c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
label_490a70:
    if (ctx->pc == 0x490A70u) {
        ctx->pc = 0x490A74u;
        goto label_490a74;
    }
    ctx->pc = 0x490A6Cu;
    {
        const bool branch_taken_0x490a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x490a6c) {
            ctx->pc = 0x490AE0u;
            goto label_490ae0;
        }
    }
    ctx->pc = 0x490A74u;
label_490a74:
    // 0x490a74: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x490a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_490a78:
    // 0x490a78: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_490a7c:
    if (ctx->pc == 0x490A7Cu) {
        ctx->pc = 0x490A80u;
        goto label_490a80;
    }
    ctx->pc = 0x490A78u;
    {
        const bool branch_taken_0x490a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x490a78) {
            ctx->pc = 0x490AD0u;
            goto label_490ad0;
        }
    }
    ctx->pc = 0x490A80u;
label_490a80:
    // 0x490a80: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x490a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_490a84:
    // 0x490a84: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_490a88:
    if (ctx->pc == 0x490A88u) {
        ctx->pc = 0x490A8Cu;
        goto label_490a8c;
    }
    ctx->pc = 0x490A84u;
    {
        const bool branch_taken_0x490a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x490a84) {
            ctx->pc = 0x490A98u;
            goto label_490a98;
        }
    }
    ctx->pc = 0x490A8Cu;
label_490a8c:
    // 0x490a8c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_490a90:
    if (ctx->pc == 0x490A90u) {
        ctx->pc = 0x490A94u;
        goto label_490a94;
    }
    ctx->pc = 0x490A8Cu;
    {
        const bool branch_taken_0x490a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490a8c) {
            ctx->pc = 0x490B08u;
            goto label_490b08;
        }
    }
    ctx->pc = 0x490A94u;
label_490a94:
    // 0x490a94: 0x0  nop
    ctx->pc = 0x490a94u;
    // NOP
label_490a98:
    // 0x490a98: 0x8e23fff8  lw          $v1, -0x8($s1)
    ctx->pc = 0x490a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
label_490a9c:
    // 0x490a9c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_490aa0:
    if (ctx->pc == 0x490AA0u) {
        ctx->pc = 0x490AA0u;
            // 0x490aa0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x490AA4u;
        goto label_490aa4;
    }
    ctx->pc = 0x490A9Cu;
    {
        const bool branch_taken_0x490a9c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x490a9c) {
            ctx->pc = 0x490AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490A9Cu;
            // 0x490aa0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490AB0u;
            goto label_490ab0;
        }
    }
    ctx->pc = 0x490AA4u;
label_490aa4:
    // 0x490aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x490aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490aa8:
    // 0x490aa8: 0x10000007  b           . + 4 + (0x7 << 2)
label_490aac:
    if (ctx->pc == 0x490AACu) {
        ctx->pc = 0x490AACu;
            // 0x490aac: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x490AB0u;
        goto label_490ab0;
    }
    ctx->pc = 0x490AA8u;
    {
        const bool branch_taken_0x490aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490AA8u;
            // 0x490aac: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x490aa8) {
            ctx->pc = 0x490AC8u;
            goto label_490ac8;
        }
    }
    ctx->pc = 0x490AB0u;
label_490ab0:
    // 0x490ab0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x490ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_490ab4:
    // 0x490ab4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x490ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_490ab8:
    // 0x490ab8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x490ab8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490abc:
    // 0x490abc: 0x0  nop
    ctx->pc = 0x490abcu;
    // NOP
label_490ac0:
    // 0x490ac0: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x490ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_490ac4:
    // 0x490ac4: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x490ac4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_490ac8:
    // 0x490ac8: 0x1000000f  b           . + 4 + (0xF << 2)
label_490acc:
    if (ctx->pc == 0x490ACCu) {
        ctx->pc = 0x490AD0u;
        goto label_490ad0;
    }
    ctx->pc = 0x490AC8u;
    {
        const bool branch_taken_0x490ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490ac8) {
            ctx->pc = 0x490B08u;
            goto label_490b08;
        }
    }
    ctx->pc = 0x490AD0u;
label_490ad0:
    // 0x490ad0: 0xc0497dc  jal         func_125F70
label_490ad4:
    if (ctx->pc == 0x490AD4u) {
        ctx->pc = 0x490AD4u;
            // 0x490ad4: 0xde24fff8  ld          $a0, -0x8($s1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 4294967288)));
        ctx->pc = 0x490AD8u;
        goto label_490ad8;
    }
    ctx->pc = 0x490AD0u;
    SET_GPR_U32(ctx, 31, 0x490AD8u);
    ctx->pc = 0x490AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490AD0u;
            // 0x490ad4: 0xde24fff8  ld          $a0, -0x8($s1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 4294967288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490AD8u; }
        if (ctx->pc != 0x490AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490AD8u; }
        if (ctx->pc != 0x490AD8u) { return; }
    }
    ctx->pc = 0x490AD8u;
label_490ad8:
    // 0x490ad8: 0x1000000b  b           . + 4 + (0xB << 2)
label_490adc:
    if (ctx->pc == 0x490ADCu) {
        ctx->pc = 0x490ADCu;
            // 0x490adc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x490AE0u;
        goto label_490ae0;
    }
    ctx->pc = 0x490AD8u;
    {
        const bool branch_taken_0x490ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490AD8u;
            // 0x490adc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x490ad8) {
            ctx->pc = 0x490B08u;
            goto label_490b08;
        }
    }
    ctx->pc = 0x490AE0u;
label_490ae0:
    // 0x490ae0: 0x10000009  b           . + 4 + (0x9 << 2)
label_490ae4:
    if (ctx->pc == 0x490AE4u) {
        ctx->pc = 0x490AE4u;
            // 0x490ae4: 0xc634fff8  lwc1        $f20, -0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x490AE8u;
        goto label_490ae8;
    }
    ctx->pc = 0x490AE0u;
    {
        const bool branch_taken_0x490ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490AE0u;
            // 0x490ae4: 0xc634fff8  lwc1        $f20, -0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x490ae0) {
            ctx->pc = 0x490B08u;
            goto label_490b08;
        }
    }
    ctx->pc = 0x490AE8u;
label_490ae8:
    // 0x490ae8: 0x9222fff8  lbu         $v0, -0x8($s1)
    ctx->pc = 0x490ae8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967288)));
label_490aec:
    // 0x490aec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x490aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_490af0:
    // 0x490af0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x490af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_490af4:
    // 0x490af4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x490af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_490af8:
    // 0x490af8: 0xc124524  jal         func_491490
label_490afc:
    if (ctx->pc == 0x490AFCu) {
        ctx->pc = 0x490AFCu;
            // 0x490afc: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x490B00u;
        goto label_490b00;
    }
    ctx->pc = 0x490AF8u;
    SET_GPR_U32(ctx, 31, 0x490B00u);
    ctx->pc = 0x490AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490AF8u;
            // 0x490afc: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490B00u; }
        if (ctx->pc != 0x490B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490B00u; }
        if (ctx->pc != 0x490B00u) { return; }
    }
    ctx->pc = 0x490B00u;
label_490b00:
    // 0x490b00: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x490b00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_490b04:
    // 0x490b04: 0x0  nop
    ctx->pc = 0x490b04u;
    // NOP
label_490b08:
    // 0x490b08: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x490b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_490b0c:
    // 0x490b0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x490b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490b10:
    // 0x490b10: 0x0  nop
    ctx->pc = 0x490b10u;
    // NOP
label_490b14:
    // 0x490b14: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x490b14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_490b18:
    // 0x490b18: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_490b1c:
    if (ctx->pc == 0x490B1Cu) {
        ctx->pc = 0x490B1Cu;
            // 0x490b1c: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x490B20u;
        goto label_490b20;
    }
    ctx->pc = 0x490B18u;
    {
        const bool branch_taken_0x490b18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x490b18) {
            ctx->pc = 0x490B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490B18u;
            // 0x490b1c: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x490B30u;
            goto label_490b30;
        }
    }
    ctx->pc = 0x490B20u;
label_490b20:
    // 0x490b20: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x490b20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_490b24:
    // 0x490b24: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x490b24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_490b28:
    // 0x490b28: 0x10000007  b           . + 4 + (0x7 << 2)
label_490b2c:
    if (ctx->pc == 0x490B2Cu) {
        ctx->pc = 0x490B2Cu;
            // 0x490b2c: 0xae0400c4  sw          $a0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
        ctx->pc = 0x490B30u;
        goto label_490b30;
    }
    ctx->pc = 0x490B28u;
    {
        const bool branch_taken_0x490b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490B28u;
            // 0x490b2c: 0xae0400c4  sw          $a0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490b28) {
            ctx->pc = 0x490B48u;
            goto label_490b48;
        }
    }
    ctx->pc = 0x490B30u;
label_490b30:
    // 0x490b30: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x490b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_490b34:
    // 0x490b34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x490b34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_490b38:
    // 0x490b38: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x490b38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_490b3c:
    // 0x490b3c: 0x0  nop
    ctx->pc = 0x490b3cu;
    // NOP
label_490b40:
    // 0x490b40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x490b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_490b44:
    // 0x490b44: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x490b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_490b48:
    // 0x490b48: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x490b48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_490b4c:
    // 0x490b4c: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x490b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_490b50:
    // 0x490b50: 0x1640ffb3  bnez        $s2, . + 4 + (-0x4D << 2)
label_490b54:
    if (ctx->pc == 0x490B54u) {
        ctx->pc = 0x490B54u;
            // 0x490b54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x490B58u;
        goto label_490b58;
    }
    ctx->pc = 0x490B50u;
    {
        const bool branch_taken_0x490b50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x490B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490B50u;
            // 0x490b54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490b50) {
            ctx->pc = 0x490A20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_490a20;
        }
    }
    ctx->pc = 0x490B58u;
label_490b58:
    // 0x490b58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x490b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_490b5c:
    // 0x490b5c: 0x1000023d  b           . + 4 + (0x23D << 2)
label_490b60:
    if (ctx->pc == 0x490B60u) {
        ctx->pc = 0x490B60u;
            // 0x490b60: 0xa6a30046  sh          $v1, 0x46($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 70), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x490B64u;
        goto label_490b64;
    }
    ctx->pc = 0x490B5Cu;
    {
        const bool branch_taken_0x490b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490B5Cu;
            // 0x490b60: 0xa6a30046  sh          $v1, 0x46($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 70), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490b5c) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x490B64u;
label_490b64:
    // 0x490b64: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x490b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_490b68:
    // 0x490b68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x490b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_490b6c:
    // 0x490b6c: 0xc04af96  jal         func_12BE58
label_490b70:
    if (ctx->pc == 0x490B70u) {
        ctx->pc = 0x490B70u;
            // 0x490b70: 0x24a50860  addiu       $a1, $a1, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2144));
        ctx->pc = 0x490B74u;
        goto label_490b74;
    }
    ctx->pc = 0x490B6Cu;
    SET_GPR_U32(ctx, 31, 0x490B74u);
    ctx->pc = 0x490B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490B6Cu;
            // 0x490b70: 0x24a50860  addiu       $a1, $a1, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490B74u; }
        if (ctx->pc != 0x490B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490B74u; }
        if (ctx->pc != 0x490B74u) { return; }
    }
    ctx->pc = 0x490B74u;
label_490b74:
    // 0x490b74: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
label_490b78:
    if (ctx->pc == 0x490B78u) {
        ctx->pc = 0x490B78u;
            // 0x490b78: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x490B7Cu;
        goto label_490b7c;
    }
    ctx->pc = 0x490B74u;
    {
        const bool branch_taken_0x490b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x490b74) {
            ctx->pc = 0x490B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490B74u;
            // 0x490b78: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490CACu;
            goto label_490cac;
        }
    }
    ctx->pc = 0x490B7Cu;
label_490b7c:
    // 0x490b7c: 0x8ea6004c  lw          $a2, 0x4C($s5)
    ctx->pc = 0x490b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_490b80:
    // 0x490b80: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x490b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_490b84:
    // 0x490b84: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x490b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_490b88:
    // 0x490b88: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x490b88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_490b8c:
    // 0x490b8c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x490b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_490b90:
    // 0x490b90: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x490b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
label_490b94:
    // 0x490b94: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x490b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_490b98:
    // 0x490b98: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x490b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_490b9c:
    // 0x490b9c: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x490b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_490ba0:
    // 0x490ba0: 0x90c4fff0  lbu         $a0, -0x10($a2)
    ctx->pc = 0x490ba0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_490ba4:
    // 0x490ba4: 0xa3a40100  sb          $a0, 0x100($sp)
    ctx->pc = 0x490ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 4));
label_490ba8:
    // 0x490ba8: 0xdcc4fff8  ld          $a0, -0x8($a2)
    ctx->pc = 0x490ba8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_490bac:
    // 0x490bac: 0xffa40108  sd          $a0, 0x108($sp)
    ctx->pc = 0x490bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 4));
label_490bb0:
    // 0x490bb0: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x490bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_490bb4:
    // 0x490bb4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x490bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_490bb8:
    // 0x490bb8: 0xaea4004c  sw          $a0, 0x4C($s5)
    ctx->pc = 0x490bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 4));
label_490bbc:
    // 0x490bbc: 0x93a40100  lbu         $a0, 0x100($sp)
    ctx->pc = 0x490bbcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
label_490bc0:
    // 0x490bc0: 0x5083001d  beql        $a0, $v1, . + 4 + (0x1D << 2)
label_490bc4:
    if (ctx->pc == 0x490BC4u) {
        ctx->pc = 0x490BC4u;
            // 0x490bc4: 0x93a20108  lbu         $v0, 0x108($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x490BC8u;
        goto label_490bc8;
    }
    ctx->pc = 0x490BC0u;
    {
        const bool branch_taken_0x490bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x490bc0) {
            ctx->pc = 0x490BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490BC0u;
            // 0x490bc4: 0x93a20108  lbu         $v0, 0x108($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490C38u;
            goto label_490c38;
        }
    }
    ctx->pc = 0x490BC8u;
label_490bc8:
    // 0x490bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x490bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490bcc:
    // 0x490bcc: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
label_490bd0:
    if (ctx->pc == 0x490BD0u) {
        ctx->pc = 0x490BD0u;
            // 0x490bd0: 0xc7b40108  lwc1        $f20, 0x108($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x490BD4u;
        goto label_490bd4;
    }
    ctx->pc = 0x490BCCu;
    {
        const bool branch_taken_0x490bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x490bcc) {
            ctx->pc = 0x490BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490BCCu;
            // 0x490bd0: 0xc7b40108  lwc1        $f20, 0x108($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x490C50u;
            goto label_490c50;
        }
    }
    ctx->pc = 0x490BD4u;
label_490bd4:
    // 0x490bd4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x490bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_490bd8:
    // 0x490bd8: 0x50830013  beql        $a0, $v1, . + 4 + (0x13 << 2)
label_490bdc:
    if (ctx->pc == 0x490BDCu) {
        ctx->pc = 0x490BDCu;
            // 0x490bdc: 0xdfa40108  ld          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x490BE0u;
        goto label_490be0;
    }
    ctx->pc = 0x490BD8u;
    {
        const bool branch_taken_0x490bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x490bd8) {
            ctx->pc = 0x490BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490BD8u;
            // 0x490bdc: 0xdfa40108  ld          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490C28u;
            goto label_490c28;
        }
    }
    ctx->pc = 0x490BE0u;
label_490be0:
    // 0x490be0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x490be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_490be4:
    // 0x490be4: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_490be8:
    if (ctx->pc == 0x490BE8u) {
        ctx->pc = 0x490BE8u;
            // 0x490be8: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x490BECu;
        goto label_490bec;
    }
    ctx->pc = 0x490BE4u;
    {
        const bool branch_taken_0x490be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x490be4) {
            ctx->pc = 0x490BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490BE4u;
            // 0x490be8: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490BF4u;
            goto label_490bf4;
        }
    }
    ctx->pc = 0x490BECu;
label_490bec:
    // 0x490bec: 0x10000019  b           . + 4 + (0x19 << 2)
label_490bf0:
    if (ctx->pc == 0x490BF0u) {
        ctx->pc = 0x490BF0u;
            // 0x490bf0: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->pc = 0x490BF4u;
        goto label_490bf4;
    }
    ctx->pc = 0x490BECu;
    {
        const bool branch_taken_0x490bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490BECu;
            // 0x490bf0: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490bec) {
            ctx->pc = 0x490C54u;
            goto label_490c54;
        }
    }
    ctx->pc = 0x490BF4u;
label_490bf4:
    // 0x490bf4: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_490bf8:
    if (ctx->pc == 0x490BF8u) {
        ctx->pc = 0x490BF8u;
            // 0x490bf8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x490BFCu;
        goto label_490bfc;
    }
    ctx->pc = 0x490BF4u;
    {
        const bool branch_taken_0x490bf4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x490bf4) {
            ctx->pc = 0x490BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490BF4u;
            // 0x490bf8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490C08u;
            goto label_490c08;
        }
    }
    ctx->pc = 0x490BFCu;
label_490bfc:
    // 0x490bfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x490bfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490c00:
    // 0x490c00: 0x10000007  b           . + 4 + (0x7 << 2)
label_490c04:
    if (ctx->pc == 0x490C04u) {
        ctx->pc = 0x490C04u;
            // 0x490c04: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x490C08u;
        goto label_490c08;
    }
    ctx->pc = 0x490C00u;
    {
        const bool branch_taken_0x490c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490C00u;
            // 0x490c04: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x490c00) {
            ctx->pc = 0x490C20u;
            goto label_490c20;
        }
    }
    ctx->pc = 0x490C08u;
label_490c08:
    // 0x490c08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x490c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_490c0c:
    // 0x490c0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x490c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_490c10:
    // 0x490c10: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x490c10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490c14:
    // 0x490c14: 0x0  nop
    ctx->pc = 0x490c14u;
    // NOP
label_490c18:
    // 0x490c18: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x490c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_490c1c:
    // 0x490c1c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x490c1cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_490c20:
    // 0x490c20: 0x1000000b  b           . + 4 + (0xB << 2)
label_490c24:
    if (ctx->pc == 0x490C24u) {
        ctx->pc = 0x490C28u;
        goto label_490c28;
    }
    ctx->pc = 0x490C20u;
    {
        const bool branch_taken_0x490c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490c20) {
            ctx->pc = 0x490C50u;
            goto label_490c50;
        }
    }
    ctx->pc = 0x490C28u;
label_490c28:
    // 0x490c28: 0xc0497dc  jal         func_125F70
label_490c2c:
    if (ctx->pc == 0x490C2Cu) {
        ctx->pc = 0x490C30u;
        goto label_490c30;
    }
    ctx->pc = 0x490C28u;
    SET_GPR_U32(ctx, 31, 0x490C30u);
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490C30u; }
        if (ctx->pc != 0x490C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490C30u; }
        if (ctx->pc != 0x490C30u) { return; }
    }
    ctx->pc = 0x490C30u;
label_490c30:
    // 0x490c30: 0x10000007  b           . + 4 + (0x7 << 2)
label_490c34:
    if (ctx->pc == 0x490C34u) {
        ctx->pc = 0x490C34u;
            // 0x490c34: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x490C38u;
        goto label_490c38;
    }
    ctx->pc = 0x490C30u;
    {
        const bool branch_taken_0x490c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490C30u;
            // 0x490c34: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x490c30) {
            ctx->pc = 0x490C50u;
            goto label_490c50;
        }
    }
    ctx->pc = 0x490C38u;
label_490c38:
    // 0x490c38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x490c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_490c3c:
    // 0x490c3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x490c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_490c40:
    // 0x490c40: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x490c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_490c44:
    // 0x490c44: 0xc124524  jal         func_491490
label_490c48:
    if (ctx->pc == 0x490C48u) {
        ctx->pc = 0x490C48u;
            // 0x490c48: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x490C4Cu;
        goto label_490c4c;
    }
    ctx->pc = 0x490C44u;
    SET_GPR_U32(ctx, 31, 0x490C4Cu);
    ctx->pc = 0x490C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490C44u;
            // 0x490c48: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490C4Cu; }
        if (ctx->pc != 0x490C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490C4Cu; }
        if (ctx->pc != 0x490C4Cu) { return; }
    }
    ctx->pc = 0x490C4Cu;
label_490c4c:
    // 0x490c4c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x490c4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_490c50:
    // 0x490c50: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x490c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_490c54:
    // 0x490c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x490c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490c58:
    // 0x490c58: 0x0  nop
    ctx->pc = 0x490c58u;
    // NOP
label_490c5c:
    // 0x490c5c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x490c5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_490c60:
    // 0x490c60: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_490c64:
    if (ctx->pc == 0x490C64u) {
        ctx->pc = 0x490C64u;
            // 0x490c64: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x490C68u;
        goto label_490c68;
    }
    ctx->pc = 0x490C60u;
    {
        const bool branch_taken_0x490c60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x490c60) {
            ctx->pc = 0x490C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490C60u;
            // 0x490c64: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x490C78u;
            goto label_490c78;
        }
    }
    ctx->pc = 0x490C68u;
label_490c68:
    // 0x490c68: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x490c68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_490c6c:
    // 0x490c6c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x490c6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_490c70:
    // 0x490c70: 0x10000007  b           . + 4 + (0x7 << 2)
label_490c74:
    if (ctx->pc == 0x490C74u) {
        ctx->pc = 0x490C74u;
            // 0x490c74: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x490C78u;
        goto label_490c78;
    }
    ctx->pc = 0x490C70u;
    {
        const bool branch_taken_0x490c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490C70u;
            // 0x490c74: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490c70) {
            ctx->pc = 0x490C90u;
            goto label_490c90;
        }
    }
    ctx->pc = 0x490C78u;
label_490c78:
    // 0x490c78: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x490c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_490c7c:
    // 0x490c7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x490c7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_490c80:
    // 0x490c80: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x490c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_490c84:
    // 0x490c84: 0x0  nop
    ctx->pc = 0x490c84u;
    // NOP
label_490c88:
    // 0x490c88: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x490c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_490c8c:
    // 0x490c8c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x490c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_490c90:
    // 0x490c90: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x490c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_490c94:
    // 0x490c94: 0x106001ef  beqz        $v1, . + 4 + (0x1EF << 2)
label_490c98:
    if (ctx->pc == 0x490C98u) {
        ctx->pc = 0x490C9Cu;
        goto label_490c9c;
    }
    ctx->pc = 0x490C94u;
    {
        const bool branch_taken_0x490c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x490c94) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x490C9Cu;
label_490c9c:
    // 0x490c9c: 0xc073234  jal         func_1CC8D0
label_490ca0:
    if (ctx->pc == 0x490CA0u) {
        ctx->pc = 0x490CA4u;
        goto label_490ca4;
    }
    ctx->pc = 0x490C9Cu;
    SET_GPR_U32(ctx, 31, 0x490CA4u);
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490CA4u; }
        if (ctx->pc != 0x490CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490CA4u; }
        if (ctx->pc != 0x490CA4u) { return; }
    }
    ctx->pc = 0x490CA4u;
label_490ca4:
    // 0x490ca4: 0x100001eb  b           . + 4 + (0x1EB << 2)
label_490ca8:
    if (ctx->pc == 0x490CA8u) {
        ctx->pc = 0x490CACu;
        goto label_490cac;
    }
    ctx->pc = 0x490CA4u;
    {
        const bool branch_taken_0x490ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490ca4) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x490CACu;
label_490cac:
    // 0x490cac: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x490cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_490cb0:
    // 0x490cb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x490cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_490cb4:
    // 0x490cb4: 0xc04af96  jal         func_12BE58
label_490cb8:
    if (ctx->pc == 0x490CB8u) {
        ctx->pc = 0x490CB8u;
            // 0x490cb8: 0x24a50868  addiu       $a1, $a1, 0x868 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2152));
        ctx->pc = 0x490CBCu;
        goto label_490cbc;
    }
    ctx->pc = 0x490CB4u;
    SET_GPR_U32(ctx, 31, 0x490CBCu);
    ctx->pc = 0x490CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490CB4u;
            // 0x490cb8: 0x24a50868  addiu       $a1, $a1, 0x868 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490CBCu; }
        if (ctx->pc != 0x490CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490CBCu; }
        if (ctx->pc != 0x490CBCu) { return; }
    }
    ctx->pc = 0x490CBCu;
label_490cbc:
    // 0x490cbc: 0x5440006d  bnel        $v0, $zero, . + 4 + (0x6D << 2)
label_490cc0:
    if (ctx->pc == 0x490CC0u) {
        ctx->pc = 0x490CC0u;
            // 0x490cc0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x490CC4u;
        goto label_490cc4;
    }
    ctx->pc = 0x490CBCu;
    {
        const bool branch_taken_0x490cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x490cbc) {
            ctx->pc = 0x490CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490CBCu;
            // 0x490cc0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490E74u;
            goto label_490e74;
        }
    }
    ctx->pc = 0x490CC4u;
label_490cc4:
    // 0x490cc4: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x490cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_490cc8:
    // 0x490cc8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x490cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_490ccc:
    // 0x490ccc: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x490cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_490cd0:
    // 0x490cd0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x490cd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_490cd4:
    // 0x490cd4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x490cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_490cd8:
    // 0x490cd8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x490cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_490cdc:
    // 0x490cdc: 0xafa401c8  sw          $a0, 0x1C8($sp)
    ctx->pc = 0x490cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 4));
label_490ce0:
    // 0x490ce0: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x490ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_490ce4:
    // 0x490ce4: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x490ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_490ce8:
    // 0x490ce8: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x490ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_490cec:
    // 0x490cec: 0x90a4fff0  lbu         $a0, -0x10($a1)
    ctx->pc = 0x490cecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_490cf0:
    // 0x490cf0: 0xa3a40100  sb          $a0, 0x100($sp)
    ctx->pc = 0x490cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 4));
label_490cf4:
    // 0x490cf4: 0xdca4fff8  ld          $a0, -0x8($a1)
    ctx->pc = 0x490cf4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_490cf8:
    // 0x490cf8: 0xffa40108  sd          $a0, 0x108($sp)
    ctx->pc = 0x490cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 4));
label_490cfc:
    // 0x490cfc: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x490cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_490d00:
    // 0x490d00: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x490d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_490d04:
    // 0x490d04: 0xaea4004c  sw          $a0, 0x4C($s5)
    ctx->pc = 0x490d04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 4));
label_490d08:
    // 0x490d08: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x490d08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_490d0c:
    // 0x490d0c: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x490d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_490d10:
    // 0x490d10: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x490d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_490d14:
    // 0x490d14: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x490d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_490d18:
    // 0x490d18: 0xafa501c0  sw          $a1, 0x1C0($sp)
    ctx->pc = 0x490d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 5));
label_490d1c:
    // 0x490d1c: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x490d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_490d20:
    // 0x490d20: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x490d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_490d24:
    // 0x490d24: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x490d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_490d28:
    // 0x490d28: 0x90b7fff0  lbu         $s7, -0x10($a1)
    ctx->pc = 0x490d28u;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_490d2c:
    // 0x490d2c: 0xdca5fff8  ld          $a1, -0x8($a1)
    ctx->pc = 0x490d2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_490d30:
    // 0x490d30: 0xaea4004c  sw          $a0, 0x4C($s5)
    ctx->pc = 0x490d30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 4));
label_490d34:
    // 0x490d34: 0x93a40100  lbu         $a0, 0x100($sp)
    ctx->pc = 0x490d34u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
label_490d38:
    // 0x490d38: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_490d3c:
    if (ctx->pc == 0x490D3Cu) {
        ctx->pc = 0x490D3Cu;
            // 0x490d3c: 0xffa500f8  sd          $a1, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 5));
        ctx->pc = 0x490D40u;
        goto label_490d40;
    }
    ctx->pc = 0x490D38u;
    {
        const bool branch_taken_0x490d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x490D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490D38u;
            // 0x490d3c: 0xffa500f8  sd          $a1, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490d38) {
            ctx->pc = 0x490D50u;
            goto label_490d50;
        }
    }
    ctx->pc = 0x490D40u;
label_490d40:
    // 0x490d40: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_490d44:
    if (ctx->pc == 0x490D44u) {
        ctx->pc = 0x490D44u;
            // 0x490d44: 0x8fb60108  lw          $s6, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x490D48u;
        goto label_490d48;
    }
    ctx->pc = 0x490D40u;
    {
        const bool branch_taken_0x490d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x490d40) {
            ctx->pc = 0x490D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490D40u;
            // 0x490d44: 0x8fb60108  lw          $s6, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490D68u;
            goto label_490d68;
        }
    }
    ctx->pc = 0x490D48u;
label_490d48:
    // 0x490d48: 0x10000008  b           . + 4 + (0x8 << 2)
label_490d4c:
    if (ctx->pc == 0x490D4Cu) {
        ctx->pc = 0x490D4Cu;
            // 0x490d4c: 0x8eb40004  lw          $s4, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x490D50u;
        goto label_490d50;
    }
    ctx->pc = 0x490D48u;
    {
        const bool branch_taken_0x490d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490D48u;
            // 0x490d4c: 0x8eb40004  lw          $s4, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490d48) {
            ctx->pc = 0x490D6Cu;
            goto label_490d6c;
        }
    }
    ctx->pc = 0x490D50u;
label_490d50:
    // 0x490d50: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x490d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_490d54:
    // 0x490d54: 0x93a40108  lbu         $a0, 0x108($sp)
    ctx->pc = 0x490d54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 264)));
label_490d58:
    // 0x490d58: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x490d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_490d5c:
    // 0x490d5c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x490d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_490d60:
    // 0x490d60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x490d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_490d64:
    // 0x490d64: 0x8c760000  lw          $s6, 0x0($v1)
    ctx->pc = 0x490d64u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_490d68:
    // 0x490d68: 0x8eb40004  lw          $s4, 0x4($s5)
    ctx->pc = 0x490d68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_490d6c:
    // 0x490d6c: 0x27be022c  addiu       $fp, $sp, 0x22C
    ctx->pc = 0x490d6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
label_490d70:
    // 0x490d70: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
label_490d74:
    if (ctx->pc == 0x490D74u) {
        ctx->pc = 0x490D74u;
            // 0x490d74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x490D78u;
        goto label_490d78;
    }
    ctx->pc = 0x490D70u;
    {
        const bool branch_taken_0x490d70 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x490D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490D70u;
            // 0x490d74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490d70) {
            ctx->pc = 0x490D80u;
            goto label_490d80;
        }
    }
    ctx->pc = 0x490D78u;
label_490d78:
    // 0x490d78: 0x10000003  b           . + 4 + (0x3 << 2)
label_490d7c:
    if (ctx->pc == 0x490D7Cu) {
        ctx->pc = 0x490D7Cu;
            // 0x490d7c: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x490D80u;
        goto label_490d80;
    }
    ctx->pc = 0x490D78u;
    {
        const bool branch_taken_0x490d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490D78u;
            // 0x490d7c: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490d78) {
            ctx->pc = 0x490D88u;
            goto label_490d88;
        }
    }
    ctx->pc = 0x490D80u;
label_490d80:
    // 0x490d80: 0x27be0224  addiu       $fp, $sp, 0x224
    ctx->pc = 0x490d80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
label_490d84:
    // 0x490d84: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x490d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_490d88:
    // 0x490d88: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x490d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_490d8c:
    // 0x490d8c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_490d90:
    if (ctx->pc == 0x490D90u) {
        ctx->pc = 0x490D94u;
        goto label_490d94;
    }
    ctx->pc = 0x490D8Cu;
    {
        const bool branch_taken_0x490d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x490d8c) {
            ctx->pc = 0x490E28u;
            goto label_490e28;
        }
    }
    ctx->pc = 0x490D94u;
label_490d94:
    // 0x490d94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x490d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_490d98:
    // 0x490d98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x490d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_490d9c:
    // 0x490d9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x490d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_490da0:
    // 0x490da0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x490da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_490da4:
    // 0x490da4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x490da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_490da8:
    // 0x490da8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x490da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_490dac:
    // 0x490dac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x490dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_490db0:
    // 0x490db0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x490db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_490db4:
    // 0x490db4: 0xc04af96  jal         func_12BE58
label_490db8:
    if (ctx->pc == 0x490DB8u) {
        ctx->pc = 0x490DB8u;
            // 0x490db8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x490DBCu;
        goto label_490dbc;
    }
    ctx->pc = 0x490DB4u;
    SET_GPR_U32(ctx, 31, 0x490DBCu);
    ctx->pc = 0x490DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490DB4u;
            // 0x490db8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490DBCu; }
        if (ctx->pc != 0x490DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490DBCu; }
        if (ctx->pc != 0x490DBCu) { return; }
    }
    ctx->pc = 0x490DBCu;
label_490dbc:
    // 0x490dbc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_490dc0:
    if (ctx->pc == 0x490DC0u) {
        ctx->pc = 0x490DC0u;
            // 0x490dc0: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x490DC4u;
        goto label_490dc4;
    }
    ctx->pc = 0x490DBCu;
    {
        const bool branch_taken_0x490dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x490dbc) {
            ctx->pc = 0x490DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490DBCu;
            // 0x490dc0: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490DF8u;
            goto label_490df8;
        }
    }
    ctx->pc = 0x490DC4u;
label_490dc4:
    // 0x490dc4: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x490dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_490dc8:
    // 0x490dc8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x490dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_490dcc:
    // 0x490dcc: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x490dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_490dd0:
    // 0x490dd0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x490dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_490dd4:
    // 0x490dd4: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x490dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_490dd8:
    // 0x490dd8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x490dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_490ddc:
    // 0x490ddc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x490ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_490de0:
    // 0x490de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x490de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_490de4:
    // 0x490de4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x490de4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_490de8:
    // 0x490de8: 0xc12398c  jal         func_48E630
label_490dec:
    if (ctx->pc == 0x490DECu) {
        ctx->pc = 0x490DECu;
            // 0x490dec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x490DF0u;
        goto label_490df0;
    }
    ctx->pc = 0x490DE8u;
    SET_GPR_U32(ctx, 31, 0x490DF0u);
    ctx->pc = 0x490DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490DE8u;
            // 0x490dec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E630u;
    if (runtime->hasFunction(0x48E630u)) {
        auto targetFn = runtime->lookupFunction(0x48E630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490DF0u; }
        if (ctx->pc != 0x490DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E630_0x48e630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490DF0u; }
        if (ctx->pc != 0x490DF0u) { return; }
    }
    ctx->pc = 0x490DF0u;
label_490df0:
    // 0x490df0: 0x1000000d  b           . + 4 + (0xD << 2)
label_490df4:
    if (ctx->pc == 0x490DF4u) {
        ctx->pc = 0x490DF8u;
        goto label_490df8;
    }
    ctx->pc = 0x490DF0u;
    {
        const bool branch_taken_0x490df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490df0) {
            ctx->pc = 0x490E28u;
            goto label_490e28;
        }
    }
    ctx->pc = 0x490DF8u;
label_490df8:
    // 0x490df8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x490df8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_490dfc:
    // 0x490dfc: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x490dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_490e00:
    // 0x490e00: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x490e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_490e04:
    // 0x490e04: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x490e04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_490e08:
    // 0x490e08: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x490e08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_490e0c:
    // 0x490e0c: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_490e10:
    if (ctx->pc == 0x490E10u) {
        ctx->pc = 0x490E10u;
            // 0x490e10: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x490E14u;
        goto label_490e14;
    }
    ctx->pc = 0x490E0Cu;
    {
        const bool branch_taken_0x490e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x490E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490E0Cu;
            // 0x490e10: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490e0c) {
            ctx->pc = 0x490DA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_490da0;
        }
    }
    ctx->pc = 0x490E14u;
label_490e14:
    // 0x490e14: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x490e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_490e18:
    // 0x490e18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x490e18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_490e1c:
    // 0x490e1c: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x490e1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_490e20:
    // 0x490e20: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_490e24:
    if (ctx->pc == 0x490E24u) {
        ctx->pc = 0x490E24u;
            // 0x490e24: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x490E28u;
        goto label_490e28;
    }
    ctx->pc = 0x490E20u;
    {
        const bool branch_taken_0x490e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x490E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490E20u;
            // 0x490e24: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490e20) {
            ctx->pc = 0x490D98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_490d98;
        }
    }
    ctx->pc = 0x490E28u;
label_490e28:
    // 0x490e28: 0x8fa5022c  lw          $a1, 0x22C($sp)
    ctx->pc = 0x490e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_490e2c:
    // 0x490e2c: 0x32e400ff  andi        $a0, $s7, 0xFF
    ctx->pc = 0x490e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_490e30:
    // 0x490e30: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x490e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_490e34:
    // 0x490e34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x490e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_490e38:
    // 0x490e38: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_490e3c:
    if (ctx->pc == 0x490E3Cu) {
        ctx->pc = 0x490E3Cu;
            // 0x490e3c: 0xaea500d4  sw          $a1, 0xD4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 212), GPR_U32(ctx, 5));
        ctx->pc = 0x490E40u;
        goto label_490e40;
    }
    ctx->pc = 0x490E38u;
    {
        const bool branch_taken_0x490e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x490E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490E38u;
            // 0x490e3c: 0xaea500d4  sw          $a1, 0xD4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 212), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490e38) {
            ctx->pc = 0x490E50u;
            goto label_490e50;
        }
    }
    ctx->pc = 0x490E40u;
label_490e40:
    // 0x490e40: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_490e44:
    if (ctx->pc == 0x490E44u) {
        ctx->pc = 0x490E44u;
            // 0x490e44: 0x8fa600f8  lw          $a2, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->pc = 0x490E48u;
        goto label_490e48;
    }
    ctx->pc = 0x490E40u;
    {
        const bool branch_taken_0x490e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x490e40) {
            ctx->pc = 0x490E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490E40u;
            // 0x490e44: 0x8fa600f8  lw          $a2, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490E68u;
            goto label_490e68;
        }
    }
    ctx->pc = 0x490E48u;
label_490e48:
    // 0x490e48: 0x10000008  b           . + 4 + (0x8 << 2)
label_490e4c:
    if (ctx->pc == 0x490E4Cu) {
        ctx->pc = 0x490E4Cu;
            // 0x490e4c: 0xaea600dc  sw          $a2, 0xDC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 220), GPR_U32(ctx, 6));
        ctx->pc = 0x490E50u;
        goto label_490e50;
    }
    ctx->pc = 0x490E48u;
    {
        const bool branch_taken_0x490e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490E48u;
            // 0x490e4c: 0xaea600dc  sw          $a2, 0xDC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 220), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490e48) {
            ctx->pc = 0x490E6Cu;
            goto label_490e6c;
        }
    }
    ctx->pc = 0x490E50u;
label_490e50:
    // 0x490e50: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x490e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_490e54:
    // 0x490e54: 0x93a400f8  lbu         $a0, 0xF8($sp)
    ctx->pc = 0x490e54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 248)));
label_490e58:
    // 0x490e58: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x490e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_490e5c:
    // 0x490e5c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x490e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_490e60:
    // 0x490e60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x490e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_490e64:
    // 0x490e64: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x490e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_490e68:
    // 0x490e68: 0xaea600dc  sw          $a2, 0xDC($s5)
    ctx->pc = 0x490e68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 220), GPR_U32(ctx, 6));
label_490e6c:
    // 0x490e6c: 0x10000179  b           . + 4 + (0x179 << 2)
label_490e70:
    if (ctx->pc == 0x490E70u) {
        ctx->pc = 0x490E74u;
        goto label_490e74;
    }
    ctx->pc = 0x490E6Cu;
    {
        const bool branch_taken_0x490e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490e6c) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x490E74u;
label_490e74:
    // 0x490e74: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x490e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_490e78:
    // 0x490e78: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x490e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_490e7c:
    // 0x490e7c: 0xc04af96  jal         func_12BE58
label_490e80:
    if (ctx->pc == 0x490E80u) {
        ctx->pc = 0x490E80u;
            // 0x490e80: 0x24a50878  addiu       $a1, $a1, 0x878 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2168));
        ctx->pc = 0x490E84u;
        goto label_490e84;
    }
    ctx->pc = 0x490E7Cu;
    SET_GPR_U32(ctx, 31, 0x490E84u);
    ctx->pc = 0x490E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490E7Cu;
            // 0x490e80: 0x24a50878  addiu       $a1, $a1, 0x878 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490E84u; }
        if (ctx->pc != 0x490E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490E84u; }
        if (ctx->pc != 0x490E84u) { return; }
    }
    ctx->pc = 0x490E84u;
label_490e84:
    // 0x490e84: 0x54400090  bnel        $v0, $zero, . + 4 + (0x90 << 2)
label_490e88:
    if (ctx->pc == 0x490E88u) {
        ctx->pc = 0x490E88u;
            // 0x490e88: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x490E8Cu;
        goto label_490e8c;
    }
    ctx->pc = 0x490E84u;
    {
        const bool branch_taken_0x490e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x490e84) {
            ctx->pc = 0x490E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490E84u;
            // 0x490e88: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4910C8u;
            goto label_4910c8;
        }
    }
    ctx->pc = 0x490E8Cu;
label_490e8c:
    // 0x490e8c: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x490e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_490e90:
    // 0x490e90: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x490e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_490e94:
    // 0x490e94: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x490e94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_490e98:
    // 0x490e98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x490e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_490e9c:
    // 0x490e9c: 0xafa301b8  sw          $v1, 0x1B8($sp)
    ctx->pc = 0x490e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 3));
label_490ea0:
    // 0x490ea0: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x490ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_490ea4:
    // 0x490ea4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x490ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_490ea8:
    // 0x490ea8: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x490ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_490eac:
    // 0x490eac: 0x9083fff0  lbu         $v1, -0x10($a0)
    ctx->pc = 0x490eacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_490eb0:
    // 0x490eb0: 0xa3a30100  sb          $v1, 0x100($sp)
    ctx->pc = 0x490eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 3));
label_490eb4:
    // 0x490eb4: 0xdc83fff8  ld          $v1, -0x8($a0)
    ctx->pc = 0x490eb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_490eb8:
    // 0x490eb8: 0xffa30108  sd          $v1, 0x108($sp)
    ctx->pc = 0x490eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 3));
label_490ebc:
    // 0x490ebc: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x490ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_490ec0:
    // 0x490ec0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x490ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_490ec4:
    // 0x490ec4: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x490ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
label_490ec8:
    // 0x490ec8: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x490ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_490ecc:
    // 0x490ecc: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x490eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_490ed0:
    // 0x490ed0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x490ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_490ed4:
    // 0x490ed4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x490ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_490ed8:
    // 0x490ed8: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x490ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
label_490edc:
    // 0x490edc: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x490edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_490ee0:
    // 0x490ee0: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x490ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_490ee4:
    // 0x490ee4: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x490ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_490ee8:
    // 0x490ee8: 0x9091fff0  lbu         $s1, -0x10($a0)
    ctx->pc = 0x490ee8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_490eec:
    // 0x490eec: 0xdc84fff8  ld          $a0, -0x8($a0)
    ctx->pc = 0x490eecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_490ef0:
    // 0x490ef0: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x490ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
label_490ef4:
    // 0x490ef4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x490ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_490ef8:
    // 0x490ef8: 0x8c700084  lw          $s0, 0x84($v1)
    ctx->pc = 0x490ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_490efc:
    // 0x490efc: 0x12000155  beqz        $s0, . + 4 + (0x155 << 2)
label_490f00:
    if (ctx->pc == 0x490F00u) {
        ctx->pc = 0x490F00u;
            // 0x490f00: 0xffa400f8  sd          $a0, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 4));
        ctx->pc = 0x490F04u;
        goto label_490f04;
    }
    ctx->pc = 0x490EFCu;
    {
        const bool branch_taken_0x490efc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x490F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490EFCu;
            // 0x490f00: 0xffa400f8  sd          $a0, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490efc) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x490F04u;
label_490f04:
    // 0x490f04: 0x8c730088  lw          $s3, 0x88($v1)
    ctx->pc = 0x490f04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_490f08:
    // 0x490f08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x490f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_490f0c:
    // 0x490f0c: 0x93a30100  lbu         $v1, 0x100($sp)
    ctx->pc = 0x490f0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
label_490f10:
    // 0x490f10: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_490f14:
    if (ctx->pc == 0x490F14u) {
        ctx->pc = 0x490F14u;
            // 0x490f14: 0x8eb20008  lw          $s2, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x490F18u;
        goto label_490f18;
    }
    ctx->pc = 0x490F10u;
    {
        const bool branch_taken_0x490f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x490F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490F10u;
            // 0x490f14: 0x8eb20008  lw          $s2, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490f10) {
            ctx->pc = 0x490F88u;
            goto label_490f88;
        }
    }
    ctx->pc = 0x490F18u;
label_490f18:
    // 0x490f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x490f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490f1c:
    // 0x490f1c: 0x50620021  beql        $v1, $v0, . + 4 + (0x21 << 2)
label_490f20:
    if (ctx->pc == 0x490F20u) {
        ctx->pc = 0x490F20u;
            // 0x490f20: 0xc7b50108  lwc1        $f21, 0x108($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x490F24u;
        goto label_490f24;
    }
    ctx->pc = 0x490F1Cu;
    {
        const bool branch_taken_0x490f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x490f1c) {
            ctx->pc = 0x490F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490F1Cu;
            // 0x490f20: 0xc7b50108  lwc1        $f21, 0x108($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x490FA4u;
            goto label_490fa4;
        }
    }
    ctx->pc = 0x490F24u;
label_490f24:
    // 0x490f24: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x490f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_490f28:
    // 0x490f28: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
label_490f2c:
    if (ctx->pc == 0x490F2Cu) {
        ctx->pc = 0x490F2Cu;
            // 0x490f2c: 0xdfa40108  ld          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x490F30u;
        goto label_490f30;
    }
    ctx->pc = 0x490F28u;
    {
        const bool branch_taken_0x490f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x490f28) {
            ctx->pc = 0x490F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490F28u;
            // 0x490f2c: 0xdfa40108  ld          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490F78u;
            goto label_490f78;
        }
    }
    ctx->pc = 0x490F30u;
label_490f30:
    // 0x490f30: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x490f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_490f34:
    // 0x490f34: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_490f38:
    if (ctx->pc == 0x490F38u) {
        ctx->pc = 0x490F38u;
            // 0x490f38: 0x8fa20108  lw          $v0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x490F3Cu;
        goto label_490f3c;
    }
    ctx->pc = 0x490F34u;
    {
        const bool branch_taken_0x490f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x490f34) {
            ctx->pc = 0x490F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490F34u;
            // 0x490f38: 0x8fa20108  lw          $v0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490F44u;
            goto label_490f44;
        }
    }
    ctx->pc = 0x490F3Cu;
label_490f3c:
    // 0x490f3c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_490f40:
    if (ctx->pc == 0x490F40u) {
        ctx->pc = 0x490F40u;
            // 0x490f40: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x490F44u;
        goto label_490f44;
    }
    ctx->pc = 0x490F3Cu;
    {
        const bool branch_taken_0x490f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490F3Cu;
            // 0x490f40: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x490f3c) {
            ctx->pc = 0x490FA8u;
            goto label_490fa8;
        }
    }
    ctx->pc = 0x490F44u;
label_490f44:
    // 0x490f44: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_490f48:
    if (ctx->pc == 0x490F48u) {
        ctx->pc = 0x490F48u;
            // 0x490f48: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x490F4Cu;
        goto label_490f4c;
    }
    ctx->pc = 0x490F44u;
    {
        const bool branch_taken_0x490f44 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x490f44) {
            ctx->pc = 0x490F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490F44u;
            // 0x490f48: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490F58u;
            goto label_490f58;
        }
    }
    ctx->pc = 0x490F4Cu;
label_490f4c:
    // 0x490f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x490f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490f50:
    // 0x490f50: 0x10000007  b           . + 4 + (0x7 << 2)
label_490f54:
    if (ctx->pc == 0x490F54u) {
        ctx->pc = 0x490F54u;
            // 0x490f54: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x490F58u;
        goto label_490f58;
    }
    ctx->pc = 0x490F50u;
    {
        const bool branch_taken_0x490f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490F50u;
            // 0x490f54: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x490f50) {
            ctx->pc = 0x490F70u;
            goto label_490f70;
        }
    }
    ctx->pc = 0x490F58u;
label_490f58:
    // 0x490f58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x490f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_490f5c:
    // 0x490f5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x490f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_490f60:
    // 0x490f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x490f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490f64:
    // 0x490f64: 0x0  nop
    ctx->pc = 0x490f64u;
    // NOP
label_490f68:
    // 0x490f68: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x490f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_490f6c:
    // 0x490f6c: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x490f6cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_490f70:
    // 0x490f70: 0x1000000c  b           . + 4 + (0xC << 2)
label_490f74:
    if (ctx->pc == 0x490F74u) {
        ctx->pc = 0x490F78u;
        goto label_490f78;
    }
    ctx->pc = 0x490F70u;
    {
        const bool branch_taken_0x490f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490f70) {
            ctx->pc = 0x490FA4u;
            goto label_490fa4;
        }
    }
    ctx->pc = 0x490F78u;
label_490f78:
    // 0x490f78: 0xc0497dc  jal         func_125F70
label_490f7c:
    if (ctx->pc == 0x490F7Cu) {
        ctx->pc = 0x490F80u;
        goto label_490f80;
    }
    ctx->pc = 0x490F78u;
    SET_GPR_U32(ctx, 31, 0x490F80u);
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490F80u; }
        if (ctx->pc != 0x490F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490F80u; }
        if (ctx->pc != 0x490F80u) { return; }
    }
    ctx->pc = 0x490F80u;
label_490f80:
    // 0x490f80: 0x10000008  b           . + 4 + (0x8 << 2)
label_490f84:
    if (ctx->pc == 0x490F84u) {
        ctx->pc = 0x490F84u;
            // 0x490f84: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x490F88u;
        goto label_490f88;
    }
    ctx->pc = 0x490F80u;
    {
        const bool branch_taken_0x490f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490F80u;
            // 0x490f84: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x490f80) {
            ctx->pc = 0x490FA4u;
            goto label_490fa4;
        }
    }
    ctx->pc = 0x490F88u;
label_490f88:
    // 0x490f88: 0x93a20108  lbu         $v0, 0x108($sp)
    ctx->pc = 0x490f88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 264)));
label_490f8c:
    // 0x490f8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x490f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_490f90:
    // 0x490f90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x490f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_490f94:
    // 0x490f94: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x490f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_490f98:
    // 0x490f98: 0xc124524  jal         func_491490
label_490f9c:
    if (ctx->pc == 0x490F9Cu) {
        ctx->pc = 0x490F9Cu;
            // 0x490f9c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x490FA0u;
        goto label_490fa0;
    }
    ctx->pc = 0x490F98u;
    SET_GPR_U32(ctx, 31, 0x490FA0u);
    ctx->pc = 0x490F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x490F98u;
            // 0x490f9c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490FA0u; }
        if (ctx->pc != 0x490FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x490FA0u; }
        if (ctx->pc != 0x490FA0u) { return; }
    }
    ctx->pc = 0x490FA0u;
label_490fa0:
    // 0x490fa0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x490fa0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_490fa4:
    // 0x490fa4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x490fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_490fa8:
    // 0x490fa8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x490fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_490fac:
    // 0x490fac: 0x5062001d  beql        $v1, $v0, . + 4 + (0x1D << 2)
label_490fb0:
    if (ctx->pc == 0x490FB0u) {
        ctx->pc = 0x490FB0u;
            // 0x490fb0: 0x93a200f8  lbu         $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->pc = 0x490FB4u;
        goto label_490fb4;
    }
    ctx->pc = 0x490FACu;
    {
        const bool branch_taken_0x490fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x490fac) {
            ctx->pc = 0x490FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490FACu;
            // 0x490fb0: 0x93a200f8  lbu         $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491024u;
            goto label_491024;
        }
    }
    ctx->pc = 0x490FB4u;
label_490fb4:
    // 0x490fb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x490fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490fb8:
    // 0x490fb8: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
label_490fbc:
    if (ctx->pc == 0x490FBCu) {
        ctx->pc = 0x490FBCu;
            // 0x490fbc: 0xc7b400f8  lwc1        $f20, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x490FC0u;
        goto label_490fc0;
    }
    ctx->pc = 0x490FB8u;
    {
        const bool branch_taken_0x490fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x490fb8) {
            ctx->pc = 0x490FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490FB8u;
            // 0x490fbc: 0xc7b400f8  lwc1        $f20, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49103Cu;
            goto label_49103c;
        }
    }
    ctx->pc = 0x490FC0u;
label_490fc0:
    // 0x490fc0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x490fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_490fc4:
    // 0x490fc4: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
label_490fc8:
    if (ctx->pc == 0x490FC8u) {
        ctx->pc = 0x490FC8u;
            // 0x490fc8: 0xdfa400f8  ld          $a0, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->pc = 0x490FCCu;
        goto label_490fcc;
    }
    ctx->pc = 0x490FC4u;
    {
        const bool branch_taken_0x490fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x490fc4) {
            ctx->pc = 0x490FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490FC4u;
            // 0x490fc8: 0xdfa400f8  ld          $a0, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491014u;
            goto label_491014;
        }
    }
    ctx->pc = 0x490FCCu;
label_490fcc:
    // 0x490fcc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x490fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_490fd0:
    // 0x490fd0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_490fd4:
    if (ctx->pc == 0x490FD4u) {
        ctx->pc = 0x490FD4u;
            // 0x490fd4: 0x8fa200f8  lw          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->pc = 0x490FD8u;
        goto label_490fd8;
    }
    ctx->pc = 0x490FD0u;
    {
        const bool branch_taken_0x490fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x490fd0) {
            ctx->pc = 0x490FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490FD0u;
            // 0x490fd4: 0x8fa200f8  lw          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490FE0u;
            goto label_490fe0;
        }
    }
    ctx->pc = 0x490FD8u;
label_490fd8:
    // 0x490fd8: 0x10000019  b           . + 4 + (0x19 << 2)
label_490fdc:
    if (ctx->pc == 0x490FDCu) {
        ctx->pc = 0x490FDCu;
            // 0x490fdc: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->pc = 0x490FE0u;
        goto label_490fe0;
    }
    ctx->pc = 0x490FD8u;
    {
        const bool branch_taken_0x490fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490FD8u;
            // 0x490fdc: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490fd8) {
            ctx->pc = 0x491040u;
            goto label_491040;
        }
    }
    ctx->pc = 0x490FE0u;
label_490fe0:
    // 0x490fe0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_490fe4:
    if (ctx->pc == 0x490FE4u) {
        ctx->pc = 0x490FE4u;
            // 0x490fe4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x490FE8u;
        goto label_490fe8;
    }
    ctx->pc = 0x490FE0u;
    {
        const bool branch_taken_0x490fe0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x490fe0) {
            ctx->pc = 0x490FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x490FE0u;
            // 0x490fe4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x490FF4u;
            goto label_490ff4;
        }
    }
    ctx->pc = 0x490FE8u;
label_490fe8:
    // 0x490fe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x490fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_490fec:
    // 0x490fec: 0x10000007  b           . + 4 + (0x7 << 2)
label_490ff0:
    if (ctx->pc == 0x490FF0u) {
        ctx->pc = 0x490FF0u;
            // 0x490ff0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x490FF4u;
        goto label_490ff4;
    }
    ctx->pc = 0x490FECu;
    {
        const bool branch_taken_0x490fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x490FECu;
            // 0x490ff0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x490fec) {
            ctx->pc = 0x49100Cu;
            goto label_49100c;
        }
    }
    ctx->pc = 0x490FF4u;
label_490ff4:
    // 0x490ff4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x490ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_490ff8:
    // 0x490ff8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x490ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_490ffc:
    // 0x490ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x490ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_491000:
    // 0x491000: 0x0  nop
    ctx->pc = 0x491000u;
    // NOP
label_491004:
    // 0x491004: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x491004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_491008:
    // 0x491008: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x491008u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_49100c:
    // 0x49100c: 0x1000000b  b           . + 4 + (0xB << 2)
label_491010:
    if (ctx->pc == 0x491010u) {
        ctx->pc = 0x491014u;
        goto label_491014;
    }
    ctx->pc = 0x49100Cu;
    {
        const bool branch_taken_0x49100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49100c) {
            ctx->pc = 0x49103Cu;
            goto label_49103c;
        }
    }
    ctx->pc = 0x491014u;
label_491014:
    // 0x491014: 0xc0497dc  jal         func_125F70
label_491018:
    if (ctx->pc == 0x491018u) {
        ctx->pc = 0x49101Cu;
        goto label_49101c;
    }
    ctx->pc = 0x491014u;
    SET_GPR_U32(ctx, 31, 0x49101Cu);
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49101Cu; }
        if (ctx->pc != 0x49101Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49101Cu; }
        if (ctx->pc != 0x49101Cu) { return; }
    }
    ctx->pc = 0x49101Cu;
label_49101c:
    // 0x49101c: 0x10000007  b           . + 4 + (0x7 << 2)
label_491020:
    if (ctx->pc == 0x491020u) {
        ctx->pc = 0x491020u;
            // 0x491020: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x491024u;
        goto label_491024;
    }
    ctx->pc = 0x49101Cu;
    {
        const bool branch_taken_0x49101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49101Cu;
            // 0x491020: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49101c) {
            ctx->pc = 0x49103Cu;
            goto label_49103c;
        }
    }
    ctx->pc = 0x491024u;
label_491024:
    // 0x491024: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x491024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_491028:
    // 0x491028: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x491028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_49102c:
    // 0x49102c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x49102cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_491030:
    // 0x491030: 0xc124524  jal         func_491490
label_491034:
    if (ctx->pc == 0x491034u) {
        ctx->pc = 0x491034u;
            // 0x491034: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x491038u;
        goto label_491038;
    }
    ctx->pc = 0x491030u;
    SET_GPR_U32(ctx, 31, 0x491038u);
    ctx->pc = 0x491034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491030u;
            // 0x491034: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491038u; }
        if (ctx->pc != 0x491038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491038u; }
        if (ctx->pc != 0x491038u) { return; }
    }
    ctx->pc = 0x491038u;
label_491038:
    // 0x491038: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x491038u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_49103c:
    // 0x49103c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x49103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_491040:
    // 0x491040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x491040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_491044:
    // 0x491044: 0x0  nop
    ctx->pc = 0x491044u;
    // NOP
label_491048:
    // 0x491048: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x491048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49104c:
    // 0x49104c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_491050:
    if (ctx->pc == 0x491050u) {
        ctx->pc = 0x491050u;
            // 0x491050: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x491054u;
        goto label_491054;
    }
    ctx->pc = 0x49104Cu;
    {
        const bool branch_taken_0x49104c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49104c) {
            ctx->pc = 0x491050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49104Cu;
            // 0x491050: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x491064u;
            goto label_491064;
        }
    }
    ctx->pc = 0x491054u;
label_491054:
    // 0x491054: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x491054u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_491058:
    // 0x491058: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x491058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_49105c:
    // 0x49105c: 0x10000007  b           . + 4 + (0x7 << 2)
label_491060:
    if (ctx->pc == 0x491060u) {
        ctx->pc = 0x491060u;
            // 0x491060: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->pc = 0x491064u;
        goto label_491064;
    }
    ctx->pc = 0x49105Cu;
    {
        const bool branch_taken_0x49105c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49105Cu;
            // 0x491060: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49105c) {
            ctx->pc = 0x49107Cu;
            goto label_49107c;
        }
    }
    ctx->pc = 0x491064u;
label_491064:
    // 0x491064: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x491064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_491068:
    // 0x491068: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x491068u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49106c:
    // 0x49106c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x49106cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_491070:
    // 0x491070: 0x0  nop
    ctx->pc = 0x491070u;
    // NOP
label_491074:
    // 0x491074: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x491074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_491078:
    // 0x491078: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x491078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_49107c:
    // 0x49107c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x49107cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_491080:
    // 0x491080: 0x0  nop
    ctx->pc = 0x491080u;
    // NOP
label_491084:
    // 0x491084: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x491084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_491088:
    // 0x491088: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_49108c:
    if (ctx->pc == 0x49108Cu) {
        ctx->pc = 0x49108Cu;
            // 0x49108c: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x491090u;
        goto label_491090;
    }
    ctx->pc = 0x491088u;
    {
        const bool branch_taken_0x491088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x491088) {
            ctx->pc = 0x49108Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491088u;
            // 0x49108c: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4910A0u;
            goto label_4910a0;
        }
    }
    ctx->pc = 0x491090u;
label_491090:
    // 0x491090: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x491090u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_491094:
    // 0x491094: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x491094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_491098:
    // 0x491098: 0x10000007  b           . + 4 + (0x7 << 2)
label_49109c:
    if (ctx->pc == 0x49109Cu) {
        ctx->pc = 0x49109Cu;
            // 0x49109c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4910A0u;
        goto label_4910a0;
    }
    ctx->pc = 0x491098u;
    {
        const bool branch_taken_0x491098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49109Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491098u;
            // 0x49109c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491098) {
            ctx->pc = 0x4910B8u;
            goto label_4910b8;
        }
    }
    ctx->pc = 0x4910A0u;
label_4910a0:
    // 0x4910a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4910a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4910a4:
    // 0x4910a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4910a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4910a8:
    // 0x4910a8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x4910a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_4910ac:
    // 0x4910ac: 0x0  nop
    ctx->pc = 0x4910acu;
    // NOP
label_4910b0:
    // 0x4910b0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x4910b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_4910b4:
    // 0x4910b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4910b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4910b8:
    // 0x4910b8: 0x200f809  jalr        $s0
label_4910bc:
    if (ctx->pc == 0x4910BCu) {
        ctx->pc = 0x4910BCu;
            // 0x4910bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4910C0u;
        goto label_4910c0;
    }
    ctx->pc = 0x4910B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x4910C0u);
        ctx->pc = 0x4910BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4910B8u;
            // 0x4910bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4910C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4910C0u; }
            if (ctx->pc != 0x4910C0u) { return; }
        }
        }
    }
    ctx->pc = 0x4910C0u;
label_4910c0:
    // 0x4910c0: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_4910c4:
    if (ctx->pc == 0x4910C4u) {
        ctx->pc = 0x4910C8u;
        goto label_4910c8;
    }
    ctx->pc = 0x4910C0u;
    {
        const bool branch_taken_0x4910c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4910c0) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x4910C8u;
label_4910c8:
    // 0x4910c8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4910c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4910cc:
    // 0x4910cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4910ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4910d0:
    // 0x4910d0: 0xc04af96  jal         func_12BE58
label_4910d4:
    if (ctx->pc == 0x4910D4u) {
        ctx->pc = 0x4910D4u;
            // 0x4910d4: 0x24a50888  addiu       $a1, $a1, 0x888 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2184));
        ctx->pc = 0x4910D8u;
        goto label_4910d8;
    }
    ctx->pc = 0x4910D0u;
    SET_GPR_U32(ctx, 31, 0x4910D8u);
    ctx->pc = 0x4910D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4910D0u;
            // 0x4910d4: 0x24a50888  addiu       $a1, $a1, 0x888 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4910D8u; }
        if (ctx->pc != 0x4910D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4910D8u; }
        if (ctx->pc != 0x4910D8u) { return; }
    }
    ctx->pc = 0x4910D8u;
label_4910d8:
    // 0x4910d8: 0x144000de  bnez        $v0, . + 4 + (0xDE << 2)
label_4910dc:
    if (ctx->pc == 0x4910DCu) {
        ctx->pc = 0x4910E0u;
        goto label_4910e0;
    }
    ctx->pc = 0x4910D8u;
    {
        const bool branch_taken_0x4910d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4910d8) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x4910E0u;
label_4910e0:
    // 0x4910e0: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x4910e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_4910e4:
    // 0x4910e4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4910e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4910e8:
    // 0x4910e8: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x4910e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_4910ec:
    // 0x4910ec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4910ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4910f0:
    // 0x4910f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4910f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4910f4:
    // 0x4910f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4910f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4910f8:
    // 0x4910f8: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x4910f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
label_4910fc:
    // 0x4910fc: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x4910fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_491100:
    // 0x491100: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x491100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_491104:
    // 0x491104: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x491104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_491108:
    // 0x491108: 0x9083fff0  lbu         $v1, -0x10($a0)
    ctx->pc = 0x491108u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_49110c:
    // 0x49110c: 0xa3a30100  sb          $v1, 0x100($sp)
    ctx->pc = 0x49110cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 3));
label_491110:
    // 0x491110: 0xdc83fff8  ld          $v1, -0x8($a0)
    ctx->pc = 0x491110u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_491114:
    // 0x491114: 0xffa30108  sd          $v1, 0x108($sp)
    ctx->pc = 0x491114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 3));
label_491118:
    // 0x491118: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x491118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_49111c:
    // 0x49111c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49111cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_491120:
    // 0x491120: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x491120u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
label_491124:
    // 0x491124: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x491124u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_491128:
    // 0x491128: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x491128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_49112c:
    // 0x49112c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49112cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_491130:
    // 0x491130: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x491130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_491134:
    // 0x491134: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x491134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
label_491138:
    // 0x491138: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x491138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49113c:
    // 0x49113c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x49113cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_491140:
    // 0x491140: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x491140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_491144:
    // 0x491144: 0x9085fff0  lbu         $a1, -0x10($a0)
    ctx->pc = 0x491144u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_491148:
    // 0x491148: 0xdc84fff8  ld          $a0, -0x8($a0)
    ctx->pc = 0x491148u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_49114c:
    // 0x49114c: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x49114cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
label_491150:
    // 0x491150: 0x93a30100  lbu         $v1, 0x100($sp)
    ctx->pc = 0x491150u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
label_491154:
    // 0x491154: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_491158:
    if (ctx->pc == 0x491158u) {
        ctx->pc = 0x491158u;
            // 0x491158: 0xffa400f8  sd          $a0, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 4));
        ctx->pc = 0x49115Cu;
        goto label_49115c;
    }
    ctx->pc = 0x491154u;
    {
        const bool branch_taken_0x491154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x491158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491154u;
            // 0x491158: 0xffa400f8  sd          $a0, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491154) {
            ctx->pc = 0x49116Cu;
            goto label_49116c;
        }
    }
    ctx->pc = 0x49115Cu;
label_49115c:
    // 0x49115c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_491160:
    if (ctx->pc == 0x491160u) {
        ctx->pc = 0x491160u;
            // 0x491160: 0x8fb60108  lw          $s6, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x491164u;
        goto label_491164;
    }
    ctx->pc = 0x49115Cu;
    {
        const bool branch_taken_0x49115c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49115c) {
            ctx->pc = 0x491160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49115Cu;
            // 0x491160: 0x8fb60108  lw          $s6, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491184u;
            goto label_491184;
        }
    }
    ctx->pc = 0x491164u;
label_491164:
    // 0x491164: 0x10000008  b           . + 4 + (0x8 << 2)
label_491168:
    if (ctx->pc == 0x491168u) {
        ctx->pc = 0x491168u;
            // 0x491168: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x49116Cu;
        goto label_49116c;
    }
    ctx->pc = 0x491164u;
    {
        const bool branch_taken_0x491164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491164u;
            // 0x491168: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491164) {
            ctx->pc = 0x491188u;
            goto label_491188;
        }
    }
    ctx->pc = 0x49116Cu;
label_49116c:
    // 0x49116c: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x49116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_491170:
    // 0x491170: 0x93a30108  lbu         $v1, 0x108($sp)
    ctx->pc = 0x491170u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 264)));
label_491174:
    // 0x491174: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x491174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_491178:
    // 0x491178: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x491178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_49117c:
    // 0x49117c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_491180:
    // 0x491180: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x491180u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_491184:
    // 0x491184: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x491184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_491188:
    // 0x491188: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x491188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_49118c:
    // 0x49118c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_491190:
    if (ctx->pc == 0x491190u) {
        ctx->pc = 0x491190u;
            // 0x491190: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x491194u;
        goto label_491194;
    }
    ctx->pc = 0x49118Cu;
    {
        const bool branch_taken_0x49118c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x491190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49118Cu;
            // 0x491190: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49118c) {
            ctx->pc = 0x4911A4u;
            goto label_4911a4;
        }
    }
    ctx->pc = 0x491194u;
label_491194:
    // 0x491194: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_491198:
    if (ctx->pc == 0x491198u) {
        ctx->pc = 0x491198u;
            // 0x491198: 0x8fb700f8  lw          $s7, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->pc = 0x49119Cu;
        goto label_49119c;
    }
    ctx->pc = 0x491194u;
    {
        const bool branch_taken_0x491194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x491194) {
            ctx->pc = 0x491198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491194u;
            // 0x491198: 0x8fb700f8  lw          $s7, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4911BCu;
            goto label_4911bc;
        }
    }
    ctx->pc = 0x49119Cu;
label_49119c:
    // 0x49119c: 0x10000008  b           . + 4 + (0x8 << 2)
label_4911a0:
    if (ctx->pc == 0x4911A0u) {
        ctx->pc = 0x4911A0u;
            // 0x4911a0: 0x8eb40004  lw          $s4, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x4911A4u;
        goto label_4911a4;
    }
    ctx->pc = 0x49119Cu;
    {
        const bool branch_taken_0x49119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4911A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49119Cu;
            // 0x4911a0: 0x8eb40004  lw          $s4, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49119c) {
            ctx->pc = 0x4911C0u;
            goto label_4911c0;
        }
    }
    ctx->pc = 0x4911A4u;
label_4911a4:
    // 0x4911a4: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x4911a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4911a8:
    // 0x4911a8: 0x93a300f8  lbu         $v1, 0xF8($sp)
    ctx->pc = 0x4911a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 248)));
label_4911ac:
    // 0x4911ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4911acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4911b0:
    // 0x4911b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4911b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4911b4:
    // 0x4911b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4911b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4911b8:
    // 0x4911b8: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x4911b8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4911bc:
    // 0x4911bc: 0x8eb40004  lw          $s4, 0x4($s5)
    ctx->pc = 0x4911bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4911c0:
    // 0x4911c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4911c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4911c4:
    // 0x4911c4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x4911c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4911c8:
    // 0x4911c8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x4911c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_4911cc:
    // 0x4911cc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4911d0:
    if (ctx->pc == 0x4911D0u) {
        ctx->pc = 0x4911D0u;
            // 0x4911d0: 0x27be0220  addiu       $fp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x4911D4u;
        goto label_4911d4;
    }
    ctx->pc = 0x4911CCu;
    {
        const bool branch_taken_0x4911cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4911D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4911CCu;
            // 0x4911d0: 0x27be0220  addiu       $fp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4911cc) {
            ctx->pc = 0x491268u;
            goto label_491268;
        }
    }
    ctx->pc = 0x4911D4u;
label_4911d4:
    // 0x4911d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4911d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4911d8:
    // 0x4911d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4911d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4911dc:
    // 0x4911dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4911dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4911e0:
    // 0x4911e0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x4911e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_4911e4:
    // 0x4911e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4911e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4911e8:
    // 0x4911e8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4911e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4911ec:
    // 0x4911ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4911ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4911f0:
    // 0x4911f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4911f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4911f4:
    // 0x4911f4: 0xc04af96  jal         func_12BE58
label_4911f8:
    if (ctx->pc == 0x4911F8u) {
        ctx->pc = 0x4911F8u;
            // 0x4911f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4911FCu;
        goto label_4911fc;
    }
    ctx->pc = 0x4911F4u;
    SET_GPR_U32(ctx, 31, 0x4911FCu);
    ctx->pc = 0x4911F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4911F4u;
            // 0x4911f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4911FCu; }
        if (ctx->pc != 0x4911FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4911FCu; }
        if (ctx->pc != 0x4911FCu) { return; }
    }
    ctx->pc = 0x4911FCu;
label_4911fc:
    // 0x4911fc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_491200:
    if (ctx->pc == 0x491200u) {
        ctx->pc = 0x491200u;
            // 0x491200: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x491204u;
        goto label_491204;
    }
    ctx->pc = 0x4911FCu;
    {
        const bool branch_taken_0x4911fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4911fc) {
            ctx->pc = 0x491200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4911FCu;
            // 0x491200: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491238u;
            goto label_491238;
        }
    }
    ctx->pc = 0x491204u;
label_491204:
    // 0x491204: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x491204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_491208:
    // 0x491208: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x491208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_49120c:
    // 0x49120c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x49120cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_491210:
    // 0x491210: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x491210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_491214:
    // 0x491214: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x491214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_491218:
    // 0x491218: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x491218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_49121c:
    // 0x49121c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x49121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_491220:
    // 0x491220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x491220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_491224:
    // 0x491224: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x491224u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_491228:
    // 0x491228: 0xc12398c  jal         func_48E630
label_49122c:
    if (ctx->pc == 0x49122Cu) {
        ctx->pc = 0x49122Cu;
            // 0x49122c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x491230u;
        goto label_491230;
    }
    ctx->pc = 0x491228u;
    SET_GPR_U32(ctx, 31, 0x491230u);
    ctx->pc = 0x49122Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491228u;
            // 0x49122c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E630u;
    if (runtime->hasFunction(0x48E630u)) {
        auto targetFn = runtime->lookupFunction(0x48E630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491230u; }
        if (ctx->pc != 0x491230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E630_0x48e630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491230u; }
        if (ctx->pc != 0x491230u) { return; }
    }
    ctx->pc = 0x491230u;
label_491230:
    // 0x491230: 0x1000000e  b           . + 4 + (0xE << 2)
label_491234:
    if (ctx->pc == 0x491234u) {
        ctx->pc = 0x491234u;
            // 0x491234: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x491238u;
        goto label_491238;
    }
    ctx->pc = 0x491230u;
    {
        const bool branch_taken_0x491230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491230u;
            // 0x491234: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491230) {
            ctx->pc = 0x49126Cu;
            goto label_49126c;
        }
    }
    ctx->pc = 0x491238u;
label_491238:
    // 0x491238: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x491238u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_49123c:
    // 0x49123c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x49123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_491240:
    // 0x491240: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x491240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_491244:
    // 0x491244: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x491244u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_491248:
    // 0x491248: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x491248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49124c:
    // 0x49124c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_491250:
    if (ctx->pc == 0x491250u) {
        ctx->pc = 0x491250u;
            // 0x491250: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x491254u;
        goto label_491254;
    }
    ctx->pc = 0x49124Cu;
    {
        const bool branch_taken_0x49124c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x491250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49124Cu;
            // 0x491250: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49124c) {
            ctx->pc = 0x4911E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4911e0;
        }
    }
    ctx->pc = 0x491254u;
label_491254:
    // 0x491254: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x491254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_491258:
    // 0x491258: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x491258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_49125c:
    // 0x49125c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x49125cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_491260:
    // 0x491260: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_491264:
    if (ctx->pc == 0x491264u) {
        ctx->pc = 0x491264u;
            // 0x491264: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x491268u;
        goto label_491268;
    }
    ctx->pc = 0x491260u;
    {
        const bool branch_taken_0x491260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x491264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491260u;
            // 0x491264: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491260) {
            ctx->pc = 0x4911D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4911d8;
        }
    }
    ctx->pc = 0x491268u;
label_491268:
    // 0x491268: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x491268u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49126c:
    // 0x49126c: 0x8eb40004  lw          $s4, 0x4($s5)
    ctx->pc = 0x49126cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_491270:
    // 0x491270: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x491270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_491274:
    // 0x491274: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x491274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_491278:
    // 0x491278: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x491278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_49127c:
    // 0x49127c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_491280:
    if (ctx->pc == 0x491280u) {
        ctx->pc = 0x491280u;
            // 0x491280: 0x27be021c  addiu       $fp, $sp, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
        ctx->pc = 0x491284u;
        goto label_491284;
    }
    ctx->pc = 0x49127Cu;
    {
        const bool branch_taken_0x49127c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x491280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49127Cu;
            // 0x491280: 0x27be021c  addiu       $fp, $sp, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49127c) {
            ctx->pc = 0x491318u;
            goto label_491318;
        }
    }
    ctx->pc = 0x491284u;
label_491284:
    // 0x491284: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x491284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_491288:
    // 0x491288: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x491288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49128c:
    // 0x49128c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49128cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_491290:
    // 0x491290: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x491290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_491294:
    // 0x491294: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x491294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_491298:
    // 0x491298: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x491298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49129c:
    // 0x49129c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x49129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4912a0:
    // 0x4912a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4912a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4912a4:
    // 0x4912a4: 0xc04af96  jal         func_12BE58
label_4912a8:
    if (ctx->pc == 0x4912A8u) {
        ctx->pc = 0x4912A8u;
            // 0x4912a8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4912ACu;
        goto label_4912ac;
    }
    ctx->pc = 0x4912A4u;
    SET_GPR_U32(ctx, 31, 0x4912ACu);
    ctx->pc = 0x4912A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4912A4u;
            // 0x4912a8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4912ACu; }
        if (ctx->pc != 0x4912ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4912ACu; }
        if (ctx->pc != 0x4912ACu) { return; }
    }
    ctx->pc = 0x4912ACu;
label_4912ac:
    // 0x4912ac: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_4912b0:
    if (ctx->pc == 0x4912B0u) {
        ctx->pc = 0x4912B0u;
            // 0x4912b0: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x4912B4u;
        goto label_4912b4;
    }
    ctx->pc = 0x4912ACu;
    {
        const bool branch_taken_0x4912ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4912ac) {
            ctx->pc = 0x4912B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4912ACu;
            // 0x4912b0: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4912E8u;
            goto label_4912e8;
        }
    }
    ctx->pc = 0x4912B4u;
label_4912b4:
    // 0x4912b4: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x4912b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4912b8:
    // 0x4912b8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x4912b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_4912bc:
    // 0x4912bc: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x4912bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_4912c0:
    // 0x4912c0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4912c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4912c4:
    // 0x4912c4: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x4912c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_4912c8:
    // 0x4912c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4912c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4912cc:
    // 0x4912cc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4912ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4912d0:
    // 0x4912d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4912d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4912d4:
    // 0x4912d4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x4912d4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4912d8:
    // 0x4912d8: 0xc12398c  jal         func_48E630
label_4912dc:
    if (ctx->pc == 0x4912DCu) {
        ctx->pc = 0x4912DCu;
            // 0x4912dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4912E0u;
        goto label_4912e0;
    }
    ctx->pc = 0x4912D8u;
    SET_GPR_U32(ctx, 31, 0x4912E0u);
    ctx->pc = 0x4912DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4912D8u;
            // 0x4912dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E630u;
    if (runtime->hasFunction(0x48E630u)) {
        auto targetFn = runtime->lookupFunction(0x48E630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4912E0u; }
        if (ctx->pc != 0x4912E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E630_0x48e630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4912E0u; }
        if (ctx->pc != 0x4912E0u) { return; }
    }
    ctx->pc = 0x4912E0u;
label_4912e0:
    // 0x4912e0: 0x1000000f  b           . + 4 + (0xF << 2)
label_4912e4:
    if (ctx->pc == 0x4912E4u) {
        ctx->pc = 0x4912E4u;
            // 0x4912e4: 0x8ec50008  lw          $a1, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->pc = 0x4912E8u;
        goto label_4912e8;
    }
    ctx->pc = 0x4912E0u;
    {
        const bool branch_taken_0x4912e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4912E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4912E0u;
            // 0x4912e4: 0x8ec50008  lw          $a1, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4912e0) {
            ctx->pc = 0x491320u;
            goto label_491320;
        }
    }
    ctx->pc = 0x4912E8u;
label_4912e8:
    // 0x4912e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4912e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4912ec:
    // 0x4912ec: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x4912ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_4912f0:
    // 0x4912f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4912f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4912f4:
    // 0x4912f4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x4912f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4912f8:
    // 0x4912f8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4912f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4912fc:
    // 0x4912fc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_491300:
    if (ctx->pc == 0x491300u) {
        ctx->pc = 0x491300u;
            // 0x491300: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x491304u;
        goto label_491304;
    }
    ctx->pc = 0x4912FCu;
    {
        const bool branch_taken_0x4912fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x491300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4912FCu;
            // 0x491300: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4912fc) {
            ctx->pc = 0x491290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_491290;
        }
    }
    ctx->pc = 0x491304u;
label_491304:
    // 0x491304: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x491304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_491308:
    // 0x491308: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x491308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_49130c:
    // 0x49130c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x49130cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_491310:
    // 0x491310: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_491314:
    if (ctx->pc == 0x491314u) {
        ctx->pc = 0x491314u;
            // 0x491314: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x491318u;
        goto label_491318;
    }
    ctx->pc = 0x491310u;
    {
        const bool branch_taken_0x491310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x491314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491310u;
            // 0x491314: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491310) {
            ctx->pc = 0x491288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_491288;
        }
    }
    ctx->pc = 0x491318u;
label_491318:
    // 0x491318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x491318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49131c:
    // 0x49131c: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x49131cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_491320:
    // 0x491320: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x491320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_491324:
    // 0x491324: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x491324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491328:
    // 0x491328: 0xc123654  jal         func_48D950
label_49132c:
    if (ctx->pc == 0x49132Cu) {
        ctx->pc = 0x49132Cu;
            // 0x49132c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x491330u;
        goto label_491330;
    }
    ctx->pc = 0x491328u;
    SET_GPR_U32(ctx, 31, 0x491330u);
    ctx->pc = 0x49132Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491328u;
            // 0x49132c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491330u; }
        if (ctx->pc != 0x491330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491330u; }
        if (ctx->pc != 0x491330u) { return; }
    }
    ctx->pc = 0x491330u;
label_491330:
    // 0x491330: 0x10000048  b           . + 4 + (0x48 << 2)
label_491334:
    if (ctx->pc == 0x491334u) {
        ctx->pc = 0x491338u;
        goto label_491338;
    }
    ctx->pc = 0x491330u;
    {
        const bool branch_taken_0x491330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491330) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x491338u;
label_491338:
    // 0x491338: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x491338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_49133c:
    // 0x49133c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_491340:
    // 0x491340: 0xc04af96  jal         func_12BE58
label_491344:
    if (ctx->pc == 0x491344u) {
        ctx->pc = 0x491344u;
            // 0x491344: 0x24a50810  addiu       $a1, $a1, 0x810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2064));
        ctx->pc = 0x491348u;
        goto label_491348;
    }
    ctx->pc = 0x491340u;
    SET_GPR_U32(ctx, 31, 0x491348u);
    ctx->pc = 0x491344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491340u;
            // 0x491344: 0x24a50810  addiu       $a1, $a1, 0x810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491348u; }
        if (ctx->pc != 0x491348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491348u; }
        if (ctx->pc != 0x491348u) { return; }
    }
    ctx->pc = 0x491348u;
label_491348:
    // 0x491348: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_49134c:
    if (ctx->pc == 0x49134Cu) {
        ctx->pc = 0x49134Cu;
            // 0x49134c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x491350u;
        goto label_491350;
    }
    ctx->pc = 0x491348u;
    {
        const bool branch_taken_0x491348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491348) {
            ctx->pc = 0x49134Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491348u;
            // 0x49134c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491398u;
            goto label_491398;
        }
    }
    ctx->pc = 0x491350u;
label_491350:
    // 0x491350: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x491350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_491354:
    // 0x491354: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x491354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_491358:
    // 0x491358: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x491358u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
label_49135c:
    // 0x49135c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x49135cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_491360:
    // 0x491360: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x491360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_491364:
    // 0x491364: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x491364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_491368:
    // 0x491368: 0xafa30198  sw          $v1, 0x198($sp)
    ctx->pc = 0x491368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
label_49136c:
    // 0x49136c: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x49136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_491370:
    // 0x491370: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x491370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_491374:
    // 0x491374: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x491374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_491378:
    // 0x491378: 0x9083fff0  lbu         $v1, -0x10($a0)
    ctx->pc = 0x491378u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_49137c:
    // 0x49137c: 0xa3a30100  sb          $v1, 0x100($sp)
    ctx->pc = 0x49137cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 3));
label_491380:
    // 0x491380: 0xdc83fff8  ld          $v1, -0x8($a0)
    ctx->pc = 0x491380u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_491384:
    // 0x491384: 0xffa30108  sd          $v1, 0x108($sp)
    ctx->pc = 0x491384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 3));
label_491388:
    // 0x491388: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x491388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_49138c:
    // 0x49138c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_491390:
    // 0x491390: 0x10000030  b           . + 4 + (0x30 << 2)
label_491394:
    if (ctx->pc == 0x491394u) {
        ctx->pc = 0x491394u;
            // 0x491394: 0xaea3004c  sw          $v1, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x491398u;
        goto label_491398;
    }
    ctx->pc = 0x491390u;
    {
        const bool branch_taken_0x491390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491390u;
            // 0x491394: 0xaea3004c  sw          $v1, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491390) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x491398u;
label_491398:
    // 0x491398: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x491398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_49139c:
    // 0x49139c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49139cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4913a0:
    // 0x4913a0: 0xc04af96  jal         func_12BE58
label_4913a4:
    if (ctx->pc == 0x4913A4u) {
        ctx->pc = 0x4913A4u;
            // 0x4913a4: 0x24a50820  addiu       $a1, $a1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
        ctx->pc = 0x4913A8u;
        goto label_4913a8;
    }
    ctx->pc = 0x4913A0u;
    SET_GPR_U32(ctx, 31, 0x4913A8u);
    ctx->pc = 0x4913A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4913A0u;
            // 0x4913a4: 0x24a50820  addiu       $a1, $a1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4913A8u; }
        if (ctx->pc != 0x4913A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4913A8u; }
        if (ctx->pc != 0x4913A8u) { return; }
    }
    ctx->pc = 0x4913A8u;
label_4913a8:
    // 0x4913a8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_4913ac:
    if (ctx->pc == 0x4913ACu) {
        ctx->pc = 0x4913ACu;
            // 0x4913ac: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x4913B0u;
        goto label_4913b0;
    }
    ctx->pc = 0x4913A8u;
    {
        const bool branch_taken_0x4913a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4913a8) {
            ctx->pc = 0x4913ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4913A8u;
            // 0x4913ac: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4913F8u;
            goto label_4913f8;
        }
    }
    ctx->pc = 0x4913B0u;
label_4913b0:
    // 0x4913b0: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x4913b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_4913b4:
    // 0x4913b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4913b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4913b8:
    // 0x4913b8: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x4913b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
label_4913bc:
    // 0x4913bc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x4913bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4913c0:
    // 0x4913c0: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x4913c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_4913c4:
    // 0x4913c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4913c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4913c8:
    // 0x4913c8: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x4913c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
label_4913cc:
    // 0x4913cc: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x4913ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4913d0:
    // 0x4913d0: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x4913d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4913d4:
    // 0x4913d4: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x4913d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4913d8:
    // 0x4913d8: 0x9083fff0  lbu         $v1, -0x10($a0)
    ctx->pc = 0x4913d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_4913dc:
    // 0x4913dc: 0xa3a30100  sb          $v1, 0x100($sp)
    ctx->pc = 0x4913dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 3));
label_4913e0:
    // 0x4913e0: 0xdc83fff8  ld          $v1, -0x8($a0)
    ctx->pc = 0x4913e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_4913e4:
    // 0x4913e4: 0xffa30108  sd          $v1, 0x108($sp)
    ctx->pc = 0x4913e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 3));
label_4913e8:
    // 0x4913e8: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x4913e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_4913ec:
    // 0x4913ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4913ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4913f0:
    // 0x4913f0: 0x10000018  b           . + 4 + (0x18 << 2)
label_4913f4:
    if (ctx->pc == 0x4913F4u) {
        ctx->pc = 0x4913F4u;
            // 0x4913f4: 0xaea3004c  sw          $v1, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x4913F8u;
        goto label_4913f8;
    }
    ctx->pc = 0x4913F0u;
    {
        const bool branch_taken_0x4913f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4913F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4913F0u;
            // 0x4913f4: 0xaea3004c  sw          $v1, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4913f0) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x4913F8u;
label_4913f8:
    // 0x4913f8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4913f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4913fc:
    // 0x4913fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4913fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_491400:
    // 0x491400: 0xc04af96  jal         func_12BE58
label_491404:
    if (ctx->pc == 0x491404u) {
        ctx->pc = 0x491404u;
            // 0x491404: 0x24a50840  addiu       $a1, $a1, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2112));
        ctx->pc = 0x491408u;
        goto label_491408;
    }
    ctx->pc = 0x491400u;
    SET_GPR_U32(ctx, 31, 0x491408u);
    ctx->pc = 0x491404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491400u;
            // 0x491404: 0x24a50840  addiu       $a1, $a1, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491408u; }
        if (ctx->pc != 0x491408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491408u; }
        if (ctx->pc != 0x491408u) { return; }
    }
    ctx->pc = 0x491408u;
label_491408:
    // 0x491408: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_49140c:
    if (ctx->pc == 0x49140Cu) {
        ctx->pc = 0x491410u;
        goto label_491410;
    }
    ctx->pc = 0x491408u;
    {
        const bool branch_taken_0x491408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491408) {
            ctx->pc = 0x491454u;
            goto label_491454;
        }
    }
    ctx->pc = 0x491410u;
label_491410:
    // 0x491410: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x491410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_491414:
    // 0x491414: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x491414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_491418:
    // 0x491418: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x491418u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
label_49141c:
    // 0x49141c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x49141cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_491420:
    // 0x491420: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x491420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_491424:
    // 0x491424: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x491424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_491428:
    // 0x491428: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x491428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_49142c:
    // 0x49142c: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x49142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_491430:
    // 0x491430: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x491430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_491434:
    // 0x491434: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x491434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_491438:
    // 0x491438: 0x9083fff0  lbu         $v1, -0x10($a0)
    ctx->pc = 0x491438u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_49143c:
    // 0x49143c: 0xa3a30100  sb          $v1, 0x100($sp)
    ctx->pc = 0x49143cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 3));
label_491440:
    // 0x491440: 0xdc83fff8  ld          $v1, -0x8($a0)
    ctx->pc = 0x491440u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_491444:
    // 0x491444: 0xffa30108  sd          $v1, 0x108($sp)
    ctx->pc = 0x491444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 3));
label_491448:
    // 0x491448: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x491448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_49144c:
    // 0x49144c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49144cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_491450:
    // 0x491450: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x491450u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
label_491454:
    // 0x491454: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x491454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_491458:
    // 0x491458: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x491458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_49145c:
    // 0x49145c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x49145cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_491460:
    // 0x491460: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x491460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_491464:
    // 0x491464: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x491464u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_491468:
    // 0x491468: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x491468u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_49146c:
    // 0x49146c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x49146cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_491470:
    // 0x491470: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x491470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_491474:
    // 0x491474: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x491474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_491478:
    // 0x491478: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x491478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49147c:
    // 0x49147c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49147cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_491480:
    // 0x491480: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x491480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_491484:
    // 0x491484: 0x3e00008  jr          $ra
label_491488:
    if (ctx->pc == 0x491488u) {
        ctx->pc = 0x491488u;
            // 0x491488: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x49148Cu;
        goto label_49148c;
    }
    ctx->pc = 0x491484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491484u;
            // 0x491488: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49148Cu;
label_49148c:
    // 0x49148c: 0x0  nop
    ctx->pc = 0x49148cu;
    // NOP
}
