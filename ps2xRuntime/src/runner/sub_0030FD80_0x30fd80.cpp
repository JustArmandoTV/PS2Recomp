#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030FD80
// Address: 0x30fd80 - 0x3106e0
void sub_0030FD80_0x30fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FD80_0x30fd80");
#endif

    switch (ctx->pc) {
        case 0x30fd80u: goto label_30fd80;
        case 0x30fd84u: goto label_30fd84;
        case 0x30fd88u: goto label_30fd88;
        case 0x30fd8cu: goto label_30fd8c;
        case 0x30fd90u: goto label_30fd90;
        case 0x30fd94u: goto label_30fd94;
        case 0x30fd98u: goto label_30fd98;
        case 0x30fd9cu: goto label_30fd9c;
        case 0x30fda0u: goto label_30fda0;
        case 0x30fda4u: goto label_30fda4;
        case 0x30fda8u: goto label_30fda8;
        case 0x30fdacu: goto label_30fdac;
        case 0x30fdb0u: goto label_30fdb0;
        case 0x30fdb4u: goto label_30fdb4;
        case 0x30fdb8u: goto label_30fdb8;
        case 0x30fdbcu: goto label_30fdbc;
        case 0x30fdc0u: goto label_30fdc0;
        case 0x30fdc4u: goto label_30fdc4;
        case 0x30fdc8u: goto label_30fdc8;
        case 0x30fdccu: goto label_30fdcc;
        case 0x30fdd0u: goto label_30fdd0;
        case 0x30fdd4u: goto label_30fdd4;
        case 0x30fdd8u: goto label_30fdd8;
        case 0x30fddcu: goto label_30fddc;
        case 0x30fde0u: goto label_30fde0;
        case 0x30fde4u: goto label_30fde4;
        case 0x30fde8u: goto label_30fde8;
        case 0x30fdecu: goto label_30fdec;
        case 0x30fdf0u: goto label_30fdf0;
        case 0x30fdf4u: goto label_30fdf4;
        case 0x30fdf8u: goto label_30fdf8;
        case 0x30fdfcu: goto label_30fdfc;
        case 0x30fe00u: goto label_30fe00;
        case 0x30fe04u: goto label_30fe04;
        case 0x30fe08u: goto label_30fe08;
        case 0x30fe0cu: goto label_30fe0c;
        case 0x30fe10u: goto label_30fe10;
        case 0x30fe14u: goto label_30fe14;
        case 0x30fe18u: goto label_30fe18;
        case 0x30fe1cu: goto label_30fe1c;
        case 0x30fe20u: goto label_30fe20;
        case 0x30fe24u: goto label_30fe24;
        case 0x30fe28u: goto label_30fe28;
        case 0x30fe2cu: goto label_30fe2c;
        case 0x30fe30u: goto label_30fe30;
        case 0x30fe34u: goto label_30fe34;
        case 0x30fe38u: goto label_30fe38;
        case 0x30fe3cu: goto label_30fe3c;
        case 0x30fe40u: goto label_30fe40;
        case 0x30fe44u: goto label_30fe44;
        case 0x30fe48u: goto label_30fe48;
        case 0x30fe4cu: goto label_30fe4c;
        case 0x30fe50u: goto label_30fe50;
        case 0x30fe54u: goto label_30fe54;
        case 0x30fe58u: goto label_30fe58;
        case 0x30fe5cu: goto label_30fe5c;
        case 0x30fe60u: goto label_30fe60;
        case 0x30fe64u: goto label_30fe64;
        case 0x30fe68u: goto label_30fe68;
        case 0x30fe6cu: goto label_30fe6c;
        case 0x30fe70u: goto label_30fe70;
        case 0x30fe74u: goto label_30fe74;
        case 0x30fe78u: goto label_30fe78;
        case 0x30fe7cu: goto label_30fe7c;
        case 0x30fe80u: goto label_30fe80;
        case 0x30fe84u: goto label_30fe84;
        case 0x30fe88u: goto label_30fe88;
        case 0x30fe8cu: goto label_30fe8c;
        case 0x30fe90u: goto label_30fe90;
        case 0x30fe94u: goto label_30fe94;
        case 0x30fe98u: goto label_30fe98;
        case 0x30fe9cu: goto label_30fe9c;
        case 0x30fea0u: goto label_30fea0;
        case 0x30fea4u: goto label_30fea4;
        case 0x30fea8u: goto label_30fea8;
        case 0x30feacu: goto label_30feac;
        case 0x30feb0u: goto label_30feb0;
        case 0x30feb4u: goto label_30feb4;
        case 0x30feb8u: goto label_30feb8;
        case 0x30febcu: goto label_30febc;
        case 0x30fec0u: goto label_30fec0;
        case 0x30fec4u: goto label_30fec4;
        case 0x30fec8u: goto label_30fec8;
        case 0x30feccu: goto label_30fecc;
        case 0x30fed0u: goto label_30fed0;
        case 0x30fed4u: goto label_30fed4;
        case 0x30fed8u: goto label_30fed8;
        case 0x30fedcu: goto label_30fedc;
        case 0x30fee0u: goto label_30fee0;
        case 0x30fee4u: goto label_30fee4;
        case 0x30fee8u: goto label_30fee8;
        case 0x30feecu: goto label_30feec;
        case 0x30fef0u: goto label_30fef0;
        case 0x30fef4u: goto label_30fef4;
        case 0x30fef8u: goto label_30fef8;
        case 0x30fefcu: goto label_30fefc;
        case 0x30ff00u: goto label_30ff00;
        case 0x30ff04u: goto label_30ff04;
        case 0x30ff08u: goto label_30ff08;
        case 0x30ff0cu: goto label_30ff0c;
        case 0x30ff10u: goto label_30ff10;
        case 0x30ff14u: goto label_30ff14;
        case 0x30ff18u: goto label_30ff18;
        case 0x30ff1cu: goto label_30ff1c;
        case 0x30ff20u: goto label_30ff20;
        case 0x30ff24u: goto label_30ff24;
        case 0x30ff28u: goto label_30ff28;
        case 0x30ff2cu: goto label_30ff2c;
        case 0x30ff30u: goto label_30ff30;
        case 0x30ff34u: goto label_30ff34;
        case 0x30ff38u: goto label_30ff38;
        case 0x30ff3cu: goto label_30ff3c;
        case 0x30ff40u: goto label_30ff40;
        case 0x30ff44u: goto label_30ff44;
        case 0x30ff48u: goto label_30ff48;
        case 0x30ff4cu: goto label_30ff4c;
        case 0x30ff50u: goto label_30ff50;
        case 0x30ff54u: goto label_30ff54;
        case 0x30ff58u: goto label_30ff58;
        case 0x30ff5cu: goto label_30ff5c;
        case 0x30ff60u: goto label_30ff60;
        case 0x30ff64u: goto label_30ff64;
        case 0x30ff68u: goto label_30ff68;
        case 0x30ff6cu: goto label_30ff6c;
        case 0x30ff70u: goto label_30ff70;
        case 0x30ff74u: goto label_30ff74;
        case 0x30ff78u: goto label_30ff78;
        case 0x30ff7cu: goto label_30ff7c;
        case 0x30ff80u: goto label_30ff80;
        case 0x30ff84u: goto label_30ff84;
        case 0x30ff88u: goto label_30ff88;
        case 0x30ff8cu: goto label_30ff8c;
        case 0x30ff90u: goto label_30ff90;
        case 0x30ff94u: goto label_30ff94;
        case 0x30ff98u: goto label_30ff98;
        case 0x30ff9cu: goto label_30ff9c;
        case 0x30ffa0u: goto label_30ffa0;
        case 0x30ffa4u: goto label_30ffa4;
        case 0x30ffa8u: goto label_30ffa8;
        case 0x30ffacu: goto label_30ffac;
        case 0x30ffb0u: goto label_30ffb0;
        case 0x30ffb4u: goto label_30ffb4;
        case 0x30ffb8u: goto label_30ffb8;
        case 0x30ffbcu: goto label_30ffbc;
        case 0x30ffc0u: goto label_30ffc0;
        case 0x30ffc4u: goto label_30ffc4;
        case 0x30ffc8u: goto label_30ffc8;
        case 0x30ffccu: goto label_30ffcc;
        case 0x30ffd0u: goto label_30ffd0;
        case 0x30ffd4u: goto label_30ffd4;
        case 0x30ffd8u: goto label_30ffd8;
        case 0x30ffdcu: goto label_30ffdc;
        case 0x30ffe0u: goto label_30ffe0;
        case 0x30ffe4u: goto label_30ffe4;
        case 0x30ffe8u: goto label_30ffe8;
        case 0x30ffecu: goto label_30ffec;
        case 0x30fff0u: goto label_30fff0;
        case 0x30fff4u: goto label_30fff4;
        case 0x30fff8u: goto label_30fff8;
        case 0x30fffcu: goto label_30fffc;
        case 0x310000u: goto label_310000;
        case 0x310004u: goto label_310004;
        case 0x310008u: goto label_310008;
        case 0x31000cu: goto label_31000c;
        case 0x310010u: goto label_310010;
        case 0x310014u: goto label_310014;
        case 0x310018u: goto label_310018;
        case 0x31001cu: goto label_31001c;
        case 0x310020u: goto label_310020;
        case 0x310024u: goto label_310024;
        case 0x310028u: goto label_310028;
        case 0x31002cu: goto label_31002c;
        case 0x310030u: goto label_310030;
        case 0x310034u: goto label_310034;
        case 0x310038u: goto label_310038;
        case 0x31003cu: goto label_31003c;
        case 0x310040u: goto label_310040;
        case 0x310044u: goto label_310044;
        case 0x310048u: goto label_310048;
        case 0x31004cu: goto label_31004c;
        case 0x310050u: goto label_310050;
        case 0x310054u: goto label_310054;
        case 0x310058u: goto label_310058;
        case 0x31005cu: goto label_31005c;
        case 0x310060u: goto label_310060;
        case 0x310064u: goto label_310064;
        case 0x310068u: goto label_310068;
        case 0x31006cu: goto label_31006c;
        case 0x310070u: goto label_310070;
        case 0x310074u: goto label_310074;
        case 0x310078u: goto label_310078;
        case 0x31007cu: goto label_31007c;
        case 0x310080u: goto label_310080;
        case 0x310084u: goto label_310084;
        case 0x310088u: goto label_310088;
        case 0x31008cu: goto label_31008c;
        case 0x310090u: goto label_310090;
        case 0x310094u: goto label_310094;
        case 0x310098u: goto label_310098;
        case 0x31009cu: goto label_31009c;
        case 0x3100a0u: goto label_3100a0;
        case 0x3100a4u: goto label_3100a4;
        case 0x3100a8u: goto label_3100a8;
        case 0x3100acu: goto label_3100ac;
        case 0x3100b0u: goto label_3100b0;
        case 0x3100b4u: goto label_3100b4;
        case 0x3100b8u: goto label_3100b8;
        case 0x3100bcu: goto label_3100bc;
        case 0x3100c0u: goto label_3100c0;
        case 0x3100c4u: goto label_3100c4;
        case 0x3100c8u: goto label_3100c8;
        case 0x3100ccu: goto label_3100cc;
        case 0x3100d0u: goto label_3100d0;
        case 0x3100d4u: goto label_3100d4;
        case 0x3100d8u: goto label_3100d8;
        case 0x3100dcu: goto label_3100dc;
        case 0x3100e0u: goto label_3100e0;
        case 0x3100e4u: goto label_3100e4;
        case 0x3100e8u: goto label_3100e8;
        case 0x3100ecu: goto label_3100ec;
        case 0x3100f0u: goto label_3100f0;
        case 0x3100f4u: goto label_3100f4;
        case 0x3100f8u: goto label_3100f8;
        case 0x3100fcu: goto label_3100fc;
        case 0x310100u: goto label_310100;
        case 0x310104u: goto label_310104;
        case 0x310108u: goto label_310108;
        case 0x31010cu: goto label_31010c;
        case 0x310110u: goto label_310110;
        case 0x310114u: goto label_310114;
        case 0x310118u: goto label_310118;
        case 0x31011cu: goto label_31011c;
        case 0x310120u: goto label_310120;
        case 0x310124u: goto label_310124;
        case 0x310128u: goto label_310128;
        case 0x31012cu: goto label_31012c;
        case 0x310130u: goto label_310130;
        case 0x310134u: goto label_310134;
        case 0x310138u: goto label_310138;
        case 0x31013cu: goto label_31013c;
        case 0x310140u: goto label_310140;
        case 0x310144u: goto label_310144;
        case 0x310148u: goto label_310148;
        case 0x31014cu: goto label_31014c;
        case 0x310150u: goto label_310150;
        case 0x310154u: goto label_310154;
        case 0x310158u: goto label_310158;
        case 0x31015cu: goto label_31015c;
        case 0x310160u: goto label_310160;
        case 0x310164u: goto label_310164;
        case 0x310168u: goto label_310168;
        case 0x31016cu: goto label_31016c;
        case 0x310170u: goto label_310170;
        case 0x310174u: goto label_310174;
        case 0x310178u: goto label_310178;
        case 0x31017cu: goto label_31017c;
        case 0x310180u: goto label_310180;
        case 0x310184u: goto label_310184;
        case 0x310188u: goto label_310188;
        case 0x31018cu: goto label_31018c;
        case 0x310190u: goto label_310190;
        case 0x310194u: goto label_310194;
        case 0x310198u: goto label_310198;
        case 0x31019cu: goto label_31019c;
        case 0x3101a0u: goto label_3101a0;
        case 0x3101a4u: goto label_3101a4;
        case 0x3101a8u: goto label_3101a8;
        case 0x3101acu: goto label_3101ac;
        case 0x3101b0u: goto label_3101b0;
        case 0x3101b4u: goto label_3101b4;
        case 0x3101b8u: goto label_3101b8;
        case 0x3101bcu: goto label_3101bc;
        case 0x3101c0u: goto label_3101c0;
        case 0x3101c4u: goto label_3101c4;
        case 0x3101c8u: goto label_3101c8;
        case 0x3101ccu: goto label_3101cc;
        case 0x3101d0u: goto label_3101d0;
        case 0x3101d4u: goto label_3101d4;
        case 0x3101d8u: goto label_3101d8;
        case 0x3101dcu: goto label_3101dc;
        case 0x3101e0u: goto label_3101e0;
        case 0x3101e4u: goto label_3101e4;
        case 0x3101e8u: goto label_3101e8;
        case 0x3101ecu: goto label_3101ec;
        case 0x3101f0u: goto label_3101f0;
        case 0x3101f4u: goto label_3101f4;
        case 0x3101f8u: goto label_3101f8;
        case 0x3101fcu: goto label_3101fc;
        case 0x310200u: goto label_310200;
        case 0x310204u: goto label_310204;
        case 0x310208u: goto label_310208;
        case 0x31020cu: goto label_31020c;
        case 0x310210u: goto label_310210;
        case 0x310214u: goto label_310214;
        case 0x310218u: goto label_310218;
        case 0x31021cu: goto label_31021c;
        case 0x310220u: goto label_310220;
        case 0x310224u: goto label_310224;
        case 0x310228u: goto label_310228;
        case 0x31022cu: goto label_31022c;
        case 0x310230u: goto label_310230;
        case 0x310234u: goto label_310234;
        case 0x310238u: goto label_310238;
        case 0x31023cu: goto label_31023c;
        case 0x310240u: goto label_310240;
        case 0x310244u: goto label_310244;
        case 0x310248u: goto label_310248;
        case 0x31024cu: goto label_31024c;
        case 0x310250u: goto label_310250;
        case 0x310254u: goto label_310254;
        case 0x310258u: goto label_310258;
        case 0x31025cu: goto label_31025c;
        case 0x310260u: goto label_310260;
        case 0x310264u: goto label_310264;
        case 0x310268u: goto label_310268;
        case 0x31026cu: goto label_31026c;
        case 0x310270u: goto label_310270;
        case 0x310274u: goto label_310274;
        case 0x310278u: goto label_310278;
        case 0x31027cu: goto label_31027c;
        case 0x310280u: goto label_310280;
        case 0x310284u: goto label_310284;
        case 0x310288u: goto label_310288;
        case 0x31028cu: goto label_31028c;
        case 0x310290u: goto label_310290;
        case 0x310294u: goto label_310294;
        case 0x310298u: goto label_310298;
        case 0x31029cu: goto label_31029c;
        case 0x3102a0u: goto label_3102a0;
        case 0x3102a4u: goto label_3102a4;
        case 0x3102a8u: goto label_3102a8;
        case 0x3102acu: goto label_3102ac;
        case 0x3102b0u: goto label_3102b0;
        case 0x3102b4u: goto label_3102b4;
        case 0x3102b8u: goto label_3102b8;
        case 0x3102bcu: goto label_3102bc;
        case 0x3102c0u: goto label_3102c0;
        case 0x3102c4u: goto label_3102c4;
        case 0x3102c8u: goto label_3102c8;
        case 0x3102ccu: goto label_3102cc;
        case 0x3102d0u: goto label_3102d0;
        case 0x3102d4u: goto label_3102d4;
        case 0x3102d8u: goto label_3102d8;
        case 0x3102dcu: goto label_3102dc;
        case 0x3102e0u: goto label_3102e0;
        case 0x3102e4u: goto label_3102e4;
        case 0x3102e8u: goto label_3102e8;
        case 0x3102ecu: goto label_3102ec;
        case 0x3102f0u: goto label_3102f0;
        case 0x3102f4u: goto label_3102f4;
        case 0x3102f8u: goto label_3102f8;
        case 0x3102fcu: goto label_3102fc;
        case 0x310300u: goto label_310300;
        case 0x310304u: goto label_310304;
        case 0x310308u: goto label_310308;
        case 0x31030cu: goto label_31030c;
        case 0x310310u: goto label_310310;
        case 0x310314u: goto label_310314;
        case 0x310318u: goto label_310318;
        case 0x31031cu: goto label_31031c;
        case 0x310320u: goto label_310320;
        case 0x310324u: goto label_310324;
        case 0x310328u: goto label_310328;
        case 0x31032cu: goto label_31032c;
        case 0x310330u: goto label_310330;
        case 0x310334u: goto label_310334;
        case 0x310338u: goto label_310338;
        case 0x31033cu: goto label_31033c;
        case 0x310340u: goto label_310340;
        case 0x310344u: goto label_310344;
        case 0x310348u: goto label_310348;
        case 0x31034cu: goto label_31034c;
        case 0x310350u: goto label_310350;
        case 0x310354u: goto label_310354;
        case 0x310358u: goto label_310358;
        case 0x31035cu: goto label_31035c;
        case 0x310360u: goto label_310360;
        case 0x310364u: goto label_310364;
        case 0x310368u: goto label_310368;
        case 0x31036cu: goto label_31036c;
        case 0x310370u: goto label_310370;
        case 0x310374u: goto label_310374;
        case 0x310378u: goto label_310378;
        case 0x31037cu: goto label_31037c;
        case 0x310380u: goto label_310380;
        case 0x310384u: goto label_310384;
        case 0x310388u: goto label_310388;
        case 0x31038cu: goto label_31038c;
        case 0x310390u: goto label_310390;
        case 0x310394u: goto label_310394;
        case 0x310398u: goto label_310398;
        case 0x31039cu: goto label_31039c;
        case 0x3103a0u: goto label_3103a0;
        case 0x3103a4u: goto label_3103a4;
        case 0x3103a8u: goto label_3103a8;
        case 0x3103acu: goto label_3103ac;
        case 0x3103b0u: goto label_3103b0;
        case 0x3103b4u: goto label_3103b4;
        case 0x3103b8u: goto label_3103b8;
        case 0x3103bcu: goto label_3103bc;
        case 0x3103c0u: goto label_3103c0;
        case 0x3103c4u: goto label_3103c4;
        case 0x3103c8u: goto label_3103c8;
        case 0x3103ccu: goto label_3103cc;
        case 0x3103d0u: goto label_3103d0;
        case 0x3103d4u: goto label_3103d4;
        case 0x3103d8u: goto label_3103d8;
        case 0x3103dcu: goto label_3103dc;
        case 0x3103e0u: goto label_3103e0;
        case 0x3103e4u: goto label_3103e4;
        case 0x3103e8u: goto label_3103e8;
        case 0x3103ecu: goto label_3103ec;
        case 0x3103f0u: goto label_3103f0;
        case 0x3103f4u: goto label_3103f4;
        case 0x3103f8u: goto label_3103f8;
        case 0x3103fcu: goto label_3103fc;
        case 0x310400u: goto label_310400;
        case 0x310404u: goto label_310404;
        case 0x310408u: goto label_310408;
        case 0x31040cu: goto label_31040c;
        case 0x310410u: goto label_310410;
        case 0x310414u: goto label_310414;
        case 0x310418u: goto label_310418;
        case 0x31041cu: goto label_31041c;
        case 0x310420u: goto label_310420;
        case 0x310424u: goto label_310424;
        case 0x310428u: goto label_310428;
        case 0x31042cu: goto label_31042c;
        case 0x310430u: goto label_310430;
        case 0x310434u: goto label_310434;
        case 0x310438u: goto label_310438;
        case 0x31043cu: goto label_31043c;
        case 0x310440u: goto label_310440;
        case 0x310444u: goto label_310444;
        case 0x310448u: goto label_310448;
        case 0x31044cu: goto label_31044c;
        case 0x310450u: goto label_310450;
        case 0x310454u: goto label_310454;
        case 0x310458u: goto label_310458;
        case 0x31045cu: goto label_31045c;
        case 0x310460u: goto label_310460;
        case 0x310464u: goto label_310464;
        case 0x310468u: goto label_310468;
        case 0x31046cu: goto label_31046c;
        case 0x310470u: goto label_310470;
        case 0x310474u: goto label_310474;
        case 0x310478u: goto label_310478;
        case 0x31047cu: goto label_31047c;
        case 0x310480u: goto label_310480;
        case 0x310484u: goto label_310484;
        case 0x310488u: goto label_310488;
        case 0x31048cu: goto label_31048c;
        case 0x310490u: goto label_310490;
        case 0x310494u: goto label_310494;
        case 0x310498u: goto label_310498;
        case 0x31049cu: goto label_31049c;
        case 0x3104a0u: goto label_3104a0;
        case 0x3104a4u: goto label_3104a4;
        case 0x3104a8u: goto label_3104a8;
        case 0x3104acu: goto label_3104ac;
        case 0x3104b0u: goto label_3104b0;
        case 0x3104b4u: goto label_3104b4;
        case 0x3104b8u: goto label_3104b8;
        case 0x3104bcu: goto label_3104bc;
        case 0x3104c0u: goto label_3104c0;
        case 0x3104c4u: goto label_3104c4;
        case 0x3104c8u: goto label_3104c8;
        case 0x3104ccu: goto label_3104cc;
        case 0x3104d0u: goto label_3104d0;
        case 0x3104d4u: goto label_3104d4;
        case 0x3104d8u: goto label_3104d8;
        case 0x3104dcu: goto label_3104dc;
        case 0x3104e0u: goto label_3104e0;
        case 0x3104e4u: goto label_3104e4;
        case 0x3104e8u: goto label_3104e8;
        case 0x3104ecu: goto label_3104ec;
        case 0x3104f0u: goto label_3104f0;
        case 0x3104f4u: goto label_3104f4;
        case 0x3104f8u: goto label_3104f8;
        case 0x3104fcu: goto label_3104fc;
        case 0x310500u: goto label_310500;
        case 0x310504u: goto label_310504;
        case 0x310508u: goto label_310508;
        case 0x31050cu: goto label_31050c;
        case 0x310510u: goto label_310510;
        case 0x310514u: goto label_310514;
        case 0x310518u: goto label_310518;
        case 0x31051cu: goto label_31051c;
        case 0x310520u: goto label_310520;
        case 0x310524u: goto label_310524;
        case 0x310528u: goto label_310528;
        case 0x31052cu: goto label_31052c;
        case 0x310530u: goto label_310530;
        case 0x310534u: goto label_310534;
        case 0x310538u: goto label_310538;
        case 0x31053cu: goto label_31053c;
        case 0x310540u: goto label_310540;
        case 0x310544u: goto label_310544;
        case 0x310548u: goto label_310548;
        case 0x31054cu: goto label_31054c;
        case 0x310550u: goto label_310550;
        case 0x310554u: goto label_310554;
        case 0x310558u: goto label_310558;
        case 0x31055cu: goto label_31055c;
        case 0x310560u: goto label_310560;
        case 0x310564u: goto label_310564;
        case 0x310568u: goto label_310568;
        case 0x31056cu: goto label_31056c;
        case 0x310570u: goto label_310570;
        case 0x310574u: goto label_310574;
        case 0x310578u: goto label_310578;
        case 0x31057cu: goto label_31057c;
        case 0x310580u: goto label_310580;
        case 0x310584u: goto label_310584;
        case 0x310588u: goto label_310588;
        case 0x31058cu: goto label_31058c;
        case 0x310590u: goto label_310590;
        case 0x310594u: goto label_310594;
        case 0x310598u: goto label_310598;
        case 0x31059cu: goto label_31059c;
        case 0x3105a0u: goto label_3105a0;
        case 0x3105a4u: goto label_3105a4;
        case 0x3105a8u: goto label_3105a8;
        case 0x3105acu: goto label_3105ac;
        case 0x3105b0u: goto label_3105b0;
        case 0x3105b4u: goto label_3105b4;
        case 0x3105b8u: goto label_3105b8;
        case 0x3105bcu: goto label_3105bc;
        case 0x3105c0u: goto label_3105c0;
        case 0x3105c4u: goto label_3105c4;
        case 0x3105c8u: goto label_3105c8;
        case 0x3105ccu: goto label_3105cc;
        case 0x3105d0u: goto label_3105d0;
        case 0x3105d4u: goto label_3105d4;
        case 0x3105d8u: goto label_3105d8;
        case 0x3105dcu: goto label_3105dc;
        case 0x3105e0u: goto label_3105e0;
        case 0x3105e4u: goto label_3105e4;
        case 0x3105e8u: goto label_3105e8;
        case 0x3105ecu: goto label_3105ec;
        case 0x3105f0u: goto label_3105f0;
        case 0x3105f4u: goto label_3105f4;
        case 0x3105f8u: goto label_3105f8;
        case 0x3105fcu: goto label_3105fc;
        case 0x310600u: goto label_310600;
        case 0x310604u: goto label_310604;
        case 0x310608u: goto label_310608;
        case 0x31060cu: goto label_31060c;
        case 0x310610u: goto label_310610;
        case 0x310614u: goto label_310614;
        case 0x310618u: goto label_310618;
        case 0x31061cu: goto label_31061c;
        case 0x310620u: goto label_310620;
        case 0x310624u: goto label_310624;
        case 0x310628u: goto label_310628;
        case 0x31062cu: goto label_31062c;
        case 0x310630u: goto label_310630;
        case 0x310634u: goto label_310634;
        case 0x310638u: goto label_310638;
        case 0x31063cu: goto label_31063c;
        case 0x310640u: goto label_310640;
        case 0x310644u: goto label_310644;
        case 0x310648u: goto label_310648;
        case 0x31064cu: goto label_31064c;
        case 0x310650u: goto label_310650;
        case 0x310654u: goto label_310654;
        case 0x310658u: goto label_310658;
        case 0x31065cu: goto label_31065c;
        case 0x310660u: goto label_310660;
        case 0x310664u: goto label_310664;
        case 0x310668u: goto label_310668;
        case 0x31066cu: goto label_31066c;
        case 0x310670u: goto label_310670;
        case 0x310674u: goto label_310674;
        case 0x310678u: goto label_310678;
        case 0x31067cu: goto label_31067c;
        case 0x310680u: goto label_310680;
        case 0x310684u: goto label_310684;
        case 0x310688u: goto label_310688;
        case 0x31068cu: goto label_31068c;
        case 0x310690u: goto label_310690;
        case 0x310694u: goto label_310694;
        case 0x310698u: goto label_310698;
        case 0x31069cu: goto label_31069c;
        case 0x3106a0u: goto label_3106a0;
        case 0x3106a4u: goto label_3106a4;
        case 0x3106a8u: goto label_3106a8;
        case 0x3106acu: goto label_3106ac;
        case 0x3106b0u: goto label_3106b0;
        case 0x3106b4u: goto label_3106b4;
        case 0x3106b8u: goto label_3106b8;
        case 0x3106bcu: goto label_3106bc;
        case 0x3106c0u: goto label_3106c0;
        case 0x3106c4u: goto label_3106c4;
        case 0x3106c8u: goto label_3106c8;
        case 0x3106ccu: goto label_3106cc;
        case 0x3106d0u: goto label_3106d0;
        case 0x3106d4u: goto label_3106d4;
        case 0x3106d8u: goto label_3106d8;
        case 0x3106dcu: goto label_3106dc;
        default: break;
    }

    ctx->pc = 0x30fd80u;

