#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FFF60
// Address: 0x3fff60 - 0x4007e0
void sub_003FFF60_0x3fff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FFF60_0x3fff60");
#endif

    switch (ctx->pc) {
        case 0x3fff60u: goto label_3fff60;
        case 0x3fff64u: goto label_3fff64;
        case 0x3fff68u: goto label_3fff68;
        case 0x3fff6cu: goto label_3fff6c;
        case 0x3fff70u: goto label_3fff70;
        case 0x3fff74u: goto label_3fff74;
        case 0x3fff78u: goto label_3fff78;
        case 0x3fff7cu: goto label_3fff7c;
        case 0x3fff80u: goto label_3fff80;
        case 0x3fff84u: goto label_3fff84;
        case 0x3fff88u: goto label_3fff88;
        case 0x3fff8cu: goto label_3fff8c;
        case 0x3fff90u: goto label_3fff90;
        case 0x3fff94u: goto label_3fff94;
        case 0x3fff98u: goto label_3fff98;
        case 0x3fff9cu: goto label_3fff9c;
        case 0x3fffa0u: goto label_3fffa0;
        case 0x3fffa4u: goto label_3fffa4;
        case 0x3fffa8u: goto label_3fffa8;
        case 0x3fffacu: goto label_3fffac;
        case 0x3fffb0u: goto label_3fffb0;
        case 0x3fffb4u: goto label_3fffb4;
        case 0x3fffb8u: goto label_3fffb8;
        case 0x3fffbcu: goto label_3fffbc;
        case 0x3fffc0u: goto label_3fffc0;
        case 0x3fffc4u: goto label_3fffc4;
        case 0x3fffc8u: goto label_3fffc8;
        case 0x3fffccu: goto label_3fffcc;
        case 0x3fffd0u: goto label_3fffd0;
        case 0x3fffd4u: goto label_3fffd4;
        case 0x3fffd8u: goto label_3fffd8;
        case 0x3fffdcu: goto label_3fffdc;
        case 0x3fffe0u: goto label_3fffe0;
        case 0x3fffe4u: goto label_3fffe4;
        case 0x3fffe8u: goto label_3fffe8;
        case 0x3fffecu: goto label_3fffec;
        case 0x3ffff0u: goto label_3ffff0;
        case 0x3ffff4u: goto label_3ffff4;
        case 0x3ffff8u: goto label_3ffff8;
        case 0x3ffffcu: goto label_3ffffc;
        case 0x400000u: goto label_400000;
        case 0x400004u: goto label_400004;
        case 0x400008u: goto label_400008;
        case 0x40000cu: goto label_40000c;
        case 0x400010u: goto label_400010;
        case 0x400014u: goto label_400014;
        case 0x400018u: goto label_400018;
        case 0x40001cu: goto label_40001c;
        case 0x400020u: goto label_400020;
        case 0x400024u: goto label_400024;
        case 0x400028u: goto label_400028;
        case 0x40002cu: goto label_40002c;
        case 0x400030u: goto label_400030;
        case 0x400034u: goto label_400034;
        case 0x400038u: goto label_400038;
        case 0x40003cu: goto label_40003c;
        case 0x400040u: goto label_400040;
        case 0x400044u: goto label_400044;
        case 0x400048u: goto label_400048;
        case 0x40004cu: goto label_40004c;
        case 0x400050u: goto label_400050;
        case 0x400054u: goto label_400054;
        case 0x400058u: goto label_400058;
        case 0x40005cu: goto label_40005c;
        case 0x400060u: goto label_400060;
        case 0x400064u: goto label_400064;
        case 0x400068u: goto label_400068;
        case 0x40006cu: goto label_40006c;
        case 0x400070u: goto label_400070;
        case 0x400074u: goto label_400074;
        case 0x400078u: goto label_400078;
        case 0x40007cu: goto label_40007c;
        case 0x400080u: goto label_400080;
        case 0x400084u: goto label_400084;
        case 0x400088u: goto label_400088;
        case 0x40008cu: goto label_40008c;
        case 0x400090u: goto label_400090;
        case 0x400094u: goto label_400094;
        case 0x400098u: goto label_400098;
        case 0x40009cu: goto label_40009c;
        case 0x4000a0u: goto label_4000a0;
        case 0x4000a4u: goto label_4000a4;
        case 0x4000a8u: goto label_4000a8;
        case 0x4000acu: goto label_4000ac;
        case 0x4000b0u: goto label_4000b0;
        case 0x4000b4u: goto label_4000b4;
        case 0x4000b8u: goto label_4000b8;
        case 0x4000bcu: goto label_4000bc;
        case 0x4000c0u: goto label_4000c0;
        case 0x4000c4u: goto label_4000c4;
        case 0x4000c8u: goto label_4000c8;
        case 0x4000ccu: goto label_4000cc;
        case 0x4000d0u: goto label_4000d0;
        case 0x4000d4u: goto label_4000d4;
        case 0x4000d8u: goto label_4000d8;
        case 0x4000dcu: goto label_4000dc;
        case 0x4000e0u: goto label_4000e0;
        case 0x4000e4u: goto label_4000e4;
        case 0x4000e8u: goto label_4000e8;
        case 0x4000ecu: goto label_4000ec;
        case 0x4000f0u: goto label_4000f0;
        case 0x4000f4u: goto label_4000f4;
        case 0x4000f8u: goto label_4000f8;
        case 0x4000fcu: goto label_4000fc;
        case 0x400100u: goto label_400100;
        case 0x400104u: goto label_400104;
        case 0x400108u: goto label_400108;
        case 0x40010cu: goto label_40010c;
        case 0x400110u: goto label_400110;
        case 0x400114u: goto label_400114;
        case 0x400118u: goto label_400118;
        case 0x40011cu: goto label_40011c;
        case 0x400120u: goto label_400120;
        case 0x400124u: goto label_400124;
        case 0x400128u: goto label_400128;
        case 0x40012cu: goto label_40012c;
        case 0x400130u: goto label_400130;
        case 0x400134u: goto label_400134;
        case 0x400138u: goto label_400138;
        case 0x40013cu: goto label_40013c;
        case 0x400140u: goto label_400140;
        case 0x400144u: goto label_400144;
        case 0x400148u: goto label_400148;
        case 0x40014cu: goto label_40014c;
        case 0x400150u: goto label_400150;
        case 0x400154u: goto label_400154;
        case 0x400158u: goto label_400158;
        case 0x40015cu: goto label_40015c;
        case 0x400160u: goto label_400160;
        case 0x400164u: goto label_400164;
        case 0x400168u: goto label_400168;
        case 0x40016cu: goto label_40016c;
        case 0x400170u: goto label_400170;
        case 0x400174u: goto label_400174;
        case 0x400178u: goto label_400178;
        case 0x40017cu: goto label_40017c;
        case 0x400180u: goto label_400180;
        case 0x400184u: goto label_400184;
        case 0x400188u: goto label_400188;
        case 0x40018cu: goto label_40018c;
        case 0x400190u: goto label_400190;
        case 0x400194u: goto label_400194;
        case 0x400198u: goto label_400198;
        case 0x40019cu: goto label_40019c;
        case 0x4001a0u: goto label_4001a0;
        case 0x4001a4u: goto label_4001a4;
        case 0x4001a8u: goto label_4001a8;
        case 0x4001acu: goto label_4001ac;
        case 0x4001b0u: goto label_4001b0;
        case 0x4001b4u: goto label_4001b4;
        case 0x4001b8u: goto label_4001b8;
        case 0x4001bcu: goto label_4001bc;
        case 0x4001c0u: goto label_4001c0;
        case 0x4001c4u: goto label_4001c4;
        case 0x4001c8u: goto label_4001c8;
        case 0x4001ccu: goto label_4001cc;
        case 0x4001d0u: goto label_4001d0;
        case 0x4001d4u: goto label_4001d4;
        case 0x4001d8u: goto label_4001d8;
        case 0x4001dcu: goto label_4001dc;
        case 0x4001e0u: goto label_4001e0;
        case 0x4001e4u: goto label_4001e4;
        case 0x4001e8u: goto label_4001e8;
        case 0x4001ecu: goto label_4001ec;
        case 0x4001f0u: goto label_4001f0;
        case 0x4001f4u: goto label_4001f4;
        case 0x4001f8u: goto label_4001f8;
        case 0x4001fcu: goto label_4001fc;
        case 0x400200u: goto label_400200;
        case 0x400204u: goto label_400204;
        case 0x400208u: goto label_400208;
        case 0x40020cu: goto label_40020c;
        case 0x400210u: goto label_400210;
        case 0x400214u: goto label_400214;
        case 0x400218u: goto label_400218;
        case 0x40021cu: goto label_40021c;
        case 0x400220u: goto label_400220;
        case 0x400224u: goto label_400224;
        case 0x400228u: goto label_400228;
        case 0x40022cu: goto label_40022c;
        case 0x400230u: goto label_400230;
        case 0x400234u: goto label_400234;
        case 0x400238u: goto label_400238;
        case 0x40023cu: goto label_40023c;
        case 0x400240u: goto label_400240;
        case 0x400244u: goto label_400244;
        case 0x400248u: goto label_400248;
        case 0x40024cu: goto label_40024c;
        case 0x400250u: goto label_400250;
        case 0x400254u: goto label_400254;
        case 0x400258u: goto label_400258;
        case 0x40025cu: goto label_40025c;
        case 0x400260u: goto label_400260;
        case 0x400264u: goto label_400264;
        case 0x400268u: goto label_400268;
        case 0x40026cu: goto label_40026c;
        case 0x400270u: goto label_400270;
        case 0x400274u: goto label_400274;
        case 0x400278u: goto label_400278;
        case 0x40027cu: goto label_40027c;
        case 0x400280u: goto label_400280;
        case 0x400284u: goto label_400284;
        case 0x400288u: goto label_400288;
        case 0x40028cu: goto label_40028c;
        case 0x400290u: goto label_400290;
        case 0x400294u: goto label_400294;
        case 0x400298u: goto label_400298;
        case 0x40029cu: goto label_40029c;
        case 0x4002a0u: goto label_4002a0;
        case 0x4002a4u: goto label_4002a4;
        case 0x4002a8u: goto label_4002a8;
        case 0x4002acu: goto label_4002ac;
        case 0x4002b0u: goto label_4002b0;
        case 0x4002b4u: goto label_4002b4;
        case 0x4002b8u: goto label_4002b8;
        case 0x4002bcu: goto label_4002bc;
        case 0x4002c0u: goto label_4002c0;
        case 0x4002c4u: goto label_4002c4;
        case 0x4002c8u: goto label_4002c8;
        case 0x4002ccu: goto label_4002cc;
        case 0x4002d0u: goto label_4002d0;
        case 0x4002d4u: goto label_4002d4;
        case 0x4002d8u: goto label_4002d8;
        case 0x4002dcu: goto label_4002dc;
        case 0x4002e0u: goto label_4002e0;
        case 0x4002e4u: goto label_4002e4;
        case 0x4002e8u: goto label_4002e8;
        case 0x4002ecu: goto label_4002ec;
        case 0x4002f0u: goto label_4002f0;
        case 0x4002f4u: goto label_4002f4;
        case 0x4002f8u: goto label_4002f8;
        case 0x4002fcu: goto label_4002fc;
        case 0x400300u: goto label_400300;
        case 0x400304u: goto label_400304;
        case 0x400308u: goto label_400308;
        case 0x40030cu: goto label_40030c;
        case 0x400310u: goto label_400310;
        case 0x400314u: goto label_400314;
        case 0x400318u: goto label_400318;
        case 0x40031cu: goto label_40031c;
        case 0x400320u: goto label_400320;
        case 0x400324u: goto label_400324;
        case 0x400328u: goto label_400328;
        case 0x40032cu: goto label_40032c;
        case 0x400330u: goto label_400330;
        case 0x400334u: goto label_400334;
        case 0x400338u: goto label_400338;
        case 0x40033cu: goto label_40033c;
        case 0x400340u: goto label_400340;
        case 0x400344u: goto label_400344;
        case 0x400348u: goto label_400348;
        case 0x40034cu: goto label_40034c;
        case 0x400350u: goto label_400350;
        case 0x400354u: goto label_400354;
        case 0x400358u: goto label_400358;
        case 0x40035cu: goto label_40035c;
        case 0x400360u: goto label_400360;
        case 0x400364u: goto label_400364;
        case 0x400368u: goto label_400368;
        case 0x40036cu: goto label_40036c;
        case 0x400370u: goto label_400370;
        case 0x400374u: goto label_400374;
        case 0x400378u: goto label_400378;
        case 0x40037cu: goto label_40037c;
        case 0x400380u: goto label_400380;
        case 0x400384u: goto label_400384;
        case 0x400388u: goto label_400388;
        case 0x40038cu: goto label_40038c;
        case 0x400390u: goto label_400390;
        case 0x400394u: goto label_400394;
        case 0x400398u: goto label_400398;
        case 0x40039cu: goto label_40039c;
        case 0x4003a0u: goto label_4003a0;
        case 0x4003a4u: goto label_4003a4;
        case 0x4003a8u: goto label_4003a8;
        case 0x4003acu: goto label_4003ac;
        case 0x4003b0u: goto label_4003b0;
        case 0x4003b4u: goto label_4003b4;
        case 0x4003b8u: goto label_4003b8;
        case 0x4003bcu: goto label_4003bc;
        case 0x4003c0u: goto label_4003c0;
        case 0x4003c4u: goto label_4003c4;
        case 0x4003c8u: goto label_4003c8;
        case 0x4003ccu: goto label_4003cc;
        case 0x4003d0u: goto label_4003d0;
        case 0x4003d4u: goto label_4003d4;
        case 0x4003d8u: goto label_4003d8;
        case 0x4003dcu: goto label_4003dc;
        case 0x4003e0u: goto label_4003e0;
        case 0x4003e4u: goto label_4003e4;
        case 0x4003e8u: goto label_4003e8;
        case 0x4003ecu: goto label_4003ec;
        case 0x4003f0u: goto label_4003f0;
        case 0x4003f4u: goto label_4003f4;
        case 0x4003f8u: goto label_4003f8;
        case 0x4003fcu: goto label_4003fc;
        case 0x400400u: goto label_400400;
        case 0x400404u: goto label_400404;
        case 0x400408u: goto label_400408;
        case 0x40040cu: goto label_40040c;
        case 0x400410u: goto label_400410;
        case 0x400414u: goto label_400414;
        case 0x400418u: goto label_400418;
        case 0x40041cu: goto label_40041c;
        case 0x400420u: goto label_400420;
        case 0x400424u: goto label_400424;
        case 0x400428u: goto label_400428;
        case 0x40042cu: goto label_40042c;
        case 0x400430u: goto label_400430;
        case 0x400434u: goto label_400434;
        case 0x400438u: goto label_400438;
        case 0x40043cu: goto label_40043c;
        case 0x400440u: goto label_400440;
        case 0x400444u: goto label_400444;
        case 0x400448u: goto label_400448;
        case 0x40044cu: goto label_40044c;
        case 0x400450u: goto label_400450;
        case 0x400454u: goto label_400454;
        case 0x400458u: goto label_400458;
        case 0x40045cu: goto label_40045c;
        case 0x400460u: goto label_400460;
        case 0x400464u: goto label_400464;
        case 0x400468u: goto label_400468;
        case 0x40046cu: goto label_40046c;
        case 0x400470u: goto label_400470;
        case 0x400474u: goto label_400474;
        case 0x400478u: goto label_400478;
        case 0x40047cu: goto label_40047c;
        case 0x400480u: goto label_400480;
        case 0x400484u: goto label_400484;
        case 0x400488u: goto label_400488;
        case 0x40048cu: goto label_40048c;
        case 0x400490u: goto label_400490;
        case 0x400494u: goto label_400494;
        case 0x400498u: goto label_400498;
        case 0x40049cu: goto label_40049c;
        case 0x4004a0u: goto label_4004a0;
        case 0x4004a4u: goto label_4004a4;
        case 0x4004a8u: goto label_4004a8;
        case 0x4004acu: goto label_4004ac;
        case 0x4004b0u: goto label_4004b0;
        case 0x4004b4u: goto label_4004b4;
        case 0x4004b8u: goto label_4004b8;
        case 0x4004bcu: goto label_4004bc;
        case 0x4004c0u: goto label_4004c0;
        case 0x4004c4u: goto label_4004c4;
        case 0x4004c8u: goto label_4004c8;
        case 0x4004ccu: goto label_4004cc;
        case 0x4004d0u: goto label_4004d0;
        case 0x4004d4u: goto label_4004d4;
        case 0x4004d8u: goto label_4004d8;
        case 0x4004dcu: goto label_4004dc;
        case 0x4004e0u: goto label_4004e0;
        case 0x4004e4u: goto label_4004e4;
        case 0x4004e8u: goto label_4004e8;
        case 0x4004ecu: goto label_4004ec;
        case 0x4004f0u: goto label_4004f0;
        case 0x4004f4u: goto label_4004f4;
        case 0x4004f8u: goto label_4004f8;
        case 0x4004fcu: goto label_4004fc;
        case 0x400500u: goto label_400500;
        case 0x400504u: goto label_400504;
        case 0x400508u: goto label_400508;
        case 0x40050cu: goto label_40050c;
        case 0x400510u: goto label_400510;
        case 0x400514u: goto label_400514;
        case 0x400518u: goto label_400518;
        case 0x40051cu: goto label_40051c;
        case 0x400520u: goto label_400520;
        case 0x400524u: goto label_400524;
        case 0x400528u: goto label_400528;
        case 0x40052cu: goto label_40052c;
        case 0x400530u: goto label_400530;
        case 0x400534u: goto label_400534;
        case 0x400538u: goto label_400538;
        case 0x40053cu: goto label_40053c;
        case 0x400540u: goto label_400540;
        case 0x400544u: goto label_400544;
        case 0x400548u: goto label_400548;
        case 0x40054cu: goto label_40054c;
        case 0x400550u: goto label_400550;
        case 0x400554u: goto label_400554;
        case 0x400558u: goto label_400558;
        case 0x40055cu: goto label_40055c;
        case 0x400560u: goto label_400560;
        case 0x400564u: goto label_400564;
        case 0x400568u: goto label_400568;
        case 0x40056cu: goto label_40056c;
        case 0x400570u: goto label_400570;
        case 0x400574u: goto label_400574;
        case 0x400578u: goto label_400578;
        case 0x40057cu: goto label_40057c;
        case 0x400580u: goto label_400580;
        case 0x400584u: goto label_400584;
        case 0x400588u: goto label_400588;
        case 0x40058cu: goto label_40058c;
        case 0x400590u: goto label_400590;
        case 0x400594u: goto label_400594;
        case 0x400598u: goto label_400598;
        case 0x40059cu: goto label_40059c;
        case 0x4005a0u: goto label_4005a0;
        case 0x4005a4u: goto label_4005a4;
        case 0x4005a8u: goto label_4005a8;
        case 0x4005acu: goto label_4005ac;
        case 0x4005b0u: goto label_4005b0;
        case 0x4005b4u: goto label_4005b4;
        case 0x4005b8u: goto label_4005b8;
        case 0x4005bcu: goto label_4005bc;
        case 0x4005c0u: goto label_4005c0;
        case 0x4005c4u: goto label_4005c4;
        case 0x4005c8u: goto label_4005c8;
        case 0x4005ccu: goto label_4005cc;
        case 0x4005d0u: goto label_4005d0;
        case 0x4005d4u: goto label_4005d4;
        case 0x4005d8u: goto label_4005d8;
        case 0x4005dcu: goto label_4005dc;
        case 0x4005e0u: goto label_4005e0;
        case 0x4005e4u: goto label_4005e4;
        case 0x4005e8u: goto label_4005e8;
        case 0x4005ecu: goto label_4005ec;
        case 0x4005f0u: goto label_4005f0;
        case 0x4005f4u: goto label_4005f4;
        case 0x4005f8u: goto label_4005f8;
        case 0x4005fcu: goto label_4005fc;
        case 0x400600u: goto label_400600;
        case 0x400604u: goto label_400604;
        case 0x400608u: goto label_400608;
        case 0x40060cu: goto label_40060c;
        case 0x400610u: goto label_400610;
        case 0x400614u: goto label_400614;
        case 0x400618u: goto label_400618;
        case 0x40061cu: goto label_40061c;
        case 0x400620u: goto label_400620;
        case 0x400624u: goto label_400624;
        case 0x400628u: goto label_400628;
        case 0x40062cu: goto label_40062c;
        case 0x400630u: goto label_400630;
        case 0x400634u: goto label_400634;
        case 0x400638u: goto label_400638;
        case 0x40063cu: goto label_40063c;
        case 0x400640u: goto label_400640;
        case 0x400644u: goto label_400644;
        case 0x400648u: goto label_400648;
        case 0x40064cu: goto label_40064c;
        case 0x400650u: goto label_400650;
        case 0x400654u: goto label_400654;
        case 0x400658u: goto label_400658;
        case 0x40065cu: goto label_40065c;
        case 0x400660u: goto label_400660;
        case 0x400664u: goto label_400664;
        case 0x400668u: goto label_400668;
        case 0x40066cu: goto label_40066c;
        case 0x400670u: goto label_400670;
        case 0x400674u: goto label_400674;
        case 0x400678u: goto label_400678;
        case 0x40067cu: goto label_40067c;
        case 0x400680u: goto label_400680;
        case 0x400684u: goto label_400684;
        case 0x400688u: goto label_400688;
        case 0x40068cu: goto label_40068c;
        case 0x400690u: goto label_400690;
        case 0x400694u: goto label_400694;
        case 0x400698u: goto label_400698;
        case 0x40069cu: goto label_40069c;
        case 0x4006a0u: goto label_4006a0;
        case 0x4006a4u: goto label_4006a4;
        case 0x4006a8u: goto label_4006a8;
        case 0x4006acu: goto label_4006ac;
        case 0x4006b0u: goto label_4006b0;
        case 0x4006b4u: goto label_4006b4;
        case 0x4006b8u: goto label_4006b8;
        case 0x4006bcu: goto label_4006bc;
        case 0x4006c0u: goto label_4006c0;
        case 0x4006c4u: goto label_4006c4;
        case 0x4006c8u: goto label_4006c8;
        case 0x4006ccu: goto label_4006cc;
        case 0x4006d0u: goto label_4006d0;
        case 0x4006d4u: goto label_4006d4;
        case 0x4006d8u: goto label_4006d8;
        case 0x4006dcu: goto label_4006dc;
        case 0x4006e0u: goto label_4006e0;
        case 0x4006e4u: goto label_4006e4;
        case 0x4006e8u: goto label_4006e8;
        case 0x4006ecu: goto label_4006ec;
        case 0x4006f0u: goto label_4006f0;
        case 0x4006f4u: goto label_4006f4;
        case 0x4006f8u: goto label_4006f8;
        case 0x4006fcu: goto label_4006fc;
        case 0x400700u: goto label_400700;
        case 0x400704u: goto label_400704;
        case 0x400708u: goto label_400708;
        case 0x40070cu: goto label_40070c;
        case 0x400710u: goto label_400710;
        case 0x400714u: goto label_400714;
        case 0x400718u: goto label_400718;
        case 0x40071cu: goto label_40071c;
        case 0x400720u: goto label_400720;
        case 0x400724u: goto label_400724;
        case 0x400728u: goto label_400728;
        case 0x40072cu: goto label_40072c;
        case 0x400730u: goto label_400730;
        case 0x400734u: goto label_400734;
        case 0x400738u: goto label_400738;
        case 0x40073cu: goto label_40073c;
        case 0x400740u: goto label_400740;
        case 0x400744u: goto label_400744;
        case 0x400748u: goto label_400748;
        case 0x40074cu: goto label_40074c;
        case 0x400750u: goto label_400750;
        case 0x400754u: goto label_400754;
        case 0x400758u: goto label_400758;
        case 0x40075cu: goto label_40075c;
        case 0x400760u: goto label_400760;
        case 0x400764u: goto label_400764;
        case 0x400768u: goto label_400768;
        case 0x40076cu: goto label_40076c;
        case 0x400770u: goto label_400770;
        case 0x400774u: goto label_400774;
        case 0x400778u: goto label_400778;
        case 0x40077cu: goto label_40077c;
        case 0x400780u: goto label_400780;
        case 0x400784u: goto label_400784;
        case 0x400788u: goto label_400788;
        case 0x40078cu: goto label_40078c;
        case 0x400790u: goto label_400790;
        case 0x400794u: goto label_400794;
        case 0x400798u: goto label_400798;
        case 0x40079cu: goto label_40079c;
        case 0x4007a0u: goto label_4007a0;
        case 0x4007a4u: goto label_4007a4;
        case 0x4007a8u: goto label_4007a8;
        case 0x4007acu: goto label_4007ac;
        case 0x4007b0u: goto label_4007b0;
        case 0x4007b4u: goto label_4007b4;
        case 0x4007b8u: goto label_4007b8;
        case 0x4007bcu: goto label_4007bc;
        case 0x4007c0u: goto label_4007c0;
        case 0x4007c4u: goto label_4007c4;
        case 0x4007c8u: goto label_4007c8;
        case 0x4007ccu: goto label_4007cc;
        case 0x4007d0u: goto label_4007d0;
        case 0x4007d4u: goto label_4007d4;
        case 0x4007d8u: goto label_4007d8;
        case 0x4007dcu: goto label_4007dc;
        default: break;
    }

    ctx->pc = 0x3fff60u;

