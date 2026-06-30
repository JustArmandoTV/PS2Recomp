#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025FD60
// Address: 0x25fd60 - 0x260fd0
void sub_0025FD60_0x25fd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FD60_0x25fd60");
#endif

    switch (ctx->pc) {
        case 0x25fd60u: goto label_25fd60;
        case 0x25fd64u: goto label_25fd64;
        case 0x25fd68u: goto label_25fd68;
        case 0x25fd6cu: goto label_25fd6c;
        case 0x25fd70u: goto label_25fd70;
        case 0x25fd74u: goto label_25fd74;
        case 0x25fd78u: goto label_25fd78;
        case 0x25fd7cu: goto label_25fd7c;
        case 0x25fd80u: goto label_25fd80;
        case 0x25fd84u: goto label_25fd84;
        case 0x25fd88u: goto label_25fd88;
        case 0x25fd8cu: goto label_25fd8c;
        case 0x25fd90u: goto label_25fd90;
        case 0x25fd94u: goto label_25fd94;
        case 0x25fd98u: goto label_25fd98;
        case 0x25fd9cu: goto label_25fd9c;
        case 0x25fda0u: goto label_25fda0;
        case 0x25fda4u: goto label_25fda4;
        case 0x25fda8u: goto label_25fda8;
        case 0x25fdacu: goto label_25fdac;
        case 0x25fdb0u: goto label_25fdb0;
        case 0x25fdb4u: goto label_25fdb4;
        case 0x25fdb8u: goto label_25fdb8;
        case 0x25fdbcu: goto label_25fdbc;
        case 0x25fdc0u: goto label_25fdc0;
        case 0x25fdc4u: goto label_25fdc4;
        case 0x25fdc8u: goto label_25fdc8;
        case 0x25fdccu: goto label_25fdcc;
        case 0x25fdd0u: goto label_25fdd0;
        case 0x25fdd4u: goto label_25fdd4;
        case 0x25fdd8u: goto label_25fdd8;
        case 0x25fddcu: goto label_25fddc;
        case 0x25fde0u: goto label_25fde0;
        case 0x25fde4u: goto label_25fde4;
        case 0x25fde8u: goto label_25fde8;
        case 0x25fdecu: goto label_25fdec;
        case 0x25fdf0u: goto label_25fdf0;
        case 0x25fdf4u: goto label_25fdf4;
        case 0x25fdf8u: goto label_25fdf8;
        case 0x25fdfcu: goto label_25fdfc;
        case 0x25fe00u: goto label_25fe00;
        case 0x25fe04u: goto label_25fe04;
        case 0x25fe08u: goto label_25fe08;
        case 0x25fe0cu: goto label_25fe0c;
        case 0x25fe10u: goto label_25fe10;
        case 0x25fe14u: goto label_25fe14;
        case 0x25fe18u: goto label_25fe18;
        case 0x25fe1cu: goto label_25fe1c;
        case 0x25fe20u: goto label_25fe20;
        case 0x25fe24u: goto label_25fe24;
        case 0x25fe28u: goto label_25fe28;
        case 0x25fe2cu: goto label_25fe2c;
        case 0x25fe30u: goto label_25fe30;
        case 0x25fe34u: goto label_25fe34;
        case 0x25fe38u: goto label_25fe38;
        case 0x25fe3cu: goto label_25fe3c;
        case 0x25fe40u: goto label_25fe40;
        case 0x25fe44u: goto label_25fe44;
        case 0x25fe48u: goto label_25fe48;
        case 0x25fe4cu: goto label_25fe4c;
        case 0x25fe50u: goto label_25fe50;
        case 0x25fe54u: goto label_25fe54;
        case 0x25fe58u: goto label_25fe58;
        case 0x25fe5cu: goto label_25fe5c;
        case 0x25fe60u: goto label_25fe60;
        case 0x25fe64u: goto label_25fe64;
        case 0x25fe68u: goto label_25fe68;
        case 0x25fe6cu: goto label_25fe6c;
        case 0x25fe70u: goto label_25fe70;
        case 0x25fe74u: goto label_25fe74;
        case 0x25fe78u: goto label_25fe78;
        case 0x25fe7cu: goto label_25fe7c;
        case 0x25fe80u: goto label_25fe80;
        case 0x25fe84u: goto label_25fe84;
        case 0x25fe88u: goto label_25fe88;
        case 0x25fe8cu: goto label_25fe8c;
        case 0x25fe90u: goto label_25fe90;
        case 0x25fe94u: goto label_25fe94;
        case 0x25fe98u: goto label_25fe98;
        case 0x25fe9cu: goto label_25fe9c;
        case 0x25fea0u: goto label_25fea0;
        case 0x25fea4u: goto label_25fea4;
        case 0x25fea8u: goto label_25fea8;
        case 0x25feacu: goto label_25feac;
        case 0x25feb0u: goto label_25feb0;
        case 0x25feb4u: goto label_25feb4;
        case 0x25feb8u: goto label_25feb8;
        case 0x25febcu: goto label_25febc;
        case 0x25fec0u: goto label_25fec0;
        case 0x25fec4u: goto label_25fec4;
        case 0x25fec8u: goto label_25fec8;
        case 0x25feccu: goto label_25fecc;
        case 0x25fed0u: goto label_25fed0;
        case 0x25fed4u: goto label_25fed4;
        case 0x25fed8u: goto label_25fed8;
        case 0x25fedcu: goto label_25fedc;
        case 0x25fee0u: goto label_25fee0;
        case 0x25fee4u: goto label_25fee4;
        case 0x25fee8u: goto label_25fee8;
        case 0x25feecu: goto label_25feec;
        case 0x25fef0u: goto label_25fef0;
        case 0x25fef4u: goto label_25fef4;
        case 0x25fef8u: goto label_25fef8;
        case 0x25fefcu: goto label_25fefc;
        case 0x25ff00u: goto label_25ff00;
        case 0x25ff04u: goto label_25ff04;
        case 0x25ff08u: goto label_25ff08;
        case 0x25ff0cu: goto label_25ff0c;
        case 0x25ff10u: goto label_25ff10;
        case 0x25ff14u: goto label_25ff14;
        case 0x25ff18u: goto label_25ff18;
        case 0x25ff1cu: goto label_25ff1c;
        case 0x25ff20u: goto label_25ff20;
        case 0x25ff24u: goto label_25ff24;
        case 0x25ff28u: goto label_25ff28;
        case 0x25ff2cu: goto label_25ff2c;
        case 0x25ff30u: goto label_25ff30;
        case 0x25ff34u: goto label_25ff34;
        case 0x25ff38u: goto label_25ff38;
        case 0x25ff3cu: goto label_25ff3c;
        case 0x25ff40u: goto label_25ff40;
        case 0x25ff44u: goto label_25ff44;
        case 0x25ff48u: goto label_25ff48;
        case 0x25ff4cu: goto label_25ff4c;
        case 0x25ff50u: goto label_25ff50;
        case 0x25ff54u: goto label_25ff54;
        case 0x25ff58u: goto label_25ff58;
        case 0x25ff5cu: goto label_25ff5c;
        case 0x25ff60u: goto label_25ff60;
        case 0x25ff64u: goto label_25ff64;
        case 0x25ff68u: goto label_25ff68;
        case 0x25ff6cu: goto label_25ff6c;
        case 0x25ff70u: goto label_25ff70;
        case 0x25ff74u: goto label_25ff74;
        case 0x25ff78u: goto label_25ff78;
        case 0x25ff7cu: goto label_25ff7c;
        case 0x25ff80u: goto label_25ff80;
        case 0x25ff84u: goto label_25ff84;
        case 0x25ff88u: goto label_25ff88;
        case 0x25ff8cu: goto label_25ff8c;
        case 0x25ff90u: goto label_25ff90;
        case 0x25ff94u: goto label_25ff94;
        case 0x25ff98u: goto label_25ff98;
        case 0x25ff9cu: goto label_25ff9c;
        case 0x25ffa0u: goto label_25ffa0;
        case 0x25ffa4u: goto label_25ffa4;
        case 0x25ffa8u: goto label_25ffa8;
        case 0x25ffacu: goto label_25ffac;
        case 0x25ffb0u: goto label_25ffb0;
        case 0x25ffb4u: goto label_25ffb4;
        case 0x25ffb8u: goto label_25ffb8;
        case 0x25ffbcu: goto label_25ffbc;
        case 0x25ffc0u: goto label_25ffc0;
        case 0x25ffc4u: goto label_25ffc4;
        case 0x25ffc8u: goto label_25ffc8;
        case 0x25ffccu: goto label_25ffcc;
        case 0x25ffd0u: goto label_25ffd0;
        case 0x25ffd4u: goto label_25ffd4;
        case 0x25ffd8u: goto label_25ffd8;
        case 0x25ffdcu: goto label_25ffdc;
        case 0x25ffe0u: goto label_25ffe0;
        case 0x25ffe4u: goto label_25ffe4;
        case 0x25ffe8u: goto label_25ffe8;
        case 0x25ffecu: goto label_25ffec;
        case 0x25fff0u: goto label_25fff0;
        case 0x25fff4u: goto label_25fff4;
        case 0x25fff8u: goto label_25fff8;
        case 0x25fffcu: goto label_25fffc;
        case 0x260000u: goto label_260000;
        case 0x260004u: goto label_260004;
        case 0x260008u: goto label_260008;
        case 0x26000cu: goto label_26000c;
        case 0x260010u: goto label_260010;
        case 0x260014u: goto label_260014;
        case 0x260018u: goto label_260018;
        case 0x26001cu: goto label_26001c;
        case 0x260020u: goto label_260020;
        case 0x260024u: goto label_260024;
        case 0x260028u: goto label_260028;
        case 0x26002cu: goto label_26002c;
        case 0x260030u: goto label_260030;
        case 0x260034u: goto label_260034;
        case 0x260038u: goto label_260038;
        case 0x26003cu: goto label_26003c;
        case 0x260040u: goto label_260040;
        case 0x260044u: goto label_260044;
        case 0x260048u: goto label_260048;
        case 0x26004cu: goto label_26004c;
        case 0x260050u: goto label_260050;
        case 0x260054u: goto label_260054;
        case 0x260058u: goto label_260058;
        case 0x26005cu: goto label_26005c;
        case 0x260060u: goto label_260060;
        case 0x260064u: goto label_260064;
        case 0x260068u: goto label_260068;
        case 0x26006cu: goto label_26006c;
        case 0x260070u: goto label_260070;
        case 0x260074u: goto label_260074;
        case 0x260078u: goto label_260078;
        case 0x26007cu: goto label_26007c;
        case 0x260080u: goto label_260080;
        case 0x260084u: goto label_260084;
        case 0x260088u: goto label_260088;
        case 0x26008cu: goto label_26008c;
        case 0x260090u: goto label_260090;
        case 0x260094u: goto label_260094;
        case 0x260098u: goto label_260098;
        case 0x26009cu: goto label_26009c;
        case 0x2600a0u: goto label_2600a0;
        case 0x2600a4u: goto label_2600a4;
        case 0x2600a8u: goto label_2600a8;
        case 0x2600acu: goto label_2600ac;
        case 0x2600b0u: goto label_2600b0;
        case 0x2600b4u: goto label_2600b4;
        case 0x2600b8u: goto label_2600b8;
        case 0x2600bcu: goto label_2600bc;
        case 0x2600c0u: goto label_2600c0;
        case 0x2600c4u: goto label_2600c4;
        case 0x2600c8u: goto label_2600c8;
        case 0x2600ccu: goto label_2600cc;
        case 0x2600d0u: goto label_2600d0;
        case 0x2600d4u: goto label_2600d4;
        case 0x2600d8u: goto label_2600d8;
        case 0x2600dcu: goto label_2600dc;
        case 0x2600e0u: goto label_2600e0;
        case 0x2600e4u: goto label_2600e4;
        case 0x2600e8u: goto label_2600e8;
        case 0x2600ecu: goto label_2600ec;
        case 0x2600f0u: goto label_2600f0;
        case 0x2600f4u: goto label_2600f4;
        case 0x2600f8u: goto label_2600f8;
        case 0x2600fcu: goto label_2600fc;
        case 0x260100u: goto label_260100;
        case 0x260104u: goto label_260104;
        case 0x260108u: goto label_260108;
        case 0x26010cu: goto label_26010c;
        case 0x260110u: goto label_260110;
        case 0x260114u: goto label_260114;
        case 0x260118u: goto label_260118;
        case 0x26011cu: goto label_26011c;
        case 0x260120u: goto label_260120;
        case 0x260124u: goto label_260124;
        case 0x260128u: goto label_260128;
        case 0x26012cu: goto label_26012c;
        case 0x260130u: goto label_260130;
        case 0x260134u: goto label_260134;
        case 0x260138u: goto label_260138;
        case 0x26013cu: goto label_26013c;
        case 0x260140u: goto label_260140;
        case 0x260144u: goto label_260144;
        case 0x260148u: goto label_260148;
        case 0x26014cu: goto label_26014c;
        case 0x260150u: goto label_260150;
        case 0x260154u: goto label_260154;
        case 0x260158u: goto label_260158;
        case 0x26015cu: goto label_26015c;
        case 0x260160u: goto label_260160;
        case 0x260164u: goto label_260164;
        case 0x260168u: goto label_260168;
        case 0x26016cu: goto label_26016c;
        case 0x260170u: goto label_260170;
        case 0x260174u: goto label_260174;
        case 0x260178u: goto label_260178;
        case 0x26017cu: goto label_26017c;
        case 0x260180u: goto label_260180;
        case 0x260184u: goto label_260184;
        case 0x260188u: goto label_260188;
        case 0x26018cu: goto label_26018c;
        case 0x260190u: goto label_260190;
        case 0x260194u: goto label_260194;
        case 0x260198u: goto label_260198;
        case 0x26019cu: goto label_26019c;
        case 0x2601a0u: goto label_2601a0;
        case 0x2601a4u: goto label_2601a4;
        case 0x2601a8u: goto label_2601a8;
        case 0x2601acu: goto label_2601ac;
        case 0x2601b0u: goto label_2601b0;
        case 0x2601b4u: goto label_2601b4;
        case 0x2601b8u: goto label_2601b8;
        case 0x2601bcu: goto label_2601bc;
        case 0x2601c0u: goto label_2601c0;
        case 0x2601c4u: goto label_2601c4;
        case 0x2601c8u: goto label_2601c8;
        case 0x2601ccu: goto label_2601cc;
        case 0x2601d0u: goto label_2601d0;
        case 0x2601d4u: goto label_2601d4;
        case 0x2601d8u: goto label_2601d8;
        case 0x2601dcu: goto label_2601dc;
        case 0x2601e0u: goto label_2601e0;
        case 0x2601e4u: goto label_2601e4;
        case 0x2601e8u: goto label_2601e8;
        case 0x2601ecu: goto label_2601ec;
        case 0x2601f0u: goto label_2601f0;
        case 0x2601f4u: goto label_2601f4;
        case 0x2601f8u: goto label_2601f8;
        case 0x2601fcu: goto label_2601fc;
        case 0x260200u: goto label_260200;
        case 0x260204u: goto label_260204;
        case 0x260208u: goto label_260208;
        case 0x26020cu: goto label_26020c;
        case 0x260210u: goto label_260210;
        case 0x260214u: goto label_260214;
        case 0x260218u: goto label_260218;
        case 0x26021cu: goto label_26021c;
        case 0x260220u: goto label_260220;
        case 0x260224u: goto label_260224;
        case 0x260228u: goto label_260228;
        case 0x26022cu: goto label_26022c;
        case 0x260230u: goto label_260230;
        case 0x260234u: goto label_260234;
        case 0x260238u: goto label_260238;
        case 0x26023cu: goto label_26023c;
        case 0x260240u: goto label_260240;
        case 0x260244u: goto label_260244;
        case 0x260248u: goto label_260248;
        case 0x26024cu: goto label_26024c;
        case 0x260250u: goto label_260250;
        case 0x260254u: goto label_260254;
        case 0x260258u: goto label_260258;
        case 0x26025cu: goto label_26025c;
        case 0x260260u: goto label_260260;
        case 0x260264u: goto label_260264;
        case 0x260268u: goto label_260268;
        case 0x26026cu: goto label_26026c;
        case 0x260270u: goto label_260270;
        case 0x260274u: goto label_260274;
        case 0x260278u: goto label_260278;
        case 0x26027cu: goto label_26027c;
        case 0x260280u: goto label_260280;
        case 0x260284u: goto label_260284;
        case 0x260288u: goto label_260288;
        case 0x26028cu: goto label_26028c;
        case 0x260290u: goto label_260290;
        case 0x260294u: goto label_260294;
        case 0x260298u: goto label_260298;
        case 0x26029cu: goto label_26029c;
        case 0x2602a0u: goto label_2602a0;
        case 0x2602a4u: goto label_2602a4;
        case 0x2602a8u: goto label_2602a8;
        case 0x2602acu: goto label_2602ac;
        case 0x2602b0u: goto label_2602b0;
        case 0x2602b4u: goto label_2602b4;
        case 0x2602b8u: goto label_2602b8;
        case 0x2602bcu: goto label_2602bc;
        case 0x2602c0u: goto label_2602c0;
        case 0x2602c4u: goto label_2602c4;
        case 0x2602c8u: goto label_2602c8;
        case 0x2602ccu: goto label_2602cc;
        case 0x2602d0u: goto label_2602d0;
        case 0x2602d4u: goto label_2602d4;
        case 0x2602d8u: goto label_2602d8;
        case 0x2602dcu: goto label_2602dc;
        case 0x2602e0u: goto label_2602e0;
        case 0x2602e4u: goto label_2602e4;
        case 0x2602e8u: goto label_2602e8;
        case 0x2602ecu: goto label_2602ec;
        case 0x2602f0u: goto label_2602f0;
        case 0x2602f4u: goto label_2602f4;
        case 0x2602f8u: goto label_2602f8;
        case 0x2602fcu: goto label_2602fc;
        case 0x260300u: goto label_260300;
        case 0x260304u: goto label_260304;
        case 0x260308u: goto label_260308;
        case 0x26030cu: goto label_26030c;
        case 0x260310u: goto label_260310;
        case 0x260314u: goto label_260314;
        case 0x260318u: goto label_260318;
        case 0x26031cu: goto label_26031c;
        case 0x260320u: goto label_260320;
        case 0x260324u: goto label_260324;
        case 0x260328u: goto label_260328;
        case 0x26032cu: goto label_26032c;
        case 0x260330u: goto label_260330;
        case 0x260334u: goto label_260334;
        case 0x260338u: goto label_260338;
        case 0x26033cu: goto label_26033c;
        case 0x260340u: goto label_260340;
        case 0x260344u: goto label_260344;
        case 0x260348u: goto label_260348;
        case 0x26034cu: goto label_26034c;
        case 0x260350u: goto label_260350;
        case 0x260354u: goto label_260354;
        case 0x260358u: goto label_260358;
        case 0x26035cu: goto label_26035c;
        case 0x260360u: goto label_260360;
        case 0x260364u: goto label_260364;
        case 0x260368u: goto label_260368;
        case 0x26036cu: goto label_26036c;
        case 0x260370u: goto label_260370;
        case 0x260374u: goto label_260374;
        case 0x260378u: goto label_260378;
        case 0x26037cu: goto label_26037c;
        case 0x260380u: goto label_260380;
        case 0x260384u: goto label_260384;
        case 0x260388u: goto label_260388;
        case 0x26038cu: goto label_26038c;
        case 0x260390u: goto label_260390;
        case 0x260394u: goto label_260394;
        case 0x260398u: goto label_260398;
        case 0x26039cu: goto label_26039c;
        case 0x2603a0u: goto label_2603a0;
        case 0x2603a4u: goto label_2603a4;
        case 0x2603a8u: goto label_2603a8;
        case 0x2603acu: goto label_2603ac;
        case 0x2603b0u: goto label_2603b0;
        case 0x2603b4u: goto label_2603b4;
        case 0x2603b8u: goto label_2603b8;
        case 0x2603bcu: goto label_2603bc;
        case 0x2603c0u: goto label_2603c0;
        case 0x2603c4u: goto label_2603c4;
        case 0x2603c8u: goto label_2603c8;
        case 0x2603ccu: goto label_2603cc;
        case 0x2603d0u: goto label_2603d0;
        case 0x2603d4u: goto label_2603d4;
        case 0x2603d8u: goto label_2603d8;
        case 0x2603dcu: goto label_2603dc;
        case 0x2603e0u: goto label_2603e0;
        case 0x2603e4u: goto label_2603e4;
        case 0x2603e8u: goto label_2603e8;
        case 0x2603ecu: goto label_2603ec;
        case 0x2603f0u: goto label_2603f0;
        case 0x2603f4u: goto label_2603f4;
        case 0x2603f8u: goto label_2603f8;
        case 0x2603fcu: goto label_2603fc;
        case 0x260400u: goto label_260400;
        case 0x260404u: goto label_260404;
        case 0x260408u: goto label_260408;
        case 0x26040cu: goto label_26040c;
        case 0x260410u: goto label_260410;
        case 0x260414u: goto label_260414;
        case 0x260418u: goto label_260418;
        case 0x26041cu: goto label_26041c;
        case 0x260420u: goto label_260420;
        case 0x260424u: goto label_260424;
        case 0x260428u: goto label_260428;
        case 0x26042cu: goto label_26042c;
        case 0x260430u: goto label_260430;
        case 0x260434u: goto label_260434;
        case 0x260438u: goto label_260438;
        case 0x26043cu: goto label_26043c;
        case 0x260440u: goto label_260440;
        case 0x260444u: goto label_260444;
        case 0x260448u: goto label_260448;
        case 0x26044cu: goto label_26044c;
        case 0x260450u: goto label_260450;
        case 0x260454u: goto label_260454;
        case 0x260458u: goto label_260458;
        case 0x26045cu: goto label_26045c;
        case 0x260460u: goto label_260460;
        case 0x260464u: goto label_260464;
        case 0x260468u: goto label_260468;
        case 0x26046cu: goto label_26046c;
        case 0x260470u: goto label_260470;
        case 0x260474u: goto label_260474;
        case 0x260478u: goto label_260478;
        case 0x26047cu: goto label_26047c;
        case 0x260480u: goto label_260480;
        case 0x260484u: goto label_260484;
        case 0x260488u: goto label_260488;
        case 0x26048cu: goto label_26048c;
        case 0x260490u: goto label_260490;
        case 0x260494u: goto label_260494;
        case 0x260498u: goto label_260498;
        case 0x26049cu: goto label_26049c;
        case 0x2604a0u: goto label_2604a0;
        case 0x2604a4u: goto label_2604a4;
        case 0x2604a8u: goto label_2604a8;
        case 0x2604acu: goto label_2604ac;
        case 0x2604b0u: goto label_2604b0;
        case 0x2604b4u: goto label_2604b4;
        case 0x2604b8u: goto label_2604b8;
        case 0x2604bcu: goto label_2604bc;
        case 0x2604c0u: goto label_2604c0;
        case 0x2604c4u: goto label_2604c4;
        case 0x2604c8u: goto label_2604c8;
        case 0x2604ccu: goto label_2604cc;
        case 0x2604d0u: goto label_2604d0;
        case 0x2604d4u: goto label_2604d4;
        case 0x2604d8u: goto label_2604d8;
        case 0x2604dcu: goto label_2604dc;
        case 0x2604e0u: goto label_2604e0;
        case 0x2604e4u: goto label_2604e4;
        case 0x2604e8u: goto label_2604e8;
        case 0x2604ecu: goto label_2604ec;
        case 0x2604f0u: goto label_2604f0;
        case 0x2604f4u: goto label_2604f4;
        case 0x2604f8u: goto label_2604f8;
        case 0x2604fcu: goto label_2604fc;
        case 0x260500u: goto label_260500;
        case 0x260504u: goto label_260504;
        case 0x260508u: goto label_260508;
        case 0x26050cu: goto label_26050c;
        case 0x260510u: goto label_260510;
        case 0x260514u: goto label_260514;
        case 0x260518u: goto label_260518;
        case 0x26051cu: goto label_26051c;
        case 0x260520u: goto label_260520;
        case 0x260524u: goto label_260524;
        case 0x260528u: goto label_260528;
        case 0x26052cu: goto label_26052c;
        case 0x260530u: goto label_260530;
        case 0x260534u: goto label_260534;
        case 0x260538u: goto label_260538;
        case 0x26053cu: goto label_26053c;
        case 0x260540u: goto label_260540;
        case 0x260544u: goto label_260544;
        case 0x260548u: goto label_260548;
        case 0x26054cu: goto label_26054c;
        case 0x260550u: goto label_260550;
        case 0x260554u: goto label_260554;
        case 0x260558u: goto label_260558;
        case 0x26055cu: goto label_26055c;
        case 0x260560u: goto label_260560;
        case 0x260564u: goto label_260564;
        case 0x260568u: goto label_260568;
        case 0x26056cu: goto label_26056c;
        case 0x260570u: goto label_260570;
        case 0x260574u: goto label_260574;
        case 0x260578u: goto label_260578;
        case 0x26057cu: goto label_26057c;
        case 0x260580u: goto label_260580;
        case 0x260584u: goto label_260584;
        case 0x260588u: goto label_260588;
        case 0x26058cu: goto label_26058c;
        case 0x260590u: goto label_260590;
        case 0x260594u: goto label_260594;
        case 0x260598u: goto label_260598;
        case 0x26059cu: goto label_26059c;
        case 0x2605a0u: goto label_2605a0;
        case 0x2605a4u: goto label_2605a4;
        case 0x2605a8u: goto label_2605a8;
        case 0x2605acu: goto label_2605ac;
        case 0x2605b0u: goto label_2605b0;
        case 0x2605b4u: goto label_2605b4;
        case 0x2605b8u: goto label_2605b8;
        case 0x2605bcu: goto label_2605bc;
        case 0x2605c0u: goto label_2605c0;
        case 0x2605c4u: goto label_2605c4;
        case 0x2605c8u: goto label_2605c8;
        case 0x2605ccu: goto label_2605cc;
        case 0x2605d0u: goto label_2605d0;
        case 0x2605d4u: goto label_2605d4;
        case 0x2605d8u: goto label_2605d8;
        case 0x2605dcu: goto label_2605dc;
        case 0x2605e0u: goto label_2605e0;
        case 0x2605e4u: goto label_2605e4;
        case 0x2605e8u: goto label_2605e8;
        case 0x2605ecu: goto label_2605ec;
        case 0x2605f0u: goto label_2605f0;
        case 0x2605f4u: goto label_2605f4;
        case 0x2605f8u: goto label_2605f8;
        case 0x2605fcu: goto label_2605fc;
        case 0x260600u: goto label_260600;
        case 0x260604u: goto label_260604;
        case 0x260608u: goto label_260608;
        case 0x26060cu: goto label_26060c;
        case 0x260610u: goto label_260610;
        case 0x260614u: goto label_260614;
        case 0x260618u: goto label_260618;
        case 0x26061cu: goto label_26061c;
        case 0x260620u: goto label_260620;
        case 0x260624u: goto label_260624;
        case 0x260628u: goto label_260628;
        case 0x26062cu: goto label_26062c;
        case 0x260630u: goto label_260630;
        case 0x260634u: goto label_260634;
        case 0x260638u: goto label_260638;
        case 0x26063cu: goto label_26063c;
        case 0x260640u: goto label_260640;
        case 0x260644u: goto label_260644;
        case 0x260648u: goto label_260648;
        case 0x26064cu: goto label_26064c;
        case 0x260650u: goto label_260650;
        case 0x260654u: goto label_260654;
        case 0x260658u: goto label_260658;
        case 0x26065cu: goto label_26065c;
        case 0x260660u: goto label_260660;
        case 0x260664u: goto label_260664;
        case 0x260668u: goto label_260668;
        case 0x26066cu: goto label_26066c;
        case 0x260670u: goto label_260670;
        case 0x260674u: goto label_260674;
        case 0x260678u: goto label_260678;
        case 0x26067cu: goto label_26067c;
        case 0x260680u: goto label_260680;
        case 0x260684u: goto label_260684;
        case 0x260688u: goto label_260688;
        case 0x26068cu: goto label_26068c;
        case 0x260690u: goto label_260690;
        case 0x260694u: goto label_260694;
        case 0x260698u: goto label_260698;
        case 0x26069cu: goto label_26069c;
        case 0x2606a0u: goto label_2606a0;
        case 0x2606a4u: goto label_2606a4;
        case 0x2606a8u: goto label_2606a8;
        case 0x2606acu: goto label_2606ac;
        case 0x2606b0u: goto label_2606b0;
        case 0x2606b4u: goto label_2606b4;
        case 0x2606b8u: goto label_2606b8;
        case 0x2606bcu: goto label_2606bc;
        case 0x2606c0u: goto label_2606c0;
        case 0x2606c4u: goto label_2606c4;
        case 0x2606c8u: goto label_2606c8;
        case 0x2606ccu: goto label_2606cc;
        case 0x2606d0u: goto label_2606d0;
        case 0x2606d4u: goto label_2606d4;
        case 0x2606d8u: goto label_2606d8;
        case 0x2606dcu: goto label_2606dc;
        case 0x2606e0u: goto label_2606e0;
        case 0x2606e4u: goto label_2606e4;
        case 0x2606e8u: goto label_2606e8;
        case 0x2606ecu: goto label_2606ec;
        case 0x2606f0u: goto label_2606f0;
        case 0x2606f4u: goto label_2606f4;
        case 0x2606f8u: goto label_2606f8;
        case 0x2606fcu: goto label_2606fc;
        case 0x260700u: goto label_260700;
        case 0x260704u: goto label_260704;
        case 0x260708u: goto label_260708;
        case 0x26070cu: goto label_26070c;
        case 0x260710u: goto label_260710;
        case 0x260714u: goto label_260714;
        case 0x260718u: goto label_260718;
        case 0x26071cu: goto label_26071c;
        case 0x260720u: goto label_260720;
        case 0x260724u: goto label_260724;
        case 0x260728u: goto label_260728;
        case 0x26072cu: goto label_26072c;
        case 0x260730u: goto label_260730;
        case 0x260734u: goto label_260734;
        case 0x260738u: goto label_260738;
        case 0x26073cu: goto label_26073c;
        case 0x260740u: goto label_260740;
        case 0x260744u: goto label_260744;
        case 0x260748u: goto label_260748;
        case 0x26074cu: goto label_26074c;
        case 0x260750u: goto label_260750;
        case 0x260754u: goto label_260754;
        case 0x260758u: goto label_260758;
        case 0x26075cu: goto label_26075c;
        case 0x260760u: goto label_260760;
        case 0x260764u: goto label_260764;
        case 0x260768u: goto label_260768;
        case 0x26076cu: goto label_26076c;
        case 0x260770u: goto label_260770;
        case 0x260774u: goto label_260774;
        case 0x260778u: goto label_260778;
        case 0x26077cu: goto label_26077c;
        case 0x260780u: goto label_260780;
        case 0x260784u: goto label_260784;
        case 0x260788u: goto label_260788;
        case 0x26078cu: goto label_26078c;
        case 0x260790u: goto label_260790;
        case 0x260794u: goto label_260794;
        case 0x260798u: goto label_260798;
        case 0x26079cu: goto label_26079c;
        case 0x2607a0u: goto label_2607a0;
        case 0x2607a4u: goto label_2607a4;
        case 0x2607a8u: goto label_2607a8;
        case 0x2607acu: goto label_2607ac;
        case 0x2607b0u: goto label_2607b0;
        case 0x2607b4u: goto label_2607b4;
        case 0x2607b8u: goto label_2607b8;
        case 0x2607bcu: goto label_2607bc;
        case 0x2607c0u: goto label_2607c0;
        case 0x2607c4u: goto label_2607c4;
        case 0x2607c8u: goto label_2607c8;
        case 0x2607ccu: goto label_2607cc;
        case 0x2607d0u: goto label_2607d0;
        case 0x2607d4u: goto label_2607d4;
        case 0x2607d8u: goto label_2607d8;
        case 0x2607dcu: goto label_2607dc;
        case 0x2607e0u: goto label_2607e0;
        case 0x2607e4u: goto label_2607e4;
        case 0x2607e8u: goto label_2607e8;
        case 0x2607ecu: goto label_2607ec;
        case 0x2607f0u: goto label_2607f0;
        case 0x2607f4u: goto label_2607f4;
        case 0x2607f8u: goto label_2607f8;
        case 0x2607fcu: goto label_2607fc;
        case 0x260800u: goto label_260800;
        case 0x260804u: goto label_260804;
        case 0x260808u: goto label_260808;
        case 0x26080cu: goto label_26080c;
        case 0x260810u: goto label_260810;
        case 0x260814u: goto label_260814;
        case 0x260818u: goto label_260818;
        case 0x26081cu: goto label_26081c;
        case 0x260820u: goto label_260820;
        case 0x260824u: goto label_260824;
        case 0x260828u: goto label_260828;
        case 0x26082cu: goto label_26082c;
        case 0x260830u: goto label_260830;
        case 0x260834u: goto label_260834;
        case 0x260838u: goto label_260838;
        case 0x26083cu: goto label_26083c;
        case 0x260840u: goto label_260840;
        case 0x260844u: goto label_260844;
        case 0x260848u: goto label_260848;
        case 0x26084cu: goto label_26084c;
        case 0x260850u: goto label_260850;
        case 0x260854u: goto label_260854;
        case 0x260858u: goto label_260858;
        case 0x26085cu: goto label_26085c;
        case 0x260860u: goto label_260860;
        case 0x260864u: goto label_260864;
        case 0x260868u: goto label_260868;
        case 0x26086cu: goto label_26086c;
        case 0x260870u: goto label_260870;
        case 0x260874u: goto label_260874;
        case 0x260878u: goto label_260878;
        case 0x26087cu: goto label_26087c;
        case 0x260880u: goto label_260880;
        case 0x260884u: goto label_260884;
        case 0x260888u: goto label_260888;
        case 0x26088cu: goto label_26088c;
        case 0x260890u: goto label_260890;
        case 0x260894u: goto label_260894;
        case 0x260898u: goto label_260898;
        case 0x26089cu: goto label_26089c;
        case 0x2608a0u: goto label_2608a0;
        case 0x2608a4u: goto label_2608a4;
        case 0x2608a8u: goto label_2608a8;
        case 0x2608acu: goto label_2608ac;
        case 0x2608b0u: goto label_2608b0;
        case 0x2608b4u: goto label_2608b4;
        case 0x2608b8u: goto label_2608b8;
        case 0x2608bcu: goto label_2608bc;
        case 0x2608c0u: goto label_2608c0;
        case 0x2608c4u: goto label_2608c4;
        case 0x2608c8u: goto label_2608c8;
        case 0x2608ccu: goto label_2608cc;
        case 0x2608d0u: goto label_2608d0;
        case 0x2608d4u: goto label_2608d4;
        case 0x2608d8u: goto label_2608d8;
        case 0x2608dcu: goto label_2608dc;
        case 0x2608e0u: goto label_2608e0;
        case 0x2608e4u: goto label_2608e4;
        case 0x2608e8u: goto label_2608e8;
        case 0x2608ecu: goto label_2608ec;
        case 0x2608f0u: goto label_2608f0;
        case 0x2608f4u: goto label_2608f4;
        case 0x2608f8u: goto label_2608f8;
        case 0x2608fcu: goto label_2608fc;
        case 0x260900u: goto label_260900;
        case 0x260904u: goto label_260904;
        case 0x260908u: goto label_260908;
        case 0x26090cu: goto label_26090c;
        case 0x260910u: goto label_260910;
        case 0x260914u: goto label_260914;
        case 0x260918u: goto label_260918;
        case 0x26091cu: goto label_26091c;
        case 0x260920u: goto label_260920;
        case 0x260924u: goto label_260924;
        case 0x260928u: goto label_260928;
        case 0x26092cu: goto label_26092c;
        case 0x260930u: goto label_260930;
        case 0x260934u: goto label_260934;
        case 0x260938u: goto label_260938;
        case 0x26093cu: goto label_26093c;
        case 0x260940u: goto label_260940;
        case 0x260944u: goto label_260944;
        case 0x260948u: goto label_260948;
        case 0x26094cu: goto label_26094c;
        case 0x260950u: goto label_260950;
        case 0x260954u: goto label_260954;
        case 0x260958u: goto label_260958;
        case 0x26095cu: goto label_26095c;
        case 0x260960u: goto label_260960;
        case 0x260964u: goto label_260964;
        case 0x260968u: goto label_260968;
        case 0x26096cu: goto label_26096c;
        case 0x260970u: goto label_260970;
        case 0x260974u: goto label_260974;
        case 0x260978u: goto label_260978;
        case 0x26097cu: goto label_26097c;
        case 0x260980u: goto label_260980;
        case 0x260984u: goto label_260984;
        case 0x260988u: goto label_260988;
        case 0x26098cu: goto label_26098c;
        case 0x260990u: goto label_260990;
        case 0x260994u: goto label_260994;
        case 0x260998u: goto label_260998;
        case 0x26099cu: goto label_26099c;
        case 0x2609a0u: goto label_2609a0;
        case 0x2609a4u: goto label_2609a4;
        case 0x2609a8u: goto label_2609a8;
        case 0x2609acu: goto label_2609ac;
        case 0x2609b0u: goto label_2609b0;
        case 0x2609b4u: goto label_2609b4;
        case 0x2609b8u: goto label_2609b8;
        case 0x2609bcu: goto label_2609bc;
        case 0x2609c0u: goto label_2609c0;
        case 0x2609c4u: goto label_2609c4;
        case 0x2609c8u: goto label_2609c8;
        case 0x2609ccu: goto label_2609cc;
        case 0x2609d0u: goto label_2609d0;
        case 0x2609d4u: goto label_2609d4;
        case 0x2609d8u: goto label_2609d8;
        case 0x2609dcu: goto label_2609dc;
        case 0x2609e0u: goto label_2609e0;
        case 0x2609e4u: goto label_2609e4;
        case 0x2609e8u: goto label_2609e8;
        case 0x2609ecu: goto label_2609ec;
        case 0x2609f0u: goto label_2609f0;
        case 0x2609f4u: goto label_2609f4;
        case 0x2609f8u: goto label_2609f8;
        case 0x2609fcu: goto label_2609fc;
        case 0x260a00u: goto label_260a00;
        case 0x260a04u: goto label_260a04;
        case 0x260a08u: goto label_260a08;
        case 0x260a0cu: goto label_260a0c;
        case 0x260a10u: goto label_260a10;
        case 0x260a14u: goto label_260a14;
        case 0x260a18u: goto label_260a18;
        case 0x260a1cu: goto label_260a1c;
        case 0x260a20u: goto label_260a20;
        case 0x260a24u: goto label_260a24;
        case 0x260a28u: goto label_260a28;
        case 0x260a2cu: goto label_260a2c;
        case 0x260a30u: goto label_260a30;
        case 0x260a34u: goto label_260a34;
        case 0x260a38u: goto label_260a38;
        case 0x260a3cu: goto label_260a3c;
        case 0x260a40u: goto label_260a40;
        case 0x260a44u: goto label_260a44;
        case 0x260a48u: goto label_260a48;
        case 0x260a4cu: goto label_260a4c;
        case 0x260a50u: goto label_260a50;
        case 0x260a54u: goto label_260a54;
        case 0x260a58u: goto label_260a58;
        case 0x260a5cu: goto label_260a5c;
        case 0x260a60u: goto label_260a60;
        case 0x260a64u: goto label_260a64;
        case 0x260a68u: goto label_260a68;
        case 0x260a6cu: goto label_260a6c;
        case 0x260a70u: goto label_260a70;
        case 0x260a74u: goto label_260a74;
        case 0x260a78u: goto label_260a78;
        case 0x260a7cu: goto label_260a7c;
        case 0x260a80u: goto label_260a80;
        case 0x260a84u: goto label_260a84;
        case 0x260a88u: goto label_260a88;
        case 0x260a8cu: goto label_260a8c;
        case 0x260a90u: goto label_260a90;
        case 0x260a94u: goto label_260a94;
        case 0x260a98u: goto label_260a98;
        case 0x260a9cu: goto label_260a9c;
        case 0x260aa0u: goto label_260aa0;
        case 0x260aa4u: goto label_260aa4;
        case 0x260aa8u: goto label_260aa8;
        case 0x260aacu: goto label_260aac;
        case 0x260ab0u: goto label_260ab0;
        case 0x260ab4u: goto label_260ab4;
        case 0x260ab8u: goto label_260ab8;
        case 0x260abcu: goto label_260abc;
        case 0x260ac0u: goto label_260ac0;
        case 0x260ac4u: goto label_260ac4;
        case 0x260ac8u: goto label_260ac8;
        case 0x260accu: goto label_260acc;
        case 0x260ad0u: goto label_260ad0;
        case 0x260ad4u: goto label_260ad4;
        case 0x260ad8u: goto label_260ad8;
        case 0x260adcu: goto label_260adc;
        case 0x260ae0u: goto label_260ae0;
        case 0x260ae4u: goto label_260ae4;
        case 0x260ae8u: goto label_260ae8;
        case 0x260aecu: goto label_260aec;
        case 0x260af0u: goto label_260af0;
        case 0x260af4u: goto label_260af4;
        case 0x260af8u: goto label_260af8;
        case 0x260afcu: goto label_260afc;
        case 0x260b00u: goto label_260b00;
        case 0x260b04u: goto label_260b04;
        case 0x260b08u: goto label_260b08;
        case 0x260b0cu: goto label_260b0c;
        case 0x260b10u: goto label_260b10;
        case 0x260b14u: goto label_260b14;
        case 0x260b18u: goto label_260b18;
        case 0x260b1cu: goto label_260b1c;
        case 0x260b20u: goto label_260b20;
        case 0x260b24u: goto label_260b24;
        case 0x260b28u: goto label_260b28;
        case 0x260b2cu: goto label_260b2c;
        case 0x260b30u: goto label_260b30;
        case 0x260b34u: goto label_260b34;
        case 0x260b38u: goto label_260b38;
        case 0x260b3cu: goto label_260b3c;
        case 0x260b40u: goto label_260b40;
        case 0x260b44u: goto label_260b44;
        case 0x260b48u: goto label_260b48;
        case 0x260b4cu: goto label_260b4c;
        case 0x260b50u: goto label_260b50;
        case 0x260b54u: goto label_260b54;
        case 0x260b58u: goto label_260b58;
        case 0x260b5cu: goto label_260b5c;
        case 0x260b60u: goto label_260b60;
        case 0x260b64u: goto label_260b64;
        case 0x260b68u: goto label_260b68;
        case 0x260b6cu: goto label_260b6c;
        case 0x260b70u: goto label_260b70;
        case 0x260b74u: goto label_260b74;
        case 0x260b78u: goto label_260b78;
        case 0x260b7cu: goto label_260b7c;
        case 0x260b80u: goto label_260b80;
        case 0x260b84u: goto label_260b84;
        case 0x260b88u: goto label_260b88;
        case 0x260b8cu: goto label_260b8c;
        case 0x260b90u: goto label_260b90;
        case 0x260b94u: goto label_260b94;
        case 0x260b98u: goto label_260b98;
        case 0x260b9cu: goto label_260b9c;
        case 0x260ba0u: goto label_260ba0;
        case 0x260ba4u: goto label_260ba4;
        case 0x260ba8u: goto label_260ba8;
        case 0x260bacu: goto label_260bac;
        case 0x260bb0u: goto label_260bb0;
        case 0x260bb4u: goto label_260bb4;
        case 0x260bb8u: goto label_260bb8;
        case 0x260bbcu: goto label_260bbc;
        case 0x260bc0u: goto label_260bc0;
        case 0x260bc4u: goto label_260bc4;
        case 0x260bc8u: goto label_260bc8;
        case 0x260bccu: goto label_260bcc;
        case 0x260bd0u: goto label_260bd0;
        case 0x260bd4u: goto label_260bd4;
        case 0x260bd8u: goto label_260bd8;
        case 0x260bdcu: goto label_260bdc;
        case 0x260be0u: goto label_260be0;
        case 0x260be4u: goto label_260be4;
        case 0x260be8u: goto label_260be8;
        case 0x260becu: goto label_260bec;
        case 0x260bf0u: goto label_260bf0;
        case 0x260bf4u: goto label_260bf4;
        case 0x260bf8u: goto label_260bf8;
        case 0x260bfcu: goto label_260bfc;
        case 0x260c00u: goto label_260c00;
        case 0x260c04u: goto label_260c04;
        case 0x260c08u: goto label_260c08;
        case 0x260c0cu: goto label_260c0c;
        case 0x260c10u: goto label_260c10;
        case 0x260c14u: goto label_260c14;
        case 0x260c18u: goto label_260c18;
        case 0x260c1cu: goto label_260c1c;
        case 0x260c20u: goto label_260c20;
        case 0x260c24u: goto label_260c24;
        case 0x260c28u: goto label_260c28;
        case 0x260c2cu: goto label_260c2c;
        case 0x260c30u: goto label_260c30;
        case 0x260c34u: goto label_260c34;
        case 0x260c38u: goto label_260c38;
        case 0x260c3cu: goto label_260c3c;
        case 0x260c40u: goto label_260c40;
        case 0x260c44u: goto label_260c44;
        case 0x260c48u: goto label_260c48;
        case 0x260c4cu: goto label_260c4c;
        case 0x260c50u: goto label_260c50;
        case 0x260c54u: goto label_260c54;
        case 0x260c58u: goto label_260c58;
        case 0x260c5cu: goto label_260c5c;
        case 0x260c60u: goto label_260c60;
        case 0x260c64u: goto label_260c64;
        case 0x260c68u: goto label_260c68;
        case 0x260c6cu: goto label_260c6c;
        case 0x260c70u: goto label_260c70;
        case 0x260c74u: goto label_260c74;
        case 0x260c78u: goto label_260c78;
        case 0x260c7cu: goto label_260c7c;
        case 0x260c80u: goto label_260c80;
        case 0x260c84u: goto label_260c84;
        case 0x260c88u: goto label_260c88;
        case 0x260c8cu: goto label_260c8c;
        case 0x260c90u: goto label_260c90;
        case 0x260c94u: goto label_260c94;
        case 0x260c98u: goto label_260c98;
        case 0x260c9cu: goto label_260c9c;
        case 0x260ca0u: goto label_260ca0;
        case 0x260ca4u: goto label_260ca4;
        case 0x260ca8u: goto label_260ca8;
        case 0x260cacu: goto label_260cac;
        case 0x260cb0u: goto label_260cb0;
        case 0x260cb4u: goto label_260cb4;
        case 0x260cb8u: goto label_260cb8;
        case 0x260cbcu: goto label_260cbc;
        case 0x260cc0u: goto label_260cc0;
        case 0x260cc4u: goto label_260cc4;
        case 0x260cc8u: goto label_260cc8;
        case 0x260cccu: goto label_260ccc;
        case 0x260cd0u: goto label_260cd0;
        case 0x260cd4u: goto label_260cd4;
        case 0x260cd8u: goto label_260cd8;
        case 0x260cdcu: goto label_260cdc;
        case 0x260ce0u: goto label_260ce0;
        case 0x260ce4u: goto label_260ce4;
        case 0x260ce8u: goto label_260ce8;
        case 0x260cecu: goto label_260cec;
        case 0x260cf0u: goto label_260cf0;
        case 0x260cf4u: goto label_260cf4;
        case 0x260cf8u: goto label_260cf8;
        case 0x260cfcu: goto label_260cfc;
        case 0x260d00u: goto label_260d00;
        case 0x260d04u: goto label_260d04;
        case 0x260d08u: goto label_260d08;
        case 0x260d0cu: goto label_260d0c;
        case 0x260d10u: goto label_260d10;
        case 0x260d14u: goto label_260d14;
        case 0x260d18u: goto label_260d18;
        case 0x260d1cu: goto label_260d1c;
        case 0x260d20u: goto label_260d20;
        case 0x260d24u: goto label_260d24;
        case 0x260d28u: goto label_260d28;
        case 0x260d2cu: goto label_260d2c;
        case 0x260d30u: goto label_260d30;
        case 0x260d34u: goto label_260d34;
        case 0x260d38u: goto label_260d38;
        case 0x260d3cu: goto label_260d3c;
        case 0x260d40u: goto label_260d40;
        case 0x260d44u: goto label_260d44;
        case 0x260d48u: goto label_260d48;
        case 0x260d4cu: goto label_260d4c;
        case 0x260d50u: goto label_260d50;
        case 0x260d54u: goto label_260d54;
        case 0x260d58u: goto label_260d58;
        case 0x260d5cu: goto label_260d5c;
        case 0x260d60u: goto label_260d60;
        case 0x260d64u: goto label_260d64;
        case 0x260d68u: goto label_260d68;
        case 0x260d6cu: goto label_260d6c;
        case 0x260d70u: goto label_260d70;
        case 0x260d74u: goto label_260d74;
        case 0x260d78u: goto label_260d78;
        case 0x260d7cu: goto label_260d7c;
        case 0x260d80u: goto label_260d80;
        case 0x260d84u: goto label_260d84;
        case 0x260d88u: goto label_260d88;
        case 0x260d8cu: goto label_260d8c;
        case 0x260d90u: goto label_260d90;
        case 0x260d94u: goto label_260d94;
        case 0x260d98u: goto label_260d98;
        case 0x260d9cu: goto label_260d9c;
        case 0x260da0u: goto label_260da0;
        case 0x260da4u: goto label_260da4;
        case 0x260da8u: goto label_260da8;
        case 0x260dacu: goto label_260dac;
        case 0x260db0u: goto label_260db0;
        case 0x260db4u: goto label_260db4;
        case 0x260db8u: goto label_260db8;
        case 0x260dbcu: goto label_260dbc;
        case 0x260dc0u: goto label_260dc0;
        case 0x260dc4u: goto label_260dc4;
        case 0x260dc8u: goto label_260dc8;
        case 0x260dccu: goto label_260dcc;
        case 0x260dd0u: goto label_260dd0;
        case 0x260dd4u: goto label_260dd4;
        case 0x260dd8u: goto label_260dd8;
        case 0x260ddcu: goto label_260ddc;
        case 0x260de0u: goto label_260de0;
        case 0x260de4u: goto label_260de4;
        case 0x260de8u: goto label_260de8;
        case 0x260decu: goto label_260dec;
        case 0x260df0u: goto label_260df0;
        case 0x260df4u: goto label_260df4;
        case 0x260df8u: goto label_260df8;
        case 0x260dfcu: goto label_260dfc;
        case 0x260e00u: goto label_260e00;
        case 0x260e04u: goto label_260e04;
        case 0x260e08u: goto label_260e08;
        case 0x260e0cu: goto label_260e0c;
        case 0x260e10u: goto label_260e10;
        case 0x260e14u: goto label_260e14;
        case 0x260e18u: goto label_260e18;
        case 0x260e1cu: goto label_260e1c;
        case 0x260e20u: goto label_260e20;
        case 0x260e24u: goto label_260e24;
        case 0x260e28u: goto label_260e28;
        case 0x260e2cu: goto label_260e2c;
        case 0x260e30u: goto label_260e30;
        case 0x260e34u: goto label_260e34;
        case 0x260e38u: goto label_260e38;
        case 0x260e3cu: goto label_260e3c;
        case 0x260e40u: goto label_260e40;
        case 0x260e44u: goto label_260e44;
        case 0x260e48u: goto label_260e48;
        case 0x260e4cu: goto label_260e4c;
        case 0x260e50u: goto label_260e50;
        case 0x260e54u: goto label_260e54;
        case 0x260e58u: goto label_260e58;
        case 0x260e5cu: goto label_260e5c;
        case 0x260e60u: goto label_260e60;
        case 0x260e64u: goto label_260e64;
        case 0x260e68u: goto label_260e68;
        case 0x260e6cu: goto label_260e6c;
        case 0x260e70u: goto label_260e70;
        case 0x260e74u: goto label_260e74;
        case 0x260e78u: goto label_260e78;
        case 0x260e7cu: goto label_260e7c;
        case 0x260e80u: goto label_260e80;
        case 0x260e84u: goto label_260e84;
        case 0x260e88u: goto label_260e88;
        case 0x260e8cu: goto label_260e8c;
        case 0x260e90u: goto label_260e90;
        case 0x260e94u: goto label_260e94;
        case 0x260e98u: goto label_260e98;
        case 0x260e9cu: goto label_260e9c;
        case 0x260ea0u: goto label_260ea0;
        case 0x260ea4u: goto label_260ea4;
        case 0x260ea8u: goto label_260ea8;
        case 0x260eacu: goto label_260eac;
        case 0x260eb0u: goto label_260eb0;
        case 0x260eb4u: goto label_260eb4;
        case 0x260eb8u: goto label_260eb8;
        case 0x260ebcu: goto label_260ebc;
        case 0x260ec0u: goto label_260ec0;
        case 0x260ec4u: goto label_260ec4;
        case 0x260ec8u: goto label_260ec8;
        case 0x260eccu: goto label_260ecc;
        case 0x260ed0u: goto label_260ed0;
        case 0x260ed4u: goto label_260ed4;
        case 0x260ed8u: goto label_260ed8;
        case 0x260edcu: goto label_260edc;
        case 0x260ee0u: goto label_260ee0;
        case 0x260ee4u: goto label_260ee4;
        case 0x260ee8u: goto label_260ee8;
        case 0x260eecu: goto label_260eec;
        case 0x260ef0u: goto label_260ef0;
        case 0x260ef4u: goto label_260ef4;
        case 0x260ef8u: goto label_260ef8;
        case 0x260efcu: goto label_260efc;
        case 0x260f00u: goto label_260f00;
        case 0x260f04u: goto label_260f04;
        case 0x260f08u: goto label_260f08;
        case 0x260f0cu: goto label_260f0c;
        case 0x260f10u: goto label_260f10;
        case 0x260f14u: goto label_260f14;
        case 0x260f18u: goto label_260f18;
        case 0x260f1cu: goto label_260f1c;
        case 0x260f20u: goto label_260f20;
        case 0x260f24u: goto label_260f24;
        case 0x260f28u: goto label_260f28;
        case 0x260f2cu: goto label_260f2c;
        case 0x260f30u: goto label_260f30;
        case 0x260f34u: goto label_260f34;
        case 0x260f38u: goto label_260f38;
        case 0x260f3cu: goto label_260f3c;
        case 0x260f40u: goto label_260f40;
        case 0x260f44u: goto label_260f44;
        case 0x260f48u: goto label_260f48;
        case 0x260f4cu: goto label_260f4c;
        case 0x260f50u: goto label_260f50;
        case 0x260f54u: goto label_260f54;
        case 0x260f58u: goto label_260f58;
        case 0x260f5cu: goto label_260f5c;
        case 0x260f60u: goto label_260f60;
        case 0x260f64u: goto label_260f64;
        case 0x260f68u: goto label_260f68;
        case 0x260f6cu: goto label_260f6c;
        case 0x260f70u: goto label_260f70;
        case 0x260f74u: goto label_260f74;
        case 0x260f78u: goto label_260f78;
        case 0x260f7cu: goto label_260f7c;
        case 0x260f80u: goto label_260f80;
        case 0x260f84u: goto label_260f84;
        case 0x260f88u: goto label_260f88;
        case 0x260f8cu: goto label_260f8c;
        case 0x260f90u: goto label_260f90;
        case 0x260f94u: goto label_260f94;
        case 0x260f98u: goto label_260f98;
        case 0x260f9cu: goto label_260f9c;
        case 0x260fa0u: goto label_260fa0;
        case 0x260fa4u: goto label_260fa4;
        case 0x260fa8u: goto label_260fa8;
        case 0x260facu: goto label_260fac;
        case 0x260fb0u: goto label_260fb0;
        case 0x260fb4u: goto label_260fb4;
        case 0x260fb8u: goto label_260fb8;
        case 0x260fbcu: goto label_260fbc;
        case 0x260fc0u: goto label_260fc0;
        case 0x260fc4u: goto label_260fc4;
        case 0x260fc8u: goto label_260fc8;
        case 0x260fccu: goto label_260fcc;
        default: break;
    }

    ctx->pc = 0x25fd60u;