label_30fd80:
    // 0x30fd80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30fd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_30fd84:
    // 0x30fd84: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x30fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_30fd88:
    // 0x30fd88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30fd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_30fd8c:
    // 0x30fd8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30fd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_30fd90:
    // 0x30fd90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30fd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30fd94:
    // 0x30fd94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30fd94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30fd98:
    // 0x30fd98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30fd9c:
    // 0x30fd9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30fd9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30fda0:
    // 0x30fda0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30fda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30fda4:
    // 0x30fda4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30fda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30fda8:
    // 0x30fda8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x30fda8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_30fdac:
    // 0x30fdac: 0x344591e4  ori         $a1, $v0, 0x91E4
    ctx->pc = 0x30fdacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37348);
label_30fdb0:
    // 0x30fdb0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x30fdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_30fdb4:
    // 0x30fdb4: 0xc10ca68  jal         func_4329A0
label_30fdb8:
    if (ctx->pc == 0x30FDB8u) {
        ctx->pc = 0x30FDB8u;
            // 0x30fdb8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x30FDBCu;
        goto label_30fdbc;
    }
    ctx->pc = 0x30FDB4u;
    SET_GPR_U32(ctx, 31, 0x30FDBCu);
    ctx->pc = 0x30FDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FDB4u;
            // 0x30fdb8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDBCu; }
        if (ctx->pc != 0x30FDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDBCu; }
        if (ctx->pc != 0x30FDBCu) { return; }
    }
    ctx->pc = 0x30FDBCu;
