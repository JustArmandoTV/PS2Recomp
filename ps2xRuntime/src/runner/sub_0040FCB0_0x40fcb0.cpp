#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040FCB0
// Address: 0x40fcb0 - 0x4105e0
void sub_0040FCB0_0x40fcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040FCB0_0x40fcb0");
#endif

    switch (ctx->pc) {
        case 0x40fcb0u: goto label_40fcb0;
        case 0x40fcb4u: goto label_40fcb4;
        case 0x40fcb8u: goto label_40fcb8;
        case 0x40fcbcu: goto label_40fcbc;
        case 0x40fcc0u: goto label_40fcc0;
        case 0x40fcc4u: goto label_40fcc4;
        case 0x40fcc8u: goto label_40fcc8;
        case 0x40fcccu: goto label_40fccc;
        case 0x40fcd0u: goto label_40fcd0;
        case 0x40fcd4u: goto label_40fcd4;
        case 0x40fcd8u: goto label_40fcd8;
        case 0x40fcdcu: goto label_40fcdc;
        case 0x40fce0u: goto label_40fce0;
        case 0x40fce4u: goto label_40fce4;
        case 0x40fce8u: goto label_40fce8;
        case 0x40fcecu: goto label_40fcec;
        case 0x40fcf0u: goto label_40fcf0;
        case 0x40fcf4u: goto label_40fcf4;
        case 0x40fcf8u: goto label_40fcf8;
        case 0x40fcfcu: goto label_40fcfc;
        case 0x40fd00u: goto label_40fd00;
        case 0x40fd04u: goto label_40fd04;
        case 0x40fd08u: goto label_40fd08;
        case 0x40fd0cu: goto label_40fd0c;
        case 0x40fd10u: goto label_40fd10;
        case 0x40fd14u: goto label_40fd14;
        case 0x40fd18u: goto label_40fd18;
        case 0x40fd1cu: goto label_40fd1c;
        case 0x40fd20u: goto label_40fd20;
        case 0x40fd24u: goto label_40fd24;
        case 0x40fd28u: goto label_40fd28;
        case 0x40fd2cu: goto label_40fd2c;
        case 0x40fd30u: goto label_40fd30;
        case 0x40fd34u: goto label_40fd34;
        case 0x40fd38u: goto label_40fd38;
        case 0x40fd3cu: goto label_40fd3c;
        case 0x40fd40u: goto label_40fd40;
        case 0x40fd44u: goto label_40fd44;
        case 0x40fd48u: goto label_40fd48;
        case 0x40fd4cu: goto label_40fd4c;
        case 0x40fd50u: goto label_40fd50;
        case 0x40fd54u: goto label_40fd54;
        case 0x40fd58u: goto label_40fd58;
        case 0x40fd5cu: goto label_40fd5c;
        case 0x40fd60u: goto label_40fd60;
        case 0x40fd64u: goto label_40fd64;
        case 0x40fd68u: goto label_40fd68;
        case 0x40fd6cu: goto label_40fd6c;
        case 0x40fd70u: goto label_40fd70;
        case 0x40fd74u: goto label_40fd74;
        case 0x40fd78u: goto label_40fd78;
        case 0x40fd7cu: goto label_40fd7c;
        case 0x40fd80u: goto label_40fd80;
        case 0x40fd84u: goto label_40fd84;
        case 0x40fd88u: goto label_40fd88;
        case 0x40fd8cu: goto label_40fd8c;
        case 0x40fd90u: goto label_40fd90;
        case 0x40fd94u: goto label_40fd94;
        case 0x40fd98u: goto label_40fd98;
        case 0x40fd9cu: goto label_40fd9c;
        case 0x40fda0u: goto label_40fda0;
        case 0x40fda4u: goto label_40fda4;
        case 0x40fda8u: goto label_40fda8;
        case 0x40fdacu: goto label_40fdac;
        case 0x40fdb0u: goto label_40fdb0;
        case 0x40fdb4u: goto label_40fdb4;
        case 0x40fdb8u: goto label_40fdb8;
        case 0x40fdbcu: goto label_40fdbc;
        case 0x40fdc0u: goto label_40fdc0;
        case 0x40fdc4u: goto label_40fdc4;
        case 0x40fdc8u: goto label_40fdc8;
        case 0x40fdccu: goto label_40fdcc;
        case 0x40fdd0u: goto label_40fdd0;
        case 0x40fdd4u: goto label_40fdd4;
        case 0x40fdd8u: goto label_40fdd8;
        case 0x40fddcu: goto label_40fddc;
        case 0x40fde0u: goto label_40fde0;
        case 0x40fde4u: goto label_40fde4;
        case 0x40fde8u: goto label_40fde8;
        case 0x40fdecu: goto label_40fdec;
        case 0x40fdf0u: goto label_40fdf0;
        case 0x40fdf4u: goto label_40fdf4;
        case 0x40fdf8u: goto label_40fdf8;
        case 0x40fdfcu: goto label_40fdfc;
        case 0x40fe00u: goto label_40fe00;
        case 0x40fe04u: goto label_40fe04;
        case 0x40fe08u: goto label_40fe08;
        case 0x40fe0cu: goto label_40fe0c;
        case 0x40fe10u: goto label_40fe10;
        case 0x40fe14u: goto label_40fe14;
        case 0x40fe18u: goto label_40fe18;
        case 0x40fe1cu: goto label_40fe1c;
        case 0x40fe20u: goto label_40fe20;
        case 0x40fe24u: goto label_40fe24;
        case 0x40fe28u: goto label_40fe28;
        case 0x40fe2cu: goto label_40fe2c;
        case 0x40fe30u: goto label_40fe30;
        case 0x40fe34u: goto label_40fe34;
        case 0x40fe38u: goto label_40fe38;
        case 0x40fe3cu: goto label_40fe3c;
        case 0x40fe40u: goto label_40fe40;
        case 0x40fe44u: goto label_40fe44;
        case 0x40fe48u: goto label_40fe48;
        case 0x40fe4cu: goto label_40fe4c;
        case 0x40fe50u: goto label_40fe50;
        case 0x40fe54u: goto label_40fe54;
        case 0x40fe58u: goto label_40fe58;
        case 0x40fe5cu: goto label_40fe5c;
        case 0x40fe60u: goto label_40fe60;
        case 0x40fe64u: goto label_40fe64;
        case 0x40fe68u: goto label_40fe68;
        case 0x40fe6cu: goto label_40fe6c;
        case 0x40fe70u: goto label_40fe70;
        case 0x40fe74u: goto label_40fe74;
        case 0x40fe78u: goto label_40fe78;
        case 0x40fe7cu: goto label_40fe7c;
        case 0x40fe80u: goto label_40fe80;
        case 0x40fe84u: goto label_40fe84;
        case 0x40fe88u: goto label_40fe88;
        case 0x40fe8cu: goto label_40fe8c;
        case 0x40fe90u: goto label_40fe90;
        case 0x40fe94u: goto label_40fe94;
        case 0x40fe98u: goto label_40fe98;
        case 0x40fe9cu: goto label_40fe9c;
        case 0x40fea0u: goto label_40fea0;
        case 0x40fea4u: goto label_40fea4;
        case 0x40fea8u: goto label_40fea8;
        case 0x40feacu: goto label_40feac;
        case 0x40feb0u: goto label_40feb0;
        case 0x40feb4u: goto label_40feb4;
        case 0x40feb8u: goto label_40feb8;
        case 0x40febcu: goto label_40febc;
        case 0x40fec0u: goto label_40fec0;
        case 0x40fec4u: goto label_40fec4;
        case 0x40fec8u: goto label_40fec8;
        case 0x40feccu: goto label_40fecc;
        case 0x40fed0u: goto label_40fed0;
        case 0x40fed4u: goto label_40fed4;
        case 0x40fed8u: goto label_40fed8;
        case 0x40fedcu: goto label_40fedc;
        case 0x40fee0u: goto label_40fee0;
        case 0x40fee4u: goto label_40fee4;
        case 0x40fee8u: goto label_40fee8;
        case 0x40feecu: goto label_40feec;
        case 0x40fef0u: goto label_40fef0;
        case 0x40fef4u: goto label_40fef4;
        case 0x40fef8u: goto label_40fef8;
        case 0x40fefcu: goto label_40fefc;
        case 0x40ff00u: goto label_40ff00;
        case 0x40ff04u: goto label_40ff04;
        case 0x40ff08u: goto label_40ff08;
        case 0x40ff0cu: goto label_40ff0c;
        case 0x40ff10u: goto label_40ff10;
        case 0x40ff14u: goto label_40ff14;
        case 0x40ff18u: goto label_40ff18;
        case 0x40ff1cu: goto label_40ff1c;
        case 0x40ff20u: goto label_40ff20;
        case 0x40ff24u: goto label_40ff24;
        case 0x40ff28u: goto label_40ff28;
        case 0x40ff2cu: goto label_40ff2c;
        case 0x40ff30u: goto label_40ff30;
        case 0x40ff34u: goto label_40ff34;
        case 0x40ff38u: goto label_40ff38;
        case 0x40ff3cu: goto label_40ff3c;
        case 0x40ff40u: goto label_40ff40;
        case 0x40ff44u: goto label_40ff44;
        case 0x40ff48u: goto label_40ff48;
        case 0x40ff4cu: goto label_40ff4c;
        case 0x40ff50u: goto label_40ff50;
        case 0x40ff54u: goto label_40ff54;
        case 0x40ff58u: goto label_40ff58;
        case 0x40ff5cu: goto label_40ff5c;
        case 0x40ff60u: goto label_40ff60;
        case 0x40ff64u: goto label_40ff64;
        case 0x40ff68u: goto label_40ff68;
        case 0x40ff6cu: goto label_40ff6c;
        case 0x40ff70u: goto label_40ff70;
        case 0x40ff74u: goto label_40ff74;
        case 0x40ff78u: goto label_40ff78;
        case 0x40ff7cu: goto label_40ff7c;
        case 0x40ff80u: goto label_40ff80;
        case 0x40ff84u: goto label_40ff84;
        case 0x40ff88u: goto label_40ff88;
        case 0x40ff8cu: goto label_40ff8c;
        case 0x40ff90u: goto label_40ff90;
        case 0x40ff94u: goto label_40ff94;
        case 0x40ff98u: goto label_40ff98;
        case 0x40ff9cu: goto label_40ff9c;
        case 0x40ffa0u: goto label_40ffa0;
        case 0x40ffa4u: goto label_40ffa4;
        case 0x40ffa8u: goto label_40ffa8;
        case 0x40ffacu: goto label_40ffac;
        case 0x40ffb0u: goto label_40ffb0;
        case 0x40ffb4u: goto label_40ffb4;
        case 0x40ffb8u: goto label_40ffb8;
        case 0x40ffbcu: goto label_40ffbc;
        case 0x40ffc0u: goto label_40ffc0;
        case 0x40ffc4u: goto label_40ffc4;
        case 0x40ffc8u: goto label_40ffc8;
        case 0x40ffccu: goto label_40ffcc;
        case 0x40ffd0u: goto label_40ffd0;
        case 0x40ffd4u: goto label_40ffd4;
        case 0x40ffd8u: goto label_40ffd8;
        case 0x40ffdcu: goto label_40ffdc;
        case 0x40ffe0u: goto label_40ffe0;
        case 0x40ffe4u: goto label_40ffe4;
        case 0x40ffe8u: goto label_40ffe8;
        case 0x40ffecu: goto label_40ffec;
        case 0x40fff0u: goto label_40fff0;
        case 0x40fff4u: goto label_40fff4;
        case 0x40fff8u: goto label_40fff8;
        case 0x40fffcu: goto label_40fffc;
        case 0x410000u: goto label_410000;
        case 0x410004u: goto label_410004;
        case 0x410008u: goto label_410008;
        case 0x41000cu: goto label_41000c;
        case 0x410010u: goto label_410010;
        case 0x410014u: goto label_410014;
        case 0x410018u: goto label_410018;
        case 0x41001cu: goto label_41001c;
        case 0x410020u: goto label_410020;
        case 0x410024u: goto label_410024;
        case 0x410028u: goto label_410028;
        case 0x41002cu: goto label_41002c;
        case 0x410030u: goto label_410030;
        case 0x410034u: goto label_410034;
        case 0x410038u: goto label_410038;
        case 0x41003cu: goto label_41003c;
        case 0x410040u: goto label_410040;
        case 0x410044u: goto label_410044;
        case 0x410048u: goto label_410048;
        case 0x41004cu: goto label_41004c;
        case 0x410050u: goto label_410050;
        case 0x410054u: goto label_410054;
        case 0x410058u: goto label_410058;
        case 0x41005cu: goto label_41005c;
        case 0x410060u: goto label_410060;
        case 0x410064u: goto label_410064;
        case 0x410068u: goto label_410068;
        case 0x41006cu: goto label_41006c;
        case 0x410070u: goto label_410070;
        case 0x410074u: goto label_410074;
        case 0x410078u: goto label_410078;
        case 0x41007cu: goto label_41007c;
        case 0x410080u: goto label_410080;
        case 0x410084u: goto label_410084;
        case 0x410088u: goto label_410088;
        case 0x41008cu: goto label_41008c;
        case 0x410090u: goto label_410090;
        case 0x410094u: goto label_410094;
        case 0x410098u: goto label_410098;
        case 0x41009cu: goto label_41009c;
        case 0x4100a0u: goto label_4100a0;
        case 0x4100a4u: goto label_4100a4;
        case 0x4100a8u: goto label_4100a8;
        case 0x4100acu: goto label_4100ac;
        case 0x4100b0u: goto label_4100b0;
        case 0x4100b4u: goto label_4100b4;
        case 0x4100b8u: goto label_4100b8;
        case 0x4100bcu: goto label_4100bc;
        case 0x4100c0u: goto label_4100c0;
        case 0x4100c4u: goto label_4100c4;
        case 0x4100c8u: goto label_4100c8;
        case 0x4100ccu: goto label_4100cc;
        case 0x4100d0u: goto label_4100d0;
        case 0x4100d4u: goto label_4100d4;
        case 0x4100d8u: goto label_4100d8;
        case 0x4100dcu: goto label_4100dc;
        case 0x4100e0u: goto label_4100e0;
        case 0x4100e4u: goto label_4100e4;
        case 0x4100e8u: goto label_4100e8;
        case 0x4100ecu: goto label_4100ec;
        case 0x4100f0u: goto label_4100f0;
        case 0x4100f4u: goto label_4100f4;
        case 0x4100f8u: goto label_4100f8;
        case 0x4100fcu: goto label_4100fc;
        case 0x410100u: goto label_410100;
        case 0x410104u: goto label_410104;
        case 0x410108u: goto label_410108;
        case 0x41010cu: goto label_41010c;
        case 0x410110u: goto label_410110;
        case 0x410114u: goto label_410114;
        case 0x410118u: goto label_410118;
        case 0x41011cu: goto label_41011c;
        case 0x410120u: goto label_410120;
        case 0x410124u: goto label_410124;
        case 0x410128u: goto label_410128;
        case 0x41012cu: goto label_41012c;
        case 0x410130u: goto label_410130;
        case 0x410134u: goto label_410134;
        case 0x410138u: goto label_410138;
        case 0x41013cu: goto label_41013c;
        case 0x410140u: goto label_410140;
        case 0x410144u: goto label_410144;
        case 0x410148u: goto label_410148;
        case 0x41014cu: goto label_41014c;
        case 0x410150u: goto label_410150;
        case 0x410154u: goto label_410154;
        case 0x410158u: goto label_410158;
        case 0x41015cu: goto label_41015c;
        case 0x410160u: goto label_410160;
        case 0x410164u: goto label_410164;
        case 0x410168u: goto label_410168;
        case 0x41016cu: goto label_41016c;
        case 0x410170u: goto label_410170;
        case 0x410174u: goto label_410174;
        case 0x410178u: goto label_410178;
        case 0x41017cu: goto label_41017c;
        case 0x410180u: goto label_410180;
        case 0x410184u: goto label_410184;
        case 0x410188u: goto label_410188;
        case 0x41018cu: goto label_41018c;
        case 0x410190u: goto label_410190;
        case 0x410194u: goto label_410194;
        case 0x410198u: goto label_410198;
        case 0x41019cu: goto label_41019c;
        case 0x4101a0u: goto label_4101a0;
        case 0x4101a4u: goto label_4101a4;
        case 0x4101a8u: goto label_4101a8;
        case 0x4101acu: goto label_4101ac;
        case 0x4101b0u: goto label_4101b0;
        case 0x4101b4u: goto label_4101b4;
        case 0x4101b8u: goto label_4101b8;
        case 0x4101bcu: goto label_4101bc;
        case 0x4101c0u: goto label_4101c0;
        case 0x4101c4u: goto label_4101c4;
        case 0x4101c8u: goto label_4101c8;
        case 0x4101ccu: goto label_4101cc;
        case 0x4101d0u: goto label_4101d0;
        case 0x4101d4u: goto label_4101d4;
        case 0x4101d8u: goto label_4101d8;
        case 0x4101dcu: goto label_4101dc;
        case 0x4101e0u: goto label_4101e0;
        case 0x4101e4u: goto label_4101e4;
        case 0x4101e8u: goto label_4101e8;
        case 0x4101ecu: goto label_4101ec;
        case 0x4101f0u: goto label_4101f0;
        case 0x4101f4u: goto label_4101f4;
        case 0x4101f8u: goto label_4101f8;
        case 0x4101fcu: goto label_4101fc;
        case 0x410200u: goto label_410200;
        case 0x410204u: goto label_410204;
        case 0x410208u: goto label_410208;
        case 0x41020cu: goto label_41020c;
        case 0x410210u: goto label_410210;
        case 0x410214u: goto label_410214;
        case 0x410218u: goto label_410218;
        case 0x41021cu: goto label_41021c;
        case 0x410220u: goto label_410220;
        case 0x410224u: goto label_410224;
        case 0x410228u: goto label_410228;
        case 0x41022cu: goto label_41022c;
        case 0x410230u: goto label_410230;
        case 0x410234u: goto label_410234;
        case 0x410238u: goto label_410238;
        case 0x41023cu: goto label_41023c;
        case 0x410240u: goto label_410240;
        case 0x410244u: goto label_410244;
        case 0x410248u: goto label_410248;
        case 0x41024cu: goto label_41024c;
        case 0x410250u: goto label_410250;
        case 0x410254u: goto label_410254;
        case 0x410258u: goto label_410258;
        case 0x41025cu: goto label_41025c;
        case 0x410260u: goto label_410260;
        case 0x410264u: goto label_410264;
        case 0x410268u: goto label_410268;
        case 0x41026cu: goto label_41026c;
        case 0x410270u: goto label_410270;
        case 0x410274u: goto label_410274;
        case 0x410278u: goto label_410278;
        case 0x41027cu: goto label_41027c;
        case 0x410280u: goto label_410280;
        case 0x410284u: goto label_410284;
        case 0x410288u: goto label_410288;
        case 0x41028cu: goto label_41028c;
        case 0x410290u: goto label_410290;
        case 0x410294u: goto label_410294;
        case 0x410298u: goto label_410298;
        case 0x41029cu: goto label_41029c;
        case 0x4102a0u: goto label_4102a0;
        case 0x4102a4u: goto label_4102a4;
        case 0x4102a8u: goto label_4102a8;
        case 0x4102acu: goto label_4102ac;
        case 0x4102b0u: goto label_4102b0;
        case 0x4102b4u: goto label_4102b4;
        case 0x4102b8u: goto label_4102b8;
        case 0x4102bcu: goto label_4102bc;
        case 0x4102c0u: goto label_4102c0;
        case 0x4102c4u: goto label_4102c4;
        case 0x4102c8u: goto label_4102c8;
        case 0x4102ccu: goto label_4102cc;
        case 0x4102d0u: goto label_4102d0;
        case 0x4102d4u: goto label_4102d4;
        case 0x4102d8u: goto label_4102d8;
        case 0x4102dcu: goto label_4102dc;
        case 0x4102e0u: goto label_4102e0;
        case 0x4102e4u: goto label_4102e4;
        case 0x4102e8u: goto label_4102e8;
        case 0x4102ecu: goto label_4102ec;
        case 0x4102f0u: goto label_4102f0;
        case 0x4102f4u: goto label_4102f4;
        case 0x4102f8u: goto label_4102f8;
        case 0x4102fcu: goto label_4102fc;
        case 0x410300u: goto label_410300;
        case 0x410304u: goto label_410304;
        case 0x410308u: goto label_410308;
        case 0x41030cu: goto label_41030c;
        case 0x410310u: goto label_410310;
        case 0x410314u: goto label_410314;
        case 0x410318u: goto label_410318;
        case 0x41031cu: goto label_41031c;
        case 0x410320u: goto label_410320;
        case 0x410324u: goto label_410324;
        case 0x410328u: goto label_410328;
        case 0x41032cu: goto label_41032c;
        case 0x410330u: goto label_410330;
        case 0x410334u: goto label_410334;
        case 0x410338u: goto label_410338;
        case 0x41033cu: goto label_41033c;
        case 0x410340u: goto label_410340;
        case 0x410344u: goto label_410344;
        case 0x410348u: goto label_410348;
        case 0x41034cu: goto label_41034c;
        case 0x410350u: goto label_410350;
        case 0x410354u: goto label_410354;
        case 0x410358u: goto label_410358;
        case 0x41035cu: goto label_41035c;
        case 0x410360u: goto label_410360;
        case 0x410364u: goto label_410364;
        case 0x410368u: goto label_410368;
        case 0x41036cu: goto label_41036c;
        case 0x410370u: goto label_410370;
        case 0x410374u: goto label_410374;
        case 0x410378u: goto label_410378;
        case 0x41037cu: goto label_41037c;
        case 0x410380u: goto label_410380;
        case 0x410384u: goto label_410384;
        case 0x410388u: goto label_410388;
        case 0x41038cu: goto label_41038c;
        case 0x410390u: goto label_410390;
        case 0x410394u: goto label_410394;
        case 0x410398u: goto label_410398;
        case 0x41039cu: goto label_41039c;
        case 0x4103a0u: goto label_4103a0;
        case 0x4103a4u: goto label_4103a4;
        case 0x4103a8u: goto label_4103a8;
        case 0x4103acu: goto label_4103ac;
        case 0x4103b0u: goto label_4103b0;
        case 0x4103b4u: goto label_4103b4;
        case 0x4103b8u: goto label_4103b8;
        case 0x4103bcu: goto label_4103bc;
        case 0x4103c0u: goto label_4103c0;
        case 0x4103c4u: goto label_4103c4;
        case 0x4103c8u: goto label_4103c8;
        case 0x4103ccu: goto label_4103cc;
        case 0x4103d0u: goto label_4103d0;
        case 0x4103d4u: goto label_4103d4;
        case 0x4103d8u: goto label_4103d8;
        case 0x4103dcu: goto label_4103dc;
        case 0x4103e0u: goto label_4103e0;
        case 0x4103e4u: goto label_4103e4;
        case 0x4103e8u: goto label_4103e8;
        case 0x4103ecu: goto label_4103ec;
        case 0x4103f0u: goto label_4103f0;
        case 0x4103f4u: goto label_4103f4;
        case 0x4103f8u: goto label_4103f8;
        case 0x4103fcu: goto label_4103fc;
        case 0x410400u: goto label_410400;
        case 0x410404u: goto label_410404;
        case 0x410408u: goto label_410408;
        case 0x41040cu: goto label_41040c;
        case 0x410410u: goto label_410410;
        case 0x410414u: goto label_410414;
        case 0x410418u: goto label_410418;
        case 0x41041cu: goto label_41041c;
        case 0x410420u: goto label_410420;
        case 0x410424u: goto label_410424;
        case 0x410428u: goto label_410428;
        case 0x41042cu: goto label_41042c;
        case 0x410430u: goto label_410430;
        case 0x410434u: goto label_410434;
        case 0x410438u: goto label_410438;
        case 0x41043cu: goto label_41043c;
        case 0x410440u: goto label_410440;
        case 0x410444u: goto label_410444;
        case 0x410448u: goto label_410448;
        case 0x41044cu: goto label_41044c;
        case 0x410450u: goto label_410450;
        case 0x410454u: goto label_410454;
        case 0x410458u: goto label_410458;
        case 0x41045cu: goto label_41045c;
        case 0x410460u: goto label_410460;
        case 0x410464u: goto label_410464;
        case 0x410468u: goto label_410468;
        case 0x41046cu: goto label_41046c;
        case 0x410470u: goto label_410470;
        case 0x410474u: goto label_410474;
        case 0x410478u: goto label_410478;
        case 0x41047cu: goto label_41047c;
        case 0x410480u: goto label_410480;
        case 0x410484u: goto label_410484;
        case 0x410488u: goto label_410488;
        case 0x41048cu: goto label_41048c;
        case 0x410490u: goto label_410490;
        case 0x410494u: goto label_410494;
        case 0x410498u: goto label_410498;
        case 0x41049cu: goto label_41049c;
        case 0x4104a0u: goto label_4104a0;
        case 0x4104a4u: goto label_4104a4;
        case 0x4104a8u: goto label_4104a8;
        case 0x4104acu: goto label_4104ac;
        case 0x4104b0u: goto label_4104b0;
        case 0x4104b4u: goto label_4104b4;
        case 0x4104b8u: goto label_4104b8;
        case 0x4104bcu: goto label_4104bc;
        case 0x4104c0u: goto label_4104c0;
        case 0x4104c4u: goto label_4104c4;
        case 0x4104c8u: goto label_4104c8;
        case 0x4104ccu: goto label_4104cc;
        case 0x4104d0u: goto label_4104d0;
        case 0x4104d4u: goto label_4104d4;
        case 0x4104d8u: goto label_4104d8;
        case 0x4104dcu: goto label_4104dc;
        case 0x4104e0u: goto label_4104e0;
        case 0x4104e4u: goto label_4104e4;
        case 0x4104e8u: goto label_4104e8;
        case 0x4104ecu: goto label_4104ec;
        case 0x4104f0u: goto label_4104f0;
        case 0x4104f4u: goto label_4104f4;
        case 0x4104f8u: goto label_4104f8;
        case 0x4104fcu: goto label_4104fc;
        case 0x410500u: goto label_410500;
        case 0x410504u: goto label_410504;
        case 0x410508u: goto label_410508;
        case 0x41050cu: goto label_41050c;
        case 0x410510u: goto label_410510;
        case 0x410514u: goto label_410514;
        case 0x410518u: goto label_410518;
        case 0x41051cu: goto label_41051c;
        case 0x410520u: goto label_410520;
        case 0x410524u: goto label_410524;
        case 0x410528u: goto label_410528;
        case 0x41052cu: goto label_41052c;
        case 0x410530u: goto label_410530;
        case 0x410534u: goto label_410534;
        case 0x410538u: goto label_410538;
        case 0x41053cu: goto label_41053c;
        case 0x410540u: goto label_410540;
        case 0x410544u: goto label_410544;
        case 0x410548u: goto label_410548;
        case 0x41054cu: goto label_41054c;
        case 0x410550u: goto label_410550;
        case 0x410554u: goto label_410554;
        case 0x410558u: goto label_410558;
        case 0x41055cu: goto label_41055c;
        case 0x410560u: goto label_410560;
        case 0x410564u: goto label_410564;
        case 0x410568u: goto label_410568;
        case 0x41056cu: goto label_41056c;
        case 0x410570u: goto label_410570;
        case 0x410574u: goto label_410574;
        case 0x410578u: goto label_410578;
        case 0x41057cu: goto label_41057c;
        case 0x410580u: goto label_410580;
        case 0x410584u: goto label_410584;
        case 0x410588u: goto label_410588;
        case 0x41058cu: goto label_41058c;
        case 0x410590u: goto label_410590;
        case 0x410594u: goto label_410594;
        case 0x410598u: goto label_410598;
        case 0x41059cu: goto label_41059c;
        case 0x4105a0u: goto label_4105a0;
        case 0x4105a4u: goto label_4105a4;
        case 0x4105a8u: goto label_4105a8;
        case 0x4105acu: goto label_4105ac;
        case 0x4105b0u: goto label_4105b0;
        case 0x4105b4u: goto label_4105b4;
        case 0x4105b8u: goto label_4105b8;
        case 0x4105bcu: goto label_4105bc;
        case 0x4105c0u: goto label_4105c0;
        case 0x4105c4u: goto label_4105c4;
        case 0x4105c8u: goto label_4105c8;
        case 0x4105ccu: goto label_4105cc;
        case 0x4105d0u: goto label_4105d0;
        case 0x4105d4u: goto label_4105d4;
        case 0x4105d8u: goto label_4105d8;
        case 0x4105dcu: goto label_4105dc;
        default: break;
    }

    ctx->pc = 0x40fcb0u;

