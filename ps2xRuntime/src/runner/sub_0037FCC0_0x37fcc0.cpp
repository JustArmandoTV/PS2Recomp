#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037FCC0
// Address: 0x37fcc0 - 0x380950
void sub_0037FCC0_0x37fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FCC0_0x37fcc0");
#endif

    switch (ctx->pc) {
        case 0x37fcc0u: goto label_37fcc0;
        case 0x37fcc4u: goto label_37fcc4;
        case 0x37fcc8u: goto label_37fcc8;
        case 0x37fcccu: goto label_37fccc;
        case 0x37fcd0u: goto label_37fcd0;
        case 0x37fcd4u: goto label_37fcd4;
        case 0x37fcd8u: goto label_37fcd8;
        case 0x37fcdcu: goto label_37fcdc;
        case 0x37fce0u: goto label_37fce0;
        case 0x37fce4u: goto label_37fce4;
        case 0x37fce8u: goto label_37fce8;
        case 0x37fcecu: goto label_37fcec;
        case 0x37fcf0u: goto label_37fcf0;
        case 0x37fcf4u: goto label_37fcf4;
        case 0x37fcf8u: goto label_37fcf8;
        case 0x37fcfcu: goto label_37fcfc;
        case 0x37fd00u: goto label_37fd00;
        case 0x37fd04u: goto label_37fd04;
        case 0x37fd08u: goto label_37fd08;
        case 0x37fd0cu: goto label_37fd0c;
        case 0x37fd10u: goto label_37fd10;
        case 0x37fd14u: goto label_37fd14;
        case 0x37fd18u: goto label_37fd18;
        case 0x37fd1cu: goto label_37fd1c;
        case 0x37fd20u: goto label_37fd20;
        case 0x37fd24u: goto label_37fd24;
        case 0x37fd28u: goto label_37fd28;
        case 0x37fd2cu: goto label_37fd2c;
        case 0x37fd30u: goto label_37fd30;
        case 0x37fd34u: goto label_37fd34;
        case 0x37fd38u: goto label_37fd38;
        case 0x37fd3cu: goto label_37fd3c;
        case 0x37fd40u: goto label_37fd40;
        case 0x37fd44u: goto label_37fd44;
        case 0x37fd48u: goto label_37fd48;
        case 0x37fd4cu: goto label_37fd4c;
        case 0x37fd50u: goto label_37fd50;
        case 0x37fd54u: goto label_37fd54;
        case 0x37fd58u: goto label_37fd58;
        case 0x37fd5cu: goto label_37fd5c;
        case 0x37fd60u: goto label_37fd60;
        case 0x37fd64u: goto label_37fd64;
        case 0x37fd68u: goto label_37fd68;
        case 0x37fd6cu: goto label_37fd6c;
        case 0x37fd70u: goto label_37fd70;
        case 0x37fd74u: goto label_37fd74;
        case 0x37fd78u: goto label_37fd78;
        case 0x37fd7cu: goto label_37fd7c;
        case 0x37fd80u: goto label_37fd80;
        case 0x37fd84u: goto label_37fd84;
        case 0x37fd88u: goto label_37fd88;
        case 0x37fd8cu: goto label_37fd8c;
        case 0x37fd90u: goto label_37fd90;
        case 0x37fd94u: goto label_37fd94;
        case 0x37fd98u: goto label_37fd98;
        case 0x37fd9cu: goto label_37fd9c;
        case 0x37fda0u: goto label_37fda0;
        case 0x37fda4u: goto label_37fda4;
        case 0x37fda8u: goto label_37fda8;
        case 0x37fdacu: goto label_37fdac;
        case 0x37fdb0u: goto label_37fdb0;
        case 0x37fdb4u: goto label_37fdb4;
        case 0x37fdb8u: goto label_37fdb8;
        case 0x37fdbcu: goto label_37fdbc;
        case 0x37fdc0u: goto label_37fdc0;
        case 0x37fdc4u: goto label_37fdc4;
        case 0x37fdc8u: goto label_37fdc8;
        case 0x37fdccu: goto label_37fdcc;
        case 0x37fdd0u: goto label_37fdd0;
        case 0x37fdd4u: goto label_37fdd4;
        case 0x37fdd8u: goto label_37fdd8;
        case 0x37fddcu: goto label_37fddc;
        case 0x37fde0u: goto label_37fde0;
        case 0x37fde4u: goto label_37fde4;
        case 0x37fde8u: goto label_37fde8;
        case 0x37fdecu: goto label_37fdec;
        case 0x37fdf0u: goto label_37fdf0;
        case 0x37fdf4u: goto label_37fdf4;
        case 0x37fdf8u: goto label_37fdf8;
        case 0x37fdfcu: goto label_37fdfc;
        case 0x37fe00u: goto label_37fe00;
        case 0x37fe04u: goto label_37fe04;
        case 0x37fe08u: goto label_37fe08;
        case 0x37fe0cu: goto label_37fe0c;
        case 0x37fe10u: goto label_37fe10;
        case 0x37fe14u: goto label_37fe14;
        case 0x37fe18u: goto label_37fe18;
        case 0x37fe1cu: goto label_37fe1c;
        case 0x37fe20u: goto label_37fe20;
        case 0x37fe24u: goto label_37fe24;
        case 0x37fe28u: goto label_37fe28;
        case 0x37fe2cu: goto label_37fe2c;
        case 0x37fe30u: goto label_37fe30;
        case 0x37fe34u: goto label_37fe34;
        case 0x37fe38u: goto label_37fe38;
        case 0x37fe3cu: goto label_37fe3c;
        case 0x37fe40u: goto label_37fe40;
        case 0x37fe44u: goto label_37fe44;
        case 0x37fe48u: goto label_37fe48;
        case 0x37fe4cu: goto label_37fe4c;
        case 0x37fe50u: goto label_37fe50;
        case 0x37fe54u: goto label_37fe54;
        case 0x37fe58u: goto label_37fe58;
        case 0x37fe5cu: goto label_37fe5c;
        case 0x37fe60u: goto label_37fe60;
        case 0x37fe64u: goto label_37fe64;
        case 0x37fe68u: goto label_37fe68;
        case 0x37fe6cu: goto label_37fe6c;
        case 0x37fe70u: goto label_37fe70;
        case 0x37fe74u: goto label_37fe74;
        case 0x37fe78u: goto label_37fe78;
        case 0x37fe7cu: goto label_37fe7c;
        case 0x37fe80u: goto label_37fe80;
        case 0x37fe84u: goto label_37fe84;
        case 0x37fe88u: goto label_37fe88;
        case 0x37fe8cu: goto label_37fe8c;
        case 0x37fe90u: goto label_37fe90;
        case 0x37fe94u: goto label_37fe94;
        case 0x37fe98u: goto label_37fe98;
        case 0x37fe9cu: goto label_37fe9c;
        case 0x37fea0u: goto label_37fea0;
        case 0x37fea4u: goto label_37fea4;
        case 0x37fea8u: goto label_37fea8;
        case 0x37feacu: goto label_37feac;
        case 0x37feb0u: goto label_37feb0;
        case 0x37feb4u: goto label_37feb4;
        case 0x37feb8u: goto label_37feb8;
        case 0x37febcu: goto label_37febc;
        case 0x37fec0u: goto label_37fec0;
        case 0x37fec4u: goto label_37fec4;
        case 0x37fec8u: goto label_37fec8;
        case 0x37feccu: goto label_37fecc;
        case 0x37fed0u: goto label_37fed0;
        case 0x37fed4u: goto label_37fed4;
        case 0x37fed8u: goto label_37fed8;
        case 0x37fedcu: goto label_37fedc;
        case 0x37fee0u: goto label_37fee0;
        case 0x37fee4u: goto label_37fee4;
        case 0x37fee8u: goto label_37fee8;
        case 0x37feecu: goto label_37feec;
        case 0x37fef0u: goto label_37fef0;
        case 0x37fef4u: goto label_37fef4;
        case 0x37fef8u: goto label_37fef8;
        case 0x37fefcu: goto label_37fefc;
        case 0x37ff00u: goto label_37ff00;
        case 0x37ff04u: goto label_37ff04;
        case 0x37ff08u: goto label_37ff08;
        case 0x37ff0cu: goto label_37ff0c;
        case 0x37ff10u: goto label_37ff10;
        case 0x37ff14u: goto label_37ff14;
        case 0x37ff18u: goto label_37ff18;
        case 0x37ff1cu: goto label_37ff1c;
        case 0x37ff20u: goto label_37ff20;
        case 0x37ff24u: goto label_37ff24;
        case 0x37ff28u: goto label_37ff28;
        case 0x37ff2cu: goto label_37ff2c;
        case 0x37ff30u: goto label_37ff30;
        case 0x37ff34u: goto label_37ff34;
        case 0x37ff38u: goto label_37ff38;
        case 0x37ff3cu: goto label_37ff3c;
        case 0x37ff40u: goto label_37ff40;
        case 0x37ff44u: goto label_37ff44;
        case 0x37ff48u: goto label_37ff48;
        case 0x37ff4cu: goto label_37ff4c;
        case 0x37ff50u: goto label_37ff50;
        case 0x37ff54u: goto label_37ff54;
        case 0x37ff58u: goto label_37ff58;
        case 0x37ff5cu: goto label_37ff5c;
        case 0x37ff60u: goto label_37ff60;
        case 0x37ff64u: goto label_37ff64;
        case 0x37ff68u: goto label_37ff68;
        case 0x37ff6cu: goto label_37ff6c;
        case 0x37ff70u: goto label_37ff70;
        case 0x37ff74u: goto label_37ff74;
        case 0x37ff78u: goto label_37ff78;
        case 0x37ff7cu: goto label_37ff7c;
        case 0x37ff80u: goto label_37ff80;
        case 0x37ff84u: goto label_37ff84;
        case 0x37ff88u: goto label_37ff88;
        case 0x37ff8cu: goto label_37ff8c;
        case 0x37ff90u: goto label_37ff90;
        case 0x37ff94u: goto label_37ff94;
        case 0x37ff98u: goto label_37ff98;
        case 0x37ff9cu: goto label_37ff9c;
        case 0x37ffa0u: goto label_37ffa0;
        case 0x37ffa4u: goto label_37ffa4;
        case 0x37ffa8u: goto label_37ffa8;
        case 0x37ffacu: goto label_37ffac;
        case 0x37ffb0u: goto label_37ffb0;
        case 0x37ffb4u: goto label_37ffb4;
        case 0x37ffb8u: goto label_37ffb8;
        case 0x37ffbcu: goto label_37ffbc;
        case 0x37ffc0u: goto label_37ffc0;
        case 0x37ffc4u: goto label_37ffc4;
        case 0x37ffc8u: goto label_37ffc8;
        case 0x37ffccu: goto label_37ffcc;
        case 0x37ffd0u: goto label_37ffd0;
        case 0x37ffd4u: goto label_37ffd4;
        case 0x37ffd8u: goto label_37ffd8;
        case 0x37ffdcu: goto label_37ffdc;
        case 0x37ffe0u: goto label_37ffe0;
        case 0x37ffe4u: goto label_37ffe4;
        case 0x37ffe8u: goto label_37ffe8;
        case 0x37ffecu: goto label_37ffec;
        case 0x37fff0u: goto label_37fff0;
        case 0x37fff4u: goto label_37fff4;
        case 0x37fff8u: goto label_37fff8;
        case 0x37fffcu: goto label_37fffc;
        case 0x380000u: goto label_380000;
        case 0x380004u: goto label_380004;
        case 0x380008u: goto label_380008;
        case 0x38000cu: goto label_38000c;
        case 0x380010u: goto label_380010;
        case 0x380014u: goto label_380014;
        case 0x380018u: goto label_380018;
        case 0x38001cu: goto label_38001c;
        case 0x380020u: goto label_380020;
        case 0x380024u: goto label_380024;
        case 0x380028u: goto label_380028;
        case 0x38002cu: goto label_38002c;
        case 0x380030u: goto label_380030;
        case 0x380034u: goto label_380034;
        case 0x380038u: goto label_380038;
        case 0x38003cu: goto label_38003c;
        case 0x380040u: goto label_380040;
        case 0x380044u: goto label_380044;
        case 0x380048u: goto label_380048;
        case 0x38004cu: goto label_38004c;
        case 0x380050u: goto label_380050;
        case 0x380054u: goto label_380054;
        case 0x380058u: goto label_380058;
        case 0x38005cu: goto label_38005c;
        case 0x380060u: goto label_380060;
        case 0x380064u: goto label_380064;
        case 0x380068u: goto label_380068;
        case 0x38006cu: goto label_38006c;
        case 0x380070u: goto label_380070;
        case 0x380074u: goto label_380074;
        case 0x380078u: goto label_380078;
        case 0x38007cu: goto label_38007c;
        case 0x380080u: goto label_380080;
        case 0x380084u: goto label_380084;
        case 0x380088u: goto label_380088;
        case 0x38008cu: goto label_38008c;
        case 0x380090u: goto label_380090;
        case 0x380094u: goto label_380094;
        case 0x380098u: goto label_380098;
        case 0x38009cu: goto label_38009c;
        case 0x3800a0u: goto label_3800a0;
        case 0x3800a4u: goto label_3800a4;
        case 0x3800a8u: goto label_3800a8;
        case 0x3800acu: goto label_3800ac;
        case 0x3800b0u: goto label_3800b0;
        case 0x3800b4u: goto label_3800b4;
        case 0x3800b8u: goto label_3800b8;
        case 0x3800bcu: goto label_3800bc;
        case 0x3800c0u: goto label_3800c0;
        case 0x3800c4u: goto label_3800c4;
        case 0x3800c8u: goto label_3800c8;
        case 0x3800ccu: goto label_3800cc;
        case 0x3800d0u: goto label_3800d0;
        case 0x3800d4u: goto label_3800d4;
        case 0x3800d8u: goto label_3800d8;
        case 0x3800dcu: goto label_3800dc;
        case 0x3800e0u: goto label_3800e0;
        case 0x3800e4u: goto label_3800e4;
        case 0x3800e8u: goto label_3800e8;
        case 0x3800ecu: goto label_3800ec;
        case 0x3800f0u: goto label_3800f0;
        case 0x3800f4u: goto label_3800f4;
        case 0x3800f8u: goto label_3800f8;
        case 0x3800fcu: goto label_3800fc;
        case 0x380100u: goto label_380100;
        case 0x380104u: goto label_380104;
        case 0x380108u: goto label_380108;
        case 0x38010cu: goto label_38010c;
        case 0x380110u: goto label_380110;
        case 0x380114u: goto label_380114;
        case 0x380118u: goto label_380118;
        case 0x38011cu: goto label_38011c;
        case 0x380120u: goto label_380120;
        case 0x380124u: goto label_380124;
        case 0x380128u: goto label_380128;
        case 0x38012cu: goto label_38012c;
        case 0x380130u: goto label_380130;
        case 0x380134u: goto label_380134;
        case 0x380138u: goto label_380138;
        case 0x38013cu: goto label_38013c;
        case 0x380140u: goto label_380140;
        case 0x380144u: goto label_380144;
        case 0x380148u: goto label_380148;
        case 0x38014cu: goto label_38014c;
        case 0x380150u: goto label_380150;
        case 0x380154u: goto label_380154;
        case 0x380158u: goto label_380158;
        case 0x38015cu: goto label_38015c;
        case 0x380160u: goto label_380160;
        case 0x380164u: goto label_380164;
        case 0x380168u: goto label_380168;
        case 0x38016cu: goto label_38016c;
        case 0x380170u: goto label_380170;
        case 0x380174u: goto label_380174;
        case 0x380178u: goto label_380178;
        case 0x38017cu: goto label_38017c;
        case 0x380180u: goto label_380180;
        case 0x380184u: goto label_380184;
        case 0x380188u: goto label_380188;
        case 0x38018cu: goto label_38018c;
        case 0x380190u: goto label_380190;
        case 0x380194u: goto label_380194;
        case 0x380198u: goto label_380198;
        case 0x38019cu: goto label_38019c;
        case 0x3801a0u: goto label_3801a0;
        case 0x3801a4u: goto label_3801a4;
        case 0x3801a8u: goto label_3801a8;
        case 0x3801acu: goto label_3801ac;
        case 0x3801b0u: goto label_3801b0;
        case 0x3801b4u: goto label_3801b4;
        case 0x3801b8u: goto label_3801b8;
        case 0x3801bcu: goto label_3801bc;
        case 0x3801c0u: goto label_3801c0;
        case 0x3801c4u: goto label_3801c4;
        case 0x3801c8u: goto label_3801c8;
        case 0x3801ccu: goto label_3801cc;
        case 0x3801d0u: goto label_3801d0;
        case 0x3801d4u: goto label_3801d4;
        case 0x3801d8u: goto label_3801d8;
        case 0x3801dcu: goto label_3801dc;
        case 0x3801e0u: goto label_3801e0;
        case 0x3801e4u: goto label_3801e4;
        case 0x3801e8u: goto label_3801e8;
        case 0x3801ecu: goto label_3801ec;
        case 0x3801f0u: goto label_3801f0;
        case 0x3801f4u: goto label_3801f4;
        case 0x3801f8u: goto label_3801f8;
        case 0x3801fcu: goto label_3801fc;
        case 0x380200u: goto label_380200;
        case 0x380204u: goto label_380204;
        case 0x380208u: goto label_380208;
        case 0x38020cu: goto label_38020c;
        case 0x380210u: goto label_380210;
        case 0x380214u: goto label_380214;
        case 0x380218u: goto label_380218;
        case 0x38021cu: goto label_38021c;
        case 0x380220u: goto label_380220;
        case 0x380224u: goto label_380224;
        case 0x380228u: goto label_380228;
        case 0x38022cu: goto label_38022c;
        case 0x380230u: goto label_380230;
        case 0x380234u: goto label_380234;
        case 0x380238u: goto label_380238;
        case 0x38023cu: goto label_38023c;
        case 0x380240u: goto label_380240;
        case 0x380244u: goto label_380244;
        case 0x380248u: goto label_380248;
        case 0x38024cu: goto label_38024c;
        case 0x380250u: goto label_380250;
        case 0x380254u: goto label_380254;
        case 0x380258u: goto label_380258;
        case 0x38025cu: goto label_38025c;
        case 0x380260u: goto label_380260;
        case 0x380264u: goto label_380264;
        case 0x380268u: goto label_380268;
        case 0x38026cu: goto label_38026c;
        case 0x380270u: goto label_380270;
        case 0x380274u: goto label_380274;
        case 0x380278u: goto label_380278;
        case 0x38027cu: goto label_38027c;
        case 0x380280u: goto label_380280;
        case 0x380284u: goto label_380284;
        case 0x380288u: goto label_380288;
        case 0x38028cu: goto label_38028c;
        case 0x380290u: goto label_380290;
        case 0x380294u: goto label_380294;
        case 0x380298u: goto label_380298;
        case 0x38029cu: goto label_38029c;
        case 0x3802a0u: goto label_3802a0;
        case 0x3802a4u: goto label_3802a4;
        case 0x3802a8u: goto label_3802a8;
        case 0x3802acu: goto label_3802ac;
        case 0x3802b0u: goto label_3802b0;
        case 0x3802b4u: goto label_3802b4;
        case 0x3802b8u: goto label_3802b8;
        case 0x3802bcu: goto label_3802bc;
        case 0x3802c0u: goto label_3802c0;
        case 0x3802c4u: goto label_3802c4;
        case 0x3802c8u: goto label_3802c8;
        case 0x3802ccu: goto label_3802cc;
        case 0x3802d0u: goto label_3802d0;
        case 0x3802d4u: goto label_3802d4;
        case 0x3802d8u: goto label_3802d8;
        case 0x3802dcu: goto label_3802dc;
        case 0x3802e0u: goto label_3802e0;
        case 0x3802e4u: goto label_3802e4;
        case 0x3802e8u: goto label_3802e8;
        case 0x3802ecu: goto label_3802ec;
        case 0x3802f0u: goto label_3802f0;
        case 0x3802f4u: goto label_3802f4;
        case 0x3802f8u: goto label_3802f8;
        case 0x3802fcu: goto label_3802fc;
        case 0x380300u: goto label_380300;
        case 0x380304u: goto label_380304;
        case 0x380308u: goto label_380308;
        case 0x38030cu: goto label_38030c;
        case 0x380310u: goto label_380310;
        case 0x380314u: goto label_380314;
        case 0x380318u: goto label_380318;
        case 0x38031cu: goto label_38031c;
        case 0x380320u: goto label_380320;
        case 0x380324u: goto label_380324;
        case 0x380328u: goto label_380328;
        case 0x38032cu: goto label_38032c;
        case 0x380330u: goto label_380330;
        case 0x380334u: goto label_380334;
        case 0x380338u: goto label_380338;
        case 0x38033cu: goto label_38033c;
        case 0x380340u: goto label_380340;
        case 0x380344u: goto label_380344;
        case 0x380348u: goto label_380348;
        case 0x38034cu: goto label_38034c;
        case 0x380350u: goto label_380350;
        case 0x380354u: goto label_380354;
        case 0x380358u: goto label_380358;
        case 0x38035cu: goto label_38035c;
        case 0x380360u: goto label_380360;
        case 0x380364u: goto label_380364;
        case 0x380368u: goto label_380368;
        case 0x38036cu: goto label_38036c;
        case 0x380370u: goto label_380370;
        case 0x380374u: goto label_380374;
        case 0x380378u: goto label_380378;
        case 0x38037cu: goto label_38037c;
        case 0x380380u: goto label_380380;
        case 0x380384u: goto label_380384;
        case 0x380388u: goto label_380388;
        case 0x38038cu: goto label_38038c;
        case 0x380390u: goto label_380390;
        case 0x380394u: goto label_380394;
        case 0x380398u: goto label_380398;
        case 0x38039cu: goto label_38039c;
        case 0x3803a0u: goto label_3803a0;
        case 0x3803a4u: goto label_3803a4;
        case 0x3803a8u: goto label_3803a8;
        case 0x3803acu: goto label_3803ac;
        case 0x3803b0u: goto label_3803b0;
        case 0x3803b4u: goto label_3803b4;
        case 0x3803b8u: goto label_3803b8;
        case 0x3803bcu: goto label_3803bc;
        case 0x3803c0u: goto label_3803c0;
        case 0x3803c4u: goto label_3803c4;
        case 0x3803c8u: goto label_3803c8;
        case 0x3803ccu: goto label_3803cc;
        case 0x3803d0u: goto label_3803d0;
        case 0x3803d4u: goto label_3803d4;
        case 0x3803d8u: goto label_3803d8;
        case 0x3803dcu: goto label_3803dc;
        case 0x3803e0u: goto label_3803e0;
        case 0x3803e4u: goto label_3803e4;
        case 0x3803e8u: goto label_3803e8;
        case 0x3803ecu: goto label_3803ec;
        case 0x3803f0u: goto label_3803f0;
        case 0x3803f4u: goto label_3803f4;
        case 0x3803f8u: goto label_3803f8;
        case 0x3803fcu: goto label_3803fc;
        case 0x380400u: goto label_380400;
        case 0x380404u: goto label_380404;
        case 0x380408u: goto label_380408;
        case 0x38040cu: goto label_38040c;
        case 0x380410u: goto label_380410;
        case 0x380414u: goto label_380414;
        case 0x380418u: goto label_380418;
        case 0x38041cu: goto label_38041c;
        case 0x380420u: goto label_380420;
        case 0x380424u: goto label_380424;
        case 0x380428u: goto label_380428;
        case 0x38042cu: goto label_38042c;
        case 0x380430u: goto label_380430;
        case 0x380434u: goto label_380434;
        case 0x380438u: goto label_380438;
        case 0x38043cu: goto label_38043c;
        case 0x380440u: goto label_380440;
        case 0x380444u: goto label_380444;
        case 0x380448u: goto label_380448;
        case 0x38044cu: goto label_38044c;
        case 0x380450u: goto label_380450;
        case 0x380454u: goto label_380454;
        case 0x380458u: goto label_380458;
        case 0x38045cu: goto label_38045c;
        case 0x380460u: goto label_380460;
        case 0x380464u: goto label_380464;
        case 0x380468u: goto label_380468;
        case 0x38046cu: goto label_38046c;
        case 0x380470u: goto label_380470;
        case 0x380474u: goto label_380474;
        case 0x380478u: goto label_380478;
        case 0x38047cu: goto label_38047c;
        case 0x380480u: goto label_380480;
        case 0x380484u: goto label_380484;
        case 0x380488u: goto label_380488;
        case 0x38048cu: goto label_38048c;
        case 0x380490u: goto label_380490;
        case 0x380494u: goto label_380494;
        case 0x380498u: goto label_380498;
        case 0x38049cu: goto label_38049c;
        case 0x3804a0u: goto label_3804a0;
        case 0x3804a4u: goto label_3804a4;
        case 0x3804a8u: goto label_3804a8;
        case 0x3804acu: goto label_3804ac;
        case 0x3804b0u: goto label_3804b0;
        case 0x3804b4u: goto label_3804b4;
        case 0x3804b8u: goto label_3804b8;
        case 0x3804bcu: goto label_3804bc;
        case 0x3804c0u: goto label_3804c0;
        case 0x3804c4u: goto label_3804c4;
        case 0x3804c8u: goto label_3804c8;
        case 0x3804ccu: goto label_3804cc;
        case 0x3804d0u: goto label_3804d0;
        case 0x3804d4u: goto label_3804d4;
        case 0x3804d8u: goto label_3804d8;
        case 0x3804dcu: goto label_3804dc;
        case 0x3804e0u: goto label_3804e0;
        case 0x3804e4u: goto label_3804e4;
        case 0x3804e8u: goto label_3804e8;
        case 0x3804ecu: goto label_3804ec;
        case 0x3804f0u: goto label_3804f0;
        case 0x3804f4u: goto label_3804f4;
        case 0x3804f8u: goto label_3804f8;
        case 0x3804fcu: goto label_3804fc;
        case 0x380500u: goto label_380500;
        case 0x380504u: goto label_380504;
        case 0x380508u: goto label_380508;
        case 0x38050cu: goto label_38050c;
        case 0x380510u: goto label_380510;
        case 0x380514u: goto label_380514;
        case 0x380518u: goto label_380518;
        case 0x38051cu: goto label_38051c;
        case 0x380520u: goto label_380520;
        case 0x380524u: goto label_380524;
        case 0x380528u: goto label_380528;
        case 0x38052cu: goto label_38052c;
        case 0x380530u: goto label_380530;
        case 0x380534u: goto label_380534;
        case 0x380538u: goto label_380538;
        case 0x38053cu: goto label_38053c;
        case 0x380540u: goto label_380540;
        case 0x380544u: goto label_380544;
        case 0x380548u: goto label_380548;
        case 0x38054cu: goto label_38054c;
        case 0x380550u: goto label_380550;
        case 0x380554u: goto label_380554;
        case 0x380558u: goto label_380558;
        case 0x38055cu: goto label_38055c;
        case 0x380560u: goto label_380560;
        case 0x380564u: goto label_380564;
        case 0x380568u: goto label_380568;
        case 0x38056cu: goto label_38056c;
        case 0x380570u: goto label_380570;
        case 0x380574u: goto label_380574;
        case 0x380578u: goto label_380578;
        case 0x38057cu: goto label_38057c;
        case 0x380580u: goto label_380580;
        case 0x380584u: goto label_380584;
        case 0x380588u: goto label_380588;
        case 0x38058cu: goto label_38058c;
        case 0x380590u: goto label_380590;
        case 0x380594u: goto label_380594;
        case 0x380598u: goto label_380598;
        case 0x38059cu: goto label_38059c;
        case 0x3805a0u: goto label_3805a0;
        case 0x3805a4u: goto label_3805a4;
        case 0x3805a8u: goto label_3805a8;
        case 0x3805acu: goto label_3805ac;
        case 0x3805b0u: goto label_3805b0;
        case 0x3805b4u: goto label_3805b4;
        case 0x3805b8u: goto label_3805b8;
        case 0x3805bcu: goto label_3805bc;
        case 0x3805c0u: goto label_3805c0;
        case 0x3805c4u: goto label_3805c4;
        case 0x3805c8u: goto label_3805c8;
        case 0x3805ccu: goto label_3805cc;
        case 0x3805d0u: goto label_3805d0;
        case 0x3805d4u: goto label_3805d4;
        case 0x3805d8u: goto label_3805d8;
        case 0x3805dcu: goto label_3805dc;
        case 0x3805e0u: goto label_3805e0;
        case 0x3805e4u: goto label_3805e4;
        case 0x3805e8u: goto label_3805e8;
        case 0x3805ecu: goto label_3805ec;
        case 0x3805f0u: goto label_3805f0;
        case 0x3805f4u: goto label_3805f4;
        case 0x3805f8u: goto label_3805f8;
        case 0x3805fcu: goto label_3805fc;
        case 0x380600u: goto label_380600;
        case 0x380604u: goto label_380604;
        case 0x380608u: goto label_380608;
        case 0x38060cu: goto label_38060c;
        case 0x380610u: goto label_380610;
        case 0x380614u: goto label_380614;
        case 0x380618u: goto label_380618;
        case 0x38061cu: goto label_38061c;
        case 0x380620u: goto label_380620;
        case 0x380624u: goto label_380624;
        case 0x380628u: goto label_380628;
        case 0x38062cu: goto label_38062c;
        case 0x380630u: goto label_380630;
        case 0x380634u: goto label_380634;
        case 0x380638u: goto label_380638;
        case 0x38063cu: goto label_38063c;
        case 0x380640u: goto label_380640;
        case 0x380644u: goto label_380644;
        case 0x380648u: goto label_380648;
        case 0x38064cu: goto label_38064c;
        case 0x380650u: goto label_380650;
        case 0x380654u: goto label_380654;
        case 0x380658u: goto label_380658;
        case 0x38065cu: goto label_38065c;
        case 0x380660u: goto label_380660;
        case 0x380664u: goto label_380664;
        case 0x380668u: goto label_380668;
        case 0x38066cu: goto label_38066c;
        case 0x380670u: goto label_380670;
        case 0x380674u: goto label_380674;
        case 0x380678u: goto label_380678;
        case 0x38067cu: goto label_38067c;
        case 0x380680u: goto label_380680;
        case 0x380684u: goto label_380684;
        case 0x380688u: goto label_380688;
        case 0x38068cu: goto label_38068c;
        case 0x380690u: goto label_380690;
        case 0x380694u: goto label_380694;
        case 0x380698u: goto label_380698;
        case 0x38069cu: goto label_38069c;
        case 0x3806a0u: goto label_3806a0;
        case 0x3806a4u: goto label_3806a4;
        case 0x3806a8u: goto label_3806a8;
        case 0x3806acu: goto label_3806ac;
        case 0x3806b0u: goto label_3806b0;
        case 0x3806b4u: goto label_3806b4;
        case 0x3806b8u: goto label_3806b8;
        case 0x3806bcu: goto label_3806bc;
        case 0x3806c0u: goto label_3806c0;
        case 0x3806c4u: goto label_3806c4;
        case 0x3806c8u: goto label_3806c8;
        case 0x3806ccu: goto label_3806cc;
        case 0x3806d0u: goto label_3806d0;
        case 0x3806d4u: goto label_3806d4;
        case 0x3806d8u: goto label_3806d8;
        case 0x3806dcu: goto label_3806dc;
        case 0x3806e0u: goto label_3806e0;
        case 0x3806e4u: goto label_3806e4;
        case 0x3806e8u: goto label_3806e8;
        case 0x3806ecu: goto label_3806ec;
        case 0x3806f0u: goto label_3806f0;
        case 0x3806f4u: goto label_3806f4;
        case 0x3806f8u: goto label_3806f8;
        case 0x3806fcu: goto label_3806fc;
        case 0x380700u: goto label_380700;
        case 0x380704u: goto label_380704;
        case 0x380708u: goto label_380708;
        case 0x38070cu: goto label_38070c;
        case 0x380710u: goto label_380710;
        case 0x380714u: goto label_380714;
        case 0x380718u: goto label_380718;
        case 0x38071cu: goto label_38071c;
        case 0x380720u: goto label_380720;
        case 0x380724u: goto label_380724;
        case 0x380728u: goto label_380728;
        case 0x38072cu: goto label_38072c;
        case 0x380730u: goto label_380730;
        case 0x380734u: goto label_380734;
        case 0x380738u: goto label_380738;
        case 0x38073cu: goto label_38073c;
        case 0x380740u: goto label_380740;
        case 0x380744u: goto label_380744;
        case 0x380748u: goto label_380748;
        case 0x38074cu: goto label_38074c;
        case 0x380750u: goto label_380750;
        case 0x380754u: goto label_380754;
        case 0x380758u: goto label_380758;
        case 0x38075cu: goto label_38075c;
        case 0x380760u: goto label_380760;
        case 0x380764u: goto label_380764;
        case 0x380768u: goto label_380768;
        case 0x38076cu: goto label_38076c;
        case 0x380770u: goto label_380770;
        case 0x380774u: goto label_380774;
        case 0x380778u: goto label_380778;
        case 0x38077cu: goto label_38077c;
        case 0x380780u: goto label_380780;
        case 0x380784u: goto label_380784;
        case 0x380788u: goto label_380788;
        case 0x38078cu: goto label_38078c;
        case 0x380790u: goto label_380790;
        case 0x380794u: goto label_380794;
        case 0x380798u: goto label_380798;
        case 0x38079cu: goto label_38079c;
        case 0x3807a0u: goto label_3807a0;
        case 0x3807a4u: goto label_3807a4;
        case 0x3807a8u: goto label_3807a8;
        case 0x3807acu: goto label_3807ac;
        case 0x3807b0u: goto label_3807b0;
        case 0x3807b4u: goto label_3807b4;
        case 0x3807b8u: goto label_3807b8;
        case 0x3807bcu: goto label_3807bc;
        case 0x3807c0u: goto label_3807c0;
        case 0x3807c4u: goto label_3807c4;
        case 0x3807c8u: goto label_3807c8;
        case 0x3807ccu: goto label_3807cc;
        case 0x3807d0u: goto label_3807d0;
        case 0x3807d4u: goto label_3807d4;
        case 0x3807d8u: goto label_3807d8;
        case 0x3807dcu: goto label_3807dc;
        case 0x3807e0u: goto label_3807e0;
        case 0x3807e4u: goto label_3807e4;
        case 0x3807e8u: goto label_3807e8;
        case 0x3807ecu: goto label_3807ec;
        case 0x3807f0u: goto label_3807f0;
        case 0x3807f4u: goto label_3807f4;
        case 0x3807f8u: goto label_3807f8;
        case 0x3807fcu: goto label_3807fc;
        case 0x380800u: goto label_380800;
        case 0x380804u: goto label_380804;
        case 0x380808u: goto label_380808;
        case 0x38080cu: goto label_38080c;
        case 0x380810u: goto label_380810;
        case 0x380814u: goto label_380814;
        case 0x380818u: goto label_380818;
        case 0x38081cu: goto label_38081c;
        case 0x380820u: goto label_380820;
        case 0x380824u: goto label_380824;
        case 0x380828u: goto label_380828;
        case 0x38082cu: goto label_38082c;
        case 0x380830u: goto label_380830;
        case 0x380834u: goto label_380834;
        case 0x380838u: goto label_380838;
        case 0x38083cu: goto label_38083c;
        case 0x380840u: goto label_380840;
        case 0x380844u: goto label_380844;
        case 0x380848u: goto label_380848;
        case 0x38084cu: goto label_38084c;
        case 0x380850u: goto label_380850;
        case 0x380854u: goto label_380854;
        case 0x380858u: goto label_380858;
        case 0x38085cu: goto label_38085c;
        case 0x380860u: goto label_380860;
        case 0x380864u: goto label_380864;
        case 0x380868u: goto label_380868;
        case 0x38086cu: goto label_38086c;
        case 0x380870u: goto label_380870;
        case 0x380874u: goto label_380874;
        case 0x380878u: goto label_380878;
        case 0x38087cu: goto label_38087c;
        case 0x380880u: goto label_380880;
        case 0x380884u: goto label_380884;
        case 0x380888u: goto label_380888;
        case 0x38088cu: goto label_38088c;
        case 0x380890u: goto label_380890;
        case 0x380894u: goto label_380894;
        case 0x380898u: goto label_380898;
        case 0x38089cu: goto label_38089c;
        case 0x3808a0u: goto label_3808a0;
        case 0x3808a4u: goto label_3808a4;
        case 0x3808a8u: goto label_3808a8;
        case 0x3808acu: goto label_3808ac;
        case 0x3808b0u: goto label_3808b0;
        case 0x3808b4u: goto label_3808b4;
        case 0x3808b8u: goto label_3808b8;
        case 0x3808bcu: goto label_3808bc;
        case 0x3808c0u: goto label_3808c0;
        case 0x3808c4u: goto label_3808c4;
        case 0x3808c8u: goto label_3808c8;
        case 0x3808ccu: goto label_3808cc;
        case 0x3808d0u: goto label_3808d0;
        case 0x3808d4u: goto label_3808d4;
        case 0x3808d8u: goto label_3808d8;
        case 0x3808dcu: goto label_3808dc;
        case 0x3808e0u: goto label_3808e0;
        case 0x3808e4u: goto label_3808e4;
        case 0x3808e8u: goto label_3808e8;
        case 0x3808ecu: goto label_3808ec;
        case 0x3808f0u: goto label_3808f0;
        case 0x3808f4u: goto label_3808f4;
        case 0x3808f8u: goto label_3808f8;
        case 0x3808fcu: goto label_3808fc;
        case 0x380900u: goto label_380900;
        case 0x380904u: goto label_380904;
        case 0x380908u: goto label_380908;
        case 0x38090cu: goto label_38090c;
        case 0x380910u: goto label_380910;
        case 0x380914u: goto label_380914;
        case 0x380918u: goto label_380918;
        case 0x38091cu: goto label_38091c;
        case 0x380920u: goto label_380920;
        case 0x380924u: goto label_380924;
        case 0x380928u: goto label_380928;
        case 0x38092cu: goto label_38092c;
        case 0x380930u: goto label_380930;
        case 0x380934u: goto label_380934;
        case 0x380938u: goto label_380938;
        case 0x38093cu: goto label_38093c;
        case 0x380940u: goto label_380940;
        case 0x380944u: goto label_380944;
        case 0x380948u: goto label_380948;
        case 0x38094cu: goto label_38094c;
        default: break;
    }

    ctx->pc = 0x37fcc0u;