label_30fdbc:
    // 0x30fdbc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x30fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_30fdc0:
    // 0x30fdc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30fdc4:
    // 0x30fdc4: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x30fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_30fdc8:
    // 0x30fdc8: 0x244241f0  addiu       $v0, $v0, 0x41F0
    ctx->pc = 0x30fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16880));
label_30fdcc:
    // 0x30fdcc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x30fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_30fdd0:
    // 0x30fdd0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x30fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_30fdd4:
    // 0x30fdd4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x30fdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_30fdd8:
    // 0x30fdd8: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x30fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_30fddc:
    // 0x30fddc: 0xae6000c0  sw          $zero, 0xC0($s3)
    ctx->pc = 0x30fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 0));
label_30fde0:
    // 0x30fde0: 0xae6000c4  sw          $zero, 0xC4($s3)
    ctx->pc = 0x30fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 0));
label_30fde4:
    // 0x30fde4: 0xae6000c8  sw          $zero, 0xC8($s3)
    ctx->pc = 0x30fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 0));
label_30fde8:
    // 0x30fde8: 0xae7100cc  sw          $s1, 0xCC($s3)
    ctx->pc = 0x30fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 17));
label_30fdec:
    // 0x30fdec: 0xae6000d0  sw          $zero, 0xD0($s3)
    ctx->pc = 0x30fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
label_30fdf0:
    // 0x30fdf0: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_30fdf4:
    if (ctx->pc == 0x30FDF4u) {
        ctx->pc = 0x30FDF4u;
            // 0x30fdf4: 0xae6000d4  sw          $zero, 0xD4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x30FDF8u;
        goto label_30fdf8;
    }
    ctx->pc = 0x30FDF0u;
    {
        const bool branch_taken_0x30fdf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FDF0u;
            // 0x30fdf4: 0xae6000d4  sw          $zero, 0xD4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fdf0) {
            ctx->pc = 0x30FE04u;
            goto label_30fe04;
        }
    }
    ctx->pc = 0x30FDF8u;
label_30fdf8:
    // 0x30fdf8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x30fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_30fdfc:
    // 0x30fdfc: 0x2442bad0  addiu       $v0, $v0, -0x4530
    ctx->pc = 0x30fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949584));
label_30fe00:
    // 0x30fe00: 0xae6200cc  sw          $v0, 0xCC($s3)
    ctx->pc = 0x30fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 2));
label_30fe04:
    // 0x30fe04: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x30fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_30fe08:
    // 0x30fe08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30fe08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fe0c:
    // 0x30fe0c: 0xc04a576  jal         func_1295D8
label_30fe10:
    if (ctx->pc == 0x30FE10u) {
        ctx->pc = 0x30FE10u;
            // 0x30fe10: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x30FE14u;
        goto label_30fe14;
    }
    ctx->pc = 0x30FE0Cu;
    SET_GPR_U32(ctx, 31, 0x30FE14u);
    ctx->pc = 0x30FE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE0Cu;
            // 0x30fe10: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE14u; }
        if (ctx->pc != 0x30FE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE14u; }
        if (ctx->pc != 0x30FE14u) { return; }
    }
    ctx->pc = 0x30FE14u;
label_30fe14:
    // 0x30fe14: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x30fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_30fe18:
    // 0x30fe18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30fe18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fe1c:
    // 0x30fe1c: 0xc04a576  jal         func_1295D8
label_30fe20:
    if (ctx->pc == 0x30FE20u) {
        ctx->pc = 0x30FE20u;
            // 0x30fe20: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x30FE24u;
        goto label_30fe24;
    }
    ctx->pc = 0x30FE1Cu;
    SET_GPR_U32(ctx, 31, 0x30FE24u);
    ctx->pc = 0x30FE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE1Cu;
            // 0x30fe20: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE24u; }
        if (ctx->pc != 0x30FE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE24u; }
        if (ctx->pc != 0x30FE24u) { return; }
    }
    ctx->pc = 0x30FE24u;
label_30fe24:
    // 0x30fe24: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x30fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_30fe28:
    // 0x30fe28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30fe28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fe2c:
    // 0x30fe2c: 0xc04a576  jal         func_1295D8
label_30fe30:
    if (ctx->pc == 0x30FE30u) {
        ctx->pc = 0x30FE30u;
            // 0x30fe30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x30FE34u;
        goto label_30fe34;
    }
    ctx->pc = 0x30FE2Cu;
    SET_GPR_U32(ctx, 31, 0x30FE34u);
    ctx->pc = 0x30FE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE2Cu;
            // 0x30fe30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE34u; }
        if (ctx->pc != 0x30FE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE34u; }
        if (ctx->pc != 0x30FE34u) { return; }
    }
    ctx->pc = 0x30FE34u;
label_30fe34:
    // 0x30fe34: 0x266400b0  addiu       $a0, $s3, 0xB0
    ctx->pc = 0x30fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_30fe38:
    // 0x30fe38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30fe38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fe3c:
    // 0x30fe3c: 0xc04a576  jal         func_1295D8
label_30fe40:
    if (ctx->pc == 0x30FE40u) {
        ctx->pc = 0x30FE40u;
            // 0x30fe40: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x30FE44u;
        goto label_30fe44;
    }
    ctx->pc = 0x30FE3Cu;
    SET_GPR_U32(ctx, 31, 0x30FE44u);
    ctx->pc = 0x30FE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE3Cu;
            // 0x30fe40: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE44u; }
        if (ctx->pc != 0x30FE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE44u; }
        if (ctx->pc != 0x30FE44u) { return; }
    }
    ctx->pc = 0x30FE44u;
label_30fe44:
    // 0x30fe44: 0xa2720060  sb          $s2, 0x60($s3)
    ctx->pc = 0x30fe44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 96), (uint8_t)GPR_U32(ctx, 18));
label_30fe48:
    // 0x30fe48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30fe4c:
    // 0x30fe4c: 0xa6700062  sh          $s0, 0x62($s3)
    ctx->pc = 0x30fe4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 98), (uint16_t)GPR_U32(ctx, 16));
label_30fe50:
    // 0x30fe50: 0x8c423db8  lw          $v0, 0x3DB8($v0)
    ctx->pc = 0x30fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15800)));
label_30fe54:
    // 0x30fe54: 0xae6204b0  sw          $v0, 0x4B0($s3)
    ctx->pc = 0x30fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1200), GPR_U32(ctx, 2));
label_30fe58:
    // 0x30fe58: 0x92620060  lbu         $v0, 0x60($s3)
    ctx->pc = 0x30fe58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
label_30fe5c:
    // 0x30fe5c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x30fe5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_30fe60:
    // 0x30fe60: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
label_30fe64:
    if (ctx->pc == 0x30FE64u) {
        ctx->pc = 0x30FE64u;
            // 0x30fe64: 0x92630060  lbu         $v1, 0x60($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->pc = 0x30FE68u;
        goto label_30fe68;
    }
    ctx->pc = 0x30FE60u;
    {
        const bool branch_taken_0x30fe60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fe60) {
            ctx->pc = 0x30FE64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE60u;
            // 0x30fe64: 0x92630060  lbu         $v1, 0x60($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30FEB8u;
            goto label_30feb8;
        }
    }
    ctx->pc = 0x30FE68u;
label_30fe68:
    // 0x30fe68: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x30fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_30fe6c:
    // 0x30fe6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30fe70:
    // 0x30fe70: 0x2463bb70  addiu       $v1, $v1, -0x4490
    ctx->pc = 0x30fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949744));
label_30fe74:
    // 0x30fe74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30fe78:
    // 0x30fe78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30fe7c:
    // 0x30fe7c: 0x400008  jr          $v0
label_30fe80:
    if (ctx->pc == 0x30FE80u) {
        ctx->pc = 0x30FE84u;
        goto label_30fe84;
    }
    ctx->pc = 0x30FE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30FE84u: goto label_30fe84;
            case 0x30FE94u: goto label_30fe94;
            case 0x30FEB4u: goto label_30feb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x30FE84u;
label_30fe84:
    // 0x30fe84: 0x96620064  lhu         $v0, 0x64($s3)
    ctx->pc = 0x30fe84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 100)));
label_30fe88:
    // 0x30fe88: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x30fe88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_30fe8c:
    // 0x30fe8c: 0x10000009  b           . + 4 + (0x9 << 2)
label_30fe90:
    if (ctx->pc == 0x30FE90u) {
        ctx->pc = 0x30FE90u;
            // 0x30fe90: 0xa6620064  sh          $v0, 0x64($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x30FE94u;
        goto label_30fe94;
    }
    ctx->pc = 0x30FE8Cu;
    {
        const bool branch_taken_0x30fe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE8Cu;
            // 0x30fe90: 0xa6620064  sh          $v0, 0x64($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe8c) {
            ctx->pc = 0x30FEB4u;
            goto label_30feb4;
        }
    }
    ctx->pc = 0x30FE94u;
label_30fe94:
    // 0x30fe94: 0x96630064  lhu         $v1, 0x64($s3)
    ctx->pc = 0x30fe94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 100)));
label_30fe98:
    // 0x30fe98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30fe9c:
    // 0x30fe9c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x30fe9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_30fea0:
    // 0x30fea0: 0xa6630064  sh          $v1, 0x64($s3)
    ctx->pc = 0x30fea0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 100), (uint16_t)GPR_U32(ctx, 3));
