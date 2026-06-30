#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FDFC0
// Address: 0x4fdfc0 - 0x4fef90
void sub_004FDFC0_0x4fdfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FDFC0_0x4fdfc0");
#endif

    switch (ctx->pc) {
        case 0x4fdfc0u: goto label_4fdfc0;
        case 0x4fdfc4u: goto label_4fdfc4;
        case 0x4fdfc8u: goto label_4fdfc8;
        case 0x4fdfccu: goto label_4fdfcc;
        case 0x4fdfd0u: goto label_4fdfd0;
        case 0x4fdfd4u: goto label_4fdfd4;
        case 0x4fdfd8u: goto label_4fdfd8;
        case 0x4fdfdcu: goto label_4fdfdc;
        case 0x4fdfe0u: goto label_4fdfe0;
        case 0x4fdfe4u: goto label_4fdfe4;
        case 0x4fdfe8u: goto label_4fdfe8;
        case 0x4fdfecu: goto label_4fdfec;
        case 0x4fdff0u: goto label_4fdff0;
        case 0x4fdff4u: goto label_4fdff4;
        case 0x4fdff8u: goto label_4fdff8;
        case 0x4fdffcu: goto label_4fdffc;
        case 0x4fe000u: goto label_4fe000;
        case 0x4fe004u: goto label_4fe004;
        case 0x4fe008u: goto label_4fe008;
        case 0x4fe00cu: goto label_4fe00c;
        case 0x4fe010u: goto label_4fe010;
        case 0x4fe014u: goto label_4fe014;
        case 0x4fe018u: goto label_4fe018;
        case 0x4fe01cu: goto label_4fe01c;
        case 0x4fe020u: goto label_4fe020;
        case 0x4fe024u: goto label_4fe024;
        case 0x4fe028u: goto label_4fe028;
        case 0x4fe02cu: goto label_4fe02c;
        case 0x4fe030u: goto label_4fe030;
        case 0x4fe034u: goto label_4fe034;
        case 0x4fe038u: goto label_4fe038;
        case 0x4fe03cu: goto label_4fe03c;
        case 0x4fe040u: goto label_4fe040;
        case 0x4fe044u: goto label_4fe044;
        case 0x4fe048u: goto label_4fe048;
        case 0x4fe04cu: goto label_4fe04c;
        case 0x4fe050u: goto label_4fe050;
        case 0x4fe054u: goto label_4fe054;
        case 0x4fe058u: goto label_4fe058;
        case 0x4fe05cu: goto label_4fe05c;
        case 0x4fe060u: goto label_4fe060;
        case 0x4fe064u: goto label_4fe064;
        case 0x4fe068u: goto label_4fe068;
        case 0x4fe06cu: goto label_4fe06c;
        case 0x4fe070u: goto label_4fe070;
        case 0x4fe074u: goto label_4fe074;
        case 0x4fe078u: goto label_4fe078;
        case 0x4fe07cu: goto label_4fe07c;
        case 0x4fe080u: goto label_4fe080;
        case 0x4fe084u: goto label_4fe084;
        case 0x4fe088u: goto label_4fe088;
        case 0x4fe08cu: goto label_4fe08c;
        case 0x4fe090u: goto label_4fe090;
        case 0x4fe094u: goto label_4fe094;
        case 0x4fe098u: goto label_4fe098;
        case 0x4fe09cu: goto label_4fe09c;
        case 0x4fe0a0u: goto label_4fe0a0;
        case 0x4fe0a4u: goto label_4fe0a4;
        case 0x4fe0a8u: goto label_4fe0a8;
        case 0x4fe0acu: goto label_4fe0ac;
        case 0x4fe0b0u: goto label_4fe0b0;
        case 0x4fe0b4u: goto label_4fe0b4;
        case 0x4fe0b8u: goto label_4fe0b8;
        case 0x4fe0bcu: goto label_4fe0bc;
        case 0x4fe0c0u: goto label_4fe0c0;
        case 0x4fe0c4u: goto label_4fe0c4;
        case 0x4fe0c8u: goto label_4fe0c8;
        case 0x4fe0ccu: goto label_4fe0cc;
        case 0x4fe0d0u: goto label_4fe0d0;
        case 0x4fe0d4u: goto label_4fe0d4;
        case 0x4fe0d8u: goto label_4fe0d8;
        case 0x4fe0dcu: goto label_4fe0dc;
        case 0x4fe0e0u: goto label_4fe0e0;
        case 0x4fe0e4u: goto label_4fe0e4;
        case 0x4fe0e8u: goto label_4fe0e8;
        case 0x4fe0ecu: goto label_4fe0ec;
        case 0x4fe0f0u: goto label_4fe0f0;
        case 0x4fe0f4u: goto label_4fe0f4;
        case 0x4fe0f8u: goto label_4fe0f8;
        case 0x4fe0fcu: goto label_4fe0fc;
        case 0x4fe100u: goto label_4fe100;
        case 0x4fe104u: goto label_4fe104;
        case 0x4fe108u: goto label_4fe108;
        case 0x4fe10cu: goto label_4fe10c;
        case 0x4fe110u: goto label_4fe110;
        case 0x4fe114u: goto label_4fe114;
        case 0x4fe118u: goto label_4fe118;
        case 0x4fe11cu: goto label_4fe11c;
        case 0x4fe120u: goto label_4fe120;
        case 0x4fe124u: goto label_4fe124;
        case 0x4fe128u: goto label_4fe128;
        case 0x4fe12cu: goto label_4fe12c;
        case 0x4fe130u: goto label_4fe130;
        case 0x4fe134u: goto label_4fe134;
        case 0x4fe138u: goto label_4fe138;
        case 0x4fe13cu: goto label_4fe13c;
        case 0x4fe140u: goto label_4fe140;
        case 0x4fe144u: goto label_4fe144;
        case 0x4fe148u: goto label_4fe148;
        case 0x4fe14cu: goto label_4fe14c;
        case 0x4fe150u: goto label_4fe150;
        case 0x4fe154u: goto label_4fe154;
        case 0x4fe158u: goto label_4fe158;
        case 0x4fe15cu: goto label_4fe15c;
        case 0x4fe160u: goto label_4fe160;
        case 0x4fe164u: goto label_4fe164;
        case 0x4fe168u: goto label_4fe168;
        case 0x4fe16cu: goto label_4fe16c;
        case 0x4fe170u: goto label_4fe170;
        case 0x4fe174u: goto label_4fe174;
        case 0x4fe178u: goto label_4fe178;
        case 0x4fe17cu: goto label_4fe17c;
        case 0x4fe180u: goto label_4fe180;
        case 0x4fe184u: goto label_4fe184;
        case 0x4fe188u: goto label_4fe188;
        case 0x4fe18cu: goto label_4fe18c;
        case 0x4fe190u: goto label_4fe190;
        case 0x4fe194u: goto label_4fe194;
        case 0x4fe198u: goto label_4fe198;
        case 0x4fe19cu: goto label_4fe19c;
        case 0x4fe1a0u: goto label_4fe1a0;
        case 0x4fe1a4u: goto label_4fe1a4;
        case 0x4fe1a8u: goto label_4fe1a8;
        case 0x4fe1acu: goto label_4fe1ac;
        case 0x4fe1b0u: goto label_4fe1b0;
        case 0x4fe1b4u: goto label_4fe1b4;
        case 0x4fe1b8u: goto label_4fe1b8;
        case 0x4fe1bcu: goto label_4fe1bc;
        case 0x4fe1c0u: goto label_4fe1c0;
        case 0x4fe1c4u: goto label_4fe1c4;
        case 0x4fe1c8u: goto label_4fe1c8;
        case 0x4fe1ccu: goto label_4fe1cc;
        case 0x4fe1d0u: goto label_4fe1d0;
        case 0x4fe1d4u: goto label_4fe1d4;
        case 0x4fe1d8u: goto label_4fe1d8;
        case 0x4fe1dcu: goto label_4fe1dc;
        case 0x4fe1e0u: goto label_4fe1e0;
        case 0x4fe1e4u: goto label_4fe1e4;
        case 0x4fe1e8u: goto label_4fe1e8;
        case 0x4fe1ecu: goto label_4fe1ec;
        case 0x4fe1f0u: goto label_4fe1f0;
        case 0x4fe1f4u: goto label_4fe1f4;
        case 0x4fe1f8u: goto label_4fe1f8;
        case 0x4fe1fcu: goto label_4fe1fc;
        case 0x4fe200u: goto label_4fe200;
        case 0x4fe204u: goto label_4fe204;
        case 0x4fe208u: goto label_4fe208;
        case 0x4fe20cu: goto label_4fe20c;
        case 0x4fe210u: goto label_4fe210;
        case 0x4fe214u: goto label_4fe214;
        case 0x4fe218u: goto label_4fe218;
        case 0x4fe21cu: goto label_4fe21c;
        case 0x4fe220u: goto label_4fe220;
        case 0x4fe224u: goto label_4fe224;
        case 0x4fe228u: goto label_4fe228;
        case 0x4fe22cu: goto label_4fe22c;
        case 0x4fe230u: goto label_4fe230;
        case 0x4fe234u: goto label_4fe234;
        case 0x4fe238u: goto label_4fe238;
        case 0x4fe23cu: goto label_4fe23c;
        case 0x4fe240u: goto label_4fe240;
        case 0x4fe244u: goto label_4fe244;
        case 0x4fe248u: goto label_4fe248;
        case 0x4fe24cu: goto label_4fe24c;
        case 0x4fe250u: goto label_4fe250;
        case 0x4fe254u: goto label_4fe254;
        case 0x4fe258u: goto label_4fe258;
        case 0x4fe25cu: goto label_4fe25c;
        case 0x4fe260u: goto label_4fe260;
        case 0x4fe264u: goto label_4fe264;
        case 0x4fe268u: goto label_4fe268;
        case 0x4fe26cu: goto label_4fe26c;
        case 0x4fe270u: goto label_4fe270;
        case 0x4fe274u: goto label_4fe274;
        case 0x4fe278u: goto label_4fe278;
        case 0x4fe27cu: goto label_4fe27c;
        case 0x4fe280u: goto label_4fe280;
        case 0x4fe284u: goto label_4fe284;
        case 0x4fe288u: goto label_4fe288;
        case 0x4fe28cu: goto label_4fe28c;
        case 0x4fe290u: goto label_4fe290;
        case 0x4fe294u: goto label_4fe294;
        case 0x4fe298u: goto label_4fe298;
        case 0x4fe29cu: goto label_4fe29c;
        case 0x4fe2a0u: goto label_4fe2a0;
        case 0x4fe2a4u: goto label_4fe2a4;
        case 0x4fe2a8u: goto label_4fe2a8;
        case 0x4fe2acu: goto label_4fe2ac;
        case 0x4fe2b0u: goto label_4fe2b0;
        case 0x4fe2b4u: goto label_4fe2b4;
        case 0x4fe2b8u: goto label_4fe2b8;
        case 0x4fe2bcu: goto label_4fe2bc;
        case 0x4fe2c0u: goto label_4fe2c0;
        case 0x4fe2c4u: goto label_4fe2c4;
        case 0x4fe2c8u: goto label_4fe2c8;
        case 0x4fe2ccu: goto label_4fe2cc;
        case 0x4fe2d0u: goto label_4fe2d0;
        case 0x4fe2d4u: goto label_4fe2d4;
        case 0x4fe2d8u: goto label_4fe2d8;
        case 0x4fe2dcu: goto label_4fe2dc;
        case 0x4fe2e0u: goto label_4fe2e0;
        case 0x4fe2e4u: goto label_4fe2e4;
        case 0x4fe2e8u: goto label_4fe2e8;
        case 0x4fe2ecu: goto label_4fe2ec;
        case 0x4fe2f0u: goto label_4fe2f0;
        case 0x4fe2f4u: goto label_4fe2f4;
        case 0x4fe2f8u: goto label_4fe2f8;
        case 0x4fe2fcu: goto label_4fe2fc;
        case 0x4fe300u: goto label_4fe300;
        case 0x4fe304u: goto label_4fe304;
        case 0x4fe308u: goto label_4fe308;
        case 0x4fe30cu: goto label_4fe30c;
        case 0x4fe310u: goto label_4fe310;
        case 0x4fe314u: goto label_4fe314;
        case 0x4fe318u: goto label_4fe318;
        case 0x4fe31cu: goto label_4fe31c;
        case 0x4fe320u: goto label_4fe320;
        case 0x4fe324u: goto label_4fe324;
        case 0x4fe328u: goto label_4fe328;
        case 0x4fe32cu: goto label_4fe32c;
        case 0x4fe330u: goto label_4fe330;
        case 0x4fe334u: goto label_4fe334;
        case 0x4fe338u: goto label_4fe338;
        case 0x4fe33cu: goto label_4fe33c;
        case 0x4fe340u: goto label_4fe340;
        case 0x4fe344u: goto label_4fe344;
        case 0x4fe348u: goto label_4fe348;
        case 0x4fe34cu: goto label_4fe34c;
        case 0x4fe350u: goto label_4fe350;
        case 0x4fe354u: goto label_4fe354;
        case 0x4fe358u: goto label_4fe358;
        case 0x4fe35cu: goto label_4fe35c;
        case 0x4fe360u: goto label_4fe360;
        case 0x4fe364u: goto label_4fe364;
        case 0x4fe368u: goto label_4fe368;
        case 0x4fe36cu: goto label_4fe36c;
        case 0x4fe370u: goto label_4fe370;
        case 0x4fe374u: goto label_4fe374;
        case 0x4fe378u: goto label_4fe378;
        case 0x4fe37cu: goto label_4fe37c;
        case 0x4fe380u: goto label_4fe380;
        case 0x4fe384u: goto label_4fe384;
        case 0x4fe388u: goto label_4fe388;
        case 0x4fe38cu: goto label_4fe38c;
        case 0x4fe390u: goto label_4fe390;
        case 0x4fe394u: goto label_4fe394;
        case 0x4fe398u: goto label_4fe398;
        case 0x4fe39cu: goto label_4fe39c;
        case 0x4fe3a0u: goto label_4fe3a0;
        case 0x4fe3a4u: goto label_4fe3a4;
        case 0x4fe3a8u: goto label_4fe3a8;
        case 0x4fe3acu: goto label_4fe3ac;
        case 0x4fe3b0u: goto label_4fe3b0;
        case 0x4fe3b4u: goto label_4fe3b4;
        case 0x4fe3b8u: goto label_4fe3b8;
        case 0x4fe3bcu: goto label_4fe3bc;
        case 0x4fe3c0u: goto label_4fe3c0;
        case 0x4fe3c4u: goto label_4fe3c4;
        case 0x4fe3c8u: goto label_4fe3c8;
        case 0x4fe3ccu: goto label_4fe3cc;
        case 0x4fe3d0u: goto label_4fe3d0;
        case 0x4fe3d4u: goto label_4fe3d4;
        case 0x4fe3d8u: goto label_4fe3d8;
        case 0x4fe3dcu: goto label_4fe3dc;
        case 0x4fe3e0u: goto label_4fe3e0;
        case 0x4fe3e4u: goto label_4fe3e4;
        case 0x4fe3e8u: goto label_4fe3e8;
        case 0x4fe3ecu: goto label_4fe3ec;
        case 0x4fe3f0u: goto label_4fe3f0;
        case 0x4fe3f4u: goto label_4fe3f4;
        case 0x4fe3f8u: goto label_4fe3f8;
        case 0x4fe3fcu: goto label_4fe3fc;
        case 0x4fe400u: goto label_4fe400;
        case 0x4fe404u: goto label_4fe404;
        case 0x4fe408u: goto label_4fe408;
        case 0x4fe40cu: goto label_4fe40c;
        case 0x4fe410u: goto label_4fe410;
        case 0x4fe414u: goto label_4fe414;
        case 0x4fe418u: goto label_4fe418;
        case 0x4fe41cu: goto label_4fe41c;
        case 0x4fe420u: goto label_4fe420;
        case 0x4fe424u: goto label_4fe424;
        case 0x4fe428u: goto label_4fe428;
        case 0x4fe42cu: goto label_4fe42c;
        case 0x4fe430u: goto label_4fe430;
        case 0x4fe434u: goto label_4fe434;
        case 0x4fe438u: goto label_4fe438;
        case 0x4fe43cu: goto label_4fe43c;
        case 0x4fe440u: goto label_4fe440;
        case 0x4fe444u: goto label_4fe444;
        case 0x4fe448u: goto label_4fe448;
        case 0x4fe44cu: goto label_4fe44c;
        case 0x4fe450u: goto label_4fe450;
        case 0x4fe454u: goto label_4fe454;
        case 0x4fe458u: goto label_4fe458;
        case 0x4fe45cu: goto label_4fe45c;
        case 0x4fe460u: goto label_4fe460;
        case 0x4fe464u: goto label_4fe464;
        case 0x4fe468u: goto label_4fe468;
        case 0x4fe46cu: goto label_4fe46c;
        case 0x4fe470u: goto label_4fe470;
        case 0x4fe474u: goto label_4fe474;
        case 0x4fe478u: goto label_4fe478;
        case 0x4fe47cu: goto label_4fe47c;
        case 0x4fe480u: goto label_4fe480;
        case 0x4fe484u: goto label_4fe484;
        case 0x4fe488u: goto label_4fe488;
        case 0x4fe48cu: goto label_4fe48c;
        case 0x4fe490u: goto label_4fe490;
        case 0x4fe494u: goto label_4fe494;
        case 0x4fe498u: goto label_4fe498;
        case 0x4fe49cu: goto label_4fe49c;
        case 0x4fe4a0u: goto label_4fe4a0;
        case 0x4fe4a4u: goto label_4fe4a4;
        case 0x4fe4a8u: goto label_4fe4a8;
        case 0x4fe4acu: goto label_4fe4ac;
        case 0x4fe4b0u: goto label_4fe4b0;
        case 0x4fe4b4u: goto label_4fe4b4;
        case 0x4fe4b8u: goto label_4fe4b8;
        case 0x4fe4bcu: goto label_4fe4bc;
        case 0x4fe4c0u: goto label_4fe4c0;
        case 0x4fe4c4u: goto label_4fe4c4;
        case 0x4fe4c8u: goto label_4fe4c8;
        case 0x4fe4ccu: goto label_4fe4cc;
        case 0x4fe4d0u: goto label_4fe4d0;
        case 0x4fe4d4u: goto label_4fe4d4;
        case 0x4fe4d8u: goto label_4fe4d8;
        case 0x4fe4dcu: goto label_4fe4dc;
        case 0x4fe4e0u: goto label_4fe4e0;
        case 0x4fe4e4u: goto label_4fe4e4;
        case 0x4fe4e8u: goto label_4fe4e8;
        case 0x4fe4ecu: goto label_4fe4ec;
        case 0x4fe4f0u: goto label_4fe4f0;
        case 0x4fe4f4u: goto label_4fe4f4;
        case 0x4fe4f8u: goto label_4fe4f8;
        case 0x4fe4fcu: goto label_4fe4fc;
        case 0x4fe500u: goto label_4fe500;
        case 0x4fe504u: goto label_4fe504;
        case 0x4fe508u: goto label_4fe508;
        case 0x4fe50cu: goto label_4fe50c;
        case 0x4fe510u: goto label_4fe510;
        case 0x4fe514u: goto label_4fe514;
        case 0x4fe518u: goto label_4fe518;
        case 0x4fe51cu: goto label_4fe51c;
        case 0x4fe520u: goto label_4fe520;
        case 0x4fe524u: goto label_4fe524;
        case 0x4fe528u: goto label_4fe528;
        case 0x4fe52cu: goto label_4fe52c;
        case 0x4fe530u: goto label_4fe530;
        case 0x4fe534u: goto label_4fe534;
        case 0x4fe538u: goto label_4fe538;
        case 0x4fe53cu: goto label_4fe53c;
        case 0x4fe540u: goto label_4fe540;
        case 0x4fe544u: goto label_4fe544;
        case 0x4fe548u: goto label_4fe548;
        case 0x4fe54cu: goto label_4fe54c;
        case 0x4fe550u: goto label_4fe550;
        case 0x4fe554u: goto label_4fe554;
        case 0x4fe558u: goto label_4fe558;
        case 0x4fe55cu: goto label_4fe55c;
        case 0x4fe560u: goto label_4fe560;
        case 0x4fe564u: goto label_4fe564;
        case 0x4fe568u: goto label_4fe568;
        case 0x4fe56cu: goto label_4fe56c;
        case 0x4fe570u: goto label_4fe570;
        case 0x4fe574u: goto label_4fe574;
        case 0x4fe578u: goto label_4fe578;
        case 0x4fe57cu: goto label_4fe57c;
        case 0x4fe580u: goto label_4fe580;
        case 0x4fe584u: goto label_4fe584;
        case 0x4fe588u: goto label_4fe588;
        case 0x4fe58cu: goto label_4fe58c;
        case 0x4fe590u: goto label_4fe590;
        case 0x4fe594u: goto label_4fe594;
        case 0x4fe598u: goto label_4fe598;
        case 0x4fe59cu: goto label_4fe59c;
        case 0x4fe5a0u: goto label_4fe5a0;
        case 0x4fe5a4u: goto label_4fe5a4;
        case 0x4fe5a8u: goto label_4fe5a8;
        case 0x4fe5acu: goto label_4fe5ac;
        case 0x4fe5b0u: goto label_4fe5b0;
        case 0x4fe5b4u: goto label_4fe5b4;
        case 0x4fe5b8u: goto label_4fe5b8;
        case 0x4fe5bcu: goto label_4fe5bc;
        case 0x4fe5c0u: goto label_4fe5c0;
        case 0x4fe5c4u: goto label_4fe5c4;
        case 0x4fe5c8u: goto label_4fe5c8;
        case 0x4fe5ccu: goto label_4fe5cc;
        case 0x4fe5d0u: goto label_4fe5d0;
        case 0x4fe5d4u: goto label_4fe5d4;
        case 0x4fe5d8u: goto label_4fe5d8;
        case 0x4fe5dcu: goto label_4fe5dc;
        case 0x4fe5e0u: goto label_4fe5e0;
        case 0x4fe5e4u: goto label_4fe5e4;
        case 0x4fe5e8u: goto label_4fe5e8;
        case 0x4fe5ecu: goto label_4fe5ec;
        case 0x4fe5f0u: goto label_4fe5f0;
        case 0x4fe5f4u: goto label_4fe5f4;
        case 0x4fe5f8u: goto label_4fe5f8;
        case 0x4fe5fcu: goto label_4fe5fc;
        case 0x4fe600u: goto label_4fe600;
        case 0x4fe604u: goto label_4fe604;
        case 0x4fe608u: goto label_4fe608;
        case 0x4fe60cu: goto label_4fe60c;
        case 0x4fe610u: goto label_4fe610;
        case 0x4fe614u: goto label_4fe614;
        case 0x4fe618u: goto label_4fe618;
        case 0x4fe61cu: goto label_4fe61c;
        case 0x4fe620u: goto label_4fe620;
        case 0x4fe624u: goto label_4fe624;
        case 0x4fe628u: goto label_4fe628;
        case 0x4fe62cu: goto label_4fe62c;
        case 0x4fe630u: goto label_4fe630;
        case 0x4fe634u: goto label_4fe634;
        case 0x4fe638u: goto label_4fe638;
        case 0x4fe63cu: goto label_4fe63c;
        case 0x4fe640u: goto label_4fe640;
        case 0x4fe644u: goto label_4fe644;
        case 0x4fe648u: goto label_4fe648;
        case 0x4fe64cu: goto label_4fe64c;
        case 0x4fe650u: goto label_4fe650;
        case 0x4fe654u: goto label_4fe654;
        case 0x4fe658u: goto label_4fe658;
        case 0x4fe65cu: goto label_4fe65c;
        case 0x4fe660u: goto label_4fe660;
        case 0x4fe664u: goto label_4fe664;
        case 0x4fe668u: goto label_4fe668;
        case 0x4fe66cu: goto label_4fe66c;
        case 0x4fe670u: goto label_4fe670;
        case 0x4fe674u: goto label_4fe674;
        case 0x4fe678u: goto label_4fe678;
        case 0x4fe67cu: goto label_4fe67c;
        case 0x4fe680u: goto label_4fe680;
        case 0x4fe684u: goto label_4fe684;
        case 0x4fe688u: goto label_4fe688;
        case 0x4fe68cu: goto label_4fe68c;
        case 0x4fe690u: goto label_4fe690;
        case 0x4fe694u: goto label_4fe694;
        case 0x4fe698u: goto label_4fe698;
        case 0x4fe69cu: goto label_4fe69c;
        case 0x4fe6a0u: goto label_4fe6a0;
        case 0x4fe6a4u: goto label_4fe6a4;
        case 0x4fe6a8u: goto label_4fe6a8;
        case 0x4fe6acu: goto label_4fe6ac;
        case 0x4fe6b0u: goto label_4fe6b0;
        case 0x4fe6b4u: goto label_4fe6b4;
        case 0x4fe6b8u: goto label_4fe6b8;
        case 0x4fe6bcu: goto label_4fe6bc;
        case 0x4fe6c0u: goto label_4fe6c0;
        case 0x4fe6c4u: goto label_4fe6c4;
        case 0x4fe6c8u: goto label_4fe6c8;
        case 0x4fe6ccu: goto label_4fe6cc;
        case 0x4fe6d0u: goto label_4fe6d0;
        case 0x4fe6d4u: goto label_4fe6d4;
        case 0x4fe6d8u: goto label_4fe6d8;
        case 0x4fe6dcu: goto label_4fe6dc;
        case 0x4fe6e0u: goto label_4fe6e0;
        case 0x4fe6e4u: goto label_4fe6e4;
        case 0x4fe6e8u: goto label_4fe6e8;
        case 0x4fe6ecu: goto label_4fe6ec;
        case 0x4fe6f0u: goto label_4fe6f0;
        case 0x4fe6f4u: goto label_4fe6f4;
        case 0x4fe6f8u: goto label_4fe6f8;
        case 0x4fe6fcu: goto label_4fe6fc;
        case 0x4fe700u: goto label_4fe700;
        case 0x4fe704u: goto label_4fe704;
        case 0x4fe708u: goto label_4fe708;
        case 0x4fe70cu: goto label_4fe70c;
        case 0x4fe710u: goto label_4fe710;
        case 0x4fe714u: goto label_4fe714;
        case 0x4fe718u: goto label_4fe718;
        case 0x4fe71cu: goto label_4fe71c;
        case 0x4fe720u: goto label_4fe720;
        case 0x4fe724u: goto label_4fe724;
        case 0x4fe728u: goto label_4fe728;
        case 0x4fe72cu: goto label_4fe72c;
        case 0x4fe730u: goto label_4fe730;
        case 0x4fe734u: goto label_4fe734;
        case 0x4fe738u: goto label_4fe738;
        case 0x4fe73cu: goto label_4fe73c;
        case 0x4fe740u: goto label_4fe740;
        case 0x4fe744u: goto label_4fe744;
        case 0x4fe748u: goto label_4fe748;
        case 0x4fe74cu: goto label_4fe74c;
        case 0x4fe750u: goto label_4fe750;
        case 0x4fe754u: goto label_4fe754;
        case 0x4fe758u: goto label_4fe758;
        case 0x4fe75cu: goto label_4fe75c;
        case 0x4fe760u: goto label_4fe760;
        case 0x4fe764u: goto label_4fe764;
        case 0x4fe768u: goto label_4fe768;
        case 0x4fe76cu: goto label_4fe76c;
        case 0x4fe770u: goto label_4fe770;
        case 0x4fe774u: goto label_4fe774;
        case 0x4fe778u: goto label_4fe778;
        case 0x4fe77cu: goto label_4fe77c;
        case 0x4fe780u: goto label_4fe780;
        case 0x4fe784u: goto label_4fe784;
        case 0x4fe788u: goto label_4fe788;
        case 0x4fe78cu: goto label_4fe78c;
        case 0x4fe790u: goto label_4fe790;
        case 0x4fe794u: goto label_4fe794;
        case 0x4fe798u: goto label_4fe798;
        case 0x4fe79cu: goto label_4fe79c;
        case 0x4fe7a0u: goto label_4fe7a0;
        case 0x4fe7a4u: goto label_4fe7a4;
        case 0x4fe7a8u: goto label_4fe7a8;
        case 0x4fe7acu: goto label_4fe7ac;
        case 0x4fe7b0u: goto label_4fe7b0;
        case 0x4fe7b4u: goto label_4fe7b4;
        case 0x4fe7b8u: goto label_4fe7b8;
        case 0x4fe7bcu: goto label_4fe7bc;
        case 0x4fe7c0u: goto label_4fe7c0;
        case 0x4fe7c4u: goto label_4fe7c4;
        case 0x4fe7c8u: goto label_4fe7c8;
        case 0x4fe7ccu: goto label_4fe7cc;
        case 0x4fe7d0u: goto label_4fe7d0;
        case 0x4fe7d4u: goto label_4fe7d4;
        case 0x4fe7d8u: goto label_4fe7d8;
        case 0x4fe7dcu: goto label_4fe7dc;
        case 0x4fe7e0u: goto label_4fe7e0;
        case 0x4fe7e4u: goto label_4fe7e4;
        case 0x4fe7e8u: goto label_4fe7e8;
        case 0x4fe7ecu: goto label_4fe7ec;
        case 0x4fe7f0u: goto label_4fe7f0;
        case 0x4fe7f4u: goto label_4fe7f4;
        case 0x4fe7f8u: goto label_4fe7f8;
        case 0x4fe7fcu: goto label_4fe7fc;
        case 0x4fe800u: goto label_4fe800;
        case 0x4fe804u: goto label_4fe804;
        case 0x4fe808u: goto label_4fe808;
        case 0x4fe80cu: goto label_4fe80c;
        case 0x4fe810u: goto label_4fe810;
        case 0x4fe814u: goto label_4fe814;
        case 0x4fe818u: goto label_4fe818;
        case 0x4fe81cu: goto label_4fe81c;
        case 0x4fe820u: goto label_4fe820;
        case 0x4fe824u: goto label_4fe824;
        case 0x4fe828u: goto label_4fe828;
        case 0x4fe82cu: goto label_4fe82c;
        case 0x4fe830u: goto label_4fe830;
        case 0x4fe834u: goto label_4fe834;
        case 0x4fe838u: goto label_4fe838;
        case 0x4fe83cu: goto label_4fe83c;
        case 0x4fe840u: goto label_4fe840;
        case 0x4fe844u: goto label_4fe844;
        case 0x4fe848u: goto label_4fe848;
        case 0x4fe84cu: goto label_4fe84c;
        case 0x4fe850u: goto label_4fe850;
        case 0x4fe854u: goto label_4fe854;
        case 0x4fe858u: goto label_4fe858;
        case 0x4fe85cu: goto label_4fe85c;
        case 0x4fe860u: goto label_4fe860;
        case 0x4fe864u: goto label_4fe864;
        case 0x4fe868u: goto label_4fe868;
        case 0x4fe86cu: goto label_4fe86c;
        case 0x4fe870u: goto label_4fe870;
        case 0x4fe874u: goto label_4fe874;
        case 0x4fe878u: goto label_4fe878;
        case 0x4fe87cu: goto label_4fe87c;
        case 0x4fe880u: goto label_4fe880;
        case 0x4fe884u: goto label_4fe884;
        case 0x4fe888u: goto label_4fe888;
        case 0x4fe88cu: goto label_4fe88c;
        case 0x4fe890u: goto label_4fe890;
        case 0x4fe894u: goto label_4fe894;
        case 0x4fe898u: goto label_4fe898;
        case 0x4fe89cu: goto label_4fe89c;
        case 0x4fe8a0u: goto label_4fe8a0;
        case 0x4fe8a4u: goto label_4fe8a4;
        case 0x4fe8a8u: goto label_4fe8a8;
        case 0x4fe8acu: goto label_4fe8ac;
        case 0x4fe8b0u: goto label_4fe8b0;
        case 0x4fe8b4u: goto label_4fe8b4;
        case 0x4fe8b8u: goto label_4fe8b8;
        case 0x4fe8bcu: goto label_4fe8bc;
        case 0x4fe8c0u: goto label_4fe8c0;
        case 0x4fe8c4u: goto label_4fe8c4;
        case 0x4fe8c8u: goto label_4fe8c8;
        case 0x4fe8ccu: goto label_4fe8cc;
        case 0x4fe8d0u: goto label_4fe8d0;
        case 0x4fe8d4u: goto label_4fe8d4;
        case 0x4fe8d8u: goto label_4fe8d8;
        case 0x4fe8dcu: goto label_4fe8dc;
        case 0x4fe8e0u: goto label_4fe8e0;
        case 0x4fe8e4u: goto label_4fe8e4;
        case 0x4fe8e8u: goto label_4fe8e8;
        case 0x4fe8ecu: goto label_4fe8ec;
        case 0x4fe8f0u: goto label_4fe8f0;
        case 0x4fe8f4u: goto label_4fe8f4;
        case 0x4fe8f8u: goto label_4fe8f8;
        case 0x4fe8fcu: goto label_4fe8fc;
        case 0x4fe900u: goto label_4fe900;
        case 0x4fe904u: goto label_4fe904;
        case 0x4fe908u: goto label_4fe908;
        case 0x4fe90cu: goto label_4fe90c;
        case 0x4fe910u: goto label_4fe910;
        case 0x4fe914u: goto label_4fe914;
        case 0x4fe918u: goto label_4fe918;
        case 0x4fe91cu: goto label_4fe91c;
        case 0x4fe920u: goto label_4fe920;
        case 0x4fe924u: goto label_4fe924;
        case 0x4fe928u: goto label_4fe928;
        case 0x4fe92cu: goto label_4fe92c;
        case 0x4fe930u: goto label_4fe930;
        case 0x4fe934u: goto label_4fe934;
        case 0x4fe938u: goto label_4fe938;
        case 0x4fe93cu: goto label_4fe93c;
        case 0x4fe940u: goto label_4fe940;
        case 0x4fe944u: goto label_4fe944;
        case 0x4fe948u: goto label_4fe948;
        case 0x4fe94cu: goto label_4fe94c;
        case 0x4fe950u: goto label_4fe950;
        case 0x4fe954u: goto label_4fe954;
        case 0x4fe958u: goto label_4fe958;
        case 0x4fe95cu: goto label_4fe95c;
        case 0x4fe960u: goto label_4fe960;
        case 0x4fe964u: goto label_4fe964;
        case 0x4fe968u: goto label_4fe968;
        case 0x4fe96cu: goto label_4fe96c;
        case 0x4fe970u: goto label_4fe970;
        case 0x4fe974u: goto label_4fe974;
        case 0x4fe978u: goto label_4fe978;
        case 0x4fe97cu: goto label_4fe97c;
        case 0x4fe980u: goto label_4fe980;
        case 0x4fe984u: goto label_4fe984;
        case 0x4fe988u: goto label_4fe988;
        case 0x4fe98cu: goto label_4fe98c;
        case 0x4fe990u: goto label_4fe990;
        case 0x4fe994u: goto label_4fe994;
        case 0x4fe998u: goto label_4fe998;
        case 0x4fe99cu: goto label_4fe99c;
        case 0x4fe9a0u: goto label_4fe9a0;
        case 0x4fe9a4u: goto label_4fe9a4;
        case 0x4fe9a8u: goto label_4fe9a8;
        case 0x4fe9acu: goto label_4fe9ac;
        case 0x4fe9b0u: goto label_4fe9b0;
        case 0x4fe9b4u: goto label_4fe9b4;
        case 0x4fe9b8u: goto label_4fe9b8;
        case 0x4fe9bcu: goto label_4fe9bc;
        case 0x4fe9c0u: goto label_4fe9c0;
        case 0x4fe9c4u: goto label_4fe9c4;
        case 0x4fe9c8u: goto label_4fe9c8;
        case 0x4fe9ccu: goto label_4fe9cc;
        case 0x4fe9d0u: goto label_4fe9d0;
        case 0x4fe9d4u: goto label_4fe9d4;
        case 0x4fe9d8u: goto label_4fe9d8;
        case 0x4fe9dcu: goto label_4fe9dc;
        case 0x4fe9e0u: goto label_4fe9e0;
        case 0x4fe9e4u: goto label_4fe9e4;
        case 0x4fe9e8u: goto label_4fe9e8;
        case 0x4fe9ecu: goto label_4fe9ec;
        case 0x4fe9f0u: goto label_4fe9f0;
        case 0x4fe9f4u: goto label_4fe9f4;
        case 0x4fe9f8u: goto label_4fe9f8;
        case 0x4fe9fcu: goto label_4fe9fc;
        case 0x4fea00u: goto label_4fea00;
        case 0x4fea04u: goto label_4fea04;
        case 0x4fea08u: goto label_4fea08;
        case 0x4fea0cu: goto label_4fea0c;
        case 0x4fea10u: goto label_4fea10;
        case 0x4fea14u: goto label_4fea14;
        case 0x4fea18u: goto label_4fea18;
        case 0x4fea1cu: goto label_4fea1c;
        case 0x4fea20u: goto label_4fea20;
        case 0x4fea24u: goto label_4fea24;
        case 0x4fea28u: goto label_4fea28;
        case 0x4fea2cu: goto label_4fea2c;
        case 0x4fea30u: goto label_4fea30;
        case 0x4fea34u: goto label_4fea34;
        case 0x4fea38u: goto label_4fea38;
        case 0x4fea3cu: goto label_4fea3c;
        case 0x4fea40u: goto label_4fea40;
        case 0x4fea44u: goto label_4fea44;
        case 0x4fea48u: goto label_4fea48;
        case 0x4fea4cu: goto label_4fea4c;
        case 0x4fea50u: goto label_4fea50;
        case 0x4fea54u: goto label_4fea54;
        case 0x4fea58u: goto label_4fea58;
        case 0x4fea5cu: goto label_4fea5c;
        case 0x4fea60u: goto label_4fea60;
        case 0x4fea64u: goto label_4fea64;
        case 0x4fea68u: goto label_4fea68;
        case 0x4fea6cu: goto label_4fea6c;
        case 0x4fea70u: goto label_4fea70;
        case 0x4fea74u: goto label_4fea74;
        case 0x4fea78u: goto label_4fea78;
        case 0x4fea7cu: goto label_4fea7c;
        case 0x4fea80u: goto label_4fea80;
        case 0x4fea84u: goto label_4fea84;
        case 0x4fea88u: goto label_4fea88;
        case 0x4fea8cu: goto label_4fea8c;
        case 0x4fea90u: goto label_4fea90;
        case 0x4fea94u: goto label_4fea94;
        case 0x4fea98u: goto label_4fea98;
        case 0x4fea9cu: goto label_4fea9c;
        case 0x4feaa0u: goto label_4feaa0;
        case 0x4feaa4u: goto label_4feaa4;
        case 0x4feaa8u: goto label_4feaa8;
        case 0x4feaacu: goto label_4feaac;
        case 0x4feab0u: goto label_4feab0;
        case 0x4feab4u: goto label_4feab4;
        case 0x4feab8u: goto label_4feab8;
        case 0x4feabcu: goto label_4feabc;
        case 0x4feac0u: goto label_4feac0;
        case 0x4feac4u: goto label_4feac4;
        case 0x4feac8u: goto label_4feac8;
        case 0x4feaccu: goto label_4feacc;
        case 0x4fead0u: goto label_4fead0;
        case 0x4fead4u: goto label_4fead4;
        case 0x4fead8u: goto label_4fead8;
        case 0x4feadcu: goto label_4feadc;
        case 0x4feae0u: goto label_4feae0;
        case 0x4feae4u: goto label_4feae4;
        case 0x4feae8u: goto label_4feae8;
        case 0x4feaecu: goto label_4feaec;
        case 0x4feaf0u: goto label_4feaf0;
        case 0x4feaf4u: goto label_4feaf4;
        case 0x4feaf8u: goto label_4feaf8;
        case 0x4feafcu: goto label_4feafc;
        case 0x4feb00u: goto label_4feb00;
        case 0x4feb04u: goto label_4feb04;
        case 0x4feb08u: goto label_4feb08;
        case 0x4feb0cu: goto label_4feb0c;
        case 0x4feb10u: goto label_4feb10;
        case 0x4feb14u: goto label_4feb14;
        case 0x4feb18u: goto label_4feb18;
        case 0x4feb1cu: goto label_4feb1c;
        case 0x4feb20u: goto label_4feb20;
        case 0x4feb24u: goto label_4feb24;
        case 0x4feb28u: goto label_4feb28;
        case 0x4feb2cu: goto label_4feb2c;
        case 0x4feb30u: goto label_4feb30;
        case 0x4feb34u: goto label_4feb34;
        case 0x4feb38u: goto label_4feb38;
        case 0x4feb3cu: goto label_4feb3c;
        case 0x4feb40u: goto label_4feb40;
        case 0x4feb44u: goto label_4feb44;
        case 0x4feb48u: goto label_4feb48;
        case 0x4feb4cu: goto label_4feb4c;
        case 0x4feb50u: goto label_4feb50;
        case 0x4feb54u: goto label_4feb54;
        case 0x4feb58u: goto label_4feb58;
        case 0x4feb5cu: goto label_4feb5c;
        case 0x4feb60u: goto label_4feb60;
        case 0x4feb64u: goto label_4feb64;
        case 0x4feb68u: goto label_4feb68;
        case 0x4feb6cu: goto label_4feb6c;
        case 0x4feb70u: goto label_4feb70;
        case 0x4feb74u: goto label_4feb74;
        case 0x4feb78u: goto label_4feb78;
        case 0x4feb7cu: goto label_4feb7c;
        case 0x4feb80u: goto label_4feb80;
        case 0x4feb84u: goto label_4feb84;
        case 0x4feb88u: goto label_4feb88;
        case 0x4feb8cu: goto label_4feb8c;
        case 0x4feb90u: goto label_4feb90;
        case 0x4feb94u: goto label_4feb94;
        case 0x4feb98u: goto label_4feb98;
        case 0x4feb9cu: goto label_4feb9c;
        case 0x4feba0u: goto label_4feba0;
        case 0x4feba4u: goto label_4feba4;
        case 0x4feba8u: goto label_4feba8;
        case 0x4febacu: goto label_4febac;
        case 0x4febb0u: goto label_4febb0;
        case 0x4febb4u: goto label_4febb4;
        case 0x4febb8u: goto label_4febb8;
        case 0x4febbcu: goto label_4febbc;
        case 0x4febc0u: goto label_4febc0;
        case 0x4febc4u: goto label_4febc4;
        case 0x4febc8u: goto label_4febc8;
        case 0x4febccu: goto label_4febcc;
        case 0x4febd0u: goto label_4febd0;
        case 0x4febd4u: goto label_4febd4;
        case 0x4febd8u: goto label_4febd8;
        case 0x4febdcu: goto label_4febdc;
        case 0x4febe0u: goto label_4febe0;
        case 0x4febe4u: goto label_4febe4;
        case 0x4febe8u: goto label_4febe8;
        case 0x4febecu: goto label_4febec;
        case 0x4febf0u: goto label_4febf0;
        case 0x4febf4u: goto label_4febf4;
        case 0x4febf8u: goto label_4febf8;
        case 0x4febfcu: goto label_4febfc;
        case 0x4fec00u: goto label_4fec00;
        case 0x4fec04u: goto label_4fec04;
        case 0x4fec08u: goto label_4fec08;
        case 0x4fec0cu: goto label_4fec0c;
        case 0x4fec10u: goto label_4fec10;
        case 0x4fec14u: goto label_4fec14;
        case 0x4fec18u: goto label_4fec18;
        case 0x4fec1cu: goto label_4fec1c;
        case 0x4fec20u: goto label_4fec20;
        case 0x4fec24u: goto label_4fec24;
        case 0x4fec28u: goto label_4fec28;
        case 0x4fec2cu: goto label_4fec2c;
        case 0x4fec30u: goto label_4fec30;
        case 0x4fec34u: goto label_4fec34;
        case 0x4fec38u: goto label_4fec38;
        case 0x4fec3cu: goto label_4fec3c;
        case 0x4fec40u: goto label_4fec40;
        case 0x4fec44u: goto label_4fec44;
        case 0x4fec48u: goto label_4fec48;
        case 0x4fec4cu: goto label_4fec4c;
        case 0x4fec50u: goto label_4fec50;
        case 0x4fec54u: goto label_4fec54;
        case 0x4fec58u: goto label_4fec58;
        case 0x4fec5cu: goto label_4fec5c;
        case 0x4fec60u: goto label_4fec60;
        case 0x4fec64u: goto label_4fec64;
        case 0x4fec68u: goto label_4fec68;
        case 0x4fec6cu: goto label_4fec6c;
        case 0x4fec70u: goto label_4fec70;
        case 0x4fec74u: goto label_4fec74;
        case 0x4fec78u: goto label_4fec78;
        case 0x4fec7cu: goto label_4fec7c;
        case 0x4fec80u: goto label_4fec80;
        case 0x4fec84u: goto label_4fec84;
        case 0x4fec88u: goto label_4fec88;
        case 0x4fec8cu: goto label_4fec8c;
        case 0x4fec90u: goto label_4fec90;
        case 0x4fec94u: goto label_4fec94;
        case 0x4fec98u: goto label_4fec98;
        case 0x4fec9cu: goto label_4fec9c;
        case 0x4feca0u: goto label_4feca0;
        case 0x4feca4u: goto label_4feca4;
        case 0x4feca8u: goto label_4feca8;
        case 0x4fecacu: goto label_4fecac;
        case 0x4fecb0u: goto label_4fecb0;
        case 0x4fecb4u: goto label_4fecb4;
        case 0x4fecb8u: goto label_4fecb8;
        case 0x4fecbcu: goto label_4fecbc;
        case 0x4fecc0u: goto label_4fecc0;
        case 0x4fecc4u: goto label_4fecc4;
        case 0x4fecc8u: goto label_4fecc8;
        case 0x4fecccu: goto label_4feccc;
        case 0x4fecd0u: goto label_4fecd0;
        case 0x4fecd4u: goto label_4fecd4;
        case 0x4fecd8u: goto label_4fecd8;
        case 0x4fecdcu: goto label_4fecdc;
        case 0x4fece0u: goto label_4fece0;
        case 0x4fece4u: goto label_4fece4;
        case 0x4fece8u: goto label_4fece8;
        case 0x4fececu: goto label_4fecec;
        case 0x4fecf0u: goto label_4fecf0;
        case 0x4fecf4u: goto label_4fecf4;
        case 0x4fecf8u: goto label_4fecf8;
        case 0x4fecfcu: goto label_4fecfc;
        case 0x4fed00u: goto label_4fed00;
        case 0x4fed04u: goto label_4fed04;
        case 0x4fed08u: goto label_4fed08;
        case 0x4fed0cu: goto label_4fed0c;
        case 0x4fed10u: goto label_4fed10;
        case 0x4fed14u: goto label_4fed14;
        case 0x4fed18u: goto label_4fed18;
        case 0x4fed1cu: goto label_4fed1c;
        case 0x4fed20u: goto label_4fed20;
        case 0x4fed24u: goto label_4fed24;
        case 0x4fed28u: goto label_4fed28;
        case 0x4fed2cu: goto label_4fed2c;
        case 0x4fed30u: goto label_4fed30;
        case 0x4fed34u: goto label_4fed34;
        case 0x4fed38u: goto label_4fed38;
        case 0x4fed3cu: goto label_4fed3c;
        case 0x4fed40u: goto label_4fed40;
        case 0x4fed44u: goto label_4fed44;
        case 0x4fed48u: goto label_4fed48;
        case 0x4fed4cu: goto label_4fed4c;
        case 0x4fed50u: goto label_4fed50;
        case 0x4fed54u: goto label_4fed54;
        case 0x4fed58u: goto label_4fed58;
        case 0x4fed5cu: goto label_4fed5c;
        case 0x4fed60u: goto label_4fed60;
        case 0x4fed64u: goto label_4fed64;
        case 0x4fed68u: goto label_4fed68;
        case 0x4fed6cu: goto label_4fed6c;
        case 0x4fed70u: goto label_4fed70;
        case 0x4fed74u: goto label_4fed74;
        case 0x4fed78u: goto label_4fed78;
        case 0x4fed7cu: goto label_4fed7c;
        case 0x4fed80u: goto label_4fed80;
        case 0x4fed84u: goto label_4fed84;
        case 0x4fed88u: goto label_4fed88;
        case 0x4fed8cu: goto label_4fed8c;
        case 0x4fed90u: goto label_4fed90;
        case 0x4fed94u: goto label_4fed94;
        case 0x4fed98u: goto label_4fed98;
        case 0x4fed9cu: goto label_4fed9c;
        case 0x4feda0u: goto label_4feda0;
        case 0x4feda4u: goto label_4feda4;
        case 0x4feda8u: goto label_4feda8;
        case 0x4fedacu: goto label_4fedac;
        case 0x4fedb0u: goto label_4fedb0;
        case 0x4fedb4u: goto label_4fedb4;
        case 0x4fedb8u: goto label_4fedb8;
        case 0x4fedbcu: goto label_4fedbc;
        case 0x4fedc0u: goto label_4fedc0;
        case 0x4fedc4u: goto label_4fedc4;
        case 0x4fedc8u: goto label_4fedc8;
        case 0x4fedccu: goto label_4fedcc;
        case 0x4fedd0u: goto label_4fedd0;
        case 0x4fedd4u: goto label_4fedd4;
        case 0x4fedd8u: goto label_4fedd8;
        case 0x4feddcu: goto label_4feddc;
        case 0x4fede0u: goto label_4fede0;
        case 0x4fede4u: goto label_4fede4;
        case 0x4fede8u: goto label_4fede8;
        case 0x4fedecu: goto label_4fedec;
        case 0x4fedf0u: goto label_4fedf0;
        case 0x4fedf4u: goto label_4fedf4;
        case 0x4fedf8u: goto label_4fedf8;
        case 0x4fedfcu: goto label_4fedfc;
        case 0x4fee00u: goto label_4fee00;
        case 0x4fee04u: goto label_4fee04;
        case 0x4fee08u: goto label_4fee08;
        case 0x4fee0cu: goto label_4fee0c;
        case 0x4fee10u: goto label_4fee10;
        case 0x4fee14u: goto label_4fee14;
        case 0x4fee18u: goto label_4fee18;
        case 0x4fee1cu: goto label_4fee1c;
        case 0x4fee20u: goto label_4fee20;
        case 0x4fee24u: goto label_4fee24;
        case 0x4fee28u: goto label_4fee28;
        case 0x4fee2cu: goto label_4fee2c;
        case 0x4fee30u: goto label_4fee30;
        case 0x4fee34u: goto label_4fee34;
        case 0x4fee38u: goto label_4fee38;
        case 0x4fee3cu: goto label_4fee3c;
        case 0x4fee40u: goto label_4fee40;
        case 0x4fee44u: goto label_4fee44;
        case 0x4fee48u: goto label_4fee48;
        case 0x4fee4cu: goto label_4fee4c;
        case 0x4fee50u: goto label_4fee50;
        case 0x4fee54u: goto label_4fee54;
        case 0x4fee58u: goto label_4fee58;
        case 0x4fee5cu: goto label_4fee5c;
        case 0x4fee60u: goto label_4fee60;
        case 0x4fee64u: goto label_4fee64;
        case 0x4fee68u: goto label_4fee68;
        case 0x4fee6cu: goto label_4fee6c;
        case 0x4fee70u: goto label_4fee70;
        case 0x4fee74u: goto label_4fee74;
        case 0x4fee78u: goto label_4fee78;
        case 0x4fee7cu: goto label_4fee7c;
        case 0x4fee80u: goto label_4fee80;
        case 0x4fee84u: goto label_4fee84;
        case 0x4fee88u: goto label_4fee88;
        case 0x4fee8cu: goto label_4fee8c;
        case 0x4fee90u: goto label_4fee90;
        case 0x4fee94u: goto label_4fee94;
        case 0x4fee98u: goto label_4fee98;
        case 0x4fee9cu: goto label_4fee9c;
        case 0x4feea0u: goto label_4feea0;
        case 0x4feea4u: goto label_4feea4;
        case 0x4feea8u: goto label_4feea8;
        case 0x4feeacu: goto label_4feeac;
        case 0x4feeb0u: goto label_4feeb0;
        case 0x4feeb4u: goto label_4feeb4;
        case 0x4feeb8u: goto label_4feeb8;
        case 0x4feebcu: goto label_4feebc;
        case 0x4feec0u: goto label_4feec0;
        case 0x4feec4u: goto label_4feec4;
        case 0x4feec8u: goto label_4feec8;
        case 0x4feeccu: goto label_4feecc;
        case 0x4feed0u: goto label_4feed0;
        case 0x4feed4u: goto label_4feed4;
        case 0x4feed8u: goto label_4feed8;
        case 0x4feedcu: goto label_4feedc;
        case 0x4feee0u: goto label_4feee0;
        case 0x4feee4u: goto label_4feee4;
        case 0x4feee8u: goto label_4feee8;
        case 0x4feeecu: goto label_4feeec;
        case 0x4feef0u: goto label_4feef0;
        case 0x4feef4u: goto label_4feef4;
        case 0x4feef8u: goto label_4feef8;
        case 0x4feefcu: goto label_4feefc;
        case 0x4fef00u: goto label_4fef00;
        case 0x4fef04u: goto label_4fef04;
        case 0x4fef08u: goto label_4fef08;
        case 0x4fef0cu: goto label_4fef0c;
        case 0x4fef10u: goto label_4fef10;
        case 0x4fef14u: goto label_4fef14;
        case 0x4fef18u: goto label_4fef18;
        case 0x4fef1cu: goto label_4fef1c;
        case 0x4fef20u: goto label_4fef20;
        case 0x4fef24u: goto label_4fef24;
        case 0x4fef28u: goto label_4fef28;
        case 0x4fef2cu: goto label_4fef2c;
        case 0x4fef30u: goto label_4fef30;
        case 0x4fef34u: goto label_4fef34;
        case 0x4fef38u: goto label_4fef38;
        case 0x4fef3cu: goto label_4fef3c;
        case 0x4fef40u: goto label_4fef40;
        case 0x4fef44u: goto label_4fef44;
        case 0x4fef48u: goto label_4fef48;
        case 0x4fef4cu: goto label_4fef4c;
        case 0x4fef50u: goto label_4fef50;
        case 0x4fef54u: goto label_4fef54;
        case 0x4fef58u: goto label_4fef58;
        case 0x4fef5cu: goto label_4fef5c;
        case 0x4fef60u: goto label_4fef60;
        case 0x4fef64u: goto label_4fef64;
        case 0x4fef68u: goto label_4fef68;
        case 0x4fef6cu: goto label_4fef6c;
        case 0x4fef70u: goto label_4fef70;
        case 0x4fef74u: goto label_4fef74;
        case 0x4fef78u: goto label_4fef78;
        case 0x4fef7cu: goto label_4fef7c;
        case 0x4fef80u: goto label_4fef80;
        case 0x4fef84u: goto label_4fef84;
        case 0x4fef88u: goto label_4fef88;
        case 0x4fef8cu: goto label_4fef8c;
        default: break;
    }

    ctx->pc = 0x4fdfc0u;