label_3fff60:
    // 0x3fff60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3fff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3fff64:
    // 0x3fff64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3fff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3fff68:
    // 0x3fff68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3fff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3fff6c:
    // 0x3fff6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3fff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3fff70:
    // 0x3fff70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fff74:
    // 0x3fff74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3fff74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fff78:
    // 0x3fff78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fff7c:
    // 0x3fff7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3fff7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fff80:
    // 0x3fff80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fff84:
    // 0x3fff84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fff84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fff88:
    // 0x3fff88: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
label_3fff8c:
    if (ctx->pc == 0x3FFF8Cu) {
        ctx->pc = 0x3FFF8Cu;
            // 0x3fff8c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FFF90u;
        goto label_3fff90;
    }
    ctx->pc = 0x3FFF88u;
    {
        const bool branch_taken_0x3fff88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFF88u;
            // 0x3fff8c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fff88) {
            ctx->pc = 0x3FFFF8u;
            goto label_3ffff8;
        }
    }
    ctx->pc = 0x3FFF90u;
label_3fff90:
    // 0x3fff90: 0xae2700b8  sw          $a3, 0xB8($s1)
    ctx->pc = 0x3fff90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 7));
label_3fff94:
    // 0x3fff94: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3fff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3fff98:
    // 0x3fff98: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x3fff98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_3fff9c:
    // 0x3fff9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3fff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3fffa0:
    // 0x3fffa0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3fffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3fffa4:
    // 0x3fffa4: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x3fffa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_3fffa8:
    // 0x3fffa8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3fffa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3fffac:
    // 0x3fffac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3fffacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3fffb0:
    // 0x3fffb0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3fffb4:
    if (ctx->pc == 0x3FFFB4u) {
        ctx->pc = 0x3FFFB8u;
        goto label_3fffb8;
    }
    ctx->pc = 0x3FFFB0u;
    {
        const bool branch_taken_0x3fffb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fffb0) {
            ctx->pc = 0x3FFFF8u;
            goto label_3ffff8;
        }
    }
    ctx->pc = 0x3FFFB8u;