label_40fcb0:
    // 0x40fcb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x40fcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_40fcb4:
    // 0x40fcb4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x40fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_40fcb8:
    // 0x40fcb8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x40fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_40fcbc:
    // 0x40fcbc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x40fcbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40fcc0:
    // 0x40fcc0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x40fcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_40fcc4:
    // 0x40fcc4: 0x3c034411  lui         $v1, 0x4411
    ctx->pc = 0x40fcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17425 << 16));
label_40fcc8:
    // 0x40fcc8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x40fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_40fccc:
    // 0x40fccc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x40fcccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40fcd0:
    // 0x40fcd0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x40fcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_40fcd4:
    // 0x40fcd4: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x40fcd4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
label_40fcd8:
    // 0x40fcd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x40fcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_40fcdc:
    // 0x40fcdc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x40fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_40fce0:
    // 0x40fce0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40fce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_40fce4:
    // 0x40fce4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x40fce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_40fce8:
    // 0x40fce8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x40fce8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_40fcec:
    // 0x40fcec: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x40fcecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
label_40fcf0:
    // 0x40fcf0: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x40fcf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_40fcf4:
    // 0x40fcf4: 0xc6900078  lwc1        $f16, 0x78($s4)
    ctx->pc = 0x40fcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_40fcf8:
    // 0x40fcf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40fcfc:
    // 0x40fcfc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40fcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40fd00:
    // 0x40fd00: 0x2673bec0  addiu       $s3, $s3, -0x4140
    ctx->pc = 0x40fd00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950592));
