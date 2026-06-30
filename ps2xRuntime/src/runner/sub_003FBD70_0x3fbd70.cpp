#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FBD70
// Address: 0x3fbd70 - 0x3fc710
void sub_003FBD70_0x3fbd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FBD70_0x3fbd70");
#endif

    switch (ctx->pc) {
        case 0x3fbd70u: goto label_3fbd70;
        case 0x3fbd74u: goto label_3fbd74;
        case 0x3fbd78u: goto label_3fbd78;
        case 0x3fbd7cu: goto label_3fbd7c;
        case 0x3fbd80u: goto label_3fbd80;
        case 0x3fbd84u: goto label_3fbd84;
        case 0x3fbd88u: goto label_3fbd88;
        case 0x3fbd8cu: goto label_3fbd8c;
        case 0x3fbd90u: goto label_3fbd90;
        case 0x3fbd94u: goto label_3fbd94;
        case 0x3fbd98u: goto label_3fbd98;
        case 0x3fbd9cu: goto label_3fbd9c;
        case 0x3fbda0u: goto label_3fbda0;
        case 0x3fbda4u: goto label_3fbda4;
        case 0x3fbda8u: goto label_3fbda8;
        case 0x3fbdacu: goto label_3fbdac;
        case 0x3fbdb0u: goto label_3fbdb0;
        case 0x3fbdb4u: goto label_3fbdb4;
        case 0x3fbdb8u: goto label_3fbdb8;
        case 0x3fbdbcu: goto label_3fbdbc;
        case 0x3fbdc0u: goto label_3fbdc0;
        case 0x3fbdc4u: goto label_3fbdc4;
        case 0x3fbdc8u: goto label_3fbdc8;
        case 0x3fbdccu: goto label_3fbdcc;
        case 0x3fbdd0u: goto label_3fbdd0;
        case 0x3fbdd4u: goto label_3fbdd4;
        case 0x3fbdd8u: goto label_3fbdd8;
        case 0x3fbddcu: goto label_3fbddc;
        case 0x3fbde0u: goto label_3fbde0;
        case 0x3fbde4u: goto label_3fbde4;
        case 0x3fbde8u: goto label_3fbde8;
        case 0x3fbdecu: goto label_3fbdec;
        case 0x3fbdf0u: goto label_3fbdf0;
        case 0x3fbdf4u: goto label_3fbdf4;
        case 0x3fbdf8u: goto label_3fbdf8;
        case 0x3fbdfcu: goto label_3fbdfc;
        case 0x3fbe00u: goto label_3fbe00;
        case 0x3fbe04u: goto label_3fbe04;
        case 0x3fbe08u: goto label_3fbe08;
        case 0x3fbe0cu: goto label_3fbe0c;
        case 0x3fbe10u: goto label_3fbe10;
        case 0x3fbe14u: goto label_3fbe14;
        case 0x3fbe18u: goto label_3fbe18;
        case 0x3fbe1cu: goto label_3fbe1c;
        case 0x3fbe20u: goto label_3fbe20;
        case 0x3fbe24u: goto label_3fbe24;
        case 0x3fbe28u: goto label_3fbe28;
        case 0x3fbe2cu: goto label_3fbe2c;
        case 0x3fbe30u: goto label_3fbe30;
        case 0x3fbe34u: goto label_3fbe34;
        case 0x3fbe38u: goto label_3fbe38;
        case 0x3fbe3cu: goto label_3fbe3c;
        case 0x3fbe40u: goto label_3fbe40;
        case 0x3fbe44u: goto label_3fbe44;
        case 0x3fbe48u: goto label_3fbe48;
        case 0x3fbe4cu: goto label_3fbe4c;
        case 0x3fbe50u: goto label_3fbe50;
        case 0x3fbe54u: goto label_3fbe54;
        case 0x3fbe58u: goto label_3fbe58;
        case 0x3fbe5cu: goto label_3fbe5c;
        case 0x3fbe60u: goto label_3fbe60;
        case 0x3fbe64u: goto label_3fbe64;
        case 0x3fbe68u: goto label_3fbe68;
        case 0x3fbe6cu: goto label_3fbe6c;
        case 0x3fbe70u: goto label_3fbe70;
        case 0x3fbe74u: goto label_3fbe74;
        case 0x3fbe78u: goto label_3fbe78;
        case 0x3fbe7cu: goto label_3fbe7c;
        case 0x3fbe80u: goto label_3fbe80;
        case 0x3fbe84u: goto label_3fbe84;
        case 0x3fbe88u: goto label_3fbe88;
        case 0x3fbe8cu: goto label_3fbe8c;
        case 0x3fbe90u: goto label_3fbe90;
        case 0x3fbe94u: goto label_3fbe94;
        case 0x3fbe98u: goto label_3fbe98;
        case 0x3fbe9cu: goto label_3fbe9c;
        case 0x3fbea0u: goto label_3fbea0;
        case 0x3fbea4u: goto label_3fbea4;
        case 0x3fbea8u: goto label_3fbea8;
        case 0x3fbeacu: goto label_3fbeac;
        case 0x3fbeb0u: goto label_3fbeb0;
        case 0x3fbeb4u: goto label_3fbeb4;
        case 0x3fbeb8u: goto label_3fbeb8;
        case 0x3fbebcu: goto label_3fbebc;
        case 0x3fbec0u: goto label_3fbec0;
        case 0x3fbec4u: goto label_3fbec4;
        case 0x3fbec8u: goto label_3fbec8;
        case 0x3fbeccu: goto label_3fbecc;
        case 0x3fbed0u: goto label_3fbed0;
        case 0x3fbed4u: goto label_3fbed4;
        case 0x3fbed8u: goto label_3fbed8;
        case 0x3fbedcu: goto label_3fbedc;
        case 0x3fbee0u: goto label_3fbee0;
        case 0x3fbee4u: goto label_3fbee4;
        case 0x3fbee8u: goto label_3fbee8;
        case 0x3fbeecu: goto label_3fbeec;
        case 0x3fbef0u: goto label_3fbef0;
        case 0x3fbef4u: goto label_3fbef4;
        case 0x3fbef8u: goto label_3fbef8;
        case 0x3fbefcu: goto label_3fbefc;
        case 0x3fbf00u: goto label_3fbf00;
        case 0x3fbf04u: goto label_3fbf04;
        case 0x3fbf08u: goto label_3fbf08;
        case 0x3fbf0cu: goto label_3fbf0c;
        case 0x3fbf10u: goto label_3fbf10;
        case 0x3fbf14u: goto label_3fbf14;
        case 0x3fbf18u: goto label_3fbf18;
        case 0x3fbf1cu: goto label_3fbf1c;
        case 0x3fbf20u: goto label_3fbf20;
        case 0x3fbf24u: goto label_3fbf24;
        case 0x3fbf28u: goto label_3fbf28;
        case 0x3fbf2cu: goto label_3fbf2c;
        case 0x3fbf30u: goto label_3fbf30;
        case 0x3fbf34u: goto label_3fbf34;
        case 0x3fbf38u: goto label_3fbf38;
        case 0x3fbf3cu: goto label_3fbf3c;
        case 0x3fbf40u: goto label_3fbf40;
        case 0x3fbf44u: goto label_3fbf44;
        case 0x3fbf48u: goto label_3fbf48;
        case 0x3fbf4cu: goto label_3fbf4c;
        case 0x3fbf50u: goto label_3fbf50;
        case 0x3fbf54u: goto label_3fbf54;
        case 0x3fbf58u: goto label_3fbf58;
        case 0x3fbf5cu: goto label_3fbf5c;
        case 0x3fbf60u: goto label_3fbf60;
        case 0x3fbf64u: goto label_3fbf64;
        case 0x3fbf68u: goto label_3fbf68;
        case 0x3fbf6cu: goto label_3fbf6c;
        case 0x3fbf70u: goto label_3fbf70;
        case 0x3fbf74u: goto label_3fbf74;
        case 0x3fbf78u: goto label_3fbf78;
        case 0x3fbf7cu: goto label_3fbf7c;
        case 0x3fbf80u: goto label_3fbf80;
        case 0x3fbf84u: goto label_3fbf84;
        case 0x3fbf88u: goto label_3fbf88;
        case 0x3fbf8cu: goto label_3fbf8c;
        case 0x3fbf90u: goto label_3fbf90;
        case 0x3fbf94u: goto label_3fbf94;
        case 0x3fbf98u: goto label_3fbf98;
        case 0x3fbf9cu: goto label_3fbf9c;
        case 0x3fbfa0u: goto label_3fbfa0;
        case 0x3fbfa4u: goto label_3fbfa4;
        case 0x3fbfa8u: goto label_3fbfa8;
        case 0x3fbfacu: goto label_3fbfac;
        case 0x3fbfb0u: goto label_3fbfb0;
        case 0x3fbfb4u: goto label_3fbfb4;
        case 0x3fbfb8u: goto label_3fbfb8;
        case 0x3fbfbcu: goto label_3fbfbc;
        case 0x3fbfc0u: goto label_3fbfc0;
        case 0x3fbfc4u: goto label_3fbfc4;
        case 0x3fbfc8u: goto label_3fbfc8;
        case 0x3fbfccu: goto label_3fbfcc;
        case 0x3fbfd0u: goto label_3fbfd0;
        case 0x3fbfd4u: goto label_3fbfd4;
        case 0x3fbfd8u: goto label_3fbfd8;
        case 0x3fbfdcu: goto label_3fbfdc;
        case 0x3fbfe0u: goto label_3fbfe0;
        case 0x3fbfe4u: goto label_3fbfe4;
        case 0x3fbfe8u: goto label_3fbfe8;
        case 0x3fbfecu: goto label_3fbfec;
        case 0x3fbff0u: goto label_3fbff0;
        case 0x3fbff4u: goto label_3fbff4;
        case 0x3fbff8u: goto label_3fbff8;
        case 0x3fbffcu: goto label_3fbffc;
        case 0x3fc000u: goto label_3fc000;
        case 0x3fc004u: goto label_3fc004;
        case 0x3fc008u: goto label_3fc008;
        case 0x3fc00cu: goto label_3fc00c;
        case 0x3fc010u: goto label_3fc010;
        case 0x3fc014u: goto label_3fc014;
        case 0x3fc018u: goto label_3fc018;
        case 0x3fc01cu: goto label_3fc01c;
        case 0x3fc020u: goto label_3fc020;
        case 0x3fc024u: goto label_3fc024;
        case 0x3fc028u: goto label_3fc028;
        case 0x3fc02cu: goto label_3fc02c;
        case 0x3fc030u: goto label_3fc030;
        case 0x3fc034u: goto label_3fc034;
        case 0x3fc038u: goto label_3fc038;
        case 0x3fc03cu: goto label_3fc03c;
        case 0x3fc040u: goto label_3fc040;
        case 0x3fc044u: goto label_3fc044;
        case 0x3fc048u: goto label_3fc048;
        case 0x3fc04cu: goto label_3fc04c;
        case 0x3fc050u: goto label_3fc050;
        case 0x3fc054u: goto label_3fc054;
        case 0x3fc058u: goto label_3fc058;
        case 0x3fc05cu: goto label_3fc05c;
        case 0x3fc060u: goto label_3fc060;
        case 0x3fc064u: goto label_3fc064;
        case 0x3fc068u: goto label_3fc068;
        case 0x3fc06cu: goto label_3fc06c;
        case 0x3fc070u: goto label_3fc070;
        case 0x3fc074u: goto label_3fc074;
        case 0x3fc078u: goto label_3fc078;
        case 0x3fc07cu: goto label_3fc07c;
        case 0x3fc080u: goto label_3fc080;
        case 0x3fc084u: goto label_3fc084;
        case 0x3fc088u: goto label_3fc088;
        case 0x3fc08cu: goto label_3fc08c;
        case 0x3fc090u: goto label_3fc090;
        case 0x3fc094u: goto label_3fc094;
        case 0x3fc098u: goto label_3fc098;
        case 0x3fc09cu: goto label_3fc09c;
        case 0x3fc0a0u: goto label_3fc0a0;
        case 0x3fc0a4u: goto label_3fc0a4;
        case 0x3fc0a8u: goto label_3fc0a8;
        case 0x3fc0acu: goto label_3fc0ac;
        case 0x3fc0b0u: goto label_3fc0b0;
        case 0x3fc0b4u: goto label_3fc0b4;
        case 0x3fc0b8u: goto label_3fc0b8;
        case 0x3fc0bcu: goto label_3fc0bc;
        case 0x3fc0c0u: goto label_3fc0c0;
        case 0x3fc0c4u: goto label_3fc0c4;
        case 0x3fc0c8u: goto label_3fc0c8;
        case 0x3fc0ccu: goto label_3fc0cc;
        case 0x3fc0d0u: goto label_3fc0d0;
        case 0x3fc0d4u: goto label_3fc0d4;
        case 0x3fc0d8u: goto label_3fc0d8;
        case 0x3fc0dcu: goto label_3fc0dc;
        case 0x3fc0e0u: goto label_3fc0e0;
        case 0x3fc0e4u: goto label_3fc0e4;
        case 0x3fc0e8u: goto label_3fc0e8;
        case 0x3fc0ecu: goto label_3fc0ec;
        case 0x3fc0f0u: goto label_3fc0f0;
        case 0x3fc0f4u: goto label_3fc0f4;
        case 0x3fc0f8u: goto label_3fc0f8;
        case 0x3fc0fcu: goto label_3fc0fc;
        case 0x3fc100u: goto label_3fc100;
        case 0x3fc104u: goto label_3fc104;
        case 0x3fc108u: goto label_3fc108;
        case 0x3fc10cu: goto label_3fc10c;
        case 0x3fc110u: goto label_3fc110;
        case 0x3fc114u: goto label_3fc114;
        case 0x3fc118u: goto label_3fc118;
        case 0x3fc11cu: goto label_3fc11c;
        case 0x3fc120u: goto label_3fc120;
        case 0x3fc124u: goto label_3fc124;
        case 0x3fc128u: goto label_3fc128;
        case 0x3fc12cu: goto label_3fc12c;
        case 0x3fc130u: goto label_3fc130;
        case 0x3fc134u: goto label_3fc134;
        case 0x3fc138u: goto label_3fc138;
        case 0x3fc13cu: goto label_3fc13c;
        case 0x3fc140u: goto label_3fc140;
        case 0x3fc144u: goto label_3fc144;
        case 0x3fc148u: goto label_3fc148;
        case 0x3fc14cu: goto label_3fc14c;
        case 0x3fc150u: goto label_3fc150;
        case 0x3fc154u: goto label_3fc154;
        case 0x3fc158u: goto label_3fc158;
        case 0x3fc15cu: goto label_3fc15c;
        case 0x3fc160u: goto label_3fc160;
        case 0x3fc164u: goto label_3fc164;
        case 0x3fc168u: goto label_3fc168;
        case 0x3fc16cu: goto label_3fc16c;
        case 0x3fc170u: goto label_3fc170;
        case 0x3fc174u: goto label_3fc174;
        case 0x3fc178u: goto label_3fc178;
        case 0x3fc17cu: goto label_3fc17c;
        case 0x3fc180u: goto label_3fc180;
        case 0x3fc184u: goto label_3fc184;
        case 0x3fc188u: goto label_3fc188;
        case 0x3fc18cu: goto label_3fc18c;
        case 0x3fc190u: goto label_3fc190;
        case 0x3fc194u: goto label_3fc194;
        case 0x3fc198u: goto label_3fc198;
        case 0x3fc19cu: goto label_3fc19c;
        case 0x3fc1a0u: goto label_3fc1a0;
        case 0x3fc1a4u: goto label_3fc1a4;
        case 0x3fc1a8u: goto label_3fc1a8;
        case 0x3fc1acu: goto label_3fc1ac;
        case 0x3fc1b0u: goto label_3fc1b0;
        case 0x3fc1b4u: goto label_3fc1b4;
        case 0x3fc1b8u: goto label_3fc1b8;
        case 0x3fc1bcu: goto label_3fc1bc;
        case 0x3fc1c0u: goto label_3fc1c0;
        case 0x3fc1c4u: goto label_3fc1c4;
        case 0x3fc1c8u: goto label_3fc1c8;
        case 0x3fc1ccu: goto label_3fc1cc;
        case 0x3fc1d0u: goto label_3fc1d0;
        case 0x3fc1d4u: goto label_3fc1d4;
        case 0x3fc1d8u: goto label_3fc1d8;
        case 0x3fc1dcu: goto label_3fc1dc;
        case 0x3fc1e0u: goto label_3fc1e0;
        case 0x3fc1e4u: goto label_3fc1e4;
        case 0x3fc1e8u: goto label_3fc1e8;
        case 0x3fc1ecu: goto label_3fc1ec;
        case 0x3fc1f0u: goto label_3fc1f0;
        case 0x3fc1f4u: goto label_3fc1f4;
        case 0x3fc1f8u: goto label_3fc1f8;
        case 0x3fc1fcu: goto label_3fc1fc;
        case 0x3fc200u: goto label_3fc200;
        case 0x3fc204u: goto label_3fc204;
        case 0x3fc208u: goto label_3fc208;
        case 0x3fc20cu: goto label_3fc20c;
        case 0x3fc210u: goto label_3fc210;
        case 0x3fc214u: goto label_3fc214;
        case 0x3fc218u: goto label_3fc218;
        case 0x3fc21cu: goto label_3fc21c;
        case 0x3fc220u: goto label_3fc220;
        case 0x3fc224u: goto label_3fc224;
        case 0x3fc228u: goto label_3fc228;
        case 0x3fc22cu: goto label_3fc22c;
        case 0x3fc230u: goto label_3fc230;
        case 0x3fc234u: goto label_3fc234;
        case 0x3fc238u: goto label_3fc238;
        case 0x3fc23cu: goto label_3fc23c;
        case 0x3fc240u: goto label_3fc240;
        case 0x3fc244u: goto label_3fc244;
        case 0x3fc248u: goto label_3fc248;
        case 0x3fc24cu: goto label_3fc24c;
        case 0x3fc250u: goto label_3fc250;
        case 0x3fc254u: goto label_3fc254;
        case 0x3fc258u: goto label_3fc258;
        case 0x3fc25cu: goto label_3fc25c;
        case 0x3fc260u: goto label_3fc260;
        case 0x3fc264u: goto label_3fc264;
        case 0x3fc268u: goto label_3fc268;
        case 0x3fc26cu: goto label_3fc26c;
        case 0x3fc270u: goto label_3fc270;
        case 0x3fc274u: goto label_3fc274;
        case 0x3fc278u: goto label_3fc278;
        case 0x3fc27cu: goto label_3fc27c;
        case 0x3fc280u: goto label_3fc280;
        case 0x3fc284u: goto label_3fc284;
        case 0x3fc288u: goto label_3fc288;
        case 0x3fc28cu: goto label_3fc28c;
        case 0x3fc290u: goto label_3fc290;
        case 0x3fc294u: goto label_3fc294;
        case 0x3fc298u: goto label_3fc298;
        case 0x3fc29cu: goto label_3fc29c;
        case 0x3fc2a0u: goto label_3fc2a0;
        case 0x3fc2a4u: goto label_3fc2a4;
        case 0x3fc2a8u: goto label_3fc2a8;
        case 0x3fc2acu: goto label_3fc2ac;
        case 0x3fc2b0u: goto label_3fc2b0;
        case 0x3fc2b4u: goto label_3fc2b4;
        case 0x3fc2b8u: goto label_3fc2b8;
        case 0x3fc2bcu: goto label_3fc2bc;
        case 0x3fc2c0u: goto label_3fc2c0;
        case 0x3fc2c4u: goto label_3fc2c4;
        case 0x3fc2c8u: goto label_3fc2c8;
        case 0x3fc2ccu: goto label_3fc2cc;
        case 0x3fc2d0u: goto label_3fc2d0;
        case 0x3fc2d4u: goto label_3fc2d4;
        case 0x3fc2d8u: goto label_3fc2d8;
        case 0x3fc2dcu: goto label_3fc2dc;
        case 0x3fc2e0u: goto label_3fc2e0;
        case 0x3fc2e4u: goto label_3fc2e4;
        case 0x3fc2e8u: goto label_3fc2e8;
        case 0x3fc2ecu: goto label_3fc2ec;
        case 0x3fc2f0u: goto label_3fc2f0;
        case 0x3fc2f4u: goto label_3fc2f4;
        case 0x3fc2f8u: goto label_3fc2f8;
        case 0x3fc2fcu: goto label_3fc2fc;
        case 0x3fc300u: goto label_3fc300;
        case 0x3fc304u: goto label_3fc304;
        case 0x3fc308u: goto label_3fc308;
        case 0x3fc30cu: goto label_3fc30c;
        case 0x3fc310u: goto label_3fc310;
        case 0x3fc314u: goto label_3fc314;
        case 0x3fc318u: goto label_3fc318;
        case 0x3fc31cu: goto label_3fc31c;
        case 0x3fc320u: goto label_3fc320;
        case 0x3fc324u: goto label_3fc324;
        case 0x3fc328u: goto label_3fc328;
        case 0x3fc32cu: goto label_3fc32c;
        case 0x3fc330u: goto label_3fc330;
        case 0x3fc334u: goto label_3fc334;
        case 0x3fc338u: goto label_3fc338;
        case 0x3fc33cu: goto label_3fc33c;
        case 0x3fc340u: goto label_3fc340;
        case 0x3fc344u: goto label_3fc344;
        case 0x3fc348u: goto label_3fc348;
        case 0x3fc34cu: goto label_3fc34c;
        case 0x3fc350u: goto label_3fc350;
        case 0x3fc354u: goto label_3fc354;
        case 0x3fc358u: goto label_3fc358;
        case 0x3fc35cu: goto label_3fc35c;
        case 0x3fc360u: goto label_3fc360;
        case 0x3fc364u: goto label_3fc364;
        case 0x3fc368u: goto label_3fc368;
        case 0x3fc36cu: goto label_3fc36c;
        case 0x3fc370u: goto label_3fc370;
        case 0x3fc374u: goto label_3fc374;
        case 0x3fc378u: goto label_3fc378;
        case 0x3fc37cu: goto label_3fc37c;
        case 0x3fc380u: goto label_3fc380;
        case 0x3fc384u: goto label_3fc384;
        case 0x3fc388u: goto label_3fc388;
        case 0x3fc38cu: goto label_3fc38c;
        case 0x3fc390u: goto label_3fc390;
        case 0x3fc394u: goto label_3fc394;
        case 0x3fc398u: goto label_3fc398;
        case 0x3fc39cu: goto label_3fc39c;
        case 0x3fc3a0u: goto label_3fc3a0;
        case 0x3fc3a4u: goto label_3fc3a4;
        case 0x3fc3a8u: goto label_3fc3a8;
        case 0x3fc3acu: goto label_3fc3ac;
        case 0x3fc3b0u: goto label_3fc3b0;
        case 0x3fc3b4u: goto label_3fc3b4;
        case 0x3fc3b8u: goto label_3fc3b8;
        case 0x3fc3bcu: goto label_3fc3bc;
        case 0x3fc3c0u: goto label_3fc3c0;
        case 0x3fc3c4u: goto label_3fc3c4;
        case 0x3fc3c8u: goto label_3fc3c8;
        case 0x3fc3ccu: goto label_3fc3cc;
        case 0x3fc3d0u: goto label_3fc3d0;
        case 0x3fc3d4u: goto label_3fc3d4;
        case 0x3fc3d8u: goto label_3fc3d8;
        case 0x3fc3dcu: goto label_3fc3dc;
        case 0x3fc3e0u: goto label_3fc3e0;
        case 0x3fc3e4u: goto label_3fc3e4;
        case 0x3fc3e8u: goto label_3fc3e8;
        case 0x3fc3ecu: goto label_3fc3ec;
        case 0x3fc3f0u: goto label_3fc3f0;
        case 0x3fc3f4u: goto label_3fc3f4;
        case 0x3fc3f8u: goto label_3fc3f8;
        case 0x3fc3fcu: goto label_3fc3fc;
        case 0x3fc400u: goto label_3fc400;
        case 0x3fc404u: goto label_3fc404;
        case 0x3fc408u: goto label_3fc408;
        case 0x3fc40cu: goto label_3fc40c;
        case 0x3fc410u: goto label_3fc410;
        case 0x3fc414u: goto label_3fc414;
        case 0x3fc418u: goto label_3fc418;
        case 0x3fc41cu: goto label_3fc41c;
        case 0x3fc420u: goto label_3fc420;
        case 0x3fc424u: goto label_3fc424;
        case 0x3fc428u: goto label_3fc428;
        case 0x3fc42cu: goto label_3fc42c;
        case 0x3fc430u: goto label_3fc430;
        case 0x3fc434u: goto label_3fc434;
        case 0x3fc438u: goto label_3fc438;
        case 0x3fc43cu: goto label_3fc43c;
        case 0x3fc440u: goto label_3fc440;
        case 0x3fc444u: goto label_3fc444;
        case 0x3fc448u: goto label_3fc448;
        case 0x3fc44cu: goto label_3fc44c;
        case 0x3fc450u: goto label_3fc450;
        case 0x3fc454u: goto label_3fc454;
        case 0x3fc458u: goto label_3fc458;
        case 0x3fc45cu: goto label_3fc45c;
        case 0x3fc460u: goto label_3fc460;
        case 0x3fc464u: goto label_3fc464;
        case 0x3fc468u: goto label_3fc468;
        case 0x3fc46cu: goto label_3fc46c;
        case 0x3fc470u: goto label_3fc470;
        case 0x3fc474u: goto label_3fc474;
        case 0x3fc478u: goto label_3fc478;
        case 0x3fc47cu: goto label_3fc47c;
        case 0x3fc480u: goto label_3fc480;
        case 0x3fc484u: goto label_3fc484;
        case 0x3fc488u: goto label_3fc488;
        case 0x3fc48cu: goto label_3fc48c;
        case 0x3fc490u: goto label_3fc490;
        case 0x3fc494u: goto label_3fc494;
        case 0x3fc498u: goto label_3fc498;
        case 0x3fc49cu: goto label_3fc49c;
        case 0x3fc4a0u: goto label_3fc4a0;
        case 0x3fc4a4u: goto label_3fc4a4;
        case 0x3fc4a8u: goto label_3fc4a8;
        case 0x3fc4acu: goto label_3fc4ac;
        case 0x3fc4b0u: goto label_3fc4b0;
        case 0x3fc4b4u: goto label_3fc4b4;
        case 0x3fc4b8u: goto label_3fc4b8;
        case 0x3fc4bcu: goto label_3fc4bc;
        case 0x3fc4c0u: goto label_3fc4c0;
        case 0x3fc4c4u: goto label_3fc4c4;
        case 0x3fc4c8u: goto label_3fc4c8;
        case 0x3fc4ccu: goto label_3fc4cc;
        case 0x3fc4d0u: goto label_3fc4d0;
        case 0x3fc4d4u: goto label_3fc4d4;
        case 0x3fc4d8u: goto label_3fc4d8;
        case 0x3fc4dcu: goto label_3fc4dc;
        case 0x3fc4e0u: goto label_3fc4e0;
        case 0x3fc4e4u: goto label_3fc4e4;
        case 0x3fc4e8u: goto label_3fc4e8;
        case 0x3fc4ecu: goto label_3fc4ec;
        case 0x3fc4f0u: goto label_3fc4f0;
        case 0x3fc4f4u: goto label_3fc4f4;
        case 0x3fc4f8u: goto label_3fc4f8;
        case 0x3fc4fcu: goto label_3fc4fc;
        case 0x3fc500u: goto label_3fc500;
        case 0x3fc504u: goto label_3fc504;
        case 0x3fc508u: goto label_3fc508;
        case 0x3fc50cu: goto label_3fc50c;
        case 0x3fc510u: goto label_3fc510;
        case 0x3fc514u: goto label_3fc514;
        case 0x3fc518u: goto label_3fc518;
        case 0x3fc51cu: goto label_3fc51c;
        case 0x3fc520u: goto label_3fc520;
        case 0x3fc524u: goto label_3fc524;
        case 0x3fc528u: goto label_3fc528;
        case 0x3fc52cu: goto label_3fc52c;
        case 0x3fc530u: goto label_3fc530;
        case 0x3fc534u: goto label_3fc534;
        case 0x3fc538u: goto label_3fc538;
        case 0x3fc53cu: goto label_3fc53c;
        case 0x3fc540u: goto label_3fc540;
        case 0x3fc544u: goto label_3fc544;
        case 0x3fc548u: goto label_3fc548;
        case 0x3fc54cu: goto label_3fc54c;
        case 0x3fc550u: goto label_3fc550;
        case 0x3fc554u: goto label_3fc554;
        case 0x3fc558u: goto label_3fc558;
        case 0x3fc55cu: goto label_3fc55c;
        case 0x3fc560u: goto label_3fc560;
        case 0x3fc564u: goto label_3fc564;
        case 0x3fc568u: goto label_3fc568;
        case 0x3fc56cu: goto label_3fc56c;
        case 0x3fc570u: goto label_3fc570;
        case 0x3fc574u: goto label_3fc574;
        case 0x3fc578u: goto label_3fc578;
        case 0x3fc57cu: goto label_3fc57c;
        case 0x3fc580u: goto label_3fc580;
        case 0x3fc584u: goto label_3fc584;
        case 0x3fc588u: goto label_3fc588;
        case 0x3fc58cu: goto label_3fc58c;
        case 0x3fc590u: goto label_3fc590;
        case 0x3fc594u: goto label_3fc594;
        case 0x3fc598u: goto label_3fc598;
        case 0x3fc59cu: goto label_3fc59c;
        case 0x3fc5a0u: goto label_3fc5a0;
        case 0x3fc5a4u: goto label_3fc5a4;
        case 0x3fc5a8u: goto label_3fc5a8;
        case 0x3fc5acu: goto label_3fc5ac;
        case 0x3fc5b0u: goto label_3fc5b0;
        case 0x3fc5b4u: goto label_3fc5b4;
        case 0x3fc5b8u: goto label_3fc5b8;
        case 0x3fc5bcu: goto label_3fc5bc;
        case 0x3fc5c0u: goto label_3fc5c0;
        case 0x3fc5c4u: goto label_3fc5c4;
        case 0x3fc5c8u: goto label_3fc5c8;
        case 0x3fc5ccu: goto label_3fc5cc;
        case 0x3fc5d0u: goto label_3fc5d0;
        case 0x3fc5d4u: goto label_3fc5d4;
        case 0x3fc5d8u: goto label_3fc5d8;
        case 0x3fc5dcu: goto label_3fc5dc;
        case 0x3fc5e0u: goto label_3fc5e0;
        case 0x3fc5e4u: goto label_3fc5e4;
        case 0x3fc5e8u: goto label_3fc5e8;
        case 0x3fc5ecu: goto label_3fc5ec;
        case 0x3fc5f0u: goto label_3fc5f0;
        case 0x3fc5f4u: goto label_3fc5f4;
        case 0x3fc5f8u: goto label_3fc5f8;
        case 0x3fc5fcu: goto label_3fc5fc;
        case 0x3fc600u: goto label_3fc600;
        case 0x3fc604u: goto label_3fc604;
        case 0x3fc608u: goto label_3fc608;
        case 0x3fc60cu: goto label_3fc60c;
        case 0x3fc610u: goto label_3fc610;
        case 0x3fc614u: goto label_3fc614;
        case 0x3fc618u: goto label_3fc618;
        case 0x3fc61cu: goto label_3fc61c;
        case 0x3fc620u: goto label_3fc620;
        case 0x3fc624u: goto label_3fc624;
        case 0x3fc628u: goto label_3fc628;
        case 0x3fc62cu: goto label_3fc62c;
        case 0x3fc630u: goto label_3fc630;
        case 0x3fc634u: goto label_3fc634;
        case 0x3fc638u: goto label_3fc638;
        case 0x3fc63cu: goto label_3fc63c;
        case 0x3fc640u: goto label_3fc640;
        case 0x3fc644u: goto label_3fc644;
        case 0x3fc648u: goto label_3fc648;
        case 0x3fc64cu: goto label_3fc64c;
        case 0x3fc650u: goto label_3fc650;
        case 0x3fc654u: goto label_3fc654;
        case 0x3fc658u: goto label_3fc658;
        case 0x3fc65cu: goto label_3fc65c;
        case 0x3fc660u: goto label_3fc660;
        case 0x3fc664u: goto label_3fc664;
        case 0x3fc668u: goto label_3fc668;
        case 0x3fc66cu: goto label_3fc66c;
        case 0x3fc670u: goto label_3fc670;
        case 0x3fc674u: goto label_3fc674;
        case 0x3fc678u: goto label_3fc678;
        case 0x3fc67cu: goto label_3fc67c;
        case 0x3fc680u: goto label_3fc680;
        case 0x3fc684u: goto label_3fc684;
        case 0x3fc688u: goto label_3fc688;
        case 0x3fc68cu: goto label_3fc68c;
        case 0x3fc690u: goto label_3fc690;
        case 0x3fc694u: goto label_3fc694;
        case 0x3fc698u: goto label_3fc698;
        case 0x3fc69cu: goto label_3fc69c;
        case 0x3fc6a0u: goto label_3fc6a0;
        case 0x3fc6a4u: goto label_3fc6a4;
        case 0x3fc6a8u: goto label_3fc6a8;
        case 0x3fc6acu: goto label_3fc6ac;
        case 0x3fc6b0u: goto label_3fc6b0;
        case 0x3fc6b4u: goto label_3fc6b4;
        case 0x3fc6b8u: goto label_3fc6b8;
        case 0x3fc6bcu: goto label_3fc6bc;
        case 0x3fc6c0u: goto label_3fc6c0;
        case 0x3fc6c4u: goto label_3fc6c4;
        case 0x3fc6c8u: goto label_3fc6c8;
        case 0x3fc6ccu: goto label_3fc6cc;
        case 0x3fc6d0u: goto label_3fc6d0;
        case 0x3fc6d4u: goto label_3fc6d4;
        case 0x3fc6d8u: goto label_3fc6d8;
        case 0x3fc6dcu: goto label_3fc6dc;
        case 0x3fc6e0u: goto label_3fc6e0;
        case 0x3fc6e4u: goto label_3fc6e4;
        case 0x3fc6e8u: goto label_3fc6e8;
        case 0x3fc6ecu: goto label_3fc6ec;
        case 0x3fc6f0u: goto label_3fc6f0;
        case 0x3fc6f4u: goto label_3fc6f4;
        case 0x3fc6f8u: goto label_3fc6f8;
        case 0x3fc6fcu: goto label_3fc6fc;
        case 0x3fc700u: goto label_3fc700;
        case 0x3fc704u: goto label_3fc704;
        case 0x3fc708u: goto label_3fc708;
        case 0x3fc70cu: goto label_3fc70c;
        default: break;
    }

    ctx->pc = 0x3fbd70u;