label_3fffb8:
    // 0x3fffb8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3fffb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_3fffbc:
    // 0x3fffbc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3fffbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3fffc0:
    // 0x3fffc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3fffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fffc4:
    // 0x3fffc4: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x3fffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3fffc8:
    // 0x3fffc8: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x3fffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
label_3fffcc:
    // 0x3fffcc: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x3fffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_3fffd0:
    // 0x3fffd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3fffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fffd4:
    // 0x3fffd4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3fffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3fffd8:
    // 0x3fffd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3fffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3fffdc:
    // 0x3fffdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fffe0:
    // 0x3fffe0: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x3fffe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_3fffe4:
    // 0x3fffe4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3fffe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3fffe8:
    // 0x3fffe8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3fffe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3fffec:
    // 0x3fffec: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_3ffff0:
    if (ctx->pc == 0x3FFFF0u) {
        ctx->pc = 0x3FFFF0u;
            // 0x3ffff0: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->pc = 0x3FFFF4u;
        goto label_3ffff4;
    }
    ctx->pc = 0x3FFFECu;
    {
        const bool branch_taken_0x3fffec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fffec) {
            ctx->pc = 0x3FFFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFFECu;
            // 0x3ffff0: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FFFBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fffbc;
        }
    }
    ctx->pc = 0x3FFFF4u;
label_3ffff4:
    // 0x3ffff4: 0x0  nop
    ctx->pc = 0x3ffff4u;
    // NOP
label_3ffff8:
    // 0x3ffff8: 0x1100001b  beqz        $t0, . + 4 + (0x1B << 2)
label_3ffffc:
    if (ctx->pc == 0x3FFFFCu) {
        ctx->pc = 0x400000u;
        goto label_400000;
    }
    ctx->pc = 0x3FFFF8u;
    {
        const bool branch_taken_0x3ffff8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffff8) {
            ctx->pc = 0x400068u;
            goto label_400068;
        }
    }
    ctx->pc = 0x400000u;
label_400000:
    // 0x400000: 0xae2800bc  sw          $t0, 0xBC($s1)
    ctx->pc = 0x400000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 8));
label_400004:
    // 0x400004: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x400004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_400008:
    // 0x400008: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x400008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_40000c:
    // 0x40000c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40000cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_400010:
    // 0x400010: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x400010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_400014:
    // 0x400014: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x400014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_400018:
    // 0x400018: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x400018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_40001c:
    // 0x40001c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x40001cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_400020:
    // 0x400020: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_400024:
    if (ctx->pc == 0x400024u) {
        ctx->pc = 0x400028u;
        goto label_400028;
    }
    ctx->pc = 0x400020u;
    {
        const bool branch_taken_0x400020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x400020) {
            ctx->pc = 0x400068u;
            goto label_400068;
        }
    }
    ctx->pc = 0x400028u;
label_400028:
    // 0x400028: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x400028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_40002c:
    // 0x40002c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x40002cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_400030:
    // 0x400030: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x400030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_400034:
    // 0x400034: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x400034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_400038:
    // 0x400038: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x400038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
label_40003c:
    // 0x40003c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x40003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_400040:
    // 0x400040: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x400040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_400044:
    // 0x400044: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x400044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_400048:
    // 0x400048: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x400048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_40004c:
    // 0x40004c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_400050:
    // 0x400050: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x400050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_400054:
    // 0x400054: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x400054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_400058:
    // 0x400058: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x400058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_40005c:
    // 0x40005c: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_400060:
    if (ctx->pc == 0x400060u) {
        ctx->pc = 0x400060u;
            // 0x400060: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->pc = 0x400064u;
        goto label_400064;
    }
    ctx->pc = 0x40005Cu;
    {
        const bool branch_taken_0x40005c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40005c) {
            ctx->pc = 0x400060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40005Cu;
            // 0x400060: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40002Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40002c;
        }
    }
    ctx->pc = 0x400064u;
label_400064:
    // 0x400064: 0x0  nop
    ctx->pc = 0x400064u;
    // NOP
label_400068:
    // 0x400068: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x400068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_40006c:
    // 0x40006c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40006cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_400070:
    // 0x400070: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x400070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_400074:
    // 0x400074: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x400074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_400078:
    // 0x400078: 0xc04cbd8  jal         func_132F60
label_40007c:
    if (ctx->pc == 0x40007Cu) {
        ctx->pc = 0x40007Cu;
            // 0x40007c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x400080u;
        goto label_400080;
    }
    ctx->pc = 0x400078u;
    SET_GPR_U32(ctx, 31, 0x400080u);
    ctx->pc = 0x40007Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400078u;
            // 0x40007c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400080u; }
        if (ctx->pc != 0x400080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400080u; }
        if (ctx->pc != 0x400080u) { return; }
    }
    ctx->pc = 0x400080u;
label_400080:
    // 0x400080: 0x10a080  sll         $s4, $s0, 2
    ctx->pc = 0x400080u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_400084:
    // 0x400084: 0xc040138  jal         func_1004E0
label_400088:
    if (ctx->pc == 0x400088u) {
        ctx->pc = 0x400088u;
            // 0x400088: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40008Cu;
        goto label_40008c;
    }
    ctx->pc = 0x400084u;
    SET_GPR_U32(ctx, 31, 0x40008Cu);
    ctx->pc = 0x400088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400084u;
            // 0x400088: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40008Cu; }
        if (ctx->pc != 0x40008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40008Cu; }
        if (ctx->pc != 0x40008Cu) { return; }
    }
    ctx->pc = 0x40008Cu;
label_40008c:
    // 0x40008c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x40008cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_400090:
    // 0x400090: 0xc040138  jal         func_1004E0
label_400094:
    if (ctx->pc == 0x400094u) {
        ctx->pc = 0x400094u;
            // 0x400094: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x400098u;
        goto label_400098;
    }
    ctx->pc = 0x400090u;
    SET_GPR_U32(ctx, 31, 0x400098u);
    ctx->pc = 0x400094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400090u;
            // 0x400094: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400098u; }
        if (ctx->pc != 0x400098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400098u; }
        if (ctx->pc != 0x400098u) { return; }
    }
    ctx->pc = 0x400098u;
label_400098:
    // 0x400098: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x400098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_40009c:
    // 0x40009c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40009cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4000a0:
    // 0x4000a0: 0xae3000c8  sw          $s0, 0xC8($s1)
    ctx->pc = 0x4000a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 16));
label_4000a4:
    // 0x4000a4: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x4000a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_4000a8:
    // 0x4000a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4000a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4000ac:
    // 0x4000ac: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4000acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4000b0:
    // 0x4000b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4000b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4000b4:
    // 0x4000b4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4000b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_4000b8:
    // 0x4000b8: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x4000b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_4000bc:
    // 0x4000bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4000bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4000c0:
    // 0x4000c0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4000c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_4000c4:
    // 0x4000c4: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_4000c8:
    if (ctx->pc == 0x4000C8u) {
        ctx->pc = 0x4000C8u;
            // 0x4000c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4000CCu;
        goto label_4000cc;
    }
    ctx->pc = 0x4000C4u;
    {
        const bool branch_taken_0x4000c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4000C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4000C4u;
            // 0x4000c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4000c4) {
            ctx->pc = 0x4000A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4000a4;
        }
    }
    ctx->pc = 0x4000CCu;
label_4000cc:
    // 0x4000cc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4000ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4000d0:
    // 0x4000d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4000d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4000d4:
    // 0x4000d4: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x4000d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_4000d8:
    // 0x4000d8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4000d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4000dc:
    // 0x4000dc: 0xacc50018  sw          $a1, 0x18($a2)
    ctx->pc = 0x4000dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 5));
label_4000e0:
    // 0x4000e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4000e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4000e4:
    // 0x4000e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4000e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4000e8:
    // 0x4000e8: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x4000e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
label_4000ec:
    // 0x4000ec: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x4000ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4000f0:
    // 0x4000f0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4000f4:
    if (ctx->pc == 0x4000F4u) {
        ctx->pc = 0x4000F8u;
        goto label_4000f8;
    }
    ctx->pc = 0x4000F0u;
    {
        const bool branch_taken_0x4000f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4000f0) {
            ctx->pc = 0x4000DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4000dc;
        }
    }
    ctx->pc = 0x4000F8u;
label_4000f8:
    // 0x4000f8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4000f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4000fc:
    // 0x4000fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4000fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_400100:
    // 0x400100: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x400100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_400104:
    // 0x400104: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
label_400108:
    if (ctx->pc == 0x400108u) {
        ctx->pc = 0x40010Cu;
        goto label_40010c;
    }
    ctx->pc = 0x400104u;
    {
        const bool branch_taken_0x400104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x400104) {
            ctx->pc = 0x4001C0u;
            goto label_4001c0;
        }
    }
    ctx->pc = 0x40010Cu;
label_40010c:
    // 0x40010c: 0x8cb20014  lw          $s2, 0x14($a1)
    ctx->pc = 0x40010cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_400110:
    // 0x400110: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x400110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_400114:
    // 0x400114: 0xc040138  jal         func_1004E0
label_400118:
    if (ctx->pc == 0x400118u) {
        ctx->pc = 0x400118u;
            // 0x400118: 0xae3200e4  sw          $s2, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 18));
        ctx->pc = 0x40011Cu;
        goto label_40011c;
    }
    ctx->pc = 0x400114u;
    SET_GPR_U32(ctx, 31, 0x40011Cu);
    ctx->pc = 0x400118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400114u;
            // 0x400118: 0xae3200e4  sw          $s2, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40011Cu; }
        if (ctx->pc != 0x40011Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40011Cu; }
        if (ctx->pc != 0x40011Cu) { return; }
    }
    ctx->pc = 0x40011Cu;
label_40011c:
    // 0x40011c: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x40011cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_400120:
    // 0x400120: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x400120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_400124:
    // 0x400124: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x400124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_400128:
    // 0x400128: 0x50830016  beql        $a0, $v1, . + 4 + (0x16 << 2)
label_40012c:
    if (ctx->pc == 0x40012Cu) {
        ctx->pc = 0x40012Cu;
            // 0x40012c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x400130u;
        goto label_400130;
    }
    ctx->pc = 0x400128u;
    {
        const bool branch_taken_0x400128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x400128) {
            ctx->pc = 0x40012Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x400128u;
            // 0x40012c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x400184u;
            goto label_400184;
        }
    }
    ctx->pc = 0x400130u;