label_4fdfc0:
    // 0x4fdfc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4fdfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4fdfc4:
    // 0x4fdfc4: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x4fdfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_4fdfc8:
    // 0x4fdfc8: 0x24424630  addiu       $v0, $v0, 0x4630
    ctx->pc = 0x4fdfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17968));
label_4fdfcc:
    // 0x4fdfcc: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4fdfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4fdfd0:
    // 0x4fdfd0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4fdfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4fdfd4:
    // 0x4fdfd4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4fdfd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fdfd8:
    // 0x4fdfd8: 0x3e00008  jr          $ra
label_4fdfdc:
    if (ctx->pc == 0x4FDFDCu) {
        ctx->pc = 0x4FDFDCu;
            // 0x4fdfdc: 0xac65a9d8  sw          $a1, -0x5628($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945240), GPR_U32(ctx, 5));
        ctx->pc = 0x4FDFE0u;
        goto label_4fdfe0;
    }
    ctx->pc = 0x4FDFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FDFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDFD8u;
            // 0x4fdfdc: 0xac65a9d8  sw          $a1, -0x5628($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945240), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FDFE0u;
label_4fdfe0:
    // 0x4fdfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4fdfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4fdfe4:
    // 0x4fdfe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4fdfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4fdfe8:
    // 0x4fdfe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fdfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fdfec:
    // 0x4fdfec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4fdfecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fdff0:
    // 0x4fdff0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x4fdff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4fdff4:
    // 0x4fdff4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_4fdff8:
    if (ctx->pc == 0x4FDFF8u) {
        ctx->pc = 0x4FDFF8u;
            // 0x4fdff8: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x4FDFFCu;
        goto label_4fdffc;
    }
    ctx->pc = 0x4FDFF4u;
    {
        const bool branch_taken_0x4fdff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdff4) {
            ctx->pc = 0x4FDFF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDFF4u;
            // 0x4fdff8: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE01Cu;
            goto label_4fe01c;
        }
    }
    ctx->pc = 0x4FDFFCu;