label_3fbd70:
    // 0x3fbd70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3fbd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3fbd74:
    // 0x3fbd74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3fbd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3fbd78:
    // 0x3fbd78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fbd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fbd7c:
    // 0x3fbd7c: 0xc0ff6a0  jal         func_3FDA80
label_3fbd80:
    if (ctx->pc == 0x3FBD80u) {
        ctx->pc = 0x3FBD80u;
            // 0x3fbd80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FBD84u;
        goto label_3fbd84;
    }
    ctx->pc = 0x3FBD7Cu;
    SET_GPR_U32(ctx, 31, 0x3FBD84u);
    ctx->pc = 0x3FBD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBD7Cu;
            // 0x3fbd80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FDA80u;
    if (runtime->hasFunction(0x3FDA80u)) {
        auto targetFn = runtime->lookupFunction(0x3FDA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBD84u; }
        if (ctx->pc != 0x3FBD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDA80_0x3fda80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBD84u; }
        if (ctx->pc != 0x3FBD84u) { return; }
    }
    ctx->pc = 0x3FBD84u;
label_3fbd84:
    // 0x3fbd84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3fbd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fbd88:
    // 0x3fbd88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3fbd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3fbd8c:
    // 0x3fbd8c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x3fbd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
label_3fbd90:
    // 0x3fbd90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fbd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fbd94:
    // 0x3fbd94: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x3fbd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_3fbd98:
    // 0x3fbd98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3fbd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fbd9c:
    // 0x3fbd9c: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x3fbd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