label_37fcc0:
    // 0x37fcc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37fcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37fcc4:
    // 0x37fcc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37fcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_37fcc8:
    // 0x37fcc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37fccc:
    // 0x37fccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37fcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37fcd0:
    // 0x37fcd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37fcd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37fcd4:
    // 0x37fcd4: 0xc0cfe90  jal         func_33FA40
label_37fcd8:
    if (ctx->pc == 0x37FCD8u) {
        ctx->pc = 0x37FCD8u;
            // 0x37fcd8: 0x8c8400e0  lw          $a0, 0xE0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->pc = 0x37FCDCu;
        goto label_37fcdc;
    }
    ctx->pc = 0x37FCD4u;
    SET_GPR_U32(ctx, 31, 0x37FCDCu);
    ctx->pc = 0x37FCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FCD4u;
            // 0x37fcd8: 0x8c8400e0  lw          $a0, 0xE0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33FA40u;
    if (runtime->hasFunction(0x33FA40u)) {
        auto targetFn = runtime->lookupFunction(0x33FA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FCDCu; }
        if (ctx->pc != 0x37FCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033FA40_0x33fa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FCDCu; }
        if (ctx->pc != 0x37FCDCu) { return; }
    }
    ctx->pc = 0x37FCDCu;
label_37fcdc:
    // 0x37fcdc: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x37fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_37fce0:
    // 0x37fce0: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x37fce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_37fce4:
    // 0x37fce4: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x37fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_37fce8:
    // 0x37fce8: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