label_40fd04:
    // 0x40fd04: 0x3c0242ae  lui         $v0, 0x42AE
    ctx->pc = 0x40fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17070 << 16));
label_40fd08:
    // 0x40fd08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x40fd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40fd0c:
    // 0x40fd0c: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x40fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
label_40fd10:
    // 0x40fd10: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x40fd10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_40fd14:
    // 0x40fd14: 0xc129cb4  jal         func_4A72D0
label_40fd18:
    if (ctx->pc == 0x40FD18u) {
        ctx->pc = 0x40FD18u;
            // 0x40fd18: 0x2610beb0  addiu       $s0, $s0, -0x4150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950576));
        ctx->pc = 0x40FD1Cu;
        goto label_40fd1c;
    }
    ctx->pc = 0x40FD14u;
    SET_GPR_U32(ctx, 31, 0x40FD1Cu);
    ctx->pc = 0x40FD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FD14u;
            // 0x40fd18: 0x2610beb0  addiu       $s0, $s0, -0x4150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A72D0u;
    if (runtime->hasFunction(0x4A72D0u)) {
        auto targetFn = runtime->lookupFunction(0x4A72D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FD1Cu; }
        if (ctx->pc != 0x40FD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A72D0_0x4a72d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FD1Cu; }
        if (ctx->pc != 0x40FD1Cu) { return; }
    }
    ctx->pc = 0x40FD1Cu;
label_40fd1c:
    // 0x40fd1c: 0xc6810078  lwc1        $f1, 0x78($s4)
    ctx->pc = 0x40fd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40fd20:
    // 0x40fd20: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40fd24:
    // 0x40fd24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40fd24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fd28:
    // 0x40fd28: 0x0  nop
    ctx->pc = 0x40fd28u;
    // NOP
label_40fd2c:
    // 0x40fd2c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x40fd2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40fd30:
    // 0x40fd30: 0x450200bd  bc1fl       . + 4 + (0xBD << 2)
label_40fd34:
    if (ctx->pc == 0x40FD34u) {
        ctx->pc = 0x40FD34u;
            // 0x40fd34: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x40FD38u;
        goto label_40fd38;
    }
    ctx->pc = 0x40FD30u;
    {
        const bool branch_taken_0x40fd30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40fd30) {
            ctx->pc = 0x40FD34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40FD30u;
            // 0x40fd34: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x410028u;
            goto label_410028;
        }
    }
    ctx->pc = 0x40FD38u;
label_40fd38:
    // 0x40fd38: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x40fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_40fd3c:
    // 0x40fd3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x40fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40fd40:
    // 0x40fd40: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_40fd44:
    if (ctx->pc == 0x40FD44u) {
        ctx->pc = 0x40FD48u;
        goto label_40fd48;
    }
    ctx->pc = 0x40FD40u;
    {
        const bool branch_taken_0x40fd40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x40fd40) {
            ctx->pc = 0x40FD58u;
            goto label_40fd58;
        }
    }
    ctx->pc = 0x40FD48u;
label_40fd48:
    // 0x40fd48: 0xc103d30  jal         func_40F4C0
label_40fd4c:
    if (ctx->pc == 0x40FD4Cu) {
        ctx->pc = 0x40FD4Cu;
            // 0x40fd4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40FD50u;
        goto label_40fd50;
    }
    ctx->pc = 0x40FD48u;
    SET_GPR_U32(ctx, 31, 0x40FD50u);
    ctx->pc = 0x40FD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FD48u;
            // 0x40fd4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40F4C0u;
    if (runtime->hasFunction(0x40F4C0u)) {
        auto targetFn = runtime->lookupFunction(0x40F4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FD50u; }
        if (ctx->pc != 0x40FD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040F4C0_0x40f4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FD50u; }
        if (ctx->pc != 0x40FD50u) { return; }
    }
    ctx->pc = 0x40FD50u;
label_40fd50:
    // 0x40fd50: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_40fd54:
    if (ctx->pc == 0x40FD54u) {
        ctx->pc = 0x40FD58u;
        goto label_40fd58;
    }
    ctx->pc = 0x40FD50u;
    {
        const bool branch_taken_0x40fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40fd50) {
            ctx->pc = 0x410024u;
            goto label_410024;
        }
    }
    ctx->pc = 0x40FD58u;
label_40fd58:
    // 0x40fd58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40fd5c:
    // 0x40fd5c: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x40fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_40fd60:
    // 0x40fd60: 0xc0506ac  jal         func_141AB0
label_40fd64:
    if (ctx->pc == 0x40FD64u) {
        ctx->pc = 0x40FD64u;
            // 0x40fd64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x40FD68u;
        goto label_40fd68;
    }
    ctx->pc = 0x40FD60u;
    SET_GPR_U32(ctx, 31, 0x40FD68u);
    ctx->pc = 0x40FD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FD60u;
            // 0x40fd64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FD68u; }
        if (ctx->pc != 0x40FD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FD68u; }
        if (ctx->pc != 0x40FD68u) { return; }
    }
    ctx->pc = 0x40FD68u;
label_40fd68:
    // 0x40fd68: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x40fd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40fd6c:
    // 0x40fd6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40fd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40fd70:
    // 0x40fd70: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x40fd70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_40fd74:
    // 0x40fd74: 0x320f809  jalr        $t9
label_40fd78:
    if (ctx->pc == 0x40FD78u) {
        ctx->pc = 0x40FD78u;
            // 0x40fd78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x40FD7Cu;
        goto label_40fd7c;
    }
    ctx->pc = 0x40FD74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40FD7Cu);
        ctx->pc = 0x40FD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40FD74u;
            // 0x40fd78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40FD7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40FD7Cu; }
            if (ctx->pc != 0x40FD7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40FD7Cu;
label_40fd7c:
    // 0x40fd7c: 0xc6800090  lwc1        $f0, 0x90($s4)
    ctx->pc = 0x40fd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40fd80:
    // 0x40fd80: 0x3c08434d  lui         $t0, 0x434D
    ctx->pc = 0x40fd80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17229 << 16));
label_40fd84:
    // 0x40fd84: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x40fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_40fd88:
    // 0x40fd88: 0x3c094218  lui         $t1, 0x4218
    ctx->pc = 0x40fd88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16920 << 16));
label_40fd8c:
    // 0x40fd8c: 0x44829800  mtc1        $v0, $f19
    ctx->pc = 0x40fd8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_40fd90:
    // 0x40fd90: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x40fd90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_40fd94:
    // 0x40fd94: 0x46009d00  add.s       $f20, $f19, $f0
    ctx->pc = 0x40fd94u;
    ctx->f[20] = FPU_ADD_S(ctx->f[19], ctx->f[0]);
label_40fd98:
    // 0x40fd98: 0x3c024390  lui         $v0, 0x4390
    ctx->pc = 0x40fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17296 << 16));
label_40fd9c:
    // 0x40fd9c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x40fd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_40fda0:
    // 0x40fda0: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x40fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_40fda4:
    // 0x40fda4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x40fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_40fda8:
    // 0x40fda8: 0x860a0002  lh          $t2, 0x2($s0)
    ctx->pc = 0x40fda8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_40fdac:
    // 0x40fdac: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x40fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_40fdb0:
    // 0x40fdb0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40fdb4:
    // 0x40fdb4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40fdb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fdb8:
    // 0x40fdb8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40fdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40fdbc:
    // 0x40fdbc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x40fdbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40fdc0:
    // 0x40fdc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40fdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40fdc4:
    // 0x40fdc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40fdc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40fdc8:
    // 0x40fdc8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x40fdc8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fdcc:
    // 0x40fdcc: 0x0  nop
    ctx->pc = 0x40fdccu;
    // NOP
label_40fdd0:
    // 0x40fdd0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x40fdd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40fdd4:
    // 0x40fdd4: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x40fdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40fdd8:
    // 0x40fdd8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40fdd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_40fddc:
    // 0x40fddc: 0x44899000  mtc1        $t1, $f18
    ctx->pc = 0x40fddcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_40fde0:
    // 0x40fde0: 0x44887000  mtc1        $t0, $f14
    ctx->pc = 0x40fde0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_40fde4:
    // 0x40fde4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40fde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40fde8:
    // 0x40fde8: 0xc0bc228  jal         func_2F08A0
label_40fdec:
    if (ctx->pc == 0x40FDECu) {
        ctx->pc = 0x40FDECu;
            // 0x40fdec: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x40FDF0u;
        goto label_40fdf0;
    }
    ctx->pc = 0x40FDE8u;
    SET_GPR_U32(ctx, 31, 0x40FDF0u);
    ctx->pc = 0x40FDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FDE8u;
            // 0x40fdec: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FDF0u; }
        if (ctx->pc != 0x40FDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FDF0u; }
        if (ctx->pc != 0x40FDF0u) { return; }
    }
    ctx->pc = 0x40FDF0u;
label_40fdf0:
    // 0x40fdf0: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x40fdf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_40fdf4:
    // 0x40fdf4: 0x3c08434d  lui         $t0, 0x434D
    ctx->pc = 0x40fdf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17229 << 16));
label_40fdf8:
    // 0x40fdf8: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x40fdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40fdfc:
    // 0x40fdfc: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x40fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
label_40fe00:
    // 0x40fe00: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x40fe00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_40fe04:
    // 0x40fe04: 0x3c0942be  lui         $t1, 0x42BE
    ctx->pc = 0x40fe04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17086 << 16));
label_40fe08:
    // 0x40fe08: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40fe08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fe0c:
    // 0x40fe0c: 0x3c024390  lui         $v0, 0x4390
    ctx->pc = 0x40fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17296 << 16));
label_40fe10:
    // 0x40fe10: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x40fe10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40fe14:
    // 0x40fe14: 0x860a0002  lh          $t2, 0x2($s0)
    ctx->pc = 0x40fe14u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_40fe18:
    // 0x40fe18: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x40fe18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_40fe1c:
    // 0x40fe1c: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x40fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_40fe20:
    // 0x40fe20: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x40fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_40fe24:
    // 0x40fe24: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x40fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_40fe28:
    // 0x40fe28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40fe2c:
    // 0x40fe2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40fe2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40fe30:
    // 0x40fe30: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40fe30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40fe34:
    // 0x40fe34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40fe34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40fe38:
    // 0x40fe38: 0x4601a340  add.s       $f13, $f20, $f1
    ctx->pc = 0x40fe38u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_40fe3c:
    // 0x40fe3c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x40fe3cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fe40:
    // 0x40fe40: 0x0  nop
    ctx->pc = 0x40fe40u;
    // NOP