label_4fdffc:
    // 0x4fdffc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4fe000:
    if (ctx->pc == 0x4FE000u) {
        ctx->pc = 0x4FE000u;
            // 0x4fe000: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4FE004u;
        goto label_4fe004;
    }
    ctx->pc = 0x4FDFFCu;
    {
        const bool branch_taken_0x4fdffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdffc) {
            ctx->pc = 0x4FE000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDFFCu;
            // 0x4fe000: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE018u;
            goto label_4fe018;
        }
    }
    ctx->pc = 0x4FE004u;
label_4fe004:
    // 0x4fe004: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4fe004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fe008:
    // 0x4fe008: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4fe008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4fe00c:
    // 0x4fe00c: 0x320f809  jalr        $t9
label_4fe010:
    if (ctx->pc == 0x4FE010u) {
        ctx->pc = 0x4FE010u;
            // 0x4fe010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FE014u;
        goto label_4fe014;
    }
    ctx->pc = 0x4FE00Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FE014u);
        ctx->pc = 0x4FE010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE00Cu;
            // 0x4fe010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FE014u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FE014u; }
            if (ctx->pc != 0x4FE014u) { return; }
        }
        }
    }
    ctx->pc = 0x4FE014u;
label_4fe014:
    // 0x4fe014: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4fe014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4fe018:
    // 0x4fe018: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x4fe018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4fe01c:
    // 0x4fe01c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4fe020:
    if (ctx->pc == 0x4FE020u) {
        ctx->pc = 0x4FE020u;
            // 0x4fe020: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x4FE024u;
        goto label_4fe024;
    }
    ctx->pc = 0x4FE01Cu;
    {
        const bool branch_taken_0x4fe01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe01c) {
            ctx->pc = 0x4FE020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE01Cu;
            // 0x4fe020: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE038u;
            goto label_4fe038;
        }
    }
    ctx->pc = 0x4FE024u;
label_4fe024:
    // 0x4fe024: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4fe024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fe028:
    // 0x4fe028: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4fe028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4fe02c:
    // 0x4fe02c: 0x320f809  jalr        $t9
label_4fe030:
    if (ctx->pc == 0x4FE030u) {
        ctx->pc = 0x4FE030u;
            // 0x4fe030: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FE034u;
        goto label_4fe034;
    }
    ctx->pc = 0x4FE02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FE034u);
        ctx->pc = 0x4FE030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE02Cu;
            // 0x4fe030: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FE034u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FE034u; }
            if (ctx->pc != 0x4FE034u) { return; }
        }
        }
    }
    ctx->pc = 0x4FE034u;
label_4fe034:
    // 0x4fe034: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4fe034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_4fe038:
    // 0x4fe038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4fe038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4fe03c:
    // 0x4fe03c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fe03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fe040:
    // 0x4fe040: 0x3e00008  jr          $ra
label_4fe044:
    if (ctx->pc == 0x4FE044u) {
        ctx->pc = 0x4FE044u;
            // 0x4fe044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4FE048u;
        goto label_4fe048;
    }
    ctx->pc = 0x4FE040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE040u;
            // 0x4fe044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FE048u;
label_4fe048:
    // 0x4fe048: 0x0  nop
    ctx->pc = 0x4fe048u;
    // NOP
label_4fe04c:
    // 0x4fe04c: 0x0  nop
    ctx->pc = 0x4fe04cu;
    // NOP
label_4fe050:
    // 0x4fe050: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4fe050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4fe054:
    // 0x4fe054: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x4fe054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_4fe058:
    // 0x4fe058: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4fe058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4fe05c:
    // 0x4fe05c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4fe05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4fe060:
    // 0x4fe060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fe060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fe064:
    // 0x4fe064: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fe064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fe068:
    // 0x4fe068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fe068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fe06c:
    // 0x4fe06c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4fe06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4fe070:
    // 0x4fe070: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x4fe070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fe074:
    // 0x4fe074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4fe074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fe078:
    // 0x4fe078: 0xc4830038  lwc1        $f3, 0x38($a0)
    ctx->pc = 0x4fe078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4fe07c:
    // 0x4fe07c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4fe07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4fe080:
    // 0x4fe080: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x4fe080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fe084:
    // 0x4fe084: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4fe084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4fe088:
    // 0x4fe088: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4fe088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4fe08c:
    // 0x4fe08c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x4fe08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_4fe090:
    // 0x4fe090: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x4fe090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4fe094:
    // 0x4fe094: 0xe7a30088  swc1        $f3, 0x88($sp)
    ctx->pc = 0x4fe094u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4fe098:
    // 0x4fe098: 0xc0a7a88  jal         func_29EA20
label_4fe09c:
    if (ctx->pc == 0x4FE09Cu) {
        ctx->pc = 0x4FE09Cu;
            // 0x4fe09c: 0xe7a10084  swc1        $f1, 0x84($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->pc = 0x4FE0A0u;
        goto label_4fe0a0;
    }
    ctx->pc = 0x4FE098u;
    SET_GPR_U32(ctx, 31, 0x4FE0A0u);
    ctx->pc = 0x4FE09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE098u;
            // 0x4fe09c: 0xe7a10084  swc1        $f1, 0x84($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE0A0u; }
        if (ctx->pc != 0x4FE0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE0A0u; }
        if (ctx->pc != 0x4FE0A0u) { return; }
    }
    ctx->pc = 0x4FE0A0u;
label_4fe0a0:
    // 0x4fe0a0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4fe0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4fe0a4:
    // 0x4fe0a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4fe0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4fe0a8:
    // 0x4fe0a8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4fe0ac:
    if (ctx->pc == 0x4FE0ACu) {
        ctx->pc = 0x4FE0ACu;
            // 0x4fe0ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4FE0B0u;
        goto label_4fe0b0;
    }
    ctx->pc = 0x4FE0A8u;
    {
        const bool branch_taken_0x4fe0a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE0A8u;
            // 0x4fe0ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe0a8) {
            ctx->pc = 0x4FE0C4u;
            goto label_4fe0c4;
        }
    }
    ctx->pc = 0x4FE0B0u;
label_4fe0b0:
    // 0x4fe0b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4fe0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4fe0b4:
    // 0x4fe0b4: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4fe0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4fe0b8:
    // 0x4fe0b8: 0xc0804bc  jal         func_2012F0
label_4fe0bc:
    if (ctx->pc == 0x4FE0BCu) {
        ctx->pc = 0x4FE0BCu;
            // 0x4fe0bc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4FE0C0u;
        goto label_4fe0c0;
    }
    ctx->pc = 0x4FE0B8u;
    SET_GPR_U32(ctx, 31, 0x4FE0C0u);
    ctx->pc = 0x4FE0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE0B8u;
            // 0x4fe0bc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE0C0u; }
        if (ctx->pc != 0x4FE0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE0C0u; }
        if (ctx->pc != 0x4FE0C0u) { return; }
    }
    ctx->pc = 0x4FE0C0u;
label_4fe0c0:
    // 0x4fe0c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4fe0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4fe0c4:
    // 0x4fe0c4: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4fe0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
label_4fe0c8:
    // 0x4fe0c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fe0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fe0cc:
    // 0x4fe0cc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4fe0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4fe0d0:
    // 0x4fe0d0: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x4fe0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4fe0d4:
    // 0x4fe0d4: 0xc0a7a88  jal         func_29EA20
label_4fe0d8:
    if (ctx->pc == 0x4FE0D8u) {
        ctx->pc = 0x4FE0D8u;
            // 0x4fe0d8: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x4FE0DCu;
        goto label_4fe0dc;
    }
    ctx->pc = 0x4FE0D4u;
    SET_GPR_U32(ctx, 31, 0x4FE0DCu);
    ctx->pc = 0x4FE0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE0D4u;
            // 0x4fe0d8: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE0DCu; }
        if (ctx->pc != 0x4FE0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE0DCu; }
        if (ctx->pc != 0x4FE0DCu) { return; }
    }
    ctx->pc = 0x4FE0DCu;
label_4fe0dc:
    // 0x4fe0dc: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x4fe0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4fe0e0:
    // 0x4fe0e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4fe0e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4fe0e4:
    // 0x4fe0e4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4fe0e8:
    if (ctx->pc == 0x4FE0E8u) {
        ctx->pc = 0x4FE0E8u;
            // 0x4fe0e8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4FE0ECu;
        goto label_4fe0ec;
    }
    ctx->pc = 0x4FE0E4u;
    {
        const bool branch_taken_0x4fe0e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE0E4u;
            // 0x4fe0e8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe0e4) {
            ctx->pc = 0x4FE118u;
            goto label_4fe118;
        }
    }
    ctx->pc = 0x4FE0ECu;
label_4fe0ec:
    // 0x4fe0ec: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x4fe0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4fe0f0:
    // 0x4fe0f0: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x4fe0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_4fe0f4:
    // 0x4fe0f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fe0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fe0f8:
    // 0x4fe0f8: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x4fe0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_4fe0fc:
    // 0x4fe0fc: 0xc08afe0  jal         func_22BF80
label_4fe100:
    if (ctx->pc == 0x4FE100u) {
        ctx->pc = 0x4FE100u;
            // 0x4fe100: 0x24074000  addiu       $a3, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->pc = 0x4FE104u;
        goto label_4fe104;
    }
    ctx->pc = 0x4FE0FCu;
    SET_GPR_U32(ctx, 31, 0x4FE104u);
    ctx->pc = 0x4FE100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE0FCu;
            // 0x4fe100: 0x24074000  addiu       $a3, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE104u; }
        if (ctx->pc != 0x4FE104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE104u; }
        if (ctx->pc != 0x4FE104u) { return; }
    }
    ctx->pc = 0x4FE104u;
label_4fe104:
    // 0x4fe104: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4fe104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4fe108:
    // 0x4fe108: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x4fe108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_4fe10c:
    // 0x4fe10c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4fe10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4fe110:
    // 0x4fe110: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x4fe110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_4fe114:
    // 0x4fe114: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x4fe114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_4fe118:
    // 0x4fe118: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x4fe118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
label_4fe11c:
    // 0x4fe11c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fe11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fe120:
    // 0x4fe120: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4fe120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4fe124:
    // 0x4fe124: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4fe124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4fe128:
    // 0x4fe128: 0xc08c798  jal         func_231E60
label_4fe12c:
    if (ctx->pc == 0x4FE12Cu) {
        ctx->pc = 0x4FE12Cu;
            // 0x4fe12c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE130u;
        goto label_4fe130;
    }
    ctx->pc = 0x4FE128u;
    SET_GPR_U32(ctx, 31, 0x4FE130u);
    ctx->pc = 0x4FE12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE128u;
            // 0x4fe12c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE130u; }
        if (ctx->pc != 0x4FE130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE130u; }
        if (ctx->pc != 0x4FE130u) { return; }
    }
    ctx->pc = 0x4FE130u;
label_4fe130:
    // 0x4fe130: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x4fe130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4fe134:
    // 0x4fe134: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4fe134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4fe138:
    // 0x4fe138: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x4fe138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4fe13c:
    // 0x4fe13c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4fe13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4fe140:
    // 0x4fe140: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x4fe140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fe144:
    // 0x4fe144: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x4fe144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fe148:
    // 0x4fe148: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x4fe148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_4fe14c:
    // 0x4fe14c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x4fe14cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_4fe150:
    // 0x4fe150: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x4fe150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_4fe154:
    // 0x4fe154: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x4fe154u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_4fe158:
    // 0x4fe158: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x4fe158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4fe15c:
    // 0x4fe15c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x4fe15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fe160:
    // 0x4fe160: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x4fe160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fe164:
    // 0x4fe164: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4fe164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4fe168:
    // 0x4fe168: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x4fe168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_4fe16c:
    // 0x4fe16c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x4fe16cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4fe170:
    // 0x4fe170: 0xc0a3830  jal         func_28E0C0
label_4fe174:
    if (ctx->pc == 0x4FE174u) {
        ctx->pc = 0x4FE174u;
            // 0x4fe174: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x4FE178u;
        goto label_4fe178;
    }
    ctx->pc = 0x4FE170u;
    SET_GPR_U32(ctx, 31, 0x4FE178u);
    ctx->pc = 0x4FE174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE170u;
            // 0x4fe174: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE178u; }
        if (ctx->pc != 0x4FE178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE178u; }
        if (ctx->pc != 0x4FE178u) { return; }
    }
    ctx->pc = 0x4FE178u;
label_4fe178:
    // 0x4fe178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fe178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fe17c:
    // 0x4fe17c: 0xc08af10  jal         func_22BC40
label_4fe180:
    if (ctx->pc == 0x4FE180u) {
        ctx->pc = 0x4FE180u;
            // 0x4fe180: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4FE184u;
        goto label_4fe184;
    }
    ctx->pc = 0x4FE17Cu;
    SET_GPR_U32(ctx, 31, 0x4FE184u);
    ctx->pc = 0x4FE180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE17Cu;
            // 0x4fe180: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE184u; }
        if (ctx->pc != 0x4FE184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE184u; }
        if (ctx->pc != 0x4FE184u) { return; }
    }
    ctx->pc = 0x4FE184u;
label_4fe184:
    // 0x4fe184: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4fe184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4fe188:
    // 0x4fe188: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fe188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fe18c:
    // 0x4fe18c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fe18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fe190:
    // 0x4fe190: 0x3e00008  jr          $ra
label_4fe194:
    if (ctx->pc == 0x4FE194u) {
        ctx->pc = 0x4FE194u;
            // 0x4fe194: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4FE198u;
        goto label_4fe198;
    }
    ctx->pc = 0x4FE190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE190u;
            // 0x4fe194: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FE198u;
label_4fe198:
    // 0x4fe198: 0x0  nop
    ctx->pc = 0x4fe198u;
    // NOP
label_4fe19c:
    // 0x4fe19c: 0x0  nop
    ctx->pc = 0x4fe19cu;
    // NOP
label_4fe1a0:
    // 0x4fe1a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4fe1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4fe1a4:
    // 0x4fe1a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fe1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fe1a8:
    // 0x4fe1a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4fe1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4fe1ac:
    // 0x4fe1ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4fe1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4fe1b0:
    // 0x4fe1b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fe1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4fe1b4:
    // 0x4fe1b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4fe1b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4fe1b8:
    // 0x4fe1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fe1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fe1bc:
    // 0x4fe1bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fe1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fe1c0:
    // 0x4fe1c0: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x4fe1c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4fe1c4:
    // 0x4fe1c4: 0x8cd10d70  lw          $s1, 0xD70($a2)
    ctx->pc = 0x4fe1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3440)));
label_4fe1c8:
    // 0x4fe1c8: 0x8cd00e38  lw          $s0, 0xE38($a2)
    ctx->pc = 0x4fe1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3640)));
label_4fe1cc:
    // 0x4fe1cc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4fe1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4fe1d0:
    // 0x4fe1d0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4fe1d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4fe1d4:
    // 0x4fe1d4: 0x320f809  jalr        $t9
label_4fe1d8:
    if (ctx->pc == 0x4FE1D8u) {
        ctx->pc = 0x4FE1D8u;
            // 0x4fe1d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE1DCu;
        goto label_4fe1dc;
    }
    ctx->pc = 0x4FE1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FE1DCu);
        ctx->pc = 0x4FE1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE1D4u;
            // 0x4fe1d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FE1DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FE1DCu; }
            if (ctx->pc != 0x4FE1DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4FE1DCu;
label_4fe1dc:
    // 0x4fe1dc: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x4fe1dcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_4fe1e0:
    // 0x4fe1e0: 0x8e650d78  lw          $a1, 0xD78($s3)
    ctx->pc = 0x4fe1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
label_4fe1e4:
    // 0x4fe1e4: 0x8e440cb4  lw          $a0, 0xCB4($s2)
    ctx->pc = 0x4fe1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3252)));
label_4fe1e8:
    // 0x4fe1e8: 0x8ca70020  lw          $a3, 0x20($a1)
    ctx->pc = 0x4fe1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_4fe1ec:
    // 0x4fe1ec: 0x28840008  slti        $a0, $a0, 0x8
    ctx->pc = 0x4fe1ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_4fe1f0:
    // 0x4fe1f0: 0x1812  mflo        $v1
    ctx->pc = 0x4fe1f0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4fe1f4:
    // 0x4fe1f4: 0x148000b7  bnez        $a0, . + 4 + (0xB7 << 2)
label_4fe1f8:
    if (ctx->pc == 0x4FE1F8u) {
        ctx->pc = 0x4FE1F8u;
            // 0x4fe1f8: 0x8e46078c  lw          $a2, 0x78C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1932)));
        ctx->pc = 0x4FE1FCu;
        goto label_4fe1fc;
    }
    ctx->pc = 0x4FE1F4u;
    {
        const bool branch_taken_0x4fe1f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FE1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE1F4u;
            // 0x4fe1f8: 0x8e46078c  lw          $a2, 0x78C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe1f4) {
            ctx->pc = 0x4FE4D4u;
            goto label_4fe4d4;
        }
    }
    ctx->pc = 0x4FE1FCu;
label_4fe1fc:
    // 0x4fe1fc: 0x8e640518  lw          $a0, 0x518($s3)
    ctx->pc = 0x4fe1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1304)));
label_4fe200:
    // 0x4fe200: 0x30840800  andi        $a0, $a0, 0x800
    ctx->pc = 0x4fe200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
label_4fe204:
    // 0x4fe204: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4fe208:
    if (ctx->pc == 0x4FE208u) {
        ctx->pc = 0x4FE208u;
            // 0x4fe208: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4FE20Cu;
        goto label_4fe20c;
    }
    ctx->pc = 0x4FE204u;
    {
        const bool branch_taken_0x4fe204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe204) {
            ctx->pc = 0x4FE208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE204u;
            // 0x4fe208: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE220u;
            goto label_4fe220;
        }
    }
    ctx->pc = 0x4FE20Cu;
label_4fe20c:
    // 0x4fe20c: 0x8e650da0  lw          $a1, 0xDA0($s3)
    ctx->pc = 0x4fe20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3488)));
label_4fe210:
    // 0x4fe210: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x4fe210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_4fe214:
    // 0x4fe214: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x4fe214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4fe218:
    // 0x4fe218: 0xae640da0  sw          $a0, 0xDA0($s3)
    ctx->pc = 0x4fe218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3488), GPR_U32(ctx, 4));
label_4fe21c:
    // 0x4fe21c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4fe21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fe220:
    // 0x4fe220: 0x56040003  bnel        $s0, $a0, . + 4 + (0x3 << 2)
label_4fe224:
    if (ctx->pc == 0x4FE224u) {
        ctx->pc = 0x4FE224u;
            // 0x4fe224: 0x8e450968  lw          $a1, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->pc = 0x4FE228u;
        goto label_4fe228;
    }
    ctx->pc = 0x4FE220u;
    {
        const bool branch_taken_0x4fe220 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x4fe220) {
            ctx->pc = 0x4FE224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE220u;
            // 0x4fe224: 0x8e450968  lw          $a1, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE230u;
            goto label_4fe230;
        }
    }
    ctx->pc = 0x4FE228u;
label_4fe228:
    // 0x4fe228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4fe228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fe22c:
    // 0x4fe22c: 0x8e450968  lw          $a1, 0x968($s2)
    ctx->pc = 0x4fe22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4fe230:
    // 0x4fe230: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x4fe230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4fe234:
    // 0x4fe234: 0x54a40017  bnel        $a1, $a0, . + 4 + (0x17 << 2)
label_4fe238:
    if (ctx->pc == 0x4FE238u) {
        ctx->pc = 0x4FE238u;
            // 0x4fe238: 0xe6082a  slt         $at, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->pc = 0x4FE23Cu;
        goto label_4fe23c;
    }
    ctx->pc = 0x4FE234u;
    {
        const bool branch_taken_0x4fe234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x4fe234) {
            ctx->pc = 0x4FE238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE234u;
            // 0x4fe238: 0xe6082a  slt         $at, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE294u;
            goto label_4fe294;
        }
    }
    ctx->pc = 0x4FE23Cu;
label_4fe23c:
    // 0x4fe23c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4fe23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4fe240:
    // 0x4fe240: 0x8c843da0  lw          $a0, 0x3DA0($a0)
    ctx->pc = 0x4fe240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15776)));