label_400130:
    // 0x400130: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x400130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_400134:
    // 0x400134: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_400138:
    if (ctx->pc == 0x400138u) {
        ctx->pc = 0x400138u;
            // 0x400138: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40013Cu;
        goto label_40013c;
    }
    ctx->pc = 0x400134u;
    {
        const bool branch_taken_0x400134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x400134) {
            ctx->pc = 0x400138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x400134u;
            // 0x400138: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x400144u;
            goto label_400144;
        }
    }
    ctx->pc = 0x40013Cu;
label_40013c:
    // 0x40013c: 0x10000020  b           . + 4 + (0x20 << 2)
label_400140:
    if (ctx->pc == 0x400140u) {
        ctx->pc = 0x400144u;
        goto label_400144;
    }
    ctx->pc = 0x40013Cu;
    {
        const bool branch_taken_0x40013c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40013c) {
            ctx->pc = 0x4001C0u;
            goto label_4001c0;
        }
    }
    ctx->pc = 0x400144u;
label_400144:
    // 0x400144: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x400144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_400148:
    // 0x400148: 0xc040138  jal         func_1004E0
label_40014c:
    if (ctx->pc == 0x40014Cu) {
        ctx->pc = 0x40014Cu;
            // 0x40014c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x400150u;
        goto label_400150;
    }
    ctx->pc = 0x400148u;
    SET_GPR_U32(ctx, 31, 0x400150u);
    ctx->pc = 0x40014Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400148u;
            // 0x40014c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400150u; }
        if (ctx->pc != 0x400150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400150u; }
        if (ctx->pc != 0x400150u) { return; }
    }
    ctx->pc = 0x400150u;
label_400150:
    // 0x400150: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x400150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_400154:
    // 0x400154: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x400154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_400158:
    // 0x400158: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x400158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_40015c:
    // 0x40015c: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x40015cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_400160:
    // 0x400160: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x400160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_400164:
    // 0x400164: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x400164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_400168:
    // 0x400168: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x400168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_40016c:
    // 0x40016c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x40016cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_400170:
    // 0x400170: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x400170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_400174:
    // 0x400174: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_400178:
    if (ctx->pc == 0x400178u) {
        ctx->pc = 0x400178u;
            // 0x400178: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x40017Cu;
        goto label_40017c;
    }
    ctx->pc = 0x400174u;
    {
        const bool branch_taken_0x400174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x400178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400174u;
            // 0x400178: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400174) {
            ctx->pc = 0x400148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_400148;
        }
    }
    ctx->pc = 0x40017Cu;
label_40017c:
    // 0x40017c: 0x10000010  b           . + 4 + (0x10 << 2)
label_400180:
    if (ctx->pc == 0x400180u) {
        ctx->pc = 0x400184u;
        goto label_400184;
    }
    ctx->pc = 0x40017Cu;
    {
        const bool branch_taken_0x40017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40017c) {
            ctx->pc = 0x4001C0u;
            goto label_4001c0;
        }
    }
    ctx->pc = 0x400184u;
label_400184:
    // 0x400184: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x400184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_400188:
    // 0x400188: 0xc040138  jal         func_1004E0
label_40018c:
    if (ctx->pc == 0x40018Cu) {
        ctx->pc = 0x40018Cu;
            // 0x40018c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x400190u;
        goto label_400190;
    }
    ctx->pc = 0x400188u;
    SET_GPR_U32(ctx, 31, 0x400190u);
    ctx->pc = 0x40018Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400188u;
            // 0x40018c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400190u; }
        if (ctx->pc != 0x400190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400190u; }
        if (ctx->pc != 0x400190u) { return; }
    }
    ctx->pc = 0x400190u;
label_400190:
    // 0x400190: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x400190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_400194:
    // 0x400194: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x400194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_400198:
    // 0x400198: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x400198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_40019c:
    // 0x40019c: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x40019cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4001a0:
    // 0x4001a0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x4001a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_4001a4:
    // 0x4001a4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4001a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4001a8:
    // 0x4001a8: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x4001a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_4001ac:
    // 0x4001ac: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x4001acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_4001b0:
    // 0x4001b0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4001b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4001b4:
    // 0x4001b4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_4001b8:
    if (ctx->pc == 0x4001B8u) {
        ctx->pc = 0x4001B8u;
            // 0x4001b8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x4001BCu;
        goto label_4001bc;
    }
    ctx->pc = 0x4001B4u;
    {
        const bool branch_taken_0x4001b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4001B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4001B4u;
            // 0x4001b8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4001b4) {
            ctx->pc = 0x400188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_400188;
        }
    }
    ctx->pc = 0x4001BCu;
label_4001bc:
    // 0x4001bc: 0x0  nop
    ctx->pc = 0x4001bcu;
    // NOP
label_4001c0:
    // 0x4001c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4001c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4001c4:
    // 0x4001c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4001c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4001c8:
    // 0x4001c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4001c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4001cc:
    // 0x4001cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4001ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4001d0:
    // 0x4001d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4001d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4001d4:
    // 0x4001d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4001d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4001d8:
    // 0x4001d8: 0x3e00008  jr          $ra
label_4001dc:
    if (ctx->pc == 0x4001DCu) {
        ctx->pc = 0x4001DCu;
            // 0x4001dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4001E0u;
        goto label_4001e0;
    }
    ctx->pc = 0x4001D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4001DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4001D8u;
            // 0x4001dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4001E0u;
label_4001e0:
    // 0x4001e0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4001e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4001e4:
    // 0x4001e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4001e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4001e8:
    // 0x4001e8: 0x8cc40060  lw          $a0, 0x60($a2)
    ctx->pc = 0x4001e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
label_4001ec:
    // 0x4001ec: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_4001f0:
    if (ctx->pc == 0x4001F0u) {
        ctx->pc = 0x4001F4u;
        goto label_4001f4;
    }
    ctx->pc = 0x4001ECu;
    {
        const bool branch_taken_0x4001ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4001ec) {
            ctx->pc = 0x40022Cu;
            goto label_40022c;
        }
    }
    ctx->pc = 0x4001F4u;
label_4001f4:
    // 0x4001f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4001f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4001f8:
    // 0x4001f8: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_4001fc:
    if (ctx->pc == 0x4001FCu) {
        ctx->pc = 0x4001FCu;
            // 0x4001fc: 0x8cc300b0  lw          $v1, 0xB0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
        ctx->pc = 0x400200u;
        goto label_400200;
    }
    ctx->pc = 0x4001F8u;
    {
        const bool branch_taken_0x4001f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4001f8) {
            ctx->pc = 0x4001FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4001F8u;
            // 0x4001fc: 0x8cc300b0  lw          $v1, 0xB0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x400214u;
            goto label_400214;
        }
    }
    ctx->pc = 0x400200u;
label_400200:
    // 0x400200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x400200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_400204:
    // 0x400204: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_400208:
    if (ctx->pc == 0x400208u) {
        ctx->pc = 0x40020Cu;
        goto label_40020c;
    }
    ctx->pc = 0x400204u;
    {
        const bool branch_taken_0x400204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x400204) {
            ctx->pc = 0x40022Cu;
            goto label_40022c;
        }
    }
    ctx->pc = 0x40020Cu;
label_40020c:
    // 0x40020c: 0x10000007  b           . + 4 + (0x7 << 2)
label_400210:
    if (ctx->pc == 0x400210u) {
        ctx->pc = 0x400214u;
        goto label_400214;
    }
    ctx->pc = 0x40020Cu;
    {
        const bool branch_taken_0x40020c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40020c) {
            ctx->pc = 0x40022Cu;
            goto label_40022c;
        }
    }
    ctx->pc = 0x400214u;
label_400214:
    // 0x400214: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_400218:
    if (ctx->pc == 0x400218u) {
        ctx->pc = 0x40021Cu;
        goto label_40021c;
    }
    ctx->pc = 0x400214u;
    {
        const bool branch_taken_0x400214 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x400214) {
            ctx->pc = 0x40022Cu;
            goto label_40022c;
        }
    }
    ctx->pc = 0x40021Cu;
label_40021c:
    // 0x40021c: 0x8cc300dc  lw          $v1, 0xDC($a2)
    ctx->pc = 0x40021cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
label_400220:
    // 0x400220: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_400224:
    if (ctx->pc == 0x400224u) {
        ctx->pc = 0x400228u;
        goto label_400228;
    }
    ctx->pc = 0x400220u;
    {
        const bool branch_taken_0x400220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x400220) {
            ctx->pc = 0x40022Cu;
            goto label_40022c;
        }
    }
    ctx->pc = 0x400228u;
label_400228:
    // 0x400228: 0xacc000dc  sw          $zero, 0xDC($a2)
    ctx->pc = 0x400228u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 0));
label_40022c:
    // 0x40022c: 0x3e00008  jr          $ra
label_400230:
    if (ctx->pc == 0x400230u) {
        ctx->pc = 0x400234u;
        goto label_400234;
    }
    ctx->pc = 0x40022Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x400234u;
label_400234:
    // 0x400234: 0x0  nop
    ctx->pc = 0x400234u;
    // NOP
label_400238:
    // 0x400238: 0x0  nop
    ctx->pc = 0x400238u;
    // NOP
label_40023c:
    // 0x40023c: 0x0  nop
    ctx->pc = 0x40023cu;
    // NOP
label_400240:
    // 0x400240: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x400240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_400244:
    // 0x400244: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x400244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_400248:
    // 0x400248: 0x8cc40060  lw          $a0, 0x60($a2)
    ctx->pc = 0x400248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
label_40024c:
    // 0x40024c: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_400250:
    if (ctx->pc == 0x400250u) {
        ctx->pc = 0x400254u;
        goto label_400254;
    }
    ctx->pc = 0x40024Cu;
    {
        const bool branch_taken_0x40024c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x40024c) {
            ctx->pc = 0x400284u;
            goto label_400284;
        }
    }
    ctx->pc = 0x400254u;
label_400254:
    // 0x400254: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x400254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_400258:
    // 0x400258: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_40025c:
    if (ctx->pc == 0x40025Cu) {
        ctx->pc = 0x40025Cu;
            // 0x40025c: 0x8cc300b0  lw          $v1, 0xB0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
        ctx->pc = 0x400260u;
        goto label_400260;
    }
    ctx->pc = 0x400258u;
    {
        const bool branch_taken_0x400258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x400258) {
            ctx->pc = 0x40025Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x400258u;
            // 0x40025c: 0x8cc300b0  lw          $v1, 0xB0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x400274u;
            goto label_400274;
        }
    }
    ctx->pc = 0x400260u;
label_400260:
    // 0x400260: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x400260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_400264:
    // 0x400264: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_400268:
    if (ctx->pc == 0x400268u) {
        ctx->pc = 0x40026Cu;
        goto label_40026c;
    }
    ctx->pc = 0x400264u;
    {
        const bool branch_taken_0x400264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x400264) {
            ctx->pc = 0x400284u;
            goto label_400284;
        }
    }
    ctx->pc = 0x40026Cu;
label_40026c:
    // 0x40026c: 0x10000005  b           . + 4 + (0x5 << 2)
label_400270:
    if (ctx->pc == 0x400270u) {
        ctx->pc = 0x400274u;
        goto label_400274;
    }
    ctx->pc = 0x40026Cu;
    {
        const bool branch_taken_0x40026c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40026c) {
            ctx->pc = 0x400284u;
            goto label_400284;
        }
    }
    ctx->pc = 0x400274u;
label_400274:
    // 0x400274: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_400278:
    if (ctx->pc == 0x400278u) {
        ctx->pc = 0x40027Cu;
        goto label_40027c;
    }
    ctx->pc = 0x400274u;
    {
        const bool branch_taken_0x400274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x400274) {
            ctx->pc = 0x400284u;
            goto label_400284;
        }
    }
    ctx->pc = 0x40027Cu;
label_40027c:
    // 0x40027c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40027cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_400280:
    // 0x400280: 0xacc300dc  sw          $v1, 0xDC($a2)
    ctx->pc = 0x400280u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 3));
label_400284:
    // 0x400284: 0x3e00008  jr          $ra
label_400288:
    if (ctx->pc == 0x400288u) {
        ctx->pc = 0x40028Cu;
        goto label_40028c;
    }
    ctx->pc = 0x400284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40028Cu;
label_40028c:
    // 0x40028c: 0x0  nop
    ctx->pc = 0x40028cu;
    // NOP
label_400290:
    // 0x400290: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x400290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_400294:
    // 0x400294: 0x80fff90  j           func_3FFE40