label_25fd60:
    // 0x25fd60: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x25fd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_25fd64:
    // 0x25fd64: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x25fd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_25fd68:
    // 0x25fd68: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x25fd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_25fd6c:
    // 0x25fd6c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x25fd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_25fd70:
    // 0x25fd70: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x25fd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_25fd74:
    // 0x25fd74: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x25fd74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25fd78:
    // 0x25fd78: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x25fd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_25fd7c:
    // 0x25fd7c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x25fd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_25fd80:
    // 0x25fd80: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25fd80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25fd84:
    // 0x25fd84: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x25fd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_25fd88:
    // 0x25fd88: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25fd88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25fd8c:
    // 0x25fd8c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x25fd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_25fd90:
    // 0x25fd90: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25fd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25fd94:
    // 0x25fd94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25fd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_25fd98:
    // 0x25fd98: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x25fd98u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_25fd9c:
    // 0x25fd9c: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x25fd9cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_25fda0:
    // 0x25fda0: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x25fda0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_25fda4:
    // 0x25fda4: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x25fda4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_25fda8:
    // 0x25fda8: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x25fda8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_25fdac:
    // 0x25fdac: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x25fdacu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_25fdb0:
    // 0x25fdb0: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x25fdb0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_25fdb4:
    // 0x25fdb4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x25fdb4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_25fdb8:
    // 0x25fdb8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x25fdb8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_25fdbc:
    // 0x25fdbc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25fdbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_25fdc0:
    // 0x25fdc0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25fdc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_25fdc4:
    // 0x25fdc4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25fdc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_25fdc8:
    // 0x25fdc8: 0xafa700fc  sw          $a3, 0xFC($sp)
    ctx->pc = 0x25fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 7));