label_40fe44:
    // 0x40fe44: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x40fe44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40fe48:
    // 0x40fe48: 0x44899800  mtc1        $t1, $f19
    ctx->pc = 0x40fe48u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_40fe4c:
    // 0x40fe4c: 0x44887000  mtc1        $t0, $f14
    ctx->pc = 0x40fe4cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_40fe50:
    // 0x40fe50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40fe50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40fe54:
    // 0x40fe54: 0xc0bc228  jal         func_2F08A0
label_40fe58:
    if (ctx->pc == 0x40FE58u) {
        ctx->pc = 0x40FE58u;
            // 0x40fe58: 0x46016bc0  add.s       $f15, $f13, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
        ctx->pc = 0x40FE5Cu;
        goto label_40fe5c;
    }
    ctx->pc = 0x40FE54u;
    SET_GPR_U32(ctx, 31, 0x40FE5Cu);
    ctx->pc = 0x40FE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FE54u;
            // 0x40fe58: 0x46016bc0  add.s       $f15, $f13, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FE5Cu; }
        if (ctx->pc != 0x40FE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FE5Cu; }
        if (ctx->pc != 0x40FE5Cu) { return; }
    }
    ctx->pc = 0x40FE5Cu;
label_40fe5c:
    // 0x40fe5c: 0xc6800098  lwc1        $f0, 0x98($s4)
    ctx->pc = 0x40fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40fe60:
    // 0x40fe60: 0x3c03434d  lui         $v1, 0x434D
    ctx->pc = 0x40fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17229 << 16));
label_40fe64:
    // 0x40fe64: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x40fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_40fe68:
    // 0x40fe68: 0x3c084218  lui         $t0, 0x4218
    ctx->pc = 0x40fe68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16920 << 16));
label_40fe6c:
    // 0x40fe6c: 0x44829800  mtc1        $v0, $f19
    ctx->pc = 0x40fe6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_40fe70:
    // 0x40fe70: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x40fe70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_40fe74:
    // 0x40fe74: 0x46009d00  add.s       $f20, $f19, $f0
    ctx->pc = 0x40fe74u;
    ctx->f[20] = FPU_ADD_S(ctx->f[19], ctx->f[0]);
label_40fe78:
    // 0x40fe78: 0x3c024390  lui         $v0, 0x4390
    ctx->pc = 0x40fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17296 << 16));
label_40fe7c:
    // 0x40fe7c: 0x86090002  lh          $t1, 0x2($s0)
    ctx->pc = 0x40fe7cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_40fe80:
    // 0x40fe80: 0x26720020  addiu       $s2, $s3, 0x20
    ctx->pc = 0x40fe80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_40fe84:
    // 0x40fe84: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x40fe84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_40fe88:
    // 0x40fe88: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x40fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_40fe8c:
    // 0x40fe8c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x40fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_40fe90:
    // 0x40fe90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40fe94:
    // 0x40fe94: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40fe94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fe98:
    // 0x40fe98: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40fe98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40fe9c:
    // 0x40fe9c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x40fe9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40fea0:
    // 0x40fea0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40fea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40fea4:
    // 0x40fea4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40fea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40fea8:
    // 0x40fea8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x40fea8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40feac:
    // 0x40feac: 0x0  nop
    ctx->pc = 0x40feacu;
    // NOP
label_40feb0:
    // 0x40feb0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x40feb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40feb4:
    // 0x40feb4: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x40feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40feb8:
    // 0x40feb8: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x40feb8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40febc:
    // 0x40febc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40febcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_40fec0:
    // 0x40fec0: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x40fec0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_40fec4:
    // 0x40fec4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x40fec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_40fec8:
    // 0x40fec8: 0xc0bc228  jal         func_2F08A0
label_40fecc:
    if (ctx->pc == 0x40FECCu) {
        ctx->pc = 0x40FECCu;
            // 0x40fecc: 0x46006486  mov.s       $f18, $f12 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x40FED0u;
        goto label_40fed0;
    }
    ctx->pc = 0x40FEC8u;
    SET_GPR_U32(ctx, 31, 0x40FED0u);
    ctx->pc = 0x40FECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FEC8u;
            // 0x40fecc: 0x46006486  mov.s       $f18, $f12 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FED0u; }
        if (ctx->pc != 0x40FED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FED0u; }
        if (ctx->pc != 0x40FED0u) { return; }
    }
    ctx->pc = 0x40FED0u;
label_40fed0:
    // 0x40fed0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x40fed0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_40fed4:
    // 0x40fed4: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x40fed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40fed8:
    // 0x40fed8: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x40fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
label_40fedc:
    // 0x40fedc: 0x3c0842be  lui         $t0, 0x42BE
    ctx->pc = 0x40fedcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17086 << 16));
label_40fee0:
    // 0x40fee0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40fee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40fee4:
    // 0x40fee4: 0x86090002  lh          $t1, 0x2($s0)
    ctx->pc = 0x40fee4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_40fee8:
    // 0x40fee8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40fee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40feec:
    // 0x40feec: 0x3c024390  lui         $v0, 0x4390
    ctx->pc = 0x40feecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17296 << 16));
label_40fef0:
    // 0x40fef0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x40fef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40fef4:
    // 0x40fef4: 0x3c03434d  lui         $v1, 0x434D
    ctx->pc = 0x40fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17229 << 16));
label_40fef8:
    // 0x40fef8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x40fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_40fefc:
    // 0x40fefc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x40fefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_40ff00:
    // 0x40ff00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40ff04:
    // 0x40ff04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40ff04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40ff08:
    // 0x40ff08: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x40ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_40ff0c:
    // 0x40ff0c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40ff0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40ff10:
    // 0x40ff10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40ff10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ff14:
    // 0x40ff14: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x40ff14u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_40ff18:
    // 0x40ff18: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x40ff18u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ff1c:
    // 0x40ff1c: 0x0  nop
    ctx->pc = 0x40ff1cu;
    // NOP
label_40ff20:
    // 0x40ff20: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x40ff20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40ff24:
    // 0x40ff24: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x40ff24u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_40ff28:
    // 0x40ff28: 0x46006486  mov.s       $f18, $f12
    ctx->pc = 0x40ff28u;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
label_40ff2c:
    // 0x40ff2c: 0x44889800  mtc1        $t0, $f19
    ctx->pc = 0x40ff2cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_40ff30:
    // 0x40ff30: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x40ff30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_40ff34:
    // 0x40ff34: 0xc0bc228  jal         func_2F08A0
label_40ff38:
    if (ctx->pc == 0x40FF38u) {
        ctx->pc = 0x40FF38u;
            // 0x40ff38: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x40FF3Cu;
        goto label_40ff3c;
    }
    ctx->pc = 0x40FF34u;
    SET_GPR_U32(ctx, 31, 0x40FF3Cu);
    ctx->pc = 0x40FF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FF34u;
            // 0x40ff38: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FF3Cu; }
        if (ctx->pc != 0x40FF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FF3Cu; }
        if (ctx->pc != 0x40FF3Cu) { return; }
    }
    ctx->pc = 0x40FF3Cu;
label_40ff3c:
    // 0x40ff3c: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x40ff3cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_40ff40:
    // 0x40ff40: 0x3c03434d  lui         $v1, 0x434D
    ctx->pc = 0x40ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17229 << 16));
label_40ff44:
    // 0x40ff44: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x40ff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40ff48:
    // 0x40ff48: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x40ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
label_40ff4c:
    // 0x40ff4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40ff4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40ff50:
    // 0x40ff50: 0x3c0842be  lui         $t0, 0x42BE
    ctx->pc = 0x40ff50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17086 << 16));
label_40ff54:
    // 0x40ff54: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x40ff54u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ff58:
    // 0x40ff58: 0x3c024390  lui         $v0, 0x4390
    ctx->pc = 0x40ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17296 << 16));
label_40ff5c:
    // 0x40ff5c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x40ff5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40ff60:
    // 0x40ff60: 0x86090002  lh          $t1, 0x2($s0)
    ctx->pc = 0x40ff60u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_40ff64:
    // 0x40ff64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x40ff64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_40ff68:
    // 0x40ff68: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x40ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_40ff6c:
    // 0x40ff6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40ff6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40ff70:
    // 0x40ff70: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x40ff70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_40ff74:
    // 0x40ff74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40ff78:
    // 0x40ff78: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40ff78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40ff7c:
    // 0x40ff7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40ff7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ff80:
    // 0x40ff80: 0x4601a340  add.s       $f13, $f20, $f1
    ctx->pc = 0x40ff80u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_40ff84:
    // 0x40ff84: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x40ff84u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ff88:
    // 0x40ff88: 0x0  nop
    ctx->pc = 0x40ff88u;
    // NOP
label_40ff8c:
    // 0x40ff8c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x40ff8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40ff90:
    // 0x40ff90: 0x46016bc0  add.s       $f15, $f13, $f1
    ctx->pc = 0x40ff90u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_40ff94:
    // 0x40ff94: 0x44889800  mtc1        $t0, $f19
    ctx->pc = 0x40ff94u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_40ff98:
    // 0x40ff98: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x40ff98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_40ff9c:
    // 0x40ff9c: 0xc0bc228  jal         func_2F08A0
label_40ffa0:
    if (ctx->pc == 0x40FFA0u) {
        ctx->pc = 0x40FFA0u;
            // 0x40ffa0: 0x46006486  mov.s       $f18, $f12 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x40FFA4u;
        goto label_40ffa4;
    }
    ctx->pc = 0x40FF9Cu;
    SET_GPR_U32(ctx, 31, 0x40FFA4u);
    ctx->pc = 0x40FFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FF9Cu;
            // 0x40ffa0: 0x46006486  mov.s       $f18, $f12 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FFA4u; }
        if (ctx->pc != 0x40FFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FFA4u; }
        if (ctx->pc != 0x40FFA4u) { return; }
    }
    ctx->pc = 0x40FFA4u;
label_40ffa4:
    // 0x40ffa4: 0xc6810094  lwc1        $f1, 0x94($s4)
    ctx->pc = 0x40ffa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40ffa8:
    // 0x40ffa8: 0x3c03434d  lui         $v1, 0x434D
    ctx->pc = 0x40ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17229 << 16));
label_40ffac:
    // 0x40ffac: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x40ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_40ffb0:
    // 0x40ffb0: 0x3c084218  lui         $t0, 0x4218
    ctx->pc = 0x40ffb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16920 << 16));
label_40ffb4:
    // 0x40ffb4: 0x44829800  mtc1        $v0, $f19
    ctx->pc = 0x40ffb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_40ffb8:
    // 0x40ffb8: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x40ffb8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_40ffbc:
    // 0x40ffbc: 0x46019b40  add.s       $f13, $f19, $f1
    ctx->pc = 0x40ffbcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[19], ctx->f[1]);
label_40ffc0:
    // 0x40ffc0: 0x3c024390  lui         $v0, 0x4390
    ctx->pc = 0x40ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17296 << 16));
label_40ffc4:
    // 0x40ffc4: 0x86090002  lh          $t1, 0x2($s0)
    ctx->pc = 0x40ffc4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_40ffc8:
    // 0x40ffc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x40ffc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_40ffcc:
    // 0x40ffcc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x40ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_40ffd0:
    // 0x40ffd0: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x40ffd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_40ffd4:
    // 0x40ffd4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40ffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40ffd8:
    // 0x40ffd8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x40ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_40ffdc:
    // 0x40ffdc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x40ffdcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40ffe0:
    // 0x40ffe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40ffe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ffe4:
    // 0x40ffe4: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x40ffe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40ffe8:
    // 0x40ffe8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40ffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40ffec:
    // 0x40ffec: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x40ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40fff0:
    // 0x40fff0: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x40fff0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40fff4:
    // 0x40fff4: 0x0  nop
    ctx->pc = 0x40fff4u;
    // NOP
label_40fff8:
    // 0x40fff8: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x40fff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40fffc:
    // 0x40fffc: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x40fffcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410000:
    // 0x410000: 0x0  nop
    ctx->pc = 0x410000u;
    // NOP
label_410004:
    // 0x410004: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x410004u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_410008:
    // 0x410008: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x410008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_41000c:
    // 0x41000c: 0xc0bc228  jal         func_2F08A0
label_410010:
    if (ctx->pc == 0x410010u) {
        ctx->pc = 0x410010u;
            // 0x410010: 0x46006486  mov.s       $f18, $f12 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x410014u;
        goto label_410014;
    }
    ctx->pc = 0x41000Cu;
    SET_GPR_U32(ctx, 31, 0x410014u);
    ctx->pc = 0x410010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41000Cu;
            // 0x410010: 0x46006486  mov.s       $f18, $f12 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410014u; }
        if (ctx->pc != 0x410014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410014u; }
        if (ctx->pc != 0x410014u) { return; }
    }
    ctx->pc = 0x410014u;
label_410014:
    // 0x410014: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x410014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_410018:
    // 0x410018: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x410018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_41001c:
    // 0x41001c: 0x320f809  jalr        $t9
label_410020:
    if (ctx->pc == 0x410020u) {
        ctx->pc = 0x410020u;
            // 0x410020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410024u;
        goto label_410024;
    }
    ctx->pc = 0x41001Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x410024u);
        ctx->pc = 0x410020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41001Cu;
            // 0x410020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x410024u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x410024u; }
            if (ctx->pc != 0x410024u) { return; }
        }
        }
    }
    ctx->pc = 0x410024u;