label_400298:
    if (ctx->pc == 0x400298u) {
        ctx->pc = 0x400298u;
            // 0x400298: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x40029Cu;
        goto label_40029c;
    }
    ctx->pc = 0x400294u;
    ctx->pc = 0x400298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400294u;
            // 0x400298: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FFE40u;
    {
        auto targetFn = runtime->lookupFunction(0x3FFE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x40029Cu;
label_40029c:
    // 0x40029c: 0x0  nop
    ctx->pc = 0x40029cu;
    // NOP
label_4002a0:
    // 0x4002a0: 0x3e00008  jr          $ra
label_4002a4:
    if (ctx->pc == 0x4002A4u) {
        ctx->pc = 0x4002A4u;
            // 0x4002a4: 0x24022bca  addiu       $v0, $zero, 0x2BCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11210));
        ctx->pc = 0x4002A8u;
        goto label_4002a8;
    }
    ctx->pc = 0x4002A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4002A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4002A0u;
            // 0x4002a4: 0x24022bca  addiu       $v0, $zero, 0x2BCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11210));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4002A8u;
label_4002a8:
    // 0x4002a8: 0x0  nop
    ctx->pc = 0x4002a8u;
    // NOP
label_4002ac:
    // 0x4002ac: 0x0  nop
    ctx->pc = 0x4002acu;
    // NOP
label_4002b0:
    // 0x4002b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4002b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4002b4:
    // 0x4002b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4002b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4002b8:
    // 0x4002b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4002b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4002bc:
    // 0x4002bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4002bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4002c0:
    // 0x4002c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4002c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4002c4:
    // 0x4002c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4002c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4002c8:
    // 0x4002c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4002c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4002cc:
    // 0x4002cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4002ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4002d0:
    // 0x4002d0: 0x122000c4  beqz        $s1, . + 4 + (0xC4 << 2)
label_4002d4:
    if (ctx->pc == 0x4002D4u) {
        ctx->pc = 0x4002D4u;
            // 0x4002d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4002D8u;
        goto label_4002d8;
    }
    ctx->pc = 0x4002D0u;
    {
        const bool branch_taken_0x4002d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4002D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4002D0u;
            // 0x4002d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4002d0) {
            ctx->pc = 0x4005E4u;
            goto label_4005e4;
        }
    }
    ctx->pc = 0x4002D8u;
label_4002d8:
    // 0x4002d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4002d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4002dc:
    // 0x4002dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4002dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4002e0:
    // 0x4002e0: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x4002e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
label_4002e4:
    // 0x4002e4: 0x2442a4f8  addiu       $v0, $v0, -0x5B08
    ctx->pc = 0x4002e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943992));
label_4002e8:
    // 0x4002e8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4002e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4002ec:
    // 0x4002ec: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4002ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4002f0:
    // 0x4002f0: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x4002f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_4002f4:
    // 0x4002f4: 0x8e3400b0  lw          $s4, 0xB0($s1)
    ctx->pc = 0x4002f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4002f8:
    // 0x4002f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4002f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4002fc:
    // 0x4002fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4002fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_400300:
    // 0x400300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x400300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_400304:
    // 0x400304: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x400304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_400308:
    // 0x400308: 0x2821026  xor         $v0, $s4, $v0
    ctx->pc = 0x400308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
label_40030c:
    // 0x40030c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x40030cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_400310:
    // 0x400310: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x400310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_400314:
    // 0x400314: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_400318:
    if (ctx->pc == 0x400318u) {
        ctx->pc = 0x40031Cu;
        goto label_40031c;
    }
    ctx->pc = 0x400314u;
    {
        const bool branch_taken_0x400314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x400314) {
            ctx->pc = 0x4003D8u;
            goto label_4003d8;
        }
    }
    ctx->pc = 0x40031Cu;
label_40031c:
    // 0x40031c: 0x14983c  dsll32      $s3, $s4, 0
    ctx->pc = 0x40031cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) << (32 + 0));
label_400320:
    // 0x400320: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x400320u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
label_400324:
    // 0x400324: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x400324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_400328:
    // 0x400328: 0x8e720008  lw          $s2, 0x8($s3)
    ctx->pc = 0x400328u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_40032c:
    // 0x40032c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40032cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_400330:
    // 0x400330: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x400330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_400334:
    // 0x400334: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x400334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_400338:
    // 0x400338: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x400338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_40033c:
    // 0x40033c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x40033cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_400340:
    // 0x400340: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_400344:
    if (ctx->pc == 0x400344u) {
        ctx->pc = 0x400348u;
        goto label_400348;
    }
    ctx->pc = 0x400340u;
    {
        const bool branch_taken_0x400340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x400340) {
            ctx->pc = 0x4003A0u;
            goto label_4003a0;
        }
    }
    ctx->pc = 0x400348u;
label_400348:
    // 0x400348: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x400348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40034c:
    // 0x40034c: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x40034cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_400350:
    // 0x400350: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x400350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_400354:
    // 0x400354: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x400354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_400358:
    // 0x400358: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x400358u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_40035c:
    // 0x40035c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x40035cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_400360:
    // 0x400360: 0xc08c3f4  jal         func_230FD0
label_400364:
    if (ctx->pc == 0x400364u) {
        ctx->pc = 0x400364u;
            // 0x400364: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->pc = 0x400368u;
        goto label_400368;
    }
    ctx->pc = 0x400360u;
    SET_GPR_U32(ctx, 31, 0x400368u);
    ctx->pc = 0x400364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400360u;
            // 0x400364: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230FD0u;
    if (runtime->hasFunction(0x230FD0u)) {
        auto targetFn = runtime->lookupFunction(0x230FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400368u; }
        if (ctx->pc != 0x400368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230FD0_0x230fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400368u; }
        if (ctx->pc != 0x400368u) { return; }
    }
    ctx->pc = 0x400368u;
label_400368:
    // 0x400368: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x400368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_40036c:
    // 0x40036c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x40036cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_400370:
    // 0x400370: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x400370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_400374:
    // 0x400374: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x400374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_400378:
    // 0x400378: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x400378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_40037c:
    // 0x40037c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x40037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_400380:
    // 0x400380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x400380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_400384:
    // 0x400384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x400384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_400388:
    // 0x400388: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x400388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_40038c:
    // 0x40038c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x40038cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_400390:
    // 0x400390: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x400390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_400394:
    // 0x400394: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_400398:
    if (ctx->pc == 0x400398u) {
        ctx->pc = 0x40039Cu;
        goto label_40039c;
    }
    ctx->pc = 0x400394u;
    {
        const bool branch_taken_0x400394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400394) {
            ctx->pc = 0x400348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_400348;
        }
    }
    ctx->pc = 0x40039Cu;
label_40039c:
    // 0x40039c: 0x0  nop
    ctx->pc = 0x40039cu;
    // NOP
label_4003a0:
    // 0x4003a0: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x4003a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_4003a4:
    // 0x4003a4: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x4003a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_4003a8:
    // 0x4003a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4003a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4003ac:
    // 0x4003ac: 0x2454000c  addiu       $s4, $v0, 0xC
    ctx->pc = 0x4003acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_4003b0:
    // 0x4003b0: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x4003b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4003b4:
    // 0x4003b4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4003b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4003b8:
    // 0x4003b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4003b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4003bc:
    // 0x4003bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4003bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4003c0:
    // 0x4003c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4003c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4003c4:
    // 0x4003c4: 0x2821026  xor         $v0, $s4, $v0
    ctx->pc = 0x4003c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
label_4003c8:
    // 0x4003c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4003c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4003cc:
    // 0x4003cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4003ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4003d0:
    // 0x4003d0: 0x5440ffd3  bnel        $v0, $zero, . + 4 + (-0x2D << 2)
label_4003d4:
    if (ctx->pc == 0x4003D4u) {
        ctx->pc = 0x4003D4u;
            // 0x4003d4: 0x14983c  dsll32      $s3, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) << (32 + 0));
        ctx->pc = 0x4003D8u;
        goto label_4003d8;
    }
    ctx->pc = 0x4003D0u;
    {
        const bool branch_taken_0x4003d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4003d0) {
            ctx->pc = 0x4003D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4003D0u;
            // 0x4003d4: 0x14983c  dsll32      $s3, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x400320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_400320;
        }
    }
    ctx->pc = 0x4003D8u;
label_4003d8:
    // 0x4003d8: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x4003d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_4003dc:
    // 0x4003dc: 0x8e3400bc  lw          $s4, 0xBC($s1)
    ctx->pc = 0x4003dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_4003e0:
    // 0x4003e0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4003e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4003e4:
    // 0x4003e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4003e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4003e8:
    // 0x4003e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4003e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4003ec:
    // 0x4003ec: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4003ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4003f0:
    // 0x4003f0: 0x2821026  xor         $v0, $s4, $v0
    ctx->pc = 0x4003f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
label_4003f4:
    // 0x4003f4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4003f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4003f8:
    // 0x4003f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4003f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4003fc:
    // 0x4003fc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_400400:
    if (ctx->pc == 0x400400u) {
        ctx->pc = 0x400404u;
        goto label_400404;
    }
    ctx->pc = 0x4003FCu;
    {
        const bool branch_taken_0x4003fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4003fc) {
            ctx->pc = 0x4004C0u;
            goto label_4004c0;
        }
    }
    ctx->pc = 0x400404u;
label_400404:
    // 0x400404: 0x14983c  dsll32      $s3, $s4, 0
    ctx->pc = 0x400404u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) << (32 + 0));
label_400408:
    // 0x400408: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x400408u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
label_40040c:
    // 0x40040c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x40040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_400410:
    // 0x400410: 0x8e720008  lw          $s2, 0x8($s3)
    ctx->pc = 0x400410u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_400414:
    // 0x400414: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x400414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_400418:
    // 0x400418: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x400418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_40041c:
    // 0x40041c: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x40041cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_400420:
    // 0x400420: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x400420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_400424:
    // 0x400424: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x400424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_400428:
    // 0x400428: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_40042c:
    if (ctx->pc == 0x40042Cu) {
        ctx->pc = 0x400430u;
        goto label_400430;
    }
    ctx->pc = 0x400428u;
    {
        const bool branch_taken_0x400428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x400428) {
            ctx->pc = 0x400488u;
            goto label_400488;
        }
    }
    ctx->pc = 0x400430u;
label_400430:
    // 0x400430: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x400430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_400434:
    // 0x400434: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x400434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_400438:
    // 0x400438: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x400438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_40043c:
    // 0x40043c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x40043cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_400440:
    // 0x400440: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x400440u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_400444:
    // 0x400444: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x400444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_400448:
    // 0x400448: 0xc08c3f4  jal         func_230FD0
label_40044c:
    if (ctx->pc == 0x40044Cu) {
        ctx->pc = 0x40044Cu;
            // 0x40044c: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->pc = 0x400450u;
        goto label_400450;
    }
    ctx->pc = 0x400448u;
    SET_GPR_U32(ctx, 31, 0x400450u);
    ctx->pc = 0x40044Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400448u;
            // 0x40044c: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230FD0u;
    if (runtime->hasFunction(0x230FD0u)) {
        auto targetFn = runtime->lookupFunction(0x230FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400450u; }
        if (ctx->pc != 0x400450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230FD0_0x230fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400450u; }
        if (ctx->pc != 0x400450u) { return; }
    }
    ctx->pc = 0x400450u;
label_400450:
    // 0x400450: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x400450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_400454:
    // 0x400454: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x400454u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_400458:
    // 0x400458: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x400458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_40045c:
    // 0x40045c: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x40045cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_400460:
    // 0x400460: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x400460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_400464:
    // 0x400464: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x400464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_400468:
    // 0x400468: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x400468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_40046c:
    // 0x40046c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_400470:
    // 0x400470: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x400470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_400474:
    // 0x400474: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x400474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_400478:
    // 0x400478: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x400478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_40047c:
    // 0x40047c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_400480:
    if (ctx->pc == 0x400480u) {
        ctx->pc = 0x400484u;
        goto label_400484;
    }
    ctx->pc = 0x40047Cu;
    {
        const bool branch_taken_0x40047c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40047c) {
            ctx->pc = 0x400430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_400430;
        }
    }
    ctx->pc = 0x400484u;
label_400484:
    // 0x400484: 0x0  nop
    ctx->pc = 0x400484u;
    // NOP
label_400488:
    // 0x400488: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x400488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_40048c:
    // 0x40048c: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x40048cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_400490:
    // 0x400490: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x400490u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_400494:
    // 0x400494: 0x2454000c  addiu       $s4, $v0, 0xC
    ctx->pc = 0x400494u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_400498:
    // 0x400498: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x400498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_40049c:
    // 0x40049c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x40049cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4004a0:
    // 0x4004a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4004a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4004a4:
    // 0x4004a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4004a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4004a8:
    // 0x4004a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4004a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4004ac:
    // 0x4004ac: 0x2821026  xor         $v0, $s4, $v0
    ctx->pc = 0x4004acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