label_37fcec:
    if (ctx->pc == 0x37FCECu) {
        ctx->pc = 0x37FCECu;
            // 0x37fcec: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x37FCF0u;
        goto label_37fcf0;
    }
    ctx->pc = 0x37FCE8u;
    {
        const bool branch_taken_0x37fce8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x37FCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FCE8u;
            // 0x37fcec: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fce8) {
            ctx->pc = 0x37FE64u;
            goto label_37fe64;
        }
    }
    ctx->pc = 0x37FCF0u;
label_37fcf0:
    // 0x37fcf0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x37fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_37fcf4:
    // 0x37fcf4: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x37fcf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_37fcf8:
    // 0x37fcf8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x37fcf8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_37fcfc:
    // 0x37fcfc: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x37fcfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_37fd00:
    // 0x37fd00: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_37fd04:
    if (ctx->pc == 0x37FD04u) {
        ctx->pc = 0x37FD04u;
            // 0x37fd04: 0x4263c  dsll32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
        ctx->pc = 0x37FD08u;
        goto label_37fd08;
    }
    ctx->pc = 0x37FD00u;
    {
        const bool branch_taken_0x37fd00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fd00) {
            ctx->pc = 0x37FD04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37FD00u;
            // 0x37fd04: 0x4263c  dsll32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37FD10u;
            goto label_37fd10;
        }
    }
    ctx->pc = 0x37FD08u;
label_37fd08:
    // 0x37fd08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37fd0c:
    // 0x37fd0c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x37fd0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_37fd10:
    // 0x37fd10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37fd14:
    // 0x37fd14: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x37fd14u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_37fd18:
    // 0x37fd18: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
label_37fd1c:
    if (ctx->pc == 0x37FD1Cu) {
        ctx->pc = 0x37FD1Cu;
            // 0x37fd1c: 0x8ca30ce0  lw          $v1, 0xCE0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3296)));
        ctx->pc = 0x37FD20u;
        goto label_37fd20;
    }
    ctx->pc = 0x37FD18u;
    {
        const bool branch_taken_0x37fd18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37fd18) {
            ctx->pc = 0x37FD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37FD18u;
            // 0x37fd1c: 0x8ca30ce0  lw          $v1, 0xCE0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37FD3Cu;
            goto label_37fd3c;
        }
    }
    ctx->pc = 0x37FD20u;
label_37fd20:
    // 0x37fd20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37fd24:
    // 0x37fd24: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_37fd28:
    if (ctx->pc == 0x37FD28u) {
        ctx->pc = 0x37FD28u;
            // 0x37fd28: 0x8ca30cdc  lw          $v1, 0xCDC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3292)));
        ctx->pc = 0x37FD2Cu;
        goto label_37fd2c;
    }
    ctx->pc = 0x37FD24u;
    {
        const bool branch_taken_0x37fd24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37fd24) {
            ctx->pc = 0x37FD28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37FD24u;
            // 0x37fd28: 0x8ca30cdc  lw          $v1, 0xCDC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37FD3Cu;
            goto label_37fd3c;
        }
    }
    ctx->pc = 0x37FD2Cu;
label_37fd2c:
    // 0x37fd2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37fd30:
    // 0x37fd30: 0x50830002  beql        $a0, $v1, . + 4 + (0x2 << 2)
label_37fd34:
    if (ctx->pc == 0x37FD34u) {
        ctx->pc = 0x37FD34u;
            // 0x37fd34: 0x8ca30cd8  lw          $v1, 0xCD8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3288)));
        ctx->pc = 0x37FD38u;
        goto label_37fd38;
    }
    ctx->pc = 0x37FD30u;
    {
        const bool branch_taken_0x37fd30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37fd30) {
            ctx->pc = 0x37FD34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37FD30u;
            // 0x37fd34: 0x8ca30cd8  lw          $v1, 0xCD8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37FD3Cu;
            goto label_37fd3c;
        }
    }
    ctx->pc = 0x37FD38u;
label_37fd38:
    // 0x37fd38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37fd3c:
    // 0x37fd3c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x37fd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_37fd40:
    // 0x37fd40: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x37fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_37fd44:
    // 0x37fd44: 0x2c610011  sltiu       $at, $v1, 0x11
    ctx->pc = 0x37fd44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_37fd48:
    // 0x37fd48: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
label_37fd4c:
    if (ctx->pc == 0x37FD4Cu) {
        ctx->pc = 0x37FD50u;
        goto label_37fd50;
    }
    ctx->pc = 0x37FD48u;
    {
        const bool branch_taken_0x37fd48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fd48) {
            ctx->pc = 0x37FE20u;
            goto label_37fe20;
        }
    }
    ctx->pc = 0x37FD50u;
label_37fd50:
    // 0x37fd50: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x37fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_37fd54:
    // 0x37fd54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37fd58:
    // 0x37fd58: 0x248459a0  addiu       $a0, $a0, 0x59A0
    ctx->pc = 0x37fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22944));
label_37fd5c:
    // 0x37fd5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37fd60:
    // 0x37fd60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37fd64:
    // 0x37fd64: 0x600008  jr          $v1
label_37fd68:
    if (ctx->pc == 0x37FD68u) {
        ctx->pc = 0x37FD6Cu;
        goto label_37fd6c;
    }
    ctx->pc = 0x37FD64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37FD6Cu: goto label_37fd6c;
            case 0x37FD74u: goto label_37fd74;
            case 0x37FD84u: goto label_37fd84;
            case 0x37FD94u: goto label_37fd94;
            case 0x37FDA4u: goto label_37fda4;
            case 0x37FDB4u: goto label_37fdb4;
            case 0x37FDCCu: goto label_37fdcc;
            case 0x37FDE4u: goto label_37fde4;
            case 0x37FDF4u: goto label_37fdf4;
            case 0x37FE08u: goto label_37fe08;
            case 0x37FE18u: goto label_37fe18;
            case 0x37FE20u: goto label_37fe20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37FD6Cu;
label_37fd6c:
    // 0x37fd6c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_37fd70:
    if (ctx->pc == 0x37FD70u) {
        ctx->pc = 0x37FD70u;
            // 0x37fd70: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x37FD74u;
        goto label_37fd74;
    }
    ctx->pc = 0x37FD6Cu;
    {
        const bool branch_taken_0x37fd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FD6Cu;
            // 0x37fd70: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd6c) {
            ctx->pc = 0x37FE68u;
            goto label_37fe68;
        }
    }
    ctx->pc = 0x37FD74u;
label_37fd74:
    // 0x37fd74: 0xc0dfc30  jal         func_37F0C0
label_37fd78:
    if (ctx->pc == 0x37FD78u) {
        ctx->pc = 0x37FD78u;
            // 0x37fd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FD7Cu;
        goto label_37fd7c;
    }
    ctx->pc = 0x37FD74u;
    SET_GPR_U32(ctx, 31, 0x37FD7Cu);
    ctx->pc = 0x37FD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FD74u;
            // 0x37fd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37F0C0u;
    if (runtime->hasFunction(0x37F0C0u)) {
        auto targetFn = runtime->lookupFunction(0x37F0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FD7Cu; }
        if (ctx->pc != 0x37FD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037F0C0_0x37f0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FD7Cu; }
        if (ctx->pc != 0x37FD7Cu) { return; }
    }
    ctx->pc = 0x37FD7Cu;
label_37fd7c:
    // 0x37fd7c: 0x10000028  b           . + 4 + (0x28 << 2)
label_37fd80:
    if (ctx->pc == 0x37FD80u) {
        ctx->pc = 0x37FD84u;
        goto label_37fd84;
    }
    ctx->pc = 0x37FD7Cu;
    {
        const bool branch_taken_0x37fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fd7c) {
            ctx->pc = 0x37FE20u;
            goto label_37fe20;
        }
    }
    ctx->pc = 0x37FD84u;
label_37fd84:
    // 0x37fd84: 0xc0dfb34  jal         func_37ECD0
label_37fd88:
    if (ctx->pc == 0x37FD88u) {
        ctx->pc = 0x37FD88u;
            // 0x37fd88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FD8Cu;
        goto label_37fd8c;
    }
    ctx->pc = 0x37FD84u;
    SET_GPR_U32(ctx, 31, 0x37FD8Cu);
    ctx->pc = 0x37FD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FD84u;
            // 0x37fd88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37ECD0u;
    if (runtime->hasFunction(0x37ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x37ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FD8Cu; }
        if (ctx->pc != 0x37FD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037ECD0_0x37ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FD8Cu; }
        if (ctx->pc != 0x37FD8Cu) { return; }
    }
    ctx->pc = 0x37FD8Cu;
label_37fd8c:
    // 0x37fd8c: 0x10000024  b           . + 4 + (0x24 << 2)
label_37fd90:
    if (ctx->pc == 0x37FD90u) {
        ctx->pc = 0x37FD94u;
        goto label_37fd94;
    }
    ctx->pc = 0x37FD8Cu;
    {
        const bool branch_taken_0x37fd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fd8c) {
            ctx->pc = 0x37FE20u;
            goto label_37fe20;
        }
    }
    ctx->pc = 0x37FD94u;
label_37fd94:
    // 0x37fd94: 0xc0df9c4  jal         func_37E710
label_37fd98:
    if (ctx->pc == 0x37FD98u) {
        ctx->pc = 0x37FD98u;
            // 0x37fd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FD9Cu;
        goto label_37fd9c;
    }
    ctx->pc = 0x37FD94u;
    SET_GPR_U32(ctx, 31, 0x37FD9Cu);
    ctx->pc = 0x37FD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FD94u;
            // 0x37fd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37E710u;
    if (runtime->hasFunction(0x37E710u)) {
        auto targetFn = runtime->lookupFunction(0x37E710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FD9Cu; }
        if (ctx->pc != 0x37FD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037E710_0x37e710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FD9Cu; }
        if (ctx->pc != 0x37FD9Cu) { return; }
    }
    ctx->pc = 0x37FD9Cu;
label_37fd9c:
    // 0x37fd9c: 0x10000020  b           . + 4 + (0x20 << 2)
label_37fda0:
    if (ctx->pc == 0x37FDA0u) {
        ctx->pc = 0x37FDA4u;
        goto label_37fda4;
    }
    ctx->pc = 0x37FD9Cu;
    {
        const bool branch_taken_0x37fd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fd9c) {
            ctx->pc = 0x37FE20u;
            goto label_37fe20;
        }
    }
    ctx->pc = 0x37FDA4u;
label_37fda4:
    // 0x37fda4: 0xc0dfa20  jal         func_37E880
label_37fda8:
    if (ctx->pc == 0x37FDA8u) {
        ctx->pc = 0x37FDA8u;
            // 0x37fda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FDACu;
        goto label_37fdac;
    }
    ctx->pc = 0x37FDA4u;
    SET_GPR_U32(ctx, 31, 0x37FDACu);
    ctx->pc = 0x37FDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FDA4u;
            // 0x37fda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37E880u;
    if (runtime->hasFunction(0x37E880u)) {
        auto targetFn = runtime->lookupFunction(0x37E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FDACu; }
        if (ctx->pc != 0x37FDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037E880_0x37e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FDACu; }
        if (ctx->pc != 0x37FDACu) { return; }
    }
    ctx->pc = 0x37FDACu;
label_37fdac:
    // 0x37fdac: 0x1000001c  b           . + 4 + (0x1C << 2)
label_37fdb0:
    if (ctx->pc == 0x37FDB0u) {
        ctx->pc = 0x37FDB4u;
        goto label_37fdb4;
    }
    ctx->pc = 0x37FDACu;
    {
        const bool branch_taken_0x37fdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fdac) {
            ctx->pc = 0x37FE20u;
            goto label_37fe20;
        }
    }
    ctx->pc = 0x37FDB4u;
label_37fdb4:
    // 0x37fdb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37fdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37fdb8:
    // 0x37fdb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37fdbc:
    // 0x37fdbc: 0xc0dfd54  jal         func_37F550
label_37fdc0:
    if (ctx->pc == 0x37FDC0u) {
        ctx->pc = 0x37FDC0u;
            // 0x37fdc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FDC4u;
        goto label_37fdc4;
    }
    ctx->pc = 0x37FDBCu;
    SET_GPR_U32(ctx, 31, 0x37FDC4u);
    ctx->pc = 0x37FDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FDBCu;
            // 0x37fdc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37F550u;
    if (runtime->hasFunction(0x37F550u)) {
        auto targetFn = runtime->lookupFunction(0x37F550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FDC4u; }
        if (ctx->pc != 0x37FDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037F550_0x37f550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FDC4u; }
        if (ctx->pc != 0x37FDC4u) { return; }
    }
    ctx->pc = 0x37FDC4u;
label_37fdc4:
    // 0x37fdc4: 0x10000016  b           . + 4 + (0x16 << 2)
label_37fdc8:
    if (ctx->pc == 0x37FDC8u) {
        ctx->pc = 0x37FDCCu;
        goto label_37fdcc;
    }
    ctx->pc = 0x37FDC4u;
    {
        const bool branch_taken_0x37fdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fdc4) {
            ctx->pc = 0x37FE20u;
            goto label_37fe20;
        }
    }
    ctx->pc = 0x37FDCCu;
label_37fdcc:
    // 0x37fdcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37fdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37fdd0:
    // 0x37fdd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37fdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37fdd4:
    // 0x37fdd4: 0xc0dfd54  jal         func_37F550
label_37fdd8:
    if (ctx->pc == 0x37FDD8u) {
        ctx->pc = 0x37FDD8u;
            // 0x37fdd8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x37FDDCu;
        goto label_37fddc;
    }
    ctx->pc = 0x37FDD4u;
    SET_GPR_U32(ctx, 31, 0x37FDDCu);
    ctx->pc = 0x37FDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FDD4u;
            // 0x37fdd8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37F550u;
    if (runtime->hasFunction(0x37F550u)) {
        auto targetFn = runtime->lookupFunction(0x37F550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FDDCu; }
        if (ctx->pc != 0x37FDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037F550_0x37f550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FDDCu; }
        if (ctx->pc != 0x37FDDCu) { return; }
    }
    ctx->pc = 0x37FDDCu;
label_37fddc:
    // 0x37fddc: 0x10000010  b           . + 4 + (0x10 << 2)
label_37fde0:
    if (ctx->pc == 0x37FDE0u) {
        ctx->pc = 0x37FDE4u;
        goto label_37fde4;
    }
    ctx->pc = 0x37FDDCu;
    {
        const bool branch_taken_0x37fddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fddc) {
            ctx->pc = 0x37FE20u;
            goto label_37fe20;
        }
    }
    ctx->pc = 0x37FDE4u;
label_37fde4:
    // 0x37fde4: 0xc0df738  jal         func_37DCE0
label_37fde8:
    if (ctx->pc == 0x37FDE8u) {
        ctx->pc = 0x37FDE8u;
            // 0x37fde8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FDECu;
        goto label_37fdec;
    }
    ctx->pc = 0x37FDE4u;
    SET_GPR_U32(ctx, 31, 0x37FDECu);
    ctx->pc = 0x37FDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FDE4u;
            // 0x37fde8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37DCE0u;
    if (runtime->hasFunction(0x37DCE0u)) {
        auto targetFn = runtime->lookupFunction(0x37DCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FDECu; }
        if (ctx->pc != 0x37FDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037DCE0_0x37dce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FDECu; }
        if (ctx->pc != 0x37FDECu) { return; }
    }
    ctx->pc = 0x37FDECu;
label_37fdec:
    // 0x37fdec: 0x1000000c  b           . + 4 + (0xC << 2)
label_37fdf0:
    if (ctx->pc == 0x37FDF0u) {
        ctx->pc = 0x37FDF4u;
        goto label_37fdf4;
    }
    ctx->pc = 0x37FDECu;
    {
        const bool branch_taken_0x37fdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fdec) {
            ctx->pc = 0x37FE20u;
            goto label_37fe20;
        }
    }
    ctx->pc = 0x37FDF4u;
label_37fdf4:
    // 0x37fdf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37fdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37fdf8:
    // 0x37fdf8: 0xc0dfcf8  jal         func_37F3E0