label_410024:
    // 0x410024: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x410024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_410028:
    // 0x410028: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x410028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_41002c:
    // 0x41002c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x41002cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_410030:
    // 0x410030: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x410030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_410034:
    // 0x410034: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x410034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_410038:
    // 0x410038: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x410038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41003c:
    // 0x41003c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41003cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_410040:
    // 0x410040: 0x3e00008  jr          $ra
label_410044:
    if (ctx->pc == 0x410044u) {
        ctx->pc = 0x410044u;
            // 0x410044: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x410048u;
        goto label_410048;
    }
    ctx->pc = 0x410040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410040u;
            // 0x410044: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x410048u;
label_410048:
    // 0x410048: 0x0  nop
    ctx->pc = 0x410048u;
    // NOP
label_41004c:
    // 0x41004c: 0x0  nop
    ctx->pc = 0x41004cu;
    // NOP
label_410050:
    // 0x410050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x410050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_410054:
    // 0x410054: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x410054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_410058:
    // 0x410058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x410058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41005c:
    // 0x41005c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41005cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_410060:
    // 0x410060: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x410060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_410064:
    // 0x410064: 0x9063007d  lbu         $v1, 0x7D($v1)
    ctx->pc = 0x410064u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
label_410068:
    // 0x410068: 0x14600157  bnez        $v1, . + 4 + (0x157 << 2)
label_41006c:
    if (ctx->pc == 0x41006Cu) {
        ctx->pc = 0x41006Cu;
            // 0x41006c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410070u;
        goto label_410070;
    }
    ctx->pc = 0x410068u;
    {
        const bool branch_taken_0x410068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41006Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410068u;
            // 0x41006c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410068) {
            ctx->pc = 0x4105C8u;
            goto label_4105c8;
        }
    }
    ctx->pc = 0x410070u;
label_410070:
    // 0x410070: 0x92030071  lbu         $v1, 0x71($s0)
    ctx->pc = 0x410070u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
label_410074:
    // 0x410074: 0x50600155  beql        $v1, $zero, . + 4 + (0x155 << 2)
label_410078:
    if (ctx->pc == 0x410078u) {
        ctx->pc = 0x410078u;
            // 0x410078: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x41007Cu;
        goto label_41007c;
    }
    ctx->pc = 0x410074u;
    {
        const bool branch_taken_0x410074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x410074) {
            ctx->pc = 0x410078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410074u;
            // 0x410078: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4105CCu;
            goto label_4105cc;
        }
    }
    ctx->pc = 0x41007Cu;
label_41007c:
    // 0x41007c: 0xc103f2c  jal         func_40FCB0
label_410080:
    if (ctx->pc == 0x410080u) {
        ctx->pc = 0x410084u;
        goto label_410084;
    }
    ctx->pc = 0x41007Cu;
    SET_GPR_U32(ctx, 31, 0x410084u);
    ctx->pc = 0x40FCB0u;
    goto label_40fcb0;
    ctx->pc = 0x410084u;
label_410084:
    // 0x410084: 0xc103e4c  jal         func_40F930
label_410088:
    if (ctx->pc == 0x410088u) {
        ctx->pc = 0x410088u;
            // 0x410088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41008Cu;
        goto label_41008c;
    }
    ctx->pc = 0x410084u;
    SET_GPR_U32(ctx, 31, 0x41008Cu);
    ctx->pc = 0x410088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410084u;
            // 0x410088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40F930u;
    if (runtime->hasFunction(0x40F930u)) {
        auto targetFn = runtime->lookupFunction(0x40F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41008Cu; }
        if (ctx->pc != 0x41008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040F930_0x40f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41008Cu; }
        if (ctx->pc != 0x41008Cu) { return; }
    }
    ctx->pc = 0x41008Cu;
label_41008c:
    // 0x41008c: 0xc60e0080  lwc1        $f14, 0x80($s0)
    ctx->pc = 0x41008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_410090:
    // 0x410090: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x410090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_410094:
    // 0x410094: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x410094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_410098:
    // 0x410098: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x410098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_41009c:
    // 0x41009c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x41009cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4100a0:
    // 0x4100a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4100a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4100a4:
    // 0x4100a4: 0xc129c64  jal         func_4A7190
label_4100a8:
    if (ctx->pc == 0x4100A8u) {
        ctx->pc = 0x4100A8u;
            // 0x4100a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4100ACu;
        goto label_4100ac;
    }
    ctx->pc = 0x4100A4u;
    SET_GPR_U32(ctx, 31, 0x4100ACu);
    ctx->pc = 0x4100A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4100A4u;
            // 0x4100a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A7190u;
    if (runtime->hasFunction(0x4A7190u)) {
        auto targetFn = runtime->lookupFunction(0x4A7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4100ACu; }
        if (ctx->pc != 0x4100ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A7190_0x4a7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4100ACu; }
        if (ctx->pc != 0x4100ACu) { return; }
    }
    ctx->pc = 0x4100ACu;
label_4100ac:
    // 0x4100ac: 0xc60e007c  lwc1        $f14, 0x7C($s0)
    ctx->pc = 0x4100acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4100b0:
    // 0x4100b0: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x4100b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_4100b4:
    // 0x4100b4: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x4100b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_4100b8:
    // 0x4100b8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4100b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4100bc:
    // 0x4100bc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4100bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4100c0:
    // 0x4100c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4100c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4100c4:
    // 0x4100c4: 0xc129c64  jal         func_4A7190
label_4100c8:
    if (ctx->pc == 0x4100C8u) {
        ctx->pc = 0x4100C8u;
            // 0x4100c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4100CCu;
        goto label_4100cc;
    }
    ctx->pc = 0x4100C4u;
    SET_GPR_U32(ctx, 31, 0x4100CCu);
    ctx->pc = 0x4100C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4100C4u;
            // 0x4100c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A7190u;
    if (runtime->hasFunction(0x4A7190u)) {
        auto targetFn = runtime->lookupFunction(0x4A7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4100CCu; }
        if (ctx->pc != 0x4100CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A7190_0x4a7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4100CCu; }
        if (ctx->pc != 0x4100CCu) { return; }
    }
    ctx->pc = 0x4100CCu;
label_4100cc:
    // 0x4100cc: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x4100ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4100d0:
    // 0x4100d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4100d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4100d4:
    // 0x4100d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4100d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4100d8:
    // 0x4100d8: 0x0  nop
    ctx->pc = 0x4100d8u;
    // NOP
label_4100dc:
    // 0x4100dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4100dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4100e0:
    // 0x4100e0: 0x45020076  bc1fl       . + 4 + (0x76 << 2)
label_4100e4:
    if (ctx->pc == 0x4100E4u) {
        ctx->pc = 0x4100E4u;
            // 0x4100e4: 0xc601007c  lwc1        $f1, 0x7C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4100E8u;
        goto label_4100e8;
    }
    ctx->pc = 0x4100E0u;
    {
        const bool branch_taken_0x4100e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4100e0) {
            ctx->pc = 0x4100E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4100E0u;
            // 0x4100e4: 0xc601007c  lwc1        $f1, 0x7C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4102BCu;
            goto label_4102bc;
        }
    }
    ctx->pc = 0x4100E8u;
label_4100e8:
    // 0x4100e8: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x4100e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_4100ec:
    // 0x4100ec: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x4100ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_4100f0:
    // 0x4100f0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4100f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4100f4:
    // 0x4100f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4100f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4100f8:
    // 0x4100f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4100f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4100fc:
    // 0x4100fc: 0xc129bd8  jal         func_4A6F60
label_410100:
    if (ctx->pc == 0x410100u) {
        ctx->pc = 0x410100u;
            // 0x410100: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x410104u;
        goto label_410104;
    }
    ctx->pc = 0x4100FCu;
    SET_GPR_U32(ctx, 31, 0x410104u);
    ctx->pc = 0x410100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4100FCu;
            // 0x410100: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6F60u;
    if (runtime->hasFunction(0x4A6F60u)) {
        auto targetFn = runtime->lookupFunction(0x4A6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410104u; }
        if (ctx->pc != 0x410104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6F60_0x4a6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410104u; }
        if (ctx->pc != 0x410104u) { return; }
    }
    ctx->pc = 0x410104u;
label_410104:
    // 0x410104: 0x3c02436d  lui         $v0, 0x436D
    ctx->pc = 0x410104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
label_410108:
    // 0x410108: 0x3c0342be  lui         $v1, 0x42BE
    ctx->pc = 0x410108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17086 << 16));
label_41010c:
    // 0x41010c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x41010cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410110:
    // 0x410110: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x410110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_410114:
    // 0x410114: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x410114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_410118:
    // 0x410118: 0xc60f00a4  lwc1        $f15, 0xA4($s0)
    ctx->pc = 0x410118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_41011c:
    // 0x41011c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x41011cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_410120:
    // 0x410120: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x410120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_410124:
    // 0x410124: 0xc129b24  jal         func_4A6C90
label_410128:
    if (ctx->pc == 0x410128u) {
        ctx->pc = 0x410128u;
            // 0x410128: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x41012Cu;
        goto label_41012c;
    }
    ctx->pc = 0x410124u;
    SET_GPR_U32(ctx, 31, 0x41012Cu);
    ctx->pc = 0x410128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410124u;
            // 0x410128: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6C90u;
    if (runtime->hasFunction(0x4A6C90u)) {
        auto targetFn = runtime->lookupFunction(0x4A6C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41012Cu; }
        if (ctx->pc != 0x41012Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6C90_0x4a6c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41012Cu; }
        if (ctx->pc != 0x41012Cu) { return; }
    }
    ctx->pc = 0x41012Cu;
label_41012c:
    // 0x41012c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x41012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_410130:
    // 0x410130: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x410130u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_410134:
    // 0x410134: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
label_410138:
    if (ctx->pc == 0x410138u) {
        ctx->pc = 0x41013Cu;
        goto label_41013c;
    }
    ctx->pc = 0x410134u;
    {
        const bool branch_taken_0x410134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x410134) {
            ctx->pc = 0x4102B8u;
            goto label_4102b8;
        }
    }
    ctx->pc = 0x41013Cu;
label_41013c:
    // 0x41013c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x41013cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_410140:
    // 0x410140: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x410140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_410144:
    // 0x410144: 0x2484c150  addiu       $a0, $a0, -0x3EB0
    ctx->pc = 0x410144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951248));
label_410148:
    // 0x410148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x410148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_41014c:
    // 0x41014c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x41014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_410150:
    // 0x410150: 0x600008  jr          $v1
label_410154:
    if (ctx->pc == 0x410154u) {
        ctx->pc = 0x410158u;
        goto label_410158;
    }
    ctx->pc = 0x410150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x410158u: goto label_410158;
            case 0x41017Cu: goto label_41017c;
            case 0x4101A0u: goto label_4101a0;
            case 0x4101C4u: goto label_4101c4;
            case 0x4101E8u: goto label_4101e8;
            case 0x41020Cu: goto label_41020c;
            case 0x410230u: goto label_410230;
            case 0x410254u: goto label_410254;
            case 0x410278u: goto label_410278;
            case 0x41029Cu: goto label_41029c;
            case 0x4102B8u: goto label_4102b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x410158u;
label_410158:
    // 0x410158: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x410158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_41015c:
    // 0x41015c: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x41015cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_410160:
    // 0x410160: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x410160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_410164:
    // 0x410164: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x410164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410168:
    // 0x410168: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x410168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_41016c:
    // 0x41016c: 0xc129b18  jal         func_4A6C60
label_410170:
    if (ctx->pc == 0x410170u) {
        ctx->pc = 0x410170u;
            // 0x410170: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x410174u;
        goto label_410174;
    }
    ctx->pc = 0x41016Cu;
    SET_GPR_U32(ctx, 31, 0x410174u);
    ctx->pc = 0x410170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41016Cu;
            // 0x410170: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6C60u;
    if (runtime->hasFunction(0x4A6C60u)) {
        auto targetFn = runtime->lookupFunction(0x4A6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410174u; }
        if (ctx->pc != 0x410174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6C60_0x4a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410174u; }
        if (ctx->pc != 0x410174u) { return; }
    }
    ctx->pc = 0x410174u;
label_410174:
    // 0x410174: 0x10000050  b           . + 4 + (0x50 << 2)
label_410178:
    if (ctx->pc == 0x410178u) {
        ctx->pc = 0x41017Cu;
        goto label_41017c;
    }
    ctx->pc = 0x410174u;
    {
        const bool branch_taken_0x410174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410174) {
            ctx->pc = 0x4102B8u;
            goto label_4102b8;
        }
    }
    ctx->pc = 0x41017Cu;
label_41017c:
    // 0x41017c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x41017cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_410180:
    // 0x410180: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x410180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_410184:
    // 0x410184: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x410184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_410188:
    // 0x410188: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x410188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41018c:
    // 0x41018c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x41018cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_410190:
    // 0x410190: 0xc129ac4  jal         func_4A6B10
label_410194:
    if (ctx->pc == 0x410194u) {
        ctx->pc = 0x410194u;
            // 0x410194: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x410198u;
        goto label_410198;
    }
    ctx->pc = 0x410190u;
    SET_GPR_U32(ctx, 31, 0x410198u);
    ctx->pc = 0x410194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410190u;
            // 0x410194: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6B10u;
    if (runtime->hasFunction(0x4A6B10u)) {
        auto targetFn = runtime->lookupFunction(0x4A6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410198u; }
        if (ctx->pc != 0x410198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6B10_0x4a6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410198u; }
        if (ctx->pc != 0x410198u) { return; }
    }
    ctx->pc = 0x410198u;
label_410198:
    // 0x410198: 0x10000047  b           . + 4 + (0x47 << 2)