label_3fbda0:
    // 0x3fbda0: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x3fbda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_3fbda4:
    // 0x3fbda4: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x3fbda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_3fbda8:
    // 0x3fbda8: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x3fbda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_3fbdac:
    // 0x3fbdac: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x3fbdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_3fbdb0:
    // 0x3fbdb0: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x3fbdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_3fbdb4:
    // 0x3fbdb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fbdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3fbdb8:
    // 0x3fbdb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3fbdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3fbdbc:
    // 0x3fbdbc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3fbdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3fbdc0:
    // 0x3fbdc0: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x3fbdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_3fbdc4:
    // 0x3fbdc4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x3fbdc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fbdc8:
    // 0x3fbdc8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_3fbdcc:
    if (ctx->pc == 0x3FBDCCu) {
        ctx->pc = 0x3FBDCCu;
            // 0x3fbdcc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3FBDD0u;
        goto label_3fbdd0;
    }
    ctx->pc = 0x3FBDC8u;
    {
        const bool branch_taken_0x3fbdc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FBDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBDC8u;
            // 0x3fbdcc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbdc8) {
            ctx->pc = 0x3FBDB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fbdb0;
        }
    }
    ctx->pc = 0x3FBDD0u;
label_3fbdd0:
    // 0x3fbdd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fbdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3fbdd4:
    // 0x3fbdd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fbdd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fbdd8:
    // 0x3fbdd8: 0x3e00008  jr          $ra
label_3fbddc:
    if (ctx->pc == 0x3FBDDCu) {
        ctx->pc = 0x3FBDDCu;
            // 0x3fbddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3FBDE0u;
        goto label_3fbde0;
    }
    ctx->pc = 0x3FBDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FBDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBDD8u;
            // 0x3fbddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FBDE0u;
label_3fbde0:
    // 0x3fbde0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3fbde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3fbde4:
    // 0x3fbde4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3fbde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3fbde8:
    // 0x3fbde8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3fbde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3fbdec:
    // 0x3fbdec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3fbdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3fbdf0:
    // 0x3fbdf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fbdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fbdf4:
    // 0x3fbdf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fbdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fbdf8:
    // 0x3fbdf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fbdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fbdfc:
    // 0x3fbdfc: 0x8c930070  lw          $s3, 0x70($a0)
    ctx->pc = 0x3fbdfcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3fbe00:
    // 0x3fbe00: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
label_3fbe04:
    if (ctx->pc == 0x3FBE04u) {
        ctx->pc = 0x3FBE04u;
            // 0x3fbe04: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FBE08u;
        goto label_3fbe08;
    }
    ctx->pc = 0x3FBE00u;
    {
        const bool branch_taken_0x3fbe00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBE00u;
            // 0x3fbe04: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbe00) {
            ctx->pc = 0x3FBEA0u;
            goto label_3fbea0;
        }
    }
    ctx->pc = 0x3FBE08u;
label_3fbe08:
    // 0x3fbe08: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3fbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3fbe0c:
    // 0x3fbe0c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3fbe0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3fbe10:
    // 0x3fbe10: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x3fbe10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3fbe14:
    // 0x3fbe14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3fbe14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fbe18:
    // 0x3fbe18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3fbe18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fbe1c:
    // 0x3fbe1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fbe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fbe20:
    // 0x3fbe20: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3fbe20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fbe24:
    // 0x3fbe24: 0x0  nop
    ctx->pc = 0x3fbe24u;
    // NOP