label_25fdcc:
    // 0x25fdcc: 0xafa800f8  sw          $t0, 0xF8($sp)
    ctx->pc = 0x25fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 8));
label_25fdd0:
    // 0x25fdd0: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x25fdd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_25fdd4:
    // 0x25fdd4: 0x2e4082b  sltu        $at, $s7, $a0
    ctx->pc = 0x25fdd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_25fdd8:
    // 0x25fdd8: 0x10200447  beqz        $at, . + 4 + (0x447 << 2)
label_25fddc:
    if (ctx->pc == 0x25FDDCu) {
        ctx->pc = 0x25FDDCu;
            // 0x25fddc: 0xafa400e0  sw          $a0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
        ctx->pc = 0x25FDE0u;
        goto label_25fde0;
    }
    ctx->pc = 0x25FDD8u;
    {
        const bool branch_taken_0x25fdd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FDD8u;
            // 0x25fddc: 0xafa400e0  sw          $a0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdd8) {
            ctx->pc = 0x260EF8u;
            goto label_260ef8;
        }
    }
    ctx->pc = 0x25FDE0u;
label_25fde0:
    // 0x25fde0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_25fde4:
    // 0x25fde4: 0x27be0130  addiu       $fp, $sp, 0x130
    ctx->pc = 0x25fde4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_25fde8:
    // 0x25fde8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25fde8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fdec:
    // 0x25fdec: 0x27b20140  addiu       $s2, $sp, 0x140
    ctx->pc = 0x25fdecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_25fdf0:
    // 0x25fdf0: 0x27b10124  addiu       $s1, $sp, 0x124
    ctx->pc = 0x25fdf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_25fdf4:
    // 0x25fdf4: 0x27b00128  addiu       $s0, $sp, 0x128
    ctx->pc = 0x25fdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_25fdf8:
    // 0x25fdf8: 0x27b6012c  addiu       $s6, $sp, 0x12C
    ctx->pc = 0x25fdf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_25fdfc:
    // 0x25fdfc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x25fdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_25fe00:
    // 0x25fe00: 0x1720c0  sll         $a0, $s7, 3
    ctx->pc = 0x25fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
label_25fe04:
    // 0x25fe04: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x25fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_25fe08:
    // 0x25fe08: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x25fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_25fe0c:
    // 0x25fe0c: 0x90850005  lbu         $a1, 0x5($a0)
    ctx->pc = 0x25fe0cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_25fe10:
    // 0x25fe10: 0x24930004  addiu       $s3, $a0, 0x4
    ctx->pc = 0x25fe10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_25fe14:
    // 0x25fe14: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x25fe14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25fe18:
    // 0x25fe18: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x25fe18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_25fe1c:
    // 0x25fe1c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x25fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_25fe20:
    // 0x25fe20: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25fe24:
    // 0x25fe24: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x25fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25fe28:
    // 0x25fe28: 0x108302f9  beq         $a0, $v1, . + 4 + (0x2F9 << 2)
label_25fe2c:
    if (ctx->pc == 0x25FE2Cu) {
        ctx->pc = 0x25FE2Cu;
            // 0x25fe2c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x25FE30u;
        goto label_25fe30;
    }
    ctx->pc = 0x25FE28u;
    {
        const bool branch_taken_0x25fe28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x25FE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE28u;
            // 0x25fe2c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe28) {
            ctx->pc = 0x260A10u;
            goto label_260a10;
        }
    }
    ctx->pc = 0x25FE30u;
label_25fe30:
    // 0x25fe30: 0x10830233  beq         $a0, $v1, . + 4 + (0x233 << 2)
label_25fe34:
    if (ctx->pc == 0x25FE34u) {
        ctx->pc = 0x25FE38u;
        goto label_25fe38;
    }
    ctx->pc = 0x25FE30u;
    {
        const bool branch_taken_0x25fe30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25fe30) {
            ctx->pc = 0x260700u;
            goto label_260700;
        }
    }
    ctx->pc = 0x25FE38u;
label_25fe38:
    // 0x25fe38: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x25fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_25fe3c:
    // 0x25fe3c: 0x108301a2  beq         $a0, $v1, . + 4 + (0x1A2 << 2)
label_25fe40:
    if (ctx->pc == 0x25FE40u) {
        ctx->pc = 0x25FE40u;
            // 0x25fe40: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x25FE44u;
        goto label_25fe44;
    }
    ctx->pc = 0x25FE3Cu;
    {
        const bool branch_taken_0x25fe3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x25FE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE3Cu;
            // 0x25fe40: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe3c) {
            ctx->pc = 0x2604C8u;
            goto label_2604c8;
        }
    }
    ctx->pc = 0x25FE44u;
label_25fe44:
    // 0x25fe44: 0x108300e0  beq         $a0, $v1, . + 4 + (0xE0 << 2)
label_25fe48:
    if (ctx->pc == 0x25FE48u) {
        ctx->pc = 0x25FE4Cu;
        goto label_25fe4c;
    }
    ctx->pc = 0x25FE44u;
    {
        const bool branch_taken_0x25fe44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25fe44) {
            ctx->pc = 0x2601C8u;
            goto label_2601c8;
        }
    }
    ctx->pc = 0x25FE4Cu;
label_25fe4c:
    // 0x25fe4c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x25fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_25fe50:
    // 0x25fe50: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
label_25fe54:
    if (ctx->pc == 0x25FE54u) {
        ctx->pc = 0x25FE54u;
            // 0x25fe54: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x25FE58u;
        goto label_25fe58;
    }
    ctx->pc = 0x25FE50u;
    {
        const bool branch_taken_0x25fe50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x25FE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE50u;
            // 0x25fe54: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe50) {
            ctx->pc = 0x25FF58u;
            goto label_25ff58;
        }
    }
    ctx->pc = 0x25FE58u;
label_25fe58:
    // 0x25fe58: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_25fe5c:
    if (ctx->pc == 0x25FE5Cu) {
        ctx->pc = 0x25FE60u;
        goto label_25fe60;
    }
    ctx->pc = 0x25FE58u;
    {
        const bool branch_taken_0x25fe58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25fe58) {
            ctx->pc = 0x25FE78u;
            goto label_25fe78;
        }
    }
    ctx->pc = 0x25FE60u;
label_25fe60:
    // 0x25fe60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_25fe64:
    if (ctx->pc == 0x25FE64u) {
        ctx->pc = 0x25FE68u;
        goto label_25fe68;
    }
    ctx->pc = 0x25FE60u;
    {
        const bool branch_taken_0x25fe60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fe60) {
            ctx->pc = 0x25FE70u;
            goto label_25fe70;
        }
    }
    ctx->pc = 0x25FE68u;
label_25fe68:
    // 0x25fe68: 0x100003bf  b           . + 4 + (0x3BF << 2)
label_25fe6c:
    if (ctx->pc == 0x25FE6Cu) {
        ctx->pc = 0x25FE70u;
        goto label_25fe70;
    }
    ctx->pc = 0x25FE68u;
    {
        const bool branch_taken_0x25fe68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fe68) {
            ctx->pc = 0x260D68u;
            goto label_260d68;
        }
    }
    ctx->pc = 0x25FE70u;
label_25fe70:
    // 0x25fe70: 0x100003bf  b           . + 4 + (0x3BF << 2)
label_25fe74:
    if (ctx->pc == 0x25FE74u) {
        ctx->pc = 0x25FE74u;
            // 0x25fe74: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25FE78u;
        goto label_25fe78;
    }
    ctx->pc = 0x25FE70u;
    {
        const bool branch_taken_0x25fe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE70u;
            // 0x25fe74: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe70) {
            ctx->pc = 0x260D70u;
            goto label_260d70;
        }
    }
    ctx->pc = 0x25FE78u;
label_25fe78:
    // 0x25fe78: 0x92640004  lbu         $a0, 0x4($s3)
    ctx->pc = 0x25fe78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_25fe7c:
    // 0x25fe7c: 0x92630005  lbu         $v1, 0x5($s3)
    ctx->pc = 0x25fe7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_25fe80:
    // 0x25fe80: 0xc680011c  lwc1        $f0, 0x11C($s4)
    ctx->pc = 0x25fe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fe84:
    // 0x25fe84: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x25fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_25fe88:
    // 0x25fe88: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x25fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_25fe8c:
    // 0x25fe8c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x25fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25fe90:
    // 0x25fe90: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x25fe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25fe94:
    // 0x25fe94: 0xc4880000  lwc1        $f8, 0x0($a0)
    ctx->pc = 0x25fe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_25fe98:
    // 0x25fe98: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x25fe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25fe9c:
    // 0x25fe9c: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x25fe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25fea0:
    // 0x25fea0: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x25fea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25fea4:
    // 0x25fea4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x25fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25fea8:
    // 0x25fea8: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x25fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25feac:
    // 0x25feac: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x25feacu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_25feb0:
    // 0x25feb0: 0x460741c1  sub.s       $f7, $f8, $f7
    ctx->pc = 0x25feb0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
label_25feb4:
    // 0x25feb4: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x25feb4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_25feb8:
    // 0x25feb8: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x25feb8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_25febc:
    // 0x25febc: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x25febcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_25fec0:
    // 0x25fec0: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x25fec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_25fec4:
    // 0x25fec4: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25fec4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25fec8:
    // 0x25fec8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x25fec8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_25fecc:
    // 0x25fecc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25feccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25fed0:
    // 0x25fed0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25fed4:
    if (ctx->pc == 0x25FED4u) {
        ctx->pc = 0x25FED4u;
            // 0x25fed4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25FED8u;
        goto label_25fed8;
    }
    ctx->pc = 0x25FED0u;
    {
        const bool branch_taken_0x25fed0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25FED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FED0u;
            // 0x25fed4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fed0) {
            ctx->pc = 0x25FEE0u;
            goto label_25fee0;
        }
    }
    ctx->pc = 0x25FED8u;
label_25fed8:
    // 0x25fed8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_25fedc:
    if (ctx->pc == 0x25FEDCu) {
        ctx->pc = 0x25FEE0u;
        goto label_25fee0;
    }
    ctx->pc = 0x25FED8u;
    {
        const bool branch_taken_0x25fed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fed8) {
            ctx->pc = 0x25FF50u;
            goto label_25ff50;
        }
    }
    ctx->pc = 0x25FEE0u;
label_25fee0:
    // 0x25fee0: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x25fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_25fee4:
    // 0x25fee4: 0xe7c70000  swc1        $f7, 0x0($fp)
    ctx->pc = 0x25fee4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_25fee8:
    // 0x25fee8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25fee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25feec:
    // 0x25feec: 0xe4650000  swc1        $f5, 0x0($v1)
    ctx->pc = 0x25feecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25fef0:
    // 0x25fef0: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x25fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_25fef4:
    // 0x25fef4: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x25fef4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25fef8:
    // 0x25fef8: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x25fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_25fefc:
    // 0x25fefc: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x25fefcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25ff00:
    // 0x25ff00: 0xc6800100  lwc1        $f0, 0x100($s4)
    ctx->pc = 0x25ff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ff04:
    // 0x25ff04: 0x27a30144  addiu       $v1, $sp, 0x144
    ctx->pc = 0x25ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_25ff08:
    // 0x25ff08: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25ff08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_25ff0c:
    // 0x25ff0c: 0xc6800104  lwc1        $f0, 0x104($s4)
    ctx->pc = 0x25ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ff10:
    // 0x25ff10: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25ff10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25ff14:
    // 0x25ff14: 0xc6800108  lwc1        $f0, 0x108($s4)
    ctx->pc = 0x25ff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ff18:
    // 0x25ff18: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x25ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_25ff1c:
    // 0x25ff1c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25ff1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25ff20:
    // 0x25ff20: 0xc680010c  lwc1        $f0, 0x10C($s4)
    ctx->pc = 0x25ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ff24:
    // 0x25ff24: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x25ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_25ff28:
    // 0x25ff28: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25ff28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25ff2c:
    // 0x25ff2c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25ff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ff30:
    // 0x25ff30: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x25ff30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_25ff34:
    // 0x25ff34: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x25ff34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ff38:
    // 0x25ff38: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25ff38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_25ff3c:
    // 0x25ff3c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x25ff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ff40:
    // 0x25ff40: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x25ff40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_25ff44:
    // 0x25ff44: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x25ff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ff48:
    // 0x25ff48: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x25ff48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_25ff4c:
    // 0x25ff4c: 0x0  nop
    ctx->pc = 0x25ff4cu;
    // NOP
label_25ff50:
    // 0x25ff50: 0x10000387  b           . + 4 + (0x387 << 2)