label_41019c:
    if (ctx->pc == 0x41019Cu) {
        ctx->pc = 0x4101A0u;
        goto label_4101a0;
    }
    ctx->pc = 0x410198u;
    {
        const bool branch_taken_0x410198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410198) {
            ctx->pc = 0x4102B8u;
            goto label_4102b8;
        }
    }
    ctx->pc = 0x4101A0u;
label_4101a0:
    // 0x4101a0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x4101a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_4101a4:
    // 0x4101a4: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x4101a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_4101a8:
    // 0x4101a8: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x4101a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_4101ac:
    // 0x4101ac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4101acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4101b0:
    // 0x4101b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4101b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4101b4:
    // 0x4101b4: 0xc129a74  jal         func_4A69D0
label_4101b8:
    if (ctx->pc == 0x4101B8u) {
        ctx->pc = 0x4101B8u;
            // 0x4101b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4101BCu;
        goto label_4101bc;
    }
    ctx->pc = 0x4101B4u;
    SET_GPR_U32(ctx, 31, 0x4101BCu);
    ctx->pc = 0x4101B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4101B4u;
            // 0x4101b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A69D0u;
    if (runtime->hasFunction(0x4A69D0u)) {
        auto targetFn = runtime->lookupFunction(0x4A69D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4101BCu; }
        if (ctx->pc != 0x4101BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A69D0_0x4a69d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4101BCu; }
        if (ctx->pc != 0x4101BCu) { return; }
    }
    ctx->pc = 0x4101BCu;
label_4101bc:
    // 0x4101bc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_4101c0:
    if (ctx->pc == 0x4101C0u) {
        ctx->pc = 0x4101C4u;
        goto label_4101c4;
    }
    ctx->pc = 0x4101BCu;
    {
        const bool branch_taken_0x4101bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4101bc) {
            ctx->pc = 0x4102B8u;
            goto label_4102b8;
        }
    }
    ctx->pc = 0x4101C4u;
label_4101c4:
    // 0x4101c4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x4101c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_4101c8:
    // 0x4101c8: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x4101c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_4101cc:
    // 0x4101cc: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x4101ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_4101d0:
    // 0x4101d0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4101d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4101d4:
    // 0x4101d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4101d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4101d8:
    // 0x4101d8: 0xc129840  jal         func_4A6100
label_4101dc:
    if (ctx->pc == 0x4101DCu) {
        ctx->pc = 0x4101DCu;
            // 0x4101dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4101E0u;
        goto label_4101e0;
    }
    ctx->pc = 0x4101D8u;
    SET_GPR_U32(ctx, 31, 0x4101E0u);
    ctx->pc = 0x4101DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4101D8u;
            // 0x4101dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6100u;
    if (runtime->hasFunction(0x4A6100u)) {
        auto targetFn = runtime->lookupFunction(0x4A6100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4101E0u; }
        if (ctx->pc != 0x4101E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6100_0x4a6100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4101E0u; }
        if (ctx->pc != 0x4101E0u) { return; }
    }
    ctx->pc = 0x4101E0u;
label_4101e0:
    // 0x4101e0: 0x10000035  b           . + 4 + (0x35 << 2)
label_4101e4:
    if (ctx->pc == 0x4101E4u) {
        ctx->pc = 0x4101E8u;
        goto label_4101e8;
    }
    ctx->pc = 0x4101E0u;
    {
        const bool branch_taken_0x4101e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4101e0) {
            ctx->pc = 0x4102B8u;
            goto label_4102b8;
        }
    }
    ctx->pc = 0x4101E8u;
label_4101e8:
    // 0x4101e8: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x4101e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_4101ec:
    // 0x4101ec: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x4101ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_4101f0:
    // 0x4101f0: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x4101f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_4101f4:
    // 0x4101f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4101f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4101f8:
    // 0x4101f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4101f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4101fc:
    // 0x4101fc: 0xc1299c4  jal         func_4A6710
label_410200:
    if (ctx->pc == 0x410200u) {
        ctx->pc = 0x410200u;
            // 0x410200: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x410204u;
        goto label_410204;
    }
    ctx->pc = 0x4101FCu;
    SET_GPR_U32(ctx, 31, 0x410204u);
    ctx->pc = 0x410200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4101FCu;
            // 0x410200: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6710u;
    if (runtime->hasFunction(0x4A6710u)) {
        auto targetFn = runtime->lookupFunction(0x4A6710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410204u; }
        if (ctx->pc != 0x410204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6710_0x4a6710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410204u; }
        if (ctx->pc != 0x410204u) { return; }
    }
    ctx->pc = 0x410204u;
label_410204:
    // 0x410204: 0x1000002c  b           . + 4 + (0x2C << 2)
label_410208:
    if (ctx->pc == 0x410208u) {
        ctx->pc = 0x41020Cu;
        goto label_41020c;
    }
    ctx->pc = 0x410204u;
    {
        const bool branch_taken_0x410204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410204) {
            ctx->pc = 0x4102B8u;
            goto label_4102b8;
        }
    }
    ctx->pc = 0x41020Cu;
label_41020c:
    // 0x41020c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x41020cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_410210:
    // 0x410210: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x410210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_410214:
    // 0x410214: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x410214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_410218:
    // 0x410218: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x410218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41021c:
    // 0x41021c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x41021cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_410220:
    // 0x410220: 0xc1299d4  jal         func_4A6750
label_410224:
    if (ctx->pc == 0x410224u) {
        ctx->pc = 0x410224u;
            // 0x410224: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x410228u;
        goto label_410228;
    }
    ctx->pc = 0x410220u;
    SET_GPR_U32(ctx, 31, 0x410228u);
    ctx->pc = 0x410224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410220u;
            // 0x410224: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6750u;
    if (runtime->hasFunction(0x4A6750u)) {
        auto targetFn = runtime->lookupFunction(0x4A6750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410228u; }
        if (ctx->pc != 0x410228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6750_0x4a6750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410228u; }
        if (ctx->pc != 0x410228u) { return; }
    }
    ctx->pc = 0x410228u;
label_410228:
    // 0x410228: 0x10000023  b           . + 4 + (0x23 << 2)
label_41022c:
    if (ctx->pc == 0x41022Cu) {
        ctx->pc = 0x410230u;
        goto label_410230;
    }
    ctx->pc = 0x410228u;
    {
        const bool branch_taken_0x410228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410228) {
            ctx->pc = 0x4102B8u;
            goto label_4102b8;
        }
    }
    ctx->pc = 0x410230u;
label_410230:
    // 0x410230: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x410230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_410234:
    // 0x410234: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x410234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_410238:
    // 0x410238: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x410238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_41023c:
    // 0x41023c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x41023cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410240:
    // 0x410240: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x410240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_410244:
    // 0x410244: 0xc1298e4  jal         func_4A6390
label_410248:
    if (ctx->pc == 0x410248u) {
        ctx->pc = 0x410248u;
            // 0x410248: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x41024Cu;
        goto label_41024c;
    }
    ctx->pc = 0x410244u;
    SET_GPR_U32(ctx, 31, 0x41024Cu);
    ctx->pc = 0x410248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410244u;
            // 0x410248: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6390u;
    if (runtime->hasFunction(0x4A6390u)) {
        auto targetFn = runtime->lookupFunction(0x4A6390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41024Cu; }
        if (ctx->pc != 0x41024Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6390_0x4a6390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41024Cu; }
        if (ctx->pc != 0x41024Cu) { return; }
    }
    ctx->pc = 0x41024Cu;
label_41024c:
    // 0x41024c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_410250:
    if (ctx->pc == 0x410250u) {
        ctx->pc = 0x410254u;
        goto label_410254;
    }
    ctx->pc = 0x41024Cu;
    {
        const bool branch_taken_0x41024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41024c) {
            ctx->pc = 0x4102B8u;
            goto label_4102b8;
        }
    }
    ctx->pc = 0x410254u;
label_410254:
    // 0x410254: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x410254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_410258:
    // 0x410258: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x410258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_41025c:
    // 0x41025c: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x41025cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_410260:
    // 0x410260: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x410260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410264:
    // 0x410264: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x410264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_410268:
    // 0x410268: 0xc129960  jal         func_4A6580
label_41026c:
    if (ctx->pc == 0x41026Cu) {
        ctx->pc = 0x41026Cu;
            // 0x41026c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x410270u;
        goto label_410270;
    }
    ctx->pc = 0x410268u;
    SET_GPR_U32(ctx, 31, 0x410270u);
    ctx->pc = 0x41026Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410268u;
            // 0x41026c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6580u;
    if (runtime->hasFunction(0x4A6580u)) {
        auto targetFn = runtime->lookupFunction(0x4A6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410270u; }
        if (ctx->pc != 0x410270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6580_0x4a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410270u; }
        if (ctx->pc != 0x410270u) { return; }
    }
    ctx->pc = 0x410270u;
label_410270:
    // 0x410270: 0x10000011  b           . + 4 + (0x11 << 2)
label_410274:
    if (ctx->pc == 0x410274u) {
        ctx->pc = 0x410278u;
        goto label_410278;
    }
    ctx->pc = 0x410270u;
    {
        const bool branch_taken_0x410270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410270) {
            ctx->pc = 0x4102B8u;
            goto label_4102b8;
        }
    }
    ctx->pc = 0x410278u;
label_410278:
    // 0x410278: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x410278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_41027c:
    // 0x41027c: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x41027cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_410280:
    // 0x410280: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x410280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_410284:
    // 0x410284: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x410284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410288:
    // 0x410288: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x410288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_41028c:
    // 0x41028c: 0xc129a24  jal         func_4A6890
label_410290:
    if (ctx->pc == 0x410290u) {
        ctx->pc = 0x410290u;
            // 0x410290: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x410294u;
        goto label_410294;
    }
    ctx->pc = 0x41028Cu;
    SET_GPR_U32(ctx, 31, 0x410294u);
    ctx->pc = 0x410290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41028Cu;
            // 0x410290: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6890u;
    if (runtime->hasFunction(0x4A6890u)) {
        auto targetFn = runtime->lookupFunction(0x4A6890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410294u; }
        if (ctx->pc != 0x410294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6890_0x4a6890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410294u; }
        if (ctx->pc != 0x410294u) { return; }
    }
    ctx->pc = 0x410294u;
label_410294:
    // 0x410294: 0x10000008  b           . + 4 + (0x8 << 2)
label_410298:
    if (ctx->pc == 0x410298u) {
        ctx->pc = 0x41029Cu;
        goto label_41029c;
    }
    ctx->pc = 0x410294u;
    {
        const bool branch_taken_0x410294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410294) {
            ctx->pc = 0x4102B8u;
            goto label_4102b8;
        }
    }
    ctx->pc = 0x41029Cu;
label_41029c:
    // 0x41029c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x41029cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_4102a0:
    // 0x4102a0: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x4102a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_4102a4:
    // 0x4102a4: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x4102a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_4102a8:
    // 0x4102a8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4102a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4102ac:
    // 0x4102ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4102acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4102b0:
    // 0x4102b0: 0xc1297ec  jal         func_4A5FB0
label_4102b4:
    if (ctx->pc == 0x4102B4u) {
        ctx->pc = 0x4102B4u;
            // 0x4102b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4102B8u;
        goto label_4102b8;
    }
    ctx->pc = 0x4102B0u;
    SET_GPR_U32(ctx, 31, 0x4102B8u);
    ctx->pc = 0x4102B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4102B0u;
            // 0x4102b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FB0u;
    if (runtime->hasFunction(0x4A5FB0u)) {
        auto targetFn = runtime->lookupFunction(0x4A5FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4102B8u; }
        if (ctx->pc != 0x4102B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5FB0_0x4a5fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4102B8u; }
        if (ctx->pc != 0x4102B8u) { return; }
    }
    ctx->pc = 0x4102B8u;
label_4102b8:
    // 0x4102b8: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x4102b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4102bc:
    // 0x4102bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4102bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4102c0:
    // 0x4102c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4102c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4102c4:
    // 0x4102c4: 0x0  nop
    ctx->pc = 0x4102c4u;
    // NOP
label_4102c8:
    // 0x4102c8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4102c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4102cc:
    // 0x4102cc: 0x450000be  bc1f        . + 4 + (0xBE << 2)
label_4102d0:
    if (ctx->pc == 0x4102D0u) {
        ctx->pc = 0x4102D4u;
        goto label_4102d4;
    }
    ctx->pc = 0x4102CCu;
    {
        const bool branch_taken_0x4102cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4102cc) {
            ctx->pc = 0x4105C8u;
            goto label_4105c8;
        }
    }
    ctx->pc = 0x4102D4u;
label_4102d4:
    // 0x4102d4: 0x3c03436d  lui         $v1, 0x436D
    ctx->pc = 0x4102d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17261 << 16));
label_4102d8:
    // 0x4102d8: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x4102d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_4102dc:
    // 0x4102dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4102dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4102e0:
    // 0x4102e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4102e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4102e4:
    // 0x4102e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4102e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4102e8:
    // 0x4102e8: 0xc129bd8  jal         func_4A6F60
label_4102ec:
    if (ctx->pc == 0x4102ECu) {
        ctx->pc = 0x4102ECu;
            // 0x4102ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4102F0u;
        goto label_4102f0;
    }
    ctx->pc = 0x4102E8u;
    SET_GPR_U32(ctx, 31, 0x4102F0u);
    ctx->pc = 0x4102ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4102E8u;
            // 0x4102ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6F60u;
    if (runtime->hasFunction(0x4A6F60u)) {
        auto targetFn = runtime->lookupFunction(0x4A6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4102F0u; }
        if (ctx->pc != 0x4102F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6F60_0x4a6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4102F0u; }
        if (ctx->pc != 0x4102F0u) { return; }
    }
    ctx->pc = 0x4102F0u;