label_30fea4:
    // 0x30fea4: 0x8c423dc0  lw          $v0, 0x3DC0($v0)
    ctx->pc = 0x30fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15808)));
label_30fea8:
    // 0x30fea8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_30feac:
    if (ctx->pc == 0x30FEACu) {
        ctx->pc = 0x30FEB0u;
        goto label_30feb0;
    }
    ctx->pc = 0x30FEA8u;
    {
        const bool branch_taken_0x30fea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fea8) {
            ctx->pc = 0x30FEB4u;
            goto label_30feb4;
        }
    }
    ctx->pc = 0x30FEB0u;
label_30feb0:
    // 0x30feb0: 0xae6204b0  sw          $v0, 0x4B0($s3)
    ctx->pc = 0x30feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1200), GPR_U32(ctx, 2));
label_30feb4:
    // 0x30feb4: 0x92630060  lbu         $v1, 0x60($s3)
    ctx->pc = 0x30feb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
label_30feb8:
    // 0x30feb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30febc:
    // 0x30febc: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_30fec0:
    if (ctx->pc == 0x30FEC0u) {
        ctx->pc = 0x30FEC0u;
            // 0x30fec0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30FEC4u;
        goto label_30fec4;
    }
    ctx->pc = 0x30FEBCu;
    {
        const bool branch_taken_0x30febc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30febc) {
            ctx->pc = 0x30FEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30FEBCu;
            // 0x30fec0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30FEF4u;
            goto label_30fef4;
        }
    }
    ctx->pc = 0x30FEC4u;
label_30fec4:
    // 0x30fec4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30fec8:
    // 0x30fec8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x30fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_30fecc:
    // 0x30fecc: 0x8c420788  lw          $v0, 0x788($v0)
    ctx->pc = 0x30feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_30fed0:
    // 0x30fed0: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x30fed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_30fed4:
    // 0x30fed4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_30fed8:
    if (ctx->pc == 0x30FED8u) {
        ctx->pc = 0x30FEDCu;
        goto label_30fedc;
    }
    ctx->pc = 0x30FED4u;
    {
        const bool branch_taken_0x30fed4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fed4) {
            ctx->pc = 0x30FEF0u;
            goto label_30fef0;
        }
    }
    ctx->pc = 0x30FEDCu;
label_30fedc:
    // 0x30fedc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x30fedcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30fee0:
    // 0x30fee0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30fee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30fee4:
    // 0x30fee4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x30fee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_30fee8:
    // 0x30fee8: 0x320f809  jalr        $t9
label_30feec:
    if (ctx->pc == 0x30FEECu) {
        ctx->pc = 0x30FEECu;
            // 0x30feec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30FEF0u;
        goto label_30fef0;
    }
    ctx->pc = 0x30FEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30FEF0u);
        ctx->pc = 0x30FEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FEE8u;
            // 0x30feec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30FEF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30FEF0u; }
            if (ctx->pc != 0x30FEF0u) { return; }
        }
        }
    }
    ctx->pc = 0x30FEF0u;
label_30fef0:
    // 0x30fef0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x30fef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30fef4:
    // 0x30fef4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30fef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_30fef8:
    // 0x30fef8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30fef8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30fefc:
    // 0x30fefc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30fefcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30ff00:
    // 0x30ff00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30ff00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30ff04:
    // 0x30ff04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ff04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30ff08:
    // 0x30ff08: 0x3e00008  jr          $ra
label_30ff0c:
    if (ctx->pc == 0x30FF0Cu) {
        ctx->pc = 0x30FF0Cu;
            // 0x30ff0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x30FF10u;
        goto label_30ff10;
    }
    ctx->pc = 0x30FF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF08u;
            // 0x30ff0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30FF10u;
label_30ff10:
    // 0x30ff10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30ff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30ff14:
    // 0x30ff14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30ff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30ff18:
    // 0x30ff18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ff18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30ff1c:
    // 0x30ff1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30ff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30ff20:
    // 0x30ff20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30ff20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30ff24:
    // 0x30ff24: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_30ff28:
    if (ctx->pc == 0x30FF28u) {
        ctx->pc = 0x30FF28u;
            // 0x30ff28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30FF2Cu;
        goto label_30ff2c;
    }
    ctx->pc = 0x30FF24u;
    {
        const bool branch_taken_0x30ff24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF24u;
            // 0x30ff28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff24) {
            ctx->pc = 0x30FF68u;
            goto label_30ff68;
        }
    }
    ctx->pc = 0x30FF2Cu;
label_30ff2c:
    // 0x30ff2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30ff30:
    // 0x30ff30: 0x244241c0  addiu       $v0, $v0, 0x41C0
    ctx->pc = 0x30ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16832));
label_30ff34:
    // 0x30ff34: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_30ff38:
    if (ctx->pc == 0x30FF38u) {
        ctx->pc = 0x30FF38u;
            // 0x30ff38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30FF3Cu;
        goto label_30ff3c;
    }
    ctx->pc = 0x30FF34u;
    {
        const bool branch_taken_0x30ff34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF34u;
            // 0x30ff38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff34) {
            ctx->pc = 0x30FF50u;
            goto label_30ff50;
        }
    }
    ctx->pc = 0x30FF3Cu;
label_30ff3c:
    // 0x30ff3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30ff40:
    // 0x30ff40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ff40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30ff44:
    // 0x30ff44: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x30ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_30ff48:
    // 0x30ff48: 0xc057a68  jal         func_15E9A0
label_30ff4c:
    if (ctx->pc == 0x30FF4Cu) {
        ctx->pc = 0x30FF4Cu;
            // 0x30ff4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30FF50u;
        goto label_30ff50;
    }
    ctx->pc = 0x30FF48u;
    SET_GPR_U32(ctx, 31, 0x30FF50u);
    ctx->pc = 0x30FF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF48u;
            // 0x30ff4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF50u; }
        if (ctx->pc != 0x30FF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF50u; }
        if (ctx->pc != 0x30FF50u) { return; }
    }
    ctx->pc = 0x30FF50u;
label_30ff50:
    // 0x30ff50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x30ff50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_30ff54:
    // 0x30ff54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30ff54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_30ff58:
    // 0x30ff58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_30ff5c:
    if (ctx->pc == 0x30FF5Cu) {
        ctx->pc = 0x30FF5Cu;
            // 0x30ff5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30FF60u;
        goto label_30ff60;
    }
    ctx->pc = 0x30FF58u;
    {
        const bool branch_taken_0x30ff58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30ff58) {
            ctx->pc = 0x30FF5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF58u;
            // 0x30ff5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30FF6Cu;
            goto label_30ff6c;
        }
    }
    ctx->pc = 0x30FF60u;
label_30ff60:
    // 0x30ff60: 0xc0400a8  jal         func_1002A0
label_30ff64:
    if (ctx->pc == 0x30FF64u) {
        ctx->pc = 0x30FF64u;
            // 0x30ff64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30FF68u;
        goto label_30ff68;
    }
    ctx->pc = 0x30FF60u;
    SET_GPR_U32(ctx, 31, 0x30FF68u);
    ctx->pc = 0x30FF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF60u;
            // 0x30ff64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF68u; }
        if (ctx->pc != 0x30FF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF68u; }
        if (ctx->pc != 0x30FF68u) { return; }
    }
    ctx->pc = 0x30FF68u;
label_30ff68:
    // 0x30ff68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30ff68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30ff6c:
    // 0x30ff6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30ff6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30ff70:
    // 0x30ff70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30ff70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30ff74:
    // 0x30ff74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ff74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30ff78:
    // 0x30ff78: 0x3e00008  jr          $ra
label_30ff7c:
    if (ctx->pc == 0x30FF7Cu) {
        ctx->pc = 0x30FF7Cu;
            // 0x30ff7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x30FF80u;
        goto label_30ff80;
    }
    ctx->pc = 0x30FF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF78u;
            // 0x30ff7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30FF80u;
label_30ff80:
    // 0x30ff80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30ff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_30ff84:
    // 0x30ff84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30ff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30ff88:
    // 0x30ff88: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30ff88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_30ff8c:
    // 0x30ff8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30ff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30ff90:
    // 0x30ff90: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x30ff90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_30ff94:
    // 0x30ff94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30ff94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30ff98:
    // 0x30ff98: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x30ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_30ff9c:
    // 0x30ff9c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30ffa0:
    // 0x30ffa0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x30ffa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_30ffa4:
    // 0x30ffa4: 0x2484f668  addiu       $a0, $a0, -0x998
    ctx->pc = 0x30ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964840));
label_30ffa8:
    // 0x30ffa8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30ffac:
    // 0x30ffac: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x30ffacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_30ffb0:
    // 0x30ffb0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x30ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_30ffb4:
    // 0x30ffb4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30ffb8:
    // 0x30ffb8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x30ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_30ffbc:
    // 0x30ffbc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x30ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_30ffc0:
    // 0x30ffc0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x30ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_30ffc4:
    // 0x30ffc4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x30ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_30ffc8:
    // 0x30ffc8: 0xc075128  jal         func_1D44A0
label_30ffcc:
    if (ctx->pc == 0x30FFCCu) {
        ctx->pc = 0x30FFCCu;
            // 0x30ffcc: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x30FFD0u;
        goto label_30ffd0;
    }
    ctx->pc = 0x30FFC8u;
    SET_GPR_U32(ctx, 31, 0x30FFD0u);
    ctx->pc = 0x30FFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FFC8u;
            // 0x30ffcc: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FFD0u; }
        if (ctx->pc != 0x30FFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FFD0u; }
        if (ctx->pc != 0x30FFD0u) { return; }
    }
    ctx->pc = 0x30FFD0u;
label_30ffd0:
    // 0x30ffd0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x30ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_30ffd4:
    // 0x30ffd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30ffd8:
    // 0x30ffd8: 0x8c65f668  lw          $a1, -0x998($v1)
    ctx->pc = 0x30ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964840)));
label_30ffdc:
    // 0x30ffdc: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x30ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_30ffe0:
    // 0x30ffe0: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x30ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_30ffe4:
    // 0x30ffe4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x30ffe4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_30ffe8:
    // 0x30ffe8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_30ffec:
    if (ctx->pc == 0x30FFECu) {
        ctx->pc = 0x30FFF0u;
        goto label_30fff0;
    }
    ctx->pc = 0x30FFE8u;
    {
        const bool branch_taken_0x30ffe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ffe8) {
            ctx->pc = 0x30FFF8u;
            goto label_30fff8;
        }
    }
    ctx->pc = 0x30FFF0u;
label_30fff0:
    // 0x30fff0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30fff4:
    // 0x30fff4: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x30fff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_30fff8:
    // 0x30fff8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30fffc:
    // 0x30fffc: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x30fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_310000:
    // 0x310000: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x310000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_310004:
    // 0x310004: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x310004u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_310008:
    // 0x310008: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31000c:
    if (ctx->pc == 0x31000Cu) {
        ctx->pc = 0x31000Cu;
            // 0x31000c: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->pc = 0x310010u;
        goto label_310010;
    }
    ctx->pc = 0x310008u;
    {
        const bool branch_taken_0x310008 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31000Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310008u;
            // 0x31000c: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310008) {
            ctx->pc = 0x310018u;
            goto label_310018;
        }
    }
    ctx->pc = 0x310010u;
label_310010:
    // 0x310010: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310014:
    // 0x310014: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x310014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_310018:
    // 0x310018: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_31001c:
    // 0x31001c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_310020:
    // 0x310020: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x310020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_310024:
    // 0x310024: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x310024u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_310028:
    // 0x310028: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31002c:
    if (ctx->pc == 0x31002Cu) {
        ctx->pc = 0x310030u;
        goto label_310030;
    }
    ctx->pc = 0x310028u;
    {
        const bool branch_taken_0x310028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x310028) {
            ctx->pc = 0x310038u;
            goto label_310038;
        }
    }
    ctx->pc = 0x310030u;
label_310030:
    // 0x310030: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310034:
    // 0x310034: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x310034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_310038:
    // 0x310038: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_31003c:
    // 0x31003c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31003cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_310040:
    // 0x310040: 0x8c42e3a0  lw          $v0, -0x1C60($v0)
    ctx->pc = 0x310040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960032)));
label_310044:
    // 0x310044: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x310044u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_310048:
    // 0x310048: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_31004c:
    if (ctx->pc == 0x31004Cu) {
        ctx->pc = 0x31004Cu;
            // 0x31004c: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x310050u;
        goto label_310050;
    }
    ctx->pc = 0x310048u;
    {
        const bool branch_taken_0x310048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x310048) {
            ctx->pc = 0x31004Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310048u;
            // 0x31004c: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31005Cu;
            goto label_31005c;
        }
    }
    ctx->pc = 0x310050u;
label_310050:
    // 0x310050: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310054:
    // 0x310054: 0xac43e3a0  sw          $v1, -0x1C60($v0)
    ctx->pc = 0x310054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960032), GPR_U32(ctx, 3));
label_310058:
    // 0x310058: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x310058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_31005c:
    // 0x31005c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x31005cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_310060:
    // 0x310060: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x310060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_310064:
    // 0x310064: 0x2484f648  addiu       $a0, $a0, -0x9B8
    ctx->pc = 0x310064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964808));