label_25ff54:
    if (ctx->pc == 0x25FF54u) {
        ctx->pc = 0x25FF58u;
        goto label_25ff58;
    }
    ctx->pc = 0x25FF50u;
    {
        const bool branch_taken_0x25ff50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ff50) {
            ctx->pc = 0x260D70u;
            goto label_260d70;
        }
    }
    ctx->pc = 0x25FF58u;
label_25ff58:
    // 0x25ff58: 0x92650004  lbu         $a1, 0x4($s3)
    ctx->pc = 0x25ff58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_25ff5c:
    // 0x25ff5c: 0x92640005  lbu         $a0, 0x5($s3)
    ctx->pc = 0x25ff5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_25ff60:
    // 0x25ff60: 0x27a60144  addiu       $a2, $sp, 0x144
    ctx->pc = 0x25ff60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_25ff64:
    // 0x25ff64: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x25ff64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_25ff68:
    // 0x25ff68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25ff68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25ff6c:
    // 0x25ff6c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x25ff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_25ff70:
    // 0x25ff70: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ff74:
    // 0x25ff74: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x25ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_25ff78:
    // 0x25ff78: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x25ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_25ff7c:
    // 0x25ff7c: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x25ff7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_25ff80:
    // 0x25ff80: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x25ff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ff84:
    // 0x25ff84: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x25ff84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_25ff88:
    // 0x25ff88: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x25ff88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ff8c:
    // 0x25ff8c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x25ff8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_25ff90:
    // 0x25ff90: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x25ff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ff94:
    // 0x25ff94: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x25ff94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_25ff98:
    // 0x25ff98: 0xc6810100  lwc1        $f1, 0x100($s4)
    ctx->pc = 0x25ff98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ff9c:
    // 0x25ff9c: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x25ff9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_25ffa0:
    // 0x25ffa0: 0xc6810104  lwc1        $f1, 0x104($s4)
    ctx->pc = 0x25ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ffa4:
    // 0x25ffa4: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x25ffa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_25ffa8:
    // 0x25ffa8: 0xc6810108  lwc1        $f1, 0x108($s4)
    ctx->pc = 0x25ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ffac:
    // 0x25ffac: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x25ffacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_25ffb0:
    // 0x25ffb0: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x25ffb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_25ffb4:
    // 0x25ffb4: 0xc681010c  lwc1        $f1, 0x10C($s4)
    ctx->pc = 0x25ffb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ffb8:
    // 0x25ffb8: 0x27a6014c  addiu       $a2, $sp, 0x14C
    ctx->pc = 0x25ffb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_25ffbc:
    // 0x25ffbc: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x25ffbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_25ffc0:
    // 0x25ffc0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x25ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ffc4:
    // 0x25ffc4: 0xc4690000  lwc1        $f9, 0x0($v1)
    ctx->pc = 0x25ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_25ffc8:
    // 0x25ffc8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ffcc:
    // 0x25ffcc: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x25ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25ffd0:
    // 0x25ffd0: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x25ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25ffd4:
    // 0x25ffd4: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x25ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25ffd8:
    // 0x25ffd8: 0xc4680008  lwc1        $f8, 0x8($v1)
    ctx->pc = 0x25ffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_25ffdc:
    // 0x25ffdc: 0x46024b81  sub.s       $f14, $f9, $f2
    ctx->pc = 0x25ffdcu;
    ctx->f[14] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
label_25ffe0:
    // 0x25ffe0: 0x46014ac1  sub.s       $f11, $f9, $f1
    ctx->pc = 0x25ffe0u;
    ctx->f[11] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
label_25ffe4:
    // 0x25ffe4: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x25ffe4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_25ffe8:
    // 0x25ffe8: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x25ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25ffec:
    // 0x25ffec: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x25ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25fff0:
    // 0x25fff0: 0x46063b41  sub.s       $f13, $f7, $f6
    ctx->pc = 0x25fff0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_25fff4:
    // 0x25fff4: 0x46062841  sub.s       $f1, $f5, $f6
    ctx->pc = 0x25fff4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_25fff8:
    // 0x25fff8: 0x46053a41  sub.s       $f9, $f7, $f5
    ctx->pc = 0x25fff8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
label_25fffc:
    // 0x25fffc: 0x46034281  sub.s       $f10, $f8, $f3
    ctx->pc = 0x25fffcu;
    ctx->f[10] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
label_260000:
    // 0x260000: 0x46044301  sub.s       $f12, $f8, $f4
    ctx->pc = 0x260000u;
    ctx->f[12] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
label_260004:
    // 0x260004: 0x460e11c2  mul.s       $f7, $f2, $f14
    ctx->pc = 0x260004u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
label_260008:
    // 0x260008: 0x460d0982  mul.s       $f6, $f1, $f13
    ctx->pc = 0x260008u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
label_26000c:
    // 0x26000c: 0x460a681a  mula.s      $f13, $f10
    ctx->pc = 0x26000cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
label_260010:
    // 0x260010: 0x4609605d  msub.s      $f1, $f12, $f9
    ctx->pc = 0x260010u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[9]));
label_260014:
    // 0x260014: 0x46041941  sub.s       $f5, $f3, $f4
    ctx->pc = 0x260014u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_260018:
    // 0x260018: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x260018u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_26001c:
    // 0x26001c: 0x460b601a  mula.s      $f12, $f11
    ctx->pc = 0x26001cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
label_260020:
    // 0x260020: 0x460a705d  msub.s      $f1, $f14, $f10
    ctx->pc = 0x260020u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[10]));
label_260024:
    // 0x260024: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x260024u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_260028:
    // 0x260028: 0x460d4882  mul.s       $f2, $f9, $f13
    ctx->pc = 0x260028u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
label_26002c:
    // 0x26002c: 0x4609701a  mula.s      $f14, $f9
    ctx->pc = 0x26002cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[9]);
label_260030:
    // 0x260030: 0x460e5a02  mul.s       $f8, $f11, $f14
    ctx->pc = 0x260030u;
    ctx->f[8] = FPU_MUL_S(ctx->f[11], ctx->f[14]);
label_260034:
    // 0x260034: 0x460b6a5d  msub.s      $f9, $f13, $f11
    ctx->pc = 0x260034u;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[11]));
label_260038:
    // 0x260038: 0x46024018  adda.s      $f8, $f2
    ctx->pc = 0x260038u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
label_26003c:
    // 0x26003c: 0x460c521c  madd.s      $f8, $f10, $f12
    ctx->pc = 0x26003cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[12]));
label_260040:
    // 0x260040: 0x46063818  adda.s      $f7, $f6
    ctx->pc = 0x260040u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_260044:
    // 0x260044: 0x460c295c  madd.s      $f5, $f5, $f12
    ctx->pc = 0x260044u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[12]));
label_260048:
    // 0x260048: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x260048u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_26004c:
    // 0x26004c: 0x460d6842  mul.s       $f1, $f13, $f13
    ctx->pc = 0x26004cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_260050:
    // 0x260050: 0x460e7082  mul.s       $f2, $f14, $f14
    ctx->pc = 0x260050u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
label_260054:
    // 0x260054: 0x460948dc  madd.s      $f3, $f9, $f9
    ctx->pc = 0x260054u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[9]));
label_260058:
    // 0x260058: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x260058u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_26005c:
    // 0x26005c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x26005cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260060:
    // 0x260060: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_260064:
    if (ctx->pc == 0x260064u) {
        ctx->pc = 0x260064u;
            // 0x260064: 0x460c609c  madd.s      $f2, $f12, $f12 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[12]));
        ctx->pc = 0x260068u;
        goto label_260068;
    }
    ctx->pc = 0x260060u;
    {
        const bool branch_taken_0x260060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260060u;
            // 0x260064: 0x460c609c  madd.s      $f2, $f12, $f12 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[12]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260060) {
            ctx->pc = 0x260070u;
            goto label_260070;
        }
    }
    ctx->pc = 0x260068u;
label_260068:
    // 0x260068: 0x10000002  b           . + 4 + (0x2 << 2)
label_26006c:
    if (ctx->pc == 0x26006Cu) {
        ctx->pc = 0x26006Cu;
            // 0x26006c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x260070u;
        goto label_260070;
    }
    ctx->pc = 0x260068u;
    {
        const bool branch_taken_0x260068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26006Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260068u;
            // 0x26006c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260068) {
            ctx->pc = 0x260074u;
            goto label_260074;
        }
    }
    ctx->pc = 0x260070u;
label_260070:
    // 0x260070: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x260070u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260074:
    // 0x260074: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x260074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260078:
    // 0x260078: 0x0  nop
    ctx->pc = 0x260078u;
    // NOP
label_26007c:
    // 0x26007c: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x26007cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260080:
    // 0x260080: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_260084:
    if (ctx->pc == 0x260084u) {
        ctx->pc = 0x260084u;
            // 0x260084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260088u;
        goto label_260088;
    }
    ctx->pc = 0x260080u;
    {
        const bool branch_taken_0x260080 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260080u;
            // 0x260084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260080) {
            ctx->pc = 0x26008Cu;
            goto label_26008c;
        }
    }
    ctx->pc = 0x260088u;
label_260088:
    // 0x260088: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x260088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26008c:
    // 0x26008c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26008cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260090:
    // 0x260090: 0x0  nop
    ctx->pc = 0x260090u;
    // NOP
label_260094:
    // 0x260094: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x260094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260098:
    // 0x260098: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_26009c:
    if (ctx->pc == 0x26009Cu) {
        ctx->pc = 0x26009Cu;
            // 0x26009c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2600A0u;
        goto label_2600a0;
    }
    ctx->pc = 0x260098u;
    {
        const bool branch_taken_0x260098 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26009Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260098u;
            // 0x26009c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260098) {
            ctx->pc = 0x2600A4u;
            goto label_2600a4;
        }
    }
    ctx->pc = 0x2600A0u;
label_2600a0:
    // 0x2600a0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2600a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2600a4:
    // 0x2600a4: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x2600a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
label_2600a8:
    // 0x2600a8: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x2600a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
label_2600ac:
    // 0x2600ac: 0x27a80168  addiu       $t0, $sp, 0x168
    ctx->pc = 0x2600acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_2600b0:
    // 0x2600b0: 0xafa90168  sw          $t1, 0x168($sp)
    ctx->pc = 0x2600b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 9));
label_2600b4:
    // 0x2600b4: 0x27a6017c  addiu       $a2, $sp, 0x17C
    ctx->pc = 0x2600b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_2600b8:
    // 0x2600b8: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x2600b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2600bc:
    // 0x2600bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2600bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2600c0:
    // 0x2600c0: 0x0  nop
    ctx->pc = 0x2600c0u;
    // NOP
label_2600c4:
    // 0x2600c4: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2600c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2600c8:
    // 0x2600c8: 0xc681011c  lwc1        $f1, 0x11C($s4)
    ctx->pc = 0x2600c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2600cc:
    // 0x2600cc: 0x8fa6017c  lw          $a2, 0x17C($sp)
    ctx->pc = 0x2600ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_2600d0:
    // 0x2600d0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2600d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2600d4:
    // 0x2600d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2600d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2600d8:
    // 0x2600d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2600dc:
    if (ctx->pc == 0x2600DCu) {
        ctx->pc = 0x2600DCu;
            // 0x2600dc: 0x30c6000c  andi        $a2, $a2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
        ctx->pc = 0x2600E0u;
        goto label_2600e0;
    }
    ctx->pc = 0x2600D8u;
    {
        const bool branch_taken_0x2600d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2600DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2600D8u;
            // 0x2600dc: 0x30c6000c  andi        $a2, $a2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600d8) {
            ctx->pc = 0x2600E8u;
            goto label_2600e8;
        }
    }
    ctx->pc = 0x2600E0u;
label_2600e0:
    // 0x2600e0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_2600e4:
    if (ctx->pc == 0x2600E4u) {
        ctx->pc = 0x2600E8u;
        goto label_2600e8;
    }
    ctx->pc = 0x2600E0u;
    {
        const bool branch_taken_0x2600e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2600e0) {
            ctx->pc = 0x2600F0u;
            goto label_2600f0;
        }
    }
    ctx->pc = 0x2600E8u;
label_2600e8:
    // 0x2600e8: 0x10000035  b           . + 4 + (0x35 << 2)
label_2600ec:
    if (ctx->pc == 0x2600ECu) {
        ctx->pc = 0x2600ECu;
            // 0x2600ec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2600F0u;
        goto label_2600f0;
    }
    ctx->pc = 0x2600E8u;
    {
        const bool branch_taken_0x2600e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2600ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2600E8u;
            // 0x2600ec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600e8) {
            ctx->pc = 0x2601C0u;
            goto label_2601c0;
        }
    }
    ctx->pc = 0x2600F0u;
label_2600f0:
    // 0x2600f0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2600f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2600f4:
    // 0x2600f4: 0x460540c0  add.s       $f3, $f8, $f5
    ctx->pc = 0x2600f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
label_2600f8:
    // 0x2600f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2600f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2600fc:
    // 0x2600fc: 0x460340c3  div.s       $f3, $f8, $f3
    ctx->pc = 0x2600fcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[3] = ctx->f[8] / ctx->f[3];
label_260100:
    // 0x260100: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x260100u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_260104:
    // 0x260104: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x260104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260108:
    // 0x260108: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x260108u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_26010c:
    // 0x26010c: 0x27a60114  addiu       $a2, $sp, 0x114
    ctx->pc = 0x26010cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_260110:
    // 0x260110: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x260110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260114:
    // 0x260114: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x260114u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_260118:
    // 0x260118: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x260118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_26011c:
    // 0x26011c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x26011cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_260120:
    // 0x260120: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x260120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260124:
    // 0x260124: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x260124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260128:
    // 0x260128: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x260128u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_26012c:
    // 0x26012c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x26012cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_260130:
    // 0x260130: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x260130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_260134:
    // 0x260134: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x260134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260138:
    // 0x260138: 0x27a60118  addiu       $a2, $sp, 0x118
    ctx->pc = 0x260138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_26013c:
    // 0x26013c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x26013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260140:
    // 0x260140: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x260140u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_260144:
    // 0x260144: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x260144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_260148:
    // 0x260148: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x260148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_26014c:
    // 0x26014c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x26014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260150:
    // 0x260150: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x260150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260154:
    // 0x260154: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x260154u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_260158:
    // 0x260158: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x260158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_26015c:
    // 0x26015c: 0x27a3011c  addiu       $v1, $sp, 0x11C
    ctx->pc = 0x26015cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_260160:
    // 0x260160: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260164:
    // 0x260164: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x260164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260168:
    // 0x260168: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x260168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_26016c:
    // 0x26016c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x26016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260170:
    // 0x260170: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_260174:
    // 0x260174: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x260174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_260178:
    // 0x260178: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x260178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26017c:
    // 0x26017c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x26017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260180:
    // 0x260180: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x260180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_260184:
    // 0x260184: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_260188:
    // 0x260188: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_26018c:
    // 0x26018c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x26018cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_260190:
    // 0x260190: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x260190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260194:
    // 0x260194: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x260194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260198:
    // 0x260198: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x260198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_26019c:
    // 0x26019c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26019cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2601a0:
    // 0x2601a0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2601a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2601a4:
    // 0x2601a4: 0x27a3011c  addiu       $v1, $sp, 0x11C
    ctx->pc = 0x2601a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_2601a8:
    // 0x2601a8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2601a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2601ac:
    // 0x2601ac: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2601acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2601b0:
    // 0x2601b0: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x2601b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_2601b4:
    // 0x2601b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2601b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2601b8:
    // 0x2601b8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2601b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2601bc:
    // 0x2601bc: 0x0  nop
    ctx->pc = 0x2601bcu;
    // NOP
label_2601c0:
    // 0x2601c0: 0x100002eb  b           . + 4 + (0x2EB << 2)
label_2601c4:
    if (ctx->pc == 0x2601C4u) {
        ctx->pc = 0x2601C8u;
        goto label_2601c8;
    }
    ctx->pc = 0x2601C0u;
    {
        const bool branch_taken_0x2601c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2601c0) {
            ctx->pc = 0x260D70u;
            goto label_260d70;
        }
    }
    ctx->pc = 0x2601C8u;
label_2601c8:
    // 0x2601c8: 0x92660004  lbu         $a2, 0x4($s3)
    ctx->pc = 0x2601c8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_2601cc:
    // 0x2601cc: 0x92650005  lbu         $a1, 0x5($s3)
    ctx->pc = 0x2601ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_2601d0:
    // 0x2601d0: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x2601d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_2601d4:
    // 0x2601d4: 0x92640006  lbu         $a0, 0x6($s3)
    ctx->pc = 0x2601d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_2601d8:
    // 0x2601d8: 0x92630007  lbu         $v1, 0x7($s3)
    ctx->pc = 0x2601d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_2601dc:
    // 0x2601dc: 0x2864021  addu        $t0, $s4, $a2
    ctx->pc = 0x2601dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_2601e0:
    // 0x2601e0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2601e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2601e4:
    // 0x2601e4: 0x2853021  addu        $a2, $s4, $a1
    ctx->pc = 0x2601e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_2601e8:
    // 0x2601e8: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x2601e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_2601ec:
    // 0x2601ec: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x2601ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2601f0:
    // 0x2601f0: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x2601f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_2601f4:
    // 0x2601f4: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2601f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_2601f8:
    // 0x2601f8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2601f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2601fc:
    // 0x2601fc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2601fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_260200:
    // 0x260200: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x260200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260204:
    // 0x260204: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x260204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_260208:
    // 0x260208: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x260208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26020c:
    // 0x26020c: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x26020cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_260210:
    // 0x260210: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x260210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260214:
    // 0x260214: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x260214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260218:
    // 0x260218: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26021c:
    // 0x26021c: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x26021cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_260220:
    // 0x260220: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x260220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260224:
    // 0x260224: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x260224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260228:
    // 0x260228: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26022c:
    // 0x26022c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x26022cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260230:
    // 0x260230: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x260230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260234:
    // 0x260234: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x260234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_260238:
    // 0x260238: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x260238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26023c:
    // 0x26023c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26023cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_260240:
    // 0x260240: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260244:
    // 0x260244: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x260244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260248:
    // 0x260248: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x260248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_26024c:
    // 0x26024c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x26024cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260250:
    // 0x260250: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_260254:
    // 0x260254: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260258:
    // 0x260258: 0xc4be0004  lwc1        $f30, 0x4($a1)
    ctx->pc = 0x260258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_26025c:
    // 0x26025c: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x26025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_260260:
    // 0x260260: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x260260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260264:
    // 0x260264: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x260264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_260268:
    // 0x260268: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x260268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26026c:
    // 0x26026c: 0xc4bd0008  lwc1        $f29, 0x8($a1)
    ctx->pc = 0x26026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_260270:
    // 0x260270: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x260270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_260274:
    // 0x260274: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x260274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_260278:
    // 0x260278: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x260278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_26027c:
    // 0x26027c: 0x461e2501  sub.s       $f20, $f4, $f30
    ctx->pc = 0x26027cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[30]);
label_260280:
    // 0x260280: 0x46030401  sub.s       $f16, $f0, $f3
    ctx->pc = 0x260280u;
    ctx->f[16] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_260284:
    // 0x260284: 0x461d1cc1  sub.s       $f19, $f3, $f29
    ctx->pc = 0x260284u;
    ctx->f[19] = FPU_SUB_S(ctx->f[3], ctx->f[29]);
label_260288:
    // 0x260288: 0x46040c41  sub.s       $f17, $f1, $f4
    ctx->pc = 0x260288u;
    ctx->f[17] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_26028c:
    // 0x26028c: 0x4610a01a  mula.s      $f20, $f16
    ctx->pc = 0x26028cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[16]);
label_260290:
    // 0x260290: 0x46119b1d  msub.s      $f12, $f19, $f17
    ctx->pc = 0x260290u;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[19], ctx->f[17]));
label_260294:
    // 0x260294: 0x46051481  sub.s       $f18, $f2, $f5
    ctx->pc = 0x260294u;
    ctx->f[18] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_260298:
    // 0x260298: 0x46082d41  sub.s       $f21, $f5, $f8
    ctx->pc = 0x260298u;
    ctx->f[21] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
label_26029c:
    // 0x26029c: 0x4612981a  mula.s      $f19, $f18
    ctx->pc = 0x26029cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[19], ctx->f[18]);
label_2602a0:
    // 0x2602a0: 0x4610aadd  msub.s      $f11, $f21, $f16
    ctx->pc = 0x2602a0u;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[16]));
label_2602a4:
    // 0x2602a4: 0x4611a81a  mula.s      $f21, $f17
    ctx->pc = 0x2602a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[17]);
label_2602a8:
    // 0x2602a8: 0x460c61c2  mul.s       $f7, $f12, $f12
    ctx->pc = 0x2602a8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_2602ac:
    // 0x2602ac: 0x460b5982  mul.s       $f6, $f11, $f11
    ctx->pc = 0x2602acu;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
label_2602b0:
    // 0x2602b0: 0x4612a29d  msub.s      $f10, $f20, $f18
    ctx->pc = 0x2602b0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[18]));
label_2602b4:
    // 0x2602b4: 0x46063818  adda.s      $f7, $f6
    ctx->pc = 0x2602b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_2602b8:
    // 0x2602b8: 0x460a51dc  madd.s      $f7, $f10, $f10
    ctx->pc = 0x2602b8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
label_2602bc:
    // 0x2602bc: 0x460243c1  sub.s       $f15, $f8, $f2
    ctx->pc = 0x2602bcu;
    ctx->f[15] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
label_2602c0:
    // 0x2602c0: 0x4601f381  sub.s       $f14, $f30, $f1
    ctx->pc = 0x2602c0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[30], ctx->f[1]);
label_2602c4:
    // 0x2602c4: 0x46093832  c.eq.s      $f7, $f9
    ctx->pc = 0x2602c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2602c8:
    // 0x2602c8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2602cc:
    if (ctx->pc == 0x2602CCu) {
        ctx->pc = 0x2602CCu;
            // 0x2602cc: 0x4600eb41  sub.s       $f13, $f29, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[29], ctx->f[0]);
        ctx->pc = 0x2602D0u;
        goto label_2602d0;
    }
    ctx->pc = 0x2602C8u;
    {
        const bool branch_taken_0x2602c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2602CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2602C8u;
            // 0x2602cc: 0x4600eb41  sub.s       $f13, $f29, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[29], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602c8) {
            ctx->pc = 0x2602F0u;
            goto label_2602f0;
        }
    }
    ctx->pc = 0x2602D0u;
label_2602d0:
    // 0x2602d0: 0xc7a600dc  lwc1        $f6, 0xDC($sp)
    ctx->pc = 0x2602d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2602d4:
    // 0x2602d4: 0x0  nop
    ctx->pc = 0x2602d4u;
    // NOP
label_2602d8:
    // 0x2602d8: 0x46073596  rsqrt.s     $f22, $f6, $f7
    ctx->pc = 0x2602d8u;
    ctx->f[22] = 1.0f / sqrtf(ctx->f[6]);
label_2602dc:
    // 0x2602dc: 0x0  nop
    ctx->pc = 0x2602dcu;
    // NOP
label_2602e0:
    // 0x2602e0: 0x0  nop
    ctx->pc = 0x2602e0u;
    // NOP
label_2602e4:
    // 0x2602e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2602e8:
    if (ctx->pc == 0x2602E8u) {
        ctx->pc = 0x2602ECu;
        goto label_2602ec;
    }
    ctx->pc = 0x2602E4u;
    {
        const bool branch_taken_0x2602e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2602e4) {
            ctx->pc = 0x2602F8u;
            goto label_2602f8;
        }
    }
    ctx->pc = 0x2602ECu;