label_37fdfc:
    if (ctx->pc == 0x37FDFCu) {
        ctx->pc = 0x37FDFCu;
            // 0x37fdfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x37FE00u;
        goto label_37fe00;
    }
    ctx->pc = 0x37FDF8u;
    SET_GPR_U32(ctx, 31, 0x37FE00u);
    ctx->pc = 0x37FDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FDF8u;
            // 0x37fdfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37F3E0u;
    if (runtime->hasFunction(0x37F3E0u)) {
        auto targetFn = runtime->lookupFunction(0x37F3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FE00u; }
        if (ctx->pc != 0x37FE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037F3E0_0x37f3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FE00u; }
        if (ctx->pc != 0x37FE00u) { return; }
    }
    ctx->pc = 0x37FE00u;
label_37fe00:
    // 0x37fe00: 0x10000007  b           . + 4 + (0x7 << 2)
label_37fe04:
    if (ctx->pc == 0x37FE04u) {
        ctx->pc = 0x37FE08u;
        goto label_37fe08;
    }
    ctx->pc = 0x37FE00u;
    {
        const bool branch_taken_0x37fe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fe00) {
            ctx->pc = 0x37FE20u;
            goto label_37fe20;
        }
    }
    ctx->pc = 0x37FE08u;
label_37fe08:
    // 0x37fe08: 0xc0dfa84  jal         func_37EA10
label_37fe0c:
    if (ctx->pc == 0x37FE0Cu) {
        ctx->pc = 0x37FE0Cu;
            // 0x37fe0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FE10u;
        goto label_37fe10;
    }
    ctx->pc = 0x37FE08u;
    SET_GPR_U32(ctx, 31, 0x37FE10u);
    ctx->pc = 0x37FE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FE08u;
            // 0x37fe0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37EA10u;
    if (runtime->hasFunction(0x37EA10u)) {
        auto targetFn = runtime->lookupFunction(0x37EA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FE10u; }
        if (ctx->pc != 0x37FE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037EA10_0x37ea10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FE10u; }
        if (ctx->pc != 0x37FE10u) { return; }
    }
    ctx->pc = 0x37FE10u;
label_37fe10:
    // 0x37fe10: 0x10000003  b           . + 4 + (0x3 << 2)
label_37fe14:
    if (ctx->pc == 0x37FE14u) {
        ctx->pc = 0x37FE18u;
        goto label_37fe18;
    }
    ctx->pc = 0x37FE10u;
    {
        const bool branch_taken_0x37fe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fe10) {
            ctx->pc = 0x37FE20u;
            goto label_37fe20;
        }
    }
    ctx->pc = 0x37FE18u;
label_37fe18:
    // 0x37fe18: 0xc0df7e0  jal         func_37DF80
label_37fe1c:
    if (ctx->pc == 0x37FE1Cu) {
        ctx->pc = 0x37FE1Cu;
            // 0x37fe1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FE20u;
        goto label_37fe20;
    }
    ctx->pc = 0x37FE18u;
    SET_GPR_U32(ctx, 31, 0x37FE20u);
    ctx->pc = 0x37FE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FE18u;
            // 0x37fe1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37DF80u;
    if (runtime->hasFunction(0x37DF80u)) {
        auto targetFn = runtime->lookupFunction(0x37DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FE20u; }
        if (ctx->pc != 0x37FE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037DF80_0x37df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FE20u; }
        if (ctx->pc != 0x37FE20u) { return; }
    }
    ctx->pc = 0x37FE20u;
label_37fe20:
    // 0x37fe20: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x37fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_37fe24:
    // 0x37fe24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37fe28:
    // 0x37fe28: 0x8c7189e0  lw          $s1, -0x7620($v1)
    ctx->pc = 0x37fe28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_37fe2c:
    // 0x37fe2c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x37fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_37fe30:
    // 0x37fe30: 0xc0506ac  jal         func_141AB0
label_37fe34:
    if (ctx->pc == 0x37FE34u) {
        ctx->pc = 0x37FE34u;
            // 0x37fe34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FE38u;
        goto label_37fe38;
    }
    ctx->pc = 0x37FE30u;
    SET_GPR_U32(ctx, 31, 0x37FE38u);
    ctx->pc = 0x37FE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FE30u;
            // 0x37fe34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FE38u; }
        if (ctx->pc != 0x37FE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FE38u; }
        if (ctx->pc != 0x37FE38u) { return; }
    }
    ctx->pc = 0x37FE38u;
label_37fe38:
    // 0x37fe38: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37fe38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37fe3c:
    // 0x37fe3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37fe3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37fe40:
    // 0x37fe40: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37fe40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37fe44:
    // 0x37fe44: 0x320f809  jalr        $t9
label_37fe48:
    if (ctx->pc == 0x37FE48u) {
        ctx->pc = 0x37FE48u;
            // 0x37fe48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37FE4Cu;
        goto label_37fe4c;
    }
    ctx->pc = 0x37FE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37FE4Cu);
        ctx->pc = 0x37FE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FE44u;
            // 0x37fe48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37FE4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37FE4Cu; }
            if (ctx->pc != 0x37FE4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37FE4Cu;
label_37fe4c:
    // 0x37fe4c: 0xc110754  jal         func_441D50
label_37fe50:
    if (ctx->pc == 0x37FE50u) {
        ctx->pc = 0x37FE50u;
            // 0x37fe50: 0x8e0400cc  lw          $a0, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->pc = 0x37FE54u;
        goto label_37fe54;
    }
    ctx->pc = 0x37FE4Cu;
    SET_GPR_U32(ctx, 31, 0x37FE54u);
    ctx->pc = 0x37FE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FE4Cu;
            // 0x37fe50: 0x8e0400cc  lw          $a0, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FE54u; }
        if (ctx->pc != 0x37FE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FE54u; }
        if (ctx->pc != 0x37FE54u) { return; }
    }
    ctx->pc = 0x37FE54u;
label_37fe54:
    // 0x37fe54: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37fe54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37fe58:
    // 0x37fe58: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37fe58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37fe5c:
    // 0x37fe5c: 0x320f809  jalr        $t9
label_37fe60:
    if (ctx->pc == 0x37FE60u) {
        ctx->pc = 0x37FE60u;
            // 0x37fe60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FE64u;
        goto label_37fe64;
    }
    ctx->pc = 0x37FE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37FE64u);
        ctx->pc = 0x37FE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FE5Cu;
            // 0x37fe60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37FE64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37FE64u; }
            if (ctx->pc != 0x37FE64u) { return; }
        }
        }
    }
    ctx->pc = 0x37FE64u;
label_37fe64:
    // 0x37fe64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37fe64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37fe68:
    // 0x37fe68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37fe68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37fe6c:
    // 0x37fe6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37fe6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37fe70:
    // 0x37fe70: 0x3e00008  jr          $ra
label_37fe74:
    if (ctx->pc == 0x37FE74u) {
        ctx->pc = 0x37FE74u;
            // 0x37fe74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37FE78u;
        goto label_37fe78;
    }
    ctx->pc = 0x37FE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FE70u;
            // 0x37fe74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37FE78u;
label_37fe78:
    // 0x37fe78: 0x0  nop
    ctx->pc = 0x37fe78u;
    // NOP
label_37fe7c:
    // 0x37fe7c: 0x0  nop
    ctx->pc = 0x37fe7cu;
    // NOP
label_37fe80:
    // 0x37fe80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x37fe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_37fe84:
    // 0x37fe84: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x37fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_37fe88:
    // 0x37fe88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37fe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37fe8c:
    // 0x37fe8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37fe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37fe90:
    // 0x37fe90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37fe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37fe94:
    // 0x37fe94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37fe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37fe98:
    // 0x37fe98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37fe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37fe9c:
    // 0x37fe9c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37fe9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37fea0:
    // 0x37fea0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37fea0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37fea4:
    // 0x37fea4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x37fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_37fea8:
    // 0x37fea8: 0x9063007d  lbu         $v1, 0x7D($v1)
    ctx->pc = 0x37fea8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
label_37feac:
    // 0x37feac: 0x54600184  bnel        $v1, $zero, . + 4 + (0x184 << 2)
label_37feb0:
    if (ctx->pc == 0x37FEB0u) {
        ctx->pc = 0x37FEB0u;
            // 0x37feb0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x37FEB4u;
        goto label_37feb4;
    }
    ctx->pc = 0x37FEACu;
    {
        const bool branch_taken_0x37feac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37feac) {
            ctx->pc = 0x37FEB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37FEACu;
            // 0x37feb0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3804C0u;
            goto label_3804c0;
        }
    }
    ctx->pc = 0x37FEB4u;
label_37feb4:
    // 0x37feb4: 0x8c8600e0  lw          $a2, 0xE0($a0)
    ctx->pc = 0x37feb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_37feb8:
    // 0x37feb8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x37feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_37febc:
    // 0x37febc: 0x8cc50cb4  lw          $a1, 0xCB4($a2)
    ctx->pc = 0x37febcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_37fec0:
    // 0x37fec0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_37fec4:
    if (ctx->pc == 0x37FEC4u) {
        ctx->pc = 0x37FEC4u;
            // 0x37fec4: 0x8c83009c  lw          $v1, 0x9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
        ctx->pc = 0x37FEC8u;
        goto label_37fec8;
    }
    ctx->pc = 0x37FEC0u;
    {
        const bool branch_taken_0x37fec0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37fec0) {
            ctx->pc = 0x37FEC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37FEC0u;
            // 0x37fec4: 0x8c83009c  lw          $v1, 0x9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37FED0u;
            goto label_37fed0;
        }
    }
    ctx->pc = 0x37FEC8u;
label_37fec8:
    // 0x37fec8: 0x1000017c  b           . + 4 + (0x17C << 2)
label_37fecc:
    if (ctx->pc == 0x37FECCu) {
        ctx->pc = 0x37FED0u;
        goto label_37fed0;
    }
    ctx->pc = 0x37FEC8u;
    {
        const bool branch_taken_0x37fec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fec8) {
            ctx->pc = 0x3804BCu;
            goto label_3804bc;
        }
    }
    ctx->pc = 0x37FED0u;
label_37fed0:
    // 0x37fed0: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x37fed0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_37fed4:
    // 0x37fed4: 0x10200179  beqz        $at, . + 4 + (0x179 << 2)
label_37fed8:
    if (ctx->pc == 0x37FED8u) {
        ctx->pc = 0x37FEDCu;
        goto label_37fedc;
    }
    ctx->pc = 0x37FED4u;
    {
        const bool branch_taken_0x37fed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fed4) {
            ctx->pc = 0x3804BCu;
            goto label_3804bc;
        }
    }
    ctx->pc = 0x37FEDCu;
label_37fedc:
    // 0x37fedc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x37fedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_37fee0:
    // 0x37fee0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37fee4:
    // 0x37fee4: 0x24a559f0  addiu       $a1, $a1, 0x59F0
    ctx->pc = 0x37fee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23024));
label_37fee8:
    // 0x37fee8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x37fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_37feec:
    // 0x37feec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37feecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37fef0:
    // 0x37fef0: 0x600008  jr          $v1
label_37fef4:
    if (ctx->pc == 0x37FEF4u) {
        ctx->pc = 0x37FEF8u;
        goto label_37fef8;
    }
    ctx->pc = 0x37FEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37FEF8u: goto label_37fef8;
            case 0x37FF08u: goto label_37ff08;
            case 0x37FF18u: goto label_37ff18;
            case 0x380014u: goto label_380014;
            case 0x380110u: goto label_380110;
            case 0x380120u: goto label_380120;
            case 0x3802CCu: goto label_3802cc;
            case 0x380440u: goto label_380440;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37FEF8u;
label_37fef8:
    // 0x37fef8: 0xc0dff30  jal         func_37FCC0
label_37fefc:
    if (ctx->pc == 0x37FEFCu) {
        ctx->pc = 0x37FF00u;
        goto label_37ff00;
    }
    ctx->pc = 0x37FEF8u;
    SET_GPR_U32(ctx, 31, 0x37FF00u);
    ctx->pc = 0x37FCC0u;
    goto label_37fcc0;
    ctx->pc = 0x37FF00u;
label_37ff00:
    // 0x37ff00: 0x1000016e  b           . + 4 + (0x16E << 2)
label_37ff04:
    if (ctx->pc == 0x37FF04u) {
        ctx->pc = 0x37FF08u;
        goto label_37ff08;
    }
    ctx->pc = 0x37FF00u;
    {
        const bool branch_taken_0x37ff00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ff00) {
            ctx->pc = 0x3804BCu;
            goto label_3804bc;
        }
    }
    ctx->pc = 0x37FF08u;
label_37ff08:
    // 0x37ff08: 0xc0dfeac  jal         func_37FAB0
label_37ff0c:
    if (ctx->pc == 0x37FF0Cu) {
        ctx->pc = 0x37FF10u;
        goto label_37ff10;
    }
    ctx->pc = 0x37FF08u;
    SET_GPR_U32(ctx, 31, 0x37FF10u);
    ctx->pc = 0x37FAB0u;
    if (runtime->hasFunction(0x37FAB0u)) {
        auto targetFn = runtime->lookupFunction(0x37FAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FF10u; }
        if (ctx->pc != 0x37FF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037FAB0_0x37fab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FF10u; }
        if (ctx->pc != 0x37FF10u) { return; }
    }
    ctx->pc = 0x37FF10u;
label_37ff10:
    // 0x37ff10: 0x1000016a  b           . + 4 + (0x16A << 2)
label_37ff14:
    if (ctx->pc == 0x37FF14u) {
        ctx->pc = 0x37FF18u;
        goto label_37ff18;
    }
    ctx->pc = 0x37FF10u;
    {
        const bool branch_taken_0x37ff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ff10) {
            ctx->pc = 0x3804BCu;
            goto label_3804bc;
        }
    }
    ctx->pc = 0x37FF18u;
label_37ff18:
    // 0x37ff18: 0xc48300c0  lwc1        $f3, 0xC0($a0)
    ctx->pc = 0x37ff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37ff1c:
    // 0x37ff1c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x37ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_37ff20:
    // 0x37ff20: 0xc48200a8  lwc1        $f2, 0xA8($a0)
    ctx->pc = 0x37ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37ff24:
    // 0x37ff24: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x37ff24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_37ff28:
    // 0x37ff28: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x37ff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37ff2c:
    // 0x37ff2c: 0x26315920  addiu       $s1, $s1, 0x5920
    ctx->pc = 0x37ff2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22816));
label_37ff30:
    // 0x37ff30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37ff30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ff34:
    // 0x37ff34: 0xc49400c4  lwc1        $f20, 0xC4($a0)
    ctx->pc = 0x37ff34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37ff38:
    // 0x37ff38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37ff38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37ff3c:
    // 0x37ff3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_37ff40:
    if (ctx->pc == 0x37FF40u) {
        ctx->pc = 0x37FF40u;
            // 0x37ff40: 0x46021d40  add.s       $f21, $f3, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->pc = 0x37FF44u;
        goto label_37ff44;
    }
    ctx->pc = 0x37FF3Cu;
    {
        const bool branch_taken_0x37ff3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37FF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FF3Cu;
            // 0x37ff40: 0x46021d40  add.s       $f21, $f3, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff3c) {
            ctx->pc = 0x37FF54u;
            goto label_37ff54;
        }
    }
    ctx->pc = 0x37FF44u;
label_37ff44:
    // 0x37ff44: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37ff44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37ff48:
    // 0x37ff48: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x37ff48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_37ff4c:
    // 0x37ff4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_37ff50:
    if (ctx->pc == 0x37FF50u) {
        ctx->pc = 0x37FF50u;
            // 0x37ff50: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x37FF54u;
        goto label_37ff54;
    }
    ctx->pc = 0x37FF4Cu;
    {
        const bool branch_taken_0x37ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FF4Cu;
            // 0x37ff50: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff4c) {
            ctx->pc = 0x37FF70u;
            goto label_37ff70;
        }
    }
    ctx->pc = 0x37FF54u;
label_37ff54:
    // 0x37ff54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37ff54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37ff58:
    // 0x37ff58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_37ff5c:
    // 0x37ff5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37ff5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37ff60:
    // 0x37ff60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x37ff60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_37ff64:
    // 0x37ff64: 0x0  nop
    ctx->pc = 0x37ff64u;
    // NOP
label_37ff68:
    // 0x37ff68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37ff68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_37ff6c:
    // 0x37ff6c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x37ff6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_37ff70:
    // 0x37ff70: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37ff74:
    // 0x37ff74: 0x34432300  ori         $v1, $v0, 0x2300
    ctx->pc = 0x37ff74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
label_37ff78:
    // 0x37ff78: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37ff7c:
    // 0x37ff7c: 0x839025  or          $s2, $a0, $v1
    ctx->pc = 0x37ff7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_37ff80:
    // 0x37ff80: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x37ff80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_37ff84:
    // 0x37ff84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37ff88:
    // 0x37ff88: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x37ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_37ff8c:
    // 0x37ff8c: 0xc0506ac  jal         func_141AB0
label_37ff90:
    if (ctx->pc == 0x37FF90u) {
        ctx->pc = 0x37FF90u;
            // 0x37ff90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FF94u;
        goto label_37ff94;
    }
    ctx->pc = 0x37FF8Cu;
    SET_GPR_U32(ctx, 31, 0x37FF94u);
    ctx->pc = 0x37FF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FF8Cu;
            // 0x37ff90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FF94u; }
        if (ctx->pc != 0x37FF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FF94u; }
        if (ctx->pc != 0x37FF94u) { return; }
    }
    ctx->pc = 0x37FF94u;
label_37ff94:
    // 0x37ff94: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37ff94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37ff98:
    // 0x37ff98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37ff9c:
    // 0x37ff9c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37ff9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37ffa0:
    // 0x37ffa0: 0x320f809  jalr        $t9
label_37ffa4:
    if (ctx->pc == 0x37FFA4u) {
        ctx->pc = 0x37FFA4u;
            // 0x37ffa4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37FFA8u;
        goto label_37ffa8;
    }
    ctx->pc = 0x37FFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37FFA8u);
        ctx->pc = 0x37FFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FFA0u;
            // 0x37ffa4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37FFA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37FFA8u; }
            if (ctx->pc != 0x37FFA8u) { return; }
        }
        }
    }
    ctx->pc = 0x37FFA8u;
label_37ffa8:
    // 0x37ffa8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37ffac:
    // 0x37ffac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37ffacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37ffb0:
    // 0x37ffb0: 0x844458c0  lh          $a0, 0x58C0($v0)
    ctx->pc = 0x37ffb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22720)));