label_310068:
    // 0x310068: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x310068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_31006c:
    // 0x31006c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x31006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_310070:
    // 0x310070: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x310070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_310074:
    // 0x310074: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x310074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_310078:
    // 0x310078: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x310078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_31007c:
    // 0x31007c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31007cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_310080:
    // 0x310080: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x310080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_310084:
    // 0x310084: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x310084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_310088:
    // 0x310088: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x310088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_31008c:
    // 0x31008c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_310090:
    // 0x310090: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x310090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_310094:
    // 0x310094: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x310094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_310098:
    // 0x310098: 0xc075128  jal         func_1D44A0
label_31009c:
    if (ctx->pc == 0x31009Cu) {
        ctx->pc = 0x31009Cu;
            // 0x31009c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x3100A0u;
        goto label_3100a0;
    }
    ctx->pc = 0x310098u;
    SET_GPR_U32(ctx, 31, 0x3100A0u);
    ctx->pc = 0x31009Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310098u;
            // 0x31009c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3100A0u; }
        if (ctx->pc != 0x3100A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3100A0u; }
        if (ctx->pc != 0x3100A0u) { return; }
    }
    ctx->pc = 0x3100A0u;
label_3100a0:
    // 0x3100a0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3100a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3100a4:
    // 0x3100a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3100a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3100a8:
    // 0x3100a8: 0x8c86f648  lw          $a2, -0x9B8($a0)
    ctx->pc = 0x3100a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964808)));
label_3100ac:
    // 0x3100ac: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x3100acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_3100b0:
    // 0x3100b0: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x3100b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_3100b4:
    // 0x3100b4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3100b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3100b8:
    // 0x3100b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3100bc:
    if (ctx->pc == 0x3100BCu) {
        ctx->pc = 0x3100C0u;
        goto label_3100c0;
    }
    ctx->pc = 0x3100B8u;
    {
        const bool branch_taken_0x3100b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3100b8) {
            ctx->pc = 0x3100C8u;
            goto label_3100c8;
        }
    }
    ctx->pc = 0x3100C0u;
label_3100c0:
    // 0x3100c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3100c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3100c4:
    // 0x3100c4: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x3100c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_3100c8:
    // 0x3100c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3100c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3100cc:
    // 0x3100cc: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x3100ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_3100d0:
    // 0x3100d0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3100d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3100d4:
    // 0x3100d4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3100d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3100d8:
    // 0x3100d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3100dc:
    if (ctx->pc == 0x3100DCu) {
        ctx->pc = 0x3100DCu;
            // 0x3100dc: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x3100E0u;
        goto label_3100e0;
    }
    ctx->pc = 0x3100D8u;
    {
        const bool branch_taken_0x3100d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3100DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3100D8u;
            // 0x3100dc: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100d8) {
            ctx->pc = 0x3100E8u;
            goto label_3100e8;
        }
    }
    ctx->pc = 0x3100E0u;
label_3100e0:
    // 0x3100e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3100e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3100e4:
    // 0x3100e4: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3100e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3100e8:
    // 0x3100e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3100e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3100ec:
    // 0x3100ec: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3100ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3100f0:
    // 0x3100f0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3100f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3100f4:
    // 0x3100f4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3100f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3100f8:
    // 0x3100f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3100fc:
    if (ctx->pc == 0x3100FCu) {
        ctx->pc = 0x310100u;
        goto label_310100;
    }
    ctx->pc = 0x3100F8u;
    {
        const bool branch_taken_0x3100f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3100f8) {
            ctx->pc = 0x310108u;
            goto label_310108;
        }
    }
    ctx->pc = 0x310100u;
label_310100:
    // 0x310100: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x310100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_310104:
    // 0x310104: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x310104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_310108:
    // 0x310108: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x310108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31010c:
    // 0x31010c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x31010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_310110:
    // 0x310110: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x310110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_310114:
    // 0x310114: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x310114u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_310118:
    // 0x310118: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_31011c:
    if (ctx->pc == 0x31011Cu) {
        ctx->pc = 0x31011Cu;
            // 0x31011c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x310120u;
        goto label_310120;
    }
    ctx->pc = 0x310118u;
    {
        const bool branch_taken_0x310118 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x310118) {
            ctx->pc = 0x31011Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310118u;
            // 0x31011c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31012Cu;
            goto label_31012c;
        }
    }
    ctx->pc = 0x310120u;
label_310120:
    // 0x310120: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x310120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_310124:
    // 0x310124: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x310124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_310128:
    // 0x310128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31012c:
    // 0x31012c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31012cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_310130:
    // 0x310130: 0x3e00008  jr          $ra
label_310134:
    if (ctx->pc == 0x310134u) {
        ctx->pc = 0x310134u;
            // 0x310134: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x310138u;
        goto label_310138;
    }
    ctx->pc = 0x310130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310130u;
            // 0x310134: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310138u;
label_310138:
    // 0x310138: 0x0  nop
    ctx->pc = 0x310138u;
    // NOP
label_31013c:
    // 0x31013c: 0x0  nop
    ctx->pc = 0x31013cu;
    // NOP
label_310140:
    // 0x310140: 0x3e00008  jr          $ra
label_310144:
    if (ctx->pc == 0x310144u) {
        ctx->pc = 0x310148u;
        goto label_310148;
    }
    ctx->pc = 0x310140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310148u;
label_310148:
    // 0x310148: 0x0  nop
    ctx->pc = 0x310148u;
    // NOP
label_31014c:
    // 0x31014c: 0x0  nop
    ctx->pc = 0x31014cu;
    // NOP
label_310150:
    // 0x310150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x310150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_310154:
    // 0x310154: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x310154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_310158:
    // 0x310158: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x310158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31015c:
    // 0x31015c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_310160:
    // 0x310160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_310164:
    // 0x310164: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x310164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_310168:
    // 0x310168: 0xc075830  jal         func_1D60C0
label_31016c:
    if (ctx->pc == 0x31016Cu) {
        ctx->pc = 0x31016Cu;
            // 0x31016c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x310170u;
        goto label_310170;
    }
    ctx->pc = 0x310168u;
    SET_GPR_U32(ctx, 31, 0x310170u);
    ctx->pc = 0x31016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310168u;
            // 0x31016c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D60C0u;
    if (runtime->hasFunction(0x1D60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310170u; }
        if (ctx->pc != 0x310170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D60C0_0x1d60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310170u; }
        if (ctx->pc != 0x310170u) { return; }
    }
    ctx->pc = 0x310170u;
label_310170:
    // 0x310170: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x310170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_310174:
    // 0x310174: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x310174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_310178:
    // 0x310178: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x310178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_31017c:
    // 0x31017c: 0x820511ad  lb          $a1, 0x11AD($s0)
    ctx->pc = 0x31017cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4525)));
label_310180:
    // 0x310180: 0x8e030e30  lw          $v1, 0xE30($s0)
    ctx->pc = 0x310180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3632)));
label_310184:
    // 0x310184: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x310184u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_310188:
    // 0x310188: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x310188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_31018c:
    // 0x31018c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x31018cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_310190:
    // 0x310190: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_310194:
    if (ctx->pc == 0x310194u) {
        ctx->pc = 0x310194u;
            // 0x310194: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x310198u;
        goto label_310198;
    }
    ctx->pc = 0x310190u;
    {
        const bool branch_taken_0x310190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x310194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310190u;
            // 0x310194: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310190) {
            ctx->pc = 0x3101D0u;
            goto label_3101d0;
        }
    }
    ctx->pc = 0x310198u;
label_310198:
    // 0x310198: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x310198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_31019c:
    // 0x31019c: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x31019cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3101a0:
    // 0x3101a0: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x3101a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3101a4:
    // 0x3101a4: 0x24a5f648  addiu       $a1, $a1, -0x9B8
    ctx->pc = 0x3101a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964808));
label_3101a8:
    // 0x3101a8: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x3101a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3101ac:
    // 0x3101ac: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x3101acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3101b0:
    // 0x3101b0: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x3101b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3101b4:
    // 0x3101b4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3101b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3101b8:
    // 0x3101b8: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x3101b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_3101bc:
    // 0x3101bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3101bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3101c0:
    // 0x3101c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3101c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3101c4:
    // 0x3101c4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3101c8:
    if (ctx->pc == 0x3101C8u) {
        ctx->pc = 0x3101C8u;
            // 0x3101c8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3101CCu;
        goto label_3101cc;
    }
    ctx->pc = 0x3101C4u;
    {
        const bool branch_taken_0x3101c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3101c4) {
            ctx->pc = 0x3101C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3101C4u;
            // 0x3101c8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3101D4u;
            goto label_3101d4;
        }
    }
    ctx->pc = 0x3101CCu;
label_3101cc:
    // 0x3101cc: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x3101ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_3101d0:
    // 0x3101d0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3101d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3101d4:
    // 0x3101d4: 0x5043006c  beql        $v0, $v1, . + 4 + (0x6C << 2)
label_3101d8:
    if (ctx->pc == 0x3101D8u) {
        ctx->pc = 0x3101D8u;
            // 0x3101d8: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x3101DCu;
        goto label_3101dc;
    }
    ctx->pc = 0x3101D4u;
    {
        const bool branch_taken_0x3101d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3101d4) {
            ctx->pc = 0x3101D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3101D4u;
            // 0x3101d8: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x310388u;
            goto label_310388;
        }
    }
    ctx->pc = 0x3101DCu;
label_3101dc:
    // 0x3101dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3101dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3101e0:
    // 0x3101e0: 0x5043003b  beql        $v0, $v1, . + 4 + (0x3B << 2)
label_3101e4:
    if (ctx->pc == 0x3101E4u) {
        ctx->pc = 0x3101E4u;
            // 0x3101e4: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x3101E8u;
        goto label_3101e8;
    }
    ctx->pc = 0x3101E0u;
    {
        const bool branch_taken_0x3101e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3101e0) {
            ctx->pc = 0x3101E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3101E0u;
            // 0x3101e4: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3102D0u;
            goto label_3102d0;
        }
    }
    ctx->pc = 0x3101E8u;
label_3101e8:
    // 0x3101e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3101e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3101ec:
    // 0x3101ec: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_3101f0:
    if (ctx->pc == 0x3101F0u) {
        ctx->pc = 0x3101F0u;
            // 0x3101f0: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x3101F4u;
        goto label_3101f4;
    }
    ctx->pc = 0x3101ECu;
    {
        const bool branch_taken_0x3101ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3101ec) {
            ctx->pc = 0x3101F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3101ECu;
            // 0x3101f0: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3101FCu;
            goto label_3101fc;
        }
    }
    ctx->pc = 0x3101F4u;
label_3101f4:
    // 0x3101f4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_3101f8:
    if (ctx->pc == 0x3101F8u) {
        ctx->pc = 0x3101F8u;
            // 0x3101f8: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x3101FCu;
        goto label_3101fc;
    }
    ctx->pc = 0x3101F4u;
    {
        const bool branch_taken_0x3101f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3101F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3101F4u;
            // 0x3101f8: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101f4) {
            ctx->pc = 0x3103A8u;
            goto label_3103a8;
        }
    }
    ctx->pc = 0x3101FCu;
label_3101fc:
    // 0x3101fc: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x3101fcu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_310200:
    // 0x310200: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_310204:
    if (ctx->pc == 0x310204u) {
        ctx->pc = 0x310204u;
            // 0x310204: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310208u;
        goto label_310208;
    }
    ctx->pc = 0x310200u;
    {
        const bool branch_taken_0x310200 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x310204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310200u;
            // 0x310204: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310200) {
            ctx->pc = 0x310218u;
            goto label_310218;
        }
    }
    ctx->pc = 0x310208u;
label_310208:
    // 0x310208: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x310208u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_31020c:
    // 0x31020c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_310210:
    if (ctx->pc == 0x310210u) {
        ctx->pc = 0x310214u;
        goto label_310214;
    }
    ctx->pc = 0x31020Cu;
    {
        const bool branch_taken_0x31020c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31020c) {
            ctx->pc = 0x310218u;
            goto label_310218;
        }
    }
    ctx->pc = 0x310214u;
label_310214:
    // 0x310214: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x310214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_310218:
    // 0x310218: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_31021c:
    if (ctx->pc == 0x31021Cu) {
        ctx->pc = 0x310220u;
        goto label_310220;
    }
    ctx->pc = 0x310218u;
    {
        const bool branch_taken_0x310218 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x310218) {
            ctx->pc = 0x310234u;
            goto label_310234;
        }
    }
    ctx->pc = 0x310220u;
label_310220:
    // 0x310220: 0xc075eb4  jal         func_1D7AD0
label_310224:
    if (ctx->pc == 0x310224u) {
        ctx->pc = 0x310224u;
            // 0x310224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310228u;
        goto label_310228;
    }
    ctx->pc = 0x310220u;
    SET_GPR_U32(ctx, 31, 0x310228u);
    ctx->pc = 0x310224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310220u;
            // 0x310224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310228u; }
        if (ctx->pc != 0x310228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310228u; }
        if (ctx->pc != 0x310228u) { return; }
    }
    ctx->pc = 0x310228u;
label_310228:
    // 0x310228: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_31022c:
    if (ctx->pc == 0x31022Cu) {
        ctx->pc = 0x310230u;
        goto label_310230;
    }
    ctx->pc = 0x310228u;
    {
        const bool branch_taken_0x310228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x310228) {
            ctx->pc = 0x310234u;
            goto label_310234;
        }
    }
    ctx->pc = 0x310230u;