label_2602ec:
    // 0x2602ec: 0x0  nop
    ctx->pc = 0x2602ecu;
    // NOP
label_2602f0:
    // 0x2602f0: 0x46004d86  mov.s       $f22, $f9
    ctx->pc = 0x2602f0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[9]);
label_2602f4:
    // 0x2602f4: 0x0  nop
    ctx->pc = 0x2602f4u;
    // NOP
label_2602f8:
    // 0x2602f8: 0x27a30144  addiu       $v1, $sp, 0x144
    ctx->pc = 0x2602f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_2602fc:
    // 0x2602fc: 0xc51b0004  lwc1        $f27, 0x4($t0)
    ctx->pc = 0x2602fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_260300:
    // 0x260300: 0xc51a0008  lwc1        $f26, 0x8($t0)
    ctx->pc = 0x260300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_260304:
    // 0x260304: 0xc51c0000  lwc1        $f28, 0x0($t0)
    ctx->pc = 0x260304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_260308:
    // 0x260308: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x260308u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
label_26030c:
    // 0x26030c: 0x461ed9c1  sub.s       $f7, $f27, $f30
    ctx->pc = 0x26030cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[27], ctx->f[30]);
label_260310:
    // 0x260310: 0x46165ac2  mul.s       $f11, $f11, $f22
    ctx->pc = 0x260310u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[22]);
label_260314:
    // 0x260314: 0x46165282  mul.s       $f10, $f10, $f22
    ctx->pc = 0x260314u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[22]);
label_260318:
    // 0x260318: 0x46164a42  mul.s       $f9, $f9, $f22
    ctx->pc = 0x260318u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[22]);
label_26031c:
    // 0x26031c: 0x461dd181  sub.s       $f6, $f26, $f29
    ctx->pc = 0x26031cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[26], ctx->f[29]);
label_260320:
    // 0x260320: 0x4613381a  mula.s      $f7, $f19
    ctx->pc = 0x260320u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[19]);
label_260324:
    // 0x260324: 0x4614359d  msub.s      $f22, $f6, $f20
    ctx->pc = 0x260324u;
    ctx->f[22] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[20]));
label_260328:
    // 0x260328: 0xc6990100  lwc1        $f25, 0x100($s4)
    ctx->pc = 0x260328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_26032c:
    // 0x26032c: 0x4608e201  sub.s       $f8, $f28, $f8
    ctx->pc = 0x26032cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[28], ctx->f[8]);
label_260330:
    // 0x260330: 0x4615301a  mula.s      $f6, $f21
    ctx->pc = 0x260330u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[21]);
label_260334:
    // 0x260334: 0x4603d0c1  sub.s       $f3, $f26, $f3
    ctx->pc = 0x260334u;
    ctx->f[3] = FPU_SUB_S(ctx->f[26], ctx->f[3]);
label_260338:
    // 0x260338: 0x4600d001  sub.s       $f0, $f26, $f0
    ctx->pc = 0x260338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
label_26033c:
    // 0x26033c: 0x46153e82  mul.s       $f26, $f7, $f21
    ctx->pc = 0x26033cu;
    ctx->f[26] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
label_260340:
    // 0x260340: 0x46144182  mul.s       $f6, $f8, $f20
    ctx->pc = 0x260340u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
label_260344:
    // 0x260344: 0x461344dd  msub.s      $f19, $f8, $f19
    ctx->pc = 0x260344u;
    ctx->f[19] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[19]));
label_260348:
    // 0x260348: 0xc6980104  lwc1        $f24, 0x104($s4)
    ctx->pc = 0x260348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_26034c:
    // 0x26034c: 0xc6970108  lwc1        $f23, 0x108($s4)
    ctx->pc = 0x26034cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_260350:
    // 0x260350: 0x460cb542  mul.s       $f21, $f22, $f12
    ctx->pc = 0x260350u;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
label_260354:
    // 0x260354: 0x460b9a02  mul.s       $f8, $f19, $f11
    ctx->pc = 0x260354u;
    ctx->f[8] = FPU_MUL_S(ctx->f[19], ctx->f[11]);
label_260358:
    // 0x260358: 0xe64c0000  swc1        $f12, 0x0($s2)
    ctx->pc = 0x260358u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_26035c:
    // 0x26035c: 0xe46b0000  swc1        $f11, 0x0($v1)
    ctx->pc = 0x26035cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260360:
    // 0x260360: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x260360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_260364:
    // 0x260364: 0xe46a0000  swc1        $f10, 0x0($v1)
    ctx->pc = 0x260364u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260368:
    // 0x260368: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x260368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_26036c:
    // 0x26036c: 0x461a3181  sub.s       $f6, $f6, $f26
    ctx->pc = 0x26036cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[26]);
label_260370:
    // 0x260370: 0x4608a818  adda.s      $f21, $f8
    ctx->pc = 0x260370u;
    ctx->f[31] = FPU_ADD_S(ctx->f[21], ctx->f[8]);
label_260374:
    // 0x260374: 0x4601d841  sub.s       $f1, $f27, $f1
    ctx->pc = 0x260374u;
    ctx->f[1] = FPU_SUB_S(ctx->f[27], ctx->f[1]);
label_260378:
    // 0x260378: 0x460a319c  madd.s      $f6, $f6, $f10
    ctx->pc = 0x260378u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[10]));
label_26037c:
    // 0x26037c: 0x460d081a  mula.s      $f1, $f13
    ctx->pc = 0x26037cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
label_260380:
    // 0x260380: 0x460e021d  msub.s      $f8, $f0, $f14
    ctx->pc = 0x260380u;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[14]));
label_260384:
    // 0x260384: 0x4602e081  sub.s       $f2, $f28, $f2
    ctx->pc = 0x260384u;
    ctx->f[2] = FPU_SUB_S(ctx->f[28], ctx->f[2]);
label_260388:
    // 0x260388: 0x460f001a  mula.s      $f0, $f15
    ctx->pc = 0x260388u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
label_26038c:
    // 0x26038c: 0x460f0842  mul.s       $f1, $f1, $f15
    ctx->pc = 0x26038cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
label_260390:
    // 0x260390: 0x460e1002  mul.s       $f0, $f2, $f14
    ctx->pc = 0x260390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
label_260394:
    // 0x260394: 0x460c43c2  mul.s       $f15, $f8, $f12
    ctx->pc = 0x260394u;
    ctx->f[15] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
label_260398:
    // 0x260398: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x260398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26039c:
    // 0x26039c: 0x460d121d  msub.s      $f8, $f2, $f13
    ctx->pc = 0x26039cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[13]));
label_2603a0:
    // 0x2603a0: 0x460b4042  mul.s       $f1, $f8, $f11
    ctx->pc = 0x2603a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
label_2603a4:
    // 0x2603a4: 0x46017818  adda.s      $f15, $f1
    ctx->pc = 0x2603a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[1]);
label_2603a8:
    // 0x2603a8: 0x460cce42  mul.s       $f25, $f25, $f12
    ctx->pc = 0x2603a8u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[12]);
label_2603ac:
    // 0x2603ac: 0x460bc1c2  mul.s       $f7, $f24, $f11
    ctx->pc = 0x2603acu;
    ctx->f[7] = FPU_MUL_S(ctx->f[24], ctx->f[11]);
label_2603b0:
    // 0x2603b0: 0x460a021c  madd.s      $f8, $f0, $f10
    ctx->pc = 0x2603b0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[10]));
label_2603b4:
    // 0x2603b4: 0x4604d901  sub.s       $f4, $f27, $f4
    ctx->pc = 0x2603b4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[27], ctx->f[4]);
label_2603b8:
    // 0x2603b8: 0x4607c818  adda.s      $f25, $f7
    ctx->pc = 0x2603b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[25], ctx->f[7]);
label_2603bc:
    // 0x2603bc: 0x460ab9dc  madd.s      $f7, $f23, $f10
    ctx->pc = 0x2603bcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[10]));
label_2603c0:
    // 0x2603c0: 0x4610201a  mula.s      $f4, $f16
    ctx->pc = 0x2603c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[16]);
label_2603c4:
    // 0x2603c4: 0x4611185d  msub.s      $f1, $f3, $f17
    ctx->pc = 0x2603c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[17]));
label_2603c8:
    // 0x2603c8: 0x4612181a  mula.s      $f3, $f18
    ctx->pc = 0x2603c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[18]);
label_2603cc:
    // 0x2603cc: 0x4605e141  sub.s       $f5, $f28, $f5
    ctx->pc = 0x2603ccu;
    ctx->f[5] = FPU_SUB_S(ctx->f[28], ctx->f[5]);
label_2603d0:
    // 0x2603d0: 0x460c08c2  mul.s       $f3, $f1, $f12
    ctx->pc = 0x2603d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_2603d4:
    // 0x2603d4: 0x46122002  mul.s       $f0, $f4, $f18
    ctx->pc = 0x2603d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[18]);
label_2603d8:
    // 0x2603d8: 0x46112842  mul.s       $f1, $f5, $f17
    ctx->pc = 0x2603d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[17]);
label_2603dc:
    // 0x2603dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2603dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2603e0:
    // 0x2603e0: 0x4610289d  msub.s      $f2, $f5, $f16
    ctx->pc = 0x2603e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[16]));
label_2603e4:
    // 0x2603e4: 0x460b1042  mul.s       $f1, $f2, $f11
    ctx->pc = 0x2603e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
label_2603e8:
    // 0x2603e8: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x2603e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_2603ec:
    // 0x2603ec: 0x460a005c  madd.s      $f1, $f0, $f10
    ctx->pc = 0x2603ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[10]));
label_2603f0:
    // 0x2603f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2603f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2603f4:
    // 0x2603f4: 0x0  nop
    ctx->pc = 0x2603f4u;
    // NOP
label_2603f8:
    // 0x2603f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2603f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2603fc:
    // 0x2603fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_260400:
    if (ctx->pc == 0x260400u) {
        ctx->pc = 0x260400u;
            // 0x260400: 0xe4690000  swc1        $f9, 0x0($v1) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x260404u;
        goto label_260404;
    }
    ctx->pc = 0x2603FCu;
    {
        const bool branch_taken_0x2603fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2603FCu;
            // 0x260400: 0xe4690000  swc1        $f9, 0x0($v1) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603fc) {
            ctx->pc = 0x26040Cu;
            goto label_26040c;
        }
    }
    ctx->pc = 0x260404u;
label_260404:
    // 0x260404: 0x10000002  b           . + 4 + (0x2 << 2)
label_260408:
    if (ctx->pc == 0x260408u) {
        ctx->pc = 0x260408u;
            // 0x260408: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x26040Cu;
        goto label_26040c;
    }
    ctx->pc = 0x260404u;
    {
        const bool branch_taken_0x260404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260404u;
            // 0x260408: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260404) {
            ctx->pc = 0x260410u;
            goto label_260410;
        }
    }
    ctx->pc = 0x26040Cu;
label_26040c:
    // 0x26040c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26040cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260410:
    // 0x260410: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x260410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260414:
    // 0x260414: 0x0  nop
    ctx->pc = 0x260414u;
    // NOP
label_260418:
    // 0x260418: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x260418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26041c:
    // 0x26041c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_260420:
    if (ctx->pc == 0x260420u) {
        ctx->pc = 0x260420u;
            // 0x260420: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260424u;
        goto label_260424;
    }
    ctx->pc = 0x26041Cu;
    {
        const bool branch_taken_0x26041c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26041Cu;
            // 0x260420: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26041c) {
            ctx->pc = 0x260428u;
            goto label_260428;
        }
    }
    ctx->pc = 0x260424u;
label_260424:
    // 0x260424: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x260424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_260428:
    // 0x260428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x260428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26042c:
    // 0x26042c: 0x0  nop
    ctx->pc = 0x26042cu;
    // NOP
label_260430:
    // 0x260430: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x260430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260434:
    // 0x260434: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_260438:
    if (ctx->pc == 0x260438u) {
        ctx->pc = 0x260438u;
            // 0x260438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26043Cu;
        goto label_26043c;
    }
    ctx->pc = 0x260434u;
    {
        const bool branch_taken_0x260434 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260434u;
            // 0x260438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260434) {
            ctx->pc = 0x260440u;
            goto label_260440;
        }
    }
    ctx->pc = 0x26043Cu;
label_26043c:
    // 0x26043c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x26043cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_260440:
    // 0x260440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x260440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260444:
    // 0x260444: 0x0  nop
    ctx->pc = 0x260444u;
    // NOP
label_260448:
    // 0x260448: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x260448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26044c:
    // 0x26044c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_260450:
    if (ctx->pc == 0x260450u) {
        ctx->pc = 0x260450u;
            // 0x260450: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x260454u;
        goto label_260454;
    }
    ctx->pc = 0x26044Cu;
    {
        const bool branch_taken_0x26044c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x260450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26044Cu;
            // 0x260450: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26044c) {
            ctx->pc = 0x260458u;
            goto label_260458;
        }
    }
    ctx->pc = 0x260454u;
label_260454:
    // 0x260454: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x260454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260458:
    // 0x260458: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x260458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_26045c:
    // 0x26045c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x26045cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_260460:
    // 0x260460: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x260460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_260464:
    // 0x260464: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x260464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_260468:
    // 0x260468: 0x27a40164  addiu       $a0, $sp, 0x164
    ctx->pc = 0x260468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_26046c:
    // 0x26046c: 0xafa50164  sw          $a1, 0x164($sp)
    ctx->pc = 0x26046cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 5));
label_260470:
    // 0x260470: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x260470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_260474:
    // 0x260474: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x260474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260478:
    // 0x260478: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_26047c:
    // 0x26047c: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x26047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_260480:
    // 0x260480: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x260480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_260484:
    // 0x260484: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_260488:
    if (ctx->pc == 0x260488u) {
        ctx->pc = 0x260488u;
            // 0x260488: 0x46006007  neg.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[12]);
        ctx->pc = 0x26048Cu;
        goto label_26048c;
    }
    ctx->pc = 0x260484u;
    {
        const bool branch_taken_0x260484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260484u;
            // 0x260488: 0x46006007  neg.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260484) {
            ctx->pc = 0x2604B8u;
            goto label_2604b8;
        }
    }
    ctx->pc = 0x26048Cu;
label_26048c:
    // 0x26048c: 0x27a30144  addiu       $v1, $sp, 0x144
    ctx->pc = 0x26048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_260490:
    // 0x260490: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x260490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_260494:
    // 0x260494: 0x46005807  neg.s       $f0, $f11
    ctx->pc = 0x260494u;
    ctx->f[0] = FPU_NEG_S(ctx->f[11]);
label_260498:
    // 0x260498: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_26049c:
    // 0x26049c: 0x46005007  neg.s       $f0, $f10
    ctx->pc = 0x26049cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[10]);
label_2604a0:
    // 0x2604a0: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x2604a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_2604a4:
    // 0x2604a4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2604a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2604a8:
    // 0x2604a8: 0x46004807  neg.s       $f0, $f9
    ctx->pc = 0x2604a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[9]);
label_2604ac:
    // 0x2604ac: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x2604acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_2604b0:
    // 0x2604b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2604b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2604b4:
    // 0x2604b4: 0x0  nop
    ctx->pc = 0x2604b4u;
    // NOP
label_2604b8:
    // 0x2604b8: 0x3083000e  andi        $v1, $a0, 0xE
    ctx->pc = 0x2604b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)14);
label_2604bc:
    // 0x2604bc: 0x1000022c  b           . + 4 + (0x22C << 2)
label_2604c0:
    if (ctx->pc == 0x2604C0u) {
        ctx->pc = 0x2604C0u;
            // 0x2604c0: 0x3868000e  xori        $t0, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)14);
        ctx->pc = 0x2604C4u;
        goto label_2604c4;
    }
    ctx->pc = 0x2604BCu;
    {
        const bool branch_taken_0x2604bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2604C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2604BCu;
            // 0x2604c0: 0x3868000e  xori        $t0, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2604bc) {
            ctx->pc = 0x260D70u;
            goto label_260d70;
        }
    }
    ctx->pc = 0x2604C4u;
label_2604c4:
    // 0x2604c4: 0x0  nop
    ctx->pc = 0x2604c4u;
    // NOP
label_2604c8:
    // 0x2604c8: 0x92650004  lbu         $a1, 0x4($s3)
    ctx->pc = 0x2604c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_2604cc:
    // 0x2604cc: 0x92640005  lbu         $a0, 0x5($s3)
    ctx->pc = 0x2604ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_2604d0:
    // 0x2604d0: 0xc6810100  lwc1        $f1, 0x100($s4)
    ctx->pc = 0x2604d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2604d4:
    // 0x2604d4: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x2604d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_2604d8:
    // 0x2604d8: 0x27a60144  addiu       $a2, $sp, 0x144
    ctx->pc = 0x2604d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_2604dc:
    // 0x2604dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2604dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2604e0:
    // 0x2604e0: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x2604e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_2604e4:
    // 0x2604e4: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2604e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_2604e8:
    // 0x2604e8: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x2604e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2604ec:
    // 0x2604ec: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2604ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2604f0:
    // 0x2604f0: 0xc6810104  lwc1        $f1, 0x104($s4)
    ctx->pc = 0x2604f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2604f4:
    // 0x2604f4: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2604f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2604f8:
    // 0x2604f8: 0xc6810108  lwc1        $f1, 0x108($s4)
    ctx->pc = 0x2604f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2604fc:
    // 0x2604fc: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x2604fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_260500:
    // 0x260500: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x260500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_260504:
    // 0x260504: 0xc681010c  lwc1        $f1, 0x10C($s4)
    ctx->pc = 0x260504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260508:
    // 0x260508: 0x27a6014c  addiu       $a2, $sp, 0x14C
    ctx->pc = 0x260508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_26050c:
    // 0x26050c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x26050cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_260510:
    // 0x260510: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x260510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_260514:
    // 0x260514: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x260514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_260518:
    // 0x260518: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x260518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26051c:
    // 0x26051c: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x26051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_260520:
    // 0x260520: 0xc4870004  lwc1        $f7, 0x4($a0)
    ctx->pc = 0x260520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_260524:
    // 0x260524: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x260524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_260528:
    // 0x260528: 0xc4880008  lwc1        $f8, 0x8($a0)
    ctx->pc = 0x260528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_26052c:
    // 0x26052c: 0x46024b81  sub.s       $f14, $f9, $f2
    ctx->pc = 0x26052cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
label_260530:
    // 0x260530: 0x46014ac1  sub.s       $f11, $f9, $f1
    ctx->pc = 0x260530u;
    ctx->f[11] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
label_260534:
    // 0x260534: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x260534u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_260538:
    // 0x260538: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x260538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26053c:
    // 0x26053c: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x26053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_260540:
    // 0x260540: 0x46063b41  sub.s       $f13, $f7, $f6
    ctx->pc = 0x260540u;
    ctx->f[13] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_260544:
    // 0x260544: 0x46062841  sub.s       $f1, $f5, $f6
    ctx->pc = 0x260544u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_260548:
    // 0x260548: 0x46053a41  sub.s       $f9, $f7, $f5
    ctx->pc = 0x260548u;
    ctx->f[9] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
label_26054c:
    // 0x26054c: 0x46034281  sub.s       $f10, $f8, $f3
    ctx->pc = 0x26054cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
label_260550:
    // 0x260550: 0x46044301  sub.s       $f12, $f8, $f4
    ctx->pc = 0x260550u;
    ctx->f[12] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
label_260554:
    // 0x260554: 0x460e11c2  mul.s       $f7, $f2, $f14
    ctx->pc = 0x260554u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
label_260558:
    // 0x260558: 0x460d0982  mul.s       $f6, $f1, $f13
    ctx->pc = 0x260558u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
label_26055c:
    // 0x26055c: 0x460a681a  mula.s      $f13, $f10
    ctx->pc = 0x26055cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
label_260560:
    // 0x260560: 0x4609605d  msub.s      $f1, $f12, $f9
    ctx->pc = 0x260560u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[9]));
label_260564:
    // 0x260564: 0x46041941  sub.s       $f5, $f3, $f4
    ctx->pc = 0x260564u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_260568:
    // 0x260568: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x260568u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_26056c:
    // 0x26056c: 0x460b601a  mula.s      $f12, $f11
    ctx->pc = 0x26056cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
label_260570:
    // 0x260570: 0x460a705d  msub.s      $f1, $f14, $f10
    ctx->pc = 0x260570u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[10]));
label_260574:
    // 0x260574: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x260574u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_260578:
    // 0x260578: 0x460d4882  mul.s       $f2, $f9, $f13
    ctx->pc = 0x260578u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
label_26057c:
    // 0x26057c: 0x4609701a  mula.s      $f14, $f9
    ctx->pc = 0x26057cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[9]);
label_260580:
    // 0x260580: 0x460e5a02  mul.s       $f8, $f11, $f14
    ctx->pc = 0x260580u;
    ctx->f[8] = FPU_MUL_S(ctx->f[11], ctx->f[14]);
label_260584:
    // 0x260584: 0x460b6a5d  msub.s      $f9, $f13, $f11
    ctx->pc = 0x260584u;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[11]));
label_260588:
    // 0x260588: 0x46024018  adda.s      $f8, $f2
    ctx->pc = 0x260588u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
label_26058c:
    // 0x26058c: 0x460c521c  madd.s      $f8, $f10, $f12
    ctx->pc = 0x26058cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[12]));
label_260590:
    // 0x260590: 0x46063818  adda.s      $f7, $f6
    ctx->pc = 0x260590u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_260594:
    // 0x260594: 0x460c295c  madd.s      $f5, $f5, $f12
    ctx->pc = 0x260594u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[12]));
label_260598:
    // 0x260598: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x260598u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_26059c:
    // 0x26059c: 0x460d6842  mul.s       $f1, $f13, $f13
    ctx->pc = 0x26059cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_2605a0:
    // 0x2605a0: 0x460e7082  mul.s       $f2, $f14, $f14
    ctx->pc = 0x2605a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
label_2605a4:
    // 0x2605a4: 0x460948dc  madd.s      $f3, $f9, $f9
    ctx->pc = 0x2605a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[9]));
label_2605a8:
    // 0x2605a8: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2605a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2605ac:
    // 0x2605ac: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2605acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2605b0:
    // 0x2605b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2605b4:
    if (ctx->pc == 0x2605B4u) {
        ctx->pc = 0x2605B4u;
            // 0x2605b4: 0x460c609c  madd.s      $f2, $f12, $f12 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[12]));
        ctx->pc = 0x2605B8u;
        goto label_2605b8;
    }
    ctx->pc = 0x2605B0u;
    {
        const bool branch_taken_0x2605b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2605B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2605B0u;
            // 0x2605b4: 0x460c609c  madd.s      $f2, $f12, $f12 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[12]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2605b0) {
            ctx->pc = 0x2605C0u;
            goto label_2605c0;
        }
    }
    ctx->pc = 0x2605B8u;
label_2605b8:
    // 0x2605b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2605bc:
    if (ctx->pc == 0x2605BCu) {
        ctx->pc = 0x2605BCu;
            // 0x2605bc: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2605C0u;
        goto label_2605c0;
    }
    ctx->pc = 0x2605B8u;
    {
        const bool branch_taken_0x2605b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2605BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2605B8u;
            // 0x2605bc: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2605b8) {
            ctx->pc = 0x2605C4u;
            goto label_2605c4;
        }
    }
    ctx->pc = 0x2605C0u;
label_2605c0:
    // 0x2605c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2605c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2605c4:
    // 0x2605c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2605c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2605c8:
    // 0x2605c8: 0x0  nop
    ctx->pc = 0x2605c8u;
    // NOP