label_37ffb4:
    // 0x37ffb4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x37ffb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ffb8:
    // 0x37ffb8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x37ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37ffbc:
    // 0x37ffbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37ffbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37ffc0:
    // 0x37ffc0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37ffc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37ffc4:
    // 0x37ffc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37ffc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ffc8:
    // 0x37ffc8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37ffcc:
    // 0x37ffcc: 0x844358c2  lh          $v1, 0x58C2($v0)
    ctx->pc = 0x37ffccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22722)));
label_37ffd0:
    // 0x37ffd0: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x37ffd0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_37ffd4:
    // 0x37ffd4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37ffd8:
    // 0x37ffd8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37ffd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37ffdc:
    // 0x37ffdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ffdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ffe0:
    // 0x37ffe0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37ffe4:
    // 0x37ffe4: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37ffe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37ffe8:
    // 0x37ffe8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37ffe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37ffec:
    // 0x37ffec: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x37ffecu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_37fff0:
    // 0x37fff0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37fff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37fff4:
    // 0x37fff4: 0xc0bc284  jal         func_2F0A10
label_37fff8:
    if (ctx->pc == 0x37FFF8u) {
        ctx->pc = 0x37FFF8u;
            // 0x37fff8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37FFFCu;
        goto label_37fffc;
    }
    ctx->pc = 0x37FFF4u;
    SET_GPR_U32(ctx, 31, 0x37FFFCu);
    ctx->pc = 0x37FFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FFF4u;
            // 0x37fff8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FFFCu; }
        if (ctx->pc != 0x37FFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FFFCu; }
        if (ctx->pc != 0x37FFFCu) { return; }
    }
    ctx->pc = 0x37FFFCu;
label_37fffc:
    // 0x37fffc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37fffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_380000:
    // 0x380000: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x380000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_380004:
    // 0x380004: 0x320f809  jalr        $t9
label_380008:
    if (ctx->pc == 0x380008u) {
        ctx->pc = 0x380008u;
            // 0x380008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38000Cu;
        goto label_38000c;
    }
    ctx->pc = 0x380004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38000Cu);
        ctx->pc = 0x380008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380004u;
            // 0x380008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38000Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38000Cu; }
            if (ctx->pc != 0x38000Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38000Cu;
label_38000c:
    // 0x38000c: 0x1000012b  b           . + 4 + (0x12B << 2)
label_380010:
    if (ctx->pc == 0x380010u) {
        ctx->pc = 0x380014u;
        goto label_380014;
    }
    ctx->pc = 0x38000Cu;
    {
        const bool branch_taken_0x38000c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38000c) {
            ctx->pc = 0x3804BCu;
            goto label_3804bc;
        }
    }
    ctx->pc = 0x380014u;
label_380014:
    // 0x380014: 0xc48300c0  lwc1        $f3, 0xC0($a0)
    ctx->pc = 0x380014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_380018:
    // 0x380018: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x380018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_38001c:
    // 0x38001c: 0xc48200a8  lwc1        $f2, 0xA8($a0)
    ctx->pc = 0x38001cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_380020:
    // 0x380020: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x380020u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_380024:
    // 0x380024: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x380024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_380028:
    // 0x380028: 0x26315910  addiu       $s1, $s1, 0x5910
    ctx->pc = 0x380028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22800));
label_38002c:
    // 0x38002c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38002cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_380030:
    // 0x380030: 0xc49400c4  lwc1        $f20, 0xC4($a0)
    ctx->pc = 0x380030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_380034:
    // 0x380034: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x380034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_380038:
    // 0x380038: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_38003c:
    if (ctx->pc == 0x38003Cu) {
        ctx->pc = 0x38003Cu;
            // 0x38003c: 0x46021d40  add.s       $f21, $f3, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->pc = 0x380040u;
        goto label_380040;
    }
    ctx->pc = 0x380038u;
    {
        const bool branch_taken_0x380038 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38003Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380038u;
            // 0x38003c: 0x46021d40  add.s       $f21, $f3, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x380038) {
            ctx->pc = 0x380050u;
            goto label_380050;
        }
    }
    ctx->pc = 0x380040u;
label_380040:
    // 0x380040: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380040u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_380044:
    // 0x380044: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x380044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_380048:
    // 0x380048: 0x10000008  b           . + 4 + (0x8 << 2)
label_38004c:
    if (ctx->pc == 0x38004Cu) {
        ctx->pc = 0x38004Cu;
            // 0x38004c: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x380050u;
        goto label_380050;
    }
    ctx->pc = 0x380048u;
    {
        const bool branch_taken_0x380048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38004Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380048u;
            // 0x38004c: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x380048) {
            ctx->pc = 0x38006Cu;
            goto label_38006c;
        }
    }
    ctx->pc = 0x380050u;
label_380050:
    // 0x380050: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x380050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_380054:
    // 0x380054: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x380054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_380058:
    // 0x380058: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_38005c:
    // 0x38005c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x38005cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_380060:
    // 0x380060: 0x0  nop
    ctx->pc = 0x380060u;
    // NOP
label_380064:
    // 0x380064: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x380064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_380068:
    // 0x380068: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x380068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_38006c:
    // 0x38006c: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x38006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_380070:
    // 0x380070: 0x34432300  ori         $v1, $v0, 0x2300
    ctx->pc = 0x380070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
label_380074:
    // 0x380074: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x380074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_380078:
    // 0x380078: 0x839025  or          $s2, $a0, $v1
    ctx->pc = 0x380078u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_38007c:
    // 0x38007c: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x38007cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_380080:
    // 0x380080: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x380080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_380084:
    // 0x380084: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x380084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_380088:
    // 0x380088: 0xc0506ac  jal         func_141AB0
label_38008c:
    if (ctx->pc == 0x38008Cu) {
        ctx->pc = 0x38008Cu;
            // 0x38008c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x380090u;
        goto label_380090;
    }
    ctx->pc = 0x380088u;
    SET_GPR_U32(ctx, 31, 0x380090u);
    ctx->pc = 0x38008Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380088u;
            // 0x38008c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380090u; }
        if (ctx->pc != 0x380090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380090u; }
        if (ctx->pc != 0x380090u) { return; }
    }
    ctx->pc = 0x380090u;
label_380090:
    // 0x380090: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x380090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_380094:
    // 0x380094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x380094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_380098:
    // 0x380098: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x380098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_38009c:
    // 0x38009c: 0x320f809  jalr        $t9
label_3800a0:
    if (ctx->pc == 0x3800A0u) {
        ctx->pc = 0x3800A0u;
            // 0x3800a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3800A4u;
        goto label_3800a4;
    }
    ctx->pc = 0x38009Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3800A4u);
        ctx->pc = 0x3800A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38009Cu;
            // 0x3800a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3800A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3800A4u; }
            if (ctx->pc != 0x3800A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3800A4u;
label_3800a4:
    // 0x3800a4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3800a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3800a8:
    // 0x3800a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3800a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3800ac:
    // 0x3800ac: 0x844458c0  lh          $a0, 0x58C0($v0)
    ctx->pc = 0x3800acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22720)));
label_3800b0:
    // 0x3800b0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3800b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3800b4:
    // 0x3800b4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x3800b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3800b8:
    // 0x3800b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3800b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3800bc:
    // 0x3800bc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3800bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3800c0:
    // 0x3800c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3800c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3800c4:
    // 0x3800c4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3800c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3800c8:
    // 0x3800c8: 0x844358c2  lh          $v1, 0x58C2($v0)
    ctx->pc = 0x3800c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22722)));
label_3800cc:
    // 0x3800cc: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3800ccu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3800d0:
    // 0x3800d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3800d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3800d4:
    // 0x3800d4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3800d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3800d8:
    // 0x3800d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3800d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3800dc:
    // 0x3800dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3800dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3800e0:
    // 0x3800e0: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x3800e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3800e4:
    // 0x3800e4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3800e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3800e8:
    // 0x3800e8: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x3800e8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_3800ec:
    // 0x3800ec: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3800ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3800f0:
    // 0x3800f0: 0xc0bc284  jal         func_2F0A10
label_3800f4:
    if (ctx->pc == 0x3800F4u) {
        ctx->pc = 0x3800F4u;
            // 0x3800f4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3800F8u;
        goto label_3800f8;
    }
    ctx->pc = 0x3800F0u;
    SET_GPR_U32(ctx, 31, 0x3800F8u);
    ctx->pc = 0x3800F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3800F0u;
            // 0x3800f4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3800F8u; }
        if (ctx->pc != 0x3800F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3800F8u; }
        if (ctx->pc != 0x3800F8u) { return; }
    }
    ctx->pc = 0x3800F8u;
label_3800f8:
    // 0x3800f8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3800f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3800fc:
    // 0x3800fc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3800fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_380100:
    // 0x380100: 0x320f809  jalr        $t9
label_380104:
    if (ctx->pc == 0x380104u) {
        ctx->pc = 0x380104u;
            // 0x380104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x380108u;
        goto label_380108;
    }
    ctx->pc = 0x380100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x380108u);
        ctx->pc = 0x380104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380100u;
            // 0x380104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x380108u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x380108u; }
            if (ctx->pc != 0x380108u) { return; }
        }
        }
    }
    ctx->pc = 0x380108u;
label_380108:
    // 0x380108: 0x100000ec  b           . + 4 + (0xEC << 2)
label_38010c:
    if (ctx->pc == 0x38010Cu) {
        ctx->pc = 0x380110u;
        goto label_380110;
    }
    ctx->pc = 0x380108u;
    {
        const bool branch_taken_0x380108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380108) {
            ctx->pc = 0x3804BCu;
            goto label_3804bc;
        }
    }
    ctx->pc = 0x380110u;
label_380110:
    // 0x380110: 0xc0dfe2c  jal         func_37F8B0
label_380114:
    if (ctx->pc == 0x380114u) {
        ctx->pc = 0x380118u;
        goto label_380118;
    }
    ctx->pc = 0x380110u;
    SET_GPR_U32(ctx, 31, 0x380118u);
    ctx->pc = 0x37F8B0u;
    if (runtime->hasFunction(0x37F8B0u)) {
        auto targetFn = runtime->lookupFunction(0x37F8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380118u; }
        if (ctx->pc != 0x380118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037F8B0_0x37f8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380118u; }
        if (ctx->pc != 0x380118u) { return; }
    }
    ctx->pc = 0x380118u;
label_380118:
    // 0x380118: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_38011c:
    if (ctx->pc == 0x38011Cu) {
        ctx->pc = 0x380120u;
        goto label_380120;
    }
    ctx->pc = 0x380118u;
    {
        const bool branch_taken_0x380118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380118) {
            ctx->pc = 0x3804BCu;
            goto label_3804bc;
        }
    }
    ctx->pc = 0x380120u;
label_380120:
    // 0x380120: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x380120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_380124:
    // 0x380124: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x380124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_380128:
    // 0x380128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x380128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38012c:
    // 0x38012c: 0x0  nop
    ctx->pc = 0x38012cu;
    // NOP
label_380130:
    // 0x380130: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x380130u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_380134:
    // 0x380134: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_380138:
    if (ctx->pc == 0x380138u) {
        ctx->pc = 0x380138u;
            // 0x380138: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x38013Cu;
        goto label_38013c;
    }
    ctx->pc = 0x380134u;
    {
        const bool branch_taken_0x380134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x380134) {
            ctx->pc = 0x380138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380134u;
            // 0x380138: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x38014Cu;
            goto label_38014c;
        }
    }
    ctx->pc = 0x38013Cu;
label_38013c:
    // 0x38013c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38013cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_380140:
    // 0x380140: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x380140u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_380144:
    // 0x380144: 0x10000007  b           . + 4 + (0x7 << 2)
label_380148:
    if (ctx->pc == 0x380148u) {
        ctx->pc = 0x380148u;
            // 0x380148: 0x3c0223ff  lui         $v0, 0x23FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
        ctx->pc = 0x38014Cu;
        goto label_38014c;
    }
    ctx->pc = 0x380144u;
    {
        const bool branch_taken_0x380144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380144u;
            // 0x380148: 0x3c0223ff  lui         $v0, 0x23FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380144) {
            ctx->pc = 0x380164u;
            goto label_380164;
        }
    }
    ctx->pc = 0x38014Cu;
label_38014c:
    // 0x38014c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38014cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_380150:
    // 0x380150: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_380154:
    // 0x380154: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x380154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_380158:
    // 0x380158: 0x0  nop
    ctx->pc = 0x380158u;
    // NOP
label_38015c:
    // 0x38015c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38015cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_380160:
    // 0x380160: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x380160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_380164:
    // 0x380164: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x380164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_380168:
    // 0x380168: 0x34422300  ori         $v0, $v0, 0x2300
    ctx->pc = 0x380168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
label_38016c:
    // 0x38016c: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x38016cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_380170:
    // 0x380170: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x380170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_380174:
    // 0x380174: 0xc4c10844  lwc1        $f1, 0x844($a2)
    ctx->pc = 0x380174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_380178:
    // 0x380178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x380178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38017c:
    // 0x38017c: 0x0  nop
    ctx->pc = 0x38017cu;
    // NOP
label_380180:
    // 0x380180: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x380180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_380184:
    // 0x380184: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_380188:
    if (ctx->pc == 0x380188u) {
        ctx->pc = 0x380188u;
            // 0x380188: 0x24c50838  addiu       $a1, $a2, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 2104));
        ctx->pc = 0x38018Cu;
        goto label_38018c;
    }
    ctx->pc = 0x380184u;
    {
        const bool branch_taken_0x380184 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x380188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380184u;
            // 0x380188: 0x24c50838  addiu       $a1, $a2, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380184) {
            ctx->pc = 0x38019Cu;
            goto label_38019c;
        }
    }
    ctx->pc = 0x38018Cu;
label_38018c:
    // 0x38018c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38018cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_380190:
    // 0x380190: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x380190u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_380194:
    // 0x380194: 0x10000008  b           . + 4 + (0x8 << 2)
label_380198:
    if (ctx->pc == 0x380198u) {
        ctx->pc = 0x380198u;
            // 0x380198: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->pc = 0x38019Cu;
        goto label_38019c;
    }
    ctx->pc = 0x380194u;
    {
        const bool branch_taken_0x380194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380194u;
            // 0x380198: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380194) {
            ctx->pc = 0x3801B8u;
            goto label_3801b8;
        }
    }
    ctx->pc = 0x38019Cu;
label_38019c:
    // 0x38019c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x38019cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3801a0:
    // 0x3801a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3801a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3801a4:
    // 0x3801a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3801a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3801a8:
    // 0x3801a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3801a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3801ac:
    // 0x3801ac: 0x0  nop
    ctx->pc = 0x3801acu;
    // NOP
label_3801b0:
    // 0x3801b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3801b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3801b4:
    // 0x3801b4: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x3801b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3801b8:
    // 0x3801b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3801b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3801bc:
    // 0x3801bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3801bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3801c0:
    // 0x3801c0: 0x24040  sll         $t0, $v0, 1
    ctx->pc = 0x3801c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3801c4:
    // 0x3801c4: 0x3403ea60  ori         $v1, $zero, 0xEA60
    ctx->pc = 0x3801c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_3801c8:
    // 0x3801c8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x3801c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3801cc:
    // 0x3801cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3801ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3801d0:
    // 0x3801d0: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x3801d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3801d4:
    // 0x3801d4: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x3801d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_3801d8:
    // 0x3801d8: 0xc48100c0  lwc1        $f1, 0xC0($a0)
    ctx->pc = 0x3801d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3801dc:
    // 0x3801dc: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x3801dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3801e0:
    // 0x3801e0: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x3801e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3801e4:
    // 0x3801e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3801e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3801e8:
    // 0x3801e8: 0xc49400c4  lwc1        $f20, 0xC4($a0)
    ctx->pc = 0x3801e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3801ec:
    // 0x3801ec: 0xc72823  subu        $a1, $a2, $a3
    ctx->pc = 0x3801ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3801f0:
    // 0x3801f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3801f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3801f4:
    // 0x3801f4: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3801f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3801f8:
    // 0x3801f8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3801f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3801fc:
    // 0x3801fc: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x3801fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_380200:
    // 0x380200: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x380200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_380204:
    // 0x380204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x380204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_380208:
    // 0x380208: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x380208u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_38020c:
    // 0x38020c: 0xc0506ac  jal         func_141AB0
label_380210:
    if (ctx->pc == 0x380210u) {
        ctx->pc = 0x380210u;
            // 0x380210: 0xc39021  addu        $s2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->pc = 0x380214u;
        goto label_380214;
    }
    ctx->pc = 0x38020Cu;
    SET_GPR_U32(ctx, 31, 0x380214u);
    ctx->pc = 0x380210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38020Cu;
            // 0x380210: 0xc39021  addu        $s2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380214u; }
        if (ctx->pc != 0x380214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380214u; }
        if (ctx->pc != 0x380214u) { return; }
    }
    ctx->pc = 0x380214u;
label_380214:
    // 0x380214: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x380214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_380218:
    // 0x380218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x380218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38021c:
    // 0x38021c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x38021cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_380220:
    // 0x380220: 0x320f809  jalr        $t9
label_380224:
    if (ctx->pc == 0x380224u) {
        ctx->pc = 0x380224u;
            // 0x380224: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x380228u;
        goto label_380228;
    }
    ctx->pc = 0x380220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x380228u);
        ctx->pc = 0x380224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380220u;
            // 0x380224: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x380228u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x380228u; }
            if (ctx->pc != 0x380228u) { return; }
        }
        }
    }
    ctx->pc = 0x380228u;
label_380228:
    // 0x380228: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x380228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_38022c:
    // 0x38022c: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x38022cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_380230:
    // 0x380230: 0x84442100  lh          $a0, 0x2100($v0)
    ctx->pc = 0x380230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_380234:
    // 0x380234: 0x2610a1c0  addiu       $s0, $s0, -0x5E40
    ctx->pc = 0x380234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943168));
label_380238:
    // 0x380238: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x380238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38023c:
    // 0x38023c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38023cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_380240:
    // 0x380240: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x380240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_380244:
    // 0x380244: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x380244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_380248:
    // 0x380248: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x380248u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_38024c:
    // 0x38024c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x38024cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_380250:
    // 0x380250: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x380250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_380254:
    // 0x380254: 0x84432102  lh          $v1, 0x2102($v0)
    ctx->pc = 0x380254u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_380258:
    // 0x380258: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x380258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38025c:
    // 0x38025c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38025cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_380260:
    // 0x380260: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x380260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_380264:
    // 0x380264: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x380264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_380268:
    // 0x380268: 0x0  nop
    ctx->pc = 0x380268u;
    // NOP
label_38026c:
    // 0x38026c: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x38026cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_380270:
    // 0x380270: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x380270u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_380274:
    // 0x380274: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x380274u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_380278:
    // 0x380278: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x380278u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_38027c:
    // 0x38027c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x38027cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_380280:
    // 0x380280: 0xc0bc284  jal         func_2F0A10