label_4004b0:
    // 0x4004b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4004b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4004b4:
    // 0x4004b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4004b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4004b8:
    // 0x4004b8: 0x5440ffd3  bnel        $v0, $zero, . + 4 + (-0x2D << 2)
label_4004bc:
    if (ctx->pc == 0x4004BCu) {
        ctx->pc = 0x4004BCu;
            // 0x4004bc: 0x14983c  dsll32      $s3, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) << (32 + 0));
        ctx->pc = 0x4004C0u;
        goto label_4004c0;
    }
    ctx->pc = 0x4004B8u;
    {
        const bool branch_taken_0x4004b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4004b8) {
            ctx->pc = 0x4004BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4004B8u;
            // 0x4004bc: 0x14983c  dsll32      $s3, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x400408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_400408;
        }
    }
    ctx->pc = 0x4004C0u;
label_4004c0:
    // 0x4004c0: 0x262200d8  addiu       $v0, $s1, 0xD8
    ctx->pc = 0x4004c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
label_4004c4:
    // 0x4004c4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4004c8:
    if (ctx->pc == 0x4004C8u) {
        ctx->pc = 0x4004C8u;
            // 0x4004c8: 0x262400cc  addiu       $a0, $s1, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 204));
        ctx->pc = 0x4004CCu;
        goto label_4004cc;
    }
    ctx->pc = 0x4004C4u;
    {
        const bool branch_taken_0x4004c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4004c4) {
            ctx->pc = 0x4004C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4004C4u;
            // 0x4004c8: 0x262400cc  addiu       $a0, $s1, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 204));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4004F4u;
            goto label_4004f4;
        }
    }
    ctx->pc = 0x4004CCu;
label_4004cc:
    // 0x4004cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4004d0:
    if (ctx->pc == 0x4004D0u) {
        ctx->pc = 0x4004D4u;
        goto label_4004d4;
    }
    ctx->pc = 0x4004CCu;
    {
        const bool branch_taken_0x4004cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4004cc) {
            ctx->pc = 0x4004F0u;
            goto label_4004f0;
        }
    }
    ctx->pc = 0x4004D4u;
label_4004d4:
    // 0x4004d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4004d8:
    if (ctx->pc == 0x4004D8u) {
        ctx->pc = 0x4004DCu;
        goto label_4004dc;
    }
    ctx->pc = 0x4004D4u;
    {
        const bool branch_taken_0x4004d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4004d4) {
            ctx->pc = 0x4004F0u;
            goto label_4004f0;
        }
    }
    ctx->pc = 0x4004DCu;
label_4004dc:
    // 0x4004dc: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x4004dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_4004e0:
    // 0x4004e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4004e4:
    if (ctx->pc == 0x4004E4u) {
        ctx->pc = 0x4004E8u;
        goto label_4004e8;
    }
    ctx->pc = 0x4004E0u;
    {
        const bool branch_taken_0x4004e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4004e0) {
            ctx->pc = 0x4004F0u;
            goto label_4004f0;
        }
    }
    ctx->pc = 0x4004E8u;
label_4004e8:
    // 0x4004e8: 0xc0400a8  jal         func_1002A0
label_4004ec:
    if (ctx->pc == 0x4004ECu) {
        ctx->pc = 0x4004F0u;
        goto label_4004f0;
    }
    ctx->pc = 0x4004E8u;
    SET_GPR_U32(ctx, 31, 0x4004F0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4004F0u; }
        if (ctx->pc != 0x4004F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4004F0u; }
        if (ctx->pc != 0x4004F0u) { return; }
    }
    ctx->pc = 0x4004F0u;
label_4004f0:
    // 0x4004f0: 0x262400cc  addiu       $a0, $s1, 0xCC
    ctx->pc = 0x4004f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 204));
label_4004f4:
    // 0x4004f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4004f8:
    if (ctx->pc == 0x4004F8u) {
        ctx->pc = 0x4004F8u;
            // 0x4004f8: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->pc = 0x4004FCu;
        goto label_4004fc;
    }
    ctx->pc = 0x4004F4u;
    {
        const bool branch_taken_0x4004f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4004f4) {
            ctx->pc = 0x4004F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4004F4u;
            // 0x4004f8: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
            ctx->pc = 0x400510u;
            goto label_400510;
        }
    }
    ctx->pc = 0x4004FCu;
label_4004fc:
    // 0x4004fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_400500:
    if (ctx->pc == 0x400500u) {
        ctx->pc = 0x400504u;
        goto label_400504;
    }
    ctx->pc = 0x4004FCu;
    {
        const bool branch_taken_0x4004fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4004fc) {
            ctx->pc = 0x40050Cu;
            goto label_40050c;
        }
    }
    ctx->pc = 0x400504u;
label_400504:
    // 0x400504: 0xc0b4bac  jal         func_2D2EB0
label_400508:
    if (ctx->pc == 0x400508u) {
        ctx->pc = 0x400508u;
            // 0x400508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40050Cu;
        goto label_40050c;
    }
    ctx->pc = 0x400504u;
    SET_GPR_U32(ctx, 31, 0x40050Cu);
    ctx->pc = 0x400508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400504u;
            // 0x400508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2EB0u;
    if (runtime->hasFunction(0x2D2EB0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40050Cu; }
        if (ctx->pc != 0x40050Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2EB0_0x2d2eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40050Cu; }
        if (ctx->pc != 0x40050Cu) { return; }
    }
    ctx->pc = 0x40050Cu;
label_40050c:
    // 0x40050c: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x40050cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_400510:
    // 0x400510: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_400514:
    if (ctx->pc == 0x400514u) {
        ctx->pc = 0x400514u;
            // 0x400514: 0x262400b4  addiu       $a0, $s1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
        ctx->pc = 0x400518u;
        goto label_400518;
    }
    ctx->pc = 0x400510u;
    {
        const bool branch_taken_0x400510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x400510) {
            ctx->pc = 0x400514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x400510u;
            // 0x400514: 0x262400b4  addiu       $a0, $s1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40052Cu;
            goto label_40052c;
        }
    }
    ctx->pc = 0x400518u;
label_400518:
    // 0x400518: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_40051c:
    if (ctx->pc == 0x40051Cu) {
        ctx->pc = 0x400520u;
        goto label_400520;
    }
    ctx->pc = 0x400518u;
    {
        const bool branch_taken_0x400518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x400518) {
            ctx->pc = 0x400528u;
            goto label_400528;
        }
    }
    ctx->pc = 0x400520u;
label_400520:
    // 0x400520: 0xc0b4bac  jal         func_2D2EB0
label_400524:
    if (ctx->pc == 0x400524u) {
        ctx->pc = 0x400524u;
            // 0x400524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x400528u;
        goto label_400528;
    }
    ctx->pc = 0x400520u;
    SET_GPR_U32(ctx, 31, 0x400528u);
    ctx->pc = 0x400524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400520u;
            // 0x400524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2EB0u;
    if (runtime->hasFunction(0x2D2EB0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400528u; }
        if (ctx->pc != 0x400528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2EB0_0x2d2eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400528u; }
        if (ctx->pc != 0x400528u) { return; }
    }
    ctx->pc = 0x400528u;
label_400528:
    // 0x400528: 0x262400b4  addiu       $a0, $s1, 0xB4
    ctx->pc = 0x400528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
label_40052c:
    // 0x40052c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_400530:
    if (ctx->pc == 0x400530u) {
        ctx->pc = 0x400530u;
            // 0x400530: 0x262400a8  addiu       $a0, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->pc = 0x400534u;
        goto label_400534;
    }
    ctx->pc = 0x40052Cu;
    {
        const bool branch_taken_0x40052c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40052c) {
            ctx->pc = 0x400530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40052Cu;
            // 0x400530: 0x262400a8  addiu       $a0, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->in_delay_slot = false;
            ctx->pc = 0x400548u;
            goto label_400548;
        }
    }
    ctx->pc = 0x400534u;
label_400534:
    // 0x400534: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_400538:
    if (ctx->pc == 0x400538u) {
        ctx->pc = 0x40053Cu;
        goto label_40053c;
    }
    ctx->pc = 0x400534u;
    {
        const bool branch_taken_0x400534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x400534) {
            ctx->pc = 0x400544u;
            goto label_400544;
        }
    }
    ctx->pc = 0x40053Cu;
label_40053c:
    // 0x40053c: 0xc0b4b90  jal         func_2D2E40
label_400540:
    if (ctx->pc == 0x400540u) {
        ctx->pc = 0x400540u;
            // 0x400540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x400544u;
        goto label_400544;
    }
    ctx->pc = 0x40053Cu;
    SET_GPR_U32(ctx, 31, 0x400544u);
    ctx->pc = 0x400540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40053Cu;
            // 0x400540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2E40u;
    if (runtime->hasFunction(0x2D2E40u)) {
        auto targetFn = runtime->lookupFunction(0x2D2E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400544u; }
        if (ctx->pc != 0x400544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2E40_0x2d2e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400544u; }
        if (ctx->pc != 0x400544u) { return; }
    }
    ctx->pc = 0x400544u;
label_400544:
    // 0x400544: 0x262400a8  addiu       $a0, $s1, 0xA8
    ctx->pc = 0x400544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_400548:
    // 0x400548: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_40054c:
    if (ctx->pc == 0x40054Cu) {
        ctx->pc = 0x400550u;
        goto label_400550;
    }
    ctx->pc = 0x400548u;
    {
        const bool branch_taken_0x400548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x400548) {
            ctx->pc = 0x400560u;
            goto label_400560;
        }
    }
    ctx->pc = 0x400550u;
label_400550:
    // 0x400550: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_400554:
    if (ctx->pc == 0x400554u) {
        ctx->pc = 0x400558u;
        goto label_400558;
    }
    ctx->pc = 0x400550u;
    {
        const bool branch_taken_0x400550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x400550) {
            ctx->pc = 0x400560u;
            goto label_400560;
        }
    }
    ctx->pc = 0x400558u;
label_400558:
    // 0x400558: 0xc0b4b90  jal         func_2D2E40
label_40055c:
    if (ctx->pc == 0x40055Cu) {
        ctx->pc = 0x40055Cu;
            // 0x40055c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x400560u;
        goto label_400560;
    }
    ctx->pc = 0x400558u;
    SET_GPR_U32(ctx, 31, 0x400560u);
    ctx->pc = 0x40055Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400558u;
            // 0x40055c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2E40u;
    if (runtime->hasFunction(0x2D2E40u)) {
        auto targetFn = runtime->lookupFunction(0x2D2E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400560u; }
        if (ctx->pc != 0x400560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2E40_0x2d2e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400560u; }
        if (ctx->pc != 0x400560u) { return; }
    }
    ctx->pc = 0x400560u;
label_400560:
    // 0x400560: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_400564:
    if (ctx->pc == 0x400564u) {
        ctx->pc = 0x400564u;
            // 0x400564: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x400568u;
        goto label_400568;
    }
    ctx->pc = 0x400560u;
    {
        const bool branch_taken_0x400560 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x400560) {
            ctx->pc = 0x400564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x400560u;
            // 0x400564: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4005D0u;
            goto label_4005d0;
        }
    }
    ctx->pc = 0x400568u;
label_400568:
    // 0x400568: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x400568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_40056c:
    // 0x40056c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x40056cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_400570:
    // 0x400570: 0x24631120  addiu       $v1, $v1, 0x1120
    ctx->pc = 0x400570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4384));
label_400574:
    // 0x400574: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x400574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_400578:
    // 0x400578: 0x24421158  addiu       $v0, $v0, 0x1158
    ctx->pc = 0x400578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4440));
label_40057c:
    // 0x40057c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x40057cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_400580:
    // 0x400580: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x400580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_400584:
    // 0x400584: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x400584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_400588:
    // 0x400588: 0xc0407c0  jal         func_101F00
label_40058c:
    if (ctx->pc == 0x40058Cu) {
        ctx->pc = 0x40058Cu;
            // 0x40058c: 0x24a53bc0  addiu       $a1, $a1, 0x3BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15296));
        ctx->pc = 0x400590u;
        goto label_400590;
    }
    ctx->pc = 0x400588u;
    SET_GPR_U32(ctx, 31, 0x400590u);
    ctx->pc = 0x40058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400588u;
            // 0x40058c: 0x24a53bc0  addiu       $a1, $a1, 0x3BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400590u; }
        if (ctx->pc != 0x400590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400590u; }
        if (ctx->pc != 0x400590u) { return; }
    }
    ctx->pc = 0x400590u;
label_400590:
    // 0x400590: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x400590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_400594:
    // 0x400594: 0xc0a8c98  jal         func_2A3260