label_2605cc:
    // 0x2605cc: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x2605ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2605d0:
    // 0x2605d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2605d4:
    if (ctx->pc == 0x2605D4u) {
        ctx->pc = 0x2605D4u;
            // 0x2605d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2605D8u;
        goto label_2605d8;
    }
    ctx->pc = 0x2605D0u;
    {
        const bool branch_taken_0x2605d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2605D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2605D0u;
            // 0x2605d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2605d0) {
            ctx->pc = 0x2605DCu;
            goto label_2605dc;
        }
    }
    ctx->pc = 0x2605D8u;
label_2605d8:
    // 0x2605d8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2605d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2605dc:
    // 0x2605dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2605dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2605e0:
    // 0x2605e0: 0x0  nop
    ctx->pc = 0x2605e0u;
    // NOP
label_2605e4:
    // 0x2605e4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2605e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2605e8:
    // 0x2605e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2605ec:
    if (ctx->pc == 0x2605ECu) {
        ctx->pc = 0x2605ECu;
            // 0x2605ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2605F0u;
        goto label_2605f0;
    }
    ctx->pc = 0x2605E8u;
    {
        const bool branch_taken_0x2605e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2605ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2605E8u;
            // 0x2605ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2605e8) {
            ctx->pc = 0x2605F4u;
            goto label_2605f4;
        }
    }
    ctx->pc = 0x2605F0u;
label_2605f0:
    // 0x2605f0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2605f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2605f4:
    // 0x2605f4: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x2605f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
label_2605f8:
    // 0x2605f8: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x2605f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
label_2605fc:
    // 0x2605fc: 0x27a80160  addiu       $t0, $sp, 0x160
    ctx->pc = 0x2605fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_260600:
    // 0x260600: 0xafa90160  sw          $t1, 0x160($sp)
    ctx->pc = 0x260600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 9));
label_260604:
    // 0x260604: 0x27a60174  addiu       $a2, $sp, 0x174
    ctx->pc = 0x260604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_260608:
    // 0x260608: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x260608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26060c:
    // 0x26060c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26060cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260610:
    // 0x260610: 0x0  nop
    ctx->pc = 0x260610u;
    // NOP
label_260614:
    // 0x260614: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x260614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_260618:
    // 0x260618: 0xc681011c  lwc1        $f1, 0x11C($s4)
    ctx->pc = 0x260618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26061c:
    // 0x26061c: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x26061cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_260620:
    // 0x260620: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x260620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_260624:
    // 0x260624: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x260624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260628:
    // 0x260628: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_26062c:
    if (ctx->pc == 0x26062Cu) {
        ctx->pc = 0x26062Cu;
            // 0x26062c: 0x30c6000c  andi        $a2, $a2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
        ctx->pc = 0x260630u;
        goto label_260630;
    }
    ctx->pc = 0x260628u;
    {
        const bool branch_taken_0x260628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26062Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260628u;
            // 0x26062c: 0x30c6000c  andi        $a2, $a2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260628) {
            ctx->pc = 0x260638u;
            goto label_260638;
        }
    }
    ctx->pc = 0x260630u;
label_260630:
    // 0x260630: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_260634:
    if (ctx->pc == 0x260634u) {
        ctx->pc = 0x260638u;
        goto label_260638;
    }
    ctx->pc = 0x260630u;
    {
        const bool branch_taken_0x260630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x260630) {
            ctx->pc = 0x260640u;
            goto label_260640;
        }
    }
    ctx->pc = 0x260638u;
label_260638:
    // 0x260638: 0x1000002f  b           . + 4 + (0x2F << 2)
label_26063c:
    if (ctx->pc == 0x26063Cu) {
        ctx->pc = 0x26063Cu;
            // 0x26063c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x260640u;
        goto label_260640;
    }
    ctx->pc = 0x260638u;
    {
        const bool branch_taken_0x260638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26063Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260638u;
            // 0x26063c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260638) {
            ctx->pc = 0x2606F8u;
            goto label_2606f8;
        }
    }
    ctx->pc = 0x260640u;
label_260640:
    // 0x260640: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x260640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_260644:
    // 0x260644: 0x460540c0  add.s       $f3, $f8, $f5
    ctx->pc = 0x260644u;
    ctx->f[3] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
label_260648:
    // 0x260648: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x260648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26064c:
    // 0x26064c: 0x460340c3  div.s       $f3, $f8, $f3
    ctx->pc = 0x26064cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[3] = ctx->f[8] / ctx->f[3];
label_260650:
    // 0x260650: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x260650u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_260654:
    // 0x260654: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x260654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260658:
    // 0x260658: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x260658u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_26065c:
    // 0x26065c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260660:
    // 0x260660: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x260660u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_260664:
    // 0x260664: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x260664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_260668:
    // 0x260668: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x260668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_26066c:
    // 0x26066c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x26066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260670:
    // 0x260670: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x260670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260674:
    // 0x260674: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x260674u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_260678:
    // 0x260678: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x260678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_26067c:
    // 0x26067c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x26067cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_260680:
    // 0x260680: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x260680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260684:
    // 0x260684: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x260684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260688:
    // 0x260688: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x260688u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_26068c:
    // 0x26068c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x26068cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_260690:
    // 0x260690: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x260690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_260694:
    // 0x260694: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x260694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260698:
    // 0x260698: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x260698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26069c:
    // 0x26069c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x26069cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2606a0:
    // 0x2606a0: 0x27a40134  addiu       $a0, $sp, 0x134
    ctx->pc = 0x2606a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_2606a4:
    // 0x2606a4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2606a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2606a8:
    // 0x2606a8: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2606a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_2606ac:
    // 0x2606ac: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2606acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2606b0:
    // 0x2606b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2606b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2606b4:
    // 0x2606b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2606b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2606b8:
    // 0x2606b8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2606b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_2606bc:
    // 0x2606bc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2606bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2606c0:
    // 0x2606c0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2606c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2606c4:
    // 0x2606c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2606c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2606c8:
    // 0x2606c8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2606c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2606cc:
    // 0x2606cc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2606ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2606d0:
    // 0x2606d0: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x2606d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_2606d4:
    // 0x2606d4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2606d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2606d8:
    // 0x2606d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2606d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2606dc:
    // 0x2606dc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2606dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2606e0:
    // 0x2606e0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2606e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2606e4:
    // 0x2606e4: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x2606e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2606e8:
    // 0x2606e8: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x2606e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_2606ec:
    // 0x2606ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2606ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2606f0:
    // 0x2606f0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2606f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2606f4:
    // 0x2606f4: 0x0  nop
    ctx->pc = 0x2606f4u;
    // NOP
label_2606f8:
    // 0x2606f8: 0x1000019d  b           . + 4 + (0x19D << 2)
label_2606fc:
    if (ctx->pc == 0x2606FCu) {
        ctx->pc = 0x260700u;
        goto label_260700;
    }
    ctx->pc = 0x2606F8u;
    {
        const bool branch_taken_0x2606f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2606f8) {
            ctx->pc = 0x260D70u;
            goto label_260d70;
        }
    }
    ctx->pc = 0x260700u;
label_260700:
    // 0x260700: 0x92660004  lbu         $a2, 0x4($s3)
    ctx->pc = 0x260700u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_260704:
    // 0x260704: 0x92650005  lbu         $a1, 0x5($s3)
    ctx->pc = 0x260704u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_260708:
    // 0x260708: 0xc6840100  lwc1        $f4, 0x100($s4)
    ctx->pc = 0x260708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26070c:
    // 0x26070c: 0x92640006  lbu         $a0, 0x6($s3)
    ctx->pc = 0x26070cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_260710:
    // 0x260710: 0x27a80144  addiu       $t0, $sp, 0x144
    ctx->pc = 0x260710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_260714:
    // 0x260714: 0x92630007  lbu         $v1, 0x7($s3)
    ctx->pc = 0x260714u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_260718:
    // 0x260718: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x260718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_26071c:
    // 0x26071c: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x26071cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_260720:
    // 0x260720: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x260720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_260724:
    // 0x260724: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x260724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_260728:
    // 0x260728: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x260728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_26072c:
    // 0x26072c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x26072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260730:
    // 0x260730: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x260730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_260734:
    // 0x260734: 0xc46a0000  lwc1        $f10, 0x0($v1)
    ctx->pc = 0x260734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_260738:
    // 0x260738: 0xc4cd0004  lwc1        $f13, 0x4($a2)
    ctx->pc = 0x260738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_26073c:
    // 0x26073c: 0xc48e0004  lwc1        $f14, 0x4($a0)
    ctx->pc = 0x26073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_260740:
    // 0x260740: 0xc4680004  lwc1        $f8, 0x4($v1)
    ctx->pc = 0x260740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_260744:
    // 0x260744: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x260744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_260748:
    // 0x260748: 0xc4cb0008  lwc1        $f11, 0x8($a2)
    ctx->pc = 0x260748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_26074c:
    // 0x26074c: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x26074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_260750:
    // 0x260750: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x260750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260754:
    // 0x260754: 0xc48c0008  lwc1        $f12, 0x8($a0)
    ctx->pc = 0x260754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_260758:
    // 0x260758: 0xc4660008  lwc1        $f6, 0x8($v1)
    ctx->pc = 0x260758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_26075c:
    // 0x26075c: 0x46004881  sub.s       $f2, $f9, $f0
    ctx->pc = 0x26075cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
label_260760:
    // 0x260760: 0x460a4bc1  sub.s       $f15, $f9, $f10
    ctx->pc = 0x260760u;
    ctx->f[15] = FPU_SUB_S(ctx->f[9], ctx->f[10]);
label_260764:
    // 0x260764: 0xe6440000  swc1        $f4, 0x0($s2)
    ctx->pc = 0x260764u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_260768:
    // 0x260768: 0xc6840104  lwc1        $f4, 0x104($s4)
    ctx->pc = 0x260768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26076c:
    // 0x26076c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26076cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_260770:
    // 0x260770: 0x460d3a41  sub.s       $f9, $f7, $f13
    ctx->pc = 0x260770u;
    ctx->f[9] = FPU_SUB_S(ctx->f[7], ctx->f[13]);
label_260774:
    // 0x260774: 0xe5040000  swc1        $f4, 0x0($t0)
    ctx->pc = 0x260774u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_260778:
    // 0x260778: 0x460e6c01  sub.s       $f16, $f13, $f14
    ctx->pc = 0x260778u;
    ctx->f[16] = FPU_SUB_S(ctx->f[13], ctx->f[14]);
label_26077c:
    // 0x26077c: 0x27a80148  addiu       $t0, $sp, 0x148
    ctx->pc = 0x26077cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_260780:
    // 0x260780: 0xc6840108  lwc1        $f4, 0x108($s4)
    ctx->pc = 0x260780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_260784:
    // 0x260784: 0x460e4441  sub.s       $f17, $f8, $f14
    ctx->pc = 0x260784u;
    ctx->f[17] = FPU_SUB_S(ctx->f[8], ctx->f[14]);
label_260788:
    // 0x260788: 0x46083b41  sub.s       $f13, $f7, $f8
    ctx->pc = 0x260788u;
    ctx->f[13] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
label_26078c:
    // 0x26078c: 0xe5040000  swc1        $f4, 0x0($t0)
    ctx->pc = 0x26078cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_260790:
    // 0x260790: 0x460c3201  sub.s       $f8, $f6, $f12
    ctx->pc = 0x260790u;
    ctx->f[8] = FPU_SUB_S(ctx->f[6], ctx->f[12]);
label_260794:
    // 0x260794: 0x27a8014c  addiu       $t0, $sp, 0x14C
    ctx->pc = 0x260794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_260798:
    // 0x260798: 0xc684010c  lwc1        $f4, 0x10C($s4)
    ctx->pc = 0x260798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26079c:
    // 0x26079c: 0x460c5b81  sub.s       $f14, $f11, $f12
    ctx->pc = 0x26079cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[11], ctx->f[12]);
label_2607a0:
    // 0x2607a0: 0x46015041  sub.s       $f1, $f10, $f1
    ctx->pc = 0x2607a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
label_2607a4:
    // 0x2607a4: 0xe5040000  swc1        $f4, 0x0($t0)
    ctx->pc = 0x2607a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_2607a8:
    // 0x2607a8: 0x460b2901  sub.s       $f4, $f5, $f11
    ctx->pc = 0x2607a8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[11]);
label_2607ac:
    // 0x2607ac: 0x4608481a  mula.s      $f9, $f8
    ctx->pc = 0x2607acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
label_2607b0:
    // 0x2607b0: 0x461122dd  msub.s      $f11, $f4, $f17
    ctx->pc = 0x2607b0u;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[17]));
label_2607b4:
    // 0x2607b4: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x2607b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2607b8:
    // 0x2607b8: 0x460811dd  msub.s      $f7, $f2, $f8
    ctx->pc = 0x2607b8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[8]));
label_2607bc:
    // 0x2607bc: 0x46062b01  sub.s       $f12, $f5, $f6
    ctx->pc = 0x2607bcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_2607c0:
    // 0x2607c0: 0x4611101a  mula.s      $f2, $f17
    ctx->pc = 0x2607c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[17]);
label_2607c4:
    // 0x2607c4: 0x4601499d  msub.s      $f6, $f9, $f1
    ctx->pc = 0x2607c4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
label_2607c8:
    // 0x2607c8: 0x4606481a  mula.s      $f9, $f6
    ctx->pc = 0x2607c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
label_2607cc:
    // 0x2607cc: 0x4607215d  msub.s      $f5, $f4, $f7
    ctx->pc = 0x2607ccu;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[7]));
label_2607d0:
    // 0x2607d0: 0x460b201a  mula.s      $f4, $f11
    ctx->pc = 0x2607d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
label_2607d4:
    // 0x2607d4: 0x4606129d  msub.s      $f10, $f2, $f6
    ctx->pc = 0x2607d4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[6]));
label_2607d8:
    // 0x2607d8: 0x4607101a  mula.s      $f2, $f7
    ctx->pc = 0x2607d8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_2607dc:
    // 0x2607dc: 0x460b4a5d  msub.s      $f9, $f9, $f11
    ctx->pc = 0x2607dcu;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[11]));
label_2607e0:
    // 0x2607e0: 0x4606881a  mula.s      $f17, $f6
    ctx->pc = 0x2607e0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[6]);
label_2607e4:
    // 0x2607e4: 0x4607411d  msub.s      $f4, $f8, $f7
    ctx->pc = 0x2607e4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[7]));
label_2607e8:
    // 0x2607e8: 0x460b401a  mula.s      $f8, $f11
    ctx->pc = 0x2607e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
label_2607ec:
    // 0x2607ec: 0x46060a1d  msub.s      $f8, $f1, $f6
    ctx->pc = 0x2607ecu;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
label_2607f0:
    // 0x2607f0: 0x4607081a  mula.s      $f1, $f7
    ctx->pc = 0x2607f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_2607f4:
    // 0x2607f4: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x2607f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2607f8:
    // 0x2607f8: 0x46050182  mul.s       $f6, $f0, $f5
    ctx->pc = 0x2607f8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2607fc:
    // 0x2607fc: 0x46057842  mul.s       $f1, $f15, $f5
    ctx->pc = 0x2607fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[5]);
label_260800:
    // 0x260800: 0x46088002  mul.s       $f0, $f16, $f8
    ctx->pc = 0x260800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[8]);
label_260804:
    // 0x260804: 0x460b89dd  msub.s      $f7, $f17, $f11
    ctx->pc = 0x260804u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[11]));
label_260808:
    // 0x260808: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x260808u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_26080c:
    // 0x26080c: 0x46086882  mul.s       $f2, $f13, $f8
    ctx->pc = 0x26080cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[8]);
label_260810:
    // 0x260810: 0x460a8142  mul.s       $f5, $f16, $f10
    ctx->pc = 0x260810u;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[10]);
label_260814:
    // 0x260814: 0x4607721c  madd.s      $f8, $f14, $f7
    ctx->pc = 0x260814u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[7]));
label_260818:
    // 0x260818: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x260818u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_26081c:
    // 0x26081c: 0x4609715c  madd.s      $f5, $f14, $f9
    ctx->pc = 0x26081cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[9]));
label_260820:
    // 0x260820: 0x46047902  mul.s       $f4, $f15, $f4
    ctx->pc = 0x260820u;
    ctx->f[4] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
label_260824:
    // 0x260824: 0x460a6802  mul.s       $f0, $f13, $f10
    ctx->pc = 0x260824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
label_260828:
    // 0x260828: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x260828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26082c:
    // 0x26082c: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x26082cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_260830:
    // 0x260830: 0x460760dc  madd.s      $f3, $f12, $f7
    ctx->pc = 0x260830u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[7]));
label_260834:
    // 0x260834: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x260834u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_260838:
    // 0x260838: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_26083c:
    if (ctx->pc == 0x26083Cu) {
        ctx->pc = 0x26083Cu;
            // 0x26083c: 0x4609611c  madd.s      $f4, $f12, $f9 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[9]));
        ctx->pc = 0x260840u;
        goto label_260840;
    }
    ctx->pc = 0x260838u;
    {
        const bool branch_taken_0x260838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26083Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260838u;
            // 0x26083c: 0x4609611c  madd.s      $f4, $f12, $f9 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[9]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260838) {
            ctx->pc = 0x260848u;
            goto label_260848;
        }
    }
    ctx->pc = 0x260840u;
label_260840:
    // 0x260840: 0x10000002  b           . + 4 + (0x2 << 2)
label_260844:
    if (ctx->pc == 0x260844u) {
        ctx->pc = 0x260844u;
            // 0x260844: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x260848u;
        goto label_260848;
    }
    ctx->pc = 0x260840u;
    {
        const bool branch_taken_0x260840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260840u;
            // 0x260844: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260840) {
            ctx->pc = 0x26084Cu;
            goto label_26084c;
        }
    }
    ctx->pc = 0x260848u;
label_260848:
    // 0x260848: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x260848u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26084c:
    // 0x26084c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26084cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260850:
    // 0x260850: 0x0  nop
    ctx->pc = 0x260850u;
    // NOP
label_260854:
    // 0x260854: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x260854u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260858:
    // 0x260858: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_26085c:
    if (ctx->pc == 0x26085Cu) {
        ctx->pc = 0x26085Cu;
            // 0x26085c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260860u;
        goto label_260860;
    }
    ctx->pc = 0x260858u;
    {
        const bool branch_taken_0x260858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260858u;
            // 0x26085c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260858) {
            ctx->pc = 0x260864u;
            goto label_260864;
        }
    }
    ctx->pc = 0x260860u;
label_260860:
    // 0x260860: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x260860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_260864:
    // 0x260864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x260864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260868:
    // 0x260868: 0x0  nop
    ctx->pc = 0x260868u;
    // NOP
label_26086c:
    // 0x26086c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x26086cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260870:
    // 0x260870: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_260874:
    if (ctx->pc == 0x260874u) {
        ctx->pc = 0x260874u;
            // 0x260874: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260878u;
        goto label_260878;
    }
    ctx->pc = 0x260870u;
    {
        const bool branch_taken_0x260870 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260870u;
            // 0x260874: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260870) {
            ctx->pc = 0x26087Cu;
            goto label_26087c;
        }
    }
    ctx->pc = 0x260878u;
label_260878:
    // 0x260878: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x260878u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26087c:
    // 0x26087c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26087cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260880:
    // 0x260880: 0x0  nop
    ctx->pc = 0x260880u;
    // NOP
label_260884:
    // 0x260884: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x260884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260888:
    // 0x260888: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_26088c:
    if (ctx->pc == 0x26088Cu) {
        ctx->pc = 0x26088Cu;
            // 0x26088c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x260890u;
        goto label_260890;
    }
    ctx->pc = 0x260888u;
    {
        const bool branch_taken_0x260888 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26088Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260888u;
            // 0x26088c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260888) {
            ctx->pc = 0x260894u;
            goto label_260894;
        }
    }
    ctx->pc = 0x260890u;
label_260890:
    // 0x260890: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x260890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260894:
    // 0x260894: 0x10b4025  or          $t0, $t0, $t3
    ctx->pc = 0x260894u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 11));
label_260898:
    // 0x260898: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x260898u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_26089c:
    // 0x26089c: 0x1484025  or          $t0, $t2, $t0
    ctx->pc = 0x26089cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
label_2608a0:
    // 0x2608a0: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x2608a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
label_2608a4:
    // 0x2608a4: 0x27aa015c  addiu       $t2, $sp, 0x15C
    ctx->pc = 0x2608a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_2608a8:
    // 0x2608a8: 0xafa8015c  sw          $t0, 0x15C($sp)
    ctx->pc = 0x2608a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 8));
label_2608ac:
    // 0x2608ac: 0x27a90170  addiu       $t1, $sp, 0x170
    ctx->pc = 0x2608acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2608b0:
    // 0x2608b0: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2608b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2608b4:
    // 0x2608b4: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x2608b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2608b8:
    // 0x2608b8: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2608b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_2608bc:
    // 0x2608bc: 0x8fa90170  lw          $t1, 0x170($sp)
    ctx->pc = 0x2608bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2608c0:
    // 0x2608c0: 0x11280007  beq         $t1, $t0, . + 4 + (0x7 << 2)
label_2608c4:
    if (ctx->pc == 0x2608C4u) {
        ctx->pc = 0x2608C8u;
        goto label_2608c8;
    }
    ctx->pc = 0x2608C0u;
    {
        const bool branch_taken_0x2608c0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x2608c0) {
            ctx->pc = 0x2608E0u;
            goto label_2608e0;
        }
    }
    ctx->pc = 0x2608C8u;
label_2608c8:
    // 0x2608c8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2608c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2608cc:
    // 0x2608cc: 0x11280004  beq         $t1, $t0, . + 4 + (0x4 << 2)
label_2608d0:
    if (ctx->pc == 0x2608D0u) {
        ctx->pc = 0x2608D0u;
            // 0x2608d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2608D4u;
        goto label_2608d4;
    }
    ctx->pc = 0x2608CCu;
    {
        const bool branch_taken_0x2608cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        ctx->pc = 0x2608D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2608CCu;
            // 0x2608d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608cc) {
            ctx->pc = 0x2608E0u;
            goto label_2608e0;
        }
    }
    ctx->pc = 0x2608D4u;
label_2608d4:
    // 0x2608d4: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2608d8:
    if (ctx->pc == 0x2608D8u) {
        ctx->pc = 0x2608DCu;
        goto label_2608dc;
    }
    ctx->pc = 0x2608D4u;
    {
        const bool branch_taken_0x2608d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2608d4) {
            ctx->pc = 0x260A08u;
            goto label_260a08;
        }
    }
    ctx->pc = 0x2608DCu;
label_2608dc:
    // 0x2608dc: 0x0  nop
    ctx->pc = 0x2608dcu;
    // NOP
label_2608e0:
    // 0x2608e0: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x2608e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
label_2608e4:
    // 0x2608e4: 0x46034001  sub.s       $f0, $f8, $f3
    ctx->pc = 0x2608e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
label_2608e8:
    // 0x2608e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2608e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2608ec:
    // 0x2608ec: 0x46004183  div.s       $f6, $f8, $f0
    ctx->pc = 0x2608ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[6] = ctx->f[8] / ctx->f[0];
label_2608f0:
    // 0x2608f0: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x2608f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_2608f4:
    // 0x2608f4: 0x46002943  div.s       $f5, $f5, $f0
    ctx->pc = 0x2608f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[0];