label_4fe244:
    // 0x4fe244: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_4fe248:
    if (ctx->pc == 0x4FE248u) {
        ctx->pc = 0x4FE248u;
            // 0x4fe248: 0x8e650d78  lw          $a1, 0xD78($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
        ctx->pc = 0x4FE24Cu;
        goto label_4fe24c;
    }
    ctx->pc = 0x4FE244u;
    {
        const bool branch_taken_0x4fe244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe244) {
            ctx->pc = 0x4FE248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE244u;
            // 0x4fe248: 0x8e650d78  lw          $a1, 0xD78($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE274u;
            goto label_4fe274;
        }
    }
    ctx->pc = 0x4FE24Cu;
label_4fe24c:
    // 0x4fe24c: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x4fe24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4fe250:
    // 0x4fe250: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4fe250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fe254:
    // 0x4fe254: 0x8c8402c4  lw          $a0, 0x2C4($a0)
    ctx->pc = 0x4fe254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 708)));
label_4fe258:
    // 0x4fe258: 0x54800011  bnel        $a0, $zero, . + 4 + (0x11 << 2)
label_4fe25c:
    if (ctx->pc == 0x4FE25Cu) {
        ctx->pc = 0x4FE25Cu;
            // 0x4fe25c: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->pc = 0x4FE260u;
        goto label_4fe260;
    }
    ctx->pc = 0x4FE258u;
    {
        const bool branch_taken_0x4fe258 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fe258) {
            ctx->pc = 0x4FE25Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE258u;
            // 0x4fe25c: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE2A0u;
            goto label_4fe2a0;
        }
    }
    ctx->pc = 0x4FE260u;
label_4fe260:
    // 0x4fe260: 0xe6202a  slt         $a0, $a3, $a2
    ctx->pc = 0x4fe260u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_4fe264:
    // 0x4fe264: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_4fe268:
    if (ctx->pc == 0x4FE268u) {
        ctx->pc = 0x4FE26Cu;
        goto label_4fe26c;
    }
    ctx->pc = 0x4FE264u;
    {
        const bool branch_taken_0x4fe264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fe264) {
            ctx->pc = 0x4FE29Cu;
            goto label_4fe29c;
        }
    }
    ctx->pc = 0x4FE26Cu;
label_4fe26c:
    // 0x4fe26c: 0x1000009a  b           . + 4 + (0x9A << 2)
label_4fe270:
    if (ctx->pc == 0x4FE270u) {
        ctx->pc = 0x4FE270u;
            // 0x4fe270: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4FE274u;
        goto label_4fe274;
    }
    ctx->pc = 0x4FE26Cu;
    {
        const bool branch_taken_0x4fe26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE26Cu;
            // 0x4fe270: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe26c) {
            ctx->pc = 0x4FE4D8u;
            goto label_4fe4d8;
        }
    }
    ctx->pc = 0x4FE274u;
label_4fe274:
    // 0x4fe274: 0x8e44078c  lw          $a0, 0x78C($s2)
    ctx->pc = 0x4fe274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1932)));
label_4fe278:
    // 0x4fe278: 0x8ca50048  lw          $a1, 0x48($a1)
    ctx->pc = 0x4fe278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_4fe27c:
    // 0x4fe27c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4fe27cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4fe280:
    // 0x4fe280: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x4fe280u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4fe284:
    // 0x4fe284: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_4fe288:
    if (ctx->pc == 0x4FE288u) {
        ctx->pc = 0x4FE28Cu;
        goto label_4fe28c;
    }
    ctx->pc = 0x4FE284u;
    {
        const bool branch_taken_0x4fe284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fe284) {
            ctx->pc = 0x4FE29Cu;
            goto label_4fe29c;
        }
    }
    ctx->pc = 0x4FE28Cu;
label_4fe28c:
    // 0x4fe28c: 0x10000091  b           . + 4 + (0x91 << 2)
label_4fe290:
    if (ctx->pc == 0x4FE290u) {
        ctx->pc = 0x4FE294u;
        goto label_4fe294;
    }
    ctx->pc = 0x4FE28Cu;
    {
        const bool branch_taken_0x4fe28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe28c) {
            ctx->pc = 0x4FE4D4u;
            goto label_4fe4d4;
        }
    }
    ctx->pc = 0x4FE294u;
label_4fe294:
    // 0x4fe294: 0x1020008f  beqz        $at, . + 4 + (0x8F << 2)
label_4fe298:
    if (ctx->pc == 0x4FE298u) {
        ctx->pc = 0x4FE29Cu;
        goto label_4fe29c;
    }
    ctx->pc = 0x4FE294u;
    {
        const bool branch_taken_0x4fe294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe294) {
            ctx->pc = 0x4FE4D4u;
            goto label_4fe4d4;
        }
    }
    ctx->pc = 0x4FE29Cu;
label_4fe29c:
    // 0x4fe29c: 0x8e2400cc  lw          $a0, 0xCC($s1)
    ctx->pc = 0x4fe29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_4fe2a0:
    // 0x4fe2a0: 0x1080008c  beqz        $a0, . + 4 + (0x8C << 2)
label_4fe2a4:
    if (ctx->pc == 0x4FE2A4u) {
        ctx->pc = 0x4FE2A8u;
        goto label_4fe2a8;
    }
    ctx->pc = 0x4FE2A0u;
    {
        const bool branch_taken_0x4fe2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe2a0) {
            ctx->pc = 0x4FE4D4u;
            goto label_4fe4d4;
        }
    }
    ctx->pc = 0x4FE2A8u;
label_4fe2a8:
    // 0x4fe2a8: 0x8e650db0  lw          $a1, 0xDB0($s3)
    ctx->pc = 0x4fe2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3504)));
label_4fe2ac:
    // 0x4fe2ac: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4fe2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4fe2b0:
    // 0x4fe2b0: 0x10a40070  beq         $a1, $a0, . + 4 + (0x70 << 2)
label_4fe2b4:
    if (ctx->pc == 0x4FE2B4u) {
        ctx->pc = 0x4FE2B8u;
        goto label_4fe2b8;
    }
    ctx->pc = 0x4FE2B0u;
    {
        const bool branch_taken_0x4fe2b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4fe2b0) {
            ctx->pc = 0x4FE474u;
            goto label_4fe474;
        }
    }
    ctx->pc = 0x4FE2B8u;
label_4fe2b8:
    // 0x4fe2b8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x4fe2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4fe2bc:
    // 0x4fe2bc: 0x10a4006d  beq         $a1, $a0, . + 4 + (0x6D << 2)
label_4fe2c0:
    if (ctx->pc == 0x4FE2C0u) {
        ctx->pc = 0x4FE2C4u;
        goto label_4fe2c4;
    }
    ctx->pc = 0x4FE2BCu;
    {
        const bool branch_taken_0x4fe2bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4fe2bc) {
            ctx->pc = 0x4FE474u;
            goto label_4fe474;
        }
    }
    ctx->pc = 0x4FE2C4u;
label_4fe2c4:
    // 0x4fe2c4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x4fe2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_4fe2c8:
    // 0x4fe2c8: 0x50a40043  beql        $a1, $a0, . + 4 + (0x43 << 2)
label_4fe2cc:
    if (ctx->pc == 0x4FE2CCu) {
        ctx->pc = 0x4FE2CCu;
            // 0x4fe2cc: 0x8e620a68  lw          $v0, 0xA68($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2664)));
        ctx->pc = 0x4FE2D0u;
        goto label_4fe2d0;
    }
    ctx->pc = 0x4FE2C8u;
    {
        const bool branch_taken_0x4fe2c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4fe2c8) {
            ctx->pc = 0x4FE2CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE2C8u;
            // 0x4fe2cc: 0x8e620a68  lw          $v0, 0xA68($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE3D8u;
            goto label_4fe3d8;
        }
    }
    ctx->pc = 0x4FE2D0u;
label_4fe2d0:
    // 0x4fe2d0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x4fe2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4fe2d4:
    // 0x4fe2d4: 0x10a4003f  beq         $a1, $a0, . + 4 + (0x3F << 2)
label_4fe2d8:
    if (ctx->pc == 0x4FE2D8u) {
        ctx->pc = 0x4FE2DCu;
        goto label_4fe2dc;
    }
    ctx->pc = 0x4FE2D4u;
    {
        const bool branch_taken_0x4fe2d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4fe2d4) {
            ctx->pc = 0x4FE3D4u;
            goto label_4fe3d4;
        }
    }
    ctx->pc = 0x4FE2DCu;
label_4fe2dc:
    // 0x4fe2dc: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x4fe2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_4fe2e0:
    // 0x4fe2e0: 0x10a4003c  beq         $a1, $a0, . + 4 + (0x3C << 2)
label_4fe2e4:
    if (ctx->pc == 0x4FE2E4u) {
        ctx->pc = 0x4FE2E8u;
        goto label_4fe2e8;
    }
    ctx->pc = 0x4FE2E0u;
    {
        const bool branch_taken_0x4fe2e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4fe2e0) {
            ctx->pc = 0x4FE3D4u;
            goto label_4fe3d4;
        }
    }
    ctx->pc = 0x4FE2E8u;
label_4fe2e8:
    // 0x4fe2e8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x4fe2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_4fe2ec:
    // 0x4fe2ec: 0x10a4000a  beq         $a1, $a0, . + 4 + (0xA << 2)
label_4fe2f0:
    if (ctx->pc == 0x4FE2F0u) {
        ctx->pc = 0x4FE2F4u;
        goto label_4fe2f4;
    }
    ctx->pc = 0x4FE2ECu;
    {
        const bool branch_taken_0x4fe2ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4fe2ec) {
            ctx->pc = 0x4FE318u;
            goto label_4fe318;
        }
    }
    ctx->pc = 0x4FE2F4u;
label_4fe2f4:
    // 0x4fe2f4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x4fe2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_4fe2f8:
    // 0x4fe2f8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4fe2fc:
    if (ctx->pc == 0x4FE2FCu) {
        ctx->pc = 0x4FE2FCu;
            // 0x4fe2fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE300u;
        goto label_4fe300;
    }
    ctx->pc = 0x4FE2F8u;
    {
        const bool branch_taken_0x4fe2f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fe2f8) {
            ctx->pc = 0x4FE2FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE2F8u;
            // 0x4fe2fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE308u;
            goto label_4fe308;
        }
    }
    ctx->pc = 0x4FE300u;
label_4fe300:
    // 0x4fe300: 0x10000074  b           . + 4 + (0x74 << 2)
label_4fe304:
    if (ctx->pc == 0x4FE304u) {
        ctx->pc = 0x4FE308u;
        goto label_4fe308;
    }
    ctx->pc = 0x4FE300u;
    {
        const bool branch_taken_0x4fe300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe300) {
            ctx->pc = 0x4FE4D4u;
            goto label_4fe4d4;
        }
    }
    ctx->pc = 0x4FE308u;
label_4fe308:
    // 0x4fe308: 0xc0c1c38  jal         func_3070E0
label_4fe30c:
    if (ctx->pc == 0x4FE30Cu) {
        ctx->pc = 0x4FE310u;
        goto label_4fe310;
    }
    ctx->pc = 0x4FE308u;
    SET_GPR_U32(ctx, 31, 0x4FE310u);
    ctx->pc = 0x3070E0u;
    if (runtime->hasFunction(0x3070E0u)) {
        auto targetFn = runtime->lookupFunction(0x3070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE310u; }
        if (ctx->pc != 0x4FE310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003070E0_0x3070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE310u; }
        if (ctx->pc != 0x4FE310u) { return; }
    }
    ctx->pc = 0x4FE310u;
label_4fe310:
    // 0x4fe310: 0x10000070  b           . + 4 + (0x70 << 2)
label_4fe314:
    if (ctx->pc == 0x4FE314u) {
        ctx->pc = 0x4FE318u;
        goto label_4fe318;
    }
    ctx->pc = 0x4FE310u;
    {
        const bool branch_taken_0x4fe310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe310) {
            ctx->pc = 0x4FE4D4u;
            goto label_4fe4d4;
        }
    }
    ctx->pc = 0x4FE318u;
label_4fe318:
    // 0x4fe318: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4fe318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4fe31c:
    // 0x4fe31c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x4fe31cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4fe320:
    // 0x4fe320: 0x8c42a9d8  lw          $v0, -0x5628($v0)
    ctx->pc = 0x4fe320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945240)));
label_4fe324:
    // 0x4fe324: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4fe324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fe328:
    // 0x4fe328: 0x26630a50  addiu       $v1, $s3, 0xA50
    ctx->pc = 0x4fe328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2640));
label_4fe32c:
    // 0x4fe32c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4fe32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4fe330:
    // 0x4fe330: 0x8c4200e0  lw          $v0, 0xE0($v0)
    ctx->pc = 0x4fe330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
label_4fe334:
    // 0x4fe334: 0xa0450128  sb          $a1, 0x128($v0)
    ctx->pc = 0x4fe334u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 296), (uint8_t)GPR_U32(ctx, 5));
label_4fe338:
    // 0x4fe338: 0x8e620a68  lw          $v0, 0xA68($s3)
    ctx->pc = 0x4fe338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2664)));
label_4fe33c:
    // 0x4fe33c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fe33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4fe340:
    // 0x4fe340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fe340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fe344:
    // 0x4fe344: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4fe344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4fe348:
    // 0x4fe348: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x4fe348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4fe34c:
    // 0x4fe34c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4fe34cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4fe350:
    // 0x4fe350: 0x320f809  jalr        $t9
label_4fe354:
    if (ctx->pc == 0x4FE354u) {
        ctx->pc = 0x4FE358u;
        goto label_4fe358;
    }
    ctx->pc = 0x4FE350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FE358u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FE358u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FE358u; }
            if (ctx->pc != 0x4FE358u) { return; }
        }
        }
    }
    ctx->pc = 0x4FE358u;
label_4fe358:
    // 0x4fe358: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4fe358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fe35c:
    // 0x4fe35c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fe35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fe360:
    // 0x4fe360: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4fe360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4fe364:
    // 0x4fe364: 0x320f809  jalr        $t9
label_4fe368:
    if (ctx->pc == 0x4FE368u) {
        ctx->pc = 0x4FE368u;
            // 0x4fe368: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4FE36Cu;
        goto label_4fe36c;
    }
    ctx->pc = 0x4FE364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FE36Cu);
        ctx->pc = 0x4FE368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE364u;
            // 0x4fe368: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FE36Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FE36Cu; }
            if (ctx->pc != 0x4FE36Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4FE36Cu;
label_4fe36c:
    // 0x4fe36c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fe36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fe370:
    // 0x4fe370: 0x8e700e38  lw          $s0, 0xE38($s3)
    ctx->pc = 0x4fe370u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_4fe374:
    // 0x4fe374: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x4fe374u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4fe378:
    // 0x4fe378: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4fe378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4fe37c:
    // 0x4fe37c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4fe37cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4fe380:
    // 0x4fe380: 0x320f809  jalr        $t9
label_4fe384:
    if (ctx->pc == 0x4FE384u) {
        ctx->pc = 0x4FE384u;
            // 0x4fe384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE388u;
        goto label_4fe388;
    }
    ctx->pc = 0x4FE380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FE388u);
        ctx->pc = 0x4FE384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE380u;
            // 0x4fe384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FE388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FE388u; }
            if (ctx->pc != 0x4FE388u) { return; }
        }
        }
    }
    ctx->pc = 0x4FE388u;
label_4fe388:
    // 0x4fe388: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x4fe388u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_4fe38c:
    // 0x4fe38c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4fe38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fe390:
    // 0x4fe390: 0x0  nop
    ctx->pc = 0x4fe390u;
    // NOP
label_4fe394:
    // 0x4fe394: 0x2012  mflo        $a0
    ctx->pc = 0x4fe394u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_4fe398:
    // 0x4fe398: 0x56030003  bnel        $s0, $v1, . + 4 + (0x3 << 2)
label_4fe39c:
    if (ctx->pc == 0x4FE39Cu) {
        ctx->pc = 0x4FE39Cu;
            // 0x4fe39c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x4FE3A0u;
        goto label_4fe3a0;
    }
    ctx->pc = 0x4FE398u;
    {
        const bool branch_taken_0x4fe398 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fe398) {
            ctx->pc = 0x4FE39Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE398u;
            // 0x4fe39c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE3A8u;
            goto label_4fe3a8;
        }
    }
    ctx->pc = 0x4FE3A0u;
label_4fe3a0:
    // 0x4fe3a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4fe3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fe3a4:
    // 0x4fe3a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4fe3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4fe3a8:
    // 0x4fe3a8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4fe3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4fe3ac:
    // 0x4fe3ac: 0x8c630cec  lw          $v1, 0xCEC($v1)
    ctx->pc = 0x4fe3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3308)));
label_4fe3b0:
    // 0x4fe3b0: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_4fe3b4:
    if (ctx->pc == 0x4FE3B4u) {
        ctx->pc = 0x4FE3B8u;
        goto label_4fe3b8;
    }
    ctx->pc = 0x4FE3B0u;
    {
        const bool branch_taken_0x4fe3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe3b0) {
            ctx->pc = 0x4FE4D4u;
            goto label_4fe4d4;
        }
    }
    ctx->pc = 0x4FE3B8u;
label_4fe3b8:
    // 0x4fe3b8: 0x8e640d70  lw          $a0, 0xD70($s3)
    ctx->pc = 0x4fe3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
label_4fe3bc:
    // 0x4fe3bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4fe3bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4fe3c0:
    // 0x4fe3c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fe3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fe3c4:
    // 0x4fe3c4: 0xc0bdf9c  jal         func_2F7E70
label_4fe3c8:
    if (ctx->pc == 0x4FE3C8u) {
        ctx->pc = 0x4FE3C8u;
            // 0x4fe3c8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4FE3CCu;
        goto label_4fe3cc;
    }
    ctx->pc = 0x4FE3C4u;
    SET_GPR_U32(ctx, 31, 0x4FE3CCu);
    ctx->pc = 0x4FE3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE3C4u;
            // 0x4fe3c8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE3CCu; }
        if (ctx->pc != 0x4FE3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE3CCu; }
        if (ctx->pc != 0x4FE3CCu) { return; }
    }
    ctx->pc = 0x4FE3CCu;
label_4fe3cc:
    // 0x4fe3cc: 0x10000041  b           . + 4 + (0x41 << 2)
label_4fe3d0:
    if (ctx->pc == 0x4FE3D0u) {
        ctx->pc = 0x4FE3D4u;
        goto label_4fe3d4;
    }
    ctx->pc = 0x4FE3CCu;
    {
        const bool branch_taken_0x4fe3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe3cc) {
            ctx->pc = 0x4FE4D4u;
            goto label_4fe4d4;
        }
    }
    ctx->pc = 0x4FE3D4u;
label_4fe3d4:
    // 0x4fe3d4: 0x8e620a68  lw          $v0, 0xA68($s3)
    ctx->pc = 0x4fe3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2664)));
label_4fe3d8:
    // 0x4fe3d8: 0x26630a50  addiu       $v1, $s3, 0xA50
    ctx->pc = 0x4fe3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2640));
label_4fe3dc:
    // 0x4fe3dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fe3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4fe3e0:
    // 0x4fe3e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fe3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fe3e4:
    // 0x4fe3e4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4fe3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4fe3e8:
    // 0x4fe3e8: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x4fe3e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4fe3ec:
    // 0x4fe3ec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4fe3ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4fe3f0:
    // 0x4fe3f0: 0x320f809  jalr        $t9
label_4fe3f4:
    if (ctx->pc == 0x4FE3F4u) {
        ctx->pc = 0x4FE3F8u;
        goto label_4fe3f8;
    }
    ctx->pc = 0x4FE3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FE3F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FE3F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FE3F8u; }
            if (ctx->pc != 0x4FE3F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4FE3F8u;
label_4fe3f8:
    // 0x4fe3f8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4fe3f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fe3fc:
    // 0x4fe3fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fe3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fe400:
    // 0x4fe400: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4fe400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4fe404:
    // 0x4fe404: 0x320f809  jalr        $t9
label_4fe408:
    if (ctx->pc == 0x4FE408u) {
        ctx->pc = 0x4FE408u;
            // 0x4fe408: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4FE40Cu;
        goto label_4fe40c;
    }
    ctx->pc = 0x4FE404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FE40Cu);
        ctx->pc = 0x4FE408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE404u;
            // 0x4fe408: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FE40Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FE40Cu; }
            if (ctx->pc != 0x4FE40Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4FE40Cu;
label_4fe40c:
    // 0x4fe40c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fe40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fe410:
    // 0x4fe410: 0x8e700e38  lw          $s0, 0xE38($s3)
    ctx->pc = 0x4fe410u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_4fe414:
    // 0x4fe414: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x4fe414u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4fe418:
    // 0x4fe418: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4fe418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4fe41c:
    // 0x4fe41c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4fe41cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4fe420:
    // 0x4fe420: 0x320f809  jalr        $t9
label_4fe424:
    if (ctx->pc == 0x4FE424u) {
        ctx->pc = 0x4FE424u;
            // 0x4fe424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE428u;
        goto label_4fe428;
    }
    ctx->pc = 0x4FE420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FE428u);
        ctx->pc = 0x4FE424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE420u;
            // 0x4fe424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FE428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FE428u; }
            if (ctx->pc != 0x4FE428u) { return; }
        }
        }
    }
    ctx->pc = 0x4FE428u;
label_4fe428:
    // 0x4fe428: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x4fe428u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_4fe42c:
    // 0x4fe42c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4fe42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fe430:
    // 0x4fe430: 0x0  nop
    ctx->pc = 0x4fe430u;
    // NOP
label_4fe434:
    // 0x4fe434: 0x2012  mflo        $a0
    ctx->pc = 0x4fe434u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_4fe438:
    // 0x4fe438: 0x56030003  bnel        $s0, $v1, . + 4 + (0x3 << 2)
label_4fe43c:
    if (ctx->pc == 0x4FE43Cu) {
        ctx->pc = 0x4FE43Cu;
            // 0x4fe43c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x4FE440u;
        goto label_4fe440;
    }
    ctx->pc = 0x4FE438u;
    {
        const bool branch_taken_0x4fe438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fe438) {
            ctx->pc = 0x4FE43Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE438u;
            // 0x4fe43c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE448u;
            goto label_4fe448;
        }
    }
    ctx->pc = 0x4FE440u;
label_4fe440:
    // 0x4fe440: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4fe440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fe444:
    // 0x4fe444: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4fe444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4fe448:
    // 0x4fe448: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4fe448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4fe44c:
    // 0x4fe44c: 0x8c630cec  lw          $v1, 0xCEC($v1)
    ctx->pc = 0x4fe44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3308)));
label_4fe450:
    // 0x4fe450: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_4fe454:
    if (ctx->pc == 0x4FE454u) {
        ctx->pc = 0x4FE458u;
        goto label_4fe458;
    }
    ctx->pc = 0x4FE450u;
    {
        const bool branch_taken_0x4fe450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe450) {
            ctx->pc = 0x4FE4D4u;
            goto label_4fe4d4;
        }
    }
    ctx->pc = 0x4FE458u;
label_4fe458:
    // 0x4fe458: 0x8e640d70  lw          $a0, 0xD70($s3)
    ctx->pc = 0x4fe458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
label_4fe45c:
    // 0x4fe45c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4fe45cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4fe460:
    // 0x4fe460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fe460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fe464:
    // 0x4fe464: 0xc0bdf9c  jal         func_2F7E70
label_4fe468:
    if (ctx->pc == 0x4FE468u) {
        ctx->pc = 0x4FE468u;
            // 0x4fe468: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4FE46Cu;
        goto label_4fe46c;
    }
    ctx->pc = 0x4FE464u;
    SET_GPR_U32(ctx, 31, 0x4FE46Cu);
    ctx->pc = 0x4FE468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE464u;
            // 0x4fe468: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE46Cu; }
        if (ctx->pc != 0x4FE46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE46Cu; }
        if (ctx->pc != 0x4FE46Cu) { return; }
    }
    ctx->pc = 0x4FE46Cu;
label_4fe46c:
    // 0x4fe46c: 0x10000019  b           . + 4 + (0x19 << 2)
label_4fe470:
    if (ctx->pc == 0x4FE470u) {
        ctx->pc = 0x4FE474u;
        goto label_4fe474;
    }
    ctx->pc = 0x4FE46Cu;
    {
        const bool branch_taken_0x4fe46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe46c) {
            ctx->pc = 0x4FE4D4u;
            goto label_4fe4d4;
        }
    }
    ctx->pc = 0x4FE474u;
label_4fe474:
    // 0x4fe474: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fe474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fe478:
    // 0x4fe478: 0x8e700e38  lw          $s0, 0xE38($s3)
    ctx->pc = 0x4fe478u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_4fe47c:
    // 0x4fe47c: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x4fe47cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4fe480:
    // 0x4fe480: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4fe480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4fe484:
    // 0x4fe484: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4fe484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4fe488:
    // 0x4fe488: 0x320f809  jalr        $t9
label_4fe48c:
    if (ctx->pc == 0x4FE48Cu) {
        ctx->pc = 0x4FE48Cu;
            // 0x4fe48c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE490u;
        goto label_4fe490;
    }
    ctx->pc = 0x4FE488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FE490u);
        ctx->pc = 0x4FE48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE488u;
            // 0x4fe48c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FE490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FE490u; }
            if (ctx->pc != 0x4FE490u) { return; }
        }
        }
    }
    ctx->pc = 0x4FE490u;
label_4fe490:
    // 0x4fe490: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x4fe490u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_4fe494:
    // 0x4fe494: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4fe494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fe498:
    // 0x4fe498: 0x0  nop
    ctx->pc = 0x4fe498u;
    // NOP
label_4fe49c:
    // 0x4fe49c: 0x2012  mflo        $a0
    ctx->pc = 0x4fe49cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_4fe4a0:
    // 0x4fe4a0: 0x56030003  bnel        $s0, $v1, . + 4 + (0x3 << 2)