label_3fbe28:
    // 0x3fbe28: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x3fbe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3fbe2c:
    // 0x3fbe2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fbe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fbe30:
    // 0x3fbe30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fbe30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fbe34:
    // 0x3fbe34: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3fbe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3fbe38:
    // 0x3fbe38: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3fbe38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3fbe3c:
    // 0x3fbe3c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x3fbe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_3fbe40:
    // 0x3fbe40: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3fbe40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3fbe44:
    // 0x3fbe44: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3fbe44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3fbe48:
    // 0x3fbe48: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x3fbe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_3fbe4c:
    // 0x3fbe4c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3fbe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3fbe50:
    // 0x3fbe50: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3fbe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3fbe54:
    // 0x3fbe54: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3fbe54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fbe58:
    // 0x3fbe58: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3fbe58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_3fbe5c:
    // 0x3fbe5c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fbe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fbe60:
    // 0x3fbe60: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fbe60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fbe64:
    // 0x3fbe64: 0xc08bff0  jal         func_22FFC0
label_3fbe68:
    if (ctx->pc == 0x3FBE68u) {
        ctx->pc = 0x3FBE68u;
            // 0x3fbe68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FBE6Cu;
        goto label_3fbe6c;
    }
    ctx->pc = 0x3FBE64u;
    SET_GPR_U32(ctx, 31, 0x3FBE6Cu);
    ctx->pc = 0x3FBE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBE64u;
            // 0x3fbe68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBE6Cu; }
        if (ctx->pc != 0x3FBE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBE6Cu; }
        if (ctx->pc != 0x3FBE6Cu) { return; }
    }
    ctx->pc = 0x3FBE6Cu;
label_3fbe6c:
    // 0x3fbe6c: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x3fbe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_3fbe70:
    // 0x3fbe70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3fbe70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3fbe74:
    // 0x3fbe74: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x3fbe74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fbe78:
    // 0x3fbe78: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_3fbe7c:
    if (ctx->pc == 0x3FBE7Cu) {
        ctx->pc = 0x3FBE7Cu;
            // 0x3fbe7c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3FBE80u;
        goto label_3fbe80;
    }
    ctx->pc = 0x3FBE78u;
    {
        const bool branch_taken_0x3fbe78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FBE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBE78u;
            // 0x3fbe7c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbe78) {
            ctx->pc = 0x3FBE28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fbe28;
        }
    }
    ctx->pc = 0x3FBE80u;
label_3fbe80:
    // 0x3fbe80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fbe80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fbe84:
    // 0x3fbe84: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3fbe84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_3fbe88:
    // 0x3fbe88: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x3fbe88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_3fbe8c:
    // 0x3fbe8c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x3fbe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_3fbe90:
    // 0x3fbe90: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x3fbe90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_3fbe94:
    // 0x3fbe94: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x3fbe94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_3fbe98:
    // 0x3fbe98: 0x1660ffdb  bnez        $s3, . + 4 + (-0x25 << 2)
label_3fbe9c:
    if (ctx->pc == 0x3FBE9Cu) {
        ctx->pc = 0x3FBE9Cu;
            // 0x3fbe9c: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x3FBEA0u;
        goto label_3fbea0;
    }
    ctx->pc = 0x3FBE98u;
    {
        const bool branch_taken_0x3fbe98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FBE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBE98u;
            // 0x3fbe9c: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbe98) {
            ctx->pc = 0x3FBE08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fbe08;
        }
    }
    ctx->pc = 0x3FBEA0u;
label_3fbea0:
    // 0x3fbea0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3fbea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3fbea4:
    // 0x3fbea4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3fbea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fbea8:
    // 0x3fbea8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3fbea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fbeac:
    // 0x3fbeac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fbeacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fbeb0:
    // 0x3fbeb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fbeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fbeb4:
    // 0x3fbeb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fbeb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fbeb8:
    // 0x3fbeb8: 0x3e00008  jr          $ra
label_3fbebc:
    if (ctx->pc == 0x3FBEBCu) {
        ctx->pc = 0x3FBEBCu;
            // 0x3fbebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3FBEC0u;
        goto label_3fbec0;
    }
    ctx->pc = 0x3FBEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FBEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBEB8u;
            // 0x3fbebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FBEC0u;
label_3fbec0:
    // 0x3fbec0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3fbec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3fbec4:
    // 0x3fbec4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fbec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fbec8:
    // 0x3fbec8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3fbec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3fbecc:
    // 0x3fbecc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3fbeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3fbed0:
    // 0x3fbed0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3fbed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3fbed4:
    // 0x3fbed4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3fbed4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fbed8:
    // 0x3fbed8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3fbed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3fbedc:
    // 0x3fbedc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fbedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fbee0:
    // 0x3fbee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fbee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fbee4:
    // 0x3fbee4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fbee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fbee8:
    // 0x3fbee8: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x3fbee8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3fbeec:
    // 0x3fbeec: 0x8c9000b4  lw          $s0, 0xB4($a0)
    ctx->pc = 0x3fbeecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_3fbef0:
    // 0x3fbef0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fbef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fbef4:
    // 0x3fbef4: 0x8c73e370  lw          $s3, -0x1C90($v1)
    ctx->pc = 0x3fbef4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_3fbef8:
    // 0x3fbef8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3fbef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3fbefc:
    // 0x3fbefc: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x3fbefcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3fbf00:
    // 0x3fbf00: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3fbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3fbf04:
    // 0x3fbf04: 0x8cc60130  lw          $a2, 0x130($a2)
    ctx->pc = 0x3fbf04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_3fbf08:
    // 0x3fbf08: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x3fbf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3fbf0c:
    // 0x3fbf0c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3fbf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3fbf10:
    // 0x3fbf10: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3fbf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3fbf14:
    // 0x3fbf14: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x3fbf14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3fbf18:
    // 0x3fbf18: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x3fbf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3fbf1c:
    // 0x3fbf1c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3fbf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3fbf20:
    // 0x3fbf20: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3fbf20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3fbf24:
    // 0x3fbf24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fbf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fbf28:
    // 0x3fbf28: 0x8c840cb4  lw          $a0, 0xCB4($a0)
    ctx->pc = 0x3fbf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_3fbf2c:
    // 0x3fbf2c: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_3fbf30:
    if (ctx->pc == 0x3FBF30u) {
        ctx->pc = 0x3FBF30u;
            // 0x3fbf30: 0x24b20010  addiu       $s2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x3FBF34u;
        goto label_3fbf34;
    }
    ctx->pc = 0x3FBF2Cu;
    {
        const bool branch_taken_0x3fbf2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3FBF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBF2Cu;
            // 0x3fbf30: 0x24b20010  addiu       $s2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbf2c) {
            ctx->pc = 0x3FBF78u;
            goto label_3fbf78;
        }
    }
    ctx->pc = 0x3FBF34u;
label_3fbf34:
    // 0x3fbf34: 0x8eb10070  lw          $s1, 0x70($s5)
    ctx->pc = 0x3fbf34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3fbf38:
    // 0x3fbf38: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_3fbf3c:
    if (ctx->pc == 0x3FBF3Cu) {
        ctx->pc = 0x3FBF40u;
        goto label_3fbf40;
    }
    ctx->pc = 0x3FBF38u;
    {
        const bool branch_taken_0x3fbf38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbf38) {
            ctx->pc = 0x3FBF78u;
            goto label_3fbf78;
        }
    }
    ctx->pc = 0x3FBF40u;
label_3fbf40:
    // 0x3fbf40: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x3fbf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3fbf44:
    // 0x3fbf44: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3fbf44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3fbf48:
    // 0x3fbf48: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3fbf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3fbf4c:
    // 0x3fbf4c: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x3fbf4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
label_3fbf50:
    // 0x3fbf50: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3fbf50u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_3fbf54:
    // 0x3fbf54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3fbf54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fbf58:
    // 0x3fbf58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fbf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fbf5c:
    // 0x3fbf5c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3fbf5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fbf60:
    // 0x3fbf60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3fbf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fbf64:
    // 0x3fbf64: 0xc0ff2b4  jal         func_3FCAD0
label_3fbf68:
    if (ctx->pc == 0x3FBF68u) {
        ctx->pc = 0x3FBF68u;
            // 0x3fbf68: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FBF6Cu;
        goto label_3fbf6c;
    }
    ctx->pc = 0x3FBF64u;
    SET_GPR_U32(ctx, 31, 0x3FBF6Cu);
    ctx->pc = 0x3FBF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBF64u;
            // 0x3fbf68: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FCAD0u;
    if (runtime->hasFunction(0x3FCAD0u)) {
        auto targetFn = runtime->lookupFunction(0x3FCAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBF6Cu; }
        if (ctx->pc != 0x3FBF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FCAD0_0x3fcad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBF6Cu; }
        if (ctx->pc != 0x3FBF6Cu) { return; }
    }
    ctx->pc = 0x3FBF6Cu;
label_3fbf6c:
    // 0x3fbf6c: 0x5620fff5  bnel        $s1, $zero, . + 4 + (-0xB << 2)
label_3fbf70:
    if (ctx->pc == 0x3FBF70u) {
        ctx->pc = 0x3FBF70u;
            // 0x3fbf70: 0x8ea20074  lw          $v0, 0x74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
        ctx->pc = 0x3FBF74u;
        goto label_3fbf74;
    }
    ctx->pc = 0x3FBF6Cu;
    {
        const bool branch_taken_0x3fbf6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fbf6c) {
            ctx->pc = 0x3FBF70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBF6Cu;
            // 0x3fbf70: 0x8ea20074  lw          $v0, 0x74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FBF44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fbf44;
        }
    }
    ctx->pc = 0x3FBF74u;
label_3fbf74:
    // 0x3fbf74: 0x0  nop
    ctx->pc = 0x3fbf74u;
    // NOP
label_3fbf78:
    // 0x3fbf78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3fbf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3fbf7c:
    // 0x3fbf7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3fbf7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fbf80:
    // 0x3fbf80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3fbf80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fbf84:
    // 0x3fbf84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3fbf84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fbf88:
    // 0x3fbf88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fbf88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fbf8c:
    // 0x3fbf8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fbf8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fbf90:
    // 0x3fbf90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fbf90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fbf94:
    // 0x3fbf94: 0x3e00008  jr          $ra
label_3fbf98:
    if (ctx->pc == 0x3FBF98u) {
        ctx->pc = 0x3FBF98u;
            // 0x3fbf98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3FBF9Cu;
        goto label_3fbf9c;
    }
    ctx->pc = 0x3FBF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FBF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBF94u;
            // 0x3fbf98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FBF9Cu;
label_3fbf9c:
    // 0x3fbf9c: 0x0  nop
    ctx->pc = 0x3fbf9cu;
    // NOP
label_3fbfa0:
    // 0x3fbfa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3fbfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3fbfa4:
    // 0x3fbfa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3fbfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fbfa8:
    // 0x3fbfa8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3fbfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3fbfac:
    // 0x3fbfac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3fbfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3fbfb0:
    // 0x3fbfb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3fbfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3fbfb4:
    // 0x3fbfb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fbfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fbfb8:
    // 0x3fbfb8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3fbfb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fbfbc:
    // 0x3fbfbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fbfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fbfc0:
    // 0x3fbfc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fbfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fbfc4:
    // 0x3fbfc4: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3fbfc4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3fbfc8:
    // 0x3fbfc8: 0x50830037  beql        $a0, $v1, . + 4 + (0x37 << 2)
label_3fbfcc:
    if (ctx->pc == 0x3FBFCCu) {
        ctx->pc = 0x3FBFCCu;
            // 0x3fbfcc: 0x8e700070  lw          $s0, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x3FBFD0u;
        goto label_3fbfd0;
    }
    ctx->pc = 0x3FBFC8u;
    {
        const bool branch_taken_0x3fbfc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fbfc8) {
            ctx->pc = 0x3FBFCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBFC8u;
            // 0x3fbfcc: 0x8e700070  lw          $s0, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC0A8u;
            goto label_3fc0a8;
        }
    }
    ctx->pc = 0x3FBFD0u;
label_3fbfd0:
    // 0x3fbfd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3fbfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fbfd4:
    // 0x3fbfd4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3fbfd8:
    if (ctx->pc == 0x3FBFD8u) {
        ctx->pc = 0x3FBFDCu;
        goto label_3fbfdc;
    }
    ctx->pc = 0x3FBFD4u;
    {
        const bool branch_taken_0x3fbfd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fbfd4) {
            ctx->pc = 0x3FBFE4u;
            goto label_3fbfe4;
        }
    }
    ctx->pc = 0x3FBFDCu;
label_3fbfdc:
    // 0x3fbfdc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_3fbfe0:
    if (ctx->pc == 0x3FBFE0u) {
        ctx->pc = 0x3FBFE4u;
        goto label_3fbfe4;
    }
    ctx->pc = 0x3FBFDCu;
    {
        const bool branch_taken_0x3fbfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbfdc) {
            ctx->pc = 0x3FC0D0u;
            goto label_3fc0d0;
        }
    }
    ctx->pc = 0x3FBFE4u;