label_400598:
    if (ctx->pc == 0x400598u) {
        ctx->pc = 0x400598u;
            // 0x400598: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x40059Cu;
        goto label_40059c;
    }
    ctx->pc = 0x400594u;
    SET_GPR_U32(ctx, 31, 0x40059Cu);
    ctx->pc = 0x400598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400594u;
            // 0x400598: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40059Cu; }
        if (ctx->pc != 0x40059Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40059Cu; }
        if (ctx->pc != 0x40059Cu) { return; }
    }
    ctx->pc = 0x40059Cu;
label_40059c:
    // 0x40059c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x40059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4005a0:
    // 0x4005a0: 0xc0b0eb0  jal         func_2C3AC0
label_4005a4:
    if (ctx->pc == 0x4005A4u) {
        ctx->pc = 0x4005A4u;
            // 0x4005a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4005A8u;
        goto label_4005a8;
    }
    ctx->pc = 0x4005A0u;
    SET_GPR_U32(ctx, 31, 0x4005A8u);
    ctx->pc = 0x4005A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4005A0u;
            // 0x4005a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3AC0u;
    if (runtime->hasFunction(0x2C3AC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C3AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4005A8u; }
        if (ctx->pc != 0x4005A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3AC0_0x2c3ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4005A8u; }
        if (ctx->pc != 0x4005A8u) { return; }
    }
    ctx->pc = 0x4005A8u;
label_4005a8:
    // 0x4005a8: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4005a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4005ac:
    // 0x4005ac: 0xc0b0eb0  jal         func_2C3AC0
label_4005b0:
    if (ctx->pc == 0x4005B0u) {
        ctx->pc = 0x4005B0u;
            // 0x4005b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4005B4u;
        goto label_4005b4;
    }
    ctx->pc = 0x4005ACu;
    SET_GPR_U32(ctx, 31, 0x4005B4u);
    ctx->pc = 0x4005B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4005ACu;
            // 0x4005b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3AC0u;
    if (runtime->hasFunction(0x2C3AC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C3AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4005B4u; }
        if (ctx->pc != 0x4005B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3AC0_0x2c3ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4005B4u; }
        if (ctx->pc != 0x4005B4u) { return; }
    }
    ctx->pc = 0x4005B4u;
label_4005b4:
    // 0x4005b4: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x4005b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4005b8:
    // 0x4005b8: 0xc0b0ecc  jal         func_2C3B30
label_4005bc:
    if (ctx->pc == 0x4005BCu) {
        ctx->pc = 0x4005BCu;
            // 0x4005bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4005C0u;
        goto label_4005c0;
    }
    ctx->pc = 0x4005B8u;
    SET_GPR_U32(ctx, 31, 0x4005C0u);
    ctx->pc = 0x4005BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4005B8u;
            // 0x4005bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3B30u;
    if (runtime->hasFunction(0x2C3B30u)) {
        auto targetFn = runtime->lookupFunction(0x2C3B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4005C0u; }
        if (ctx->pc != 0x4005C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3B30_0x2c3b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4005C0u; }
        if (ctx->pc != 0x4005C0u) { return; }
    }
    ctx->pc = 0x4005C0u;
label_4005c0:
    // 0x4005c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4005c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4005c4:
    // 0x4005c4: 0xc0ae1c0  jal         func_2B8700
label_4005c8:
    if (ctx->pc == 0x4005C8u) {
        ctx->pc = 0x4005C8u;
            // 0x4005c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4005CCu;
        goto label_4005cc;
    }
    ctx->pc = 0x4005C4u;
    SET_GPR_U32(ctx, 31, 0x4005CCu);
    ctx->pc = 0x4005C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4005C4u;
            // 0x4005c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4005CCu; }
        if (ctx->pc != 0x4005CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4005CCu; }
        if (ctx->pc != 0x4005CCu) { return; }
    }
    ctx->pc = 0x4005CCu;
label_4005cc:
    // 0x4005cc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4005ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4005d0:
    // 0x4005d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4005d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4005d4:
    // 0x4005d4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4005d8:
    if (ctx->pc == 0x4005D8u) {
        ctx->pc = 0x4005D8u;
            // 0x4005d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4005DCu;
        goto label_4005dc;
    }
    ctx->pc = 0x4005D4u;
    {
        const bool branch_taken_0x4005d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4005d4) {
            ctx->pc = 0x4005D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4005D4u;
            // 0x4005d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4005E8u;
            goto label_4005e8;
        }
    }
    ctx->pc = 0x4005DCu;
label_4005dc:
    // 0x4005dc: 0xc0400a8  jal         func_1002A0
label_4005e0:
    if (ctx->pc == 0x4005E0u) {
        ctx->pc = 0x4005E0u;
            // 0x4005e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4005E4u;
        goto label_4005e4;
    }
    ctx->pc = 0x4005DCu;
    SET_GPR_U32(ctx, 31, 0x4005E4u);
    ctx->pc = 0x4005E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4005DCu;
            // 0x4005e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4005E4u; }
        if (ctx->pc != 0x4005E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4005E4u; }
        if (ctx->pc != 0x4005E4u) { return; }
    }
    ctx->pc = 0x4005E4u;
label_4005e4:
    // 0x4005e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4005e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4005e8:
    // 0x4005e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4005e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4005ec:
    // 0x4005ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4005ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4005f0:
    // 0x4005f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4005f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4005f4:
    // 0x4005f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4005f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4005f8:
    // 0x4005f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4005f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4005fc:
    // 0x4005fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4005fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_400600:
    // 0x400600: 0x3e00008  jr          $ra
label_400604:
    if (ctx->pc == 0x400604u) {
        ctx->pc = 0x400604u;
            // 0x400604: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x400608u;
        goto label_400608;
    }
    ctx->pc = 0x400600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x400604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400600u;
            // 0x400604: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x400608u;
label_400608:
    // 0x400608: 0x0  nop
    ctx->pc = 0x400608u;
    // NOP
label_40060c:
    // 0x40060c: 0x0  nop
    ctx->pc = 0x40060cu;
    // NOP
label_400610:
    // 0x400610: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x400610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_400614:
    // 0x400614: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x400614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_400618:
    // 0x400618: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x400618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_40061c:
    // 0x40061c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x40061cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_400620:
    // 0x400620: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x400620u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_400624:
    // 0x400624: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x400624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_400628:
    // 0x400628: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x400628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40062c:
    // 0x40062c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40062cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_400630:
    // 0x400630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x400630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_400634:
    // 0x400634: 0x12a0005a  beqz        $s5, . + 4 + (0x5A << 2)
label_400638:
    if (ctx->pc == 0x400638u) {
        ctx->pc = 0x400638u;
            // 0x400638: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x40063Cu;
        goto label_40063c;
    }
    ctx->pc = 0x400634u;
    {
        const bool branch_taken_0x400634 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x400638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400634u;
            // 0x400638: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400634) {
            ctx->pc = 0x4007A0u;
            goto label_4007a0;
        }
    }
    ctx->pc = 0x40063Cu;
label_40063c:
    // 0x40063c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40063cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_400640:
    // 0x400640: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x400640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_400644:
    // 0x400644: 0x2463a510  addiu       $v1, $v1, -0x5AF0
    ctx->pc = 0x400644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944016));
label_400648:
    // 0x400648: 0x2442a548  addiu       $v0, $v0, -0x5AB8
    ctx->pc = 0x400648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944072));
label_40064c:
    // 0x40064c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x40064cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_400650:
    // 0x400650: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x400650u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_400654:
    // 0x400654: 0xaea20064  sw          $v0, 0x64($s5)
    ctx->pc = 0x400654u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 2));
label_400658:
    // 0x400658: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x400658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40065c:
    // 0x40065c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x40065cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_400660:
    // 0x400660: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x400660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_400664:
    // 0x400664: 0x0  nop
    ctx->pc = 0x400664u;
    // NOP
label_400668:
    // 0x400668: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x400668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40066c:
    // 0x40066c: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x40066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_400670:
    // 0x400670: 0x8ea200b8  lw          $v0, 0xB8($s5)
    ctx->pc = 0x400670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
label_400674:
    // 0x400674: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x400674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_400678:
    // 0x400678: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x400678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_40067c:
    // 0x40067c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x40067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_400680:
    // 0x400680: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x400680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_400684:
    // 0x400684: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x400684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_400688:
    // 0x400688: 0xc08c3f4  jal         func_230FD0
label_40068c:
    if (ctx->pc == 0x40068Cu) {
        ctx->pc = 0x40068Cu;
            // 0x40068c: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->pc = 0x400690u;
        goto label_400690;
    }
    ctx->pc = 0x400688u;
    SET_GPR_U32(ctx, 31, 0x400690u);
    ctx->pc = 0x40068Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400688u;
            // 0x40068c: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230FD0u;
    if (runtime->hasFunction(0x230FD0u)) {
        auto targetFn = runtime->lookupFunction(0x230FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400690u; }
        if (ctx->pc != 0x400690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230FD0_0x230fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400690u; }
        if (ctx->pc != 0x400690u) { return; }
    }
    ctx->pc = 0x400690u;
label_400690:
    // 0x400690: 0x8ea200b8  lw          $v0, 0xB8($s5)
    ctx->pc = 0x400690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
label_400694:
    // 0x400694: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x400694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_400698:
    // 0x400698: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x400698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40069c:
    // 0x40069c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x40069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4006a0:
    // 0x4006a0: 0xc08d414  jal         func_235050
label_4006a4:
    if (ctx->pc == 0x4006A4u) {
        ctx->pc = 0x4006A4u;
            // 0x4006a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4006A8u;
        goto label_4006a8;
    }
    ctx->pc = 0x4006A0u;
    SET_GPR_U32(ctx, 31, 0x4006A8u);
    ctx->pc = 0x4006A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4006A0u;
            // 0x4006a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4006A8u; }
        if (ctx->pc != 0x4006A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4006A8u; }
        if (ctx->pc != 0x4006A8u) { return; }
    }
    ctx->pc = 0x4006A8u;
label_4006a8:
    // 0x4006a8: 0x8ea200a8  lw          $v0, 0xA8($s5)
    ctx->pc = 0x4006a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
label_4006ac:
    // 0x4006ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4006acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4006b0:
    // 0x4006b0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4006b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4006b4:
    // 0x4006b4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_4006b8:
    if (ctx->pc == 0x4006B8u) {
        ctx->pc = 0x4006B8u;
            // 0x4006b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4006BCu;
        goto label_4006bc;
    }
    ctx->pc = 0x4006B4u;
    {
        const bool branch_taken_0x4006b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4006B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4006B4u;
            // 0x4006b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4006b4) {
            ctx->pc = 0x400668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_400668;
        }
    }
    ctx->pc = 0x4006BCu;
label_4006bc:
    // 0x4006bc: 0x8ea200b8  lw          $v0, 0xB8($s5)
    ctx->pc = 0x4006bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
label_4006c0:
    // 0x4006c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4006c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4006c4:
    // 0x4006c4: 0xc04008c  jal         func_100230
label_4006c8:
    if (ctx->pc == 0x4006C8u) {
        ctx->pc = 0x4006C8u;
            // 0x4006c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4006CCu;
        goto label_4006cc;
    }
    ctx->pc = 0x4006C4u;
    SET_GPR_U32(ctx, 31, 0x4006CCu);
    ctx->pc = 0x4006C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4006C4u;
            // 0x4006c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4006CCu; }
        if (ctx->pc != 0x4006CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4006CCu; }
        if (ctx->pc != 0x4006CCu) { return; }
    }
    ctx->pc = 0x4006CCu;
label_4006cc:
    // 0x4006cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4006ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4006d0:
    // 0x4006d0: 0x2e620006  sltiu       $v0, $s3, 0x6
    ctx->pc = 0x4006d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_4006d4:
    // 0x4006d4: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_4006d8:
    if (ctx->pc == 0x4006D8u) {
        ctx->pc = 0x4006D8u;
            // 0x4006d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4006DCu;
        goto label_4006dc;
    }
    ctx->pc = 0x4006D4u;
    {
        const bool branch_taken_0x4006d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4006D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4006D4u;
            // 0x4006d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4006d4) {
            ctx->pc = 0x40065Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40065c;
        }
    }
    ctx->pc = 0x4006DCu;
label_4006dc:
    // 0x4006dc: 0xc04008c  jal         func_100230
label_4006e0:
    if (ctx->pc == 0x4006E0u) {
        ctx->pc = 0x4006E0u;
            // 0x4006e0: 0x8ea400b8  lw          $a0, 0xB8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
        ctx->pc = 0x4006E4u;
        goto label_4006e4;
    }
    ctx->pc = 0x4006DCu;
    SET_GPR_U32(ctx, 31, 0x4006E4u);
    ctx->pc = 0x4006E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4006DCu;
            // 0x4006e0: 0x8ea400b8  lw          $a0, 0xB8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4006E4u; }
        if (ctx->pc != 0x4006E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4006E4u; }
        if (ctx->pc != 0x4006E4u) { return; }
    }
    ctx->pc = 0x4006E4u;