label_310230:
    // 0x310230: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x310230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310234:
    // 0x310234: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_310238:
    if (ctx->pc == 0x310238u) {
        ctx->pc = 0x310238u;
            // 0x310238: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->pc = 0x31023Cu;
        goto label_31023c;
    }
    ctx->pc = 0x310234u;
    {
        const bool branch_taken_0x310234 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x310234) {
            ctx->pc = 0x310238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310234u;
            // 0x310238: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3102A4u;
            goto label_3102a4;
        }
    }
    ctx->pc = 0x31023Cu;
label_31023c:
    // 0x31023c: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x31023cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_310240:
    // 0x310240: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x310240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_310244:
    // 0x310244: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_310248:
    if (ctx->pc == 0x310248u) {
        ctx->pc = 0x31024Cu;
        goto label_31024c;
    }
    ctx->pc = 0x310244u;
    {
        const bool branch_taken_0x310244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310244) {
            ctx->pc = 0x3102A0u;
            goto label_3102a0;
        }
    }
    ctx->pc = 0x31024Cu;
label_31024c:
    // 0x31024c: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x31024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_310250:
    // 0x310250: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x310250u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_310254:
    // 0x310254: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_310258:
    if (ctx->pc == 0x310258u) {
        ctx->pc = 0x310258u;
            // 0x310258: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31025Cu;
        goto label_31025c;
    }
    ctx->pc = 0x310254u;
    {
        const bool branch_taken_0x310254 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x310258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310254u;
            // 0x310258: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310254) {
            ctx->pc = 0x31026Cu;
            goto label_31026c;
        }
    }
    ctx->pc = 0x31025Cu;
label_31025c:
    // 0x31025c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x31025cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_310260:
    // 0x310260: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_310264:
    if (ctx->pc == 0x310264u) {
        ctx->pc = 0x310268u;
        goto label_310268;
    }
    ctx->pc = 0x310260u;
    {
        const bool branch_taken_0x310260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x310260) {
            ctx->pc = 0x31026Cu;
            goto label_31026c;
        }
    }
    ctx->pc = 0x310268u;
label_310268:
    // 0x310268: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x310268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31026c:
    // 0x31026c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_310270:
    if (ctx->pc == 0x310270u) {
        ctx->pc = 0x310274u;
        goto label_310274;
    }
    ctx->pc = 0x31026Cu;
    {
        const bool branch_taken_0x31026c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31026c) {
            ctx->pc = 0x310288u;
            goto label_310288;
        }
    }
    ctx->pc = 0x310274u;
label_310274:
    // 0x310274: 0xc075eb4  jal         func_1D7AD0
label_310278:
    if (ctx->pc == 0x310278u) {
        ctx->pc = 0x310278u;
            // 0x310278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31027Cu;
        goto label_31027c;
    }
    ctx->pc = 0x310274u;
    SET_GPR_U32(ctx, 31, 0x31027Cu);
    ctx->pc = 0x310278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310274u;
            // 0x310278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31027Cu; }
        if (ctx->pc != 0x31027Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31027Cu; }
        if (ctx->pc != 0x31027Cu) { return; }
    }
    ctx->pc = 0x31027Cu;
label_31027c:
    // 0x31027c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_310280:
    if (ctx->pc == 0x310280u) {
        ctx->pc = 0x310284u;
        goto label_310284;
    }
    ctx->pc = 0x31027Cu;
    {
        const bool branch_taken_0x31027c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31027c) {
            ctx->pc = 0x310288u;
            goto label_310288;
        }
    }
    ctx->pc = 0x310284u;
label_310284:
    // 0x310284: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x310284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310288:
    // 0x310288: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_31028c:
    if (ctx->pc == 0x31028Cu) {
        ctx->pc = 0x310290u;
        goto label_310290;
    }
    ctx->pc = 0x310288u;
    {
        const bool branch_taken_0x310288 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x310288) {
            ctx->pc = 0x3102A0u;
            goto label_3102a0;
        }
    }
    ctx->pc = 0x310290u;
label_310290:
    // 0x310290: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x310290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_310294:
    // 0x310294: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x310294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_310298:
    // 0x310298: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_31029c:
    if (ctx->pc == 0x31029Cu) {
        ctx->pc = 0x31029Cu;
            // 0x31029c: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x3102A0u;
        goto label_3102a0;
    }
    ctx->pc = 0x310298u;
    {
        const bool branch_taken_0x310298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x310298) {
            ctx->pc = 0x31029Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310298u;
            // 0x31029c: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3102B0u;
            goto label_3102b0;
        }
    }
    ctx->pc = 0x3102A0u;
label_3102a0:
    // 0x3102a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x3102a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_3102a4:
    // 0x3102a4: 0xc073234  jal         func_1CC8D0
label_3102a8:
    if (ctx->pc == 0x3102A8u) {
        ctx->pc = 0x3102A8u;
            // 0x3102a8: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x3102ACu;
        goto label_3102ac;
    }
    ctx->pc = 0x3102A4u;
    SET_GPR_U32(ctx, 31, 0x3102ACu);
    ctx->pc = 0x3102A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3102A4u;
            // 0x3102a8: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3102ACu; }
        if (ctx->pc != 0x3102ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3102ACu; }
        if (ctx->pc != 0x3102ACu) { return; }
    }
    ctx->pc = 0x3102ACu;
label_3102ac:
    // 0x3102ac: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x3102acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3102b0:
    // 0x3102b0: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3102b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3102b4:
    // 0x3102b4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3102b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3102b8:
    // 0x3102b8: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x3102b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_3102bc:
    // 0x3102bc: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x3102bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3102c0:
    // 0x3102c0: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3102c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3102c4:
    // 0x3102c4: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x3102c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_3102c8:
    // 0x3102c8: 0x10000036  b           . + 4 + (0x36 << 2)
label_3102cc:
    if (ctx->pc == 0x3102CCu) {
        ctx->pc = 0x3102CCu;
            // 0x3102cc: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3102D0u;
        goto label_3102d0;
    }
    ctx->pc = 0x3102C8u;
    {
        const bool branch_taken_0x3102c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3102CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3102C8u;
            // 0x3102cc: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102c8) {
            ctx->pc = 0x3103A4u;
            goto label_3103a4;
        }
    }
    ctx->pc = 0x3102D0u;
label_3102d0:
    // 0x3102d0: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x3102d0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3102d4:
    // 0x3102d4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3102d8:
    if (ctx->pc == 0x3102D8u) {
        ctx->pc = 0x3102D8u;
            // 0x3102d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3102DCu;
        goto label_3102dc;
    }
    ctx->pc = 0x3102D4u;
    {
        const bool branch_taken_0x3102d4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3102D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3102D4u;
            // 0x3102d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102d4) {
            ctx->pc = 0x3102ECu;
            goto label_3102ec;
        }
    }
    ctx->pc = 0x3102DCu;
label_3102dc:
    // 0x3102dc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3102dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3102e0:
    // 0x3102e0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3102e4:
    if (ctx->pc == 0x3102E4u) {
        ctx->pc = 0x3102E8u;
        goto label_3102e8;
    }
    ctx->pc = 0x3102E0u;
    {
        const bool branch_taken_0x3102e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3102e0) {
            ctx->pc = 0x3102ECu;
            goto label_3102ec;
        }
    }
    ctx->pc = 0x3102E8u;
label_3102e8:
    // 0x3102e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3102e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3102ec:
    // 0x3102ec: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3102f0:
    if (ctx->pc == 0x3102F0u) {
        ctx->pc = 0x3102F4u;
        goto label_3102f4;
    }
    ctx->pc = 0x3102ECu;
    {
        const bool branch_taken_0x3102ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3102ec) {
            ctx->pc = 0x310308u;
            goto label_310308;
        }
    }
    ctx->pc = 0x3102F4u;
label_3102f4:
    // 0x3102f4: 0xc075eb4  jal         func_1D7AD0
label_3102f8:
    if (ctx->pc == 0x3102F8u) {
        ctx->pc = 0x3102F8u;
            // 0x3102f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3102FCu;
        goto label_3102fc;
    }
    ctx->pc = 0x3102F4u;
    SET_GPR_U32(ctx, 31, 0x3102FCu);
    ctx->pc = 0x3102F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3102F4u;
            // 0x3102f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3102FCu; }
        if (ctx->pc != 0x3102FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3102FCu; }
        if (ctx->pc != 0x3102FCu) { return; }
    }
    ctx->pc = 0x3102FCu;
label_3102fc:
    // 0x3102fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_310300:
    if (ctx->pc == 0x310300u) {
        ctx->pc = 0x310304u;
        goto label_310304;
    }
    ctx->pc = 0x3102FCu;
    {
        const bool branch_taken_0x3102fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3102fc) {
            ctx->pc = 0x310308u;
            goto label_310308;
        }
    }
    ctx->pc = 0x310304u;
label_310304:
    // 0x310304: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x310304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310308:
    // 0x310308: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_31030c:
    if (ctx->pc == 0x31030Cu) {
        ctx->pc = 0x31030Cu;
            // 0x31030c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->pc = 0x310310u;
        goto label_310310;
    }
    ctx->pc = 0x310308u;
    {
        const bool branch_taken_0x310308 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x310308) {
            ctx->pc = 0x31030Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310308u;
            // 0x31030c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x310378u;
            goto label_310378;
        }
    }
    ctx->pc = 0x310310u;
label_310310:
    // 0x310310: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x310310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_310314:
    // 0x310314: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x310314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_310318:
    // 0x310318: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_31031c:
    if (ctx->pc == 0x31031Cu) {
        ctx->pc = 0x310320u;
        goto label_310320;
    }
    ctx->pc = 0x310318u;
    {
        const bool branch_taken_0x310318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310318) {
            ctx->pc = 0x310374u;
            goto label_310374;
        }
    }
    ctx->pc = 0x310320u;
label_310320:
    // 0x310320: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x310320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_310324:
    // 0x310324: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x310324u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_310328:
    // 0x310328: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_31032c:
    if (ctx->pc == 0x31032Cu) {
        ctx->pc = 0x31032Cu;
            // 0x31032c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310330u;
        goto label_310330;
    }
    ctx->pc = 0x310328u;
    {
        const bool branch_taken_0x310328 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x31032Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310328u;
            // 0x31032c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310328) {
            ctx->pc = 0x310340u;
            goto label_310340;
        }
    }
    ctx->pc = 0x310330u;
label_310330:
    // 0x310330: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x310330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_310334:
    // 0x310334: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_310338:
    if (ctx->pc == 0x310338u) {
        ctx->pc = 0x31033Cu;
        goto label_31033c;
    }
    ctx->pc = 0x310334u;
    {
        const bool branch_taken_0x310334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x310334) {
            ctx->pc = 0x310340u;
            goto label_310340;
        }
    }
    ctx->pc = 0x31033Cu;
label_31033c:
    // 0x31033c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31033cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_310340:
    // 0x310340: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_310344:
    if (ctx->pc == 0x310344u) {
        ctx->pc = 0x310348u;
        goto label_310348;
    }
    ctx->pc = 0x310340u;
    {
        const bool branch_taken_0x310340 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x310340) {
            ctx->pc = 0x31035Cu;
            goto label_31035c;
        }
    }
    ctx->pc = 0x310348u;
label_310348:
    // 0x310348: 0xc075eb4  jal         func_1D7AD0
label_31034c:
    if (ctx->pc == 0x31034Cu) {
        ctx->pc = 0x31034Cu;
            // 0x31034c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310350u;
        goto label_310350;
    }
    ctx->pc = 0x310348u;
    SET_GPR_U32(ctx, 31, 0x310350u);
    ctx->pc = 0x31034Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310348u;
            // 0x31034c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310350u; }
        if (ctx->pc != 0x310350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310350u; }
        if (ctx->pc != 0x310350u) { return; }
    }
    ctx->pc = 0x310350u;
label_310350:
    // 0x310350: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_310354:
    if (ctx->pc == 0x310354u) {
        ctx->pc = 0x310358u;
        goto label_310358;
    }
    ctx->pc = 0x310350u;
    {
        const bool branch_taken_0x310350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x310350) {
            ctx->pc = 0x31035Cu;
            goto label_31035c;
        }
    }
    ctx->pc = 0x310358u;
label_310358:
    // 0x310358: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x310358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31035c:
    // 0x31035c: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_310360:
    if (ctx->pc == 0x310360u) {
        ctx->pc = 0x310364u;
        goto label_310364;
    }
    ctx->pc = 0x31035Cu;
    {
        const bool branch_taken_0x31035c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x31035c) {
            ctx->pc = 0x310374u;
            goto label_310374;
        }
    }
    ctx->pc = 0x310364u;
label_310364:
    // 0x310364: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x310364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_310368:
    // 0x310368: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x310368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_31036c:
    // 0x31036c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_310370:
    if (ctx->pc == 0x310370u) {
        ctx->pc = 0x310374u;
        goto label_310374;
    }
    ctx->pc = 0x31036Cu;
    {
        const bool branch_taken_0x31036c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31036c) {
            ctx->pc = 0x3103A4u;
            goto label_3103a4;
        }
    }
    ctx->pc = 0x310374u;