label_3fbfe4:
    // 0x3fbfe4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3fbfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3fbfe8:
    // 0x3fbfe8: 0x8e720070  lw          $s2, 0x70($s3)
    ctx->pc = 0x3fbfe8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_3fbfec:
    // 0x3fbfec: 0xc442b850  lwc1        $f2, -0x47B0($v0)
    ctx->pc = 0x3fbfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fbff0:
    // 0x3fbff0: 0x8e7000b4  lw          $s0, 0xB4($s3)
    ctx->pc = 0x3fbff0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_3fbff4:
    // 0x3fbff4: 0x8e7100b8  lw          $s1, 0xB8($s3)
    ctx->pc = 0x3fbff4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_3fbff8:
    // 0x3fbff8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3fbff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3fbffc:
    // 0x3fbffc: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3fbffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3fc000:
    // 0x3fc000: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3fc000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3fc004:
    // 0x3fc004: 0xc441b854  lwc1        $f1, -0x47AC($v0)
    ctx->pc = 0x3fc004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fc008:
    // 0x3fc008: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3fc008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_3fc00c:
    // 0x3fc00c: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x3fc00cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3fc010:
    // 0x3fc010: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3fc010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3fc014:
    // 0x3fc014: 0xc440b858  lwc1        $f0, -0x47A8($v0)
    ctx->pc = 0x3fc014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fc018:
    // 0x3fc018: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x3fc018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3fc01c:
    // 0x3fc01c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc020:
    // 0x3fc020: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3fc020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3fc024:
    // 0x3fc024: 0xc0a7a88  jal         func_29EA20
label_3fc028:
    if (ctx->pc == 0x3FC028u) {
        ctx->pc = 0x3FC028u;
            // 0x3fc028: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x3FC02Cu;
        goto label_3fc02c;
    }
    ctx->pc = 0x3FC024u;
    SET_GPR_U32(ctx, 31, 0x3FC02Cu);
    ctx->pc = 0x3FC028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC024u;
            // 0x3fc028: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC02Cu; }
        if (ctx->pc != 0x3FC02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC02Cu; }
        if (ctx->pc != 0x3FC02Cu) { return; }
    }
    ctx->pc = 0x3FC02Cu;
label_3fc02c:
    // 0x3fc02c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3fc02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3fc030:
    // 0x3fc030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fc030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fc034:
    // 0x3fc034: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3fc038:
    if (ctx->pc == 0x3FC038u) {
        ctx->pc = 0x3FC038u;
            // 0x3fc038: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3FC03Cu;
        goto label_3fc03c;
    }
    ctx->pc = 0x3FC034u;
    {
        const bool branch_taken_0x3fc034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC034u;
            // 0x3fc038: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc034) {
            ctx->pc = 0x3FC050u;
            goto label_3fc050;
        }
    }
    ctx->pc = 0x3FC03Cu;
label_3fc03c:
    // 0x3fc03c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3fc03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3fc040:
    // 0x3fc040: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3fc040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3fc044:
    // 0x3fc044: 0xc0804bc  jal         func_2012F0
label_3fc048:
    if (ctx->pc == 0x3FC048u) {
        ctx->pc = 0x3FC048u;
            // 0x3fc048: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3FC04Cu;
        goto label_3fc04c;
    }
    ctx->pc = 0x3FC044u;
    SET_GPR_U32(ctx, 31, 0x3FC04Cu);
    ctx->pc = 0x3FC048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC044u;
            // 0x3fc048: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC04Cu; }
        if (ctx->pc != 0x3FC04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC04Cu; }
        if (ctx->pc != 0x3FC04Cu) { return; }
    }
    ctx->pc = 0x3FC04Cu;
label_3fc04c:
    // 0x3fc04c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fc04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fc050:
    // 0x3fc050: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_3fc054:
    if (ctx->pc == 0x3FC054u) {
        ctx->pc = 0x3FC054u;
            // 0x3fc054: 0xae6400bc  sw          $a0, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 4));
        ctx->pc = 0x3FC058u;
        goto label_3fc058;
    }
    ctx->pc = 0x3FC050u;
    {
        const bool branch_taken_0x3fc050 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC050u;
            // 0x3fc054: 0xae6400bc  sw          $a0, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc050) {
            ctx->pc = 0x3FC090u;
            goto label_3fc090;
        }
    }
    ctx->pc = 0x3FC058u;
label_3fc058:
    // 0x3fc058: 0x12a080  sll         $s4, $s2, 2
    ctx->pc = 0x3fc058u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3fc05c:
    // 0x3fc05c: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x3fc05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_3fc060:
    // 0x3fc060: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x3fc060u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_3fc064:
    // 0x3fc064: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x3fc064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
label_3fc068:
    // 0x3fc068: 0x8e6500a8  lw          $a1, 0xA8($s3)
    ctx->pc = 0x3fc068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_3fc06c:
    // 0x3fc06c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3fc06cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_3fc070:
    // 0x3fc070: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3fc070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc074:
    // 0x3fc074: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3fc074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3fc078:
    // 0x3fc078: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3fc078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fc07c:
    // 0x3fc07c: 0xc0ff7e8  jal         func_3FDFA0
label_3fc080:
    if (ctx->pc == 0x3FC080u) {
        ctx->pc = 0x3FC080u;
            // 0x3fc080: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x3FC084u;
        goto label_3fc084;
    }
    ctx->pc = 0x3FC07Cu;
    SET_GPR_U32(ctx, 31, 0x3FC084u);
    ctx->pc = 0x3FC080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC07Cu;
            // 0x3fc080: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FDFA0u;
    if (runtime->hasFunction(0x3FDFA0u)) {
        auto targetFn = runtime->lookupFunction(0x3FDFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC084u; }
        if (ctx->pc != 0x3FC084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDFA0_0x3fdfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC084u; }
        if (ctx->pc != 0x3FC084u) { return; }
    }
    ctx->pc = 0x3FC084u;
label_3fc084:
    // 0x3fc084: 0x5640fff6  bnel        $s2, $zero, . + 4 + (-0xA << 2)
label_3fc088:
    if (ctx->pc == 0x3FC088u) {
        ctx->pc = 0x3FC088u;
            // 0x3fc088: 0x8e620074  lw          $v0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->pc = 0x3FC08Cu;
        goto label_3fc08c;
    }
    ctx->pc = 0x3FC084u;
    {
        const bool branch_taken_0x3fc084 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fc084) {
            ctx->pc = 0x3FC088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC084u;
            // 0x3fc088: 0x8e620074  lw          $v0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fc060;
        }
    }
    ctx->pc = 0x3FC08Cu;
label_3fc08c:
    // 0x3fc08c: 0x0  nop
    ctx->pc = 0x3fc08cu;
    // NOP
label_3fc090:
    // 0x3fc090: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3fc090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3fc094:
    // 0x3fc094: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3fc094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3fc098:
    // 0x3fc098: 0x320f809  jalr        $t9
label_3fc09c:
    if (ctx->pc == 0x3FC09Cu) {
        ctx->pc = 0x3FC09Cu;
            // 0x3fc09c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FC0A0u;
        goto label_3fc0a0;
    }
    ctx->pc = 0x3FC098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FC0A0u);
        ctx->pc = 0x3FC09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC098u;
            // 0x3fc09c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FC0A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FC0A0u; }
            if (ctx->pc != 0x3FC0A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3FC0A0u;
label_3fc0a0:
    // 0x3fc0a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3fc0a4:
    if (ctx->pc == 0x3FC0A4u) {
        ctx->pc = 0x3FC0A8u;
        goto label_3fc0a8;
    }
    ctx->pc = 0x3FC0A0u;
    {
        const bool branch_taken_0x3fc0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc0a0) {
            ctx->pc = 0x3FC0D0u;
            goto label_3fc0d0;
        }
    }
    ctx->pc = 0x3FC0A8u;
label_3fc0a8:
    // 0x3fc0a8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3fc0ac:
    if (ctx->pc == 0x3FC0ACu) {
        ctx->pc = 0x3FC0B0u;
        goto label_3fc0b0;
    }
    ctx->pc = 0x3FC0A8u;
    {
        const bool branch_taken_0x3fc0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc0a8) {
            ctx->pc = 0x3FC0D0u;
            goto label_3fc0d0;
        }
    }
    ctx->pc = 0x3FC0B0u;
label_3fc0b0:
    // 0x3fc0b0: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x3fc0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_3fc0b4:
    // 0x3fc0b4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3fc0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3fc0b8:
    // 0x3fc0b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3fc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3fc0bc:
    // 0x3fc0bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fc0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fc0c0:
    // 0x3fc0c0: 0xc0ff44c  jal         func_3FD130
label_3fc0c4:
    if (ctx->pc == 0x3FC0C4u) {
        ctx->pc = 0x3FC0C4u;
            // 0x3fc0c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3FC0C8u;
        goto label_3fc0c8;
    }
    ctx->pc = 0x3FC0C0u;
    SET_GPR_U32(ctx, 31, 0x3FC0C8u);
    ctx->pc = 0x3FC0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC0C0u;
            // 0x3fc0c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FD130u;
    if (runtime->hasFunction(0x3FD130u)) {
        auto targetFn = runtime->lookupFunction(0x3FD130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC0C8u; }
        if (ctx->pc != 0x3FC0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FD130_0x3fd130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC0C8u; }
        if (ctx->pc != 0x3FC0C8u) { return; }
    }
    ctx->pc = 0x3FC0C8u;
label_3fc0c8:
    // 0x3fc0c8: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
label_3fc0cc:
    if (ctx->pc == 0x3FC0CCu) {
        ctx->pc = 0x3FC0CCu;
            // 0x3fc0cc: 0x8e620074  lw          $v0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->pc = 0x3FC0D0u;
        goto label_3fc0d0;
    }
    ctx->pc = 0x3FC0C8u;
    {
        const bool branch_taken_0x3fc0c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fc0c8) {
            ctx->pc = 0x3FC0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC0C8u;
            // 0x3fc0cc: 0x8e620074  lw          $v0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC0B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fc0b4;
        }
    }
    ctx->pc = 0x3FC0D0u;
label_3fc0d0:
    // 0x3fc0d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3fc0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3fc0d4:
    // 0x3fc0d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3fc0d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fc0d8:
    // 0x3fc0d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3fc0d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fc0dc:
    // 0x3fc0dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fc0dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fc0e0:
    // 0x3fc0e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fc0e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fc0e4:
    // 0x3fc0e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fc0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fc0e8:
    // 0x3fc0e8: 0x3e00008  jr          $ra
label_3fc0ec:
    if (ctx->pc == 0x3FC0ECu) {
        ctx->pc = 0x3FC0ECu;
            // 0x3fc0ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3FC0F0u;
        goto label_3fc0f0;
    }
    ctx->pc = 0x3FC0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FC0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC0E8u;
            // 0x3fc0ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FC0F0u;
label_3fc0f0:
    // 0x3fc0f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3fc0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3fc0f4:
    // 0x3fc0f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3fc0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3fc0f8:
    // 0x3fc0f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3fc0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3fc0fc:
    // 0x3fc0fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3fc0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3fc100:
    // 0x3fc100: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fc100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fc104:
    // 0x3fc104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fc104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fc108:
    // 0x3fc108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fc108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fc10c:
    // 0x3fc10c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fc10cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fc110:
    // 0x3fc110: 0x8c940070  lw          $s4, 0x70($a0)
    ctx->pc = 0x3fc110u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3fc114:
    // 0x3fc114: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fc114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fc118:
    // 0x3fc118: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3fc118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fc11c:
    // 0x3fc11c: 0xc10056c  jal         func_4015B0
label_3fc120:
    if (ctx->pc == 0x3FC120u) {
        ctx->pc = 0x3FC120u;
            // 0x3fc120: 0x262400ac  addiu       $a0, $s1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
        ctx->pc = 0x3FC124u;
        goto label_3fc124;
    }
    ctx->pc = 0x3FC11Cu;
    SET_GPR_U32(ctx, 31, 0x3FC124u);
    ctx->pc = 0x3FC120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC11Cu;
            // 0x3fc120: 0x262400ac  addiu       $a0, $s1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4015B0u;
    if (runtime->hasFunction(0x4015B0u)) {
        auto targetFn = runtime->lookupFunction(0x4015B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC124u; }
        if (ctx->pc != 0x3FC124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004015B0_0x4015b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC124u; }
        if (ctx->pc != 0x3FC124u) { return; }
    }
    ctx->pc = 0x3FC124u;
label_3fc124:
    // 0x3fc124: 0x8e3300b4  lw          $s3, 0xB4($s1)
    ctx->pc = 0x3fc124u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_3fc128:
    // 0x3fc128: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x3fc128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3fc12c:
    // 0x3fc12c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3fc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fc130:
    // 0x3fc130: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fc130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fc134:
    // 0x3fc134: 0xc075128  jal         func_1D44A0
label_3fc138:
    if (ctx->pc == 0x3FC138u) {
        ctx->pc = 0x3FC138u;
            // 0x3fc138: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x3FC13Cu;
        goto label_3fc13c;
    }
    ctx->pc = 0x3FC134u;
    SET_GPR_U32(ctx, 31, 0x3FC13Cu);
    ctx->pc = 0x3FC138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC134u;
            // 0x3fc138: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC13Cu; }
        if (ctx->pc != 0x3FC13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC13Cu; }
        if (ctx->pc != 0x3FC13Cu) { return; }
    }
    ctx->pc = 0x3FC13Cu;