label_4006e4:
    // 0x4006e4: 0x8ea400bc  lw          $a0, 0xBC($s5)
    ctx->pc = 0x4006e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_4006e8:
    // 0x4006e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4006ec:
    if (ctx->pc == 0x4006ECu) {
        ctx->pc = 0x4006ECu;
            // 0x4006ec: 0x26a400ac  addiu       $a0, $s5, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 172));
        ctx->pc = 0x4006F0u;
        goto label_4006f0;
    }
    ctx->pc = 0x4006E8u;
    {
        const bool branch_taken_0x4006e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4006e8) {
            ctx->pc = 0x4006ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4006E8u;
            // 0x4006ec: 0x26a400ac  addiu       $a0, $s5, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 172));
        ctx->in_delay_slot = false;
            ctx->pc = 0x400704u;
            goto label_400704;
        }
    }
    ctx->pc = 0x4006F0u;
label_4006f0:
    // 0x4006f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4006f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4006f4:
    // 0x4006f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4006f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4006f8:
    // 0x4006f8: 0x320f809  jalr        $t9
label_4006fc:
    if (ctx->pc == 0x4006FCu) {
        ctx->pc = 0x4006FCu;
            // 0x4006fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x400700u;
        goto label_400700;
    }
    ctx->pc = 0x4006F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x400700u);
        ctx->pc = 0x4006FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4006F8u;
            // 0x4006fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x400700u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x400700u; }
            if (ctx->pc != 0x400700u) { return; }
        }
        }
    }
    ctx->pc = 0x400700u;
label_400700:
    // 0x400700: 0x26a400ac  addiu       $a0, $s5, 0xAC
    ctx->pc = 0x400700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 172));
label_400704:
    // 0x400704: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_400708:
    if (ctx->pc == 0x400708u) {
        ctx->pc = 0x40070Cu;
        goto label_40070c;
    }
    ctx->pc = 0x400704u;
    {
        const bool branch_taken_0x400704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x400704) {
            ctx->pc = 0x40071Cu;
            goto label_40071c;
        }
    }
    ctx->pc = 0x40070Cu;
label_40070c:
    // 0x40070c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_400710:
    if (ctx->pc == 0x400710u) {
        ctx->pc = 0x400714u;
        goto label_400714;
    }
    ctx->pc = 0x40070Cu;
    {
        const bool branch_taken_0x40070c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40070c) {
            ctx->pc = 0x40071Cu;
            goto label_40071c;
        }
    }
    ctx->pc = 0x400714u;
label_400714:
    // 0x400714: 0xc0b4bc8  jal         func_2D2F20
label_400718:
    if (ctx->pc == 0x400718u) {
        ctx->pc = 0x400718u;
            // 0x400718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40071Cu;
        goto label_40071c;
    }
    ctx->pc = 0x400714u;
    SET_GPR_U32(ctx, 31, 0x40071Cu);
    ctx->pc = 0x400718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400714u;
            // 0x400718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F20u;
    if (runtime->hasFunction(0x2D2F20u)) {
        auto targetFn = runtime->lookupFunction(0x2D2F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40071Cu; }
        if (ctx->pc != 0x40071Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2F20_0x2d2f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40071Cu; }
        if (ctx->pc != 0x40071Cu) { return; }
    }
    ctx->pc = 0x40071Cu;
label_40071c:
    // 0x40071c: 0x52a0001b  beql        $s5, $zero, . + 4 + (0x1B << 2)
label_400720:
    if (ctx->pc == 0x400720u) {
        ctx->pc = 0x400720u;
            // 0x400720: 0x14143c  dsll32      $v0, $s4, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
        ctx->pc = 0x400724u;
        goto label_400724;
    }
    ctx->pc = 0x40071Cu;
    {
        const bool branch_taken_0x40071c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x40071c) {
            ctx->pc = 0x400720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40071Cu;
            // 0x400720: 0x14143c  dsll32      $v0, $s4, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40078Cu;
            goto label_40078c;
        }
    }
    ctx->pc = 0x400724u;
label_400724:
    // 0x400724: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x400724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_400728:
    // 0x400728: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x400728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_40072c:
    // 0x40072c: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x40072cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
label_400730:
    // 0x400730: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x400730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_400734:
    // 0x400734: 0x24421798  addiu       $v0, $v0, 0x1798
    ctx->pc = 0x400734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6040));
label_400738:
    // 0x400738: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x400738u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_40073c:
    // 0x40073c: 0xaea20064  sw          $v0, 0x64($s5)
    ctx->pc = 0x40073cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 2));
label_400740:
    // 0x400740: 0x8ea40068  lw          $a0, 0x68($s5)
    ctx->pc = 0x400740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_400744:
    // 0x400744: 0xc0407c0  jal         func_101F00
label_400748:
    if (ctx->pc == 0x400748u) {
        ctx->pc = 0x400748u;
            // 0x400748: 0x24a5bbe0  addiu       $a1, $a1, -0x4420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949856));
        ctx->pc = 0x40074Cu;
        goto label_40074c;
    }
    ctx->pc = 0x400744u;
    SET_GPR_U32(ctx, 31, 0x40074Cu);
    ctx->pc = 0x400748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400744u;
            // 0x400748: 0x24a5bbe0  addiu       $a1, $a1, -0x4420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40074Cu; }
        if (ctx->pc != 0x40074Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40074Cu; }
        if (ctx->pc != 0x40074Cu) { return; }
    }
    ctx->pc = 0x40074Cu;
label_40074c:
    // 0x40074c: 0x26a40084  addiu       $a0, $s5, 0x84
    ctx->pc = 0x40074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_400750:
    // 0x400750: 0xc0a8c98  jal         func_2A3260
label_400754:
    if (ctx->pc == 0x400754u) {
        ctx->pc = 0x400754u;
            // 0x400754: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x400758u;
        goto label_400758;
    }
    ctx->pc = 0x400750u;
    SET_GPR_U32(ctx, 31, 0x400758u);
    ctx->pc = 0x400754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400750u;
            // 0x400754: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400758u; }
        if (ctx->pc != 0x400758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400758u; }
        if (ctx->pc != 0x400758u) { return; }
    }
    ctx->pc = 0x400758u;
label_400758:
    // 0x400758: 0x26a40078  addiu       $a0, $s5, 0x78
    ctx->pc = 0x400758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 120));
label_40075c:
    // 0x40075c: 0xc0b04c8  jal         func_2C1320
label_400760:
    if (ctx->pc == 0x400760u) {
        ctx->pc = 0x400760u;
            // 0x400760: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x400764u;
        goto label_400764;
    }
    ctx->pc = 0x40075Cu;
    SET_GPR_U32(ctx, 31, 0x400764u);
    ctx->pc = 0x400760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40075Cu;
            // 0x400760: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1320u;
    if (runtime->hasFunction(0x2C1320u)) {
        auto targetFn = runtime->lookupFunction(0x2C1320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400764u; }
        if (ctx->pc != 0x400764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1320_0x2c1320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400764u; }
        if (ctx->pc != 0x400764u) { return; }
    }
    ctx->pc = 0x400764u;
label_400764:
    // 0x400764: 0x26a4006c  addiu       $a0, $s5, 0x6C
    ctx->pc = 0x400764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
label_400768:
    // 0x400768: 0xc0b04c8  jal         func_2C1320
label_40076c:
    if (ctx->pc == 0x40076Cu) {
        ctx->pc = 0x40076Cu;
            // 0x40076c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x400770u;
        goto label_400770;
    }
    ctx->pc = 0x400768u;
    SET_GPR_U32(ctx, 31, 0x400770u);
    ctx->pc = 0x40076Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400768u;
            // 0x40076c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1320u;
    if (runtime->hasFunction(0x2C1320u)) {
        auto targetFn = runtime->lookupFunction(0x2C1320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400770u; }
        if (ctx->pc != 0x400770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1320_0x2c1320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400770u; }
        if (ctx->pc != 0x400770u) { return; }
    }
    ctx->pc = 0x400770u;
label_400770:
    // 0x400770: 0x26a40064  addiu       $a0, $s5, 0x64
    ctx->pc = 0x400770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
label_400774:
    // 0x400774: 0xc0b04e4  jal         func_2C1390
label_400778:
    if (ctx->pc == 0x400778u) {
        ctx->pc = 0x400778u;
            // 0x400778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40077Cu;
        goto label_40077c;
    }
    ctx->pc = 0x400774u;
    SET_GPR_U32(ctx, 31, 0x40077Cu);
    ctx->pc = 0x400778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400774u;
            // 0x400778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1390u;
    if (runtime->hasFunction(0x2C1390u)) {
        auto targetFn = runtime->lookupFunction(0x2C1390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40077Cu; }
        if (ctx->pc != 0x40077Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1390_0x2c1390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40077Cu; }
        if (ctx->pc != 0x40077Cu) { return; }
    }
    ctx->pc = 0x40077Cu;
label_40077c:
    // 0x40077c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x40077cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_400780:
    // 0x400780: 0xc0ae1c0  jal         func_2B8700
label_400784:
    if (ctx->pc == 0x400784u) {
        ctx->pc = 0x400784u;
            // 0x400784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x400788u;
        goto label_400788;
    }
    ctx->pc = 0x400780u;
    SET_GPR_U32(ctx, 31, 0x400788u);
    ctx->pc = 0x400784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400780u;
            // 0x400784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400788u; }
        if (ctx->pc != 0x400788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400788u; }
        if (ctx->pc != 0x400788u) { return; }
    }
    ctx->pc = 0x400788u;
label_400788:
    // 0x400788: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x400788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
label_40078c:
    // 0x40078c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x40078cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_400790:
    // 0x400790: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_400794:
    if (ctx->pc == 0x400794u) {
        ctx->pc = 0x400794u;
            // 0x400794: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x400798u;
        goto label_400798;
    }
    ctx->pc = 0x400790u;
    {
        const bool branch_taken_0x400790 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x400790) {
            ctx->pc = 0x400794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x400790u;
            // 0x400794: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4007A4u;
            goto label_4007a4;
        }
    }
    ctx->pc = 0x400798u;
label_400798:
    // 0x400798: 0xc0400a8  jal         func_1002A0
label_40079c:
    if (ctx->pc == 0x40079Cu) {
        ctx->pc = 0x40079Cu;
            // 0x40079c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4007A0u;
        goto label_4007a0;
    }
    ctx->pc = 0x400798u;
    SET_GPR_U32(ctx, 31, 0x4007A0u);
    ctx->pc = 0x40079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400798u;
            // 0x40079c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4007A0u; }
        if (ctx->pc != 0x4007A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4007A0u; }
        if (ctx->pc != 0x4007A0u) { return; }
    }
    ctx->pc = 0x4007A0u;
label_4007a0:
    // 0x4007a0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4007a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4007a4:
    // 0x4007a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4007a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4007a8:
    // 0x4007a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4007a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4007ac:
    // 0x4007ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4007acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4007b0:
    // 0x4007b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4007b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4007b4:
    // 0x4007b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4007b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4007b8:
    // 0x4007b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4007b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4007bc:
    // 0x4007bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4007bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4007c0:
    // 0x4007c0: 0x3e00008  jr          $ra
label_4007c4:
    if (ctx->pc == 0x4007C4u) {
        ctx->pc = 0x4007C4u;
            // 0x4007c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4007C8u;
        goto label_4007c8;
    }
    ctx->pc = 0x4007C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4007C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4007C0u;
            // 0x4007c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4007C8u;
label_4007c8:
    // 0x4007c8: 0x0  nop
    ctx->pc = 0x4007c8u;
    // NOP
label_4007cc:
    // 0x4007cc: 0x0  nop
    ctx->pc = 0x4007ccu;
    // NOP
label_4007d0:
    // 0x4007d0: 0x3e00008  jr          $ra
label_4007d4:
    if (ctx->pc == 0x4007D4u) {
        ctx->pc = 0x4007D4u;
            // 0x4007d4: 0x24022bca  addiu       $v0, $zero, 0x2BCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11210));
        ctx->pc = 0x4007D8u;
        goto label_4007d8;
    }
    ctx->pc = 0x4007D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4007D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4007D0u;
            // 0x4007d4: 0x24022bca  addiu       $v0, $zero, 0x2BCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11210));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4007D8u;
label_4007d8:
    // 0x4007d8: 0x0  nop
    ctx->pc = 0x4007d8u;
    // NOP
label_4007dc:
    // 0x4007dc: 0x0  nop
    ctx->pc = 0x4007dcu;
    // NOP
}