label_2608f8:
    // 0x2608f8: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x2608f8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2608fc:
    // 0x2608fc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2608fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_260900:
    // 0x260900: 0x46061901  sub.s       $f4, $f3, $f6
    ctx->pc = 0x260900u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_260904:
    // 0x260904: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x260904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260908:
    // 0x260908: 0x4602201a  mula.s      $f4, $f2
    ctx->pc = 0x260908u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_26090c:
    // 0x26090c: 0x46051881  sub.s       $f2, $f3, $f5
    ctx->pc = 0x26090cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_260910:
    // 0x260910: 0x4601301c  madd.s      $f0, $f6, $f1
    ctx->pc = 0x260910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
label_260914:
    // 0x260914: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x260914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_260918:
    // 0x260918: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x260918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26091c:
    // 0x26091c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x26091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260920:
    // 0x260920: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x260920u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_260924:
    // 0x260924: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x260924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
label_260928:
    // 0x260928: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x260928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_26092c:
    // 0x26092c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x26092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260930:
    // 0x260930: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x260930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260934:
    // 0x260934: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x260934u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_260938:
    // 0x260938: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x260938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
label_26093c:
    // 0x26093c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x26093cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_260940:
    // 0x260940: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x260940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260944:
    // 0x260944: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x260944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260948:
    // 0x260948: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x260948u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_26094c:
    // 0x26094c: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x26094cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
label_260950:
    // 0x260950: 0x27a50104  addiu       $a1, $sp, 0x104
    ctx->pc = 0x260950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_260954:
    // 0x260954: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x260954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_260958:
    // 0x260958: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x260958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26095c:
    // 0x26095c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x26095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260960:
    // 0x260960: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x260960u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_260964:
    // 0x260964: 0x4600281c  madd.s      $f0, $f5, $f0
    ctx->pc = 0x260964u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
label_260968:
    // 0x260968: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x260968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_26096c:
    // 0x26096c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x26096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260970:
    // 0x260970: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x260970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260974:
    // 0x260974: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x260974u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_260978:
    // 0x260978: 0x4600281c  madd.s      $f0, $f5, $f0
    ctx->pc = 0x260978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
label_26097c:
    // 0x26097c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x26097cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_260980:
    // 0x260980: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x260980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260984:
    // 0x260984: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x260984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_260988:
    // 0x260988: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x260988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26098c:
    // 0x26098c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x26098cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_260990:
    // 0x260990: 0x4600281c  madd.s      $f0, $f5, $f0
    ctx->pc = 0x260990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
label_260994:
    // 0x260994: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x260994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_260998:
    // 0x260998: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x260998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26099c:
    // 0x26099c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x26099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2609a0:
    // 0x2609a0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2609a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2609a4:
    // 0x2609a4: 0x4600281c  madd.s      $f0, $f5, $f0
    ctx->pc = 0x2609a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
label_2609a8:
    // 0x2609a8: 0x27a3010c  addiu       $v1, $sp, 0x10C
    ctx->pc = 0x2609a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_2609ac:
    // 0x2609ac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2609acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2609b0:
    // 0x2609b0: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2609b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2609b4:
    // 0x2609b4: 0x27a30104  addiu       $v1, $sp, 0x104
    ctx->pc = 0x2609b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_2609b8:
    // 0x2609b8: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2609b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2609bc:
    // 0x2609bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2609bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2609c0:
    // 0x2609c0: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2609c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_2609c4:
    // 0x2609c4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2609c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2609c8:
    // 0x2609c8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2609c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2609cc:
    // 0x2609cc: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x2609ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_2609d0:
    // 0x2609d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2609d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2609d4:
    // 0x2609d4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2609d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2609d8:
    // 0x2609d8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2609d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2609dc:
    // 0x2609dc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2609dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2609e0:
    // 0x2609e0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2609e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2609e4:
    // 0x2609e4: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x2609e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_2609e8:
    // 0x2609e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2609e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2609ec:
    // 0x2609ec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2609ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2609f0:
    // 0x2609f0: 0x27a3010c  addiu       $v1, $sp, 0x10C
    ctx->pc = 0x2609f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_2609f4:
    // 0x2609f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2609f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2609f8:
    // 0x2609f8: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x2609f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2609fc:
    // 0x2609fc: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x2609fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_260a00:
    // 0x260a00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260a00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_260a04:
    // 0x260a04: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260a08:
    // 0x260a08: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_260a0c:
    if (ctx->pc == 0x260A0Cu) {
        ctx->pc = 0x260A10u;
        goto label_260a10;
    }
    ctx->pc = 0x260A08u;
    {
        const bool branch_taken_0x260a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260a08) {
            ctx->pc = 0x260D70u;
            goto label_260d70;
        }
    }
    ctx->pc = 0x260A10u;
label_260a10:
    // 0x260a10: 0x92660004  lbu         $a2, 0x4($s3)
    ctx->pc = 0x260a10u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_260a14:
    // 0x260a14: 0x92650005  lbu         $a1, 0x5($s3)
    ctx->pc = 0x260a14u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_260a18:
    // 0x260a18: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x260a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_260a1c:
    // 0x260a1c: 0x92640006  lbu         $a0, 0x6($s3)
    ctx->pc = 0x260a1cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_260a20:
    // 0x260a20: 0x92630007  lbu         $v1, 0x7($s3)
    ctx->pc = 0x260a20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_260a24:
    // 0x260a24: 0x2864021  addu        $t0, $s4, $a2
    ctx->pc = 0x260a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_260a28:
    // 0x260a28: 0x2853021  addu        $a2, $s4, $a1
    ctx->pc = 0x260a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_260a2c:
    // 0x260a2c: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x260a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_260a30:
    // 0x260a30: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x260a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_260a34:
    // 0x260a34: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x260a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260a38:
    // 0x260a38: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x260a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_260a3c:
    // 0x260a3c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x260a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_260a40:
    // 0x260a40: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x260a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260a44:
    // 0x260a44: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x260a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_260a48:
    // 0x260a48: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x260a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260a4c:
    // 0x260a4c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x260a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_260a50:
    // 0x260a50: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x260a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260a54:
    // 0x260a54: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x260a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_260a58:
    // 0x260a58: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x260a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260a5c:
    // 0x260a5c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x260a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260a60:
    // 0x260a60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_260a64:
    // 0x260a64: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x260a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_260a68:
    // 0x260a68: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x260a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260a6c:
    // 0x260a6c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x260a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260a70:
    // 0x260a70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260a70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_260a74:
    // 0x260a74: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260a78:
    // 0x260a78: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x260a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260a7c:
    // 0x260a7c: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x260a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_260a80:
    // 0x260a80: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x260a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260a84:
    // 0x260a84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260a84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_260a88:
    // 0x260a88: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260a8c:
    // 0x260a8c: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x260a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260a90:
    // 0x260a90: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x260a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_260a94:
    // 0x260a94: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x260a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260a98:
    // 0x260a98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260a98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_260a9c:
    // 0x260a9c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260aa0:
    // 0x260aa0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x260aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_260aa4:
    // 0x260aa4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x260aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260aa8:
    // 0x260aa8: 0xc51d0004  lwc1        $f29, 0x4($t0)
    ctx->pc = 0x260aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_260aac:
    // 0x260aac: 0xc4bf0008  lwc1        $f31, 0x8($a1)
    ctx->pc = 0x260aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_260ab0:
    // 0x260ab0: 0xc51c0008  lwc1        $f28, 0x8($t0)
    ctx->pc = 0x260ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_260ab4:
    // 0x260ab4: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x260ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_260ab8:
    // 0x260ab8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x260ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260abc:
    // 0x260abc: 0xc51e0000  lwc1        $f30, 0x0($t0)
    ctx->pc = 0x260abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_260ac0:
    // 0x260ac0: 0xc4d30000  lwc1        $f19, 0x0($a2)
    ctx->pc = 0x260ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_260ac4:
    // 0x260ac4: 0x46030401  sub.s       $f16, $f0, $f3
    ctx->pc = 0x260ac4u;
    ctx->f[16] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_260ac8:
    // 0x260ac8: 0x461fe301  sub.s       $f12, $f28, $f31
    ctx->pc = 0x260ac8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[28], ctx->f[31]);
label_260acc:
    // 0x260acc: 0x4602fbc1  sub.s       $f15, $f31, $f2
    ctx->pc = 0x260accu;
    ctx->f[15] = FPU_SUB_S(ctx->f[31], ctx->f[2]);
label_260ad0:
    // 0x260ad0: 0x4600eb41  sub.s       $f13, $f29, $f0
    ctx->pc = 0x260ad0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[29], ctx->f[0]);
label_260ad4:
    // 0x260ad4: 0x460c801a  mula.s      $f16, $f12
    ctx->pc = 0x260ad4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[12]);
label_260ad8:
    // 0x260ad8: 0x460d7a1d  msub.s      $f8, $f15, $f13
    ctx->pc = 0x260ad8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[13]));
label_260adc:
    // 0x260adc: 0x4601f381  sub.s       $f14, $f30, $f1
    ctx->pc = 0x260adcu;
    ctx->f[14] = FPU_SUB_S(ctx->f[30], ctx->f[1]);
label_260ae0:
    // 0x260ae0: 0x46130c41  sub.s       $f17, $f1, $f19
    ctx->pc = 0x260ae0u;
    ctx->f[17] = FPU_SUB_S(ctx->f[1], ctx->f[19]);
label_260ae4:
    // 0x260ae4: 0x460e781a  mula.s      $f15, $f14
    ctx->pc = 0x260ae4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[15], ctx->f[14]);
label_260ae8:
    // 0x260ae8: 0x460c89dd  msub.s      $f7, $f17, $f12
    ctx->pc = 0x260ae8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[12]));
label_260aec:
    // 0x260aec: 0x460d881a  mula.s      $f17, $f13
    ctx->pc = 0x260aecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[13]);
label_260af0:
    // 0x260af0: 0x46084482  mul.s       $f18, $f8, $f8
    ctx->pc = 0x260af0u;
    ctx->f[18] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_260af4:
    // 0x260af4: 0x46073902  mul.s       $f4, $f7, $f7
    ctx->pc = 0x260af4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_260af8:
    // 0x260af8: 0x460e819d  msub.s      $f6, $f16, $f14
    ctx->pc = 0x260af8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[14]));
label_260afc:
    // 0x260afc: 0x46049018  adda.s      $f18, $f4
    ctx->pc = 0x260afcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[18], ctx->f[4]);
label_260b00:
    // 0x260b00: 0x4606349c  madd.s      $f18, $f6, $f6
    ctx->pc = 0x260b00u;
    ctx->f[18] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
label_260b04:
    // 0x260b04: 0x461e9ac1  sub.s       $f11, $f19, $f30
    ctx->pc = 0x260b04u;
    ctx->f[11] = FPU_SUB_S(ctx->f[19], ctx->f[30]);
label_260b08:
    // 0x260b08: 0x461d1a81  sub.s       $f10, $f3, $f29
    ctx->pc = 0x260b08u;
    ctx->f[10] = FPU_SUB_S(ctx->f[3], ctx->f[29]);
label_260b0c:
    // 0x260b0c: 0x46059032  c.eq.s      $f18, $f5
    ctx->pc = 0x260b0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[18], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260b10:
    // 0x260b10: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_260b14:
    if (ctx->pc == 0x260B14u) {
        ctx->pc = 0x260B14u;
            // 0x260b14: 0x461c1241  sub.s       $f9, $f2, $f28 (Delay Slot)
        ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[28]);
        ctx->pc = 0x260B18u;
        goto label_260b18;
    }
    ctx->pc = 0x260B10u;
    {
        const bool branch_taken_0x260b10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x260B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260B10u;
            // 0x260b14: 0x461c1241  sub.s       $f9, $f2, $f28 (Delay Slot)
        ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b10) {
            ctx->pc = 0x260B38u;
            goto label_260b38;
        }
    }
    ctx->pc = 0x260B18u;
label_260b18:
    // 0x260b18: 0xc7a400dc  lwc1        $f4, 0xDC($sp)
    ctx->pc = 0x260b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_260b1c:
    // 0x260b1c: 0x0  nop
    ctx->pc = 0x260b1cu;
    // NOP
label_260b20:
    // 0x260b20: 0x46122496  rsqrt.s     $f18, $f4, $f18
    ctx->pc = 0x260b20u;
    ctx->f[18] = 1.0f / sqrtf(ctx->f[4]);
label_260b24:
    // 0x260b24: 0x0  nop
    ctx->pc = 0x260b24u;
    // NOP
label_260b28:
    // 0x260b28: 0x0  nop
    ctx->pc = 0x260b28u;
    // NOP
label_260b2c:
    // 0x260b2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_260b30:
    if (ctx->pc == 0x260B30u) {
        ctx->pc = 0x260B34u;
        goto label_260b34;
    }
    ctx->pc = 0x260B2Cu;
    {
        const bool branch_taken_0x260b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260b2c) {
            ctx->pc = 0x260B40u;
            goto label_260b40;
        }
    }
    ctx->pc = 0x260B34u;
label_260b34:
    // 0x260b34: 0x0  nop
    ctx->pc = 0x260b34u;
    // NOP
label_260b38:
    // 0x260b38: 0x46002c86  mov.s       $f18, $f5
    ctx->pc = 0x260b38u;
    ctx->f[18] = FPU_MOV_S(ctx->f[5]);
label_260b3c:
    // 0x260b3c: 0x0  nop
    ctx->pc = 0x260b3cu;
    // NOP
label_260b40:
    // 0x260b40: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x260b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_260b44:
    // 0x260b44: 0xc49a0004  lwc1        $f26, 0x4($a0)
    ctx->pc = 0x260b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_260b48:
    // 0x260b48: 0xc4990008  lwc1        $f25, 0x8($a0)
    ctx->pc = 0x260b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_260b4c:
    // 0x260b4c: 0xc49b0000  lwc1        $f27, 0x0($a0)
    ctx->pc = 0x260b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_260b50:
    // 0x260b50: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x260b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_260b54:
    // 0x260b54: 0x461239c2  mul.s       $f7, $f7, $f18
    ctx->pc = 0x260b54u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[18]);
label_260b58:
    // 0x260b58: 0x4603d0c1  sub.s       $f3, $f26, $f3
    ctx->pc = 0x260b58u;
    ctx->f[3] = FPU_SUB_S(ctx->f[26], ctx->f[3]);
label_260b5c:
    // 0x260b5c: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x260b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_260b60:
    // 0x260b60: 0x4613d901  sub.s       $f4, $f27, $f19
    ctx->pc = 0x260b60u;
    ctx->f[4] = FPU_SUB_S(ctx->f[27], ctx->f[19]);
label_260b64:
    // 0x260b64: 0x460f181a  mula.s      $f3, $f15
    ctx->pc = 0x260b64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
label_260b68:
    // 0x260b68: 0x4600d001  sub.s       $f0, $f26, $f0
    ctx->pc = 0x260b68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
label_260b6c:
    // 0x260b6c: 0x461dd681  sub.s       $f26, $f26, $f29
    ctx->pc = 0x260b6cu;
    ctx->f[26] = FPU_SUB_S(ctx->f[26], ctx->f[29]);
label_260b70:
    // 0x260b70: 0x46124202  mul.s       $f8, $f8, $f18
    ctx->pc = 0x260b70u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[18]);
label_260b74:
    // 0x260b74: 0x46123182  mul.s       $f6, $f6, $f18
    ctx->pc = 0x260b74u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[18]);
label_260b78:
    // 0x260b78: 0x46122942  mul.s       $f5, $f5, $f18
    ctx->pc = 0x260b78u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[18]);
label_260b7c:
    // 0x260b7c: 0x4602c881  sub.s       $f2, $f25, $f2
    ctx->pc = 0x260b7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[25], ctx->f[2]);
label_260b80:
    // 0x260b80: 0x4610149d  msub.s      $f18, $f2, $f16
    ctx->pc = 0x260b80u;
    ctx->f[18] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[16]));
label_260b84:
    // 0x260b84: 0x4611101a  mula.s      $f2, $f17
    ctx->pc = 0x260b84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[17]);
label_260b88:
    // 0x260b88: 0x461118c2  mul.s       $f3, $f3, $f17
    ctx->pc = 0x260b88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[17]);
label_260b8c:
    // 0x260b8c: 0x46102082  mul.s       $f2, $f4, $f16
    ctx->pc = 0x260b8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[16]);
label_260b90:
    // 0x260b90: 0x461fcf41  sub.s       $f29, $f25, $f31
    ctx->pc = 0x260b90u;
    ctx->f[29] = FPU_SUB_S(ctx->f[25], ctx->f[31]);
label_260b94:
    // 0x260b94: 0x461cce41  sub.s       $f25, $f25, $f28
    ctx->pc = 0x260b94u;
    ctx->f[25] = FPU_SUB_S(ctx->f[25], ctx->f[28]);
label_260b98:
    // 0x260b98: 0xc6980100  lwc1        $f24, 0x100($s4)
    ctx->pc = 0x260b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_260b9c:
    // 0x260b9c: 0xc6970104  lwc1        $f23, 0x104($s4)
    ctx->pc = 0x260b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_260ba0:
    // 0x260ba0: 0xc7d50000  lwc1        $f21, 0x0($fp)
    ctx->pc = 0x260ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_260ba4:
    // 0x260ba4: 0xc4730000  lwc1        $f19, 0x0($v1)
    ctx->pc = 0x260ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_260ba8:
    // 0x260ba8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x260ba8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_260bac:
    // 0x260bac: 0x460f23dd  msub.s      $f15, $f4, $f15
    ctx->pc = 0x260bacu;
    ctx->f[15] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[15]));
label_260bb0:
    // 0x260bb0: 0x46089442  mul.s       $f17, $f18, $f8
    ctx->pc = 0x260bb0u;
    ctx->f[17] = FPU_MUL_S(ctx->f[18], ctx->f[8]);
label_260bb4:
    // 0x260bb4: 0x27a30144  addiu       $v1, $sp, 0x144
    ctx->pc = 0x260bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_260bb8:
    // 0x260bb8: 0x460778c2  mul.s       $f3, $f15, $f7
    ctx->pc = 0x260bb8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
label_260bbc:
    // 0x260bbc: 0x46038818  adda.s      $f17, $f3
    ctx->pc = 0x260bbcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[17], ctx->f[3]);
label_260bc0:
    // 0x260bc0: 0x4606111c  madd.s      $f4, $f2, $f6
    ctx->pc = 0x260bc0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[6]));
label_260bc4:
    // 0x260bc4: 0x4609d01a  mula.s      $f26, $f9
    ctx->pc = 0x260bc4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[9]);
label_260bc8:
    // 0x260bc8: 0x460ac8dd  msub.s      $f3, $f25, $f10
    ctx->pc = 0x260bc8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[10]));
label_260bcc:
    // 0x260bcc: 0x460bd082  mul.s       $f2, $f26, $f11
    ctx->pc = 0x260bccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[26], ctx->f[11]);
label_260bd0:
    // 0x260bd0: 0x460bc81a  mula.s      $f25, $f11
    ctx->pc = 0x260bd0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[25], ctx->f[11]);
label_260bd4:
    // 0x260bd4: 0x461edf01  sub.s       $f28, $f27, $f30
    ctx->pc = 0x260bd4u;
    ctx->f[28] = FPU_SUB_S(ctx->f[27], ctx->f[30]);
label_260bd8:
    // 0x260bd8: 0x46081ac2  mul.s       $f11, $f3, $f8
    ctx->pc = 0x260bd8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
label_260bdc:
    // 0x260bdc: 0x460ae0c2  mul.s       $f3, $f28, $f10
    ctx->pc = 0x260bdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[28], ctx->f[10]);
label_260be0:
    // 0x260be0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x260be0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_260be4:
    // 0x260be4: 0x4609e25d  msub.s      $f9, $f28, $f9
    ctx->pc = 0x260be4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[28], ctx->f[9]));
label_260be8:
    // 0x260be8: 0x460748c2  mul.s       $f3, $f9, $f7
    ctx->pc = 0x260be8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
label_260bec:
    // 0x260bec: 0x46035818  adda.s      $f11, $f3
    ctx->pc = 0x260becu;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[3]);
label_260bf0:
    // 0x260bf0: 0xc6960108  lwc1        $f22, 0x108($s4)
    ctx->pc = 0x260bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_260bf4:
    // 0x260bf4: 0x4608c602  mul.s       $f24, $f24, $f8
    ctx->pc = 0x260bf4u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[8]);
label_260bf8:
    // 0x260bf8: 0x4607bdc2  mul.s       $f23, $f23, $f7
    ctx->pc = 0x260bf8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[7]);
label_260bfc:
    // 0x260bfc: 0x460610dc  madd.s      $f3, $f2, $f6
    ctx->pc = 0x260bfcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[6]));
label_260c00:
    // 0x260c00: 0x4617c018  adda.s      $f24, $f23
    ctx->pc = 0x260c00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[24], ctx->f[23]);
label_260c04:
    // 0x260c04: 0x4608ad42  mul.s       $f21, $f21, $f8
    ctx->pc = 0x260c04u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[8]);
label_260c08:
    // 0x260c08: 0x4607a502  mul.s       $f20, $f20, $f7
    ctx->pc = 0x260c08u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[7]);
label_260c0c:
    // 0x260c0c: 0x4606b09c  madd.s      $f2, $f22, $f6
    ctx->pc = 0x260c0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[6]));
label_260c10:
    // 0x260c10: 0x4614a818  adda.s      $f21, $f20
    ctx->pc = 0x260c10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_260c14:
    // 0x260c14: 0x46069bdc  madd.s      $f15, $f19, $f6
    ctx->pc = 0x260c14u;
    ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[19], ctx->f[6]));
label_260c18:
    // 0x260c18: 0x46087a42  mul.s       $f9, $f15, $f8
    ctx->pc = 0x260c18u;
    ctx->f[9] = FPU_MUL_S(ctx->f[15], ctx->f[8]);
label_260c1c:
    // 0x260c1c: 0x4609da40  add.s       $f9, $f27, $f9
    ctx->pc = 0x260c1cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[27], ctx->f[9]);
label_260c20:
    // 0x260c20: 0xe7a90120  swc1        $f9, 0x120($sp)
    ctx->pc = 0x260c20u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_260c24:
    // 0x260c24: 0x460c001a  mula.s      $f0, $f12
    ctx->pc = 0x260c24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_260c28:
    // 0x260c28: 0xc48b0004  lwc1        $f11, 0x4($a0)
    ctx->pc = 0x260c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_260c2c:
    // 0x260c2c: 0x46077a42  mul.s       $f9, $f15, $f7
    ctx->pc = 0x260c2cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
label_260c30:
    // 0x260c30: 0x46095a40  add.s       $f9, $f11, $f9
    ctx->pc = 0x260c30u;
    ctx->f[9] = FPU_ADD_S(ctx->f[11], ctx->f[9]);
label_260c34:
    // 0x260c34: 0xe6290000  swc1        $f9, 0x0($s1)
    ctx->pc = 0x260c34u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_260c38:
    // 0x260c38: 0x460dea5d  msub.s      $f9, $f29, $f13
    ctx->pc = 0x260c38u;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[29], ctx->f[13]));
label_260c3c:
    // 0x260c3c: 0x46067a82  mul.s       $f10, $f15, $f6
    ctx->pc = 0x260c3cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[15], ctx->f[6]);
label_260c40:
    // 0x260c40: 0x46057ac2  mul.s       $f11, $f15, $f5
    ctx->pc = 0x260c40u;
    ctx->f[11] = FPU_MUL_S(ctx->f[15], ctx->f[5]);
label_260c44:
    // 0x260c44: 0xc48f0008  lwc1        $f15, 0x8($a0)
    ctx->pc = 0x260c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_260c48:
    // 0x260c48: 0x4601d841  sub.s       $f1, $f27, $f1
    ctx->pc = 0x260c48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[27], ctx->f[1]);