label_3fc13c:
    // 0x3fc13c: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x3fc13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
label_3fc140:
    // 0x3fc140: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc144:
    // 0x3fc144: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3fc144u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_3fc148:
    // 0x3fc148: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3fc148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3fc14c:
    // 0x3fc14c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3fc14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fc150:
    // 0x3fc150: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3fc150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3fc154:
    // 0x3fc154: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc154u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc158:
    // 0x3fc158: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc15c:
    if (ctx->pc == 0x3FC15Cu) {
        ctx->pc = 0x3FC15Cu;
            // 0x3fc15c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3FC160u;
        goto label_3fc160;
    }
    ctx->pc = 0x3FC158u;
    {
        const bool branch_taken_0x3fc158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc158) {
            ctx->pc = 0x3FC15Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC158u;
            // 0x3fc15c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC16Cu;
            goto label_3fc16c;
        }
    }
    ctx->pc = 0x3FC160u;
label_3fc160:
    // 0x3fc160: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc164:
    // 0x3fc164: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3fc164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3fc168:
    // 0x3fc168: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3fc168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fc16c:
    // 0x3fc16c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc170:
    // 0x3fc170: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3fc170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3fc174:
    // 0x3fc174: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fc174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fc178:
    // 0x3fc178: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc17c:
    // 0x3fc17c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc180:
    if (ctx->pc == 0x3FC180u) {
        ctx->pc = 0x3FC180u;
            // 0x3fc180: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3FC184u;
        goto label_3fc184;
    }
    ctx->pc = 0x3FC17Cu;
    {
        const bool branch_taken_0x3fc17c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc17c) {
            ctx->pc = 0x3FC180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC17Cu;
            // 0x3fc180: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC190u;
            goto label_3fc190;
        }
    }
    ctx->pc = 0x3FC184u;
label_3fc184:
    // 0x3fc184: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc188:
    // 0x3fc188: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3fc188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3fc18c:
    // 0x3fc18c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3fc18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fc190:
    // 0x3fc190: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc194:
    // 0x3fc194: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3fc194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3fc198:
    // 0x3fc198: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fc198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fc19c:
    // 0x3fc19c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc19cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc1a0:
    // 0x3fc1a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc1a4:
    if (ctx->pc == 0x3FC1A4u) {
        ctx->pc = 0x3FC1A4u;
            // 0x3fc1a4: 0x13183c  dsll32      $v1, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
        ctx->pc = 0x3FC1A8u;
        goto label_3fc1a8;
    }
    ctx->pc = 0x3FC1A0u;
    {
        const bool branch_taken_0x3fc1a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc1a0) {
            ctx->pc = 0x3FC1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC1A0u;
            // 0x3fc1a4: 0x13183c  dsll32      $v1, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC1B4u;
            goto label_3fc1b4;
        }
    }
    ctx->pc = 0x3FC1A8u;
label_3fc1a8:
    // 0x3fc1a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc1ac:
    // 0x3fc1ac: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3fc1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3fc1b0:
    // 0x3fc1b0: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x3fc1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
label_3fc1b4:
    // 0x3fc1b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc1b8:
    // 0x3fc1b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3fc1b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3fc1bc:
    // 0x3fc1bc: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3fc1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3fc1c0:
    // 0x3fc1c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3fc1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fc1c4:
    // 0x3fc1c4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fc1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fc1c8:
    // 0x3fc1c8: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x3fc1c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3fc1cc:
    // 0x3fc1cc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc1ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc1d0:
    // 0x3fc1d0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc1d4:
    if (ctx->pc == 0x3FC1D4u) {
        ctx->pc = 0x3FC1D4u;
            // 0x3fc1d4: 0x13183c  dsll32      $v1, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
        ctx->pc = 0x3FC1D8u;
        goto label_3fc1d8;
    }
    ctx->pc = 0x3FC1D0u;
    {
        const bool branch_taken_0x3fc1d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc1d0) {
            ctx->pc = 0x3FC1D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC1D0u;
            // 0x3fc1d4: 0x13183c  dsll32      $v1, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC1E4u;
            goto label_3fc1e4;
        }
    }
    ctx->pc = 0x3FC1D8u;
label_3fc1d8:
    // 0x3fc1d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc1dc:
    // 0x3fc1dc: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3fc1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3fc1e0:
    // 0x3fc1e0: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x3fc1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
label_3fc1e4:
    // 0x3fc1e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc1e8:
    // 0x3fc1e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3fc1e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3fc1ec:
    // 0x3fc1ec: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3fc1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3fc1f0:
    // 0x3fc1f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3fc1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fc1f4:
    // 0x3fc1f4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fc1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fc1f8:
    // 0x3fc1f8: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x3fc1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3fc1fc:
    // 0x3fc1fc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc1fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc200:
    // 0x3fc200: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3fc204:
    if (ctx->pc == 0x3FC204u) {
        ctx->pc = 0x3FC208u;
        goto label_3fc208;
    }
    ctx->pc = 0x3FC200u;
    {
        const bool branch_taken_0x3fc200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc200) {
            ctx->pc = 0x3FC210u;
            goto label_3fc210;
        }
    }
    ctx->pc = 0x3FC208u;
label_3fc208:
    // 0x3fc208: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc20c:
    // 0x3fc20c: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3fc20cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3fc210:
    // 0x3fc210: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc214:
    // 0x3fc214: 0x8c42e3c8  lw          $v0, -0x1C38($v0)
    ctx->pc = 0x3fc214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960072)));
label_3fc218:
    // 0x3fc218: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x3fc218u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3fc21c:
    // 0x3fc21c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3fc220:
    if (ctx->pc == 0x3FC220u) {
        ctx->pc = 0x3FC224u;
        goto label_3fc224;
    }
    ctx->pc = 0x3FC21Cu;
    {
        const bool branch_taken_0x3fc21c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc21c) {
            ctx->pc = 0x3FC22Cu;
            goto label_3fc22c;
        }
    }
    ctx->pc = 0x3FC224u;
label_3fc224:
    // 0x3fc224: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc228:
    // 0x3fc228: 0xac54e3c8  sw          $s4, -0x1C38($v0)
    ctx->pc = 0x3fc228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960072), GPR_U32(ctx, 20));
label_3fc22c:
    // 0x3fc22c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc230:
    // 0x3fc230: 0x8c42e3d0  lw          $v0, -0x1C30($v0)
    ctx->pc = 0x3fc230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960080)));
label_3fc234:
    // 0x3fc234: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x3fc234u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3fc238:
    // 0x3fc238: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc23c:
    if (ctx->pc == 0x3FC23Cu) {
        ctx->pc = 0x3FC23Cu;
            // 0x3fc23c: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->pc = 0x3FC240u;
        goto label_3fc240;
    }
    ctx->pc = 0x3FC238u;
    {
        const bool branch_taken_0x3fc238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc238) {
            ctx->pc = 0x3FC23Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC238u;
            // 0x3fc23c: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC24Cu;
            goto label_3fc24c;
        }
    }
    ctx->pc = 0x3FC240u;
label_3fc240:
    // 0x3fc240: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc244:
    // 0x3fc244: 0xac54e3d0  sw          $s4, -0x1C30($v0)
    ctx->pc = 0x3fc244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960080), GPR_U32(ctx, 20));
label_3fc248:
    // 0x3fc248: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x3fc248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_3fc24c:
    // 0x3fc24c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x3fc24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3fc250:
    // 0x3fc250: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3fc250u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3fc254:
    // 0x3fc254: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3fc254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3fc258:
    // 0x3fc258: 0x24520020  addiu       $s2, $v0, 0x20
    ctx->pc = 0x3fc258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_3fc25c:
    // 0x3fc25c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3fc25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fc260:
    // 0x3fc260: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3fc260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3fc264:
    // 0x3fc264: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fc264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fc268:
    // 0x3fc268: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fc268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc26c:
    // 0x3fc26c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x3fc26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_3fc270:
    // 0x3fc270: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3fc270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3fc274:
    // 0x3fc274: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fc274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc278:
    // 0x3fc278: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3fc278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3fc27c:
    // 0x3fc27c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3fc27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_3fc280:
    // 0x3fc280: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3fc280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3fc284:
    // 0x3fc284: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fc284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc288:
    // 0x3fc288: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3fc288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3fc28c:
    // 0x3fc28c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x3fc28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_3fc290:
    // 0x3fc290: 0xc075128  jal         func_1D44A0
label_3fc294:
    if (ctx->pc == 0x3FC294u) {
        ctx->pc = 0x3FC294u;
            // 0x3fc294: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x3FC298u;
        goto label_3fc298;
    }
    ctx->pc = 0x3FC290u;
    SET_GPR_U32(ctx, 31, 0x3FC298u);
    ctx->pc = 0x3FC294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC290u;
            // 0x3fc294: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC298u; }
        if (ctx->pc != 0x3FC298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC298u; }
        if (ctx->pc != 0x3FC298u) { return; }
    }
    ctx->pc = 0x3FC298u;
label_3fc298:
    // 0x3fc298: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fc298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fc29c:
    // 0x3fc29c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc2a0:
    // 0x3fc2a0: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3fc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3fc2a4:
    // 0x3fc2a4: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3fc2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3fc2a8:
    // 0x3fc2a8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc2a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc2ac:
    // 0x3fc2ac: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc2b0:
    if (ctx->pc == 0x3FC2B0u) {
        ctx->pc = 0x3FC2B0u;
            // 0x3fc2b0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3FC2B4u;
        goto label_3fc2b4;
    }
    ctx->pc = 0x3FC2ACu;
    {
        const bool branch_taken_0x3fc2ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc2ac) {
            ctx->pc = 0x3FC2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC2ACu;
            // 0x3fc2b0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC2C0u;
            goto label_3fc2c0;
        }
    }
    ctx->pc = 0x3FC2B4u;
label_3fc2b4:
    // 0x3fc2b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc2b8:
    // 0x3fc2b8: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3fc2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3fc2bc:
    // 0x3fc2bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fc2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fc2c0:
    // 0x3fc2c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc2c4:
    // 0x3fc2c4: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3fc2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3fc2c8:
    // 0x3fc2c8: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fc2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fc2cc:
    // 0x3fc2cc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc2ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc2d0:
    // 0x3fc2d0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc2d4:
    if (ctx->pc == 0x3FC2D4u) {
        ctx->pc = 0x3FC2D4u;
            // 0x3fc2d4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3FC2D8u;
        goto label_3fc2d8;
    }
    ctx->pc = 0x3FC2D0u;
    {
        const bool branch_taken_0x3fc2d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc2d0) {
            ctx->pc = 0x3FC2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC2D0u;
            // 0x3fc2d4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC2E4u;
            goto label_3fc2e4;
        }
    }
    ctx->pc = 0x3FC2D8u;
label_3fc2d8:
    // 0x3fc2d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc2dc:
    // 0x3fc2dc: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3fc2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3fc2e0:
    // 0x3fc2e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fc2e4:
    // 0x3fc2e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc2e8:
    // 0x3fc2e8: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3fc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3fc2ec:
    // 0x3fc2ec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fc2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fc2f0:
    // 0x3fc2f0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc2f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc2f4:
    // 0x3fc2f4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc2f8:
    if (ctx->pc == 0x3FC2F8u) {
        ctx->pc = 0x3FC2F8u;
            // 0x3fc2f8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3FC2FCu;
        goto label_3fc2fc;
    }
    ctx->pc = 0x3FC2F4u;
    {
        const bool branch_taken_0x3fc2f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc2f4) {
            ctx->pc = 0x3FC2F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC2F4u;
            // 0x3fc2f8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC308u;
            goto label_3fc308;
        }
    }
    ctx->pc = 0x3FC2FCu;
label_3fc2fc:
    // 0x3fc2fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc300:
    // 0x3fc300: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3fc300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3fc304:
    // 0x3fc304: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fc304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fc308:
    // 0x3fc308: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc30c:
    // 0x3fc30c: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3fc30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3fc310:
    // 0x3fc310: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fc310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fc314:
    // 0x3fc314: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x3fc314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3fc318:
    // 0x3fc318: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc318u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc31c:
    // 0x3fc31c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc320:
    if (ctx->pc == 0x3FC320u) {
        ctx->pc = 0x3FC320u;
            // 0x3fc320: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3FC324u;
        goto label_3fc324;
    }
    ctx->pc = 0x3FC31Cu;
    {
        const bool branch_taken_0x3fc31c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc31c) {
            ctx->pc = 0x3FC320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC31Cu;
            // 0x3fc320: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC330u;
            goto label_3fc330;
        }
    }
    ctx->pc = 0x3FC324u;
label_3fc324:
    // 0x3fc324: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc328:
    // 0x3fc328: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3fc328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3fc32c:
    // 0x3fc32c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fc32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fc330:
    // 0x3fc330: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc334:
    // 0x3fc334: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3fc334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3fc338:
    // 0x3fc338: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fc338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fc33c:
    // 0x3fc33c: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x3fc33cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3fc340:
    // 0x3fc340: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc340u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc344:
    // 0x3fc344: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3fc348:
    if (ctx->pc == 0x3FC348u) {
        ctx->pc = 0x3FC34Cu;
        goto label_3fc34c;
    }
    ctx->pc = 0x3FC344u;
    {
        const bool branch_taken_0x3fc344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc344) {
            ctx->pc = 0x3FC354u;
            goto label_3fc354;
        }
    }
    ctx->pc = 0x3FC34Cu;