label_310374:
    // 0x310374: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x310374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_310378:
    // 0x310378: 0xc073234  jal         func_1CC8D0
label_31037c:
    if (ctx->pc == 0x31037Cu) {
        ctx->pc = 0x31037Cu;
            // 0x31037c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x310380u;
        goto label_310380;
    }
    ctx->pc = 0x310378u;
    SET_GPR_U32(ctx, 31, 0x310380u);
    ctx->pc = 0x31037Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310378u;
            // 0x31037c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310380u; }
        if (ctx->pc != 0x310380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310380u; }
        if (ctx->pc != 0x310380u) { return; }
    }
    ctx->pc = 0x310380u;
label_310380:
    // 0x310380: 0x10000008  b           . + 4 + (0x8 << 2)
label_310384:
    if (ctx->pc == 0x310384u) {
        ctx->pc = 0x310388u;
        goto label_310388;
    }
    ctx->pc = 0x310380u;
    {
        const bool branch_taken_0x310380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310380) {
            ctx->pc = 0x3103A4u;
            goto label_3103a4;
        }
    }
    ctx->pc = 0x310388u;
label_310388:
    // 0x310388: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x310388u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_31038c:
    // 0x31038c: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x31038cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_310390:
    // 0x310390: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x310390u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_310394:
    // 0x310394: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x310394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_310398:
    // 0x310398: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x310398u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_31039c:
    // 0x31039c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x31039cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_3103a0:
    // 0x3103a0: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x3103a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_3103a4:
    // 0x3103a4: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x3103a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_3103a8:
    // 0x3103a8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3103a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3103ac:
    // 0x3103ac: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_3103b0:
    if (ctx->pc == 0x3103B0u) {
        ctx->pc = 0x3103B0u;
            // 0x3103b0: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x3103B4u;
        goto label_3103b4;
    }
    ctx->pc = 0x3103ACu;
    {
        const bool branch_taken_0x3103ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3103ac) {
            ctx->pc = 0x3103B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3103ACu;
            // 0x3103b0: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3103D0u;
            goto label_3103d0;
        }
    }
    ctx->pc = 0x3103B4u;
label_3103b4:
    // 0x3103b4: 0xc601118c  lwc1        $f1, 0x118C($s0)
    ctx->pc = 0x3103b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3103b8:
    // 0x3103b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3103b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3103bc:
    // 0x3103bc: 0x0  nop
    ctx->pc = 0x3103bcu;
    // NOP
label_3103c0:
    // 0x3103c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3103c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3103c4:
    // 0x3103c4: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_3103c8:
    if (ctx->pc == 0x3103C8u) {
        ctx->pc = 0x3103C8u;
            // 0x3103c8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3103CCu;
        goto label_3103cc;
    }
    ctx->pc = 0x3103C4u;
    {
        const bool branch_taken_0x3103c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3103c4) {
            ctx->pc = 0x3103C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3103C4u;
            // 0x3103c8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x310410u;
            goto label_310410;
        }
    }
    ctx->pc = 0x3103CCu;
label_3103cc:
    // 0x3103cc: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x3103ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3103d0:
    // 0x3103d0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_3103d4:
    if (ctx->pc == 0x3103D4u) {
        ctx->pc = 0x3103D4u;
            // 0x3103d4: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x3103D8u;
        goto label_3103d8;
    }
    ctx->pc = 0x3103D0u;
    {
        const bool branch_taken_0x3103d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3103d0) {
            ctx->pc = 0x3103D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3103D0u;
            // 0x3103d4: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3103ECu;
            goto label_3103ec;
        }
    }
    ctx->pc = 0x3103D8u;
label_3103d8:
    // 0x3103d8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3103d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3103dc:
    // 0x3103dc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3103dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3103e0:
    // 0x3103e0: 0xc057b7c  jal         func_15EDF0
label_3103e4:
    if (ctx->pc == 0x3103E4u) {
        ctx->pc = 0x3103E4u;
            // 0x3103e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3103E8u;
        goto label_3103e8;
    }
    ctx->pc = 0x3103E0u;
    SET_GPR_U32(ctx, 31, 0x3103E8u);
    ctx->pc = 0x3103E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3103E0u;
            // 0x3103e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3103E8u; }
        if (ctx->pc != 0x3103E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3103E8u; }
        if (ctx->pc != 0x3103E8u) { return; }
    }
    ctx->pc = 0x3103E8u;
label_3103e8:
    // 0x3103e8: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x3103e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_3103ec:
    // 0x3103ec: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x3103ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3103f0:
    // 0x3103f0: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3103f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3103f4:
    // 0x3103f4: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x3103f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_3103f8:
    // 0x3103f8: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x3103f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_3103fc:
    // 0x3103fc: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x3103fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_310400:
    // 0x310400: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x310400u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_310404:
    // 0x310404: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x310404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_310408:
    // 0x310408: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x310408u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_31040c:
    // 0x31040c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31040cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_310410:
    // 0x310410: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x310410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_310414:
    // 0x310414: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x310414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_310418:
    // 0x310418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31041c:
    // 0x31041c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31041cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_310420:
    // 0x310420: 0x3e00008  jr          $ra
label_310424:
    if (ctx->pc == 0x310424u) {
        ctx->pc = 0x310424u;
            // 0x310424: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x310428u;
        goto label_310428;
    }
    ctx->pc = 0x310420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310420u;
            // 0x310424: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310428u;
label_310428:
    // 0x310428: 0x0  nop
    ctx->pc = 0x310428u;
    // NOP
label_31042c:
    // 0x31042c: 0x0  nop
    ctx->pc = 0x31042cu;
    // NOP
label_310430:
    // 0x310430: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x310430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_310434:
    // 0x310434: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x310434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_310438:
    // 0x310438: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x310438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_31043c:
    // 0x31043c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_310440:
    // 0x310440: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x310440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_310444:
    // 0x310444: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x310444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_310448:
    // 0x310448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x310448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_31044c:
    // 0x31044c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31044cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_310450:
    // 0x310450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_310454:
    // 0x310454: 0xc075740  jal         func_1D5D00
label_310458:
    if (ctx->pc == 0x310458u) {
        ctx->pc = 0x310458u;
            // 0x310458: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x31045Cu;
        goto label_31045c;
    }
    ctx->pc = 0x310454u;
    SET_GPR_U32(ctx, 31, 0x31045Cu);
    ctx->pc = 0x310458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310454u;
            // 0x310458: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D00u;
    if (runtime->hasFunction(0x1D5D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D5D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31045Cu; }
        if (ctx->pc != 0x31045Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5D00_0x1d5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31045Cu; }
        if (ctx->pc != 0x31045Cu) { return; }
    }
    ctx->pc = 0x31045Cu;
label_31045c:
    // 0x31045c: 0x8e720008  lw          $s2, 0x8($s3)
    ctx->pc = 0x31045cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_310460:
    // 0x310460: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x310460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_310464:
    // 0x310464: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x310464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_310468:
    // 0x310468: 0x54830064  bnel        $a0, $v1, . + 4 + (0x64 << 2)
label_31046c:
    if (ctx->pc == 0x31046Cu) {
        ctx->pc = 0x31046Cu;
            // 0x31046c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x310470u;
        goto label_310470;
    }
    ctx->pc = 0x310468u;
    {
        const bool branch_taken_0x310468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x310468) {
            ctx->pc = 0x31046Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310468u;
            // 0x31046c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3105FCu;
            goto label_3105fc;
        }
    }
    ctx->pc = 0x310470u;
label_310470:
    // 0x310470: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x310470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_310474:
    // 0x310474: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310478:
    // 0x310478: 0x8c75e378  lw          $s5, -0x1C88($v1)
    ctx->pc = 0x310478u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_31047c:
    // 0x31047c: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x31047cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_310480:
    // 0x310480: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x310480u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_310484:
    // 0x310484: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x310484u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_310488:
    // 0x310488: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x310488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_31048c:
    // 0x31048c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31048cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_310490:
    // 0x310490: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x310490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_310494:
    // 0x310494: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x310494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_310498:
    // 0x310498: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x310498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_31049c:
    // 0x31049c: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x31049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3104a0:
    // 0x3104a0: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3104a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3104a4:
    // 0x3104a4: 0x2631f668  addiu       $s1, $s1, -0x998
    ctx->pc = 0x3104a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964840));
label_3104a8:
    // 0x3104a8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3104a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3104ac:
    // 0x3104ac: 0x2610f648  addiu       $s0, $s0, -0x9B8
    ctx->pc = 0x3104acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964808));
label_3104b0:
    // 0x3104b0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3104b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_3104b4:
    // 0x3104b4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3104b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3104b8:
    // 0x3104b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3104b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3104bc:
    // 0x3104bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3104bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3104c0:
    // 0x3104c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3104c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3104c4:
    // 0x3104c4: 0x320f809  jalr        $t9
label_3104c8:
    if (ctx->pc == 0x3104C8u) {
        ctx->pc = 0x3104C8u;
            // 0x3104c8: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3104CCu;
        goto label_3104cc;
    }
    ctx->pc = 0x3104C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3104CCu);
        ctx->pc = 0x3104C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3104C4u;
            // 0x3104c8: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3104CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3104CCu; }
            if (ctx->pc != 0x3104CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3104CCu;
label_3104cc:
    // 0x3104cc: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x3104ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
label_3104d0:
    // 0x3104d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3104d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3104d4:
    // 0x3104d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3104d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3104d8:
    // 0x3104d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3104d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3104dc:
    // 0x3104dc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3104dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3104e0:
    // 0x3104e0: 0xc04e4a4  jal         func_139290
label_3104e4:
    if (ctx->pc == 0x3104E4u) {
        ctx->pc = 0x3104E4u;
            // 0x3104e4: 0x139e3f  dsra32      $s3, $s3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
        ctx->pc = 0x3104E8u;
        goto label_3104e8;
    }
    ctx->pc = 0x3104E0u;
    SET_GPR_U32(ctx, 31, 0x3104E8u);
    ctx->pc = 0x3104E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3104E0u;
            // 0x3104e4: 0x139e3f  dsra32      $s3, $s3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104E8u; }
        if (ctx->pc != 0x3104E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104E8u; }
        if (ctx->pc != 0x3104E8u) { return; }
    }
    ctx->pc = 0x3104E8u;
label_3104e8:
    // 0x3104e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3104e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3104ec:
    // 0x3104ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3104ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3104f0:
    // 0x3104f0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3104f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3104f4:
    // 0x3104f4: 0xc04e4a4  jal         func_139290
label_3104f8:
    if (ctx->pc == 0x3104F8u) {
        ctx->pc = 0x3104F8u;
            // 0x3104f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3104FCu;
        goto label_3104fc;
    }
    ctx->pc = 0x3104F4u;
    SET_GPR_U32(ctx, 31, 0x3104FCu);
    ctx->pc = 0x3104F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3104F4u;
            // 0x3104f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104FCu; }
        if (ctx->pc != 0x3104FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104FCu; }
        if (ctx->pc != 0x3104FCu) { return; }
    }
    ctx->pc = 0x3104FCu;
label_3104fc:
    // 0x3104fc: 0x8e430550  lw          $v1, 0x550($s2)
    ctx->pc = 0x3104fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_310500:
    // 0x310500: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x310500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_310504:
    // 0x310504: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x310504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_310508:
    // 0x310508: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x310508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_31050c:
    // 0x31050c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x31050cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_310510:
    // 0x310510: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x310510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_310514:
    // 0x310514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x310514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_310518:
    // 0x310518: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x310518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_31051c:
    // 0x31051c: 0xc0517b0  jal         func_145EC0
label_310520:
    if (ctx->pc == 0x310520u) {
        ctx->pc = 0x310520u;
            // 0x310520: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310524u;
        goto label_310524;
    }
    ctx->pc = 0x31051Cu;
    SET_GPR_U32(ctx, 31, 0x310524u);
    ctx->pc = 0x310520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31051Cu;
            // 0x310520: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EC0u;
    if (runtime->hasFunction(0x145EC0u)) {
        auto targetFn = runtime->lookupFunction(0x145EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310524u; }
        if (ctx->pc != 0x310524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EC0_0x145ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310524u; }
        if (ctx->pc != 0x310524u) { return; }
    }
    ctx->pc = 0x310524u;
label_310524:
    // 0x310524: 0x92420e3d  lbu         $v0, 0xE3D($s2)
    ctx->pc = 0x310524u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3645)));
label_310528:
    // 0x310528: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x310528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_31052c:
    // 0x31052c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31052cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_310530:
    // 0x310530: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x310530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_310534:
    // 0x310534: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x310534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_310538:
    // 0x310538: 0xc04cd60  jal         func_133580
label_31053c:
    if (ctx->pc == 0x31053Cu) {
        ctx->pc = 0x31053Cu;
            // 0x31053c: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x310540u;
        goto label_310540;
    }
    ctx->pc = 0x310538u;
    SET_GPR_U32(ctx, 31, 0x310540u);
    ctx->pc = 0x31053Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310538u;
            // 0x31053c: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310540u; }
        if (ctx->pc != 0x310540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310540u; }
        if (ctx->pc != 0x310540u) { return; }
    }
    ctx->pc = 0x310540u;
label_310540:
    // 0x310540: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x310540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_310544:
    // 0x310544: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x310544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_310548:
    // 0x310548: 0xc04cd60  jal         func_133580