label_380284:
    if (ctx->pc == 0x380284u) {
        ctx->pc = 0x380284u;
            // 0x380284: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x380288u;
        goto label_380288;
    }
    ctx->pc = 0x380280u;
    SET_GPR_U32(ctx, 31, 0x380288u);
    ctx->pc = 0x380284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380280u;
            // 0x380284: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380288u; }
        if (ctx->pc != 0x380288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380288u; }
        if (ctx->pc != 0x380288u) { return; }
    }
    ctx->pc = 0x380288u;
label_380288:
    // 0x380288: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x380288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38028c:
    // 0x38028c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38028cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_380290:
    // 0x380290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x380290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_380294:
    // 0x380294: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x380294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_380298:
    // 0x380298: 0x320f809  jalr        $t9
label_38029c:
    if (ctx->pc == 0x38029Cu) {
        ctx->pc = 0x38029Cu;
            // 0x38029c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3802A0u;
        goto label_3802a0;
    }
    ctx->pc = 0x380298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3802A0u);
        ctx->pc = 0x38029Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380298u;
            // 0x38029c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3802A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3802A0u; }
            if (ctx->pc != 0x3802A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3802A0u;
label_3802a0:
    // 0x3802a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3802a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3802a4:
    // 0x3802a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3802a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3802a8:
    // 0x3802a8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3802a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3802ac:
    // 0x3802ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3802acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3802b0:
    // 0x3802b0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3802b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3802b4:
    // 0x3802b4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x3802b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3802b8:
    // 0x3802b8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3802b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3802bc:
    // 0x3802bc: 0xc156cd0  jal         func_55B340
label_3802c0:
    if (ctx->pc == 0x3802C0u) {
        ctx->pc = 0x3802C0u;
            // 0x3802c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3802C4u;
        goto label_3802c4;
    }
    ctx->pc = 0x3802BCu;
    SET_GPR_U32(ctx, 31, 0x3802C4u);
    ctx->pc = 0x3802C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3802BCu;
            // 0x3802c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55B340u;
    if (runtime->hasFunction(0x55B340u)) {
        auto targetFn = runtime->lookupFunction(0x55B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3802C4u; }
        if (ctx->pc != 0x3802C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055B340_0x55b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3802C4u; }
        if (ctx->pc != 0x3802C4u) { return; }
    }
    ctx->pc = 0x3802C4u;
label_3802c4:
    // 0x3802c4: 0x1000007d  b           . + 4 + (0x7D << 2)
label_3802c8:
    if (ctx->pc == 0x3802C8u) {
        ctx->pc = 0x3802CCu;
        goto label_3802cc;
    }
    ctx->pc = 0x3802C4u;
    {
        const bool branch_taken_0x3802c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3802c4) {
            ctx->pc = 0x3804BCu;
            goto label_3804bc;
        }
    }
    ctx->pc = 0x3802CCu;
label_3802cc:
    // 0x3802cc: 0xc4c10d40  lwc1        $f1, 0xD40($a2)
    ctx->pc = 0x3802ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 3392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3802d0:
    // 0x3802d0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3802d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3802d4:
    // 0x3802d4: 0xc48300c0  lwc1        $f3, 0xC0($a0)
    ctx->pc = 0x3802d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3802d8:
    // 0x3802d8: 0xc48200a8  lwc1        $f2, 0xA8($a0)
    ctx->pc = 0x3802d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3802dc:
    // 0x3802dc: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x3802dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_3802e0:
    // 0x3802e0: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x3802e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3802e4:
    // 0x3802e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3802e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3802e8:
    // 0x3802e8: 0xc49400c4  lwc1        $f20, 0xC4($a0)
    ctx->pc = 0x3802e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3802ec:
    // 0x3802ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3802ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3802f0:
    // 0x3802f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3802f4:
    if (ctx->pc == 0x3802F4u) {
        ctx->pc = 0x3802F4u;
            // 0x3802f4: 0x46021d40  add.s       $f21, $f3, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->pc = 0x3802F8u;
        goto label_3802f8;
    }
    ctx->pc = 0x3802F0u;
    {
        const bool branch_taken_0x3802f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3802F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3802F0u;
            // 0x3802f4: 0x46021d40  add.s       $f21, $f3, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3802f0) {
            ctx->pc = 0x380308u;
            goto label_380308;
        }
    }
    ctx->pc = 0x3802F8u;
label_3802f8:
    // 0x3802f8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3802f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3802fc:
    // 0x3802fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3802fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_380300:
    // 0x380300: 0x10000008  b           . + 4 + (0x8 << 2)
label_380304:
    if (ctx->pc == 0x380304u) {
        ctx->pc = 0x380304u;
            // 0x380304: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x380308u;
        goto label_380308;
    }
    ctx->pc = 0x380300u;
    {
        const bool branch_taken_0x380300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380300u;
            // 0x380304: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x380300) {
            ctx->pc = 0x380324u;
            goto label_380324;
        }
    }
    ctx->pc = 0x380308u;
label_380308:
    // 0x380308: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x380308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38030c:
    // 0x38030c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_380310:
    // 0x380310: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380310u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_380314:
    // 0x380314: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x380314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_380318:
    // 0x380318: 0x0  nop
    ctx->pc = 0x380318u;
    // NOP
label_38031c:
    // 0x38031c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38031cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_380320:
    // 0x380320: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x380320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_380324:
    // 0x380324: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x380324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_380328:
    // 0x380328: 0x34432300  ori         $v1, $v0, 0x2300
    ctx->pc = 0x380328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
label_38032c:
    // 0x38032c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x38032cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_380330:
    // 0x380330: 0x839025  or          $s2, $a0, $v1
    ctx->pc = 0x380330u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_380334:
    // 0x380334: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x380334u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_380338:
    // 0x380338: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x380338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38033c:
    // 0x38033c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x38033cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_380340:
    // 0x380340: 0xc0506ac  jal         func_141AB0
label_380344:
    if (ctx->pc == 0x380344u) {
        ctx->pc = 0x380344u;
            // 0x380344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x380348u;
        goto label_380348;
    }
    ctx->pc = 0x380340u;
    SET_GPR_U32(ctx, 31, 0x380348u);
    ctx->pc = 0x380344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380340u;
            // 0x380344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380348u; }
        if (ctx->pc != 0x380348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380348u; }
        if (ctx->pc != 0x380348u) { return; }
    }
    ctx->pc = 0x380348u;
label_380348:
    // 0x380348: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x380348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38034c:
    // 0x38034c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38034cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_380350:
    // 0x380350: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x380350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_380354:
    // 0x380354: 0x320f809  jalr        $t9
label_380358:
    if (ctx->pc == 0x380358u) {
        ctx->pc = 0x380358u;
            // 0x380358: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38035Cu;
        goto label_38035c;
    }
    ctx->pc = 0x380354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38035Cu);
        ctx->pc = 0x380358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380354u;
            // 0x380358: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38035Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38035Cu; }
            if (ctx->pc != 0x38035Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38035Cu;
label_38035c:
    // 0x38035c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x38035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_380360:
    // 0x380360: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x380360u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_380364:
    // 0x380364: 0x84442100  lh          $a0, 0x2100($v0)
    ctx->pc = 0x380364u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_380368:
    // 0x380368: 0x2610a1c0  addiu       $s0, $s0, -0x5E40
    ctx->pc = 0x380368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943168));
label_38036c:
    // 0x38036c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x38036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_380370:
    // 0x380370: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x380370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_380374:
    // 0x380374: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x380374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_380378:
    // 0x380378: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x380378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38037c:
    // 0x38037c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x38037cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_380380:
    // 0x380380: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x380380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_380384:
    // 0x380384: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x380384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_380388:
    // 0x380388: 0x84432102  lh          $v1, 0x2102($v0)
    ctx->pc = 0x380388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_38038c:
    // 0x38038c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_380390:
    // 0x380390: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x380390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_380394:
    // 0x380394: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x380394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_380398:
    // 0x380398: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x380398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_38039c:
    // 0x38039c: 0x0  nop
    ctx->pc = 0x38039cu;
    // NOP
label_3803a0:
    // 0x3803a0: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x3803a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3803a4:
    // 0x3803a4: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x3803a4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_3803a8:
    // 0x3803a8: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3803a8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3803ac:
    // 0x3803ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3803acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3803b0:
    // 0x3803b0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3803b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3803b4:
    // 0x3803b4: 0xc0bc284  jal         func_2F0A10
label_3803b8:
    if (ctx->pc == 0x3803B8u) {
        ctx->pc = 0x3803B8u;
            // 0x3803b8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3803BCu;
        goto label_3803bc;
    }
    ctx->pc = 0x3803B4u;
    SET_GPR_U32(ctx, 31, 0x3803BCu);
    ctx->pc = 0x3803B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3803B4u;
            // 0x3803b8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3803BCu; }
        if (ctx->pc != 0x3803BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3803BCu; }
        if (ctx->pc != 0x3803BCu) { return; }
    }
    ctx->pc = 0x3803BCu;
label_3803bc:
    // 0x3803bc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3803bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3803c0:
    // 0x3803c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3803c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3803c4:
    // 0x3803c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3803c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3803c8:
    // 0x3803c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3803c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3803cc:
    // 0x3803cc: 0x320f809  jalr        $t9
label_3803d0:
    if (ctx->pc == 0x3803D0u) {
        ctx->pc = 0x3803D0u;
            // 0x3803d0: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3803D4u;
        goto label_3803d4;
    }
    ctx->pc = 0x3803CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3803D4u);
        ctx->pc = 0x3803D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3803CCu;
            // 0x3803d0: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3803D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3803D4u; }
            if (ctx->pc != 0x3803D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3803D4u;
label_3803d4:
    // 0x3803d4: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x3803d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3803d8:
    // 0x3803d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3803d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3803dc:
    // 0x3803dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3803dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3803e0:
    // 0x3803e0: 0x0  nop
    ctx->pc = 0x3803e0u;
    // NOP
label_3803e4:
    // 0x3803e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3803e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3803e8:
    // 0x3803e8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3803ec:
    if (ctx->pc == 0x3803ECu) {
        ctx->pc = 0x3803ECu;
            // 0x3803ec: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3803F0u;
        goto label_3803f0;
    }
    ctx->pc = 0x3803E8u;
    {
        const bool branch_taken_0x3803e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3803e8) {
            ctx->pc = 0x3803ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3803E8u;
            // 0x3803ec: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x380400u;
            goto label_380400;
        }
    }
    ctx->pc = 0x3803F0u;
label_3803f0:
    // 0x3803f0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3803f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3803f4:
    // 0x3803f4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3803f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3803f8:
    // 0x3803f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3803fc:
    if (ctx->pc == 0x3803FCu) {
        ctx->pc = 0x3803FCu;
            // 0x3803fc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x380400u;
        goto label_380400;
    }
    ctx->pc = 0x3803F8u;
    {
        const bool branch_taken_0x3803f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3803FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3803F8u;
            // 0x3803fc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3803f8) {
            ctx->pc = 0x380418u;
            goto label_380418;
        }
    }
    ctx->pc = 0x380400u;
label_380400:
    // 0x380400: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x380400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_380404:
    // 0x380404: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_380408:
    // 0x380408: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x380408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_38040c:
    // 0x38040c: 0x0  nop
    ctx->pc = 0x38040cu;
    // NOP
label_380410:
    // 0x380410: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x380410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_380414:
    // 0x380414: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x380414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_380418:
    // 0x380418: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x380418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38041c:
    // 0x38041c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x38041cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_380420:
    // 0x380420: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x380420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_380424:
    // 0x380424: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x380424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_380428:
    // 0x380428: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x380428u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_38042c:
    // 0x38042c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x38042cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_380430:
    // 0x380430: 0xc156fdc  jal         func_55BF70
label_380434:
    if (ctx->pc == 0x380434u) {
        ctx->pc = 0x380434u;
            // 0x380434: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x380438u;
        goto label_380438;
    }
    ctx->pc = 0x380430u;
    SET_GPR_U32(ctx, 31, 0x380438u);
    ctx->pc = 0x380434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380430u;
            // 0x380434: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF70u;
    if (runtime->hasFunction(0x55BF70u)) {
        auto targetFn = runtime->lookupFunction(0x55BF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380438u; }
        if (ctx->pc != 0x380438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF70_0x55bf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380438u; }
        if (ctx->pc != 0x380438u) { return; }
    }
    ctx->pc = 0x380438u;
label_380438:
    // 0x380438: 0x10000020  b           . + 4 + (0x20 << 2)
label_38043c:
    if (ctx->pc == 0x38043Cu) {
        ctx->pc = 0x380440u;
        goto label_380440;
    }
    ctx->pc = 0x380438u;
    {
        const bool branch_taken_0x380438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380438) {
            ctx->pc = 0x3804BCu;
            goto label_3804bc;
        }
    }
    ctx->pc = 0x380440u;
label_380440:
    // 0x380440: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x380440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_380444:
    // 0x380444: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x380444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_380448:
    // 0x380448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x380448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38044c:
    // 0x38044c: 0x0  nop
    ctx->pc = 0x38044cu;
    // NOP
label_380450:
    // 0x380450: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x380450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_380454:
    // 0x380454: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_380458:
    if (ctx->pc == 0x380458u) {
        ctx->pc = 0x380458u;
            // 0x380458: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x38045Cu;
        goto label_38045c;
    }
    ctx->pc = 0x380454u;
    {
        const bool branch_taken_0x380454 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x380454) {
            ctx->pc = 0x380458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380454u;
            // 0x380458: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x38046Cu;
            goto label_38046c;
        }
    }
    ctx->pc = 0x38045Cu;
label_38045c:
    // 0x38045c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38045cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_380460:
    // 0x380460: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x380460u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_380464:
    // 0x380464: 0x10000007  b           . + 4 + (0x7 << 2)
label_380468:
    if (ctx->pc == 0x380468u) {
        ctx->pc = 0x380468u;
            // 0x380468: 0x3c0223ff  lui         $v0, 0x23FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
        ctx->pc = 0x38046Cu;
        goto label_38046c;
    }
    ctx->pc = 0x380464u;
    {
        const bool branch_taken_0x380464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380464u;
            // 0x380468: 0x3c0223ff  lui         $v0, 0x23FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380464) {
            ctx->pc = 0x380484u;
            goto label_380484;
        }
    }
    ctx->pc = 0x38046Cu;
label_38046c:
    // 0x38046c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38046cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_380470:
    // 0x380470: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380470u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_380474:
    // 0x380474: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x380474u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_380478:
    // 0x380478: 0x0  nop
    ctx->pc = 0x380478u;
    // NOP
label_38047c:
    // 0x38047c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38047cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_380480:
    // 0x380480: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x380480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_380484:
    // 0x380484: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x380484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_380488:
    // 0x380488: 0x34422300  ori         $v0, $v0, 0x2300
    ctx->pc = 0x380488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
label_38048c:
    // 0x38048c: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x38048cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_380490:
    // 0x380490: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x380490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_380494:
    // 0x380494: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x380494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_380498:
    // 0x380498: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x380498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_38049c:
    // 0x38049c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x38049cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3804a0:
    // 0x3804a0: 0xc48100c0  lwc1        $f1, 0xC0($a0)
    ctx->pc = 0x3804a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3804a4:
    // 0x3804a4: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x3804a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3804a8:
    // 0x3804a8: 0xc48d00c4  lwc1        $f13, 0xC4($a0)
    ctx->pc = 0x3804a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3804ac:
    // 0x3804ac: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3804acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3804b0:
    // 0x3804b0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3804b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3804b4:
    // 0x3804b4: 0xc156cd0  jal         func_55B340
label_3804b8:
    if (ctx->pc == 0x3804B8u) {
        ctx->pc = 0x3804B8u;
            // 0x3804b8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3804BCu;
        goto label_3804bc;
    }
    ctx->pc = 0x3804B4u;
    SET_GPR_U32(ctx, 31, 0x3804BCu);
    ctx->pc = 0x3804B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3804B4u;
            // 0x3804b8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55B340u;
    if (runtime->hasFunction(0x55B340u)) {
        auto targetFn = runtime->lookupFunction(0x55B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3804BCu; }
        if (ctx->pc != 0x3804BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055B340_0x55b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3804BCu; }
        if (ctx->pc != 0x3804BCu) { return; }
    }
    ctx->pc = 0x3804BCu;
label_3804bc:
    // 0x3804bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3804bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3804c0:
    // 0x3804c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3804c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3804c4:
    // 0x3804c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3804c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3804c8:
    // 0x3804c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3804c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3804cc:
    // 0x3804cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3804ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3804d0:
    // 0x3804d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3804d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3804d4:
    // 0x3804d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3804d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3804d8:
    // 0x3804d8: 0x3e00008  jr          $ra
label_3804dc:
    if (ctx->pc == 0x3804DCu) {
        ctx->pc = 0x3804DCu;
            // 0x3804dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3804E0u;
        goto label_3804e0;
    }
    ctx->pc = 0x3804D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3804DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3804D8u;
            // 0x3804dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3804E0u;
label_3804e0:
    // 0x3804e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3804e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3804e4:
    // 0x3804e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3804e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3804e8:
    // 0x3804e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3804e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3804ec:
    // 0x3804ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3804ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3804f0:
    // 0x3804f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3804f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3804f4:
    // 0x3804f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3804f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3804f8:
    // 0x3804f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3804f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3804fc:
    // 0x3804fc: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x3804fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_380500:
    // 0x380500: 0x8c718a08  lw          $s1, -0x75F8($v1)
    ctx->pc = 0x380500u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_380504:
    // 0x380504: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x380504u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_380508:
    // 0x380508: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x380508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38050c:
    // 0x38050c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38050cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_380510:
    // 0x380510: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_380514:
    if (ctx->pc == 0x380514u) {
        ctx->pc = 0x380514u;
            // 0x380514: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x380518u;
        goto label_380518;
    }
    ctx->pc = 0x380510u;
    {
        const bool branch_taken_0x380510 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x380510) {
            ctx->pc = 0x380514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380510u;
            // 0x380514: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x380528u;
            goto label_380528;
        }
    }
    ctx->pc = 0x380518u;
label_380518:
    // 0x380518: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_38051c:
    // 0x38051c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x38051cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_380520:
    // 0x380520: 0x10000007  b           . + 4 + (0x7 << 2)
label_380524:
    if (ctx->pc == 0x380524u) {
        ctx->pc = 0x380524u;
            // 0x380524: 0x92440010  lbu         $a0, 0x10($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x380528u;
        goto label_380528;
    }
    ctx->pc = 0x380520u;
    {
        const bool branch_taken_0x380520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380520u;
            // 0x380524: 0x92440010  lbu         $a0, 0x10($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380520) {
            ctx->pc = 0x380540u;
            goto label_380540;
        }
    }
    ctx->pc = 0x380528u;