label_3fc34c:
    // 0x3fc34c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc350:
    // 0x3fc350: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3fc350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3fc354:
    // 0x3fc354: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc358:
    // 0x3fc358: 0x8c42e3c8  lw          $v0, -0x1C38($v0)
    ctx->pc = 0x3fc358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960072)));
label_3fc35c:
    // 0x3fc35c: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x3fc35cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3fc360:
    // 0x3fc360: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3fc364:
    if (ctx->pc == 0x3FC364u) {
        ctx->pc = 0x3FC368u;
        goto label_3fc368;
    }
    ctx->pc = 0x3FC360u;
    {
        const bool branch_taken_0x3fc360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc360) {
            ctx->pc = 0x3FC370u;
            goto label_3fc370;
        }
    }
    ctx->pc = 0x3FC368u;
label_3fc368:
    // 0x3fc368: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc36c:
    // 0x3fc36c: 0xac54e3c8  sw          $s4, -0x1C38($v0)
    ctx->pc = 0x3fc36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960072), GPR_U32(ctx, 20));
label_3fc370:
    // 0x3fc370: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc374:
    // 0x3fc374: 0x8c42e3d0  lw          $v0, -0x1C30($v0)
    ctx->pc = 0x3fc374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960080)));
label_3fc378:
    // 0x3fc378: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x3fc378u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3fc37c:
    // 0x3fc37c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc380:
    if (ctx->pc == 0x3FC380u) {
        ctx->pc = 0x3FC380u;
            // 0x3fc380: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->pc = 0x3FC384u;
        goto label_3fc384;
    }
    ctx->pc = 0x3FC37Cu;
    {
        const bool branch_taken_0x3fc37c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc37c) {
            ctx->pc = 0x3FC380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC37Cu;
            // 0x3fc380: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC390u;
            goto label_3fc390;
        }
    }
    ctx->pc = 0x3FC384u;
label_3fc384:
    // 0x3fc384: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc388:
    // 0x3fc388: 0xac54e3d0  sw          $s4, -0x1C30($v0)
    ctx->pc = 0x3fc388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960080), GPR_U32(ctx, 20));
label_3fc38c:
    // 0x3fc38c: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x3fc38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_3fc390:
    // 0x3fc390: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x3fc390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3fc394:
    // 0x3fc394: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3fc394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3fc398:
    // 0x3fc398: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3fc398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3fc39c:
    // 0x3fc39c: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x3fc39cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_3fc3a0:
    // 0x3fc3a0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3fc3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fc3a4:
    // 0x3fc3a4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3fc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3fc3a8:
    // 0x3fc3a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fc3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fc3ac:
    // 0x3fc3ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc3b0:
    // 0x3fc3b0: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x3fc3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_3fc3b4:
    // 0x3fc3b4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x3fc3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3fc3b8:
    // 0x3fc3b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fc3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc3bc:
    // 0x3fc3bc: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3fc3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_3fc3c0:
    // 0x3fc3c0: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x3fc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_3fc3c4:
    // 0x3fc3c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc3c8:
    // 0x3fc3c8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x3fc3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_3fc3cc:
    // 0x3fc3cc: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x3fc3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_3fc3d0:
    // 0x3fc3d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fc3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc3d4:
    // 0x3fc3d4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3fc3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3fc3d8:
    // 0x3fc3d8: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x3fc3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_3fc3dc:
    // 0x3fc3dc: 0xc075128  jal         func_1D44A0
label_3fc3e0:
    if (ctx->pc == 0x3FC3E0u) {
        ctx->pc = 0x3FC3E0u;
            // 0x3fc3e0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x3FC3E4u;
        goto label_3fc3e4;
    }
    ctx->pc = 0x3FC3DCu;
    SET_GPR_U32(ctx, 31, 0x3FC3E4u);
    ctx->pc = 0x3FC3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC3DCu;
            // 0x3fc3e0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC3E4u; }
        if (ctx->pc != 0x3FC3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC3E4u; }
        if (ctx->pc != 0x3FC3E4u) { return; }
    }
    ctx->pc = 0x3FC3E4u;
label_3fc3e4:
    // 0x3fc3e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fc3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fc3e8:
    // 0x3fc3e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc3ec:
    // 0x3fc3ec: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3fc3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3fc3f0:
    // 0x3fc3f0: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3fc3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3fc3f4:
    // 0x3fc3f4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc3f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc3f8:
    // 0x3fc3f8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc3fc:
    if (ctx->pc == 0x3FC3FCu) {
        ctx->pc = 0x3FC3FCu;
            // 0x3fc3fc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3FC400u;
        goto label_3fc400;
    }
    ctx->pc = 0x3FC3F8u;
    {
        const bool branch_taken_0x3fc3f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc3f8) {
            ctx->pc = 0x3FC3FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC3F8u;
            // 0x3fc3fc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC40Cu;
            goto label_3fc40c;
        }
    }
    ctx->pc = 0x3FC400u;
label_3fc400:
    // 0x3fc400: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc404:
    // 0x3fc404: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3fc404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3fc408:
    // 0x3fc408: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fc408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fc40c:
    // 0x3fc40c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc410:
    // 0x3fc410: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3fc410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3fc414:
    // 0x3fc414: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fc414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fc418:
    // 0x3fc418: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc418u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc41c:
    // 0x3fc41c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc420:
    if (ctx->pc == 0x3FC420u) {
        ctx->pc = 0x3FC420u;
            // 0x3fc420: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3FC424u;
        goto label_3fc424;
    }
    ctx->pc = 0x3FC41Cu;
    {
        const bool branch_taken_0x3fc41c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc41c) {
            ctx->pc = 0x3FC420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC41Cu;
            // 0x3fc420: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC430u;
            goto label_3fc430;
        }
    }
    ctx->pc = 0x3FC424u;
label_3fc424:
    // 0x3fc424: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc428:
    // 0x3fc428: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3fc428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3fc42c:
    // 0x3fc42c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fc42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fc430:
    // 0x3fc430: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc434:
    // 0x3fc434: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3fc434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3fc438:
    // 0x3fc438: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fc438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fc43c:
    // 0x3fc43c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc43cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc440:
    // 0x3fc440: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc444:
    if (ctx->pc == 0x3FC444u) {
        ctx->pc = 0x3FC444u;
            // 0x3fc444: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3FC448u;
        goto label_3fc448;
    }
    ctx->pc = 0x3FC440u;
    {
        const bool branch_taken_0x3fc440 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc440) {
            ctx->pc = 0x3FC444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC440u;
            // 0x3fc444: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC454u;
            goto label_3fc454;
        }
    }
    ctx->pc = 0x3FC448u;
label_3fc448:
    // 0x3fc448: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc44c:
    // 0x3fc44c: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3fc44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3fc450:
    // 0x3fc450: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fc450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fc454:
    // 0x3fc454: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc458:
    // 0x3fc458: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3fc458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3fc45c:
    // 0x3fc45c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fc45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fc460:
    // 0x3fc460: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x3fc460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3fc464:
    // 0x3fc464: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc464u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc468:
    // 0x3fc468: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc46c:
    if (ctx->pc == 0x3FC46Cu) {
        ctx->pc = 0x3FC46Cu;
            // 0x3fc46c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3FC470u;
        goto label_3fc470;
    }
    ctx->pc = 0x3FC468u;
    {
        const bool branch_taken_0x3fc468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc468) {
            ctx->pc = 0x3FC46Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC468u;
            // 0x3fc46c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC47Cu;
            goto label_3fc47c;
        }
    }
    ctx->pc = 0x3FC470u;
label_3fc470:
    // 0x3fc470: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc474:
    // 0x3fc474: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3fc474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3fc478:
    // 0x3fc478: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fc478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fc47c:
    // 0x3fc47c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc480:
    // 0x3fc480: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3fc480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3fc484:
    // 0x3fc484: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fc484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fc488:
    // 0x3fc488: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x3fc488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3fc48c:
    // 0x3fc48c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fc48cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fc490:
    // 0x3fc490: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3fc494:
    if (ctx->pc == 0x3FC494u) {
        ctx->pc = 0x3FC498u;
        goto label_3fc498;
    }
    ctx->pc = 0x3FC490u;
    {
        const bool branch_taken_0x3fc490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc490) {
            ctx->pc = 0x3FC4A0u;
            goto label_3fc4a0;
        }
    }
    ctx->pc = 0x3FC498u;
label_3fc498:
    // 0x3fc498: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc49c:
    // 0x3fc49c: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3fc49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3fc4a0:
    // 0x3fc4a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc4a4:
    // 0x3fc4a4: 0x8c42e3c8  lw          $v0, -0x1C38($v0)
    ctx->pc = 0x3fc4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960072)));
label_3fc4a8:
    // 0x3fc4a8: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x3fc4a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3fc4ac:
    // 0x3fc4ac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3fc4b0:
    if (ctx->pc == 0x3FC4B0u) {
        ctx->pc = 0x3FC4B4u;
        goto label_3fc4b4;
    }
    ctx->pc = 0x3FC4ACu;
    {
        const bool branch_taken_0x3fc4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc4ac) {
            ctx->pc = 0x3FC4BCu;
            goto label_3fc4bc;
        }
    }
    ctx->pc = 0x3FC4B4u;
label_3fc4b4:
    // 0x3fc4b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc4b8:
    // 0x3fc4b8: 0xac54e3c8  sw          $s4, -0x1C38($v0)
    ctx->pc = 0x3fc4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960072), GPR_U32(ctx, 20));
label_3fc4bc:
    // 0x3fc4bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc4c0:
    // 0x3fc4c0: 0x8c42e3d0  lw          $v0, -0x1C30($v0)
    ctx->pc = 0x3fc4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960080)));
label_3fc4c4:
    // 0x3fc4c4: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x3fc4c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3fc4c8:
    // 0x3fc4c8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fc4cc:
    if (ctx->pc == 0x3FC4CCu) {
        ctx->pc = 0x3FC4CCu;
            // 0x3fc4cc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x3FC4D0u;
        goto label_3fc4d0;
    }
    ctx->pc = 0x3FC4C8u;
    {
        const bool branch_taken_0x3fc4c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc4c8) {
            ctx->pc = 0x3FC4CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC4C8u;
            // 0x3fc4cc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FC4DCu;
            goto label_3fc4dc;
        }
    }
    ctx->pc = 0x3FC4D0u;
label_3fc4d0:
    // 0x3fc4d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fc4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fc4d4:
    // 0x3fc4d4: 0xac54e3d0  sw          $s4, -0x1C30($v0)
    ctx->pc = 0x3fc4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960080), GPR_U32(ctx, 20));
label_3fc4d8:
    // 0x3fc4d8: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x3fc4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3fc4dc:
    // 0x3fc4dc: 0xc040138  jal         func_1004E0
label_3fc4e0:
    if (ctx->pc == 0x3FC4E0u) {
        ctx->pc = 0x3FC4E4u;
        goto label_3fc4e4;
    }
    ctx->pc = 0x3FC4DCu;
    SET_GPR_U32(ctx, 31, 0x3FC4E4u);
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC4E4u; }
        if (ctx->pc != 0x3FC4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC4E4u; }
        if (ctx->pc != 0x3FC4E4u) { return; }
    }
    ctx->pc = 0x3FC4E4u;
label_3fc4e4:
    // 0x3fc4e4: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x3fc4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
label_3fc4e8:
    // 0x3fc4e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3fc4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fc4ec:
    // 0x3fc4ec: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3fc4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3fc4f0:
    // 0x3fc4f0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3fc4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3fc4f4:
    // 0x3fc4f4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x3fc4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3fc4f8:
    // 0x3fc4f8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x3fc4f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc4fc:
    // 0x3fc4fc: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x3fc4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3fc500:
    // 0x3fc500: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3fc500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fc504:
    // 0x3fc504: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3fc504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3fc508:
    // 0x3fc508: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3fc508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3fc50c:
    // 0x3fc50c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3fc50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3fc510:
    // 0x3fc510: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3fc510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3fc514:
    // 0x3fc514: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3fc514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3fc518:
    // 0x3fc518: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3fc518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3fc51c:
    // 0x3fc51c: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x3fc51cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3fc520:
    // 0x3fc520: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x3fc520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3fc524:
    // 0x3fc524: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3fc528:
    if (ctx->pc == 0x3FC528u) {
        ctx->pc = 0x3FC528u;
            // 0x3fc528: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x3FC52Cu;
        goto label_3fc52c;
    }
    ctx->pc = 0x3FC524u;
    {
        const bool branch_taken_0x3fc524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC524u;
            // 0x3fc528: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc524) {
            ctx->pc = 0x3FC500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fc500;
        }
    }
    ctx->pc = 0x3FC52Cu;
label_3fc52c:
    // 0x3fc52c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3fc52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3fc530:
    // 0x3fc530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc534:
    // 0x3fc534: 0xc0ff1c4  jal         func_3FC710