label_4fe4a4:
    if (ctx->pc == 0x4FE4A4u) {
        ctx->pc = 0x4FE4A4u;
            // 0x4fe4a4: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x4FE4A8u;
        goto label_4fe4a8;
    }
    ctx->pc = 0x4FE4A0u;
    {
        const bool branch_taken_0x4fe4a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fe4a0) {
            ctx->pc = 0x4FE4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE4A0u;
            // 0x4fe4a4: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE4B0u;
            goto label_4fe4b0;
        }
    }
    ctx->pc = 0x4FE4A8u;
label_4fe4a8:
    // 0x4fe4a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4fe4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fe4ac:
    // 0x4fe4ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4fe4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4fe4b0:
    // 0x4fe4b0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4fe4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4fe4b4:
    // 0x4fe4b4: 0x8c630cec  lw          $v1, 0xCEC($v1)
    ctx->pc = 0x4fe4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3308)));
label_4fe4b8:
    // 0x4fe4b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_4fe4bc:
    if (ctx->pc == 0x4FE4BCu) {
        ctx->pc = 0x4FE4C0u;
        goto label_4fe4c0;
    }
    ctx->pc = 0x4FE4B8u;
    {
        const bool branch_taken_0x4fe4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe4b8) {
            ctx->pc = 0x4FE4D4u;
            goto label_4fe4d4;
        }
    }
    ctx->pc = 0x4FE4C0u;
label_4fe4c0:
    // 0x4fe4c0: 0x8e640d70  lw          $a0, 0xD70($s3)
    ctx->pc = 0x4fe4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
label_4fe4c4:
    // 0x4fe4c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4fe4c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4fe4c8:
    // 0x4fe4c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fe4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fe4cc:
    // 0x4fe4cc: 0xc0bdf9c  jal         func_2F7E70
label_4fe4d0:
    if (ctx->pc == 0x4FE4D0u) {
        ctx->pc = 0x4FE4D0u;
            // 0x4fe4d0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4FE4D4u;
        goto label_4fe4d4;
    }
    ctx->pc = 0x4FE4CCu;
    SET_GPR_U32(ctx, 31, 0x4FE4D4u);
    ctx->pc = 0x4FE4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE4CCu;
            // 0x4fe4d0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE4D4u; }
        if (ctx->pc != 0x4FE4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE4D4u; }
        if (ctx->pc != 0x4FE4D4u) { return; }
    }
    ctx->pc = 0x4FE4D4u;
label_4fe4d4:
    // 0x4fe4d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4fe4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4fe4d8:
    // 0x4fe4d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4fe4d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4fe4dc:
    // 0x4fe4dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4fe4dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fe4e0:
    // 0x4fe4e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fe4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fe4e4:
    // 0x4fe4e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fe4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fe4e8:
    // 0x4fe4e8: 0x3e00008  jr          $ra
label_4fe4ec:
    if (ctx->pc == 0x4FE4ECu) {
        ctx->pc = 0x4FE4ECu;
            // 0x4fe4ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4FE4F0u;
        goto label_4fe4f0;
    }
    ctx->pc = 0x4FE4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE4E8u;
            // 0x4fe4ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FE4F0u;
label_4fe4f0:
    // 0x4fe4f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4fe4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4fe4f4:
    // 0x4fe4f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fe4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fe4f8:
    // 0x4fe4f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4fe4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4fe4fc:
    // 0x4fe4fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4fe4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4fe500:
    // 0x4fe500: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fe500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4fe504:
    // 0x4fe504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fe504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fe508:
    // 0x4fe508: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4fe508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4fe50c:
    // 0x4fe50c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fe50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fe510:
    // 0x4fe510: 0x8c530e80  lw          $s3, 0xE80($v0)
    ctx->pc = 0x4fe510u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4fe514:
    // 0x4fe514: 0x8cd00e38  lw          $s0, 0xE38($a2)
    ctx->pc = 0x4fe514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3640)));
label_4fe518:
    // 0x4fe518: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4fe518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fe51c:
    // 0x4fe51c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4fe51cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4fe520:
    // 0x4fe520: 0x320f809  jalr        $t9
label_4fe524:
    if (ctx->pc == 0x4FE524u) {
        ctx->pc = 0x4FE524u;
            // 0x4fe524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE528u;
        goto label_4fe528;
    }
    ctx->pc = 0x4FE520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FE528u);
        ctx->pc = 0x4FE524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE520u;
            // 0x4fe524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FE528u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FE528u; }
            if (ctx->pc != 0x4FE528u) { return; }
        }
        }
    }
    ctx->pc = 0x4FE528u;
label_4fe528:
    // 0x4fe528: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x4fe528u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_4fe52c:
    // 0x4fe52c: 0x8e630cb4  lw          $v1, 0xCB4($s3)
    ctx->pc = 0x4fe52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3252)));
label_4fe530:
    // 0x4fe530: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x4fe530u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_4fe534:
    // 0x4fe534: 0x8812  mflo        $s1
    ctx->pc = 0x4fe534u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_4fe538:
    // 0x4fe538: 0x54600018  bnel        $v1, $zero, . + 4 + (0x18 << 2)
label_4fe53c:
    if (ctx->pc == 0x4FE53Cu) {
        ctx->pc = 0x4FE53Cu;
            // 0x4fe53c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4FE540u;
        goto label_4fe540;
    }
    ctx->pc = 0x4FE538u;
    {
        const bool branch_taken_0x4fe538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fe538) {
            ctx->pc = 0x4FE53Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE538u;
            // 0x4fe53c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE59Cu;
            goto label_4fe59c;
        }
    }
    ctx->pc = 0x4FE540u;
label_4fe540:
    // 0x4fe540: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4fe540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fe544:
    // 0x4fe544: 0x56020003  bnel        $s0, $v0, . + 4 + (0x3 << 2)
label_4fe548:
    if (ctx->pc == 0x4FE548u) {
        ctx->pc = 0x4FE548u;
            // 0x4fe548: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4FE54Cu;
        goto label_4fe54c;
    }
    ctx->pc = 0x4FE544u;
    {
        const bool branch_taken_0x4fe544 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fe544) {
            ctx->pc = 0x4FE548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE544u;
            // 0x4fe548: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE554u;
            goto label_4fe554;
        }
    }
    ctx->pc = 0x4FE54Cu;
label_4fe54c:
    // 0x4fe54c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4fe54cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fe550:
    // 0x4fe550: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4fe550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fe554:
    // 0x4fe554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fe554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fe558:
    // 0x4fe558: 0x8e500d98  lw          $s0, 0xD98($s2)
    ctx->pc = 0x4fe558u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_4fe55c:
    // 0x4fe55c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4fe55cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4fe560:
    // 0x4fe560: 0x320f809  jalr        $t9
label_4fe564:
    if (ctx->pc == 0x4FE564u) {
        ctx->pc = 0x4FE564u;
            // 0x4fe564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE568u;
        goto label_4fe568;
    }
    ctx->pc = 0x4FE560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FE568u);
        ctx->pc = 0x4FE564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE560u;
            // 0x4fe564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FE568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FE568u; }
            if (ctx->pc != 0x4FE568u) { return; }
        }
        }
    }
    ctx->pc = 0x4FE568u;
label_4fe568:
    // 0x4fe568: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_4fe56c:
    if (ctx->pc == 0x4FE56Cu) {
        ctx->pc = 0x4FE570u;
        goto label_4fe570;
    }
    ctx->pc = 0x4FE568u;
    {
        const bool branch_taken_0x4fe568 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fe568) {
            ctx->pc = 0x4FE598u;
            goto label_4fe598;
        }
    }
    ctx->pc = 0x4FE570u;
label_4fe570:
    // 0x4fe570: 0x8e420518  lw          $v0, 0x518($s2)
    ctx->pc = 0x4fe570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
label_4fe574:
    // 0x4fe574: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x4fe574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_4fe578:
    // 0x4fe578: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4fe57c:
    if (ctx->pc == 0x4FE57Cu) {
        ctx->pc = 0x4FE57Cu;
            // 0x4fe57c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE580u;
        goto label_4fe580;
    }
    ctx->pc = 0x4FE578u;
    {
        const bool branch_taken_0x4fe578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe578) {
            ctx->pc = 0x4FE57Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE578u;
            // 0x4fe57c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE590u;
            goto label_4fe590;
        }
    }
    ctx->pc = 0x4FE580u;
label_4fe580:
    // 0x4fe580: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4fe580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4fe584:
    // 0x4fe584: 0xc077fb0  jal         func_1DFEC0
label_4fe588:
    if (ctx->pc == 0x4FE588u) {
        ctx->pc = 0x4FE588u;
            // 0x4fe588: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->pc = 0x4FE58Cu;
        goto label_4fe58c;
    }
    ctx->pc = 0x4FE584u;
    SET_GPR_U32(ctx, 31, 0x4FE58Cu);
    ctx->pc = 0x4FE588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE584u;
            // 0x4fe588: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE58Cu; }
        if (ctx->pc != 0x4FE58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE58Cu; }
        if (ctx->pc != 0x4FE58Cu) { return; }
    }
    ctx->pc = 0x4FE58Cu;
label_4fe58c:
    // 0x4fe58c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fe58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fe590:
    // 0x4fe590: 0xc12ec90  jal         func_4BB240
label_4fe594:
    if (ctx->pc == 0x4FE594u) {
        ctx->pc = 0x4FE594u;
            // 0x4fe594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE598u;
        goto label_4fe598;
    }
    ctx->pc = 0x4FE590u;
    SET_GPR_U32(ctx, 31, 0x4FE598u);
    ctx->pc = 0x4FE594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE590u;
            // 0x4fe594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BB240u;
    if (runtime->hasFunction(0x4BB240u)) {
        auto targetFn = runtime->lookupFunction(0x4BB240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE598u; }
        if (ctx->pc != 0x4FE598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BB240_0x4bb240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE598u; }
        if (ctx->pc != 0x4FE598u) { return; }
    }
    ctx->pc = 0x4FE598u;
label_4fe598:
    // 0x4fe598: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4fe598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4fe59c:
    // 0x4fe59c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4fe59cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4fe5a0:
    // 0x4fe5a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4fe5a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fe5a4:
    // 0x4fe5a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fe5a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fe5a8:
    // 0x4fe5a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fe5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fe5ac:
    // 0x4fe5ac: 0x3e00008  jr          $ra
label_4fe5b0:
    if (ctx->pc == 0x4FE5B0u) {
        ctx->pc = 0x4FE5B0u;
            // 0x4fe5b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4FE5B4u;
        goto label_4fe5b4;
    }
    ctx->pc = 0x4FE5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE5ACu;
            // 0x4fe5b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FE5B4u;
label_4fe5b4:
    // 0x4fe5b4: 0x0  nop
    ctx->pc = 0x4fe5b4u;
    // NOP
label_4fe5b8:
    // 0x4fe5b8: 0x0  nop
    ctx->pc = 0x4fe5b8u;
    // NOP
label_4fe5bc:
    // 0x4fe5bc: 0x0  nop
    ctx->pc = 0x4fe5bcu;
    // NOP
label_4fe5c0:
    // 0x4fe5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4fe5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4fe5c4:
    // 0x4fe5c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4fe5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4fe5c8:
    // 0x4fe5c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4fe5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4fe5cc:
    // 0x4fe5cc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4fe5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4fe5d0:
    // 0x4fe5d0: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4fe5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4fe5d4:
    // 0x4fe5d4: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x4fe5d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_4fe5d8:
    // 0x4fe5d8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_4fe5dc:
    if (ctx->pc == 0x4FE5DCu) {
        ctx->pc = 0x4FE5DCu;
            // 0x4fe5dc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE5E0u;
        goto label_4fe5e0;
    }
    ctx->pc = 0x4FE5D8u;
    {
        const bool branch_taken_0x4fe5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FE5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE5D8u;
            // 0x4fe5dc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe5d8) {
            ctx->pc = 0x4FE5FCu;
            goto label_4fe5fc;
        }
    }
    ctx->pc = 0x4FE5E0u;
label_4fe5e0:
    // 0x4fe5e0: 0x8ce3003c  lw          $v1, 0x3C($a3)
    ctx->pc = 0x4fe5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
label_4fe5e4:
    // 0x4fe5e4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4fe5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4fe5e8:
    // 0x4fe5e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4fe5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4fe5ec:
    // 0x4fe5ec: 0x8c44a9d8  lw          $a0, -0x5628($v0)
    ctx->pc = 0x4fe5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945240)));
label_4fe5f0:
    // 0x4fe5f0: 0x8ce60040  lw          $a2, 0x40($a3)
    ctx->pc = 0x4fe5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
label_4fe5f4:
    // 0x4fe5f4: 0xc13f530  jal         func_4FD4C0
label_4fe5f8:
    if (ctx->pc == 0x4FE5F8u) {
        ctx->pc = 0x4FE5F8u;
            // 0x4fe5f8: 0x24680018  addiu       $t0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->pc = 0x4FE5FCu;
        goto label_4fe5fc;
    }
    ctx->pc = 0x4FE5F4u;
    SET_GPR_U32(ctx, 31, 0x4FE5FCu);
    ctx->pc = 0x4FE5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE5F4u;
            // 0x4fe5f8: 0x24680018  addiu       $t0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FD4C0u;
    if (runtime->hasFunction(0x4FD4C0u)) {
        auto targetFn = runtime->lookupFunction(0x4FD4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE5FCu; }
        if (ctx->pc != 0x4FE5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FD4C0_0x4fd4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE5FCu; }
        if (ctx->pc != 0x4FE5FCu) { return; }
    }
    ctx->pc = 0x4FE5FCu;
label_4fe5fc:
    // 0x4fe5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4fe5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4fe600:
    // 0x4fe600: 0x3e00008  jr          $ra
label_4fe604:
    if (ctx->pc == 0x4FE604u) {
        ctx->pc = 0x4FE604u;
            // 0x4fe604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4FE608u;
        goto label_4fe608;
    }
    ctx->pc = 0x4FE600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE600u;
            // 0x4fe604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FE608u;
label_4fe608:
    // 0x4fe608: 0x0  nop
    ctx->pc = 0x4fe608u;
    // NOP
label_4fe60c:
    // 0x4fe60c: 0x0  nop
    ctx->pc = 0x4fe60cu;
    // NOP
label_4fe610:
    // 0x4fe610: 0x3e00008  jr          $ra
label_4fe614:
    if (ctx->pc == 0x4FE614u) {
        ctx->pc = 0x4FE614u;
            // 0x4fe614: 0x24026f54  addiu       $v0, $zero, 0x6F54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28500));
        ctx->pc = 0x4FE618u;
        goto label_4fe618;
    }
    ctx->pc = 0x4FE610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE610u;
            // 0x4fe614: 0x24026f54  addiu       $v0, $zero, 0x6F54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28500));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FE618u;
label_4fe618:
    // 0x4fe618: 0x0  nop
    ctx->pc = 0x4fe618u;
    // NOP
label_4fe61c:
    // 0x4fe61c: 0x0  nop
    ctx->pc = 0x4fe61cu;
    // NOP
label_4fe620:
    // 0x4fe620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4fe620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4fe624:
    // 0x4fe624: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4fe624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fe628:
    // 0x4fe628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4fe628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4fe62c:
    // 0x4fe62c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4fe62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4fe630:
    // 0x4fe630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fe630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fe634:
    // 0x4fe634: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4fe634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4fe638:
    // 0x4fe638: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4fe638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4fe63c:
    // 0x4fe63c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4fe63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4fe640:
    // 0x4fe640: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fe640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4fe644:
    // 0x4fe644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fe644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fe648:
    // 0x4fe648: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4fe648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4fe64c:
    // 0x4fe64c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4fe64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fe650:
    // 0x4fe650: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4fe650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4fe654:
    // 0x4fe654: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4fe654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4fe658:
    // 0x4fe658: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4fe658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4fe65c:
    // 0x4fe65c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4fe65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4fe660:
    // 0x4fe660: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4fe660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4fe664:
    // 0x4fe664: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4fe664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4fe668:
    // 0x4fe668: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4fe668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4fe66c:
    // 0x4fe66c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4fe66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4fe670:
    // 0x4fe670: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4fe670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4fe674:
    // 0x4fe674: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fe674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4fe678:
    // 0x4fe678: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4fe678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fe67c:
    // 0x4fe67c: 0xc0a997c  jal         func_2A65F0
label_4fe680:
    if (ctx->pc == 0x4FE680u) {
        ctx->pc = 0x4FE680u;
            // 0x4fe680: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4FE684u;
        goto label_4fe684;
    }
    ctx->pc = 0x4FE67Cu;
    SET_GPR_U32(ctx, 31, 0x4FE684u);
    ctx->pc = 0x4FE680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE67Cu;
            // 0x4fe680: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE684u; }
        if (ctx->pc != 0x4FE684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE684u; }
        if (ctx->pc != 0x4FE684u) { return; }
    }
    ctx->pc = 0x4FE684u;
label_4fe684:
    // 0x4fe684: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4fe684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4fe688:
    // 0x4fe688: 0xc0d879c  jal         func_361E70
label_4fe68c:
    if (ctx->pc == 0x4FE68Cu) {
        ctx->pc = 0x4FE68Cu;
            // 0x4fe68c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE690u;
        goto label_4fe690;
    }
    ctx->pc = 0x4FE688u;
    SET_GPR_U32(ctx, 31, 0x4FE690u);
    ctx->pc = 0x4FE68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE688u;
            // 0x4fe68c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE690u; }
        if (ctx->pc != 0x4FE690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE690u; }
        if (ctx->pc != 0x4FE690u) { return; }
    }
    ctx->pc = 0x4FE690u;
label_4fe690:
    // 0x4fe690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4fe690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4fe694:
    // 0x4fe694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fe694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fe698:
    // 0x4fe698: 0x3e00008  jr          $ra
label_4fe69c:
    if (ctx->pc == 0x4FE69Cu) {
        ctx->pc = 0x4FE69Cu;
            // 0x4fe69c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4FE6A0u;
        goto label_4fe6a0;
    }
    ctx->pc = 0x4FE698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE698u;
            // 0x4fe69c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FE6A0u;
label_4fe6a0:
    // 0x4fe6a0: 0x813f668  j           func_4FD9A0
label_4fe6a4:
    if (ctx->pc == 0x4FE6A4u) {
        ctx->pc = 0x4FE6A4u;
            // 0x4fe6a4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4FE6A8u;
        goto label_4fe6a8;
    }
    ctx->pc = 0x4FE6A0u;
    ctx->pc = 0x4FE6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE6A0u;
            // 0x4fe6a4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FD9A0u;
    {
        auto targetFn = runtime->lookupFunction(0x4FD9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4FE6A8u;
label_4fe6a8:
    // 0x4fe6a8: 0x0  nop
    ctx->pc = 0x4fe6a8u;
    // NOP
label_4fe6ac:
    // 0x4fe6ac: 0x0  nop
    ctx->pc = 0x4fe6acu;
    // NOP
label_4fe6b0:
    // 0x4fe6b0: 0x813f728  j           func_4FDCA0
label_4fe6b4:
    if (ctx->pc == 0x4FE6B4u) {
        ctx->pc = 0x4FE6B4u;
            // 0x4fe6b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4FE6B8u;
        goto label_4fe6b8;
    }
    ctx->pc = 0x4FE6B0u;
    ctx->pc = 0x4FE6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE6B0u;
            // 0x4fe6b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FDCA0u;
    {
        auto targetFn = runtime->lookupFunction(0x4FDCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4FE6B8u;
label_4fe6b8:
    // 0x4fe6b8: 0x0  nop
    ctx->pc = 0x4fe6b8u;
    // NOP
label_4fe6bc:
    // 0x4fe6bc: 0x0  nop
    ctx->pc = 0x4fe6bcu;
    // NOP
label_4fe6c0:
    // 0x4fe6c0: 0x813f5c8  j           func_4FD720
label_4fe6c4:
    if (ctx->pc == 0x4FE6C4u) {
        ctx->pc = 0x4FE6C4u;
            // 0x4fe6c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4FE6C8u;
        goto label_4fe6c8;
    }
    ctx->pc = 0x4FE6C0u;
    ctx->pc = 0x4FE6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE6C0u;
            // 0x4fe6c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FD720u;
    {
        auto targetFn = runtime->lookupFunction(0x4FD720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4FE6C8u;
label_4fe6c8:
    // 0x4fe6c8: 0x0  nop
    ctx->pc = 0x4fe6c8u;
    // NOP
label_4fe6cc:
    // 0x4fe6cc: 0x0  nop
    ctx->pc = 0x4fe6ccu;
    // NOP
label_4fe6d0:
    // 0x4fe6d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4fe6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4fe6d4:
    // 0x4fe6d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4fe6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4fe6d8:
    // 0x4fe6d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fe6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4fe6dc:
    // 0x4fe6dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fe6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fe6e0:
    // 0x4fe6e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fe6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fe6e4:
    // 0x4fe6e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4fe6e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fe6e8:
    // 0x4fe6e8: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_4fe6ec:
    if (ctx->pc == 0x4FE6ECu) {
        ctx->pc = 0x4FE6ECu;
            // 0x4fe6ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE6F0u;
        goto label_4fe6f0;
    }
    ctx->pc = 0x4FE6E8u;
    {
        const bool branch_taken_0x4fe6e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE6E8u;
            // 0x4fe6ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe6e8) {
            ctx->pc = 0x4FE76Cu;
            goto label_4fe76c;
        }
    }
    ctx->pc = 0x4FE6F0u;
label_4fe6f0:
    // 0x4fe6f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4fe6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4fe6f4:
    // 0x4fe6f4: 0x244246e0  addiu       $v0, $v0, 0x46E0
    ctx->pc = 0x4fe6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18144));
label_4fe6f8:
    // 0x4fe6f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4fe6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4fe6fc:
    // 0x4fe6fc: 0x9222005d  lbu         $v0, 0x5D($s1)
    ctx->pc = 0x4fe6fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 93)));
label_4fe700:
    // 0x4fe700: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4fe704:
    if (ctx->pc == 0x4FE704u) {
        ctx->pc = 0x4FE708u;
        goto label_4fe708;
    }
    ctx->pc = 0x4FE700u;
    {
        const bool branch_taken_0x4fe700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe700) {
            ctx->pc = 0x4FE734u;
            goto label_4fe734;
        }
    }
    ctx->pc = 0x4FE708u;
label_4fe708:
    // 0x4fe708: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4fe708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4fe70c:
    // 0x4fe70c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4fe70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4fe710:
    // 0x4fe710: 0x8c7289e8  lw          $s2, -0x7618($v1)
    ctx->pc = 0x4fe710u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_4fe714:
    // 0x4fe714: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4fe714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4fe718:
    // 0x4fe718: 0xa0400082  sb          $zero, 0x82($v0)
    ctx->pc = 0x4fe718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 130), (uint8_t)GPR_U32(ctx, 0));
label_4fe71c:
    // 0x4fe71c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4fe71cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4fe720:
    // 0x4fe720: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x4fe720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_4fe724:
    // 0x4fe724: 0x320f809  jalr        $t9
label_4fe728:
    if (ctx->pc == 0x4FE728u) {
        ctx->pc = 0x4FE728u;
            // 0x4fe728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE72Cu;
        goto label_4fe72c;
    }
    ctx->pc = 0x4FE724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FE72Cu);
        ctx->pc = 0x4FE728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE724u;
            // 0x4fe728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FE72Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FE72Cu; }
            if (ctx->pc != 0x4FE72Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4FE72Cu;
label_4fe72c:
    // 0x4fe72c: 0xc074708  jal         func_1D1C20
label_4fe730:
    if (ctx->pc == 0x4FE730u) {
        ctx->pc = 0x4FE730u;
            // 0x4fe730: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4FE734u;
        goto label_4fe734;
    }
    ctx->pc = 0x4FE72Cu;
    SET_GPR_U32(ctx, 31, 0x4FE734u);
    ctx->pc = 0x4FE730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE72Cu;
            // 0x4fe730: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C20u;
    if (runtime->hasFunction(0x1D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE734u; }
        if (ctx->pc != 0x4FE734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C20_0x1d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE734u; }
        if (ctx->pc != 0x4FE734u) { return; }
    }
    ctx->pc = 0x4FE734u;
label_4fe734:
    // 0x4fe734: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_4fe738:
    if (ctx->pc == 0x4FE738u) {
        ctx->pc = 0x4FE738u;
            // 0x4fe738: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4FE73Cu;
        goto label_4fe73c;
    }
    ctx->pc = 0x4FE734u;
    {
        const bool branch_taken_0x4fe734 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe734) {
            ctx->pc = 0x4FE738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE734u;
            // 0x4fe738: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE758u;
            goto label_4fe758;
        }
    }
    ctx->pc = 0x4FE73Cu;
label_4fe73c:
    // 0x4fe73c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4fe73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4fe740:
    // 0x4fe740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fe740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fe744:
    // 0x4fe744: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4fe744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4fe748:
    // 0x4fe748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fe748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fe74c:
    // 0x4fe74c: 0xc057a68  jal         func_15E9A0
label_4fe750:
    if (ctx->pc == 0x4FE750u) {
        ctx->pc = 0x4FE750u;
            // 0x4fe750: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4FE754u;
        goto label_4fe754;
    }
    ctx->pc = 0x4FE74Cu;
    SET_GPR_U32(ctx, 31, 0x4FE754u);
    ctx->pc = 0x4FE750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE74Cu;
            // 0x4fe750: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE754u; }
        if (ctx->pc != 0x4FE754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE754u; }
        if (ctx->pc != 0x4FE754u) { return; }
    }
    ctx->pc = 0x4FE754u;