label_260c4c:
    // 0x260c4c: 0x460ee81a  mula.s      $f29, $f14
    ctx->pc = 0x260c4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[29], ctx->f[14]);
label_260c50:
    // 0x260c50: 0x460a7a80  add.s       $f10, $f15, $f10
    ctx->pc = 0x260c50u;
    ctx->f[10] = FPU_ADD_S(ctx->f[15], ctx->f[10]);
label_260c54:
    // 0x260c54: 0xe60a0000  swc1        $f10, 0x0($s0)
    ctx->pc = 0x260c54u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_260c58:
    // 0x260c58: 0x46084a82  mul.s       $f10, $f9, $f8
    ctx->pc = 0x260c58u;
    ctx->f[10] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
label_260c5c:
    // 0x260c5c: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x260c5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_260c60:
    // 0x260c60: 0x460c0a5d  msub.s      $f9, $f1, $f12
    ctx->pc = 0x260c60u;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[12]));
label_260c64:
    // 0x260c64: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x260c64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
label_260c68:
    // 0x260c68: 0xc48e000c  lwc1        $f14, 0xC($a0)
    ctx->pc = 0x260c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_260c6c:
    // 0x260c6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_260c70:
    // 0x260c70: 0x46074842  mul.s       $f1, $f9, $f7
    ctx->pc = 0x260c70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
label_260c74:
    // 0x260c74: 0x460b72c0  add.s       $f11, $f14, $f11
    ctx->pc = 0x260c74u;
    ctx->f[11] = FPU_ADD_S(ctx->f[14], ctx->f[11]);
label_260c78:
    // 0x260c78: 0xe6cb0000  swc1        $f11, 0x0($s6)
    ctx->pc = 0x260c78u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_260c7c:
    // 0x260c7c: 0x46015018  adda.s      $f10, $f1
    ctx->pc = 0x260c7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_260c80:
    // 0x260c80: 0xe6480000  swc1        $f8, 0x0($s2)
    ctx->pc = 0x260c80u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_260c84:
    // 0x260c84: 0x4606005c  madd.s      $f1, $f0, $f6
    ctx->pc = 0x260c84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[6]));
label_260c88:
    // 0x260c88: 0xe4670000  swc1        $f7, 0x0($v1)
    ctx->pc = 0x260c88u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260c8c:
    // 0x260c8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x260c8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260c90:
    // 0x260c90: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x260c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_260c94:
    // 0x260c94: 0xe4660000  swc1        $f6, 0x0($v1)
    ctx->pc = 0x260c94u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260c98:
    // 0x260c98: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x260c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_260c9c:
    // 0x260c9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x260c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260ca0:
    // 0x260ca0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_260ca4:
    if (ctx->pc == 0x260CA4u) {
        ctx->pc = 0x260CA4u;
            // 0x260ca4: 0xe4650000  swc1        $f5, 0x0($v1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x260CA8u;
        goto label_260ca8;
    }
    ctx->pc = 0x260CA0u;
    {
        const bool branch_taken_0x260ca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260CA0u;
            // 0x260ca4: 0xe4650000  swc1        $f5, 0x0($v1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ca0) {
            ctx->pc = 0x260CB0u;
            goto label_260cb0;
        }
    }
    ctx->pc = 0x260CA8u;
label_260ca8:
    // 0x260ca8: 0x10000002  b           . + 4 + (0x2 << 2)
label_260cac:
    if (ctx->pc == 0x260CACu) {
        ctx->pc = 0x260CACu;
            // 0x260cac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x260CB0u;
        goto label_260cb0;
    }
    ctx->pc = 0x260CA8u;
    {
        const bool branch_taken_0x260ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260CA8u;
            // 0x260cac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ca8) {
            ctx->pc = 0x260CB4u;
            goto label_260cb4;
        }
    }
    ctx->pc = 0x260CB0u;
label_260cb0:
    // 0x260cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x260cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260cb4:
    // 0x260cb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x260cb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260cb8:
    // 0x260cb8: 0x0  nop
    ctx->pc = 0x260cb8u;
    // NOP
label_260cbc:
    // 0x260cbc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x260cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260cc0:
    // 0x260cc0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_260cc4:
    if (ctx->pc == 0x260CC4u) {
        ctx->pc = 0x260CC4u;
            // 0x260cc4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260CC8u;
        goto label_260cc8;
    }
    ctx->pc = 0x260CC0u;
    {
        const bool branch_taken_0x260cc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260CC0u;
            // 0x260cc4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260cc0) {
            ctx->pc = 0x260CCCu;
            goto label_260ccc;
        }
    }
    ctx->pc = 0x260CC8u;
label_260cc8:
    // 0x260cc8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x260cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_260ccc:
    // 0x260ccc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x260cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260cd0:
    // 0x260cd0: 0x0  nop
    ctx->pc = 0x260cd0u;
    // NOP
label_260cd4:
    // 0x260cd4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x260cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260cd8:
    // 0x260cd8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_260cdc:
    if (ctx->pc == 0x260CDCu) {
        ctx->pc = 0x260CDCu;
            // 0x260cdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260CE0u;
        goto label_260ce0;
    }
    ctx->pc = 0x260CD8u;
    {
        const bool branch_taken_0x260cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260CD8u;
            // 0x260cdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260cd8) {
            ctx->pc = 0x260CE4u;
            goto label_260ce4;
        }
    }
    ctx->pc = 0x260CE0u;
label_260ce0:
    // 0x260ce0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x260ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_260ce4:
    // 0x260ce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x260ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260ce8:
    // 0x260ce8: 0x0  nop
    ctx->pc = 0x260ce8u;
    // NOP
label_260cec:
    // 0x260cec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x260cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260cf0:
    // 0x260cf0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_260cf4:
    if (ctx->pc == 0x260CF4u) {
        ctx->pc = 0x260CF4u;
            // 0x260cf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x260CF8u;
        goto label_260cf8;
    }
    ctx->pc = 0x260CF0u;
    {
        const bool branch_taken_0x260cf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x260CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260CF0u;
            // 0x260cf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260cf0) {
            ctx->pc = 0x260CFCu;
            goto label_260cfc;
        }
    }
    ctx->pc = 0x260CF8u;
label_260cf8:
    // 0x260cf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x260cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260cfc:
    // 0x260cfc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x260cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_260d00:
    // 0x260d00: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x260d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_260d04:
    // 0x260d04: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x260d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_260d08:
    // 0x260d08: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x260d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_260d0c:
    // 0x260d0c: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x260d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_260d10:
    // 0x260d10: 0xafa50158  sw          $a1, 0x158($sp)
    ctx->pc = 0x260d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 5));
label_260d14:
    // 0x260d14: 0x27a3016c  addiu       $v1, $sp, 0x16C
    ctx->pc = 0x260d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_260d18:
    // 0x260d18: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x260d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260d1c:
    // 0x260d1c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260d20:
    // 0x260d20: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x260d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_260d24:
    // 0x260d24: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x260d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_260d28:
    // 0x260d28: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_260d2c:
    if (ctx->pc == 0x260D2Cu) {
        ctx->pc = 0x260D2Cu;
            // 0x260d2c: 0x46004007  neg.s       $f0, $f8 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[8]);
        ctx->pc = 0x260D30u;
        goto label_260d30;
    }
    ctx->pc = 0x260D28u;
    {
        const bool branch_taken_0x260d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260D28u;
            // 0x260d2c: 0x46004007  neg.s       $f0, $f8 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d28) {
            ctx->pc = 0x260D58u;
            goto label_260d58;
        }
    }
    ctx->pc = 0x260D30u;
label_260d30:
    // 0x260d30: 0x27a30144  addiu       $v1, $sp, 0x144
    ctx->pc = 0x260d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_260d34:
    // 0x260d34: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x260d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_260d38:
    // 0x260d38: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x260d38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
label_260d3c:
    // 0x260d3c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260d40:
    // 0x260d40: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x260d40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
label_260d44:
    // 0x260d44: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x260d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_260d48:
    // 0x260d48: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260d4c:
    // 0x260d4c: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x260d4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
label_260d50:
    // 0x260d50: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x260d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_260d54:
    // 0x260d54: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x260d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_260d58:
    // 0x260d58: 0x3083000e  andi        $v1, $a0, 0xE
    ctx->pc = 0x260d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)14);
label_260d5c:
    // 0x260d5c: 0x10000004  b           . + 4 + (0x4 << 2)
label_260d60:
    if (ctx->pc == 0x260D60u) {
        ctx->pc = 0x260D60u;
            // 0x260d60: 0x3868000e  xori        $t0, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)14);
        ctx->pc = 0x260D64u;
        goto label_260d64;
    }
    ctx->pc = 0x260D5Cu;
    {
        const bool branch_taken_0x260d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260D5Cu;
            // 0x260d60: 0x3868000e  xori        $t0, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d5c) {
            ctx->pc = 0x260D70u;
            goto label_260d70;
        }
    }
    ctx->pc = 0x260D64u;
label_260d64:
    // 0x260d64: 0x0  nop
    ctx->pc = 0x260d64u;
    // NOP
label_260d68:
    // 0x260d68: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x260d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_260d6c:
    // 0x260d6c: 0x0  nop
    ctx->pc = 0x260d6cu;
    // NOP
label_260d70:
    // 0x260d70: 0x15000039  bnez        $t0, . + 4 + (0x39 << 2)
label_260d74:
    if (ctx->pc == 0x260D74u) {
        ctx->pc = 0x260D74u;
            // 0x260d74: 0x27a30134  addiu       $v1, $sp, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
        ctx->pc = 0x260D78u;
        goto label_260d78;
    }
    ctx->pc = 0x260D70u;
    {
        const bool branch_taken_0x260d70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x260D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260D70u;
            // 0x260d74: 0x27a30134  addiu       $v1, $sp, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d70) {
            ctx->pc = 0x260E58u;
            goto label_260e58;
        }
    }
    ctx->pc = 0x260D78u;
label_260d78:
    // 0x260d78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x260d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260d7c:
    // 0x260d7c: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x260d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_260d80:
    // 0x260d80: 0xc6470000  lwc1        $f7, 0x0($s2)
    ctx->pc = 0x260d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_260d84:
    // 0x260d84: 0xc7c50000  lwc1        $f5, 0x0($fp)
    ctx->pc = 0x260d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_260d88:
    // 0x260d88: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x260d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_260d8c:
    // 0x260d8c: 0xc6820114  lwc1        $f2, 0x114($s4)
    ctx->pc = 0x260d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_260d90:
    // 0x260d90: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x260d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_260d94:
    // 0x260d94: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x260d94u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_260d98:
    // 0x260d98: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x260d98u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_260d9c:
    // 0x260d9c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x260d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_260da0:
    // 0x260da0: 0x46062818  adda.s      $f5, $f6
    ctx->pc = 0x260da0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_260da4:
    // 0x260da4: 0xc6810110  lwc1        $f1, 0x110($s4)
    ctx->pc = 0x260da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260da8:
    // 0x260da8: 0xc6800118  lwc1        $f0, 0x118($s4)
    ctx->pc = 0x260da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260dac:
    // 0x260dac: 0x460320dc  madd.s      $f3, $f4, $f3
    ctx->pc = 0x260dacu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_260db0:
    // 0x260db0: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x260db0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_260db4:
    // 0x260db4: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x260db4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
label_260db8:
    // 0x260db8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x260db8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_260dbc:
    // 0x260dbc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x260dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260dc0:
    // 0x260dc0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_260dc4:
    if (ctx->pc == 0x260DC4u) {
        ctx->pc = 0x260DC8u;
        goto label_260dc8;
    }
    ctx->pc = 0x260DC0u;
    {
        const bool branch_taken_0x260dc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x260dc0) {
            ctx->pc = 0x260E58u;
            goto label_260e58;
        }
    }
    ctx->pc = 0x260DC8u;
label_260dc8:
    // 0x260dc8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x260dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260dcc:
    // 0x260dcc: 0x46071042  mul.s       $f1, $f2, $f7
    ctx->pc = 0x260dccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_260dd0:
    // 0x260dd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x260dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_260dd4:
    // 0x260dd4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x260dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_260dd8:
    // 0x260dd8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x260dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260ddc:
    // 0x260ddc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x260ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260de0:
    // 0x260de0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x260de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_260de4:
    // 0x260de4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x260de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_260de8:
    // 0x260de8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x260de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_260dec:
    // 0x260dec: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x260decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260df0:
    // 0x260df0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x260df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260df4:
    // 0x260df4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x260df4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_260df8:
    // 0x260df8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x260df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_260dfc:
    // 0x260dfc: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x260dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_260e00:
    // 0x260e00: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x260e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260e04:
    // 0x260e04: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x260e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260e08:
    // 0x260e08: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x260e08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_260e0c:
    // 0x260e0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x260e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_260e10:
    // 0x260e10: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x260e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_260e14:
    // 0x260e14: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x260e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260e18:
    // 0x260e18: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x260e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_260e1c:
    // 0x260e1c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x260e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260e20:
    // 0x260e20: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x260e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_260e24:
    // 0x260e24: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x260e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260e28:
    // 0x260e28: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x260e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
label_260e2c:
    // 0x260e2c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x260e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260e30:
    // 0x260e30: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x260e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_260e34:
    // 0x260e34: 0xe4e3001c  swc1        $f3, 0x1C($a3)
    ctx->pc = 0x260e34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_260e38:
    // 0x260e38: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x260e38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_260e3c:
    // 0x260e3c: 0xace30020  sw          $v1, 0x20($a3)
    ctx->pc = 0x260e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 3));
label_260e40:
    // 0x260e40: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x260e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_260e44:
    // 0x260e44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x260e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_260e48:
    // 0x260e48: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x260e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_260e4c:
    // 0x260e4c: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x260e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_260e50:
    // 0x260e50: 0x10000023  b           . + 4 + (0x23 << 2)
label_260e54:
    if (ctx->pc == 0x260E54u) {
        ctx->pc = 0x260E54u;
            // 0x260e54: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x260E58u;
        goto label_260e58;
    }
    ctx->pc = 0x260E50u;
    {
        const bool branch_taken_0x260e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260E50u;
            // 0x260e54: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e50) {
            ctx->pc = 0x260EE0u;
            goto label_260ee0;
        }
    }
    ctx->pc = 0x260E58u;
label_260e58:
    // 0x260e58: 0x96650002  lhu         $a1, 0x2($s3)
    ctx->pc = 0x260e58u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_260e5c:
    // 0x260e5c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x260e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_260e60:
    // 0x260e60: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_260e64:
    if (ctx->pc == 0x260E64u) {
        ctx->pc = 0x260E68u;
        goto label_260e68;
    }
    ctx->pc = 0x260E60u;
    {
        const bool branch_taken_0x260e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x260e60) {
            ctx->pc = 0x260E88u;
            goto label_260e88;
        }
    }
    ctx->pc = 0x260E68u;
label_260e68:
    // 0x260e68: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x260e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_260e6c:
    // 0x260e6c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x260e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_260e70:
    // 0x260e70: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x260e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_260e74:
    // 0x260e74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x260e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260e78:
    // 0x260e78: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x260e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260e7c:
    // 0x260e7c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x260e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_260e80:
    // 0x260e80: 0x320f809  jalr        $t9
label_260e84:
    if (ctx->pc == 0x260E84u) {
        ctx->pc = 0x260E88u;
        goto label_260e88;
    }
    ctx->pc = 0x260E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x260E88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x260E88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x260E88u; }
            if (ctx->pc != 0x260E88u) { return; }
        }
        }
    }
    ctx->pc = 0x260E88u;
label_260e88:
    // 0x260e88: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x260e88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_260e8c:
    // 0x260e8c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x260e8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_260e90:
    // 0x260e90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x260e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_260e94:
    // 0x260e94: 0xa2a30002  sb          $v1, 0x2($s5)
    ctx->pc = 0x260e94u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 3));
label_260e98:
    // 0x260e98: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x260e98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_260e9c:
    // 0x260e9c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x260e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_260ea0:
    // 0x260ea0: 0x2a33821  addu        $a3, $s5, $v1
    ctx->pc = 0x260ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_260ea4:
    // 0x260ea4: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x260ea4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_260ea8:
    // 0x260ea8: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x260ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_260eac:
    // 0x260eac: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x260eacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_260eb0:
    // 0x260eb0: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x260eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
label_260eb4:
    // 0x260eb4: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x260eb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_260eb8:
    // 0x260eb8: 0xa6630002  sh          $v1, 0x2($s3)
    ctx->pc = 0x260eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
label_260ebc:
    // 0x260ebc: 0x90e60008  lbu         $a2, 0x8($a3)
    ctx->pc = 0x260ebcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_260ec0:
    // 0x260ec0: 0x90e50009  lbu         $a1, 0x9($a3)
    ctx->pc = 0x260ec0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
label_260ec4:
    // 0x260ec4: 0x90e4000a  lbu         $a0, 0xA($a3)
    ctx->pc = 0x260ec4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
label_260ec8:
    // 0x260ec8: 0x90e3000b  lbu         $v1, 0xB($a3)
    ctx->pc = 0x260ec8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
label_260ecc:
    // 0x260ecc: 0xa2660004  sb          $a2, 0x4($s3)
    ctx->pc = 0x260eccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 6));
label_260ed0:
    // 0x260ed0: 0xa2650005  sb          $a1, 0x5($s3)
    ctx->pc = 0x260ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 5));
label_260ed4:
    // 0x260ed4: 0xa2640006  sb          $a0, 0x6($s3)
    ctx->pc = 0x260ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 4));
label_260ed8:
    // 0x260ed8: 0xa2630007  sb          $v1, 0x7($s3)
    ctx->pc = 0x260ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 3));
label_260edc:
    // 0x260edc: 0x0  nop
    ctx->pc = 0x260edcu;
    // NOP
label_260ee0:
    // 0x260ee0: 0x92a40002  lbu         $a0, 0x2($s5)
    ctx->pc = 0x260ee0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_260ee4:
    // 0x260ee4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x260ee4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_260ee8:
    // 0x260ee8: 0x2e4182b  sltu        $v1, $s7, $a0
    ctx->pc = 0x260ee8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_260eec:
    // 0x260eec: 0x1460fbc4  bnez        $v1, . + 4 + (-0x43C << 2)
label_260ef0:
    if (ctx->pc == 0x260EF0u) {
        ctx->pc = 0x260EF4u;
        goto label_260ef4;
    }
    ctx->pc = 0x260EECu;
    {
        const bool branch_taken_0x260eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260eec) {
            ctx->pc = 0x25FE00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25fe00;
        }
    }
    ctx->pc = 0x260EF4u;
label_260ef4:
    // 0x260ef4: 0x0  nop
    ctx->pc = 0x260ef4u;
    // NOP
label_260ef8:
    // 0x260ef8: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x260ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_260efc:
    // 0x260efc: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x260efcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_260f00:
    // 0x260f00: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_260f04:
    if (ctx->pc == 0x260F04u) {
        ctx->pc = 0x260F08u;
        goto label_260f08;
    }
    ctx->pc = 0x260F00u;
    {
        const bool branch_taken_0x260f00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x260f00) {
            ctx->pc = 0x260F68u;
            goto label_260f68;
        }
    }
    ctx->pc = 0x260F08u;
label_260f08:
    // 0x260f08: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x260f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_260f0c:
    // 0x260f0c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x260f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_260f10:
    // 0x260f10: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x260f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_260f14:
    // 0x260f14: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x260f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_260f18:
    // 0x260f18: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x260f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_260f1c:
    // 0x260f1c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x260f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_260f20:
    // 0x260f20: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x260f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_260f24:
    // 0x260f24: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x260f24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_260f28:
    // 0x260f28: 0x92a40001  lbu         $a0, 0x1($s5)
    ctx->pc = 0x260f28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_260f2c:
    // 0x260f2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x260f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_260f30:
    // 0x260f30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x260f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_260f34:
    // 0x260f34: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x260f34u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_260f38:
    // 0x260f38: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_260f3c:
    if (ctx->pc == 0x260F3Cu) {
        ctx->pc = 0x260F40u;
        goto label_260f40;
    }
    ctx->pc = 0x260F38u;
    {
        const bool branch_taken_0x260f38 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x260f38) {
            ctx->pc = 0x260F60u;
            goto label_260f60;
        }
    }
    ctx->pc = 0x260F40u;
label_260f40:
    // 0x260f40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x260f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_260f44:
    // 0x260f44: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x260f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_260f48:
    // 0x260f48: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x260f48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_260f4c:
    // 0x260f4c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x260f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_260f50:
    // 0x260f50: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x260f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_260f54:
    // 0x260f54: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_260f58:
    if (ctx->pc == 0x260F58u) {
        ctx->pc = 0x260F5Cu;
        goto label_260f5c;
    }
    ctx->pc = 0x260F54u;
    {
        const bool branch_taken_0x260f54 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x260f54) {
            ctx->pc = 0x260F40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_260f40;
        }
    }
    ctx->pc = 0x260F5Cu;
label_260f5c:
    // 0x260f5c: 0x0  nop
    ctx->pc = 0x260f5cu;
    // NOP
label_260f60:
    // 0x260f60: 0xc097eac  jal         func_25FAB0
label_260f64:
    if (ctx->pc == 0x260F64u) {
        ctx->pc = 0x260F64u;
            // 0x260f64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260F68u;
        goto label_260f68;
    }
    ctx->pc = 0x260F60u;
    SET_GPR_U32(ctx, 31, 0x260F68u);
    ctx->pc = 0x260F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260F60u;
            // 0x260f64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FAB0u;
    if (runtime->hasFunction(0x25FAB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260F68u; }
        if (ctx->pc != 0x260F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FAB0_0x25fab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260F68u; }
        if (ctx->pc != 0x260F68u) { return; }
    }
    ctx->pc = 0x260F68u;
label_260f68:
    // 0x260f68: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x260f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_260f6c:
    // 0x260f6c: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x260f6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_260f70:
    // 0x260f70: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x260f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_260f74:
    // 0x260f74: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x260f74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_260f78:
    // 0x260f78: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x260f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_260f7c:
    // 0x260f7c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x260f7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_260f80:
    // 0x260f80: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x260f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_260f84:
    // 0x260f84: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x260f84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_260f88:
    // 0x260f88: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x260f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_260f8c:
    // 0x260f8c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x260f8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_260f90:
    // 0x260f90: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x260f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_260f94:
    // 0x260f94: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x260f94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_260f98:
    // 0x260f98: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x260f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_260f9c:
    // 0x260f9c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x260f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_260fa0:
    // 0x260fa0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x260fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_260fa4:
    // 0x260fa4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x260fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_260fa8:
    // 0x260fa8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x260fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_260fac:
    // 0x260fac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x260facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_260fb0:
    // 0x260fb0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x260fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_260fb4:
    // 0x260fb4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x260fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_260fb8:
    // 0x260fb8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x260fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_260fbc:
    // 0x260fbc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x260fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_260fc0:
    // 0x260fc0: 0x3e00008  jr          $ra
label_260fc4:
    if (ctx->pc == 0x260FC4u) {
        ctx->pc = 0x260FC4u;
            // 0x260fc4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x260FC8u;
        goto label_260fc8;
    }
    ctx->pc = 0x260FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260FC0u;
            // 0x260fc4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x260FC8u;
label_260fc8:
    // 0x260fc8: 0x0  nop
    ctx->pc = 0x260fc8u;
    // NOP
label_260fcc:
    // 0x260fcc: 0x0  nop
    ctx->pc = 0x260fccu;
    // NOP
}