label_3fc538:
    if (ctx->pc == 0x3FC538u) {
        ctx->pc = 0x3FC538u;
            // 0x3fc538: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FC53Cu;
        goto label_3fc53c;
    }
    ctx->pc = 0x3FC534u;
    SET_GPR_U32(ctx, 31, 0x3FC53Cu);
    ctx->pc = 0x3FC538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC534u;
            // 0x3fc538: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FC710u;
    if (runtime->hasFunction(0x3FC710u)) {
        auto targetFn = runtime->lookupFunction(0x3FC710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC53Cu; }
        if (ctx->pc != 0x3FC53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FC710_0x3fc710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC53Cu; }
        if (ctx->pc != 0x3FC53Cu) { return; }
    }
    ctx->pc = 0x3FC53Cu;
label_3fc53c:
    // 0x3fc53c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3fc53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3fc540:
    // 0x3fc540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3fc540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fc544:
    // 0x3fc544: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x3fc544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
label_3fc548:
    // 0x3fc548: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3fc548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3fc54c:
    // 0x3fc54c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3fc54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3fc550:
    // 0x3fc550: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3fc550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3fc554:
    // 0x3fc554: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3fc554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc558:
    // 0x3fc558: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3fc558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3fc55c:
    // 0x3fc55c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3fc55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3fc560:
    // 0x3fc560: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3fc560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3fc564:
    // 0x3fc564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fc564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fc568:
    // 0x3fc568: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3fc568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3fc56c:
    // 0x3fc56c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3fc56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3fc570:
    // 0x3fc570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fc570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fc574:
    // 0x3fc574: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3fc574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_3fc578:
    // 0x3fc578: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x3fc578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3fc57c:
    // 0x3fc57c: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x3fc57cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3fc580:
    // 0x3fc580: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3fc584:
    if (ctx->pc == 0x3FC584u) {
        ctx->pc = 0x3FC584u;
            // 0x3fc584: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x3FC588u;
        goto label_3fc588;
    }
    ctx->pc = 0x3FC580u;
    {
        const bool branch_taken_0x3fc580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC580u;
            // 0x3fc584: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc580) {
            ctx->pc = 0x3FC55Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fc55c;
        }
    }
    ctx->pc = 0x3FC588u;
label_3fc588:
    // 0x3fc588: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3fc588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3fc58c:
    // 0x3fc58c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc590:
    // 0x3fc590: 0xc0ff1c4  jal         func_3FC710
label_3fc594:
    if (ctx->pc == 0x3FC594u) {
        ctx->pc = 0x3FC594u;
            // 0x3fc594: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FC598u;
        goto label_3fc598;
    }
    ctx->pc = 0x3FC590u;
    SET_GPR_U32(ctx, 31, 0x3FC598u);
    ctx->pc = 0x3FC594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC590u;
            // 0x3fc594: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FC710u;
    if (runtime->hasFunction(0x3FC710u)) {
        auto targetFn = runtime->lookupFunction(0x3FC710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC598u; }
        if (ctx->pc != 0x3FC598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FC710_0x3fc710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC598u; }
        if (ctx->pc != 0x3FC598u) { return; }
    }
    ctx->pc = 0x3FC598u;
label_3fc598:
    // 0x3fc598: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3fc598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3fc59c:
    // 0x3fc59c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3fc59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fc5a0:
    // 0x3fc5a0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3fc5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3fc5a4:
    // 0x3fc5a4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3fc5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3fc5a8:
    // 0x3fc5a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3fc5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc5ac:
    // 0x3fc5ac: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3fc5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3fc5b0:
    // 0x3fc5b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3fc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3fc5b4:
    // 0x3fc5b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3fc5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3fc5b8:
    // 0x3fc5b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fc5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fc5bc:
    // 0x3fc5bc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3fc5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3fc5c0:
    // 0x3fc5c0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3fc5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3fc5c4:
    // 0x3fc5c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fc5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fc5c8:
    // 0x3fc5c8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3fc5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_3fc5cc:
    // 0x3fc5cc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x3fc5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3fc5d0:
    // 0x3fc5d0: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x3fc5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3fc5d4:
    // 0x3fc5d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3fc5d8:
    if (ctx->pc == 0x3FC5D8u) {
        ctx->pc = 0x3FC5D8u;
            // 0x3fc5d8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x3FC5DCu;
        goto label_3fc5dc;
    }
    ctx->pc = 0x3FC5D4u;
    {
        const bool branch_taken_0x3fc5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC5D4u;
            // 0x3fc5d8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc5d4) {
            ctx->pc = 0x3FC5B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fc5b0;
        }
    }
    ctx->pc = 0x3FC5DCu;
label_3fc5dc:
    // 0x3fc5dc: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3fc5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3fc5e0:
    // 0x3fc5e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc5e4:
    // 0x3fc5e4: 0xc0ff1c4  jal         func_3FC710
label_3fc5e8:
    if (ctx->pc == 0x3FC5E8u) {
        ctx->pc = 0x3FC5E8u;
            // 0x3fc5e8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3FC5ECu;
        goto label_3fc5ec;
    }
    ctx->pc = 0x3FC5E4u;
    SET_GPR_U32(ctx, 31, 0x3FC5ECu);
    ctx->pc = 0x3FC5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC5E4u;
            // 0x3fc5e8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FC710u;
    if (runtime->hasFunction(0x3FC710u)) {
        auto targetFn = runtime->lookupFunction(0x3FC710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC5ECu; }
        if (ctx->pc != 0x3FC5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FC710_0x3fc710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC5ECu; }
        if (ctx->pc != 0x3FC5ECu) { return; }
    }
    ctx->pc = 0x3FC5ECu;
label_3fc5ec:
    // 0x3fc5ec: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3fc5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3fc5f0:
    // 0x3fc5f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3fc5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fc5f4:
    // 0x3fc5f4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3fc5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3fc5f8:
    // 0x3fc5f8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3fc5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3fc5fc:
    // 0x3fc5fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3fc5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc600:
    // 0x3fc600: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3fc600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3fc604:
    // 0x3fc604: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3fc604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3fc608:
    // 0x3fc608: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3fc608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3fc60c:
    // 0x3fc60c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fc60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fc610:
    // 0x3fc610: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3fc610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3fc614:
    // 0x3fc614: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3fc614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3fc618:
    // 0x3fc618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fc618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fc61c:
    // 0x3fc61c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3fc61cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_3fc620:
    // 0x3fc620: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x3fc620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3fc624:
    // 0x3fc624: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x3fc624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3fc628:
    // 0x3fc628: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3fc62c:
    if (ctx->pc == 0x3FC62Cu) {
        ctx->pc = 0x3FC62Cu;
            // 0x3fc62c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x3FC630u;
        goto label_3fc630;
    }
    ctx->pc = 0x3FC628u;
    {
        const bool branch_taken_0x3fc628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC628u;
            // 0x3fc62c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc628) {
            ctx->pc = 0x3FC604u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fc604;
        }
    }
    ctx->pc = 0x3FC630u;
label_3fc630:
    // 0x3fc630: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3fc630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3fc634:
    // 0x3fc634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc638:
    // 0x3fc638: 0xc0ff1c4  jal         func_3FC710
label_3fc63c:
    if (ctx->pc == 0x3FC63Cu) {
        ctx->pc = 0x3FC63Cu;
            // 0x3fc63c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3FC640u;
        goto label_3fc640;
    }
    ctx->pc = 0x3FC638u;
    SET_GPR_U32(ctx, 31, 0x3FC640u);
    ctx->pc = 0x3FC63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC638u;
            // 0x3fc63c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FC710u;
    if (runtime->hasFunction(0x3FC710u)) {
        auto targetFn = runtime->lookupFunction(0x3FC710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC640u; }
        if (ctx->pc != 0x3FC640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FC710_0x3fc710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC640u; }
        if (ctx->pc != 0x3FC640u) { return; }
    }
    ctx->pc = 0x3FC640u;
label_3fc640:
    // 0x3fc640: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3fc640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3fc644:
    // 0x3fc644: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3fc644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fc648:
    // 0x3fc648: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3fc648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3fc64c:
    // 0x3fc64c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x3fc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_3fc650:
    // 0x3fc650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3fc650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc654:
    // 0x3fc654: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3fc654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3fc658:
    // 0x3fc658: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3fc658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3fc65c:
    // 0x3fc65c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3fc65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3fc660:
    // 0x3fc660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fc660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fc664:
    // 0x3fc664: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3fc664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3fc668:
    // 0x3fc668: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3fc668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3fc66c:
    // 0x3fc66c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fc66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fc670:
    // 0x3fc670: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3fc670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_3fc674:
    // 0x3fc674: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x3fc674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3fc678:
    // 0x3fc678: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x3fc678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3fc67c:
    // 0x3fc67c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3fc680:
    if (ctx->pc == 0x3FC680u) {
        ctx->pc = 0x3FC680u;
            // 0x3fc680: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x3FC684u;
        goto label_3fc684;
    }
    ctx->pc = 0x3FC67Cu;
    {
        const bool branch_taken_0x3fc67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC67Cu;
            // 0x3fc680: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc67c) {
            ctx->pc = 0x3FC658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fc658;
        }
    }
    ctx->pc = 0x3FC684u;
label_3fc684:
    // 0x3fc684: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3fc684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3fc688:
    // 0x3fc688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc68c:
    // 0x3fc68c: 0xc0ff1c4  jal         func_3FC710
label_3fc690:
    if (ctx->pc == 0x3FC690u) {
        ctx->pc = 0x3FC690u;
            // 0x3fc690: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3FC694u;
        goto label_3fc694;
    }
    ctx->pc = 0x3FC68Cu;
    SET_GPR_U32(ctx, 31, 0x3FC694u);
    ctx->pc = 0x3FC690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC68Cu;
            // 0x3fc690: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FC710u;
    if (runtime->hasFunction(0x3FC710u)) {
        auto targetFn = runtime->lookupFunction(0x3FC710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC694u; }
        if (ctx->pc != 0x3FC694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FC710_0x3fc710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC694u; }
        if (ctx->pc != 0x3FC694u) { return; }
    }
    ctx->pc = 0x3FC694u;
label_3fc694:
    // 0x3fc694: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3fc694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3fc698:
    // 0x3fc698: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3fc698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fc69c:
    // 0x3fc69c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3fc69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3fc6a0:
    // 0x3fc6a0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x3fc6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3fc6a4:
    // 0x3fc6a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3fc6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc6a8:
    // 0x3fc6a8: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3fc6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3fc6ac:
    // 0x3fc6ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3fc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3fc6b0:
    // 0x3fc6b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3fc6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3fc6b4:
    // 0x3fc6b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fc6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fc6b8:
    // 0x3fc6b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3fc6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3fc6bc:
    // 0x3fc6bc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3fc6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3fc6c0:
    // 0x3fc6c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fc6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fc6c4:
    // 0x3fc6c4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3fc6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_3fc6c8:
    // 0x3fc6c8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x3fc6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3fc6cc:
    // 0x3fc6cc: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x3fc6ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3fc6d0:
    // 0x3fc6d0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3fc6d4:
    if (ctx->pc == 0x3FC6D4u) {
        ctx->pc = 0x3FC6D4u;
            // 0x3fc6d4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x3FC6D8u;
        goto label_3fc6d8;
    }
    ctx->pc = 0x3FC6D0u;
    {
        const bool branch_taken_0x3fc6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC6D0u;
            // 0x3fc6d4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc6d0) {
            ctx->pc = 0x3FC6ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fc6ac;
        }
    }
    ctx->pc = 0x3FC6D8u;
label_3fc6d8:
    // 0x3fc6d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc6dc:
    // 0x3fc6dc: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3fc6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3fc6e0:
    // 0x3fc6e0: 0xc0ff1c4  jal         func_3FC710
label_3fc6e4:
    if (ctx->pc == 0x3FC6E4u) {
        ctx->pc = 0x3FC6E4u;
            // 0x3fc6e4: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3FC6E8u;
        goto label_3fc6e8;
    }
    ctx->pc = 0x3FC6E0u;
    SET_GPR_U32(ctx, 31, 0x3FC6E8u);
    ctx->pc = 0x3FC6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC6E0u;
            // 0x3fc6e4: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FC710u;
    if (runtime->hasFunction(0x3FC710u)) {
        auto targetFn = runtime->lookupFunction(0x3FC710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC6E8u; }
        if (ctx->pc != 0x3FC6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FC710_0x3fc710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FC6E8u; }
        if (ctx->pc != 0x3FC6E8u) { return; }
    }
    ctx->pc = 0x3FC6E8u;
label_3fc6e8:
    // 0x3fc6e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3fc6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3fc6ec:
    // 0x3fc6ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3fc6ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fc6f0:
    // 0x3fc6f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3fc6f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fc6f4:
    // 0x3fc6f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fc6f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fc6f8:
    // 0x3fc6f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fc6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fc6fc:
    // 0x3fc6fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fc6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fc700:
    // 0x3fc700: 0x3e00008  jr          $ra
label_3fc704:
    if (ctx->pc == 0x3FC704u) {
        ctx->pc = 0x3FC704u;
            // 0x3fc704: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3FC708u;
        goto label_3fc708;
    }
    ctx->pc = 0x3FC700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FC704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FC700u;
            // 0x3fc704: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FC708u;
label_3fc708:
    // 0x3fc708: 0x0  nop
    ctx->pc = 0x3fc708u;
    // NOP
label_3fc70c:
    // 0x3fc70c: 0x0  nop
    ctx->pc = 0x3fc70cu;
    // NOP
}