label_4102f0:
    // 0x4102f0: 0x92020070  lbu         $v0, 0x70($s0)
    ctx->pc = 0x4102f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_4102f4:
    // 0x4102f4: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
label_4102f8:
    if (ctx->pc == 0x4102F8u) {
        ctx->pc = 0x4102F8u;
            // 0x4102f8: 0x3c02436d  lui         $v0, 0x436D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
        ctx->pc = 0x4102FCu;
        goto label_4102fc;
    }
    ctx->pc = 0x4102F4u;
    {
        const bool branch_taken_0x4102f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4102f4) {
            ctx->pc = 0x4102F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4102F4u;
            // 0x4102f8: 0x3c02436d  lui         $v0, 0x436D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x410418u;
            goto label_410418;
        }
    }
    ctx->pc = 0x4102FCu;
label_4102fc:
    // 0x4102fc: 0xc6020088  lwc1        $f2, 0x88($s0)
    ctx->pc = 0x4102fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_410300:
    // 0x410300: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x410300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_410304:
    // 0x410304: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x410304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_410308:
    // 0x410308: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x410308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_41030c:
    // 0x41030c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x41030cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_410310:
    // 0x410310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x410310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_410314:
    // 0x410314: 0x0  nop
    ctx->pc = 0x410314u;
    // NOP
label_410318:
    // 0x410318: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x410318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41031c:
    // 0x41031c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_410320:
    if (ctx->pc == 0x410320u) {
        ctx->pc = 0x410320u;
            // 0x410320: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x410324u;
        goto label_410324;
    }
    ctx->pc = 0x41031Cu;
    {
        const bool branch_taken_0x41031c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41031c) {
            ctx->pc = 0x410320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41031Cu;
            // 0x410320: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x410334u;
            goto label_410334;
        }
    }
    ctx->pc = 0x410324u;
label_410324:
    // 0x410324: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x410324u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_410328:
    // 0x410328: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x410328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_41032c:
    // 0x41032c: 0x10000007  b           . + 4 + (0x7 << 2)
label_410330:
    if (ctx->pc == 0x410330u) {
        ctx->pc = 0x410330u;
            // 0x410330: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x410334u;
        goto label_410334;
    }
    ctx->pc = 0x41032Cu;
    {
        const bool branch_taken_0x41032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41032Cu;
            // 0x410330: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41032c) {
            ctx->pc = 0x41034Cu;
            goto label_41034c;
        }
    }
    ctx->pc = 0x410334u;
label_410334:
    // 0x410334: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x410334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_410338:
    // 0x410338: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x410338u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_41033c:
    // 0x41033c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x41033cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_410340:
    // 0x410340: 0x0  nop
    ctx->pc = 0x410340u;
    // NOP
label_410344:
    // 0x410344: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x410344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_410348:
    // 0x410348: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x410348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_41034c:
    // 0x41034c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x41034cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_410350:
    // 0x410350: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x410350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_410354:
    // 0x410354: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x410354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_410358:
    // 0x410358: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x410358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_41035c:
    // 0x41035c: 0x3c02436d  lui         $v0, 0x436D
    ctx->pc = 0x41035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
label_410360:
    // 0x410360: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x410360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410364:
    // 0x410364: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x410364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_410368:
    // 0x410368: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x410368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_41036c:
    // 0x41036c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x41036cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_410370:
    // 0x410370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x410370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_410374:
    // 0x410374: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x410374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_410378:
    // 0x410378: 0xc129b24  jal         func_4A6C90
label_41037c:
    if (ctx->pc == 0x41037Cu) {
        ctx->pc = 0x41037Cu;
            // 0x41037c: 0x46020381  sub.s       $f14, $f0, $f2 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x410380u;
        goto label_410380;
    }
    ctx->pc = 0x410378u;
    SET_GPR_U32(ctx, 31, 0x410380u);
    ctx->pc = 0x41037Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410378u;
            // 0x41037c: 0x46020381  sub.s       $f14, $f0, $f2 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6C90u;
    if (runtime->hasFunction(0x4A6C90u)) {
        auto targetFn = runtime->lookupFunction(0x4A6C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410380u; }
        if (ctx->pc != 0x410380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6C90_0x4a6c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410380u; }
        if (ctx->pc != 0x410380u) { return; }
    }
    ctx->pc = 0x410380u;
label_410380:
    // 0x410380: 0xc6020088  lwc1        $f2, 0x88($s0)
    ctx->pc = 0x410380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_410384:
    // 0x410384: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x410384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_410388:
    // 0x410388: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x410388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41038c:
    // 0x41038c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x41038cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_410390:
    // 0x410390: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x410390u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_410394:
    // 0x410394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x410394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_410398:
    // 0x410398: 0x0  nop
    ctx->pc = 0x410398u;
    // NOP
label_41039c:
    // 0x41039c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x41039cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4103a0:
    // 0x4103a0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4103a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4103a4:
    // 0x4103a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4103a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4103a8:
    // 0x4103a8: 0x0  nop
    ctx->pc = 0x4103a8u;
    // NOP
label_4103ac:
    // 0x4103ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4103acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4103b0:
    // 0x4103b0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4103b4:
    if (ctx->pc == 0x4103B4u) {
        ctx->pc = 0x4103B4u;
            // 0x4103b4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4103B8u;
        goto label_4103b8;
    }
    ctx->pc = 0x4103B0u;
    {
        const bool branch_taken_0x4103b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4103b0) {
            ctx->pc = 0x4103B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4103B0u;
            // 0x4103b4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4103C8u;
            goto label_4103c8;
        }
    }
    ctx->pc = 0x4103B8u;
label_4103b8:
    // 0x4103b8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4103b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4103bc:
    // 0x4103bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4103bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4103c0:
    // 0x4103c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4103c4:
    if (ctx->pc == 0x4103C4u) {
        ctx->pc = 0x4103C4u;
            // 0x4103c4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4103C8u;
        goto label_4103c8;
    }
    ctx->pc = 0x4103C0u;
    {
        const bool branch_taken_0x4103c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4103C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4103C0u;
            // 0x4103c4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4103c0) {
            ctx->pc = 0x4103E0u;
            goto label_4103e0;
        }
    }
    ctx->pc = 0x4103C8u;
label_4103c8:
    // 0x4103c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4103c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4103cc:
    // 0x4103cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4103ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4103d0:
    // 0x4103d0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4103d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4103d4:
    // 0x4103d4: 0x0  nop
    ctx->pc = 0x4103d4u;
    // NOP
label_4103d8:
    // 0x4103d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4103d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4103dc:
    // 0x4103dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4103dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4103e0:
    // 0x4103e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4103e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4103e4:
    // 0x4103e4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4103e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4103e8:
    // 0x4103e8: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x4103e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4103ec:
    // 0x4103ec: 0x3c02436d  lui         $v0, 0x436D
    ctx->pc = 0x4103ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
label_4103f0:
    // 0x4103f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4103f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4103f4:
    // 0x4103f4: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x4103f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_4103f8:
    // 0x4103f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4103f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4103fc:
    // 0x4103fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4103fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_410400:
    // 0x410400: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x410400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_410404:
    // 0x410404: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x410404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_410408:
    // 0x410408: 0xc129b24  jal         func_4A6C90
label_41040c:
    if (ctx->pc == 0x41040Cu) {
        ctx->pc = 0x41040Cu;
            // 0x41040c: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x410410u;
        goto label_410410;
    }
    ctx->pc = 0x410408u;
    SET_GPR_U32(ctx, 31, 0x410410u);
    ctx->pc = 0x41040Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410408u;
            // 0x41040c: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6C90u;
    if (runtime->hasFunction(0x4A6C90u)) {
        auto targetFn = runtime->lookupFunction(0x4A6C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410410u; }
        if (ctx->pc != 0x410410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6C90_0x4a6c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410410u; }
        if (ctx->pc != 0x410410u) { return; }
    }
    ctx->pc = 0x410410u;
label_410410:
    // 0x410410: 0x1000000b  b           . + 4 + (0xB << 2)
label_410414:
    if (ctx->pc == 0x410414u) {
        ctx->pc = 0x410414u;
            // 0x410414: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x410418u;
        goto label_410418;
    }
    ctx->pc = 0x410410u;
    {
        const bool branch_taken_0x410410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410410u;
            // 0x410414: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410410) {
            ctx->pc = 0x410440u;
            goto label_410440;
        }
    }
    ctx->pc = 0x410418u;
label_410418:
    // 0x410418: 0x3c03434c  lui         $v1, 0x434C
    ctx->pc = 0x410418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17228 << 16));
label_41041c:
    // 0x41041c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x41041cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410420:
    // 0x410420: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x410420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_410424:
    // 0x410424: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x410424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_410428:
    // 0x410428: 0xc60f00a4  lwc1        $f15, 0xA4($s0)
    ctx->pc = 0x410428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_41042c:
    // 0x41042c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x41042cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_410430:
    // 0x410430: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x410430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_410434:
    // 0x410434: 0xc129b24  jal         func_4A6C90
label_410438:
    if (ctx->pc == 0x410438u) {
        ctx->pc = 0x410438u;
            // 0x410438: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x41043Cu;
        goto label_41043c;
    }
    ctx->pc = 0x410434u;
    SET_GPR_U32(ctx, 31, 0x41043Cu);
    ctx->pc = 0x410438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410434u;
            // 0x410438: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6C90u;
    if (runtime->hasFunction(0x4A6C90u)) {
        auto targetFn = runtime->lookupFunction(0x4A6C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41043Cu; }
        if (ctx->pc != 0x41043Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6C90_0x4a6c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41043Cu; }
        if (ctx->pc != 0x41043Cu) { return; }
    }
    ctx->pc = 0x41043Cu;
label_41043c:
    // 0x41043c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x41043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_410440:
    // 0x410440: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x410440u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_410444:
    // 0x410444: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
label_410448:
    if (ctx->pc == 0x410448u) {
        ctx->pc = 0x41044Cu;
        goto label_41044c;
    }
    ctx->pc = 0x410444u;
    {
        const bool branch_taken_0x410444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x410444) {
            ctx->pc = 0x4105C8u;
            goto label_4105c8;
        }
    }
    ctx->pc = 0x41044Cu;
label_41044c:
    // 0x41044c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x41044cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_410450:
    // 0x410450: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x410450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_410454:
    // 0x410454: 0x2484c110  addiu       $a0, $a0, -0x3EF0
    ctx->pc = 0x410454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951184));
label_410458:
    // 0x410458: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x410458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_41045c:
    // 0x41045c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x41045cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_410460:
    // 0x410460: 0x600008  jr          $v1
label_410464:
    if (ctx->pc == 0x410464u) {
        ctx->pc = 0x410468u;
        goto label_410468;
    }
    ctx->pc = 0x410460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x410468u: goto label_410468;
            case 0x41048Cu: goto label_41048c;
            case 0x4104B0u: goto label_4104b0;
            case 0x4104D4u: goto label_4104d4;
            case 0x4104F8u: goto label_4104f8;
            case 0x41051Cu: goto label_41051c;
            case 0x410540u: goto label_410540;
            case 0x410564u: goto label_410564;
            case 0x410588u: goto label_410588;
            case 0x4105ACu: goto label_4105ac;
            case 0x4105C8u: goto label_4105c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x410468u;
label_410468:
    // 0x410468: 0x3c02436d  lui         $v0, 0x436D
    ctx->pc = 0x410468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
label_41046c:
    // 0x41046c: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x41046cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_410470:
    // 0x410470: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x410470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410474:
    // 0x410474: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x410474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_410478:
    // 0x410478: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x410478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_41047c:
    // 0x41047c: 0xc129b18  jal         func_4A6C60
label_410480:
    if (ctx->pc == 0x410480u) {
        ctx->pc = 0x410480u;
            // 0x410480: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x410484u;
        goto label_410484;
    }
    ctx->pc = 0x41047Cu;
    SET_GPR_U32(ctx, 31, 0x410484u);
    ctx->pc = 0x410480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41047Cu;
            // 0x410480: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6C60u;
    if (runtime->hasFunction(0x4A6C60u)) {
        auto targetFn = runtime->lookupFunction(0x4A6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410484u; }
        if (ctx->pc != 0x410484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6C60_0x4a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410484u; }
        if (ctx->pc != 0x410484u) { return; }
    }
    ctx->pc = 0x410484u;
label_410484:
    // 0x410484: 0x10000050  b           . + 4 + (0x50 << 2)
label_410488:
    if (ctx->pc == 0x410488u) {
        ctx->pc = 0x41048Cu;
        goto label_41048c;
    }
    ctx->pc = 0x410484u;
    {
        const bool branch_taken_0x410484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410484) {
            ctx->pc = 0x4105C8u;
            goto label_4105c8;
        }
    }
    ctx->pc = 0x41048Cu;
label_41048c:
    // 0x41048c: 0x3c02436d  lui         $v0, 0x436D
    ctx->pc = 0x41048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
label_410490:
    // 0x410490: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x410490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_410494:
    // 0x410494: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x410494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410498:
    // 0x410498: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x410498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_41049c:
    // 0x41049c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x41049cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4104a0:
    // 0x4104a0: 0xc129ac4  jal         func_4A6B10
label_4104a4:
    if (ctx->pc == 0x4104A4u) {
        ctx->pc = 0x4104A4u;
            // 0x4104a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4104A8u;
        goto label_4104a8;
    }
    ctx->pc = 0x4104A0u;
    SET_GPR_U32(ctx, 31, 0x4104A8u);
    ctx->pc = 0x4104A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4104A0u;
            // 0x4104a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6B10u;
    if (runtime->hasFunction(0x4A6B10u)) {
        auto targetFn = runtime->lookupFunction(0x4A6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4104A8u; }
        if (ctx->pc != 0x4104A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6B10_0x4a6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4104A8u; }
        if (ctx->pc != 0x4104A8u) { return; }
    }
    ctx->pc = 0x4104A8u;