label_31054c:
    if (ctx->pc == 0x31054Cu) {
        ctx->pc = 0x31054Cu;
            // 0x31054c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310550u;
        goto label_310550;
    }
    ctx->pc = 0x310548u;
    SET_GPR_U32(ctx, 31, 0x310550u);
    ctx->pc = 0x31054Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310548u;
            // 0x31054c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310550u; }
        if (ctx->pc != 0x310550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310550u; }
        if (ctx->pc != 0x310550u) { return; }
    }
    ctx->pc = 0x310550u;
label_310550:
    // 0x310550: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x310550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_310554:
    // 0x310554: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x310554u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_310558:
    // 0x310558: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x310558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31055c:
    // 0x31055c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x31055cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_310560:
    // 0x310560: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x310560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_310564:
    // 0x310564: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x310564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_310568:
    // 0x310568: 0xc04cfcc  jal         func_133F30
label_31056c:
    if (ctx->pc == 0x31056Cu) {
        ctx->pc = 0x31056Cu;
            // 0x31056c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310570u;
        goto label_310570;
    }
    ctx->pc = 0x310568u;
    SET_GPR_U32(ctx, 31, 0x310570u);
    ctx->pc = 0x31056Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310568u;
            // 0x31056c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310570u; }
        if (ctx->pc != 0x310570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310570u; }
        if (ctx->pc != 0x310570u) { return; }
    }
    ctx->pc = 0x310570u;
label_310570:
    // 0x310570: 0xc04e738  jal         func_139CE0
label_310574:
    if (ctx->pc == 0x310574u) {
        ctx->pc = 0x310574u;
            // 0x310574: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x310578u;
        goto label_310578;
    }
    ctx->pc = 0x310570u;
    SET_GPR_U32(ctx, 31, 0x310578u);
    ctx->pc = 0x310574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310570u;
            // 0x310574: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310578u; }
        if (ctx->pc != 0x310578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310578u; }
        if (ctx->pc != 0x310578u) { return; }
    }
    ctx->pc = 0x310578u;
label_310578:
    // 0x310578: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x310578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31057c:
    // 0x31057c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31057cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_310580:
    // 0x310580: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x310580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_310584:
    // 0x310584: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x310584u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_310588:
    // 0x310588: 0xc050044  jal         func_140110
label_31058c:
    if (ctx->pc == 0x31058Cu) {
        ctx->pc = 0x31058Cu;
            // 0x31058c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310590u;
        goto label_310590;
    }
    ctx->pc = 0x310588u;
    SET_GPR_U32(ctx, 31, 0x310590u);
    ctx->pc = 0x31058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310588u;
            // 0x31058c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310590u; }
        if (ctx->pc != 0x310590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310590u; }
        if (ctx->pc != 0x310590u) { return; }
    }
    ctx->pc = 0x310590u;
label_310590:
    // 0x310590: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x310590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_310594:
    // 0x310594: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x310594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_310598:
    // 0x310598: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x310598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_31059c:
    // 0x31059c: 0xc054bbc  jal         func_152EF0
label_3105a0:
    if (ctx->pc == 0x3105A0u) {
        ctx->pc = 0x3105A0u;
            // 0x3105a0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x3105A4u;
        goto label_3105a4;
    }
    ctx->pc = 0x31059Cu;
    SET_GPR_U32(ctx, 31, 0x3105A4u);
    ctx->pc = 0x3105A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31059Cu;
            // 0x3105a0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3105A4u; }
        if (ctx->pc != 0x3105A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3105A4u; }
        if (ctx->pc != 0x3105A4u) { return; }
    }
    ctx->pc = 0x3105A4u;
label_3105a4:
    // 0x3105a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3105a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3105a8:
    // 0x3105a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3105a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3105ac:
    // 0x3105ac: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3105acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3105b0:
    // 0x3105b0: 0xc04e4a4  jal         func_139290
label_3105b4:
    if (ctx->pc == 0x3105B4u) {
        ctx->pc = 0x3105B4u;
            // 0x3105b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3105B8u;
        goto label_3105b8;
    }
    ctx->pc = 0x3105B0u;
    SET_GPR_U32(ctx, 31, 0x3105B8u);
    ctx->pc = 0x3105B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3105B0u;
            // 0x3105b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3105B8u; }
        if (ctx->pc != 0x3105B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3105B8u; }
        if (ctx->pc != 0x3105B8u) { return; }
    }
    ctx->pc = 0x3105B8u;
label_3105b8:
    // 0x3105b8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3105b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3105bc:
    // 0x3105bc: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3105bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3105c0:
    // 0x3105c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3105c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3105c4:
    // 0x3105c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3105c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3105c8:
    // 0x3105c8: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x3105c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3105cc:
    // 0x3105cc: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x3105ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_3105d0:
    // 0x3105d0: 0xc04cfcc  jal         func_133F30
label_3105d4:
    if (ctx->pc == 0x3105D4u) {
        ctx->pc = 0x3105D4u;
            // 0x3105d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3105D8u;
        goto label_3105d8;
    }
    ctx->pc = 0x3105D0u;
    SET_GPR_U32(ctx, 31, 0x3105D8u);
    ctx->pc = 0x3105D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3105D0u;
            // 0x3105d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3105D8u; }
        if (ctx->pc != 0x3105D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3105D8u; }
        if (ctx->pc != 0x3105D8u) { return; }
    }
    ctx->pc = 0x3105D8u;
label_3105d8:
    // 0x3105d8: 0xc04e738  jal         func_139CE0
label_3105dc:
    if (ctx->pc == 0x3105DCu) {
        ctx->pc = 0x3105DCu;
            // 0x3105dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x3105E0u;
        goto label_3105e0;
    }
    ctx->pc = 0x3105D8u;
    SET_GPR_U32(ctx, 31, 0x3105E0u);
    ctx->pc = 0x3105DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3105D8u;
            // 0x3105dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3105E0u; }
        if (ctx->pc != 0x3105E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3105E0u; }
        if (ctx->pc != 0x3105E0u) { return; }
    }
    ctx->pc = 0x3105E0u;
label_3105e0:
    // 0x3105e0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3105e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3105e4:
    // 0x3105e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3105e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3105e8:
    // 0x3105e8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3105e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3105ec:
    // 0x3105ec: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3105ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3105f0:
    // 0x3105f0: 0xc054c2c  jal         func_1530B0
label_3105f4:
    if (ctx->pc == 0x3105F4u) {
        ctx->pc = 0x3105F4u;
            // 0x3105f4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x3105F8u;
        goto label_3105f8;
    }
    ctx->pc = 0x3105F0u;
    SET_GPR_U32(ctx, 31, 0x3105F8u);
    ctx->pc = 0x3105F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3105F0u;
            // 0x3105f4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3105F8u; }
        if (ctx->pc != 0x3105F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3105F8u; }
        if (ctx->pc != 0x3105F8u) { return; }
    }
    ctx->pc = 0x3105F8u;
label_3105f8:
    // 0x3105f8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3105f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3105fc:
    // 0x3105fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3105fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_310600:
    // 0x310600: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x310600u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_310604:
    // 0x310604: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x310604u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_310608:
    // 0x310608: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x310608u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31060c:
    // 0x31060c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31060cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_310610:
    // 0x310610: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_310614:
    // 0x310614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_310618:
    // 0x310618: 0x3e00008  jr          $ra
label_31061c:
    if (ctx->pc == 0x31061Cu) {
        ctx->pc = 0x31061Cu;
            // 0x31061c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x310620u;
        goto label_310620;
    }
    ctx->pc = 0x310618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31061Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310618u;
            // 0x31061c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310620u;
label_310620:
    // 0x310620: 0x3e00008  jr          $ra
label_310624:
    if (ctx->pc == 0x310624u) {
        ctx->pc = 0x310628u;
        goto label_310628;
    }
    ctx->pc = 0x310620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310628u;
label_310628:
    // 0x310628: 0x0  nop
    ctx->pc = 0x310628u;
    // NOP
label_31062c:
    // 0x31062c: 0x0  nop
    ctx->pc = 0x31062cu;
    // NOP
label_310630:
    // 0x310630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x310630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_310634:
    // 0x310634: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x310634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_310638:
    // 0x310638: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x310638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31063c:
    // 0x31063c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_310640:
    // 0x310640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x310640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_310644:
    // 0x310644: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x310644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_310648:
    // 0x310648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x310648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31064c:
    // 0x31064c: 0xc12ca3c  jal         func_4B28F0
label_310650:
    if (ctx->pc == 0x310650u) {
        ctx->pc = 0x310650u;
            // 0x310650: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x310654u;
        goto label_310654;
    }
    ctx->pc = 0x31064Cu;
    SET_GPR_U32(ctx, 31, 0x310654u);
    ctx->pc = 0x310650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31064Cu;
            // 0x310650: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310654u; }
        if (ctx->pc != 0x310654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310654u; }
        if (ctx->pc != 0x310654u) { return; }
    }
    ctx->pc = 0x310654u;
label_310654:
    // 0x310654: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x310654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_310658:
    // 0x310658: 0xac60f664  sw          $zero, -0x99C($v1)
    ctx->pc = 0x310658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964836), GPR_U32(ctx, 0));
label_31065c:
    // 0x31065c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x31065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_310660:
    // 0x310660: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_310664:
    if (ctx->pc == 0x310664u) {
        ctx->pc = 0x310664u;
            // 0x310664: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x310668u;
        goto label_310668;
    }
    ctx->pc = 0x310660u;
    {
        const bool branch_taken_0x310660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310660) {
            ctx->pc = 0x310664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310660u;
            // 0x310664: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3106B4u;
            goto label_3106b4;
        }
    }
    ctx->pc = 0x310668u;
label_310668:
    // 0x310668: 0xc040180  jal         func_100600
label_31066c:
    if (ctx->pc == 0x31066Cu) {
        ctx->pc = 0x31066Cu;
            // 0x31066c: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x310670u;
        goto label_310670;
    }
    ctx->pc = 0x310668u;
    SET_GPR_U32(ctx, 31, 0x310670u);
    ctx->pc = 0x31066Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310668u;
            // 0x31066c: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310670u; }
        if (ctx->pc != 0x310670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310670u; }
        if (ctx->pc != 0x310670u) { return; }
    }
    ctx->pc = 0x310670u;
label_310670:
    // 0x310670: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_310674:
    if (ctx->pc == 0x310674u) {
        ctx->pc = 0x310674u;
            // 0x310674: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310678u;
        goto label_310678;
    }
    ctx->pc = 0x310670u;
    {
        const bool branch_taken_0x310670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310670u;
            // 0x310674: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310670) {
            ctx->pc = 0x3106ACu;
            goto label_3106ac;
        }
    }
    ctx->pc = 0x310678u;
label_310678:
    // 0x310678: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x310678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_31067c:
    // 0x31067c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31067cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_310680:
    // 0x310680: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x310680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_310684:
    // 0x310684: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x310684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310688:
    // 0x310688: 0xc10ca68  jal         func_4329A0
label_31068c:
    if (ctx->pc == 0x31068Cu) {
        ctx->pc = 0x31068Cu;
            // 0x31068c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310690u;
        goto label_310690;
    }
    ctx->pc = 0x310688u;
    SET_GPR_U32(ctx, 31, 0x310690u);
    ctx->pc = 0x31068Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310688u;
            // 0x31068c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310690u; }
        if (ctx->pc != 0x310690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310690u; }
        if (ctx->pc != 0x310690u) { return; }
    }
    ctx->pc = 0x310690u;
label_310690:
    // 0x310690: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x310690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_310694:
    // 0x310694: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x310694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_310698:
    // 0x310698: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x310698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_31069c:
    // 0x31069c: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x31069cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_3106a0:
    // 0x3106a0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3106a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_3106a4:
    // 0x3106a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3106a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3106a8:
    // 0x3106a8: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x3106a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_3106ac:
    // 0x3106ac: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x3106acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_3106b0:
    // 0x3106b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3106b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3106b4:
    // 0x3106b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3106b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3106b8:
    // 0x3106b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3106b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3106bc:
    // 0x3106bc: 0x3e00008  jr          $ra
label_3106c0:
    if (ctx->pc == 0x3106C0u) {
        ctx->pc = 0x3106C0u;
            // 0x3106c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3106C4u;
        goto label_3106c4;
    }
    ctx->pc = 0x3106BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3106C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3106BCu;
            // 0x3106c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3106C4u;
label_3106c4:
    // 0x3106c4: 0x0  nop
    ctx->pc = 0x3106c4u;
    // NOP
label_3106c8:
    // 0x3106c8: 0x0  nop
    ctx->pc = 0x3106c8u;
    // NOP
label_3106cc:
    // 0x3106cc: 0x0  nop
    ctx->pc = 0x3106ccu;
    // NOP
label_3106d0:
    // 0x3106d0: 0x3e00008  jr          $ra
label_3106d4:
    if (ctx->pc == 0x3106D4u) {
        ctx->pc = 0x3106D8u;
        goto label_3106d8;
    }
    ctx->pc = 0x3106D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3106D8u;
label_3106d8:
    // 0x3106d8: 0x0  nop
    ctx->pc = 0x3106d8u;
    // NOP
label_3106dc:
    // 0x3106dc: 0x0  nop
    ctx->pc = 0x3106dcu;
    // NOP
}