label_4fe754:
    // 0x4fe754: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4fe754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4fe758:
    // 0x4fe758: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4fe758u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4fe75c:
    // 0x4fe75c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4fe760:
    if (ctx->pc == 0x4FE760u) {
        ctx->pc = 0x4FE760u;
            // 0x4fe760: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE764u;
        goto label_4fe764;
    }
    ctx->pc = 0x4FE75Cu;
    {
        const bool branch_taken_0x4fe75c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4fe75c) {
            ctx->pc = 0x4FE760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE75Cu;
            // 0x4fe760: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE770u;
            goto label_4fe770;
        }
    }
    ctx->pc = 0x4FE764u;
label_4fe764:
    // 0x4fe764: 0xc0400a8  jal         func_1002A0
label_4fe768:
    if (ctx->pc == 0x4FE768u) {
        ctx->pc = 0x4FE768u;
            // 0x4fe768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE76Cu;
        goto label_4fe76c;
    }
    ctx->pc = 0x4FE764u;
    SET_GPR_U32(ctx, 31, 0x4FE76Cu);
    ctx->pc = 0x4FE768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE764u;
            // 0x4fe768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE76Cu; }
        if (ctx->pc != 0x4FE76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE76Cu; }
        if (ctx->pc != 0x4FE76Cu) { return; }
    }
    ctx->pc = 0x4FE76Cu;
label_4fe76c:
    // 0x4fe76c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4fe76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fe770:
    // 0x4fe770: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4fe770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4fe774:
    // 0x4fe774: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4fe774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fe778:
    // 0x4fe778: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fe778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fe77c:
    // 0x4fe77c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fe77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fe780:
    // 0x4fe780: 0x3e00008  jr          $ra
label_4fe784:
    if (ctx->pc == 0x4FE784u) {
        ctx->pc = 0x4FE784u;
            // 0x4fe784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4FE788u;
        goto label_4fe788;
    }
    ctx->pc = 0x4FE780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE780u;
            // 0x4fe784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FE788u;
label_4fe788:
    // 0x4fe788: 0x0  nop
    ctx->pc = 0x4fe788u;
    // NOP
label_4fe78c:
    // 0x4fe78c: 0x0  nop
    ctx->pc = 0x4fe78cu;
    // NOP
label_4fe790:
    // 0x4fe790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4fe790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4fe794:
    // 0x4fe794: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4fe794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4fe798:
    // 0x4fe798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4fe798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4fe79c:
    // 0x4fe79c: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x4fe79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_4fe7a0:
    // 0x4fe7a0: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x4fe7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_4fe7a4:
    // 0x4fe7a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4fe7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4fe7a8:
    // 0x4fe7a8: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_4fe7ac:
    if (ctx->pc == 0x4FE7ACu) {
        ctx->pc = 0x4FE7ACu;
            // 0x4fe7ac: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->pc = 0x4FE7B0u;
        goto label_4fe7b0;
    }
    ctx->pc = 0x4FE7A8u;
    {
        const bool branch_taken_0x4fe7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4fe7a8) {
            ctx->pc = 0x4FE7ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE7A8u;
            // 0x4fe7ac: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE7E0u;
            goto label_4fe7e0;
        }
    }
    ctx->pc = 0x4FE7B0u;
label_4fe7b0:
    // 0x4fe7b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4fe7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4fe7b4:
    // 0x4fe7b4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_4fe7b8:
    if (ctx->pc == 0x4FE7B8u) {
        ctx->pc = 0x4FE7B8u;
            // 0x4fe7b8: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->pc = 0x4FE7BCu;
        goto label_4fe7bc;
    }
    ctx->pc = 0x4FE7B4u;
    {
        const bool branch_taken_0x4fe7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4fe7b4) {
            ctx->pc = 0x4FE7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE7B4u;
            // 0x4fe7b8: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE7C4u;
            goto label_4fe7c4;
        }
    }
    ctx->pc = 0x4FE7BCu;
label_4fe7bc:
    // 0x4fe7bc: 0x10000013  b           . + 4 + (0x13 << 2)
label_4fe7c0:
    if (ctx->pc == 0x4FE7C0u) {
        ctx->pc = 0x4FE7C0u;
            // 0x4fe7c0: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->pc = 0x4FE7C4u;
        goto label_4fe7c4;
    }
    ctx->pc = 0x4FE7BCu;
    {
        const bool branch_taken_0x4fe7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE7BCu;
            // 0x4fe7c0: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe7bc) {
            ctx->pc = 0x4FE80Cu;
            goto label_4fe80c;
        }
    }
    ctx->pc = 0x4FE7C4u;
label_4fe7c4:
    // 0x4fe7c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4fe7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fe7c8:
    // 0x4fe7c8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4fe7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fe7cc:
    // 0x4fe7cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4fe7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4fe7d0:
    // 0x4fe7d0: 0xc0bc8b4  jal         func_2F22D0
label_4fe7d4:
    if (ctx->pc == 0x4FE7D4u) {
        ctx->pc = 0x4FE7D4u;
            // 0x4fe7d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE7D8u;
        goto label_4fe7d8;
    }
    ctx->pc = 0x4FE7D0u;
    SET_GPR_U32(ctx, 31, 0x4FE7D8u);
    ctx->pc = 0x4FE7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE7D0u;
            // 0x4fe7d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F22D0u;
    if (runtime->hasFunction(0x2F22D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE7D8u; }
        if (ctx->pc != 0x4FE7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F22D0_0x2f22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE7D8u; }
        if (ctx->pc != 0x4FE7D8u) { return; }
    }
    ctx->pc = 0x4FE7D8u;
label_4fe7d8:
    // 0x4fe7d8: 0x10000012  b           . + 4 + (0x12 << 2)
label_4fe7dc:
    if (ctx->pc == 0x4FE7DCu) {
        ctx->pc = 0x4FE7DCu;
            // 0x4fe7dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4FE7E0u;
        goto label_4fe7e0;
    }
    ctx->pc = 0x4FE7D8u;
    {
        const bool branch_taken_0x4fe7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE7D8u;
            // 0x4fe7dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe7d8) {
            ctx->pc = 0x4FE824u;
            goto label_4fe824;
        }
    }
    ctx->pc = 0x4FE7E0u;
label_4fe7e0:
    // 0x4fe7e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4fe7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fe7e4:
    // 0x4fe7e4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4fe7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fe7e8:
    // 0x4fe7e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4fe7e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fe7ec:
    // 0x4fe7ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4fe7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4fe7f0:
    // 0x4fe7f0: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x4fe7f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_4fe7f4:
    // 0x4fe7f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4fe7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4fe7f8:
    // 0x4fe7f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4fe7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4fe7fc:
    // 0x4fe7fc: 0xc0bc8b4  jal         func_2F22D0
label_4fe800:
    if (ctx->pc == 0x4FE800u) {
        ctx->pc = 0x4FE800u;
            // 0x4fe800: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4FE804u;
        goto label_4fe804;
    }
    ctx->pc = 0x4FE7FCu;
    SET_GPR_U32(ctx, 31, 0x4FE804u);
    ctx->pc = 0x4FE800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE7FCu;
            // 0x4fe800: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F22D0u;
    if (runtime->hasFunction(0x2F22D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE804u; }
        if (ctx->pc != 0x4FE804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F22D0_0x2f22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE804u; }
        if (ctx->pc != 0x4FE804u) { return; }
    }
    ctx->pc = 0x4FE804u;
label_4fe804:
    // 0x4fe804: 0x10000006  b           . + 4 + (0x6 << 2)
label_4fe808:
    if (ctx->pc == 0x4FE808u) {
        ctx->pc = 0x4FE80Cu;
        goto label_4fe80c;
    }
    ctx->pc = 0x4FE804u;
    {
        const bool branch_taken_0x4fe804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe804) {
            ctx->pc = 0x4FE820u;
            goto label_4fe820;
        }
    }
    ctx->pc = 0x4FE80Cu;
label_4fe80c:
    // 0x4fe80c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4fe80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fe810:
    // 0x4fe810: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4fe810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fe814:
    // 0x4fe814: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4fe814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4fe818:
    // 0x4fe818: 0xc0bc8b4  jal         func_2F22D0
label_4fe81c:
    if (ctx->pc == 0x4FE81Cu) {
        ctx->pc = 0x4FE81Cu;
            // 0x4fe81c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FE820u;
        goto label_4fe820;
    }
    ctx->pc = 0x4FE818u;
    SET_GPR_U32(ctx, 31, 0x4FE820u);
    ctx->pc = 0x4FE81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE818u;
            // 0x4fe81c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F22D0u;
    if (runtime->hasFunction(0x2F22D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE820u; }
        if (ctx->pc != 0x4FE820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F22D0_0x2f22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FE820u; }
        if (ctx->pc != 0x4FE820u) { return; }
    }
    ctx->pc = 0x4FE820u;
label_4fe820:
    // 0x4fe820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4fe820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4fe824:
    // 0x4fe824: 0x3e00008  jr          $ra
label_4fe828:
    if (ctx->pc == 0x4FE828u) {
        ctx->pc = 0x4FE828u;
            // 0x4fe828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4FE82Cu;
        goto label_4fe82c;
    }
    ctx->pc = 0x4FE824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE824u;
            // 0x4fe828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FE82Cu;
label_4fe82c:
    // 0x4fe82c: 0x0  nop
    ctx->pc = 0x4fe82cu;
    // NOP
label_4fe830:
    // 0x4fe830: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4fe830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4fe834:
    // 0x4fe834: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4fe834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4fe838:
    // 0x4fe838: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4fe838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4fe83c:
    // 0x4fe83c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4fe83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4fe840:
    // 0x4fe840: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4fe840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4fe844:
    // 0x4fe844: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4fe844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4fe848:
    // 0x4fe848: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4fe848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4fe84c:
    // 0x4fe84c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4fe84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4fe850:
    // 0x4fe850: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fe850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4fe854:
    // 0x4fe854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fe854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fe858:
    // 0x4fe858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fe858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fe85c:
    // 0x4fe85c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4fe85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fe860:
    // 0x4fe860: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x4fe860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_4fe864:
    // 0x4fe864: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4fe864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4fe868:
    // 0x4fe868: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x4fe868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_4fe86c:
    // 0x4fe86c: 0x24a59760  addiu       $a1, $a1, -0x68A0
    ctx->pc = 0x4fe86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
label_4fe870:
    // 0x4fe870: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x4fe870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_4fe874:
    // 0x4fe874: 0x3c120063  lui         $s2, 0x63
    ctx->pc = 0x4fe874u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)99 << 16));
label_4fe878:
    // 0x4fe878: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x4fe878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_4fe87c:
    // 0x4fe87c: 0x3c110063  lui         $s1, 0x63
    ctx->pc = 0x4fe87cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)99 << 16));
label_4fe880:
    // 0x4fe880: 0x3c190063  lui         $t9, 0x63
    ctx->pc = 0x4fe880u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)99 << 16));
label_4fe884:
    // 0x4fe884: 0x3c180063  lui         $t8, 0x63
    ctx->pc = 0x4fe884u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)99 << 16));
label_4fe888:
    // 0x4fe888: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x4fe888u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_4fe88c:
    // 0x4fe88c: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x4fe88cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
label_4fe890:
    // 0x4fe890: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x4fe890u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
label_4fe894:
    // 0x4fe894: 0x3c0c0063  lui         $t4, 0x63
    ctx->pc = 0x4fe894u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)99 << 16));
label_4fe898:
    // 0x4fe898: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4fe898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4fe89c:
    // 0x4fe89c: 0x3c0b0063  lui         $t3, 0x63
    ctx->pc = 0x4fe89cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)99 << 16));
label_4fe8a0:
    // 0x4fe8a0: 0x3c0a0063  lui         $t2, 0x63
    ctx->pc = 0x4fe8a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)99 << 16));
label_4fe8a4:
    // 0x4fe8a4: 0x3c090063  lui         $t1, 0x63
    ctx->pc = 0x4fe8a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)99 << 16));
label_4fe8a8:
    // 0x4fe8a8: 0x3c080063  lui         $t0, 0x63
    ctx->pc = 0x4fe8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)99 << 16));
label_4fe8ac:
    // 0x4fe8ac: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x4fe8acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_4fe8b0:
    // 0x4fe8b0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x4fe8b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fe8b4:
    // 0x4fe8b4: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x4fe8b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
label_4fe8b8:
    // 0x4fe8b8: 0x24170006  addiu       $s7, $zero, 0x6
    ctx->pc = 0x4fe8b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4fe8bc:
    // 0x4fe8bc: 0x8e7489d0  lw          $s4, -0x7630($s3)
    ctx->pc = 0x4fe8bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937040)));
label_4fe8c0:
    // 0x4fe8c0: 0x8e940084  lw          $s4, 0x84($s4)
    ctx->pc = 0x4fe8c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4fe8c4:
    // 0x4fe8c4: 0x1297002e  beq         $s4, $s7, . + 4 + (0x2E << 2)
label_4fe8c8:
    if (ctx->pc == 0x4FE8C8u) {
        ctx->pc = 0x4FE8CCu;
        goto label_4fe8cc;
    }
    ctx->pc = 0x4FE8C4u;
    {
        const bool branch_taken_0x4fe8c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 23));
        if (branch_taken_0x4fe8c4) {
            ctx->pc = 0x4FE980u;
            goto label_4fe980;
        }
    }
    ctx->pc = 0x4FE8CCu;
label_4fe8cc:
    // 0x4fe8cc: 0x12860004  beq         $s4, $a2, . + 4 + (0x4 << 2)
label_4fe8d0:
    if (ctx->pc == 0x4FE8D0u) {
        ctx->pc = 0x4FE8D4u;
        goto label_4fe8d4;
    }
    ctx->pc = 0x4FE8CCu;
    {
        const bool branch_taken_0x4fe8cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 6));
        if (branch_taken_0x4fe8cc) {
            ctx->pc = 0x4FE8E0u;
            goto label_4fe8e0;
        }
    }
    ctx->pc = 0x4FE8D4u;
label_4fe8d4:
    // 0x4fe8d4: 0x10000058  b           . + 4 + (0x58 << 2)
label_4fe8d8:
    if (ctx->pc == 0x4FE8D8u) {
        ctx->pc = 0x4FE8DCu;
        goto label_4fe8dc;
    }
    ctx->pc = 0x4FE8D4u;
    {
        const bool branch_taken_0x4fe8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe8d4) {
            ctx->pc = 0x4FEA38u;
            goto label_4fea38;
        }
    }
    ctx->pc = 0x4FE8DCu;
label_4fe8dc:
    // 0x4fe8dc: 0x0  nop
    ctx->pc = 0x4fe8dcu;
    // NOP
label_4fe8e0:
    // 0x4fe8e0: 0x92160054  lbu         $s6, 0x54($s0)
    ctx->pc = 0x4fe8e0u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_4fe8e4:
    // 0x4fe8e4: 0x8e150058  lw          $s5, 0x58($s0)
    ctx->pc = 0x4fe8e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4fe8e8:
    // 0x4fe8e8: 0x16a040  sll         $s4, $s6, 1
    ctx->pc = 0x4fe8e8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_4fe8ec:
    // 0x4fe8ec: 0x296b021  addu        $s6, $s4, $s6
    ctx->pc = 0x4fe8ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_4fe8f0:
    // 0x4fe8f0: 0x16b100  sll         $s6, $s6, 4
    ctx->pc = 0x4fe8f0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_4fe8f4:
    // 0x4fe8f4: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x4fe8f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4fe8f8:
    // 0x4fe8f8: 0xb6b021  addu        $s6, $a1, $s6
    ctx->pc = 0x4fe8f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_4fe8fc:
    // 0x4fe8fc: 0x8ed6000c  lw          $s6, 0xC($s6)
    ctx->pc = 0x4fe8fcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_4fe900:
    // 0x4fe900: 0x2c4b024  and         $s6, $s6, $a0
    ctx->pc = 0x4fe900u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
label_4fe904:
    // 0x4fe904: 0x16b02b  sltu        $s6, $zero, $s6
    ctx->pc = 0x4fe904u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_4fe908:
    // 0x4fe908: 0x296a023  subu        $s4, $s4, $s6
    ctx->pc = 0x4fe908u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_4fe90c:
    // 0x4fe90c: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x4fe90cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_4fe910:
    // 0x4fe910: 0x92160054  lbu         $s6, 0x54($s0)
    ctx->pc = 0x4fe910u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_4fe914:
    // 0x4fe914: 0x8e150058  lw          $s5, 0x58($s0)
    ctx->pc = 0x4fe914u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4fe918:
    // 0x4fe918: 0x16a040  sll         $s4, $s6, 1
    ctx->pc = 0x4fe918u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_4fe91c:
    // 0x4fe91c: 0x296b021  addu        $s6, $s4, $s6
    ctx->pc = 0x4fe91cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_4fe920:
    // 0x4fe920: 0x16b100  sll         $s6, $s6, 4
    ctx->pc = 0x4fe920u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_4fe924:
    // 0x4fe924: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x4fe924u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4fe928:
    // 0x4fe928: 0xb6b021  addu        $s6, $a1, $s6
    ctx->pc = 0x4fe928u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_4fe92c:
    // 0x4fe92c: 0x8ed6000c  lw          $s6, 0xC($s6)
    ctx->pc = 0x4fe92cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_4fe930:
    // 0x4fe930: 0x2c3b024  and         $s6, $s6, $v1
    ctx->pc = 0x4fe930u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_4fe934:
    // 0x4fe934: 0x16b02b  sltu        $s6, $zero, $s6
    ctx->pc = 0x4fe934u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_4fe938:
    // 0x4fe938: 0x296a021  addu        $s4, $s4, $s6
    ctx->pc = 0x4fe938u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_4fe93c:
    // 0x4fe93c: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x4fe93cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_4fe940:
    // 0x4fe940: 0x8e150058  lw          $s5, 0x58($s0)
    ctx->pc = 0x4fe940u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4fe944:
    // 0x4fe944: 0x8e56cc50  lw          $s6, -0x33B0($s2)
    ctx->pc = 0x4fe944u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954064)));
label_4fe948:
    // 0x4fe948: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x4fe948u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4fe94c:
    // 0x4fe94c: 0x296082a  slt         $at, $s4, $s6
    ctx->pc = 0x4fe94cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_4fe950:
    // 0x4fe950: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4fe954:
    if (ctx->pc == 0x4FE954u) {
        ctx->pc = 0x4FE958u;
        goto label_4fe958;
    }
    ctx->pc = 0x4FE950u;
    {
        const bool branch_taken_0x4fe950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe950) {
            ctx->pc = 0x4FE95Cu;
            goto label_4fe95c;
        }
    }
    ctx->pc = 0x4FE958u;
label_4fe958:
    // 0x4fe958: 0x8e34cc58  lw          $s4, -0x33A8($s1)
    ctx->pc = 0x4fe958u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954072)));
label_4fe95c:
    // 0x4fe95c: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x4fe95cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_4fe960:
    // 0x4fe960: 0x8f36cc58  lw          $s6, -0x33A8($t9)
    ctx->pc = 0x4fe960u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4294954072)));
label_4fe964:
    // 0x4fe964: 0x2d4082a  slt         $at, $s6, $s4
    ctx->pc = 0x4fe964u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_4fe968:
    // 0x4fe968: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4fe96c:
    if (ctx->pc == 0x4FE96Cu) {
        ctx->pc = 0x4FE970u;
        goto label_4fe970;
    }
    ctx->pc = 0x4FE968u;
    {
        const bool branch_taken_0x4fe968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe968) {
            ctx->pc = 0x4FE974u;
            goto label_4fe974;
        }
    }
    ctx->pc = 0x4FE970u;
label_4fe970:
    // 0x4fe970: 0x8f14cc50  lw          $s4, -0x33B0($t8)
    ctx->pc = 0x4fe970u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294954064)));
label_4fe974:
    // 0x4fe974: 0x10000056  b           . + 4 + (0x56 << 2)
label_4fe978:
    if (ctx->pc == 0x4FE978u) {
        ctx->pc = 0x4FE978u;
            // 0x4fe978: 0xaeb40000  sw          $s4, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
        ctx->pc = 0x4FE97Cu;
        goto label_4fe97c;
    }
    ctx->pc = 0x4FE974u;
    {
        const bool branch_taken_0x4fe974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE974u;
            // 0x4fe978: 0xaeb40000  sw          $s4, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe974) {
            ctx->pc = 0x4FEAD0u;
            goto label_4fead0;
        }
    }
    ctx->pc = 0x4FE97Cu;
label_4fe97c:
    // 0x4fe97c: 0x0  nop
    ctx->pc = 0x4fe97cu;
    // NOP
label_4fe980:
    // 0x4fe980: 0x92150054  lbu         $s5, 0x54($s0)
    ctx->pc = 0x4fe980u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_4fe984:
    // 0x4fe984: 0x15a040  sll         $s4, $s5, 1
    ctx->pc = 0x4fe984u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_4fe988:
    // 0x4fe988: 0x295a021  addu        $s4, $s4, $s5
    ctx->pc = 0x4fe988u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_4fe98c:
    // 0x4fe98c: 0x14a100  sll         $s4, $s4, 4
    ctx->pc = 0x4fe98cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_4fe990:
    // 0x4fe990: 0xb4a021  addu        $s4, $a1, $s4
    ctx->pc = 0x4fe990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_4fe994:
    // 0x4fe994: 0x8e94000c  lw          $s4, 0xC($s4)
    ctx->pc = 0x4fe994u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_4fe998:
    // 0x4fe998: 0x284a824  and         $s5, $s4, $a0
    ctx->pc = 0x4fe998u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) & GPR_U64(ctx, 4));
label_4fe99c:
    // 0x4fe99c: 0x15a82b  sltu        $s5, $zero, $s5
    ctx->pc = 0x4fe99cu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_4fe9a0:
    // 0x4fe9a0: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_4fe9a4:
    if (ctx->pc == 0x4FE9A4u) {
        ctx->pc = 0x4FE9A8u;
        goto label_4fe9a8;
    }
    ctx->pc = 0x4FE9A0u;
    {
        const bool branch_taken_0x4fe9a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe9a0) {
            ctx->pc = 0x4FE9C8u;
            goto label_4fe9c8;
        }
    }
    ctx->pc = 0x4FE9A8u;
label_4fe9a8:
    // 0x4fe9a8: 0x8e150058  lw          $s5, 0x58($s0)
    ctx->pc = 0x4fe9a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4fe9ac:
    // 0x4fe9ac: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x4fe9acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4fe9b0:
    // 0x4fe9b0: 0x3a960005  xori        $s6, $s4, 0x5
    ctx->pc = 0x4fe9b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)5);
label_4fe9b4:
    // 0x4fe9b4: 0x2ed60001  sltiu       $s6, $s6, 0x1
    ctx->pc = 0x4fe9b4u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fe9b8:
    // 0x4fe9b8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4fe9b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4fe9bc:
    // 0x4fe9bc: 0x296a023  subu        $s4, $s4, $s6
    ctx->pc = 0x4fe9bcu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_4fe9c0:
    // 0x4fe9c0: 0x1000000d  b           . + 4 + (0xD << 2)
label_4fe9c4:
    if (ctx->pc == 0x4FE9C4u) {
        ctx->pc = 0x4FE9C4u;
            // 0x4fe9c4: 0xaeb40000  sw          $s4, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
        ctx->pc = 0x4FE9C8u;
        goto label_4fe9c8;
    }
    ctx->pc = 0x4FE9C0u;
    {
        const bool branch_taken_0x4fe9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FE9C0u;
            // 0x4fe9c4: 0xaeb40000  sw          $s4, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe9c0) {
            ctx->pc = 0x4FE9F8u;
            goto label_4fe9f8;
        }
    }
    ctx->pc = 0x4FE9C8u;
label_4fe9c8:
    // 0x4fe9c8: 0x283a024  and         $s4, $s4, $v1
    ctx->pc = 0x4fe9c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
label_4fe9cc:
    // 0x4fe9cc: 0x14a02b  sltu        $s4, $zero, $s4
    ctx->pc = 0x4fe9ccu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4fe9d0:
    // 0x4fe9d0: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_4fe9d4:
    if (ctx->pc == 0x4FE9D4u) {
        ctx->pc = 0x4FE9D8u;
        goto label_4fe9d8;
    }
    ctx->pc = 0x4FE9D0u;
    {
        const bool branch_taken_0x4fe9d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe9d0) {
            ctx->pc = 0x4FE9F8u;
            goto label_4fe9f8;
        }
    }
    ctx->pc = 0x4FE9D8u;
label_4fe9d8:
    // 0x4fe9d8: 0x8e150058  lw          $s5, 0x58($s0)
    ctx->pc = 0x4fe9d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4fe9dc:
    // 0x4fe9dc: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x4fe9dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4fe9e0:
    // 0x4fe9e0: 0x3a960003  xori        $s6, $s4, 0x3
    ctx->pc = 0x4fe9e0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)3);
label_4fe9e4:
    // 0x4fe9e4: 0x2ed60001  sltiu       $s6, $s6, 0x1
    ctx->pc = 0x4fe9e4u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fe9e8:
    // 0x4fe9e8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4fe9e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4fe9ec:
    // 0x4fe9ec: 0x296a021  addu        $s4, $s4, $s6
    ctx->pc = 0x4fe9ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_4fe9f0:
    // 0x4fe9f0: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x4fe9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_4fe9f4:
    // 0x4fe9f4: 0x0  nop
    ctx->pc = 0x4fe9f4u;
    // NOP
label_4fe9f8:
    // 0x4fe9f8: 0x8e150058  lw          $s5, 0x58($s0)
    ctx->pc = 0x4fe9f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4fe9fc:
    // 0x4fe9fc: 0x8df6cc60  lw          $s6, -0x33A0($t7)
    ctx->pc = 0x4fe9fcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294954080)));