label_4104a8:
    // 0x4104a8: 0x10000047  b           . + 4 + (0x47 << 2)
label_4104ac:
    if (ctx->pc == 0x4104ACu) {
        ctx->pc = 0x4104B0u;
        goto label_4104b0;
    }
    ctx->pc = 0x4104A8u;
    {
        const bool branch_taken_0x4104a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4104a8) {
            ctx->pc = 0x4105C8u;
            goto label_4105c8;
        }
    }
    ctx->pc = 0x4104B0u;
label_4104b0:
    // 0x4104b0: 0x3c02436d  lui         $v0, 0x436D
    ctx->pc = 0x4104b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
label_4104b4:
    // 0x4104b4: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x4104b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4104b8:
    // 0x4104b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4104b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4104bc:
    // 0x4104bc: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x4104bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_4104c0:
    // 0x4104c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4104c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4104c4:
    // 0x4104c4: 0xc129a74  jal         func_4A69D0
label_4104c8:
    if (ctx->pc == 0x4104C8u) {
        ctx->pc = 0x4104C8u;
            // 0x4104c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4104CCu;
        goto label_4104cc;
    }
    ctx->pc = 0x4104C4u;
    SET_GPR_U32(ctx, 31, 0x4104CCu);
    ctx->pc = 0x4104C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4104C4u;
            // 0x4104c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A69D0u;
    if (runtime->hasFunction(0x4A69D0u)) {
        auto targetFn = runtime->lookupFunction(0x4A69D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4104CCu; }
        if (ctx->pc != 0x4104CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A69D0_0x4a69d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4104CCu; }
        if (ctx->pc != 0x4104CCu) { return; }
    }
    ctx->pc = 0x4104CCu;
label_4104cc:
    // 0x4104cc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_4104d0:
    if (ctx->pc == 0x4104D0u) {
        ctx->pc = 0x4104D4u;
        goto label_4104d4;
    }
    ctx->pc = 0x4104CCu;
    {
        const bool branch_taken_0x4104cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4104cc) {
            ctx->pc = 0x4105C8u;
            goto label_4105c8;
        }
    }
    ctx->pc = 0x4104D4u;
label_4104d4:
    // 0x4104d4: 0x3c02436d  lui         $v0, 0x436D
    ctx->pc = 0x4104d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
label_4104d8:
    // 0x4104d8: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x4104d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4104dc:
    // 0x4104dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4104dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4104e0:
    // 0x4104e0: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x4104e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_4104e4:
    // 0x4104e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4104e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4104e8:
    // 0x4104e8: 0xc129840  jal         func_4A6100
label_4104ec:
    if (ctx->pc == 0x4104ECu) {
        ctx->pc = 0x4104ECu;
            // 0x4104ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4104F0u;
        goto label_4104f0;
    }
    ctx->pc = 0x4104E8u;
    SET_GPR_U32(ctx, 31, 0x4104F0u);
    ctx->pc = 0x4104ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4104E8u;
            // 0x4104ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6100u;
    if (runtime->hasFunction(0x4A6100u)) {
        auto targetFn = runtime->lookupFunction(0x4A6100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4104F0u; }
        if (ctx->pc != 0x4104F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6100_0x4a6100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4104F0u; }
        if (ctx->pc != 0x4104F0u) { return; }
    }
    ctx->pc = 0x4104F0u;
label_4104f0:
    // 0x4104f0: 0x10000035  b           . + 4 + (0x35 << 2)
label_4104f4:
    if (ctx->pc == 0x4104F4u) {
        ctx->pc = 0x4104F8u;
        goto label_4104f8;
    }
    ctx->pc = 0x4104F0u;
    {
        const bool branch_taken_0x4104f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4104f0) {
            ctx->pc = 0x4105C8u;
            goto label_4105c8;
        }
    }
    ctx->pc = 0x4104F8u;
label_4104f8:
    // 0x4104f8: 0x3c02436d  lui         $v0, 0x436D
    ctx->pc = 0x4104f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
label_4104fc:
    // 0x4104fc: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x4104fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_410500:
    // 0x410500: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x410500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410504:
    // 0x410504: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x410504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_410508:
    // 0x410508: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x410508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_41050c:
    // 0x41050c: 0xc1299c4  jal         func_4A6710
label_410510:
    if (ctx->pc == 0x410510u) {
        ctx->pc = 0x410510u;
            // 0x410510: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x410514u;
        goto label_410514;
    }
    ctx->pc = 0x41050Cu;
    SET_GPR_U32(ctx, 31, 0x410514u);
    ctx->pc = 0x410510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41050Cu;
            // 0x410510: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6710u;
    if (runtime->hasFunction(0x4A6710u)) {
        auto targetFn = runtime->lookupFunction(0x4A6710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410514u; }
        if (ctx->pc != 0x410514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6710_0x4a6710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410514u; }
        if (ctx->pc != 0x410514u) { return; }
    }
    ctx->pc = 0x410514u;
label_410514:
    // 0x410514: 0x1000002c  b           . + 4 + (0x2C << 2)
label_410518:
    if (ctx->pc == 0x410518u) {
        ctx->pc = 0x41051Cu;
        goto label_41051c;
    }
    ctx->pc = 0x410514u;
    {
        const bool branch_taken_0x410514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410514) {
            ctx->pc = 0x4105C8u;
            goto label_4105c8;
        }
    }
    ctx->pc = 0x41051Cu;
label_41051c:
    // 0x41051c: 0x3c02436d  lui         $v0, 0x436D
    ctx->pc = 0x41051cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
label_410520:
    // 0x410520: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x410520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_410524:
    // 0x410524: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x410524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410528:
    // 0x410528: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x410528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_41052c:
    // 0x41052c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x41052cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_410530:
    // 0x410530: 0xc1299d4  jal         func_4A6750
label_410534:
    if (ctx->pc == 0x410534u) {
        ctx->pc = 0x410534u;
            // 0x410534: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x410538u;
        goto label_410538;
    }
    ctx->pc = 0x410530u;
    SET_GPR_U32(ctx, 31, 0x410538u);
    ctx->pc = 0x410534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410530u;
            // 0x410534: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6750u;
    if (runtime->hasFunction(0x4A6750u)) {
        auto targetFn = runtime->lookupFunction(0x4A6750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410538u; }
        if (ctx->pc != 0x410538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6750_0x4a6750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410538u; }
        if (ctx->pc != 0x410538u) { return; }
    }
    ctx->pc = 0x410538u;
label_410538:
    // 0x410538: 0x10000023  b           . + 4 + (0x23 << 2)
label_41053c:
    if (ctx->pc == 0x41053Cu) {
        ctx->pc = 0x410540u;
        goto label_410540;
    }
    ctx->pc = 0x410538u;
    {
        const bool branch_taken_0x410538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410538) {
            ctx->pc = 0x4105C8u;
            goto label_4105c8;
        }
    }
    ctx->pc = 0x410540u;
label_410540:
    // 0x410540: 0x3c02436d  lui         $v0, 0x436D
    ctx->pc = 0x410540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
label_410544:
    // 0x410544: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x410544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_410548:
    // 0x410548: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x410548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41054c:
    // 0x41054c: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x41054cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_410550:
    // 0x410550: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x410550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_410554:
    // 0x410554: 0xc1298e4  jal         func_4A6390
label_410558:
    if (ctx->pc == 0x410558u) {
        ctx->pc = 0x410558u;
            // 0x410558: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x41055Cu;
        goto label_41055c;
    }
    ctx->pc = 0x410554u;
    SET_GPR_U32(ctx, 31, 0x41055Cu);
    ctx->pc = 0x410558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410554u;
            // 0x410558: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6390u;
    if (runtime->hasFunction(0x4A6390u)) {
        auto targetFn = runtime->lookupFunction(0x4A6390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41055Cu; }
        if (ctx->pc != 0x41055Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6390_0x4a6390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41055Cu; }
        if (ctx->pc != 0x41055Cu) { return; }
    }
    ctx->pc = 0x41055Cu;
label_41055c:
    // 0x41055c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_410560:
    if (ctx->pc == 0x410560u) {
        ctx->pc = 0x410564u;
        goto label_410564;
    }
    ctx->pc = 0x41055Cu;
    {
        const bool branch_taken_0x41055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41055c) {
            ctx->pc = 0x4105C8u;
            goto label_4105c8;
        }
    }
    ctx->pc = 0x410564u;
label_410564:
    // 0x410564: 0x3c02436d  lui         $v0, 0x436D
    ctx->pc = 0x410564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
label_410568:
    // 0x410568: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x410568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_41056c:
    // 0x41056c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x41056cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410570:
    // 0x410570: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x410570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_410574:
    // 0x410574: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x410574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_410578:
    // 0x410578: 0xc129960  jal         func_4A6580
label_41057c:
    if (ctx->pc == 0x41057Cu) {
        ctx->pc = 0x41057Cu;
            // 0x41057c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x410580u;
        goto label_410580;
    }
    ctx->pc = 0x410578u;
    SET_GPR_U32(ctx, 31, 0x410580u);
    ctx->pc = 0x41057Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410578u;
            // 0x41057c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6580u;
    if (runtime->hasFunction(0x4A6580u)) {
        auto targetFn = runtime->lookupFunction(0x4A6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410580u; }
        if (ctx->pc != 0x410580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6580_0x4a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410580u; }
        if (ctx->pc != 0x410580u) { return; }
    }
    ctx->pc = 0x410580u;
label_410580:
    // 0x410580: 0x10000011  b           . + 4 + (0x11 << 2)
label_410584:
    if (ctx->pc == 0x410584u) {
        ctx->pc = 0x410588u;
        goto label_410588;
    }
    ctx->pc = 0x410580u;
    {
        const bool branch_taken_0x410580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410580) {
            ctx->pc = 0x4105C8u;
            goto label_4105c8;
        }
    }
    ctx->pc = 0x410588u;
label_410588:
    // 0x410588: 0x3c02436d  lui         $v0, 0x436D
    ctx->pc = 0x410588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
label_41058c:
    // 0x41058c: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x41058cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_410590:
    // 0x410590: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x410590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_410594:
    // 0x410594: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x410594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_410598:
    // 0x410598: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x410598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_41059c:
    // 0x41059c: 0xc129a24  jal         func_4A6890
label_4105a0:
    if (ctx->pc == 0x4105A0u) {
        ctx->pc = 0x4105A0u;
            // 0x4105a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4105A4u;
        goto label_4105a4;
    }
    ctx->pc = 0x41059Cu;
    SET_GPR_U32(ctx, 31, 0x4105A4u);
    ctx->pc = 0x4105A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41059Cu;
            // 0x4105a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6890u;
    if (runtime->hasFunction(0x4A6890u)) {
        auto targetFn = runtime->lookupFunction(0x4A6890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4105A4u; }
        if (ctx->pc != 0x4105A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6890_0x4a6890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4105A4u; }
        if (ctx->pc != 0x4105A4u) { return; }
    }
    ctx->pc = 0x4105A4u;
label_4105a4:
    // 0x4105a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_4105a8:
    if (ctx->pc == 0x4105A8u) {
        ctx->pc = 0x4105ACu;
        goto label_4105ac;
    }
    ctx->pc = 0x4105A4u;
    {
        const bool branch_taken_0x4105a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4105a4) {
            ctx->pc = 0x4105C8u;
            goto label_4105c8;
        }
    }
    ctx->pc = 0x4105ACu;
label_4105ac:
    // 0x4105ac: 0x3c02436d  lui         $v0, 0x436D
    ctx->pc = 0x4105acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17261 << 16));
label_4105b0:
    // 0x4105b0: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x4105b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4105b4:
    // 0x4105b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4105b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4105b8:
    // 0x4105b8: 0x3c02434c  lui         $v0, 0x434C
    ctx->pc = 0x4105b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17228 << 16));
label_4105bc:
    // 0x4105bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4105bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4105c0:
    // 0x4105c0: 0xc1297ec  jal         func_4A5FB0
label_4105c4:
    if (ctx->pc == 0x4105C4u) {
        ctx->pc = 0x4105C4u;
            // 0x4105c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4105C8u;
        goto label_4105c8;
    }
    ctx->pc = 0x4105C0u;
    SET_GPR_U32(ctx, 31, 0x4105C8u);
    ctx->pc = 0x4105C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4105C0u;
            // 0x4105c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FB0u;
    if (runtime->hasFunction(0x4A5FB0u)) {
        auto targetFn = runtime->lookupFunction(0x4A5FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4105C8u; }
        if (ctx->pc != 0x4105C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5FB0_0x4a5fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4105C8u; }
        if (ctx->pc != 0x4105C8u) { return; }
    }
    ctx->pc = 0x4105C8u;
label_4105c8:
    // 0x4105c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4105c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4105cc:
    // 0x4105cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4105ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4105d0:
    // 0x4105d0: 0x3e00008  jr          $ra
label_4105d4:
    if (ctx->pc == 0x4105D4u) {
        ctx->pc = 0x4105D4u;
            // 0x4105d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4105D8u;
        goto label_4105d8;
    }
    ctx->pc = 0x4105D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4105D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4105D0u;
            // 0x4105d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4105D8u;
label_4105d8:
    // 0x4105d8: 0x0  nop
    ctx->pc = 0x4105d8u;
    // NOP
label_4105dc:
    // 0x4105dc: 0x0  nop
    ctx->pc = 0x4105dcu;
    // NOP
}