label_380528:
    // 0x380528: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x380528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_38052c:
    // 0x38052c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38052cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_380530:
    // 0x380530: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x380530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_380534:
    // 0x380534: 0x0  nop
    ctx->pc = 0x380534u;
    // NOP
label_380538:
    // 0x380538: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x380538u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_38053c:
    // 0x38053c: 0x92440010  lbu         $a0, 0x10($s2)
    ctx->pc = 0x38053cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_380540:
    // 0x380540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x380540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_380544:
    // 0x380544: 0x108300f7  beq         $a0, $v1, . + 4 + (0xF7 << 2)
label_380548:
    if (ctx->pc == 0x380548u) {
        ctx->pc = 0x38054Cu;
        goto label_38054c;
    }
    ctx->pc = 0x380544u;
    {
        const bool branch_taken_0x380544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x380544) {
            ctx->pc = 0x380924u;
            goto label_380924;
        }
    }
    ctx->pc = 0x38054Cu;
label_38054c:
    // 0x38054c: 0x508000f0  beql        $a0, $zero, . + 4 + (0xF0 << 2)
label_380550:
    if (ctx->pc == 0x380550u) {
        ctx->pc = 0x380550u;
            // 0x380550: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x380554u;
        goto label_380554;
    }
    ctx->pc = 0x38054Cu;
    {
        const bool branch_taken_0x38054c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38054c) {
            ctx->pc = 0x380550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38054Cu;
            // 0x380550: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380910u;
            goto label_380910;
        }
    }
    ctx->pc = 0x380554u;
label_380554:
    // 0x380554: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x380554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_380558:
    // 0x380558: 0x50850038  beql        $a0, $a1, . + 4 + (0x38 << 2)
label_38055c:
    if (ctx->pc == 0x38055Cu) {
        ctx->pc = 0x38055Cu;
            // 0x38055c: 0x8e4300c8  lw          $v1, 0xC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
        ctx->pc = 0x380560u;
        goto label_380560;
    }
    ctx->pc = 0x380558u;
    {
        const bool branch_taken_0x380558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x380558) {
            ctx->pc = 0x38055Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380558u;
            // 0x38055c: 0x8e4300c8  lw          $v1, 0xC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38063Cu;
            goto label_38063c;
        }
    }
    ctx->pc = 0x380560u;
label_380560:
    // 0x380560: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x380560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_380564:
    // 0x380564: 0x50830018  beql        $a0, $v1, . + 4 + (0x18 << 2)
label_380568:
    if (ctx->pc == 0x380568u) {
        ctx->pc = 0x380568u;
            // 0x380568: 0x8e4200c8  lw          $v0, 0xC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
        ctx->pc = 0x38056Cu;
        goto label_38056c;
    }
    ctx->pc = 0x380564u;
    {
        const bool branch_taken_0x380564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x380564) {
            ctx->pc = 0x380568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380564u;
            // 0x380568: 0x8e4200c8  lw          $v0, 0xC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3805C8u;
            goto label_3805c8;
        }
    }
    ctx->pc = 0x38056Cu;
label_38056c:
    // 0x38056c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38056cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_380570:
    // 0x380570: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_380574:
    if (ctx->pc == 0x380574u) {
        ctx->pc = 0x380574u;
            // 0x380574: 0x8e4300e0  lw          $v1, 0xE0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->pc = 0x380578u;
        goto label_380578;
    }
    ctx->pc = 0x380570u;
    {
        const bool branch_taken_0x380570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x380570) {
            ctx->pc = 0x380574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380570u;
            // 0x380574: 0x8e4300e0  lw          $v1, 0xE0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380580u;
            goto label_380580;
        }
    }
    ctx->pc = 0x380578u;
label_380578:
    // 0x380578: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_38057c:
    if (ctx->pc == 0x38057Cu) {
        ctx->pc = 0x38057Cu;
            // 0x38057c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x380580u;
        goto label_380580;
    }
    ctx->pc = 0x380578u;
    {
        const bool branch_taken_0x380578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38057Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380578u;
            // 0x38057c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380578) {
            ctx->pc = 0x38093Cu;
            goto label_38093c;
        }
    }
    ctx->pc = 0x380580u;
label_380580:
    // 0x380580: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x380580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_380584:
    // 0x380584: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x380584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_380588:
    // 0x380588: 0x146000eb  bnez        $v1, . + 4 + (0xEB << 2)
label_38058c:
    if (ctx->pc == 0x38058Cu) {
        ctx->pc = 0x380590u;
        goto label_380590;
    }
    ctx->pc = 0x380588u;
    {
        const bool branch_taken_0x380588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x380588) {
            ctx->pc = 0x380938u;
            goto label_380938;
        }
    }
    ctx->pc = 0x380590u;
label_380590:
    // 0x380590: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x380590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_380594:
    // 0x380594: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_380598:
    if (ctx->pc == 0x380598u) {
        ctx->pc = 0x380598u;
            // 0x380598: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x38059Cu;
        goto label_38059c;
    }
    ctx->pc = 0x380594u;
    {
        const bool branch_taken_0x380594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380594) {
            ctx->pc = 0x380598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380594u;
            // 0x380598: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3805B4u;
            goto label_3805b4;
        }
    }
    ctx->pc = 0x38059Cu;
label_38059c:
    // 0x38059c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x38059cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3805a0:
    // 0x3805a0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3805a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3805a4:
    // 0x3805a4: 0x320f809  jalr        $t9
label_3805a8:
    if (ctx->pc == 0x3805A8u) {
        ctx->pc = 0x3805A8u;
            // 0x3805a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3805ACu;
        goto label_3805ac;
    }
    ctx->pc = 0x3805A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3805ACu);
        ctx->pc = 0x3805A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3805A4u;
            // 0x3805a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3805ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3805ACu; }
            if (ctx->pc != 0x3805ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3805ACu;
label_3805ac:
    // 0x3805ac: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_3805b0:
    if (ctx->pc == 0x3805B0u) {
        ctx->pc = 0x3805B4u;
        goto label_3805b4;
    }
    ctx->pc = 0x3805ACu;
    {
        const bool branch_taken_0x3805ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3805ac) {
            ctx->pc = 0x380938u;
            goto label_380938;
        }
    }
    ctx->pc = 0x3805B4u;
label_3805b4:
    // 0x3805b4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3805b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3805b8:
    // 0x3805b8: 0x320f809  jalr        $t9
label_3805bc:
    if (ctx->pc == 0x3805BCu) {
        ctx->pc = 0x3805BCu;
            // 0x3805bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3805C0u;
        goto label_3805c0;
    }
    ctx->pc = 0x3805B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3805C0u);
        ctx->pc = 0x3805BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3805B8u;
            // 0x3805bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3805C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3805C0u; }
            if (ctx->pc != 0x3805C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3805C0u;
label_3805c0:
    // 0x3805c0: 0x100000dd  b           . + 4 + (0xDD << 2)
label_3805c4:
    if (ctx->pc == 0x3805C4u) {
        ctx->pc = 0x3805C8u;
        goto label_3805c8;
    }
    ctx->pc = 0x3805C0u;
    {
        const bool branch_taken_0x3805c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3805c0) {
            ctx->pc = 0x380938u;
            goto label_380938;
        }
    }
    ctx->pc = 0x3805C8u;
label_3805c8:
    // 0x3805c8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3805cc:
    if (ctx->pc == 0x3805CCu) {
        ctx->pc = 0x3805CCu;
            // 0x3805cc: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3805D0u;
        goto label_3805d0;
    }
    ctx->pc = 0x3805C8u;
    {
        const bool branch_taken_0x3805c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3805c8) {
            ctx->pc = 0x3805CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3805C8u;
            // 0x3805cc: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3805F4u;
            goto label_3805f4;
        }
    }
    ctx->pc = 0x3805D0u;
label_3805d0:
    // 0x3805d0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3805d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3805d4:
    // 0x3805d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3805d8:
    if (ctx->pc == 0x3805D8u) {
        ctx->pc = 0x3805DCu;
        goto label_3805dc;
    }
    ctx->pc = 0x3805D4u;
    {
        const bool branch_taken_0x3805d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3805d4) {
            ctx->pc = 0x3805F0u;
            goto label_3805f0;
        }
    }
    ctx->pc = 0x3805DCu;
label_3805dc:
    // 0x3805dc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3805dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3805e0:
    // 0x3805e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3805e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3805e4:
    // 0x3805e4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3805e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3805e8:
    // 0x3805e8: 0x320f809  jalr        $t9
label_3805ec:
    if (ctx->pc == 0x3805ECu) {
        ctx->pc = 0x3805ECu;
            // 0x3805ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3805F0u;
        goto label_3805f0;
    }
    ctx->pc = 0x3805E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3805F0u);
        ctx->pc = 0x3805ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3805E8u;
            // 0x3805ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3805F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3805F0u; }
            if (ctx->pc != 0x3805F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3805F0u;
label_3805f0:
    // 0x3805f0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x3805f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3805f4:
    // 0x3805f4: 0xc64000d0  lwc1        $f0, 0xD0($s2)
    ctx->pc = 0x3805f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3805f8:
    // 0x3805f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3805f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3805fc:
    // 0x3805fc: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x3805fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
label_380600:
    // 0x380600: 0xc64100d4  lwc1        $f1, 0xD4($s2)
    ctx->pc = 0x380600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_380604:
    // 0x380604: 0xc64000d0  lwc1        $f0, 0xD0($s2)
    ctx->pc = 0x380604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_380608:
    // 0x380608: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x380608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38060c:
    // 0x38060c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_380610:
    if (ctx->pc == 0x380610u) {
        ctx->pc = 0x380610u;
            // 0x380610: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->pc = 0x380614u;
        goto label_380614;
    }
    ctx->pc = 0x38060Cu;
    {
        const bool branch_taken_0x38060c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38060c) {
            ctx->pc = 0x380610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38060Cu;
            // 0x380610: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38062Cu;
            goto label_38062c;
        }
    }
    ctx->pc = 0x380614u;
label_380614:
    // 0x380614: 0xe64100d0  swc1        $f1, 0xD0($s2)
    ctx->pc = 0x380614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
label_380618:
    // 0x380618: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x380618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38061c:
    // 0x38061c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x38061cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_380620:
    // 0x380620: 0x320f809  jalr        $t9
label_380624:
    if (ctx->pc == 0x380624u) {
        ctx->pc = 0x380624u;
            // 0x380624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x380628u;
        goto label_380628;
    }
    ctx->pc = 0x380620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x380628u);
        ctx->pc = 0x380624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380620u;
            // 0x380624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x380628u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x380628u; }
            if (ctx->pc != 0x380628u) { return; }
        }
        }
    }
    ctx->pc = 0x380628u;
label_380628:
    // 0x380628: 0x8e4400cc  lw          $a0, 0xCC($s2)
    ctx->pc = 0x380628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_38062c:
    // 0x38062c: 0xc11088c  jal         func_442230
label_380630:
    if (ctx->pc == 0x380630u) {
        ctx->pc = 0x380634u;
        goto label_380634;
    }
    ctx->pc = 0x38062Cu;
    SET_GPR_U32(ctx, 31, 0x380634u);
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380634u; }
        if (ctx->pc != 0x380634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380634u; }
        if (ctx->pc != 0x380634u) { return; }
    }
    ctx->pc = 0x380634u;
label_380634:
    // 0x380634: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_380638:
    if (ctx->pc == 0x380638u) {
        ctx->pc = 0x38063Cu;
        goto label_38063c;
    }
    ctx->pc = 0x380634u;
    {
        const bool branch_taken_0x380634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380634) {
            ctx->pc = 0x380938u;
            goto label_380938;
        }
    }
    ctx->pc = 0x38063Cu;
label_38063c:
    // 0x38063c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_380640:
    if (ctx->pc == 0x380640u) {
        ctx->pc = 0x380640u;
            // 0x380640: 0x8e43009c  lw          $v1, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->pc = 0x380644u;
        goto label_380644;
    }
    ctx->pc = 0x38063Cu;
    {
        const bool branch_taken_0x38063c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38063c) {
            ctx->pc = 0x380640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38063Cu;
            // 0x380640: 0x8e43009c  lw          $v1, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380668u;
            goto label_380668;
        }
    }
    ctx->pc = 0x380644u;
label_380644:
    // 0x380644: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x380644u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_380648:
    // 0x380648: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_38064c:
    if (ctx->pc == 0x38064Cu) {
        ctx->pc = 0x380650u;
        goto label_380650;
    }
    ctx->pc = 0x380648u;
    {
        const bool branch_taken_0x380648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x380648) {
            ctx->pc = 0x380664u;
            goto label_380664;
        }
    }
    ctx->pc = 0x380650u;
label_380650:
    // 0x380650: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x380650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_380654:
    // 0x380654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x380654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_380658:
    // 0x380658: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x380658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_38065c:
    // 0x38065c: 0x320f809  jalr        $t9
label_380660:
    if (ctx->pc == 0x380660u) {
        ctx->pc = 0x380660u;
            // 0x380660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x380664u;
        goto label_380664;
    }
    ctx->pc = 0x38065Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x380664u);
        ctx->pc = 0x380660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38065Cu;
            // 0x380660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x380664u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x380664u; }
            if (ctx->pc != 0x380664u) { return; }
        }
        }
    }
    ctx->pc = 0x380664u;
label_380664:
    // 0x380664: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x380664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_380668:
    // 0x380668: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x380668u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_38066c:
    // 0x38066c: 0x102000b2  beqz        $at, . + 4 + (0xB2 << 2)
label_380670:
    if (ctx->pc == 0x380670u) {
        ctx->pc = 0x380674u;
        goto label_380674;
    }
    ctx->pc = 0x38066Cu;
    {
        const bool branch_taken_0x38066c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38066c) {
            ctx->pc = 0x380938u;
            goto label_380938;
        }
    }
    ctx->pc = 0x380674u;
label_380674:
    // 0x380674: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x380674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_380678:
    // 0x380678: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x380678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_38067c:
    // 0x38067c: 0x24845a10  addiu       $a0, $a0, 0x5A10
    ctx->pc = 0x38067cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23056));
label_380680:
    // 0x380680: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x380680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_380684:
    // 0x380684: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x380684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_380688:
    // 0x380688: 0x600008  jr          $v1
label_38068c:
    if (ctx->pc == 0x38068Cu) {
        ctx->pc = 0x380690u;
        goto label_380690;
    }
    ctx->pc = 0x380688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x380690u: goto label_380690;
            case 0x3806A8u: goto label_3806a8;
            case 0x3807FCu: goto label_3807fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x380690u;
label_380690:
    // 0x380690: 0xc0e0254  jal         func_380950
label_380694:
    if (ctx->pc == 0x380694u) {
        ctx->pc = 0x380694u;
            // 0x380694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x380698u;
        goto label_380698;
    }
    ctx->pc = 0x380690u;
    SET_GPR_U32(ctx, 31, 0x380698u);
    ctx->pc = 0x380694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380690u;
            // 0x380694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380950u;
    if (runtime->hasFunction(0x380950u)) {
        auto targetFn = runtime->lookupFunction(0x380950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380698u; }
        if (ctx->pc != 0x380698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380950_0x380950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380698u; }
        if (ctx->pc != 0x380698u) { return; }
    }
    ctx->pc = 0x380698u;
label_380698:
    // 0x380698: 0xc11088c  jal         func_442230
label_38069c:
    if (ctx->pc == 0x38069Cu) {
        ctx->pc = 0x38069Cu;
            // 0x38069c: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->pc = 0x3806A0u;
        goto label_3806a0;
    }
    ctx->pc = 0x380698u;
    SET_GPR_U32(ctx, 31, 0x3806A0u);
    ctx->pc = 0x38069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380698u;
            // 0x38069c: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3806A0u; }
        if (ctx->pc != 0x3806A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3806A0u; }
        if (ctx->pc != 0x3806A0u) { return; }
    }
    ctx->pc = 0x3806A0u;
label_3806a0:
    // 0x3806a0: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_3806a4:
    if (ctx->pc == 0x3806A4u) {
        ctx->pc = 0x3806A8u;
        goto label_3806a8;
    }
    ctx->pc = 0x3806A0u;
    {
        const bool branch_taken_0x3806a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3806a0) {
            ctx->pc = 0x380938u;
            goto label_380938;
        }
    }
    ctx->pc = 0x3806A8u;
label_3806a8:
    // 0x3806a8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3806a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3806ac:
    // 0x3806ac: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x3806acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_3806b0:
    // 0x3806b0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3806b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3806b4:
    // 0x3806b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3806b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3806b8:
    // 0x3806b8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3806b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3806bc:
    // 0x3806bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3806bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3806c0:
    // 0x3806c0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3806c4:
    if (ctx->pc == 0x3806C4u) {
        ctx->pc = 0x3806C4u;
            // 0x3806c4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3806C8u;
        goto label_3806c8;
    }
    ctx->pc = 0x3806C0u;
    {
        const bool branch_taken_0x3806c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3806c0) {
            ctx->pc = 0x3806C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3806C0u;
            // 0x3806c4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3806D8u;
            goto label_3806d8;
        }
    }
    ctx->pc = 0x3806C8u;
label_3806c8:
    // 0x3806c8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3806c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3806cc:
    // 0x3806cc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3806ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3806d0:
    // 0x3806d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3806d4:
    if (ctx->pc == 0x3806D4u) {
        ctx->pc = 0x3806D4u;
            // 0x3806d4: 0x3c033eaa  lui         $v1, 0x3EAA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16042 << 16));
        ctx->pc = 0x3806D8u;
        goto label_3806d8;
    }
    ctx->pc = 0x3806D0u;
    {
        const bool branch_taken_0x3806d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3806D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3806D0u;
            // 0x3806d4: 0x3c033eaa  lui         $v1, 0x3EAA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16042 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3806d0) {
            ctx->pc = 0x3806F0u;
            goto label_3806f0;
        }
    }
    ctx->pc = 0x3806D8u;
label_3806d8:
    // 0x3806d8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3806d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3806dc:
    // 0x3806dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3806dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3806e0:
    // 0x3806e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3806e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3806e4:
    // 0x3806e4: 0x0  nop
    ctx->pc = 0x3806e4u;
    // NOP
label_3806e8:
    // 0x3806e8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3806e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3806ec:
    // 0x3806ec: 0x3c033eaa  lui         $v1, 0x3EAA
    ctx->pc = 0x3806ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16042 << 16));
label_3806f0:
    // 0x3806f0: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x3806f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_3806f4:
    // 0x3806f4: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3806f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3806f8:
    // 0x3806f8: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_3806fc:
    if (ctx->pc == 0x3806FCu) {
        ctx->pc = 0x3806FCu;
            // 0x3806fc: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x380700u;
        goto label_380700;
    }
    ctx->pc = 0x3806F8u;
    {
        const bool branch_taken_0x3806f8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3806f8) {
            ctx->pc = 0x3806FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3806F8u;
            // 0x3806fc: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38070Cu;
            goto label_38070c;
        }
    }
    ctx->pc = 0x380700u;