label_4fea00:
    // 0x4fea00: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x4fea00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4fea04:
    // 0x4fea04: 0x296082a  slt         $at, $s4, $s6
    ctx->pc = 0x4fea04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_4fea08:
    // 0x4fea08: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4fea0c:
    if (ctx->pc == 0x4FEA0Cu) {
        ctx->pc = 0x4FEA10u;
        goto label_4fea10;
    }
    ctx->pc = 0x4FEA08u;
    {
        const bool branch_taken_0x4fea08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fea08) {
            ctx->pc = 0x4FEA14u;
            goto label_4fea14;
        }
    }
    ctx->pc = 0x4FEA10u;
label_4fea10:
    // 0x4fea10: 0x8dd4cc68  lw          $s4, -0x3398($t6)
    ctx->pc = 0x4fea10u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294954088)));
label_4fea14:
    // 0x4fea14: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x4fea14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_4fea18:
    // 0x4fea18: 0x8db6cc68  lw          $s6, -0x3398($t5)
    ctx->pc = 0x4fea18u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294954088)));
label_4fea1c:
    // 0x4fea1c: 0x2d4082a  slt         $at, $s6, $s4
    ctx->pc = 0x4fea1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_4fea20:
    // 0x4fea20: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4fea24:
    if (ctx->pc == 0x4FEA24u) {
        ctx->pc = 0x4FEA28u;
        goto label_4fea28;
    }
    ctx->pc = 0x4FEA20u;
    {
        const bool branch_taken_0x4fea20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fea20) {
            ctx->pc = 0x4FEA2Cu;
            goto label_4fea2c;
        }
    }
    ctx->pc = 0x4FEA28u;
label_4fea28:
    // 0x4fea28: 0x8d94cc60  lw          $s4, -0x33A0($t4)
    ctx->pc = 0x4fea28u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294954080)));
label_4fea2c:
    // 0x4fea2c: 0x10000028  b           . + 4 + (0x28 << 2)
label_4fea30:
    if (ctx->pc == 0x4FEA30u) {
        ctx->pc = 0x4FEA30u;
            // 0x4fea30: 0xaeb40000  sw          $s4, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
        ctx->pc = 0x4FEA34u;
        goto label_4fea34;
    }
    ctx->pc = 0x4FEA2Cu;
    {
        const bool branch_taken_0x4fea2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEA2Cu;
            // 0x4fea30: 0xaeb40000  sw          $s4, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fea2c) {
            ctx->pc = 0x4FEAD0u;
            goto label_4fead0;
        }
    }
    ctx->pc = 0x4FEA34u;
label_4fea34:
    // 0x4fea34: 0x0  nop
    ctx->pc = 0x4fea34u;
    // NOP
label_4fea38:
    // 0x4fea38: 0x92160054  lbu         $s6, 0x54($s0)
    ctx->pc = 0x4fea38u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_4fea3c:
    // 0x4fea3c: 0x8e150058  lw          $s5, 0x58($s0)
    ctx->pc = 0x4fea3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4fea40:
    // 0x4fea40: 0x16a040  sll         $s4, $s6, 1
    ctx->pc = 0x4fea40u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_4fea44:
    // 0x4fea44: 0x296b021  addu        $s6, $s4, $s6
    ctx->pc = 0x4fea44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_4fea48:
    // 0x4fea48: 0x16b100  sll         $s6, $s6, 4
    ctx->pc = 0x4fea48u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_4fea4c:
    // 0x4fea4c: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x4fea4cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4fea50:
    // 0x4fea50: 0xb6b021  addu        $s6, $a1, $s6
    ctx->pc = 0x4fea50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_4fea54:
    // 0x4fea54: 0x8ed6000c  lw          $s6, 0xC($s6)
    ctx->pc = 0x4fea54u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_4fea58:
    // 0x4fea58: 0x2c4b024  and         $s6, $s6, $a0
    ctx->pc = 0x4fea58u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
label_4fea5c:
    // 0x4fea5c: 0x16b02b  sltu        $s6, $zero, $s6
    ctx->pc = 0x4fea5cu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_4fea60:
    // 0x4fea60: 0x296a023  subu        $s4, $s4, $s6
    ctx->pc = 0x4fea60u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_4fea64:
    // 0x4fea64: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x4fea64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_4fea68:
    // 0x4fea68: 0x92160054  lbu         $s6, 0x54($s0)
    ctx->pc = 0x4fea68u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_4fea6c:
    // 0x4fea6c: 0x8e150058  lw          $s5, 0x58($s0)
    ctx->pc = 0x4fea6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4fea70:
    // 0x4fea70: 0x16a040  sll         $s4, $s6, 1
    ctx->pc = 0x4fea70u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_4fea74:
    // 0x4fea74: 0x296b021  addu        $s6, $s4, $s6
    ctx->pc = 0x4fea74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_4fea78:
    // 0x4fea78: 0x16b100  sll         $s6, $s6, 4
    ctx->pc = 0x4fea78u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_4fea7c:
    // 0x4fea7c: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x4fea7cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4fea80:
    // 0x4fea80: 0xb6b021  addu        $s6, $a1, $s6
    ctx->pc = 0x4fea80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_4fea84:
    // 0x4fea84: 0x8ed6000c  lw          $s6, 0xC($s6)
    ctx->pc = 0x4fea84u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_4fea88:
    // 0x4fea88: 0x2c3b024  and         $s6, $s6, $v1
    ctx->pc = 0x4fea88u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_4fea8c:
    // 0x4fea8c: 0x16b02b  sltu        $s6, $zero, $s6
    ctx->pc = 0x4fea8cu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_4fea90:
    // 0x4fea90: 0x296a021  addu        $s4, $s4, $s6
    ctx->pc = 0x4fea90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_4fea94:
    // 0x4fea94: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x4fea94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_4fea98:
    // 0x4fea98: 0x8e150058  lw          $s5, 0x58($s0)
    ctx->pc = 0x4fea98u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4fea9c:
    // 0x4fea9c: 0x8d76cc70  lw          $s6, -0x3390($t3)
    ctx->pc = 0x4fea9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294954096)));
label_4feaa0:
    // 0x4feaa0: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x4feaa0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4feaa4:
    // 0x4feaa4: 0x296082a  slt         $at, $s4, $s6
    ctx->pc = 0x4feaa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_4feaa8:
    // 0x4feaa8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4feaac:
    if (ctx->pc == 0x4FEAACu) {
        ctx->pc = 0x4FEAB0u;
        goto label_4feab0;
    }
    ctx->pc = 0x4FEAA8u;
    {
        const bool branch_taken_0x4feaa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4feaa8) {
            ctx->pc = 0x4FEAB4u;
            goto label_4feab4;
        }
    }
    ctx->pc = 0x4FEAB0u;
label_4feab0:
    // 0x4feab0: 0x8d54cc78  lw          $s4, -0x3388($t2)
    ctx->pc = 0x4feab0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294954104)));
label_4feab4:
    // 0x4feab4: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x4feab4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_4feab8:
    // 0x4feab8: 0x8d36cc78  lw          $s6, -0x3388($t1)
    ctx->pc = 0x4feab8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954104)));
label_4feabc:
    // 0x4feabc: 0x2d4082a  slt         $at, $s6, $s4
    ctx->pc = 0x4feabcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_4feac0:
    // 0x4feac0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4feac4:
    if (ctx->pc == 0x4FEAC4u) {
        ctx->pc = 0x4FEAC8u;
        goto label_4feac8;
    }
    ctx->pc = 0x4FEAC0u;
    {
        const bool branch_taken_0x4feac0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4feac0) {
            ctx->pc = 0x4FEACCu;
            goto label_4feacc;
        }
    }
    ctx->pc = 0x4FEAC8u;
label_4feac8:
    // 0x4feac8: 0x8d14cc70  lw          $s4, -0x3390($t0)
    ctx->pc = 0x4feac8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294954096)));
label_4feacc:
    // 0x4feacc: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x4feaccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_4fead0:
    // 0x4fead0: 0x8cf40e80  lw          $s4, 0xE80($a3)
    ctx->pc = 0x4fead0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3712)));
label_4fead4:
    // 0x4fead4: 0x8e940788  lw          $s4, 0x788($s4)
    ctx->pc = 0x4fead4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1928)));
label_4fead8:
    // 0x4fead8: 0x129e0005  beq         $s4, $fp, . + 4 + (0x5 << 2)
label_4feadc:
    if (ctx->pc == 0x4FEADCu) {
        ctx->pc = 0x4FEAE0u;
        goto label_4feae0;
    }
    ctx->pc = 0x4FEAD8u;
    {
        const bool branch_taken_0x4fead8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 30));
        if (branch_taken_0x4fead8) {
            ctx->pc = 0x4FEAF0u;
            goto label_4feaf0;
        }
    }
    ctx->pc = 0x4FEAE0u;
label_4feae0:
    // 0x4feae0: 0x8e140058  lw          $s4, 0x58($s0)
    ctx->pc = 0x4feae0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4feae4:
    // 0x4feae4: 0x8e940000  lw          $s4, 0x0($s4)
    ctx->pc = 0x4feae4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4feae8:
    // 0x4feae8: 0x5286ff75  beql        $s4, $a2, . + 4 + (-0x8B << 2)
label_4feaec:
    if (ctx->pc == 0x4FEAECu) {
        ctx->pc = 0x4FEAECu;
            // 0x4feaec: 0x8e7489d0  lw          $s4, -0x7630($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937040)));
        ctx->pc = 0x4FEAF0u;
        goto label_4feaf0;
    }
    ctx->pc = 0x4FEAE8u;
    {
        const bool branch_taken_0x4feae8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 6));
        if (branch_taken_0x4feae8) {
            ctx->pc = 0x4FEAECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEAE8u;
            // 0x4feaec: 0x8e7489d0  lw          $s4, -0x7630($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937040)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FE8C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fe8c0;
        }
    }
    ctx->pc = 0x4FEAF0u;
label_4feaf0:
    // 0x4feaf0: 0x92060054  lbu         $a2, 0x54($s0)
    ctx->pc = 0x4feaf0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_4feaf4:
    // 0x4feaf4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4feaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4feaf8:
    // 0x4feaf8: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x4feaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
label_4feafc:
    // 0x4feafc: 0x2484976c  addiu       $a0, $a0, -0x6894
    ctx->pc = 0x4feafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940524));
label_4feb00:
    // 0x4feb00: 0x34630030  ori         $v1, $v1, 0x30
    ctx->pc = 0x4feb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
label_4feb04:
    // 0x4feb04: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x4feb04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_4feb08:
    // 0x4feb08: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4feb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4feb0c:
    // 0x4feb0c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4feb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4feb10:
    // 0x4feb10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4feb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4feb14:
    // 0x4feb14: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4feb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4feb18:
    // 0x4feb18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4feb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4feb1c:
    // 0x4feb1c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4feb20:
    if (ctx->pc == 0x4FEB20u) {
        ctx->pc = 0x4FEB20u;
            // 0x4feb20: 0x9203005c  lbu         $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x4FEB24u;
        goto label_4feb24;
    }
    ctx->pc = 0x4FEB1Cu;
    {
        const bool branch_taken_0x4feb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4feb1c) {
            ctx->pc = 0x4FEB20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEB1Cu;
            // 0x4feb20: 0x9203005c  lbu         $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FEB30u;
            goto label_4feb30;
        }
    }
    ctx->pc = 0x4FEB24u;
label_4feb24:
    // 0x4feb24: 0xc073234  jal         func_1CC8D0
label_4feb28:
    if (ctx->pc == 0x4FEB28u) {
        ctx->pc = 0x4FEB28u;
            // 0x4feb28: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x4FEB2Cu;
        goto label_4feb2c;
    }
    ctx->pc = 0x4FEB24u;
    SET_GPR_U32(ctx, 31, 0x4FEB2Cu);
    ctx->pc = 0x4FEB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEB24u;
            // 0x4feb28: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEB2Cu; }
        if (ctx->pc != 0x4FEB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEB2Cu; }
        if (ctx->pc != 0x4FEB2Cu) { return; }
    }
    ctx->pc = 0x4FEB2Cu;
label_4feb2c:
    // 0x4feb2c: 0x9203005c  lbu         $v1, 0x5C($s0)
    ctx->pc = 0x4feb2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_4feb30:
    // 0x4feb30: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_4feb34:
    if (ctx->pc == 0x4FEB34u) {
        ctx->pc = 0x4FEB34u;
            // 0x4feb34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FEB38u;
        goto label_4feb38;
    }
    ctx->pc = 0x4FEB30u;
    {
        const bool branch_taken_0x4feb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEB30u;
            // 0x4feb34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4feb30) {
            ctx->pc = 0x4FEB74u;
            goto label_4feb74;
        }
    }
    ctx->pc = 0x4FEB38u;
label_4feb38:
    // 0x4feb38: 0x92050054  lbu         $a1, 0x54($s0)
    ctx->pc = 0x4feb38u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_4feb3c:
    // 0x4feb3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4feb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4feb40:
    // 0x4feb40: 0x24639764  addiu       $v1, $v1, -0x689C
    ctx->pc = 0x4feb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940516));
label_4feb44:
    // 0x4feb44: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x4feb44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4feb48:
    // 0x4feb48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4feb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4feb4c:
    // 0x4feb4c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4feb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4feb50:
    // 0x4feb50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4feb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4feb54:
    // 0x4feb54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4feb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4feb58:
    // 0x4feb58: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x4feb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_4feb5c:
    // 0x4feb5c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_4feb60:
    if (ctx->pc == 0x4FEB60u) {
        ctx->pc = 0x4FEB60u;
            // 0x4feb60: 0x92050054  lbu         $a1, 0x54($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x4FEB64u;
        goto label_4feb64;
    }
    ctx->pc = 0x4FEB5Cu;
    {
        const bool branch_taken_0x4feb5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4feb5c) {
            ctx->pc = 0x4FEB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEB5Cu;
            // 0x4feb60: 0x92050054  lbu         $a1, 0x54($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FEB78u;
            goto label_4feb78;
        }
    }
    ctx->pc = 0x4FEB64u;
label_4feb64:
    // 0x4feb64: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x4feb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4feb68:
    // 0x4feb68: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4feb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4feb6c:
    // 0x4feb6c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x4feb6cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4feb70:
    // 0x4feb70: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4feb70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_4feb74:
    // 0x4feb74: 0x92050054  lbu         $a1, 0x54($s0)
    ctx->pc = 0x4feb74u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_4feb78:
    // 0x4feb78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4feb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4feb7c:
    // 0x4feb7c: 0x24639764  addiu       $v1, $v1, -0x689C
    ctx->pc = 0x4feb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940516));
label_4feb80:
    // 0x4feb80: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x4feb80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4feb84:
    // 0x4feb84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4feb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4feb88:
    // 0x4feb88: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4feb88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4feb8c:
    // 0x4feb8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4feb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4feb90:
    // 0x4feb90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4feb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4feb94:
    // 0x4feb94: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x4feb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_4feb98:
    // 0x4feb98: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_4feb9c:
    if (ctx->pc == 0x4FEB9Cu) {
        ctx->pc = 0x4FEBA0u;
        goto label_4feba0;
    }
    ctx->pc = 0x4FEB98u;
    {
        const bool branch_taken_0x4feb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4feb98) {
            ctx->pc = 0x4FEBA4u;
            goto label_4feba4;
        }
    }
    ctx->pc = 0x4FEBA0u;
label_4feba0:
    // 0x4feba0: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x4feba0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4feba4:
    // 0x4feba4: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
label_4feba8:
    if (ctx->pc == 0x4FEBA8u) {
        ctx->pc = 0x4FEBA8u;
            // 0x4feba8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4FEBACu;
        goto label_4febac;
    }
    ctx->pc = 0x4FEBA4u;
    {
        const bool branch_taken_0x4feba4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4feba4) {
            ctx->pc = 0x4FEBA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEBA4u;
            // 0x4feba8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FEBE0u;
            goto label_4febe0;
        }
    }
    ctx->pc = 0x4FEBACu;
label_4febac:
    // 0x4febac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4febacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4febb0:
    // 0x4febb0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x4febb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4febb4:
    // 0x4febb4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4febb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4febb8:
    // 0x4febb8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4febb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4febbc:
    // 0x4febbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4febbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4febc0:
    // 0x4febc0: 0xac640cb4  sw          $a0, 0xCB4($v1)
    ctx->pc = 0x4febc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3252), GPR_U32(ctx, 4));
label_4febc4:
    // 0x4febc4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4febc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4febc8:
    // 0x4febc8: 0xc057b7c  jal         func_15EDF0
label_4febcc:
    if (ctx->pc == 0x4FEBCCu) {
        ctx->pc = 0x4FEBCCu;
            // 0x4febcc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4FEBD0u;
        goto label_4febd0;
    }
    ctx->pc = 0x4FEBC8u;
    SET_GPR_U32(ctx, 31, 0x4FEBD0u);
    ctx->pc = 0x4FEBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEBC8u;
            // 0x4febcc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEBD0u; }
        if (ctx->pc != 0x4FEBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEBD0u; }
        if (ctx->pc != 0x4FEBD0u) { return; }
    }
    ctx->pc = 0x4FEBD0u;
label_4febd0:
    // 0x4febd0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4febd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4febd4:
    // 0x4febd4: 0xc073234  jal         func_1CC8D0
label_4febd8:
    if (ctx->pc == 0x4FEBD8u) {
        ctx->pc = 0x4FEBD8u;
            // 0x4febd8: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4FEBDCu;
        goto label_4febdc;
    }
    ctx->pc = 0x4FEBD4u;
    SET_GPR_U32(ctx, 31, 0x4FEBDCu);
    ctx->pc = 0x4FEBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEBD4u;
            // 0x4febd8: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEBDCu; }
        if (ctx->pc != 0x4FEBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEBDCu; }
        if (ctx->pc != 0x4FEBDCu) { return; }
    }
    ctx->pc = 0x4FEBDCu;
label_4febdc:
    // 0x4febdc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4febdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4febe0:
    // 0x4febe0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4febe0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4febe4:
    // 0x4febe4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4febe4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4febe8:
    // 0x4febe8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4febe8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4febec:
    // 0x4febec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4febecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4febf0:
    // 0x4febf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4febf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4febf4:
    // 0x4febf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4febf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4febf8:
    // 0x4febf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4febf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4febfc:
    // 0x4febfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4febfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fec00:
    // 0x4fec00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fec00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fec04:
    // 0x4fec04: 0x3e00008  jr          $ra
label_4fec08:
    if (ctx->pc == 0x4FEC08u) {
        ctx->pc = 0x4FEC08u;
            // 0x4fec08: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4FEC0Cu;
        goto label_4fec0c;
    }
    ctx->pc = 0x4FEC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FEC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEC04u;
            // 0x4fec08: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FEC0Cu;
label_4fec0c:
    // 0x4fec0c: 0x0  nop
    ctx->pc = 0x4fec0cu;
    // NOP
label_4fec10:
    // 0x4fec10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4fec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4fec14:
    // 0x4fec14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4fec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4fec18:
    // 0x4fec18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fec18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fec1c:
    // 0x4fec1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fec20:
    // 0x4fec20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4fec20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fec24:
    // 0x4fec24: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_4fec28:
    if (ctx->pc == 0x4FEC28u) {
        ctx->pc = 0x4FEC28u;
            // 0x4fec28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FEC2Cu;
        goto label_4fec2c;
    }
    ctx->pc = 0x4FEC24u;
    {
        const bool branch_taken_0x4fec24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEC24u;
            // 0x4fec28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fec24) {
            ctx->pc = 0x4FEC78u;
            goto label_4fec78;
        }
    }
    ctx->pc = 0x4FEC2Cu;
label_4fec2c:
    // 0x4fec2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4fec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4fec30:
    // 0x4fec30: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x4fec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
label_4fec34:
    // 0x4fec34: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_4fec38:
    if (ctx->pc == 0x4FEC38u) {
        ctx->pc = 0x4FEC38u;
            // 0x4fec38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4FEC3Cu;
        goto label_4fec3c;
    }
    ctx->pc = 0x4FEC34u;
    {
        const bool branch_taken_0x4fec34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEC34u;
            // 0x4fec38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fec34) {
            ctx->pc = 0x4FEC60u;
            goto label_4fec60;
        }
    }
    ctx->pc = 0x4FEC3Cu;
label_4fec3c:
    // 0x4fec3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4fec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4fec40:
    // 0x4fec40: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4fec40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4fec44:
    // 0x4fec44: 0x24425710  addiu       $v0, $v0, 0x5710
    ctx->pc = 0x4fec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22288));
label_4fec48:
    // 0x4fec48: 0x2484d370  addiu       $a0, $a0, -0x2C90
    ctx->pc = 0x4fec48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955888));
label_4fec4c:
    // 0x4fec4c: 0xc0ad6c4  jal         func_2B5B10
label_4fec50:
    if (ctx->pc == 0x4FEC50u) {
        ctx->pc = 0x4FEC50u;
            // 0x4fec50: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4FEC54u;
        goto label_4fec54;
    }
    ctx->pc = 0x4FEC4Cu;
    SET_GPR_U32(ctx, 31, 0x4FEC54u);
    ctx->pc = 0x4FEC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEC4Cu;
            // 0x4fec50: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEC54u; }
        if (ctx->pc != 0x4FEC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEC54u; }
        if (ctx->pc != 0x4FEC54u) { return; }
    }
    ctx->pc = 0x4FEC54u;
label_4fec54:
    // 0x4fec54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fec54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fec58:
    // 0x4fec58: 0xc0cd2cc  jal         func_334B30
label_4fec5c:
    if (ctx->pc == 0x4FEC5Cu) {
        ctx->pc = 0x4FEC5Cu;
            // 0x4fec5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FEC60u;
        goto label_4fec60;
    }
    ctx->pc = 0x4FEC58u;
    SET_GPR_U32(ctx, 31, 0x4FEC60u);
    ctx->pc = 0x4FEC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEC58u;
            // 0x4fec5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334B30u;
    if (runtime->hasFunction(0x334B30u)) {
        auto targetFn = runtime->lookupFunction(0x334B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEC60u; }
        if (ctx->pc != 0x4FEC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334B30_0x334b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEC60u; }
        if (ctx->pc != 0x4FEC60u) { return; }
    }
    ctx->pc = 0x4FEC60u;
label_4fec60:
    // 0x4fec60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4fec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4fec64:
    // 0x4fec64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4fec64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4fec68:
    // 0x4fec68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4fec6c:
    if (ctx->pc == 0x4FEC6Cu) {
        ctx->pc = 0x4FEC6Cu;
            // 0x4fec6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FEC70u;
        goto label_4fec70;
    }
    ctx->pc = 0x4FEC68u;
    {
        const bool branch_taken_0x4fec68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4fec68) {
            ctx->pc = 0x4FEC6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEC68u;
            // 0x4fec6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FEC7Cu;
            goto label_4fec7c;
        }
    }
    ctx->pc = 0x4FEC70u;
label_4fec70:
    // 0x4fec70: 0xc0400a8  jal         func_1002A0
label_4fec74:
    if (ctx->pc == 0x4FEC74u) {
        ctx->pc = 0x4FEC74u;
            // 0x4fec74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FEC78u;
        goto label_4fec78;
    }
    ctx->pc = 0x4FEC70u;
    SET_GPR_U32(ctx, 31, 0x4FEC78u);
    ctx->pc = 0x4FEC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEC70u;
            // 0x4fec74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEC78u; }
        if (ctx->pc != 0x4FEC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEC78u; }
        if (ctx->pc != 0x4FEC78u) { return; }
    }
    ctx->pc = 0x4FEC78u;
label_4fec78:
    // 0x4fec78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4fec78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fec7c:
    // 0x4fec7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4fec7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4fec80:
    // 0x4fec80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fec80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fec84:
    // 0x4fec84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fec84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fec88:
    // 0x4fec88: 0x3e00008  jr          $ra
label_4fec8c:
    if (ctx->pc == 0x4FEC8Cu) {
        ctx->pc = 0x4FEC8Cu;
            // 0x4fec8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4FEC90u;
        goto label_4fec90;
    }
    ctx->pc = 0x4FEC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FEC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEC88u;
            // 0x4fec8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FEC90u;
label_4fec90:
    // 0x4fec90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4fec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4fec94:
    // 0x4fec94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4fec94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fec98:
    // 0x4fec98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4fec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4fec9c:
    // 0x4fec9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fec9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4feca0:
    // 0x4feca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4feca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4feca4:
    // 0x4feca4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4feca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4feca8:
    // 0x4feca8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4feca8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4fecac:
    // 0x4fecac: 0x14a30018  bne         $a1, $v1, . + 4 + (0x18 << 2)
label_4fecb0:
    if (ctx->pc == 0x4FECB0u) {
        ctx->pc = 0x4FECB0u;
            // 0x4fecb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FECB4u;
        goto label_4fecb4;
    }
    ctx->pc = 0x4FECACu;
    {
        const bool branch_taken_0x4fecac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x4FECB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FECACu;
            // 0x4fecb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fecac) {
            ctx->pc = 0x4FED10u;
            goto label_4fed10;
        }
    }
    ctx->pc = 0x4FECB4u;
label_4fecb4:
    // 0x4fecb4: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x4fecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_4fecb8:
    // 0x4fecb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4fecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fecbc:
    // 0x4fecbc: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_4fecc0:
    if (ctx->pc == 0x4FECC0u) {
        ctx->pc = 0x4FECC4u;
        goto label_4fecc4;
    }
    ctx->pc = 0x4FECBCu;
    {
        const bool branch_taken_0x4fecbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x4fecbc) {
            ctx->pc = 0x4FECDCu;
            goto label_4fecdc;
        }
    }
    ctx->pc = 0x4FECC4u;
label_4fecc4:
    // 0x4fecc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4fecc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fecc8:
    // 0x4fecc8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4fecc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4feccc:
    // 0x4feccc: 0x320f809  jalr        $t9