label_380700:
    // 0x380700: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x380700u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_380704:
    // 0x380704: 0x10000007  b           . + 4 + (0x7 << 2)
label_380708:
    if (ctx->pc == 0x380708u) {
        ctx->pc = 0x380708u;
            // 0x380708: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38070Cu;
        goto label_38070c;
    }
    ctx->pc = 0x380704u;
    {
        const bool branch_taken_0x380704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380704u;
            // 0x380708: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x380704) {
            ctx->pc = 0x380724u;
            goto label_380724;
        }
    }
    ctx->pc = 0x38070Cu;
label_38070c:
    // 0x38070c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x38070cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_380710:
    // 0x380710: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x380710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_380714:
    // 0x380714: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x380714u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_380718:
    // 0x380718: 0x0  nop
    ctx->pc = 0x380718u;
    // NOP
label_38071c:
    // 0x38071c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x38071cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_380720:
    // 0x380720: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x380720u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_380724:
    // 0x380724: 0xc64100a8  lwc1        $f1, 0xA8($s2)
    ctx->pc = 0x380724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_380728:
    // 0x380728: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x380728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
label_38072c:
    // 0x38072c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38072cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_380730:
    // 0x380730: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x380730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_380734:
    // 0x380734: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x380734u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_380738:
    // 0x380738: 0x4602201d  msub.s      $f0, $f4, $f2
    ctx->pc = 0x380738u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_38073c:
    // 0x38073c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_380740:
    if (ctx->pc == 0x380740u) {
        ctx->pc = 0x380740u;
            // 0x380740: 0xe64000a8  swc1        $f0, 0xA8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
        ctx->pc = 0x380744u;
        goto label_380744;
    }
    ctx->pc = 0x38073Cu;
    {
        const bool branch_taken_0x38073c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x380740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38073Cu;
            // 0x380740: 0xe64000a8  swc1        $f0, 0xA8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38073c) {
            ctx->pc = 0x380750u;
            goto label_380750;
        }
    }
    ctx->pc = 0x380744u;
label_380744:
    // 0x380744: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x380744u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_380748:
    // 0x380748: 0x10000008  b           . + 4 + (0x8 << 2)
label_38074c:
    if (ctx->pc == 0x38074Cu) {
        ctx->pc = 0x38074Cu;
            // 0x38074c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x380750u;
        goto label_380750;
    }
    ctx->pc = 0x380748u;
    {
        const bool branch_taken_0x380748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38074Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380748u;
            // 0x38074c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x380748) {
            ctx->pc = 0x38076Cu;
            goto label_38076c;
        }
    }
    ctx->pc = 0x380750u;
label_380750:
    // 0x380750: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x380750u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_380754:
    // 0x380754: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x380754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_380758:
    // 0x380758: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x380758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_38075c:
    // 0x38075c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38075cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_380760:
    // 0x380760: 0x0  nop
    ctx->pc = 0x380760u;
    // NOP
label_380764:
    // 0x380764: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x380764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_380768:
    // 0x380768: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x380768u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_38076c:
    // 0x38076c: 0xc64000ac  lwc1        $f0, 0xAC($s2)
    ctx->pc = 0x38076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_380770:
    // 0x380770: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x380770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_380774:
    // 0x380774: 0x0  nop
    ctx->pc = 0x380774u;
    // NOP
label_380778:
    // 0x380778: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x380778u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_38077c:
    // 0x38077c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x38077cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_380780:
    // 0x380780: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x380780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
label_380784:
    // 0x380784: 0xc64000a8  lwc1        $f0, 0xA8($s2)
    ctx->pc = 0x380784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_380788:
    // 0x380788: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x380788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38078c:
    // 0x38078c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_380790:
    if (ctx->pc == 0x380790u) {
        ctx->pc = 0x380790u;
            // 0x380790: 0xc64100ac  lwc1        $f1, 0xAC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x380794u;
        goto label_380794;
    }
    ctx->pc = 0x38078Cu;
    {
        const bool branch_taken_0x38078c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38078c) {
            ctx->pc = 0x380790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38078Cu;
            // 0x380790: 0xc64100ac  lwc1        $f1, 0xAC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x38079Cu;
            goto label_38079c;
        }
    }
    ctx->pc = 0x380794u;
label_380794:
    // 0x380794: 0xe64100a8  swc1        $f1, 0xA8($s2)
    ctx->pc = 0x380794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
label_380798:
    // 0x380798: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x380798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38079c:
    // 0x38079c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x38079cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_3807a0:
    // 0x3807a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3807a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3807a4:
    // 0x3807a4: 0x0  nop
    ctx->pc = 0x3807a4u;
    // NOP
label_3807a8:
    // 0x3807a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3807a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3807ac:
    // 0x3807ac: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_3807b0:
    if (ctx->pc == 0x3807B0u) {
        ctx->pc = 0x3807B0u;
            // 0x3807b0: 0x8e4300a4  lw          $v1, 0xA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->pc = 0x3807B4u;
        goto label_3807b4;
    }
    ctx->pc = 0x3807ACu;
    {
        const bool branch_taken_0x3807ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3807ac) {
            ctx->pc = 0x3807B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3807ACu;
            // 0x3807b0: 0x8e4300a4  lw          $v1, 0xA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3807BCu;
            goto label_3807bc;
        }
    }
    ctx->pc = 0x3807B4u;
label_3807b4:
    // 0x3807b4: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x3807b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
label_3807b8:
    // 0x3807b8: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x3807b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_3807bc:
    // 0x3807bc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3807bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3807c0:
    // 0x3807c0: 0xae4300a4  sw          $v1, 0xA4($s2)
    ctx->pc = 0x3807c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 3));
label_3807c4:
    // 0x3807c4: 0x2c63003c  sltiu       $v1, $v1, 0x3C
    ctx->pc = 0x3807c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_3807c8:
    // 0x3807c8: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
label_3807cc:
    if (ctx->pc == 0x3807CCu) {
        ctx->pc = 0x3807D0u;
        goto label_3807d0;
    }
    ctx->pc = 0x3807C8u;
    {
        const bool branch_taken_0x3807c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3807c8) {
            ctx->pc = 0x380938u;
            goto label_380938;
        }
    }
    ctx->pc = 0x3807D0u;
label_3807d0:
    // 0x3807d0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3807d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3807d4:
    // 0x3807d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3807d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3807d8:
    // 0x3807d8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3807d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3807dc:
    // 0x3807dc: 0x320f809  jalr        $t9
label_3807e0:
    if (ctx->pc == 0x3807E0u) {
        ctx->pc = 0x3807E0u;
            // 0x3807e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3807E4u;
        goto label_3807e4;
    }
    ctx->pc = 0x3807DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3807E4u);
        ctx->pc = 0x3807E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3807DCu;
            // 0x3807e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3807E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3807E4u; }
            if (ctx->pc != 0x3807E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3807E4u;
label_3807e4:
    // 0x3807e4: 0x8e4400c8  lw          $a0, 0xC8($s2)
    ctx->pc = 0x3807e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_3807e8:
    // 0x3807e8: 0x10800053  beqz        $a0, . + 4 + (0x53 << 2)
label_3807ec:
    if (ctx->pc == 0x3807ECu) {
        ctx->pc = 0x3807F0u;
        goto label_3807f0;
    }
    ctx->pc = 0x3807E8u;
    {
        const bool branch_taken_0x3807e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3807e8) {
            ctx->pc = 0x380938u;
            goto label_380938;
        }
    }
    ctx->pc = 0x3807F0u;
label_3807f0:
    // 0x3807f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3807f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3807f4:
    // 0x3807f4: 0x10000050  b           . + 4 + (0x50 << 2)
label_3807f8:
    if (ctx->pc == 0x3807F8u) {
        ctx->pc = 0x3807F8u;
            // 0x3807f8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3807FCu;
        goto label_3807fc;
    }
    ctx->pc = 0x3807F4u;
    {
        const bool branch_taken_0x3807f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3807F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3807F4u;
            // 0x3807f8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3807f4) {
            ctx->pc = 0x380938u;
            goto label_380938;
        }
    }
    ctx->pc = 0x3807FCu;
label_3807fc:
    // 0x3807fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3807fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_380800:
    // 0x380800: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x380800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_380804:
    // 0x380804: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x380804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_380808:
    // 0x380808: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x380808u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38080c:
    // 0x38080c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x38080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_380810:
    // 0x380810: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x380810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_380814:
    // 0x380814: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_380818:
    if (ctx->pc == 0x380818u) {
        ctx->pc = 0x380818u;
            // 0x380818: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x38081Cu;
        goto label_38081c;
    }
    ctx->pc = 0x380814u;
    {
        const bool branch_taken_0x380814 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x380814) {
            ctx->pc = 0x380818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380814u;
            // 0x380818: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x38082Cu;
            goto label_38082c;
        }
    }
    ctx->pc = 0x38081Cu;
label_38081c:
    // 0x38081c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38081cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_380820:
    // 0x380820: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x380820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_380824:
    // 0x380824: 0x10000007  b           . + 4 + (0x7 << 2)
label_380828:
    if (ctx->pc == 0x380828u) {
        ctx->pc = 0x380828u;
            // 0x380828: 0x3c033eaa  lui         $v1, 0x3EAA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16042 << 16));
        ctx->pc = 0x38082Cu;
        goto label_38082c;
    }
    ctx->pc = 0x380824u;
    {
        const bool branch_taken_0x380824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380824u;
            // 0x380828: 0x3c033eaa  lui         $v1, 0x3EAA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16042 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380824) {
            ctx->pc = 0x380844u;
            goto label_380844;
        }
    }
    ctx->pc = 0x38082Cu;
label_38082c:
    // 0x38082c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38082cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_380830:
    // 0x380830: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380830u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_380834:
    // 0x380834: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x380834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_380838:
    // 0x380838: 0x0  nop
    ctx->pc = 0x380838u;
    // NOP
label_38083c:
    // 0x38083c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x38083cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_380840:
    // 0x380840: 0x3c033eaa  lui         $v1, 0x3EAA
    ctx->pc = 0x380840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16042 << 16));
label_380844:
    // 0x380844: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x380844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_380848:
    // 0x380848: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x380848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_38084c:
    // 0x38084c: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_380850:
    if (ctx->pc == 0x380850u) {
        ctx->pc = 0x380850u;
            // 0x380850: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x380854u;
        goto label_380854;
    }
    ctx->pc = 0x38084Cu;
    {
        const bool branch_taken_0x38084c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x38084c) {
            ctx->pc = 0x380850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38084Cu;
            // 0x380850: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380860u;
            goto label_380860;
        }
    }
    ctx->pc = 0x380854u;
label_380854:
    // 0x380854: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x380854u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_380858:
    // 0x380858: 0x10000007  b           . + 4 + (0x7 << 2)
label_38085c:
    if (ctx->pc == 0x38085Cu) {
        ctx->pc = 0x38085Cu;
            // 0x38085c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x380860u;
        goto label_380860;
    }
    ctx->pc = 0x380858u;
    {
        const bool branch_taken_0x380858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380858u;
            // 0x38085c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x380858) {
            ctx->pc = 0x380878u;
            goto label_380878;
        }
    }
    ctx->pc = 0x380860u;
label_380860:
    // 0x380860: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x380860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_380864:
    // 0x380864: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x380864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_380868:
    // 0x380868: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x380868u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38086c:
    // 0x38086c: 0x0  nop
    ctx->pc = 0x38086cu;
    // NOP
label_380870:
    // 0x380870: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x380870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_380874:
    // 0x380874: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x380874u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_380878:
    // 0x380878: 0xc64100a8  lwc1        $f1, 0xA8($s2)
    ctx->pc = 0x380878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38087c:
    // 0x38087c: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x38087cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
label_380880:
    // 0x380880: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x380880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_380884:
    // 0x380884: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x380884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_380888:
    // 0x380888: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x380888u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_38088c:
    // 0x38088c: 0x4602201d  msub.s      $f0, $f4, $f2
    ctx->pc = 0x38088cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_380890:
    // 0x380890: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_380894:
    if (ctx->pc == 0x380894u) {
        ctx->pc = 0x380894u;
            // 0x380894: 0xe64000a8  swc1        $f0, 0xA8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
        ctx->pc = 0x380898u;
        goto label_380898;
    }
    ctx->pc = 0x380890u;
    {
        const bool branch_taken_0x380890 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x380894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380890u;
            // 0x380894: 0xe64000a8  swc1        $f0, 0xA8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x380890) {
            ctx->pc = 0x3808A4u;
            goto label_3808a4;
        }
    }
    ctx->pc = 0x380898u;
label_380898:
    // 0x380898: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x380898u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38089c:
    // 0x38089c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3808a0:
    if (ctx->pc == 0x3808A0u) {
        ctx->pc = 0x3808A0u;
            // 0x3808a0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3808A4u;
        goto label_3808a4;
    }
    ctx->pc = 0x38089Cu;
    {
        const bool branch_taken_0x38089c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3808A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38089Cu;
            // 0x3808a0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38089c) {
            ctx->pc = 0x3808C0u;
            goto label_3808c0;
        }
    }
    ctx->pc = 0x3808A4u;
label_3808a4:
    // 0x3808a4: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x3808a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_3808a8:
    // 0x3808a8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3808a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3808ac:
    // 0x3808ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3808acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3808b0:
    // 0x3808b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3808b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3808b4:
    // 0x3808b4: 0x0  nop
    ctx->pc = 0x3808b4u;
    // NOP
label_3808b8:
    // 0x3808b8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3808b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3808bc:
    // 0x3808bc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3808bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3808c0:
    // 0x3808c0: 0xc64000ac  lwc1        $f0, 0xAC($s2)
    ctx->pc = 0x3808c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3808c4:
    // 0x3808c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3808c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3808c8:
    // 0x3808c8: 0x0  nop
    ctx->pc = 0x3808c8u;
    // NOP
label_3808cc:
    // 0x3808cc: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x3808ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3808d0:
    // 0x3808d0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x3808d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_3808d4:
    // 0x3808d4: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x3808d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
label_3808d8:
    // 0x3808d8: 0xc64000a8  lwc1        $f0, 0xA8($s2)
    ctx->pc = 0x3808d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3808dc:
    // 0x3808dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3808dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3808e0:
    // 0x3808e0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3808e4:
    if (ctx->pc == 0x3808E4u) {
        ctx->pc = 0x3808E4u;
            // 0x3808e4: 0xc64100ac  lwc1        $f1, 0xAC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3808E8u;
        goto label_3808e8;
    }
    ctx->pc = 0x3808E0u;
    {
        const bool branch_taken_0x3808e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3808e0) {
            ctx->pc = 0x3808E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3808E0u;
            // 0x3808e4: 0xc64100ac  lwc1        $f1, 0xAC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3808F0u;
            goto label_3808f0;
        }
    }
    ctx->pc = 0x3808E8u;
label_3808e8:
    // 0x3808e8: 0xe64100a8  swc1        $f1, 0xA8($s2)
    ctx->pc = 0x3808e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
label_3808ec:
    // 0x3808ec: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x3808ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3808f0:
    // 0x3808f0: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x3808f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_3808f4:
    // 0x3808f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3808f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3808f8:
    // 0x3808f8: 0x0  nop
    ctx->pc = 0x3808f8u;
    // NOP
label_3808fc:
    // 0x3808fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3808fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_380900:
    // 0x380900: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_380904:
    if (ctx->pc == 0x380904u) {
        ctx->pc = 0x380908u;
        goto label_380908;
    }
    ctx->pc = 0x380900u;
    {
        const bool branch_taken_0x380900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x380900) {
            ctx->pc = 0x380938u;
            goto label_380938;
        }
    }
    ctx->pc = 0x380908u;
label_380908:
    // 0x380908: 0x1000000b  b           . + 4 + (0xB << 2)
label_38090c:
    if (ctx->pc == 0x38090Cu) {
        ctx->pc = 0x38090Cu;
            // 0x38090c: 0xe64000ac  swc1        $f0, 0xAC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
        ctx->pc = 0x380910u;
        goto label_380910;
    }
    ctx->pc = 0x380908u;
    {
        const bool branch_taken_0x380908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38090Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380908u;
            // 0x38090c: 0xe64000ac  swc1        $f0, 0xAC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x380908) {
            ctx->pc = 0x380938u;
            goto label_380938;
        }
    }
    ctx->pc = 0x380910u;
label_380910:
    // 0x380910: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x380910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_380914:
    // 0x380914: 0x320f809  jalr        $t9
label_380918:
    if (ctx->pc == 0x380918u) {
        ctx->pc = 0x380918u;
            // 0x380918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38091Cu;
        goto label_38091c;
    }
    ctx->pc = 0x380914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38091Cu);
        ctx->pc = 0x380918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380914u;
            // 0x380918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38091Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38091Cu; }
            if (ctx->pc != 0x38091Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38091Cu;
label_38091c:
    // 0x38091c: 0x10000006  b           . + 4 + (0x6 << 2)
label_380920:
    if (ctx->pc == 0x380920u) {
        ctx->pc = 0x380924u;
        goto label_380924;
    }
    ctx->pc = 0x38091Cu;
    {
        const bool branch_taken_0x38091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38091c) {
            ctx->pc = 0x380938u;
            goto label_380938;
        }
    }
    ctx->pc = 0x380924u;
label_380924:
    // 0x380924: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x380924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_380928:
    // 0x380928: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x380928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38092c:
    // 0x38092c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x38092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_380930:
    // 0x380930: 0xc057b7c  jal         func_15EDF0
label_380934:
    if (ctx->pc == 0x380934u) {
        ctx->pc = 0x380934u;
            // 0x380934: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x380938u;
        goto label_380938;
    }
    ctx->pc = 0x380930u;
    SET_GPR_U32(ctx, 31, 0x380938u);
    ctx->pc = 0x380934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380930u;
            // 0x380934: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380938u; }
        if (ctx->pc != 0x380938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380938u; }
        if (ctx->pc != 0x380938u) { return; }
    }
    ctx->pc = 0x380938u;
label_380938:
    // 0x380938: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x380938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38093c:
    // 0x38093c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38093cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_380940:
    // 0x380940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x380940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_380944:
    // 0x380944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x380944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_380948:
    // 0x380948: 0x3e00008  jr          $ra
label_38094c:
    if (ctx->pc == 0x38094Cu) {
        ctx->pc = 0x38094Cu;
            // 0x38094c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x380950u;
        goto label_fallthrough_0x380948;
    }
    ctx->pc = 0x380948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38094Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380948u;
            // 0x38094c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x380948:
    ctx->pc = 0x380950u;
}