label_4fecd0:
    if (ctx->pc == 0x4FECD0u) {
        ctx->pc = 0x4FECD4u;
        goto label_4fecd4;
    }
    ctx->pc = 0x4FECCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FECD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FECD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FECD4u; }
            if (ctx->pc != 0x4FECD4u) { return; }
        }
        }
    }
    ctx->pc = 0x4FECD4u;
label_4fecd4:
    // 0x4fecd4: 0x1000000e  b           . + 4 + (0xE << 2)
label_4fecd8:
    if (ctx->pc == 0x4FECD8u) {
        ctx->pc = 0x4FECDCu;
        goto label_4fecdc;
    }
    ctx->pc = 0x4FECD4u;
    {
        const bool branch_taken_0x4fecd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fecd4) {
            ctx->pc = 0x4FED10u;
            goto label_4fed10;
        }
    }
    ctx->pc = 0x4FECDCu;
label_4fecdc:
    // 0x4fecdc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4fecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4fece0:
    // 0x4fece0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4fece0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fece4:
    // 0x4fece4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4fece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4fece8:
    // 0x4fece8: 0x8051007a  lb          $s1, 0x7A($v0)
    ctx->pc = 0x4fece8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_4fecec:
    // 0x4fecec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4fececu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4fecf0:
    // 0x4fecf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4fecf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4fecf4:
    // 0x4fecf4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4fecf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4fecf8:
    // 0x4fecf8: 0x320f809  jalr        $t9
label_4fecfc:
    if (ctx->pc == 0x4FECFCu) {
        ctx->pc = 0x4FECFCu;
            // 0x4fecfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FED00u;
        goto label_4fed00;
    }
    ctx->pc = 0x4FECF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FED00u);
        ctx->pc = 0x4FECFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FECF8u;
            // 0x4fecfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FED00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FED00u; }
            if (ctx->pc != 0x4FED00u) { return; }
        }
        }
    }
    ctx->pc = 0x4FED00u;
label_4fed00:
    // 0x4fed00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4fed00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4fed04:
    // 0x4fed04: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x4fed04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4fed08:
    // 0x4fed08: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_4fed0c:
    if (ctx->pc == 0x4FED0Cu) {
        ctx->pc = 0x4FED0Cu;
            // 0x4fed0c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4FED10u;
        goto label_4fed10;
    }
    ctx->pc = 0x4FED08u;
    {
        const bool branch_taken_0x4fed08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fed08) {
            ctx->pc = 0x4FED0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FED08u;
            // 0x4fed0c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FECF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fecf0;
        }
    }
    ctx->pc = 0x4FED10u;
label_4fed10:
    // 0x4fed10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4fed10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4fed14:
    // 0x4fed14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4fed14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fed18:
    // 0x4fed18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fed18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fed1c:
    // 0x4fed1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fed1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fed20:
    // 0x4fed20: 0x3e00008  jr          $ra
label_4fed24:
    if (ctx->pc == 0x4FED24u) {
        ctx->pc = 0x4FED24u;
            // 0x4fed24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4FED28u;
        goto label_4fed28;
    }
    ctx->pc = 0x4FED20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FED24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FED20u;
            // 0x4fed24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FED28u;
label_4fed28:
    // 0x4fed28: 0x0  nop
    ctx->pc = 0x4fed28u;
    // NOP
label_4fed2c:
    // 0x4fed2c: 0x0  nop
    ctx->pc = 0x4fed2cu;
    // NOP
label_4fed30:
    // 0x4fed30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4fed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4fed34:
    // 0x4fed34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4fed34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fed38:
    // 0x4fed38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4fed38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4fed3c:
    // 0x4fed3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fed3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fed40:
    // 0x4fed40: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4fed40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4fed44:
    // 0x4fed44: 0x10a30089  beq         $a1, $v1, . + 4 + (0x89 << 2)
label_4fed48:
    if (ctx->pc == 0x4FED48u) {
        ctx->pc = 0x4FED48u;
            // 0x4fed48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FED4Cu;
        goto label_4fed4c;
    }
    ctx->pc = 0x4FED44u;
    {
        const bool branch_taken_0x4fed44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4FED48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FED44u;
            // 0x4fed48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fed44) {
            ctx->pc = 0x4FEF6Cu;
            goto label_4fef6c;
        }
    }
    ctx->pc = 0x4FED4Cu;
label_4fed4c:
    // 0x4fed4c: 0x50a00084  beql        $a1, $zero, . + 4 + (0x84 << 2)
label_4fed50:
    if (ctx->pc == 0x4FED50u) {
        ctx->pc = 0x4FED50u;
            // 0x4fed50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4FED54u;
        goto label_4fed54;
    }
    ctx->pc = 0x4FED4Cu;
    {
        const bool branch_taken_0x4fed4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fed4c) {
            ctx->pc = 0x4FED50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FED4Cu;
            // 0x4fed50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FEF60u;
            goto label_4fef60;
        }
    }
    ctx->pc = 0x4FED54u;
label_4fed54:
    // 0x4fed54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4fed54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fed58:
    // 0x4fed58: 0x50a30014  beql        $a1, $v1, . + 4 + (0x14 << 2)
label_4fed5c:
    if (ctx->pc == 0x4FED5Cu) {
        ctx->pc = 0x4FED5Cu;
            // 0x4fed5c: 0xc60000f0  lwc1        $f0, 0xF0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4FED60u;
        goto label_4fed60;
    }
    ctx->pc = 0x4FED58u;
    {
        const bool branch_taken_0x4fed58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fed58) {
            ctx->pc = 0x4FED5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FED58u;
            // 0x4fed5c: 0xc60000f0  lwc1        $f0, 0xF0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FEDACu;
            goto label_4fedac;
        }
    }
    ctx->pc = 0x4FED60u;
label_4fed60:
    // 0x4fed60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4fed60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fed64:
    // 0x4fed64: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4fed68:
    if (ctx->pc == 0x4FED68u) {
        ctx->pc = 0x4FED6Cu;
        goto label_4fed6c;
    }
    ctx->pc = 0x4FED64u;
    {
        const bool branch_taken_0x4fed64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fed64) {
            ctx->pc = 0x4FED74u;
            goto label_4fed74;
        }
    }
    ctx->pc = 0x4FED6Cu;
label_4fed6c:
    // 0x4fed6c: 0x10000085  b           . + 4 + (0x85 << 2)
label_4fed70:
    if (ctx->pc == 0x4FED70u) {
        ctx->pc = 0x4FED70u;
            // 0x4fed70: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4FED74u;
        goto label_4fed74;
    }
    ctx->pc = 0x4FED6Cu;
    {
        const bool branch_taken_0x4fed6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FED70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FED6Cu;
            // 0x4fed70: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fed6c) {
            ctx->pc = 0x4FEF84u;
            goto label_4fef84;
        }
    }
    ctx->pc = 0x4FED74u;
label_4fed74:
    // 0x4fed74: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4fed74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4fed78:
    // 0x4fed78: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4fed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4fed7c:
    // 0x4fed7c: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x4fed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fed80:
    // 0x4fed80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4fed80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fed84:
    // 0x4fed84: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4fed84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4fed88:
    // 0x4fed88: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4fed88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4fed8c:
    // 0x4fed8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4fed8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fed90:
    // 0x4fed90: 0x4500007b  bc1f        . + 4 + (0x7B << 2)
label_4fed94:
    if (ctx->pc == 0x4FED94u) {
        ctx->pc = 0x4FED94u;
            // 0x4fed94: 0xe60100f4  swc1        $f1, 0xF4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
        ctx->pc = 0x4FED98u;
        goto label_4fed98;
    }
    ctx->pc = 0x4FED90u;
    {
        const bool branch_taken_0x4fed90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4FED94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FED90u;
            // 0x4fed94: 0xe60100f4  swc1        $f1, 0xF4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fed90) {
            ctx->pc = 0x4FEF80u;
            goto label_4fef80;
        }
    }
    ctx->pc = 0x4FED98u;
label_4fed98:
    // 0x4fed98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4fed98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fed9c:
    // 0x4fed9c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4fed9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4feda0:
    // 0x4feda0: 0x320f809  jalr        $t9
label_4feda4:
    if (ctx->pc == 0x4FEDA4u) {
        ctx->pc = 0x4FEDA8u;
        goto label_4feda8;
    }
    ctx->pc = 0x4FEDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FEDA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FEDA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FEDA8u; }
            if (ctx->pc != 0x4FEDA8u) { return; }
        }
        }
    }
    ctx->pc = 0x4FEDA8u;
label_4feda8:
    // 0x4feda8: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x4feda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fedac:
    // 0x4fedac: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x4fedacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4fedb0:
    // 0x4fedb0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x4fedb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fedb4:
    // 0x4fedb4: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_4fedb8:
    if (ctx->pc == 0x4FEDB8u) {
        ctx->pc = 0x4FEDB8u;
            // 0x4fedb8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4FEDBCu;
        goto label_4fedbc;
    }
    ctx->pc = 0x4FEDB4u;
    {
        const bool branch_taken_0x4fedb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fedb4) {
            ctx->pc = 0x4FEDB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEDB4u;
            // 0x4fedb8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FEDE4u;
            goto label_4fede4;
        }
    }
    ctx->pc = 0x4FEDBCu;
label_4fedbc:
    // 0x4fedbc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4fedbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4fedc0:
    // 0x4fedc0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4fedc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4fedc4:
    // 0x4fedc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4fedc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fedc8:
    // 0x4fedc8: 0x0  nop
    ctx->pc = 0x4fedc8u;
    // NOP
label_4fedcc:
    // 0x4fedcc: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x4fedccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4fedd0:
    // 0x4fedd0: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x4fedd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fedd4:
    // 0x4fedd4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4fedd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fedd8:
    // 0x4fedd8: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x4fedd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_4feddc:
    // 0x4feddc: 0x10000005  b           . + 4 + (0x5 << 2)
label_4fede0:
    if (ctx->pc == 0x4FEDE0u) {
        ctx->pc = 0x4FEDE0u;
            // 0x4fede0: 0xe60000e8  swc1        $f0, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->pc = 0x4FEDE4u;
        goto label_4fede4;
    }
    ctx->pc = 0x4FEDDCu;
    {
        const bool branch_taken_0x4feddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEDDCu;
            // 0x4fede0: 0xe60000e8  swc1        $f0, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4feddc) {
            ctx->pc = 0x4FEDF4u;
            goto label_4fedf4;
        }
    }
    ctx->pc = 0x4FEDE4u;
label_4fede4:
    // 0x4fede4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4fede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4fede8:
    // 0x4fede8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4fede8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4fedec:
    // 0x4fedec: 0x320f809  jalr        $t9
label_4fedf0:
    if (ctx->pc == 0x4FEDF0u) {
        ctx->pc = 0x4FEDF0u;
            // 0x4fedf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FEDF4u;
        goto label_4fedf4;
    }
    ctx->pc = 0x4FEDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FEDF4u);
        ctx->pc = 0x4FEDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEDECu;
            // 0x4fedf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FEDF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FEDF4u; }
            if (ctx->pc != 0x4FEDF4u) { return; }
        }
        }
    }
    ctx->pc = 0x4FEDF4u;
label_4fedf4:
    // 0x4fedf4: 0x920400d4  lbu         $a0, 0xD4($s0)
    ctx->pc = 0x4fedf4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 212)));
label_4fedf8:
    // 0x4fedf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4fedf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fedfc:
    // 0x4fedfc: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_4fee00:
    if (ctx->pc == 0x4FEE00u) {
        ctx->pc = 0x4FEE00u;
            // 0x4fee00: 0x8e0500d0  lw          $a1, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->pc = 0x4FEE04u;
        goto label_4fee04;
    }
    ctx->pc = 0x4FEDFCu;
    {
        const bool branch_taken_0x4fedfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fedfc) {
            ctx->pc = 0x4FEE00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEDFCu;
            // 0x4fee00: 0x8e0500d0  lw          $a1, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FEE14u;
            goto label_4fee14;
        }
    }
    ctx->pc = 0x4FEE04u;
label_4fee04:
    // 0x4fee04: 0x1080005e  beqz        $a0, . + 4 + (0x5E << 2)
label_4fee08:
    if (ctx->pc == 0x4FEE08u) {
        ctx->pc = 0x4FEE0Cu;
        goto label_4fee0c;
    }
    ctx->pc = 0x4FEE04u;
    {
        const bool branch_taken_0x4fee04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fee04) {
            ctx->pc = 0x4FEF80u;
            goto label_4fef80;
        }
    }
    ctx->pc = 0x4FEE0Cu;
label_4fee0c:
    // 0x4fee0c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_4fee10:
    if (ctx->pc == 0x4FEE10u) {
        ctx->pc = 0x4FEE14u;
        goto label_4fee14;
    }
    ctx->pc = 0x4FEE0Cu;
    {
        const bool branch_taken_0x4fee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fee0c) {
            ctx->pc = 0x4FEF80u;
            goto label_4fef80;
        }
    }
    ctx->pc = 0x4FEE14u;
label_4fee14:
    // 0x4fee14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4fee14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fee18:
    // 0x4fee18: 0x50a30026  beql        $a1, $v1, . + 4 + (0x26 << 2)
label_4fee1c:
    if (ctx->pc == 0x4FEE1Cu) {
        ctx->pc = 0x4FEE1Cu;
            // 0x4fee1c: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->pc = 0x4FEE20u;
        goto label_4fee20;
    }
    ctx->pc = 0x4FEE18u;
    {
        const bool branch_taken_0x4fee18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fee18) {
            ctx->pc = 0x4FEE1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEE18u;
            // 0x4fee1c: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FEEB4u;
            goto label_4feeb4;
        }
    }
    ctx->pc = 0x4FEE20u;
label_4fee20:
    // 0x4fee20: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x4fee20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fee24:
    // 0x4fee24: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x4fee24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_4fee28:
    // 0x4fee28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fee28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fee2c:
    // 0x4fee2c: 0x0  nop
    ctx->pc = 0x4fee2cu;
    // NOP
label_4fee30:
    // 0x4fee30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4fee30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fee34:
    // 0x4fee34: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_4fee38:
    if (ctx->pc == 0x4FEE38u) {
        ctx->pc = 0x4FEE38u;
            // 0x4fee38: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->pc = 0x4FEE3Cu;
        goto label_4fee3c;
    }
    ctx->pc = 0x4FEE34u;
    {
        const bool branch_taken_0x4fee34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fee34) {
            ctx->pc = 0x4FEE38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEE34u;
            // 0x4fee38: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FEE50u;
            goto label_4fee50;
        }
    }
    ctx->pc = 0x4FEE3Cu;
label_4fee3c:
    // 0x4fee3c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4fee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4fee40:
    // 0x4fee40: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4fee40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4fee44:
    // 0x4fee44: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4fee44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4fee48:
    // 0x4fee48: 0x1000004d  b           . + 4 + (0x4D << 2)
label_4fee4c:
    if (ctx->pc == 0x4FEE4Cu) {
        ctx->pc = 0x4FEE4Cu;
            // 0x4fee4c: 0xac6400d8  sw          $a0, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 4));
        ctx->pc = 0x4FEE50u;
        goto label_4fee50;
    }
    ctx->pc = 0x4FEE48u;
    {
        const bool branch_taken_0x4fee48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEE48u;
            // 0x4fee4c: 0xac6400d8  sw          $a0, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fee48) {
            ctx->pc = 0x4FEF80u;
            goto label_4fef80;
        }
    }
    ctx->pc = 0x4FEE50u;
label_4fee50:
    // 0x4fee50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fee50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fee54:
    // 0x4fee54: 0x0  nop
    ctx->pc = 0x4fee54u;
    // NOP
label_4fee58:
    // 0x4fee58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4fee58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fee5c:
    // 0x4fee5c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4fee60:
    if (ctx->pc == 0x4FEE60u) {
        ctx->pc = 0x4FEE60u;
            // 0x4fee60: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4FEE64u;
        goto label_4fee64;
    }
    ctx->pc = 0x4FEE5Cu;
    {
        const bool branch_taken_0x4fee5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fee5c) {
            ctx->pc = 0x4FEE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEE5Cu;
            // 0x4fee60: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FEE74u;
            goto label_4fee74;
        }
    }
    ctx->pc = 0x4FEE64u;
label_4fee64:
    // 0x4fee64: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fee64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4fee68:
    // 0x4fee68: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4fee68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4fee6c:
    // 0x4fee6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fee70:
    if (ctx->pc == 0x4FEE70u) {
        ctx->pc = 0x4FEE70u;
            // 0x4fee70: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4FEE74u;
        goto label_4fee74;
    }
    ctx->pc = 0x4FEE6Cu;
    {
        const bool branch_taken_0x4fee6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEE6Cu;
            // 0x4fee70: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fee6c) {
            ctx->pc = 0x4FEE8Cu;
            goto label_4fee8c;
        }
    }
    ctx->pc = 0x4FEE74u;
label_4fee74:
    // 0x4fee74: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4fee74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_4fee78:
    // 0x4fee78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fee78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4fee7c:
    // 0x4fee7c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4fee7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4fee80:
    // 0x4fee80: 0x0  nop
    ctx->pc = 0x4fee80u;
    // NOP
label_4fee84:
    // 0x4fee84: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4fee84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4fee88:
    // 0x4fee88: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4fee88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4fee8c:
    // 0x4fee8c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4fee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4fee90:
    // 0x4fee90: 0x43600  sll         $a2, $a0, 24
    ctx->pc = 0x4fee90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_4fee94:
    // 0x4fee94: 0x42c00  sll         $a1, $a0, 16
    ctx->pc = 0x4fee94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4fee98:
    // 0x4fee98: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4fee98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_4fee9c:
    // 0x4fee9c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x4fee9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_4feea0:
    // 0x4feea0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4feea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4feea4:
    // 0x4feea4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4feea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4feea8:
    // 0x4feea8: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x4feea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
label_4feeac:
    // 0x4feeac: 0x10000034  b           . + 4 + (0x34 << 2)
label_4feeb0:
    if (ctx->pc == 0x4FEEB0u) {
        ctx->pc = 0x4FEEB0u;
            // 0x4feeb0: 0xac6400d8  sw          $a0, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 4));
        ctx->pc = 0x4FEEB4u;
        goto label_4feeb4;
    }
    ctx->pc = 0x4FEEACu;
    {
        const bool branch_taken_0x4feeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEEACu;
            // 0x4feeb0: 0xac6400d8  sw          $a0, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4feeac) {
            ctx->pc = 0x4FEF80u;
            goto label_4fef80;
        }
    }
    ctx->pc = 0x4FEEB4u;
label_4feeb4:
    // 0x4feeb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4feeb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4feeb8:
    // 0x4feeb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4feeb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4feebc:
    // 0x4feebc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4feebcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4feec0:
    // 0x4feec0: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x4feec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_4feec4:
    // 0x4feec4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4feec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4feec8:
    // 0x4feec8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4feec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4feecc:
    // 0x4feecc: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x4feeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4feed0:
    // 0x4feed0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x4feed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4feed4:
    // 0x4feed4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_4feed8:
    if (ctx->pc == 0x4FEED8u) {
        ctx->pc = 0x4FEEDCu;
        goto label_4feedc;
    }
    ctx->pc = 0x4FEED4u;
    {
        const bool branch_taken_0x4feed4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4feed4) {
            ctx->pc = 0x4FEEF0u;
            goto label_4feef0;
        }
    }
    ctx->pc = 0x4FEEDCu;
label_4feedc:
    // 0x4feedc: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x4feedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_4feee0:
    // 0x4feee0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4feee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4feee4:
    // 0x4feee4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4feee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4feee8:
    // 0x4feee8: 0x10000017  b           . + 4 + (0x17 << 2)
label_4feeec:
    if (ctx->pc == 0x4FEEECu) {
        ctx->pc = 0x4FEEECu;
            // 0x4feeec: 0xac6800d8  sw          $t0, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 8));
        ctx->pc = 0x4FEEF0u;
        goto label_4feef0;
    }
    ctx->pc = 0x4FEEE8u;
    {
        const bool branch_taken_0x4feee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEEE8u;
            // 0x4feeec: 0xac6800d8  sw          $t0, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4feee8) {
            ctx->pc = 0x4FEF48u;
            goto label_4fef48;
        }
    }
    ctx->pc = 0x4FEEF0u;
label_4feef0:
    // 0x4feef0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4feef0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4feef4:
    // 0x4feef4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4feef8:
    if (ctx->pc == 0x4FEEF8u) {
        ctx->pc = 0x4FEEF8u;
            // 0x4feef8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4FEEFCu;
        goto label_4feefc;
    }
    ctx->pc = 0x4FEEF4u;
    {
        const bool branch_taken_0x4feef4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4feef4) {
            ctx->pc = 0x4FEEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEEF4u;
            // 0x4feef8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FEF0Cu;
            goto label_4fef0c;
        }
    }
    ctx->pc = 0x4FEEFCu;
label_4feefc:
    // 0x4feefc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4feefcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4fef00:
    // 0x4fef00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4fef00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4fef04:
    // 0x4fef04: 0x10000006  b           . + 4 + (0x6 << 2)
label_4fef08:
    if (ctx->pc == 0x4FEF08u) {
        ctx->pc = 0x4FEF08u;
            // 0x4fef08: 0x306600ff  andi        $a2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4FEF0Cu;
        goto label_4fef0c;
    }
    ctx->pc = 0x4FEF04u;
    {
        const bool branch_taken_0x4fef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FEF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEF04u;
            // 0x4fef08: 0x306600ff  andi        $a2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fef04) {
            ctx->pc = 0x4FEF20u;
            goto label_4fef20;
        }
    }
    ctx->pc = 0x4FEF0Cu;
label_4fef0c:
    // 0x4fef0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fef0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4fef10:
    // 0x4fef10: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4fef10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4fef14:
    // 0x4fef14: 0x0  nop
    ctx->pc = 0x4fef14u;
    // NOP
label_4fef18:
    // 0x4fef18: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4fef18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_4fef1c:
    // 0x4fef1c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x4fef1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4fef20:
    // 0x4fef20: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x4fef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_4fef24:
    // 0x4fef24: 0x62e00  sll         $a1, $a2, 24
    ctx->pc = 0x4fef24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_4fef28:
    // 0x4fef28: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x4fef28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_4fef2c:
    // 0x4fef2c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4fef2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4fef30:
    // 0x4fef30: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x4fef30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_4fef34:
    // 0x4fef34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fef34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4fef38:
    // 0x4fef38: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4fef38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4fef3c:
    // 0x4fef3c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4fef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4fef40:
    // 0x4fef40: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x4fef40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
label_4fef44:
    // 0x4fef44: 0xac6400d8  sw          $a0, 0xD8($v1)
    ctx->pc = 0x4fef44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 4));
label_4fef48:
    // 0x4fef48: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4fef48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4fef4c:
    // 0x4fef4c: 0x29230004  slti        $v1, $t1, 0x4
    ctx->pc = 0x4fef4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
label_4fef50:
    // 0x4fef50: 0x5460ffdf  bnel        $v1, $zero, . + 4 + (-0x21 << 2)
label_4fef54:
    if (ctx->pc == 0x4FEF54u) {
        ctx->pc = 0x4FEF54u;
            // 0x4fef54: 0xc60000e8  lwc1        $f0, 0xE8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4FEF58u;
        goto label_4fef58;
    }
    ctx->pc = 0x4FEF50u;
    {
        const bool branch_taken_0x4fef50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fef50) {
            ctx->pc = 0x4FEF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEF50u;
            // 0x4fef54: 0xc60000e8  lwc1        $f0, 0xE8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FEED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4feed0;
        }
    }
    ctx->pc = 0x4FEF58u;
label_4fef58:
    // 0x4fef58: 0x10000009  b           . + 4 + (0x9 << 2)
label_4fef5c:
    if (ctx->pc == 0x4FEF5Cu) {
        ctx->pc = 0x4FEF60u;
        goto label_4fef60;
    }
    ctx->pc = 0x4FEF58u;
    {
        const bool branch_taken_0x4fef58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fef58) {
            ctx->pc = 0x4FEF80u;
            goto label_4fef80;
        }
    }
    ctx->pc = 0x4FEF60u;
label_4fef60:
    // 0x4fef60: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4fef60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4fef64:
    // 0x4fef64: 0x320f809  jalr        $t9
label_4fef68:
    if (ctx->pc == 0x4FEF68u) {
        ctx->pc = 0x4FEF6Cu;
        goto label_4fef6c;
    }
    ctx->pc = 0x4FEF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FEF6Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FEF6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FEF6Cu; }
            if (ctx->pc != 0x4FEF6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4FEF6Cu;
label_4fef6c:
    // 0x4fef6c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4fef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4fef70:
    // 0x4fef70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4fef70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4fef74:
    // 0x4fef74: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4fef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4fef78:
    // 0x4fef78: 0xc057b7c  jal         func_15EDF0
label_4fef7c:
    if (ctx->pc == 0x4FEF7Cu) {
        ctx->pc = 0x4FEF7Cu;
            // 0x4fef7c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4FEF80u;
        goto label_4fef80;
    }
    ctx->pc = 0x4FEF78u;
    SET_GPR_U32(ctx, 31, 0x4FEF80u);
    ctx->pc = 0x4FEF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEF78u;
            // 0x4fef7c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEF80u; }
        if (ctx->pc != 0x4FEF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEF80u; }
        if (ctx->pc != 0x4FEF80u) { return; }
    }
    ctx->pc = 0x4FEF80u;
label_4fef80:
    // 0x4fef80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4fef80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4fef84:
    // 0x4fef84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fef84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fef88:
    // 0x4fef88: 0x3e00008  jr          $ra
label_4fef8c:
    if (ctx->pc == 0x4FEF8Cu) {
        ctx->pc = 0x4FEF8Cu;
            // 0x4fef8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4FEF90u;
        goto label_fallthrough_0x4fef88;
    }
    ctx->pc = 0x4FEF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FEF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEF88u;
            // 0x4fef8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4fef88:
    ctx->pc = 0x4FEF90u;
}
