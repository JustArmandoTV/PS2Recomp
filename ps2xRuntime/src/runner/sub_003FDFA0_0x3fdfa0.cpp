#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FDFA0
// Address: 0x3fdfa0 - 0x3fee20
void sub_003FDFA0_0x3fdfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FDFA0_0x3fdfa0");
#endif

    switch (ctx->pc) {
        case 0x3fdfa0u: goto label_3fdfa0;
        case 0x3fdfa4u: goto label_3fdfa4;
        case 0x3fdfa8u: goto label_3fdfa8;
        case 0x3fdfacu: goto label_3fdfac;
        case 0x3fdfb0u: goto label_3fdfb0;
        case 0x3fdfb4u: goto label_3fdfb4;
        case 0x3fdfb8u: goto label_3fdfb8;
        case 0x3fdfbcu: goto label_3fdfbc;
        case 0x3fdfc0u: goto label_3fdfc0;
        case 0x3fdfc4u: goto label_3fdfc4;
        case 0x3fdfc8u: goto label_3fdfc8;
        case 0x3fdfccu: goto label_3fdfcc;
        case 0x3fdfd0u: goto label_3fdfd0;
        case 0x3fdfd4u: goto label_3fdfd4;
        case 0x3fdfd8u: goto label_3fdfd8;
        case 0x3fdfdcu: goto label_3fdfdc;
        case 0x3fdfe0u: goto label_3fdfe0;
        case 0x3fdfe4u: goto label_3fdfe4;
        case 0x3fdfe8u: goto label_3fdfe8;
        case 0x3fdfecu: goto label_3fdfec;
        case 0x3fdff0u: goto label_3fdff0;
        case 0x3fdff4u: goto label_3fdff4;
        case 0x3fdff8u: goto label_3fdff8;
        case 0x3fdffcu: goto label_3fdffc;
        case 0x3fe000u: goto label_3fe000;
        case 0x3fe004u: goto label_3fe004;
        case 0x3fe008u: goto label_3fe008;
        case 0x3fe00cu: goto label_3fe00c;
        case 0x3fe010u: goto label_3fe010;
        case 0x3fe014u: goto label_3fe014;
        case 0x3fe018u: goto label_3fe018;
        case 0x3fe01cu: goto label_3fe01c;
        case 0x3fe020u: goto label_3fe020;
        case 0x3fe024u: goto label_3fe024;
        case 0x3fe028u: goto label_3fe028;
        case 0x3fe02cu: goto label_3fe02c;
        case 0x3fe030u: goto label_3fe030;
        case 0x3fe034u: goto label_3fe034;
        case 0x3fe038u: goto label_3fe038;
        case 0x3fe03cu: goto label_3fe03c;
        case 0x3fe040u: goto label_3fe040;
        case 0x3fe044u: goto label_3fe044;
        case 0x3fe048u: goto label_3fe048;
        case 0x3fe04cu: goto label_3fe04c;
        case 0x3fe050u: goto label_3fe050;
        case 0x3fe054u: goto label_3fe054;
        case 0x3fe058u: goto label_3fe058;
        case 0x3fe05cu: goto label_3fe05c;
        case 0x3fe060u: goto label_3fe060;
        case 0x3fe064u: goto label_3fe064;
        case 0x3fe068u: goto label_3fe068;
        case 0x3fe06cu: goto label_3fe06c;
        case 0x3fe070u: goto label_3fe070;
        case 0x3fe074u: goto label_3fe074;
        case 0x3fe078u: goto label_3fe078;
        case 0x3fe07cu: goto label_3fe07c;
        case 0x3fe080u: goto label_3fe080;
        case 0x3fe084u: goto label_3fe084;
        case 0x3fe088u: goto label_3fe088;
        case 0x3fe08cu: goto label_3fe08c;
        case 0x3fe090u: goto label_3fe090;
        case 0x3fe094u: goto label_3fe094;
        case 0x3fe098u: goto label_3fe098;
        case 0x3fe09cu: goto label_3fe09c;
        case 0x3fe0a0u: goto label_3fe0a0;
        case 0x3fe0a4u: goto label_3fe0a4;
        case 0x3fe0a8u: goto label_3fe0a8;
        case 0x3fe0acu: goto label_3fe0ac;
        case 0x3fe0b0u: goto label_3fe0b0;
        case 0x3fe0b4u: goto label_3fe0b4;
        case 0x3fe0b8u: goto label_3fe0b8;
        case 0x3fe0bcu: goto label_3fe0bc;
        case 0x3fe0c0u: goto label_3fe0c0;
        case 0x3fe0c4u: goto label_3fe0c4;
        case 0x3fe0c8u: goto label_3fe0c8;
        case 0x3fe0ccu: goto label_3fe0cc;
        case 0x3fe0d0u: goto label_3fe0d0;
        case 0x3fe0d4u: goto label_3fe0d4;
        case 0x3fe0d8u: goto label_3fe0d8;
        case 0x3fe0dcu: goto label_3fe0dc;
        case 0x3fe0e0u: goto label_3fe0e0;
        case 0x3fe0e4u: goto label_3fe0e4;
        case 0x3fe0e8u: goto label_3fe0e8;
        case 0x3fe0ecu: goto label_3fe0ec;
        case 0x3fe0f0u: goto label_3fe0f0;
        case 0x3fe0f4u: goto label_3fe0f4;
        case 0x3fe0f8u: goto label_3fe0f8;
        case 0x3fe0fcu: goto label_3fe0fc;
        case 0x3fe100u: goto label_3fe100;
        case 0x3fe104u: goto label_3fe104;
        case 0x3fe108u: goto label_3fe108;
        case 0x3fe10cu: goto label_3fe10c;
        case 0x3fe110u: goto label_3fe110;
        case 0x3fe114u: goto label_3fe114;
        case 0x3fe118u: goto label_3fe118;
        case 0x3fe11cu: goto label_3fe11c;
        case 0x3fe120u: goto label_3fe120;
        case 0x3fe124u: goto label_3fe124;
        case 0x3fe128u: goto label_3fe128;
        case 0x3fe12cu: goto label_3fe12c;
        case 0x3fe130u: goto label_3fe130;
        case 0x3fe134u: goto label_3fe134;
        case 0x3fe138u: goto label_3fe138;
        case 0x3fe13cu: goto label_3fe13c;
        case 0x3fe140u: goto label_3fe140;
        case 0x3fe144u: goto label_3fe144;
        case 0x3fe148u: goto label_3fe148;
        case 0x3fe14cu: goto label_3fe14c;
        case 0x3fe150u: goto label_3fe150;
        case 0x3fe154u: goto label_3fe154;
        case 0x3fe158u: goto label_3fe158;
        case 0x3fe15cu: goto label_3fe15c;
        case 0x3fe160u: goto label_3fe160;
        case 0x3fe164u: goto label_3fe164;
        case 0x3fe168u: goto label_3fe168;
        case 0x3fe16cu: goto label_3fe16c;
        case 0x3fe170u: goto label_3fe170;
        case 0x3fe174u: goto label_3fe174;
        case 0x3fe178u: goto label_3fe178;
        case 0x3fe17cu: goto label_3fe17c;
        case 0x3fe180u: goto label_3fe180;
        case 0x3fe184u: goto label_3fe184;
        case 0x3fe188u: goto label_3fe188;
        case 0x3fe18cu: goto label_3fe18c;
        case 0x3fe190u: goto label_3fe190;
        case 0x3fe194u: goto label_3fe194;
        case 0x3fe198u: goto label_3fe198;
        case 0x3fe19cu: goto label_3fe19c;
        case 0x3fe1a0u: goto label_3fe1a0;
        case 0x3fe1a4u: goto label_3fe1a4;
        case 0x3fe1a8u: goto label_3fe1a8;
        case 0x3fe1acu: goto label_3fe1ac;
        case 0x3fe1b0u: goto label_3fe1b0;
        case 0x3fe1b4u: goto label_3fe1b4;
        case 0x3fe1b8u: goto label_3fe1b8;
        case 0x3fe1bcu: goto label_3fe1bc;
        case 0x3fe1c0u: goto label_3fe1c0;
        case 0x3fe1c4u: goto label_3fe1c4;
        case 0x3fe1c8u: goto label_3fe1c8;
        case 0x3fe1ccu: goto label_3fe1cc;
        case 0x3fe1d0u: goto label_3fe1d0;
        case 0x3fe1d4u: goto label_3fe1d4;
        case 0x3fe1d8u: goto label_3fe1d8;
        case 0x3fe1dcu: goto label_3fe1dc;
        case 0x3fe1e0u: goto label_3fe1e0;
        case 0x3fe1e4u: goto label_3fe1e4;
        case 0x3fe1e8u: goto label_3fe1e8;
        case 0x3fe1ecu: goto label_3fe1ec;
        case 0x3fe1f0u: goto label_3fe1f0;
        case 0x3fe1f4u: goto label_3fe1f4;
        case 0x3fe1f8u: goto label_3fe1f8;
        case 0x3fe1fcu: goto label_3fe1fc;
        case 0x3fe200u: goto label_3fe200;
        case 0x3fe204u: goto label_3fe204;
        case 0x3fe208u: goto label_3fe208;
        case 0x3fe20cu: goto label_3fe20c;
        case 0x3fe210u: goto label_3fe210;
        case 0x3fe214u: goto label_3fe214;
        case 0x3fe218u: goto label_3fe218;
        case 0x3fe21cu: goto label_3fe21c;
        case 0x3fe220u: goto label_3fe220;
        case 0x3fe224u: goto label_3fe224;
        case 0x3fe228u: goto label_3fe228;
        case 0x3fe22cu: goto label_3fe22c;
        case 0x3fe230u: goto label_3fe230;
        case 0x3fe234u: goto label_3fe234;
        case 0x3fe238u: goto label_3fe238;
        case 0x3fe23cu: goto label_3fe23c;
        case 0x3fe240u: goto label_3fe240;
        case 0x3fe244u: goto label_3fe244;
        case 0x3fe248u: goto label_3fe248;
        case 0x3fe24cu: goto label_3fe24c;
        case 0x3fe250u: goto label_3fe250;
        case 0x3fe254u: goto label_3fe254;
        case 0x3fe258u: goto label_3fe258;
        case 0x3fe25cu: goto label_3fe25c;
        case 0x3fe260u: goto label_3fe260;
        case 0x3fe264u: goto label_3fe264;
        case 0x3fe268u: goto label_3fe268;
        case 0x3fe26cu: goto label_3fe26c;
        case 0x3fe270u: goto label_3fe270;
        case 0x3fe274u: goto label_3fe274;
        case 0x3fe278u: goto label_3fe278;
        case 0x3fe27cu: goto label_3fe27c;
        case 0x3fe280u: goto label_3fe280;
        case 0x3fe284u: goto label_3fe284;
        case 0x3fe288u: goto label_3fe288;
        case 0x3fe28cu: goto label_3fe28c;
        case 0x3fe290u: goto label_3fe290;
        case 0x3fe294u: goto label_3fe294;
        case 0x3fe298u: goto label_3fe298;
        case 0x3fe29cu: goto label_3fe29c;
        case 0x3fe2a0u: goto label_3fe2a0;
        case 0x3fe2a4u: goto label_3fe2a4;
        case 0x3fe2a8u: goto label_3fe2a8;
        case 0x3fe2acu: goto label_3fe2ac;
        case 0x3fe2b0u: goto label_3fe2b0;
        case 0x3fe2b4u: goto label_3fe2b4;
        case 0x3fe2b8u: goto label_3fe2b8;
        case 0x3fe2bcu: goto label_3fe2bc;
        case 0x3fe2c0u: goto label_3fe2c0;
        case 0x3fe2c4u: goto label_3fe2c4;
        case 0x3fe2c8u: goto label_3fe2c8;
        case 0x3fe2ccu: goto label_3fe2cc;
        case 0x3fe2d0u: goto label_3fe2d0;
        case 0x3fe2d4u: goto label_3fe2d4;
        case 0x3fe2d8u: goto label_3fe2d8;
        case 0x3fe2dcu: goto label_3fe2dc;
        case 0x3fe2e0u: goto label_3fe2e0;
        case 0x3fe2e4u: goto label_3fe2e4;
        case 0x3fe2e8u: goto label_3fe2e8;
        case 0x3fe2ecu: goto label_3fe2ec;
        case 0x3fe2f0u: goto label_3fe2f0;
        case 0x3fe2f4u: goto label_3fe2f4;
        case 0x3fe2f8u: goto label_3fe2f8;
        case 0x3fe2fcu: goto label_3fe2fc;
        case 0x3fe300u: goto label_3fe300;
        case 0x3fe304u: goto label_3fe304;
        case 0x3fe308u: goto label_3fe308;
        case 0x3fe30cu: goto label_3fe30c;
        case 0x3fe310u: goto label_3fe310;
        case 0x3fe314u: goto label_3fe314;
        case 0x3fe318u: goto label_3fe318;
        case 0x3fe31cu: goto label_3fe31c;
        case 0x3fe320u: goto label_3fe320;
        case 0x3fe324u: goto label_3fe324;
        case 0x3fe328u: goto label_3fe328;
        case 0x3fe32cu: goto label_3fe32c;
        case 0x3fe330u: goto label_3fe330;
        case 0x3fe334u: goto label_3fe334;
        case 0x3fe338u: goto label_3fe338;
        case 0x3fe33cu: goto label_3fe33c;
        case 0x3fe340u: goto label_3fe340;
        case 0x3fe344u: goto label_3fe344;
        case 0x3fe348u: goto label_3fe348;
        case 0x3fe34cu: goto label_3fe34c;
        case 0x3fe350u: goto label_3fe350;
        case 0x3fe354u: goto label_3fe354;
        case 0x3fe358u: goto label_3fe358;
        case 0x3fe35cu: goto label_3fe35c;
        case 0x3fe360u: goto label_3fe360;
        case 0x3fe364u: goto label_3fe364;
        case 0x3fe368u: goto label_3fe368;
        case 0x3fe36cu: goto label_3fe36c;
        case 0x3fe370u: goto label_3fe370;
        case 0x3fe374u: goto label_3fe374;
        case 0x3fe378u: goto label_3fe378;
        case 0x3fe37cu: goto label_3fe37c;
        case 0x3fe380u: goto label_3fe380;
        case 0x3fe384u: goto label_3fe384;
        case 0x3fe388u: goto label_3fe388;
        case 0x3fe38cu: goto label_3fe38c;
        case 0x3fe390u: goto label_3fe390;
        case 0x3fe394u: goto label_3fe394;
        case 0x3fe398u: goto label_3fe398;
        case 0x3fe39cu: goto label_3fe39c;
        case 0x3fe3a0u: goto label_3fe3a0;
        case 0x3fe3a4u: goto label_3fe3a4;
        case 0x3fe3a8u: goto label_3fe3a8;
        case 0x3fe3acu: goto label_3fe3ac;
        case 0x3fe3b0u: goto label_3fe3b0;
        case 0x3fe3b4u: goto label_3fe3b4;
        case 0x3fe3b8u: goto label_3fe3b8;
        case 0x3fe3bcu: goto label_3fe3bc;
        case 0x3fe3c0u: goto label_3fe3c0;
        case 0x3fe3c4u: goto label_3fe3c4;
        case 0x3fe3c8u: goto label_3fe3c8;
        case 0x3fe3ccu: goto label_3fe3cc;
        case 0x3fe3d0u: goto label_3fe3d0;
        case 0x3fe3d4u: goto label_3fe3d4;
        case 0x3fe3d8u: goto label_3fe3d8;
        case 0x3fe3dcu: goto label_3fe3dc;
        case 0x3fe3e0u: goto label_3fe3e0;
        case 0x3fe3e4u: goto label_3fe3e4;
        case 0x3fe3e8u: goto label_3fe3e8;
        case 0x3fe3ecu: goto label_3fe3ec;
        case 0x3fe3f0u: goto label_3fe3f0;
        case 0x3fe3f4u: goto label_3fe3f4;
        case 0x3fe3f8u: goto label_3fe3f8;
        case 0x3fe3fcu: goto label_3fe3fc;
        case 0x3fe400u: goto label_3fe400;
        case 0x3fe404u: goto label_3fe404;
        case 0x3fe408u: goto label_3fe408;
        case 0x3fe40cu: goto label_3fe40c;
        case 0x3fe410u: goto label_3fe410;
        case 0x3fe414u: goto label_3fe414;
        case 0x3fe418u: goto label_3fe418;
        case 0x3fe41cu: goto label_3fe41c;
        case 0x3fe420u: goto label_3fe420;
        case 0x3fe424u: goto label_3fe424;
        case 0x3fe428u: goto label_3fe428;
        case 0x3fe42cu: goto label_3fe42c;
        case 0x3fe430u: goto label_3fe430;
        case 0x3fe434u: goto label_3fe434;
        case 0x3fe438u: goto label_3fe438;
        case 0x3fe43cu: goto label_3fe43c;
        case 0x3fe440u: goto label_3fe440;
        case 0x3fe444u: goto label_3fe444;
        case 0x3fe448u: goto label_3fe448;
        case 0x3fe44cu: goto label_3fe44c;
        case 0x3fe450u: goto label_3fe450;
        case 0x3fe454u: goto label_3fe454;
        case 0x3fe458u: goto label_3fe458;
        case 0x3fe45cu: goto label_3fe45c;
        case 0x3fe460u: goto label_3fe460;
        case 0x3fe464u: goto label_3fe464;
        case 0x3fe468u: goto label_3fe468;
        case 0x3fe46cu: goto label_3fe46c;
        case 0x3fe470u: goto label_3fe470;
        case 0x3fe474u: goto label_3fe474;
        case 0x3fe478u: goto label_3fe478;
        case 0x3fe47cu: goto label_3fe47c;
        case 0x3fe480u: goto label_3fe480;
        case 0x3fe484u: goto label_3fe484;
        case 0x3fe488u: goto label_3fe488;
        case 0x3fe48cu: goto label_3fe48c;
        case 0x3fe490u: goto label_3fe490;
        case 0x3fe494u: goto label_3fe494;
        case 0x3fe498u: goto label_3fe498;
        case 0x3fe49cu: goto label_3fe49c;
        case 0x3fe4a0u: goto label_3fe4a0;
        case 0x3fe4a4u: goto label_3fe4a4;
        case 0x3fe4a8u: goto label_3fe4a8;
        case 0x3fe4acu: goto label_3fe4ac;
        case 0x3fe4b0u: goto label_3fe4b0;
        case 0x3fe4b4u: goto label_3fe4b4;
        case 0x3fe4b8u: goto label_3fe4b8;
        case 0x3fe4bcu: goto label_3fe4bc;
        case 0x3fe4c0u: goto label_3fe4c0;
        case 0x3fe4c4u: goto label_3fe4c4;
        case 0x3fe4c8u: goto label_3fe4c8;
        case 0x3fe4ccu: goto label_3fe4cc;
        case 0x3fe4d0u: goto label_3fe4d0;
        case 0x3fe4d4u: goto label_3fe4d4;
        case 0x3fe4d8u: goto label_3fe4d8;
        case 0x3fe4dcu: goto label_3fe4dc;
        case 0x3fe4e0u: goto label_3fe4e0;
        case 0x3fe4e4u: goto label_3fe4e4;
        case 0x3fe4e8u: goto label_3fe4e8;
        case 0x3fe4ecu: goto label_3fe4ec;
        case 0x3fe4f0u: goto label_3fe4f0;
        case 0x3fe4f4u: goto label_3fe4f4;
        case 0x3fe4f8u: goto label_3fe4f8;
        case 0x3fe4fcu: goto label_3fe4fc;
        case 0x3fe500u: goto label_3fe500;
        case 0x3fe504u: goto label_3fe504;
        case 0x3fe508u: goto label_3fe508;
        case 0x3fe50cu: goto label_3fe50c;
        case 0x3fe510u: goto label_3fe510;
        case 0x3fe514u: goto label_3fe514;
        case 0x3fe518u: goto label_3fe518;
        case 0x3fe51cu: goto label_3fe51c;
        case 0x3fe520u: goto label_3fe520;
        case 0x3fe524u: goto label_3fe524;
        case 0x3fe528u: goto label_3fe528;
        case 0x3fe52cu: goto label_3fe52c;
        case 0x3fe530u: goto label_3fe530;
        case 0x3fe534u: goto label_3fe534;
        case 0x3fe538u: goto label_3fe538;
        case 0x3fe53cu: goto label_3fe53c;
        case 0x3fe540u: goto label_3fe540;
        case 0x3fe544u: goto label_3fe544;
        case 0x3fe548u: goto label_3fe548;
        case 0x3fe54cu: goto label_3fe54c;
        case 0x3fe550u: goto label_3fe550;
        case 0x3fe554u: goto label_3fe554;
        case 0x3fe558u: goto label_3fe558;
        case 0x3fe55cu: goto label_3fe55c;
        case 0x3fe560u: goto label_3fe560;
        case 0x3fe564u: goto label_3fe564;
        case 0x3fe568u: goto label_3fe568;
        case 0x3fe56cu: goto label_3fe56c;
        case 0x3fe570u: goto label_3fe570;
        case 0x3fe574u: goto label_3fe574;
        case 0x3fe578u: goto label_3fe578;
        case 0x3fe57cu: goto label_3fe57c;
        case 0x3fe580u: goto label_3fe580;
        case 0x3fe584u: goto label_3fe584;
        case 0x3fe588u: goto label_3fe588;
        case 0x3fe58cu: goto label_3fe58c;
        case 0x3fe590u: goto label_3fe590;
        case 0x3fe594u: goto label_3fe594;
        case 0x3fe598u: goto label_3fe598;
        case 0x3fe59cu: goto label_3fe59c;
        case 0x3fe5a0u: goto label_3fe5a0;
        case 0x3fe5a4u: goto label_3fe5a4;
        case 0x3fe5a8u: goto label_3fe5a8;
        case 0x3fe5acu: goto label_3fe5ac;
        case 0x3fe5b0u: goto label_3fe5b0;
        case 0x3fe5b4u: goto label_3fe5b4;
        case 0x3fe5b8u: goto label_3fe5b8;
        case 0x3fe5bcu: goto label_3fe5bc;
        case 0x3fe5c0u: goto label_3fe5c0;
        case 0x3fe5c4u: goto label_3fe5c4;
        case 0x3fe5c8u: goto label_3fe5c8;
        case 0x3fe5ccu: goto label_3fe5cc;
        case 0x3fe5d0u: goto label_3fe5d0;
        case 0x3fe5d4u: goto label_3fe5d4;
        case 0x3fe5d8u: goto label_3fe5d8;
        case 0x3fe5dcu: goto label_3fe5dc;
        case 0x3fe5e0u: goto label_3fe5e0;
        case 0x3fe5e4u: goto label_3fe5e4;
        case 0x3fe5e8u: goto label_3fe5e8;
        case 0x3fe5ecu: goto label_3fe5ec;
        case 0x3fe5f0u: goto label_3fe5f0;
        case 0x3fe5f4u: goto label_3fe5f4;
        case 0x3fe5f8u: goto label_3fe5f8;
        case 0x3fe5fcu: goto label_3fe5fc;
        case 0x3fe600u: goto label_3fe600;
        case 0x3fe604u: goto label_3fe604;
        case 0x3fe608u: goto label_3fe608;
        case 0x3fe60cu: goto label_3fe60c;
        case 0x3fe610u: goto label_3fe610;
        case 0x3fe614u: goto label_3fe614;
        case 0x3fe618u: goto label_3fe618;
        case 0x3fe61cu: goto label_3fe61c;
        case 0x3fe620u: goto label_3fe620;
        case 0x3fe624u: goto label_3fe624;
        case 0x3fe628u: goto label_3fe628;
        case 0x3fe62cu: goto label_3fe62c;
        case 0x3fe630u: goto label_3fe630;
        case 0x3fe634u: goto label_3fe634;
        case 0x3fe638u: goto label_3fe638;
        case 0x3fe63cu: goto label_3fe63c;
        case 0x3fe640u: goto label_3fe640;
        case 0x3fe644u: goto label_3fe644;
        case 0x3fe648u: goto label_3fe648;
        case 0x3fe64cu: goto label_3fe64c;
        case 0x3fe650u: goto label_3fe650;
        case 0x3fe654u: goto label_3fe654;
        case 0x3fe658u: goto label_3fe658;
        case 0x3fe65cu: goto label_3fe65c;
        case 0x3fe660u: goto label_3fe660;
        case 0x3fe664u: goto label_3fe664;
        case 0x3fe668u: goto label_3fe668;
        case 0x3fe66cu: goto label_3fe66c;
        case 0x3fe670u: goto label_3fe670;
        case 0x3fe674u: goto label_3fe674;
        case 0x3fe678u: goto label_3fe678;
        case 0x3fe67cu: goto label_3fe67c;
        case 0x3fe680u: goto label_3fe680;
        case 0x3fe684u: goto label_3fe684;
        case 0x3fe688u: goto label_3fe688;
        case 0x3fe68cu: goto label_3fe68c;
        case 0x3fe690u: goto label_3fe690;
        case 0x3fe694u: goto label_3fe694;
        case 0x3fe698u: goto label_3fe698;
        case 0x3fe69cu: goto label_3fe69c;
        case 0x3fe6a0u: goto label_3fe6a0;
        case 0x3fe6a4u: goto label_3fe6a4;
        case 0x3fe6a8u: goto label_3fe6a8;
        case 0x3fe6acu: goto label_3fe6ac;
        case 0x3fe6b0u: goto label_3fe6b0;
        case 0x3fe6b4u: goto label_3fe6b4;
        case 0x3fe6b8u: goto label_3fe6b8;
        case 0x3fe6bcu: goto label_3fe6bc;
        case 0x3fe6c0u: goto label_3fe6c0;
        case 0x3fe6c4u: goto label_3fe6c4;
        case 0x3fe6c8u: goto label_3fe6c8;
        case 0x3fe6ccu: goto label_3fe6cc;
        case 0x3fe6d0u: goto label_3fe6d0;
        case 0x3fe6d4u: goto label_3fe6d4;
        case 0x3fe6d8u: goto label_3fe6d8;
        case 0x3fe6dcu: goto label_3fe6dc;
        case 0x3fe6e0u: goto label_3fe6e0;
        case 0x3fe6e4u: goto label_3fe6e4;
        case 0x3fe6e8u: goto label_3fe6e8;
        case 0x3fe6ecu: goto label_3fe6ec;
        case 0x3fe6f0u: goto label_3fe6f0;
        case 0x3fe6f4u: goto label_3fe6f4;
        case 0x3fe6f8u: goto label_3fe6f8;
        case 0x3fe6fcu: goto label_3fe6fc;
        case 0x3fe700u: goto label_3fe700;
        case 0x3fe704u: goto label_3fe704;
        case 0x3fe708u: goto label_3fe708;
        case 0x3fe70cu: goto label_3fe70c;
        case 0x3fe710u: goto label_3fe710;
        case 0x3fe714u: goto label_3fe714;
        case 0x3fe718u: goto label_3fe718;
        case 0x3fe71cu: goto label_3fe71c;
        case 0x3fe720u: goto label_3fe720;
        case 0x3fe724u: goto label_3fe724;
        case 0x3fe728u: goto label_3fe728;
        case 0x3fe72cu: goto label_3fe72c;
        case 0x3fe730u: goto label_3fe730;
        case 0x3fe734u: goto label_3fe734;
        case 0x3fe738u: goto label_3fe738;
        case 0x3fe73cu: goto label_3fe73c;
        case 0x3fe740u: goto label_3fe740;
        case 0x3fe744u: goto label_3fe744;
        case 0x3fe748u: goto label_3fe748;
        case 0x3fe74cu: goto label_3fe74c;
        case 0x3fe750u: goto label_3fe750;
        case 0x3fe754u: goto label_3fe754;
        case 0x3fe758u: goto label_3fe758;
        case 0x3fe75cu: goto label_3fe75c;
        case 0x3fe760u: goto label_3fe760;
        case 0x3fe764u: goto label_3fe764;
        case 0x3fe768u: goto label_3fe768;
        case 0x3fe76cu: goto label_3fe76c;
        case 0x3fe770u: goto label_3fe770;
        case 0x3fe774u: goto label_3fe774;
        case 0x3fe778u: goto label_3fe778;
        case 0x3fe77cu: goto label_3fe77c;
        case 0x3fe780u: goto label_3fe780;
        case 0x3fe784u: goto label_3fe784;
        case 0x3fe788u: goto label_3fe788;
        case 0x3fe78cu: goto label_3fe78c;
        case 0x3fe790u: goto label_3fe790;
        case 0x3fe794u: goto label_3fe794;
        case 0x3fe798u: goto label_3fe798;
        case 0x3fe79cu: goto label_3fe79c;
        case 0x3fe7a0u: goto label_3fe7a0;
        case 0x3fe7a4u: goto label_3fe7a4;
        case 0x3fe7a8u: goto label_3fe7a8;
        case 0x3fe7acu: goto label_3fe7ac;
        case 0x3fe7b0u: goto label_3fe7b0;
        case 0x3fe7b4u: goto label_3fe7b4;
        case 0x3fe7b8u: goto label_3fe7b8;
        case 0x3fe7bcu: goto label_3fe7bc;
        case 0x3fe7c0u: goto label_3fe7c0;
        case 0x3fe7c4u: goto label_3fe7c4;
        case 0x3fe7c8u: goto label_3fe7c8;
        case 0x3fe7ccu: goto label_3fe7cc;
        case 0x3fe7d0u: goto label_3fe7d0;
        case 0x3fe7d4u: goto label_3fe7d4;
        case 0x3fe7d8u: goto label_3fe7d8;
        case 0x3fe7dcu: goto label_3fe7dc;
        case 0x3fe7e0u: goto label_3fe7e0;
        case 0x3fe7e4u: goto label_3fe7e4;
        case 0x3fe7e8u: goto label_3fe7e8;
        case 0x3fe7ecu: goto label_3fe7ec;
        case 0x3fe7f0u: goto label_3fe7f0;
        case 0x3fe7f4u: goto label_3fe7f4;
        case 0x3fe7f8u: goto label_3fe7f8;
        case 0x3fe7fcu: goto label_3fe7fc;
        case 0x3fe800u: goto label_3fe800;
        case 0x3fe804u: goto label_3fe804;
        case 0x3fe808u: goto label_3fe808;
        case 0x3fe80cu: goto label_3fe80c;
        case 0x3fe810u: goto label_3fe810;
        case 0x3fe814u: goto label_3fe814;
        case 0x3fe818u: goto label_3fe818;
        case 0x3fe81cu: goto label_3fe81c;
        case 0x3fe820u: goto label_3fe820;
        case 0x3fe824u: goto label_3fe824;
        case 0x3fe828u: goto label_3fe828;
        case 0x3fe82cu: goto label_3fe82c;
        case 0x3fe830u: goto label_3fe830;
        case 0x3fe834u: goto label_3fe834;
        case 0x3fe838u: goto label_3fe838;
        case 0x3fe83cu: goto label_3fe83c;
        case 0x3fe840u: goto label_3fe840;
        case 0x3fe844u: goto label_3fe844;
        case 0x3fe848u: goto label_3fe848;
        case 0x3fe84cu: goto label_3fe84c;
        case 0x3fe850u: goto label_3fe850;
        case 0x3fe854u: goto label_3fe854;
        case 0x3fe858u: goto label_3fe858;
        case 0x3fe85cu: goto label_3fe85c;
        case 0x3fe860u: goto label_3fe860;
        case 0x3fe864u: goto label_3fe864;
        case 0x3fe868u: goto label_3fe868;
        case 0x3fe86cu: goto label_3fe86c;
        case 0x3fe870u: goto label_3fe870;
        case 0x3fe874u: goto label_3fe874;
        case 0x3fe878u: goto label_3fe878;
        case 0x3fe87cu: goto label_3fe87c;
        case 0x3fe880u: goto label_3fe880;
        case 0x3fe884u: goto label_3fe884;
        case 0x3fe888u: goto label_3fe888;
        case 0x3fe88cu: goto label_3fe88c;
        case 0x3fe890u: goto label_3fe890;
        case 0x3fe894u: goto label_3fe894;
        case 0x3fe898u: goto label_3fe898;
        case 0x3fe89cu: goto label_3fe89c;
        case 0x3fe8a0u: goto label_3fe8a0;
        case 0x3fe8a4u: goto label_3fe8a4;
        case 0x3fe8a8u: goto label_3fe8a8;
        case 0x3fe8acu: goto label_3fe8ac;
        case 0x3fe8b0u: goto label_3fe8b0;
        case 0x3fe8b4u: goto label_3fe8b4;
        case 0x3fe8b8u: goto label_3fe8b8;
        case 0x3fe8bcu: goto label_3fe8bc;
        case 0x3fe8c0u: goto label_3fe8c0;
        case 0x3fe8c4u: goto label_3fe8c4;
        case 0x3fe8c8u: goto label_3fe8c8;
        case 0x3fe8ccu: goto label_3fe8cc;
        case 0x3fe8d0u: goto label_3fe8d0;
        case 0x3fe8d4u: goto label_3fe8d4;
        case 0x3fe8d8u: goto label_3fe8d8;
        case 0x3fe8dcu: goto label_3fe8dc;
        case 0x3fe8e0u: goto label_3fe8e0;
        case 0x3fe8e4u: goto label_3fe8e4;
        case 0x3fe8e8u: goto label_3fe8e8;
        case 0x3fe8ecu: goto label_3fe8ec;
        case 0x3fe8f0u: goto label_3fe8f0;
        case 0x3fe8f4u: goto label_3fe8f4;
        case 0x3fe8f8u: goto label_3fe8f8;
        case 0x3fe8fcu: goto label_3fe8fc;
        case 0x3fe900u: goto label_3fe900;
        case 0x3fe904u: goto label_3fe904;
        case 0x3fe908u: goto label_3fe908;
        case 0x3fe90cu: goto label_3fe90c;
        case 0x3fe910u: goto label_3fe910;
        case 0x3fe914u: goto label_3fe914;
        case 0x3fe918u: goto label_3fe918;
        case 0x3fe91cu: goto label_3fe91c;
        case 0x3fe920u: goto label_3fe920;
        case 0x3fe924u: goto label_3fe924;
        case 0x3fe928u: goto label_3fe928;
        case 0x3fe92cu: goto label_3fe92c;
        case 0x3fe930u: goto label_3fe930;
        case 0x3fe934u: goto label_3fe934;
        case 0x3fe938u: goto label_3fe938;
        case 0x3fe93cu: goto label_3fe93c;
        case 0x3fe940u: goto label_3fe940;
        case 0x3fe944u: goto label_3fe944;
        case 0x3fe948u: goto label_3fe948;
        case 0x3fe94cu: goto label_3fe94c;
        case 0x3fe950u: goto label_3fe950;
        case 0x3fe954u: goto label_3fe954;
        case 0x3fe958u: goto label_3fe958;
        case 0x3fe95cu: goto label_3fe95c;
        case 0x3fe960u: goto label_3fe960;
        case 0x3fe964u: goto label_3fe964;
        case 0x3fe968u: goto label_3fe968;
        case 0x3fe96cu: goto label_3fe96c;
        case 0x3fe970u: goto label_3fe970;
        case 0x3fe974u: goto label_3fe974;
        case 0x3fe978u: goto label_3fe978;
        case 0x3fe97cu: goto label_3fe97c;
        case 0x3fe980u: goto label_3fe980;
        case 0x3fe984u: goto label_3fe984;
        case 0x3fe988u: goto label_3fe988;
        case 0x3fe98cu: goto label_3fe98c;
        case 0x3fe990u: goto label_3fe990;
        case 0x3fe994u: goto label_3fe994;
        case 0x3fe998u: goto label_3fe998;
        case 0x3fe99cu: goto label_3fe99c;
        case 0x3fe9a0u: goto label_3fe9a0;
        case 0x3fe9a4u: goto label_3fe9a4;
        case 0x3fe9a8u: goto label_3fe9a8;
        case 0x3fe9acu: goto label_3fe9ac;
        case 0x3fe9b0u: goto label_3fe9b0;
        case 0x3fe9b4u: goto label_3fe9b4;
        case 0x3fe9b8u: goto label_3fe9b8;
        case 0x3fe9bcu: goto label_3fe9bc;
        case 0x3fe9c0u: goto label_3fe9c0;
        case 0x3fe9c4u: goto label_3fe9c4;
        case 0x3fe9c8u: goto label_3fe9c8;
        case 0x3fe9ccu: goto label_3fe9cc;
        case 0x3fe9d0u: goto label_3fe9d0;
        case 0x3fe9d4u: goto label_3fe9d4;
        case 0x3fe9d8u: goto label_3fe9d8;
        case 0x3fe9dcu: goto label_3fe9dc;
        case 0x3fe9e0u: goto label_3fe9e0;
        case 0x3fe9e4u: goto label_3fe9e4;
        case 0x3fe9e8u: goto label_3fe9e8;
        case 0x3fe9ecu: goto label_3fe9ec;
        case 0x3fe9f0u: goto label_3fe9f0;
        case 0x3fe9f4u: goto label_3fe9f4;
        case 0x3fe9f8u: goto label_3fe9f8;
        case 0x3fe9fcu: goto label_3fe9fc;
        case 0x3fea00u: goto label_3fea00;
        case 0x3fea04u: goto label_3fea04;
        case 0x3fea08u: goto label_3fea08;
        case 0x3fea0cu: goto label_3fea0c;
        case 0x3fea10u: goto label_3fea10;
        case 0x3fea14u: goto label_3fea14;
        case 0x3fea18u: goto label_3fea18;
        case 0x3fea1cu: goto label_3fea1c;
        case 0x3fea20u: goto label_3fea20;
        case 0x3fea24u: goto label_3fea24;
        case 0x3fea28u: goto label_3fea28;
        case 0x3fea2cu: goto label_3fea2c;
        case 0x3fea30u: goto label_3fea30;
        case 0x3fea34u: goto label_3fea34;
        case 0x3fea38u: goto label_3fea38;
        case 0x3fea3cu: goto label_3fea3c;
        case 0x3fea40u: goto label_3fea40;
        case 0x3fea44u: goto label_3fea44;
        case 0x3fea48u: goto label_3fea48;
        case 0x3fea4cu: goto label_3fea4c;
        case 0x3fea50u: goto label_3fea50;
        case 0x3fea54u: goto label_3fea54;
        case 0x3fea58u: goto label_3fea58;
        case 0x3fea5cu: goto label_3fea5c;
        case 0x3fea60u: goto label_3fea60;
        case 0x3fea64u: goto label_3fea64;
        case 0x3fea68u: goto label_3fea68;
        case 0x3fea6cu: goto label_3fea6c;
        case 0x3fea70u: goto label_3fea70;
        case 0x3fea74u: goto label_3fea74;
        case 0x3fea78u: goto label_3fea78;
        case 0x3fea7cu: goto label_3fea7c;
        case 0x3fea80u: goto label_3fea80;
        case 0x3fea84u: goto label_3fea84;
        case 0x3fea88u: goto label_3fea88;
        case 0x3fea8cu: goto label_3fea8c;
        case 0x3fea90u: goto label_3fea90;
        case 0x3fea94u: goto label_3fea94;
        case 0x3fea98u: goto label_3fea98;
        case 0x3fea9cu: goto label_3fea9c;
        case 0x3feaa0u: goto label_3feaa0;
        case 0x3feaa4u: goto label_3feaa4;
        case 0x3feaa8u: goto label_3feaa8;
        case 0x3feaacu: goto label_3feaac;
        case 0x3feab0u: goto label_3feab0;
        case 0x3feab4u: goto label_3feab4;
        case 0x3feab8u: goto label_3feab8;
        case 0x3feabcu: goto label_3feabc;
        case 0x3feac0u: goto label_3feac0;
        case 0x3feac4u: goto label_3feac4;
        case 0x3feac8u: goto label_3feac8;
        case 0x3feaccu: goto label_3feacc;
        case 0x3fead0u: goto label_3fead0;
        case 0x3fead4u: goto label_3fead4;
        case 0x3fead8u: goto label_3fead8;
        case 0x3feadcu: goto label_3feadc;
        case 0x3feae0u: goto label_3feae0;
        case 0x3feae4u: goto label_3feae4;
        case 0x3feae8u: goto label_3feae8;
        case 0x3feaecu: goto label_3feaec;
        case 0x3feaf0u: goto label_3feaf0;
        case 0x3feaf4u: goto label_3feaf4;
        case 0x3feaf8u: goto label_3feaf8;
        case 0x3feafcu: goto label_3feafc;
        case 0x3feb00u: goto label_3feb00;
        case 0x3feb04u: goto label_3feb04;
        case 0x3feb08u: goto label_3feb08;
        case 0x3feb0cu: goto label_3feb0c;
        case 0x3feb10u: goto label_3feb10;
        case 0x3feb14u: goto label_3feb14;
        case 0x3feb18u: goto label_3feb18;
        case 0x3feb1cu: goto label_3feb1c;
        case 0x3feb20u: goto label_3feb20;
        case 0x3feb24u: goto label_3feb24;
        case 0x3feb28u: goto label_3feb28;
        case 0x3feb2cu: goto label_3feb2c;
        case 0x3feb30u: goto label_3feb30;
        case 0x3feb34u: goto label_3feb34;
        case 0x3feb38u: goto label_3feb38;
        case 0x3feb3cu: goto label_3feb3c;
        case 0x3feb40u: goto label_3feb40;
        case 0x3feb44u: goto label_3feb44;
        case 0x3feb48u: goto label_3feb48;
        case 0x3feb4cu: goto label_3feb4c;
        case 0x3feb50u: goto label_3feb50;
        case 0x3feb54u: goto label_3feb54;
        case 0x3feb58u: goto label_3feb58;
        case 0x3feb5cu: goto label_3feb5c;
        case 0x3feb60u: goto label_3feb60;
        case 0x3feb64u: goto label_3feb64;
        case 0x3feb68u: goto label_3feb68;
        case 0x3feb6cu: goto label_3feb6c;
        case 0x3feb70u: goto label_3feb70;
        case 0x3feb74u: goto label_3feb74;
        case 0x3feb78u: goto label_3feb78;
        case 0x3feb7cu: goto label_3feb7c;
        case 0x3feb80u: goto label_3feb80;
        case 0x3feb84u: goto label_3feb84;
        case 0x3feb88u: goto label_3feb88;
        case 0x3feb8cu: goto label_3feb8c;
        case 0x3feb90u: goto label_3feb90;
        case 0x3feb94u: goto label_3feb94;
        case 0x3feb98u: goto label_3feb98;
        case 0x3feb9cu: goto label_3feb9c;
        case 0x3feba0u: goto label_3feba0;
        case 0x3feba4u: goto label_3feba4;
        case 0x3feba8u: goto label_3feba8;
        case 0x3febacu: goto label_3febac;
        case 0x3febb0u: goto label_3febb0;
        case 0x3febb4u: goto label_3febb4;
        case 0x3febb8u: goto label_3febb8;
        case 0x3febbcu: goto label_3febbc;
        case 0x3febc0u: goto label_3febc0;
        case 0x3febc4u: goto label_3febc4;
        case 0x3febc8u: goto label_3febc8;
        case 0x3febccu: goto label_3febcc;
        case 0x3febd0u: goto label_3febd0;
        case 0x3febd4u: goto label_3febd4;
        case 0x3febd8u: goto label_3febd8;
        case 0x3febdcu: goto label_3febdc;
        case 0x3febe0u: goto label_3febe0;
        case 0x3febe4u: goto label_3febe4;
        case 0x3febe8u: goto label_3febe8;
        case 0x3febecu: goto label_3febec;
        case 0x3febf0u: goto label_3febf0;
        case 0x3febf4u: goto label_3febf4;
        case 0x3febf8u: goto label_3febf8;
        case 0x3febfcu: goto label_3febfc;
        case 0x3fec00u: goto label_3fec00;
        case 0x3fec04u: goto label_3fec04;
        case 0x3fec08u: goto label_3fec08;
        case 0x3fec0cu: goto label_3fec0c;
        case 0x3fec10u: goto label_3fec10;
        case 0x3fec14u: goto label_3fec14;
        case 0x3fec18u: goto label_3fec18;
        case 0x3fec1cu: goto label_3fec1c;
        case 0x3fec20u: goto label_3fec20;
        case 0x3fec24u: goto label_3fec24;
        case 0x3fec28u: goto label_3fec28;
        case 0x3fec2cu: goto label_3fec2c;
        case 0x3fec30u: goto label_3fec30;
        case 0x3fec34u: goto label_3fec34;
        case 0x3fec38u: goto label_3fec38;
        case 0x3fec3cu: goto label_3fec3c;
        case 0x3fec40u: goto label_3fec40;
        case 0x3fec44u: goto label_3fec44;
        case 0x3fec48u: goto label_3fec48;
        case 0x3fec4cu: goto label_3fec4c;
        case 0x3fec50u: goto label_3fec50;
        case 0x3fec54u: goto label_3fec54;
        case 0x3fec58u: goto label_3fec58;
        case 0x3fec5cu: goto label_3fec5c;
        case 0x3fec60u: goto label_3fec60;
        case 0x3fec64u: goto label_3fec64;
        case 0x3fec68u: goto label_3fec68;
        case 0x3fec6cu: goto label_3fec6c;
        case 0x3fec70u: goto label_3fec70;
        case 0x3fec74u: goto label_3fec74;
        case 0x3fec78u: goto label_3fec78;
        case 0x3fec7cu: goto label_3fec7c;
        case 0x3fec80u: goto label_3fec80;
        case 0x3fec84u: goto label_3fec84;
        case 0x3fec88u: goto label_3fec88;
        case 0x3fec8cu: goto label_3fec8c;
        case 0x3fec90u: goto label_3fec90;
        case 0x3fec94u: goto label_3fec94;
        case 0x3fec98u: goto label_3fec98;
        case 0x3fec9cu: goto label_3fec9c;
        case 0x3feca0u: goto label_3feca0;
        case 0x3feca4u: goto label_3feca4;
        case 0x3feca8u: goto label_3feca8;
        case 0x3fecacu: goto label_3fecac;
        case 0x3fecb0u: goto label_3fecb0;
        case 0x3fecb4u: goto label_3fecb4;
        case 0x3fecb8u: goto label_3fecb8;
        case 0x3fecbcu: goto label_3fecbc;
        case 0x3fecc0u: goto label_3fecc0;
        case 0x3fecc4u: goto label_3fecc4;
        case 0x3fecc8u: goto label_3fecc8;
        case 0x3fecccu: goto label_3feccc;
        case 0x3fecd0u: goto label_3fecd0;
        case 0x3fecd4u: goto label_3fecd4;
        case 0x3fecd8u: goto label_3fecd8;
        case 0x3fecdcu: goto label_3fecdc;
        case 0x3fece0u: goto label_3fece0;
        case 0x3fece4u: goto label_3fece4;
        case 0x3fece8u: goto label_3fece8;
        case 0x3fececu: goto label_3fecec;
        case 0x3fecf0u: goto label_3fecf0;
        case 0x3fecf4u: goto label_3fecf4;
        case 0x3fecf8u: goto label_3fecf8;
        case 0x3fecfcu: goto label_3fecfc;
        case 0x3fed00u: goto label_3fed00;
        case 0x3fed04u: goto label_3fed04;
        case 0x3fed08u: goto label_3fed08;
        case 0x3fed0cu: goto label_3fed0c;
        case 0x3fed10u: goto label_3fed10;
        case 0x3fed14u: goto label_3fed14;
        case 0x3fed18u: goto label_3fed18;
        case 0x3fed1cu: goto label_3fed1c;
        case 0x3fed20u: goto label_3fed20;
        case 0x3fed24u: goto label_3fed24;
        case 0x3fed28u: goto label_3fed28;
        case 0x3fed2cu: goto label_3fed2c;
        case 0x3fed30u: goto label_3fed30;
        case 0x3fed34u: goto label_3fed34;
        case 0x3fed38u: goto label_3fed38;
        case 0x3fed3cu: goto label_3fed3c;
        case 0x3fed40u: goto label_3fed40;
        case 0x3fed44u: goto label_3fed44;
        case 0x3fed48u: goto label_3fed48;
        case 0x3fed4cu: goto label_3fed4c;
        case 0x3fed50u: goto label_3fed50;
        case 0x3fed54u: goto label_3fed54;
        case 0x3fed58u: goto label_3fed58;
        case 0x3fed5cu: goto label_3fed5c;
        case 0x3fed60u: goto label_3fed60;
        case 0x3fed64u: goto label_3fed64;
        case 0x3fed68u: goto label_3fed68;
        case 0x3fed6cu: goto label_3fed6c;
        case 0x3fed70u: goto label_3fed70;
        case 0x3fed74u: goto label_3fed74;
        case 0x3fed78u: goto label_3fed78;
        case 0x3fed7cu: goto label_3fed7c;
        case 0x3fed80u: goto label_3fed80;
        case 0x3fed84u: goto label_3fed84;
        case 0x3fed88u: goto label_3fed88;
        case 0x3fed8cu: goto label_3fed8c;
        case 0x3fed90u: goto label_3fed90;
        case 0x3fed94u: goto label_3fed94;
        case 0x3fed98u: goto label_3fed98;
        case 0x3fed9cu: goto label_3fed9c;
        case 0x3feda0u: goto label_3feda0;
        case 0x3feda4u: goto label_3feda4;
        case 0x3feda8u: goto label_3feda8;
        case 0x3fedacu: goto label_3fedac;
        case 0x3fedb0u: goto label_3fedb0;
        case 0x3fedb4u: goto label_3fedb4;
        case 0x3fedb8u: goto label_3fedb8;
        case 0x3fedbcu: goto label_3fedbc;
        case 0x3fedc0u: goto label_3fedc0;
        case 0x3fedc4u: goto label_3fedc4;
        case 0x3fedc8u: goto label_3fedc8;
        case 0x3fedccu: goto label_3fedcc;
        case 0x3fedd0u: goto label_3fedd0;
        case 0x3fedd4u: goto label_3fedd4;
        case 0x3fedd8u: goto label_3fedd8;
        case 0x3feddcu: goto label_3feddc;
        case 0x3fede0u: goto label_3fede0;
        case 0x3fede4u: goto label_3fede4;
        case 0x3fede8u: goto label_3fede8;
        case 0x3fedecu: goto label_3fedec;
        case 0x3fedf0u: goto label_3fedf0;
        case 0x3fedf4u: goto label_3fedf4;
        case 0x3fedf8u: goto label_3fedf8;
        case 0x3fedfcu: goto label_3fedfc;
        case 0x3fee00u: goto label_3fee00;
        case 0x3fee04u: goto label_3fee04;
        case 0x3fee08u: goto label_3fee08;
        case 0x3fee0cu: goto label_3fee0c;
        case 0x3fee10u: goto label_3fee10;
        case 0x3fee14u: goto label_3fee14;
        case 0x3fee18u: goto label_3fee18;
        case 0x3fee1cu: goto label_3fee1c;
        default: break;
    }

    ctx->pc = 0x3fdfa0u;

label_3fdfa0:
    // 0x3fdfa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3fdfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3fdfa4:
    // 0x3fdfa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3fdfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3fdfa8:
    // 0x3fdfa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fdfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fdfac:
    // 0x3fdfac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fdfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fdfb0:
    // 0x3fdfb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3fdfb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fdfb4:
    // 0x3fdfb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fdfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fdfb8:
    // 0x3fdfb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3fdfb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fdfbc:
    // 0x3fdfbc: 0xac8600ec  sw          $a2, 0xEC($a0)
    ctx->pc = 0x3fdfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 6));
label_3fdfc0:
    // 0x3fdfc0: 0x10e00024  beqz        $a3, . + 4 + (0x24 << 2)
label_3fdfc4:
    if (ctx->pc == 0x3FDFC4u) {
        ctx->pc = 0x3FDFC4u;
            // 0x3fdfc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FDFC8u;
        goto label_3fdfc8;
    }
    ctx->pc = 0x3FDFC0u;
    {
        const bool branch_taken_0x3fdfc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDFC0u;
            // 0x3fdfc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdfc0) {
            ctx->pc = 0x3FE054u;
            goto label_3fe054;
        }
    }
    ctx->pc = 0x3FDFC8u;
label_3fdfc8:
    // 0x3fdfc8: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x3fdfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fdfcc:
    // 0x3fdfcc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3fdfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3fdfd0:
    // 0x3fdfd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fdfd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fdfd4:
    // 0x3fdfd4: 0x0  nop
    ctx->pc = 0x3fdfd4u;
    // NOP
label_3fdfd8:
    // 0x3fdfd8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3fdfd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fdfdc:
    // 0x3fdfdc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3fdfe0:
    if (ctx->pc == 0x3FDFE0u) {
        ctx->pc = 0x3FDFE0u;
            // 0x3fdfe0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3FDFE4u;
        goto label_3fdfe4;
    }
    ctx->pc = 0x3FDFDCu;
    {
        const bool branch_taken_0x3fdfdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fdfdc) {
            ctx->pc = 0x3FDFE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDFDCu;
            // 0x3fdfe0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FDFF4u;
            goto label_3fdff4;
        }
    }
    ctx->pc = 0x3FDFE4u;
label_3fdfe4:
    // 0x3fdfe4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fdfe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3fdfe8:
    // 0x3fdfe8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3fdfe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3fdfec:
    // 0x3fdfec: 0x10000007  b           . + 4 + (0x7 << 2)
label_3fdff0:
    if (ctx->pc == 0x3FDFF0u) {
        ctx->pc = 0x3FDFF0u;
            // 0x3fdff0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3FDFF4u;
        goto label_3fdff4;
    }
    ctx->pc = 0x3FDFECu;
    {
        const bool branch_taken_0x3fdfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDFECu;
            // 0x3fdff0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdfec) {
            ctx->pc = 0x3FE00Cu;
            goto label_3fe00c;
        }
    }
    ctx->pc = 0x3FDFF4u;
label_3fdff4:
    // 0x3fdff4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3fdff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3fdff8:
    // 0x3fdff8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fdff8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3fdffc:
    // 0x3fdffc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3fdffcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3fe000:
    // 0x3fe000: 0x0  nop
    ctx->pc = 0x3fe000u;
    // NOP
label_3fe004:
    // 0x3fe004: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3fe004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3fe008:
    // 0x3fe008: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3fe008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fe00c:
    // 0x3fe00c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_3fe010:
    if (ctx->pc == 0x3FE010u) {
        ctx->pc = 0x3FE010u;
            // 0x3fe010: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->pc = 0x3FE014u;
        goto label_3fe014;
    }
    ctx->pc = 0x3FE00Cu;
    {
        const bool branch_taken_0x3fe00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe00c) {
            ctx->pc = 0x3FE010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE00Cu;
            // 0x3fe010: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FE040u;
            goto label_3fe040;
        }
    }
    ctx->pc = 0x3FE014u;
label_3fe014:
    // 0x3fe014: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3fe014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3fe018:
    // 0x3fe018: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_3fe01c:
    if (ctx->pc == 0x3FE01Cu) {
        ctx->pc = 0x3FE01Cu;
            // 0x3fe01c: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->pc = 0x3FE020u;
        goto label_3fe020;
    }
    ctx->pc = 0x3FE018u;
    {
        const bool branch_taken_0x3fe018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe018) {
            ctx->pc = 0x3FE01Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE018u;
            // 0x3fe01c: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FE028u;
            goto label_3fe028;
        }
    }
    ctx->pc = 0x3FE020u;
label_3fe020:
    // 0x3fe020: 0x1000000d  b           . + 4 + (0xD << 2)
label_3fe024:
    if (ctx->pc == 0x3FE024u) {
        ctx->pc = 0x3FE024u;
            // 0x3fe024: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x3FE028u;
        goto label_3fe028;
    }
    ctx->pc = 0x3FE020u;
    {
        const bool branch_taken_0x3fe020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE020u;
            // 0x3fe024: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe020) {
            ctx->pc = 0x3FE058u;
            goto label_3fe058;
        }
    }
    ctx->pc = 0x3FE028u;
label_3fe028:
    // 0x3fe028: 0xae4200d8  sw          $v0, 0xD8($s2)
    ctx->pc = 0x3fe028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
label_3fe02c:
    // 0x3fe02c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x3fe02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_3fe030:
    // 0x3fe030: 0xae4200dc  sw          $v0, 0xDC($s2)
    ctx->pc = 0x3fe030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
label_3fe034:
    // 0x3fe034: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x3fe034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_3fe038:
    // 0x3fe038: 0x10000006  b           . + 4 + (0x6 << 2)
label_3fe03c:
    if (ctx->pc == 0x3FE03Cu) {
        ctx->pc = 0x3FE03Cu;
            // 0x3fe03c: 0xae4200e0  sw          $v0, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x3FE040u;
        goto label_3fe040;
    }
    ctx->pc = 0x3FE038u;
    {
        const bool branch_taken_0x3fe038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE038u;
            // 0x3fe03c: 0xae4200e0  sw          $v0, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe038) {
            ctx->pc = 0x3FE054u;
            goto label_3fe054;
        }
    }
    ctx->pc = 0x3FE040u;
label_3fe040:
    // 0x3fe040: 0xae4200d8  sw          $v0, 0xD8($s2)
    ctx->pc = 0x3fe040u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
label_3fe044:
    // 0x3fe044: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x3fe044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_3fe048:
    // 0x3fe048: 0xae4200dc  sw          $v0, 0xDC($s2)
    ctx->pc = 0x3fe048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
label_3fe04c:
    // 0x3fe04c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x3fe04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_3fe050:
    // 0x3fe050: 0xae4200e0  sw          $v0, 0xE0($s2)
    ctx->pc = 0x3fe050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 2));
label_3fe054:
    // 0x3fe054: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3fe054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3fe058:
    // 0x3fe058: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x3fe058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3fe05c:
    // 0x3fe05c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3fe05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fe060:
    // 0x3fe060: 0xa243004c  sb          $v1, 0x4C($s2)
    ctx->pc = 0x3fe060u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 3));
label_3fe064:
    // 0x3fe064: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3fe064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3fe068:
    // 0x3fe068: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3fe068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_3fe06c:
    // 0x3fe06c: 0xc04cbd8  jal         func_132F60
label_3fe070:
    if (ctx->pc == 0x3FE070u) {
        ctx->pc = 0x3FE070u;
            // 0x3fe070: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3FE074u;
        goto label_3fe074;
    }
    ctx->pc = 0x3FE06Cu;
    SET_GPR_U32(ctx, 31, 0x3FE074u);
    ctx->pc = 0x3FE070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE06Cu;
            // 0x3fe070: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE074u; }
        if (ctx->pc != 0x3FE074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE074u; }
        if (ctx->pc != 0x3FE074u) { return; }
    }
    ctx->pc = 0x3FE074u;
label_3fe074:
    // 0x3fe074: 0xc040138  jal         func_1004E0
label_3fe078:
    if (ctx->pc == 0x3FE078u) {
        ctx->pc = 0x3FE078u;
            // 0x3fe078: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x3FE07Cu;
        goto label_3fe07c;
    }
    ctx->pc = 0x3FE074u;
    SET_GPR_U32(ctx, 31, 0x3FE07Cu);
    ctx->pc = 0x3FE078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE074u;
            // 0x3fe078: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE07Cu; }
        if (ctx->pc != 0x3FE07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE07Cu; }
        if (ctx->pc != 0x3FE07Cu) { return; }
    }
    ctx->pc = 0x3FE07Cu;
label_3fe07c:
    // 0x3fe07c: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x3fe07cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
label_3fe080:
    // 0x3fe080: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3fe080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fe084:
    // 0x3fe084: 0xae5100e8  sw          $s1, 0xE8($s2)
    ctx->pc = 0x3fe084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 17));
label_3fe088:
    // 0x3fe088: 0x8e4300e4  lw          $v1, 0xE4($s2)
    ctx->pc = 0x3fe088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_3fe08c:
    // 0x3fe08c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3fe08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3fe090:
    // 0x3fe090: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x3fe090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3fe094:
    // 0x3fe094: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3fe094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3fe098:
    // 0x3fe098: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3fe098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3fe09c:
    // 0x3fe09c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3fe0a0:
    if (ctx->pc == 0x3FE0A0u) {
        ctx->pc = 0x3FE0A0u;
            // 0x3fe0a0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3FE0A4u;
        goto label_3fe0a4;
    }
    ctx->pc = 0x3FE09Cu;
    {
        const bool branch_taken_0x3fe09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FE0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE09Cu;
            // 0x3fe0a0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe09c) {
            ctx->pc = 0x3FE088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fe088;
        }
    }
    ctx->pc = 0x3FE0A4u;
label_3fe0a4:
    // 0x3fe0a4: 0xc040180  jal         func_100600
label_3fe0a8:
    if (ctx->pc == 0x3FE0A8u) {
        ctx->pc = 0x3FE0A8u;
            // 0x3fe0a8: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x3FE0ACu;
        goto label_3fe0ac;
    }
    ctx->pc = 0x3FE0A4u;
    SET_GPR_U32(ctx, 31, 0x3FE0ACu);
    ctx->pc = 0x3FE0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE0A4u;
            // 0x3fe0a8: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE0ACu; }
        if (ctx->pc != 0x3FE0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE0ACu; }
        if (ctx->pc != 0x3FE0ACu) { return; }
    }
    ctx->pc = 0x3FE0ACu;
label_3fe0ac:
    // 0x3fe0ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fe0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fe0b0:
    // 0x3fe0b0: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_3fe0b4:
    if (ctx->pc == 0x3FE0B4u) {
        ctx->pc = 0x3FE0B4u;
            // 0x3fe0b4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3FE0B8u;
        goto label_3fe0b8;
    }
    ctx->pc = 0x3FE0B0u;
    {
        const bool branch_taken_0x3fe0b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe0b0) {
            ctx->pc = 0x3FE0B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE0B0u;
            // 0x3fe0b4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FE0C8u;
            goto label_3fe0c8;
        }
    }
    ctx->pc = 0x3FE0B8u;
label_3fe0b8:
    // 0x3fe0b8: 0xc0feeb8  jal         func_3FBAE0
label_3fe0bc:
    if (ctx->pc == 0x3FE0BCu) {
        ctx->pc = 0x3FE0BCu;
            // 0x3fe0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE0C0u;
        goto label_3fe0c0;
    }
    ctx->pc = 0x3FE0B8u;
    SET_GPR_U32(ctx, 31, 0x3FE0C0u);
    ctx->pc = 0x3FE0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE0B8u;
            // 0x3fe0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FBAE0u;
    if (runtime->hasFunction(0x3FBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x3FBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE0C0u; }
        if (ctx->pc != 0x3FE0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FBAE0_0x3fbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE0C0u; }
        if (ctx->pc != 0x3FE0C0u) { return; }
    }
    ctx->pc = 0x3FE0C0u;
label_3fe0c0:
    // 0x3fe0c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fe0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fe0c4:
    // 0x3fe0c4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3fe0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3fe0c8:
    // 0x3fe0c8: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3fe0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3fe0cc:
    // 0x3fe0cc: 0xc04cc04  jal         func_133010
label_3fe0d0:
    if (ctx->pc == 0x3FE0D0u) {
        ctx->pc = 0x3FE0D0u;
            // 0x3fe0d0: 0xae50010c  sw          $s0, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 16));
        ctx->pc = 0x3FE0D4u;
        goto label_3fe0d4;
    }
    ctx->pc = 0x3FE0CCu;
    SET_GPR_U32(ctx, 31, 0x3FE0D4u);
    ctx->pc = 0x3FE0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE0CCu;
            // 0x3fe0d0: 0xae50010c  sw          $s0, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE0D4u; }
        if (ctx->pc != 0x3FE0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE0D4u; }
        if (ctx->pc != 0x3FE0D4u) { return; }
    }
    ctx->pc = 0x3FE0D4u;
label_3fe0d4:
    // 0x3fe0d4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3fe0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3fe0d8:
    // 0x3fe0d8: 0xc04c720  jal         func_131C80
label_3fe0dc:
    if (ctx->pc == 0x3FE0DCu) {
        ctx->pc = 0x3FE0DCu;
            // 0x3fe0dc: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x3FE0E0u;
        goto label_3fe0e0;
    }
    ctx->pc = 0x3FE0D8u;
    SET_GPR_U32(ctx, 31, 0x3FE0E0u);
    ctx->pc = 0x3FE0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE0D8u;
            // 0x3fe0dc: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE0E0u; }
        if (ctx->pc != 0x3FE0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE0E0u; }
        if (ctx->pc != 0x3FE0E0u) { return; }
    }
    ctx->pc = 0x3FE0E0u;
label_3fe0e0:
    // 0x3fe0e0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3fe0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3fe0e4:
    // 0x3fe0e4: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
label_3fe0e8:
    if (ctx->pc == 0x3FE0E8u) {
        ctx->pc = 0x3FE0E8u;
            // 0x3fe0e8: 0x8e44010c  lw          $a0, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->pc = 0x3FE0ECu;
        goto label_3fe0ec;
    }
    ctx->pc = 0x3FE0E4u;
    {
        const bool branch_taken_0x3fe0e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe0e4) {
            ctx->pc = 0x3FE0E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE0E4u;
            // 0x3fe0e8: 0x8e44010c  lw          $a0, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FE138u;
            goto label_3fe138;
        }
    }
    ctx->pc = 0x3FE0ECu;
label_3fe0ec:
    // 0x3fe0ec: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x3fe0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fe0f0:
    // 0x3fe0f0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3fe0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fe0f4:
    // 0x3fe0f4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3fe0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fe0f8:
    // 0x3fe0f8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3fe0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fe0fc:
    // 0x3fe0fc: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3fe0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fe100:
    // 0x3fe100: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3fe100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3fe104:
    // 0x3fe104: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3fe104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3fe108:
    // 0x3fe108: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x3fe108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3fe10c:
    // 0x3fe10c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x3fe10cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3fe110:
    // 0x3fe110: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x3fe110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3fe114:
    // 0x3fe114: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x3fe114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fe118:
    // 0x3fe118: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3fe118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fe11c:
    // 0x3fe11c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3fe11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fe120:
    // 0x3fe120: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3fe120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3fe124:
    // 0x3fe124: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x3fe124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3fe128:
    // 0x3fe128: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x3fe128u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3fe12c:
    // 0x3fe12c: 0xc0892b0  jal         func_224AC0
label_3fe130:
    if (ctx->pc == 0x3FE130u) {
        ctx->pc = 0x3FE130u;
            // 0x3fe130: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x3FE134u;
        goto label_3fe134;
    }
    ctx->pc = 0x3FE12Cu;
    SET_GPR_U32(ctx, 31, 0x3FE134u);
    ctx->pc = 0x3FE130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE12Cu;
            // 0x3fe130: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE134u; }
        if (ctx->pc != 0x3FE134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE134u; }
        if (ctx->pc != 0x3FE134u) { return; }
    }
    ctx->pc = 0x3FE134u;
label_3fe134:
    // 0x3fe134: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x3fe134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_3fe138:
    // 0x3fe138: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3fe138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fe13c:
    // 0x3fe13c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3fe13cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3fe140:
    // 0x3fe140: 0x320f809  jalr        $t9
label_3fe144:
    if (ctx->pc == 0x3FE144u) {
        ctx->pc = 0x3FE148u;
        goto label_3fe148;
    }
    ctx->pc = 0x3FE140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FE148u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FE148u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FE148u; }
            if (ctx->pc != 0x3FE148u) { return; }
        }
        }
    }
    ctx->pc = 0x3FE148u;
label_3fe148:
    // 0x3fe148: 0xc040180  jal         func_100600
label_3fe14c:
    if (ctx->pc == 0x3FE14Cu) {
        ctx->pc = 0x3FE14Cu;
            // 0x3fe14c: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x3FE150u;
        goto label_3fe150;
    }
    ctx->pc = 0x3FE148u;
    SET_GPR_U32(ctx, 31, 0x3FE150u);
    ctx->pc = 0x3FE14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE148u;
            // 0x3fe14c: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE150u; }
        if (ctx->pc != 0x3FE150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE150u; }
        if (ctx->pc != 0x3FE150u) { return; }
    }
    ctx->pc = 0x3FE150u;
label_3fe150:
    // 0x3fe150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fe150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fe154:
    // 0x3fe154: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_3fe158:
    if (ctx->pc == 0x3FE158u) {
        ctx->pc = 0x3FE158u;
            // 0x3fe158: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3FE15Cu;
        goto label_3fe15c;
    }
    ctx->pc = 0x3FE154u;
    {
        const bool branch_taken_0x3fe154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe154) {
            ctx->pc = 0x3FE158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE154u;
            // 0x3fe158: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FE16Cu;
            goto label_3fe16c;
        }
    }
    ctx->pc = 0x3FE15Cu;
label_3fe15c:
    // 0x3fe15c: 0xc0feeb8  jal         func_3FBAE0
label_3fe160:
    if (ctx->pc == 0x3FE160u) {
        ctx->pc = 0x3FE160u;
            // 0x3fe160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE164u;
        goto label_3fe164;
    }
    ctx->pc = 0x3FE15Cu;
    SET_GPR_U32(ctx, 31, 0x3FE164u);
    ctx->pc = 0x3FE160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE15Cu;
            // 0x3fe160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FBAE0u;
    if (runtime->hasFunction(0x3FBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x3FBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE164u; }
        if (ctx->pc != 0x3FE164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FBAE0_0x3fbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE164u; }
        if (ctx->pc != 0x3FE164u) { return; }
    }
    ctx->pc = 0x3FE164u;
label_3fe164:
    // 0x3fe164: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fe164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fe168:
    // 0x3fe168: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3fe168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3fe16c:
    // 0x3fe16c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3fe16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3fe170:
    // 0x3fe170: 0xc04cc04  jal         func_133010
label_3fe174:
    if (ctx->pc == 0x3FE174u) {
        ctx->pc = 0x3FE174u;
            // 0x3fe174: 0xae500110  sw          $s0, 0x110($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 16));
        ctx->pc = 0x3FE178u;
        goto label_3fe178;
    }
    ctx->pc = 0x3FE170u;
    SET_GPR_U32(ctx, 31, 0x3FE178u);
    ctx->pc = 0x3FE174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE170u;
            // 0x3fe174: 0xae500110  sw          $s0, 0x110($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE178u; }
        if (ctx->pc != 0x3FE178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE178u; }
        if (ctx->pc != 0x3FE178u) { return; }
    }
    ctx->pc = 0x3FE178u;
label_3fe178:
    // 0x3fe178: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3fe178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3fe17c:
    // 0x3fe17c: 0xc04c720  jal         func_131C80
label_3fe180:
    if (ctx->pc == 0x3FE180u) {
        ctx->pc = 0x3FE180u;
            // 0x3fe180: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x3FE184u;
        goto label_3fe184;
    }
    ctx->pc = 0x3FE17Cu;
    SET_GPR_U32(ctx, 31, 0x3FE184u);
    ctx->pc = 0x3FE180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE17Cu;
            // 0x3fe180: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE184u; }
        if (ctx->pc != 0x3FE184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE184u; }
        if (ctx->pc != 0x3FE184u) { return; }
    }
    ctx->pc = 0x3FE184u;
label_3fe184:
    // 0x3fe184: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3fe184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3fe188:
    // 0x3fe188: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
label_3fe18c:
    if (ctx->pc == 0x3FE18Cu) {
        ctx->pc = 0x3FE18Cu;
            // 0x3fe18c: 0x8e440110  lw          $a0, 0x110($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
        ctx->pc = 0x3FE190u;
        goto label_3fe190;
    }
    ctx->pc = 0x3FE188u;
    {
        const bool branch_taken_0x3fe188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe188) {
            ctx->pc = 0x3FE18Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE188u;
            // 0x3fe18c: 0x8e440110  lw          $a0, 0x110($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FE1DCu;
            goto label_3fe1dc;
        }
    }
    ctx->pc = 0x3FE190u;
label_3fe190:
    // 0x3fe190: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x3fe190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fe194:
    // 0x3fe194: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3fe194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fe198:
    // 0x3fe198: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3fe198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fe19c:
    // 0x3fe19c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3fe19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3fe1a0:
    // 0x3fe1a0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3fe1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fe1a4:
    // 0x3fe1a4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3fe1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3fe1a8:
    // 0x3fe1a8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3fe1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3fe1ac:
    // 0x3fe1ac: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3fe1acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3fe1b0:
    // 0x3fe1b0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3fe1b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3fe1b4:
    // 0x3fe1b4: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x3fe1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3fe1b8:
    // 0x3fe1b8: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x3fe1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fe1bc:
    // 0x3fe1bc: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3fe1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fe1c0:
    // 0x3fe1c0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3fe1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fe1c4:
    // 0x3fe1c4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3fe1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3fe1c8:
    // 0x3fe1c8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3fe1c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3fe1cc:
    // 0x3fe1cc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3fe1ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3fe1d0:
    // 0x3fe1d0: 0xc0892b0  jal         func_224AC0
label_3fe1d4:
    if (ctx->pc == 0x3FE1D4u) {
        ctx->pc = 0x3FE1D4u;
            // 0x3fe1d4: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x3FE1D8u;
        goto label_3fe1d8;
    }
    ctx->pc = 0x3FE1D0u;
    SET_GPR_U32(ctx, 31, 0x3FE1D8u);
    ctx->pc = 0x3FE1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE1D0u;
            // 0x3fe1d4: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE1D8u; }
        if (ctx->pc != 0x3FE1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE1D8u; }
        if (ctx->pc != 0x3FE1D8u) { return; }
    }
    ctx->pc = 0x3FE1D8u;
label_3fe1d8:
    // 0x3fe1d8: 0x8e440110  lw          $a0, 0x110($s2)
    ctx->pc = 0x3fe1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_3fe1dc:
    // 0x3fe1dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3fe1dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fe1e0:
    // 0x3fe1e0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3fe1e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3fe1e4:
    // 0x3fe1e4: 0x320f809  jalr        $t9
label_3fe1e8:
    if (ctx->pc == 0x3FE1E8u) {
        ctx->pc = 0x3FE1ECu;
        goto label_3fe1ec;
    }
    ctx->pc = 0x3FE1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FE1ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FE1ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FE1ECu; }
            if (ctx->pc != 0x3FE1ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3FE1ECu;
label_3fe1ec:
    // 0x3fe1ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3fe1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3fe1f0:
    // 0x3fe1f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fe1f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fe1f4:
    // 0x3fe1f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fe1f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fe1f8:
    // 0x3fe1f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fe1f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fe1fc:
    // 0x3fe1fc: 0x3e00008  jr          $ra
label_3fe200:
    if (ctx->pc == 0x3FE200u) {
        ctx->pc = 0x3FE200u;
            // 0x3fe200: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3FE204u;
        goto label_3fe204;
    }
    ctx->pc = 0x3FE1FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FE200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE1FCu;
            // 0x3fe200: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FE204u;
label_3fe204:
    // 0x3fe204: 0x0  nop
    ctx->pc = 0x3fe204u;
    // NOP
label_3fe208:
    // 0x3fe208: 0x0  nop
    ctx->pc = 0x3fe208u;
    // NOP
label_3fe20c:
    // 0x3fe20c: 0x0  nop
    ctx->pc = 0x3fe20cu;
    // NOP
label_3fe210:
    // 0x3fe210: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3fe210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3fe214:
    // 0x3fe214: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3fe214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3fe218:
    // 0x3fe218: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3fe218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3fe21c:
    // 0x3fe21c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3fe21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3fe220:
    // 0x3fe220: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3fe220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3fe224:
    // 0x3fe224: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3fe224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3fe228:
    // 0x3fe228: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3fe228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3fe22c:
    // 0x3fe22c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3fe22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3fe230:
    // 0x3fe230: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3fe230u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fe234:
    // 0x3fe234: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3fe234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3fe238:
    // 0x3fe238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fe238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fe23c:
    // 0x3fe23c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fe23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fe240:
    // 0x3fe240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fe240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fe244:
    // 0x3fe244: 0x8c9400c8  lw          $s4, 0xC8($a0)
    ctx->pc = 0x3fe244u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_3fe248:
    // 0x3fe248: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x3fe248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3fe24c:
    // 0x3fe24c: 0x8c900968  lw          $s0, 0x968($a0)
    ctx->pc = 0x3fe24cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_3fe250:
    // 0x3fe250: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fe250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fe254:
    // 0x3fe254: 0x12030025  beq         $s0, $v1, . + 4 + (0x25 << 2)
label_3fe258:
    if (ctx->pc == 0x3FE258u) {
        ctx->pc = 0x3FE258u;
            // 0x3fe258: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE25Cu;
        goto label_3fe25c;
    }
    ctx->pc = 0x3FE254u;
    {
        const bool branch_taken_0x3fe254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3FE258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE254u;
            // 0x3fe258: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe254) {
            ctx->pc = 0x3FE2ECu;
            goto label_3fe2ec;
        }
    }
    ctx->pc = 0x3FE25Cu;
label_3fe25c:
    // 0x3fe25c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3fe25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fe260:
    // 0x3fe260: 0x52030023  beql        $s0, $v1, . + 4 + (0x23 << 2)
label_3fe264:
    if (ctx->pc == 0x3FE264u) {
        ctx->pc = 0x3FE264u;
            // 0x3fe264: 0x8eb300d4  lw          $s3, 0xD4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
        ctx->pc = 0x3FE268u;
        goto label_3fe268;
    }
    ctx->pc = 0x3FE260u;
    {
        const bool branch_taken_0x3fe260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe260) {
            ctx->pc = 0x3FE264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE260u;
            // 0x3fe264: 0x8eb300d4  lw          $s3, 0xD4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FE2F0u;
            goto label_3fe2f0;
        }
    }
    ctx->pc = 0x3FE268u;
label_3fe268:
    // 0x3fe268: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3fe268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fe26c:
    // 0x3fe26c: 0x1203001f  beq         $s0, $v1, . + 4 + (0x1F << 2)
label_3fe270:
    if (ctx->pc == 0x3FE270u) {
        ctx->pc = 0x3FE274u;
        goto label_3fe274;
    }
    ctx->pc = 0x3FE26Cu;
    {
        const bool branch_taken_0x3fe26c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe26c) {
            ctx->pc = 0x3FE2ECu;
            goto label_3fe2ec;
        }
    }
    ctx->pc = 0x3FE274u;
label_3fe274:
    // 0x3fe274: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3fe274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fe278:
    // 0x3fe278: 0x1203001c  beq         $s0, $v1, . + 4 + (0x1C << 2)
label_3fe27c:
    if (ctx->pc == 0x3FE27Cu) {
        ctx->pc = 0x3FE280u;
        goto label_3fe280;
    }
    ctx->pc = 0x3FE278u;
    {
        const bool branch_taken_0x3fe278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe278) {
            ctx->pc = 0x3FE2ECu;
            goto label_3fe2ec;
        }
    }
    ctx->pc = 0x3FE280u;
label_3fe280:
    // 0x3fe280: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3fe280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fe284:
    // 0x3fe284: 0x12030019  beq         $s0, $v1, . + 4 + (0x19 << 2)
label_3fe288:
    if (ctx->pc == 0x3FE288u) {
        ctx->pc = 0x3FE28Cu;
        goto label_3fe28c;
    }
    ctx->pc = 0x3FE284u;
    {
        const bool branch_taken_0x3fe284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe284) {
            ctx->pc = 0x3FE2ECu;
            goto label_3fe2ec;
        }
    }
    ctx->pc = 0x3FE28Cu;
label_3fe28c:
    // 0x3fe28c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3fe28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3fe290:
    // 0x3fe290: 0x12030016  beq         $s0, $v1, . + 4 + (0x16 << 2)
label_3fe294:
    if (ctx->pc == 0x3FE294u) {
        ctx->pc = 0x3FE298u;
        goto label_3fe298;
    }
    ctx->pc = 0x3FE290u;
    {
        const bool branch_taken_0x3fe290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe290) {
            ctx->pc = 0x3FE2ECu;
            goto label_3fe2ec;
        }
    }
    ctx->pc = 0x3FE298u;
label_3fe298:
    // 0x3fe298: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3fe298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3fe29c:
    // 0x3fe29c: 0x12030013  beq         $s0, $v1, . + 4 + (0x13 << 2)
label_3fe2a0:
    if (ctx->pc == 0x3FE2A0u) {
        ctx->pc = 0x3FE2A4u;
        goto label_3fe2a4;
    }
    ctx->pc = 0x3FE29Cu;
    {
        const bool branch_taken_0x3fe29c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe29c) {
            ctx->pc = 0x3FE2ECu;
            goto label_3fe2ec;
        }
    }
    ctx->pc = 0x3FE2A4u;
label_3fe2a4:
    // 0x3fe2a4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3fe2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3fe2a8:
    // 0x3fe2a8: 0x12030010  beq         $s0, $v1, . + 4 + (0x10 << 2)
label_3fe2ac:
    if (ctx->pc == 0x3FE2ACu) {
        ctx->pc = 0x3FE2B0u;
        goto label_3fe2b0;
    }
    ctx->pc = 0x3FE2A8u;
    {
        const bool branch_taken_0x3fe2a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe2a8) {
            ctx->pc = 0x3FE2ECu;
            goto label_3fe2ec;
        }
    }
    ctx->pc = 0x3FE2B0u;
label_3fe2b0:
    // 0x3fe2b0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3fe2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3fe2b4:
    // 0x3fe2b4: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
label_3fe2b8:
    if (ctx->pc == 0x3FE2B8u) {
        ctx->pc = 0x3FE2BCu;
        goto label_3fe2bc;
    }
    ctx->pc = 0x3FE2B4u;
    {
        const bool branch_taken_0x3fe2b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe2b4) {
            ctx->pc = 0x3FE2ECu;
            goto label_3fe2ec;
        }
    }
    ctx->pc = 0x3FE2BCu;
label_3fe2bc:
    // 0x3fe2bc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3fe2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3fe2c0:
    // 0x3fe2c0: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
label_3fe2c4:
    if (ctx->pc == 0x3FE2C4u) {
        ctx->pc = 0x3FE2C8u;
        goto label_3fe2c8;
    }
    ctx->pc = 0x3FE2C0u;
    {
        const bool branch_taken_0x3fe2c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe2c0) {
            ctx->pc = 0x3FE2ECu;
            goto label_3fe2ec;
        }
    }
    ctx->pc = 0x3FE2C8u;
label_3fe2c8:
    // 0x3fe2c8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3fe2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3fe2cc:
    // 0x3fe2cc: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
label_3fe2d0:
    if (ctx->pc == 0x3FE2D0u) {
        ctx->pc = 0x3FE2D4u;
        goto label_3fe2d4;
    }
    ctx->pc = 0x3FE2CCu;
    {
        const bool branch_taken_0x3fe2cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe2cc) {
            ctx->pc = 0x3FE2ECu;
            goto label_3fe2ec;
        }
    }
    ctx->pc = 0x3FE2D4u;
label_3fe2d4:
    // 0x3fe2d4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3fe2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3fe2d8:
    // 0x3fe2d8: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
label_3fe2dc:
    if (ctx->pc == 0x3FE2DCu) {
        ctx->pc = 0x3FE2E0u;
        goto label_3fe2e0;
    }
    ctx->pc = 0x3FE2D8u;
    {
        const bool branch_taken_0x3fe2d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe2d8) {
            ctx->pc = 0x3FE2ECu;
            goto label_3fe2ec;
        }
    }
    ctx->pc = 0x3FE2E0u;
label_3fe2e0:
    // 0x3fe2e0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3fe2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3fe2e4:
    // 0x3fe2e4: 0x16030002  bne         $s0, $v1, . + 4 + (0x2 << 2)
label_3fe2e8:
    if (ctx->pc == 0x3FE2E8u) {
        ctx->pc = 0x3FE2ECu;
        goto label_3fe2ec;
    }
    ctx->pc = 0x3FE2E4u;
    {
        const bool branch_taken_0x3fe2e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fe2e4) {
            ctx->pc = 0x3FE2F0u;
            goto label_3fe2f0;
        }
    }
    ctx->pc = 0x3FE2ECu;
label_3fe2ec:
    // 0x3fe2ec: 0x8eb300d4  lw          $s3, 0xD4($s5)
    ctx->pc = 0x3fe2ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
label_3fe2f0:
    // 0x3fe2f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fe2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fe2f4:
    // 0x3fe2f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3fe2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3fe2f8:
    // 0x3fe2f8: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x3fe2f8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3fe2fc:
    // 0x3fe2fc: 0x8c97e370  lw          $s7, -0x1C90($a0)
    ctx->pc = 0x3fe2fcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959984)));
label_3fe300:
    // 0x3fe300: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3fe300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3fe304:
    // 0x3fe304: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x3fe304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3fe308:
    // 0x3fe308: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x3fe308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_3fe30c:
    // 0x3fe30c: 0x8c85d120  lw          $a1, -0x2EE0($a0)
    ctx->pc = 0x3fe30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955296)));
label_3fe310:
    // 0x3fe310: 0x8cc60130  lw          $a2, 0x130($a2)
    ctx->pc = 0x3fe310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_3fe314:
    // 0x3fe314: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3fe314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3fe318:
    // 0x3fe318: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x3fe318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3fe31c:
    // 0x3fe31c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3fe31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fe320:
    // 0x3fe320: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3fe320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3fe324:
    // 0x3fe324: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3fe324u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3fe328:
    // 0x3fe328: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3fe328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3fe32c:
    // 0x3fe32c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3fe32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3fe330:
    // 0x3fe330: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3fe330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3fe334:
    // 0x3fe334: 0x10640078  beq         $v1, $a0, . + 4 + (0x78 << 2)
label_3fe338:
    if (ctx->pc == 0x3FE338u) {
        ctx->pc = 0x3FE338u;
            // 0x3fe338: 0x24be0010  addiu       $fp, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x3FE33Cu;
        goto label_3fe33c;
    }
    ctx->pc = 0x3FE334u;
    {
        const bool branch_taken_0x3fe334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3FE338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE334u;
            // 0x3fe338: 0x24be0010  addiu       $fp, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe334) {
            ctx->pc = 0x3FE518u;
            goto label_3fe518;
        }
    }
    ctx->pc = 0x3FE33Cu;
label_3fe33c:
    // 0x3fe33c: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x3fe33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_3fe340:
    // 0x3fe340: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3fe340u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3fe344:
    // 0x3fe344: 0xc04e738  jal         func_139CE0
label_3fe348:
    if (ctx->pc == 0x3FE348u) {
        ctx->pc = 0x3FE348u;
            // 0x3fe348: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x3FE34Cu;
        goto label_3fe34c;
    }
    ctx->pc = 0x3FE344u;
    SET_GPR_U32(ctx, 31, 0x3FE34Cu);
    ctx->pc = 0x3FE348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE344u;
            // 0x3fe348: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE34Cu; }
        if (ctx->pc != 0x3FE34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE34Cu; }
        if (ctx->pc != 0x3FE34Cu) { return; }
    }
    ctx->pc = 0x3FE34Cu;
label_3fe34c:
    // 0x3fe34c: 0x8ea300c4  lw          $v1, 0xC4($s5)
    ctx->pc = 0x3fe34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
label_3fe350:
    // 0x3fe350: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3fe350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fe354:
    // 0x3fe354: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
label_3fe358:
    if (ctx->pc == 0x3FE358u) {
        ctx->pc = 0x3FE358u;
            // 0x3fe358: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->pc = 0x3FE35Cu;
        goto label_3fe35c;
    }
    ctx->pc = 0x3FE354u;
    {
        const bool branch_taken_0x3fe354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE354u;
            // 0x3fe358: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe354) {
            ctx->pc = 0x3FE518u;
            goto label_3fe518;
        }
    }
    ctx->pc = 0x3FE35Cu;
label_3fe35c:
    // 0x3fe35c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3fe35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fe360:
    // 0x3fe360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fe360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fe364:
    // 0x3fe364: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
label_3fe368:
    if (ctx->pc == 0x3FE368u) {
        ctx->pc = 0x3FE36Cu;
        goto label_3fe36c;
    }
    ctx->pc = 0x3FE364u;
    {
        const bool branch_taken_0x3fe364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe364) {
            ctx->pc = 0x3FE400u;
            goto label_3fe400;
        }
    }
    ctx->pc = 0x3FE36Cu;
label_3fe36c:
    // 0x3fe36c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3fe36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fe370:
    // 0x3fe370: 0x12020023  beq         $s0, $v0, . + 4 + (0x23 << 2)
label_3fe374:
    if (ctx->pc == 0x3FE374u) {
        ctx->pc = 0x3FE378u;
        goto label_3fe378;
    }
    ctx->pc = 0x3FE370u;
    {
        const bool branch_taken_0x3fe370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe370) {
            ctx->pc = 0x3FE400u;
            goto label_3fe400;
        }
    }
    ctx->pc = 0x3FE378u;
label_3fe378:
    // 0x3fe378: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3fe378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fe37c:
    // 0x3fe37c: 0x12020020  beq         $s0, $v0, . + 4 + (0x20 << 2)
label_3fe380:
    if (ctx->pc == 0x3FE380u) {
        ctx->pc = 0x3FE384u;
        goto label_3fe384;
    }
    ctx->pc = 0x3FE37Cu;
    {
        const bool branch_taken_0x3fe37c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe37c) {
            ctx->pc = 0x3FE400u;
            goto label_3fe400;
        }
    }
    ctx->pc = 0x3FE384u;
label_3fe384:
    // 0x3fe384: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3fe384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fe388:
    // 0x3fe388: 0x1202001d  beq         $s0, $v0, . + 4 + (0x1D << 2)
label_3fe38c:
    if (ctx->pc == 0x3FE38Cu) {
        ctx->pc = 0x3FE390u;
        goto label_3fe390;
    }
    ctx->pc = 0x3FE388u;
    {
        const bool branch_taken_0x3fe388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe388) {
            ctx->pc = 0x3FE400u;
            goto label_3fe400;
        }
    }
    ctx->pc = 0x3FE390u;
label_3fe390:
    // 0x3fe390: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3fe390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fe394:
    // 0x3fe394: 0x1202001a  beq         $s0, $v0, . + 4 + (0x1A << 2)
label_3fe398:
    if (ctx->pc == 0x3FE398u) {
        ctx->pc = 0x3FE39Cu;
        goto label_3fe39c;
    }
    ctx->pc = 0x3FE394u;
    {
        const bool branch_taken_0x3fe394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe394) {
            ctx->pc = 0x3FE400u;
            goto label_3fe400;
        }
    }
    ctx->pc = 0x3FE39Cu;
label_3fe39c:
    // 0x3fe39c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3fe39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3fe3a0:
    // 0x3fe3a0: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
label_3fe3a4:
    if (ctx->pc == 0x3FE3A4u) {
        ctx->pc = 0x3FE3A8u;
        goto label_3fe3a8;
    }
    ctx->pc = 0x3FE3A0u;
    {
        const bool branch_taken_0x3fe3a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe3a0) {
            ctx->pc = 0x3FE400u;
            goto label_3fe400;
        }
    }
    ctx->pc = 0x3FE3A8u;
label_3fe3a8:
    // 0x3fe3a8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3fe3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3fe3ac:
    // 0x3fe3ac: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
label_3fe3b0:
    if (ctx->pc == 0x3FE3B0u) {
        ctx->pc = 0x3FE3B4u;
        goto label_3fe3b4;
    }
    ctx->pc = 0x3FE3ACu;
    {
        const bool branch_taken_0x3fe3ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe3ac) {
            ctx->pc = 0x3FE400u;
            goto label_3fe400;
        }
    }
    ctx->pc = 0x3FE3B4u;
label_3fe3b4:
    // 0x3fe3b4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3fe3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3fe3b8:
    // 0x3fe3b8: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_3fe3bc:
    if (ctx->pc == 0x3FE3BCu) {
        ctx->pc = 0x3FE3C0u;
        goto label_3fe3c0;
    }
    ctx->pc = 0x3FE3B8u;
    {
        const bool branch_taken_0x3fe3b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe3b8) {
            ctx->pc = 0x3FE400u;
            goto label_3fe400;
        }
    }
    ctx->pc = 0x3FE3C0u;
label_3fe3c0:
    // 0x3fe3c0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3fe3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3fe3c4:
    // 0x3fe3c4: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_3fe3c8:
    if (ctx->pc == 0x3FE3C8u) {
        ctx->pc = 0x3FE3CCu;
        goto label_3fe3cc;
    }
    ctx->pc = 0x3FE3C4u;
    {
        const bool branch_taken_0x3fe3c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe3c4) {
            ctx->pc = 0x3FE400u;
            goto label_3fe400;
        }
    }
    ctx->pc = 0x3FE3CCu;
label_3fe3cc:
    // 0x3fe3cc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3fe3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3fe3d0:
    // 0x3fe3d0: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_3fe3d4:
    if (ctx->pc == 0x3FE3D4u) {
        ctx->pc = 0x3FE3D8u;
        goto label_3fe3d8;
    }
    ctx->pc = 0x3FE3D0u;
    {
        const bool branch_taken_0x3fe3d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe3d0) {
            ctx->pc = 0x3FE400u;
            goto label_3fe400;
        }
    }
    ctx->pc = 0x3FE3D8u;
label_3fe3d8:
    // 0x3fe3d8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3fe3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3fe3dc:
    // 0x3fe3dc: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3fe3e0:
    if (ctx->pc == 0x3FE3E0u) {
        ctx->pc = 0x3FE3E4u;
        goto label_3fe3e4;
    }
    ctx->pc = 0x3FE3DCu;
    {
        const bool branch_taken_0x3fe3dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe3dc) {
            ctx->pc = 0x3FE400u;
            goto label_3fe400;
        }
    }
    ctx->pc = 0x3FE3E4u;
label_3fe3e4:
    // 0x3fe3e4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3fe3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3fe3e8:
    // 0x3fe3e8: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_3fe3ec:
    if (ctx->pc == 0x3FE3ECu) {
        ctx->pc = 0x3FE3F0u;
        goto label_3fe3f0;
    }
    ctx->pc = 0x3FE3E8u;
    {
        const bool branch_taken_0x3fe3e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe3e8) {
            ctx->pc = 0x3FE400u;
            goto label_3fe400;
        }
    }
    ctx->pc = 0x3FE3F0u;
label_3fe3f0:
    // 0x3fe3f0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3fe3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3fe3f4:
    // 0x3fe3f4: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_3fe3f8:
    if (ctx->pc == 0x3FE3F8u) {
        ctx->pc = 0x3FE3FCu;
        goto label_3fe3fc;
    }
    ctx->pc = 0x3FE3F4u;
    {
        const bool branch_taken_0x3fe3f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fe3f4) {
            ctx->pc = 0x3FE430u;
            goto label_3fe430;
        }
    }
    ctx->pc = 0x3FE3FCu;
label_3fe3fc:
    // 0x3fe3fc: 0x0  nop
    ctx->pc = 0x3fe3fcu;
    // NOP
label_3fe400:
    // 0x3fe400: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x3fe400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3fe404:
    // 0x3fe404: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3fe404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fe408:
    // 0x3fe408: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3fe408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fe40c:
    // 0x3fe40c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3fe40cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fe410:
    // 0x3fe410: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3fe410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3fe414:
    // 0x3fe414: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3fe414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3fe418:
    // 0x3fe418: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3fe418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fe41c:
    // 0x3fe41c: 0xc0ffccc  jal         func_3FF330
label_3fe420:
    if (ctx->pc == 0x3FE420u) {
        ctx->pc = 0x3FE420u;
            // 0x3fe420: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE424u;
        goto label_3fe424;
    }
    ctx->pc = 0x3FE41Cu;
    SET_GPR_U32(ctx, 31, 0x3FE424u);
    ctx->pc = 0x3FE420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE41Cu;
            // 0x3fe420: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FF330u;
    if (runtime->hasFunction(0x3FF330u)) {
        auto targetFn = runtime->lookupFunction(0x3FF330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE424u; }
        if (ctx->pc != 0x3FE424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FF330_0x3ff330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE424u; }
        if (ctx->pc != 0x3FE424u) { return; }
    }
    ctx->pc = 0x3FE424u;
label_3fe424:
    // 0x3fe424: 0x1000000c  b           . + 4 + (0xC << 2)
label_3fe428:
    if (ctx->pc == 0x3FE428u) {
        ctx->pc = 0x3FE42Cu;
        goto label_3fe42c;
    }
    ctx->pc = 0x3FE424u;
    {
        const bool branch_taken_0x3fe424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe424) {
            ctx->pc = 0x3FE458u;
            goto label_3fe458;
        }
    }
    ctx->pc = 0x3FE42Cu;
label_3fe42c:
    // 0x3fe42c: 0x0  nop
    ctx->pc = 0x3fe42cu;
    // NOP
label_3fe430:
    // 0x3fe430: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x3fe430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3fe434:
    // 0x3fe434: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3fe434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fe438:
    // 0x3fe438: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3fe438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fe43c:
    // 0x3fe43c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3fe43cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fe440:
    // 0x3fe440: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3fe440u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3fe444:
    // 0x3fe444: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3fe444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3fe448:
    // 0x3fe448: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3fe448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fe44c:
    // 0x3fe44c: 0xc0ffccc  jal         func_3FF330
label_3fe450:
    if (ctx->pc == 0x3FE450u) {
        ctx->pc = 0x3FE450u;
            // 0x3fe450: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE454u;
        goto label_3fe454;
    }
    ctx->pc = 0x3FE44Cu;
    SET_GPR_U32(ctx, 31, 0x3FE454u);
    ctx->pc = 0x3FE450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE44Cu;
            // 0x3fe450: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FF330u;
    if (runtime->hasFunction(0x3FF330u)) {
        auto targetFn = runtime->lookupFunction(0x3FF330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE454u; }
        if (ctx->pc != 0x3FE454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FF330_0x3ff330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE454u; }
        if (ctx->pc != 0x3FE454u) { return; }
    }
    ctx->pc = 0x3FE454u;
label_3fe454:
    // 0x3fe454: 0x0  nop
    ctx->pc = 0x3fe454u;
    // NOP
label_3fe458:
    // 0x3fe458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fe458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fe45c:
    // 0x3fe45c: 0x12030026  beq         $s0, $v1, . + 4 + (0x26 << 2)
label_3fe460:
    if (ctx->pc == 0x3FE460u) {
        ctx->pc = 0x3FE460u;
            // 0x3fe460: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x3FE464u;
        goto label_3fe464;
    }
    ctx->pc = 0x3FE45Cu;
    {
        const bool branch_taken_0x3fe45c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3FE460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE45Cu;
            // 0x3fe460: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe45c) {
            ctx->pc = 0x3FE4F8u;
            goto label_3fe4f8;
        }
    }
    ctx->pc = 0x3FE464u;
label_3fe464:
    // 0x3fe464: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3fe464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fe468:
    // 0x3fe468: 0x12030023  beq         $s0, $v1, . + 4 + (0x23 << 2)
label_3fe46c:
    if (ctx->pc == 0x3FE46Cu) {
        ctx->pc = 0x3FE470u;
        goto label_3fe470;
    }
    ctx->pc = 0x3FE468u;
    {
        const bool branch_taken_0x3fe468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe468) {
            ctx->pc = 0x3FE4F8u;
            goto label_3fe4f8;
        }
    }
    ctx->pc = 0x3FE470u;
label_3fe470:
    // 0x3fe470: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3fe470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fe474:
    // 0x3fe474: 0x12030020  beq         $s0, $v1, . + 4 + (0x20 << 2)
label_3fe478:
    if (ctx->pc == 0x3FE478u) {
        ctx->pc = 0x3FE47Cu;
        goto label_3fe47c;
    }
    ctx->pc = 0x3FE474u;
    {
        const bool branch_taken_0x3fe474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe474) {
            ctx->pc = 0x3FE4F8u;
            goto label_3fe4f8;
        }
    }
    ctx->pc = 0x3FE47Cu;
label_3fe47c:
    // 0x3fe47c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3fe47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fe480:
    // 0x3fe480: 0x1203001d  beq         $s0, $v1, . + 4 + (0x1D << 2)
label_3fe484:
    if (ctx->pc == 0x3FE484u) {
        ctx->pc = 0x3FE488u;
        goto label_3fe488;
    }
    ctx->pc = 0x3FE480u;
    {
        const bool branch_taken_0x3fe480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe480) {
            ctx->pc = 0x3FE4F8u;
            goto label_3fe4f8;
        }
    }
    ctx->pc = 0x3FE488u;
label_3fe488:
    // 0x3fe488: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3fe488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fe48c:
    // 0x3fe48c: 0x1203001a  beq         $s0, $v1, . + 4 + (0x1A << 2)
label_3fe490:
    if (ctx->pc == 0x3FE490u) {
        ctx->pc = 0x3FE494u;
        goto label_3fe494;
    }
    ctx->pc = 0x3FE48Cu;
    {
        const bool branch_taken_0x3fe48c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe48c) {
            ctx->pc = 0x3FE4F8u;
            goto label_3fe4f8;
        }
    }
    ctx->pc = 0x3FE494u;
label_3fe494:
    // 0x3fe494: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3fe494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3fe498:
    // 0x3fe498: 0x12030017  beq         $s0, $v1, . + 4 + (0x17 << 2)
label_3fe49c:
    if (ctx->pc == 0x3FE49Cu) {
        ctx->pc = 0x3FE4A0u;
        goto label_3fe4a0;
    }
    ctx->pc = 0x3FE498u;
    {
        const bool branch_taken_0x3fe498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe498) {
            ctx->pc = 0x3FE4F8u;
            goto label_3fe4f8;
        }
    }
    ctx->pc = 0x3FE4A0u;
label_3fe4a0:
    // 0x3fe4a0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3fe4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3fe4a4:
    // 0x3fe4a4: 0x12030014  beq         $s0, $v1, . + 4 + (0x14 << 2)
label_3fe4a8:
    if (ctx->pc == 0x3FE4A8u) {
        ctx->pc = 0x3FE4ACu;
        goto label_3fe4ac;
    }
    ctx->pc = 0x3FE4A4u;
    {
        const bool branch_taken_0x3fe4a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe4a4) {
            ctx->pc = 0x3FE4F8u;
            goto label_3fe4f8;
        }
    }
    ctx->pc = 0x3FE4ACu;
label_3fe4ac:
    // 0x3fe4ac: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3fe4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3fe4b0:
    // 0x3fe4b0: 0x12030011  beq         $s0, $v1, . + 4 + (0x11 << 2)
label_3fe4b4:
    if (ctx->pc == 0x3FE4B4u) {
        ctx->pc = 0x3FE4B8u;
        goto label_3fe4b8;
    }
    ctx->pc = 0x3FE4B0u;
    {
        const bool branch_taken_0x3fe4b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe4b0) {
            ctx->pc = 0x3FE4F8u;
            goto label_3fe4f8;
        }
    }
    ctx->pc = 0x3FE4B8u;
label_3fe4b8:
    // 0x3fe4b8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3fe4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3fe4bc:
    // 0x3fe4bc: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
label_3fe4c0:
    if (ctx->pc == 0x3FE4C0u) {
        ctx->pc = 0x3FE4C4u;
        goto label_3fe4c4;
    }
    ctx->pc = 0x3FE4BCu;
    {
        const bool branch_taken_0x3fe4bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe4bc) {
            ctx->pc = 0x3FE4F8u;
            goto label_3fe4f8;
        }
    }
    ctx->pc = 0x3FE4C4u;
label_3fe4c4:
    // 0x3fe4c4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3fe4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3fe4c8:
    // 0x3fe4c8: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
label_3fe4cc:
    if (ctx->pc == 0x3FE4CCu) {
        ctx->pc = 0x3FE4D0u;
        goto label_3fe4d0;
    }
    ctx->pc = 0x3FE4C8u;
    {
        const bool branch_taken_0x3fe4c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe4c8) {
            ctx->pc = 0x3FE4F8u;
            goto label_3fe4f8;
        }
    }
    ctx->pc = 0x3FE4D0u;
label_3fe4d0:
    // 0x3fe4d0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3fe4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3fe4d4:
    // 0x3fe4d4: 0x12030008  beq         $s0, $v1, . + 4 + (0x8 << 2)
label_3fe4d8:
    if (ctx->pc == 0x3FE4D8u) {
        ctx->pc = 0x3FE4DCu;
        goto label_3fe4dc;
    }
    ctx->pc = 0x3FE4D4u;
    {
        const bool branch_taken_0x3fe4d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe4d4) {
            ctx->pc = 0x3FE4F8u;
            goto label_3fe4f8;
        }
    }
    ctx->pc = 0x3FE4DCu;
label_3fe4dc:
    // 0x3fe4dc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3fe4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3fe4e0:
    // 0x3fe4e0: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
label_3fe4e4:
    if (ctx->pc == 0x3FE4E4u) {
        ctx->pc = 0x3FE4E8u;
        goto label_3fe4e8;
    }
    ctx->pc = 0x3FE4E0u;
    {
        const bool branch_taken_0x3fe4e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe4e0) {
            ctx->pc = 0x3FE4F8u;
            goto label_3fe4f8;
        }
    }
    ctx->pc = 0x3FE4E8u;
label_3fe4e8:
    // 0x3fe4e8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3fe4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3fe4ec:
    // 0x3fe4ec: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
label_3fe4f0:
    if (ctx->pc == 0x3FE4F0u) {
        ctx->pc = 0x3FE4F4u;
        goto label_3fe4f4;
    }
    ctx->pc = 0x3FE4ECu;
    {
        const bool branch_taken_0x3fe4ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fe4ec) {
            ctx->pc = 0x3FE500u;
            goto label_3fe500;
        }
    }
    ctx->pc = 0x3FE4F4u;
label_3fe4f4:
    // 0x3fe4f4: 0x0  nop
    ctx->pc = 0x3fe4f4u;
    // NOP
label_3fe4f8:
    // 0x3fe4f8: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x3fe4f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_3fe4fc:
    // 0x3fe4fc: 0x0  nop
    ctx->pc = 0x3fe4fcu;
    // NOP
label_3fe500:
    // 0x3fe500: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3fe500u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3fe504:
    // 0x3fe504: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3fe504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3fe508:
    // 0x3fe508: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x3fe508u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fe50c:
    // 0x3fe50c: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
label_3fe510:
    if (ctx->pc == 0x3FE510u) {
        ctx->pc = 0x3FE510u;
            // 0x3fe510: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3FE514u;
        goto label_3fe514;
    }
    ctx->pc = 0x3FE50Cu;
    {
        const bool branch_taken_0x3fe50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FE510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE50Cu;
            // 0x3fe510: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe50c) {
            ctx->pc = 0x3FE360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fe360;
        }
    }
    ctx->pc = 0x3FE514u;
label_3fe514:
    // 0x3fe514: 0x0  nop
    ctx->pc = 0x3fe514u;
    // NOP
label_3fe518:
    // 0x3fe518: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3fe518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3fe51c:
    // 0x3fe51c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3fe51cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3fe520:
    // 0x3fe520: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3fe520u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fe524:
    // 0x3fe524: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3fe524u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fe528:
    // 0x3fe528: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3fe528u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fe52c:
    // 0x3fe52c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3fe52cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fe530:
    // 0x3fe530: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3fe530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fe534:
    // 0x3fe534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fe534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fe538:
    // 0x3fe538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fe538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fe53c:
    // 0x3fe53c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fe53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fe540:
    // 0x3fe540: 0x3e00008  jr          $ra
label_3fe544:
    if (ctx->pc == 0x3FE544u) {
        ctx->pc = 0x3FE544u;
            // 0x3fe544: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3FE548u;
        goto label_3fe548;
    }
    ctx->pc = 0x3FE540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FE544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE540u;
            // 0x3fe544: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FE548u;
label_3fe548:
    // 0x3fe548: 0x0  nop
    ctx->pc = 0x3fe548u;
    // NOP
label_3fe54c:
    // 0x3fe54c: 0x0  nop
    ctx->pc = 0x3fe54cu;
    // NOP
label_3fe550:
    // 0x3fe550: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3fe550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3fe554:
    // 0x3fe554: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3fe554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fe558:
    // 0x3fe558: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3fe558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3fe55c:
    // 0x3fe55c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3fe55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3fe560:
    // 0x3fe560: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3fe560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3fe564:
    // 0x3fe564: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3fe564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3fe568:
    // 0x3fe568: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3fe568u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fe56c:
    // 0x3fe56c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3fe56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3fe570:
    // 0x3fe570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fe570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fe574:
    // 0x3fe574: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fe574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fe578:
    // 0x3fe578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fe578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fe57c:
    // 0x3fe57c: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3fe57cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3fe580:
    // 0x3fe580: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
label_3fe584:
    if (ctx->pc == 0x3FE584u) {
        ctx->pc = 0x3FE588u;
        goto label_3fe588;
    }
    ctx->pc = 0x3FE580u;
    {
        const bool branch_taken_0x3fe580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe580) {
            ctx->pc = 0x3FE628u;
            goto label_3fe628;
        }
    }
    ctx->pc = 0x3FE588u;
label_3fe588:
    // 0x3fe588: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3fe588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fe58c:
    // 0x3fe58c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_3fe590:
    if (ctx->pc == 0x3FE590u) {
        ctx->pc = 0x3FE590u;
            // 0x3fe590: 0x8eb40070  lw          $s4, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->pc = 0x3FE594u;
        goto label_3fe594;
    }
    ctx->pc = 0x3FE58Cu;
    {
        const bool branch_taken_0x3fe58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fe58c) {
            ctx->pc = 0x3FE590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE58Cu;
            // 0x3fe590: 0x8eb40070  lw          $s4, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FE59Cu;
            goto label_3fe59c;
        }
    }
    ctx->pc = 0x3FE594u;
label_3fe594:
    // 0x3fe594: 0x10000054  b           . + 4 + (0x54 << 2)
label_3fe598:
    if (ctx->pc == 0x3FE598u) {
        ctx->pc = 0x3FE59Cu;
        goto label_3fe59c;
    }
    ctx->pc = 0x3FE594u;
    {
        const bool branch_taken_0x3fe594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe594) {
            ctx->pc = 0x3FE6E8u;
            goto label_3fe6e8;
        }
    }
    ctx->pc = 0x3FE59Cu;
label_3fe59c:
    // 0x3fe59c: 0x8eb600c8  lw          $s6, 0xC8($s5)
    ctx->pc = 0x3fe59cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_3fe5a0:
    // 0x3fe5a0: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
label_3fe5a4:
    if (ctx->pc == 0x3FE5A4u) {
        ctx->pc = 0x3FE5A4u;
            // 0x3fe5a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE5A8u;
        goto label_3fe5a8;
    }
    ctx->pc = 0x3FE5A0u;
    {
        const bool branch_taken_0x3fe5a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE5A0u;
            // 0x3fe5a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe5a0) {
            ctx->pc = 0x3FE610u;
            goto label_3fe610;
        }
    }
    ctx->pc = 0x3FE5A8u;
label_3fe5a8:
    // 0x3fe5a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3fe5a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fe5ac:
    // 0x3fe5ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3fe5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fe5b0:
    // 0x3fe5b0: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x3fe5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_3fe5b4:
    // 0x3fe5b4: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x3fe5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3fe5b8:
    // 0x3fe5b8: 0x8ea300e0  lw          $v1, 0xE0($s5)
    ctx->pc = 0x3fe5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
label_3fe5bc:
    // 0x3fe5bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3fe5bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3fe5c0:
    // 0x3fe5c0: 0x138140  sll         $s0, $s3, 5
    ctx->pc = 0x3fe5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
label_3fe5c4:
    // 0x3fe5c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3fe5c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fe5c8:
    // 0x3fe5c8: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x3fe5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3fe5cc:
    // 0x3fe5cc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3fe5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_3fe5d0:
    // 0x3fe5d0: 0x8ea200b0  lw          $v0, 0xB0($s5)
    ctx->pc = 0x3fe5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_3fe5d4:
    // 0x3fe5d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3fe5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3fe5d8:
    // 0x3fe5d8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3fe5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fe5dc:
    // 0x3fe5dc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3fe5dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3fe5e0:
    // 0x3fe5e0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3fe5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fe5e4:
    // 0x3fe5e4: 0xc0fffd8  jal         func_3FFF60
label_3fe5e8:
    if (ctx->pc == 0x3FE5E8u) {
        ctx->pc = 0x3FE5E8u;
            // 0x3fe5e8: 0x523821  addu        $a3, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x3FE5ECu;
        goto label_3fe5ec;
    }
    ctx->pc = 0x3FE5E4u;
    SET_GPR_U32(ctx, 31, 0x3FE5ECu);
    ctx->pc = 0x3FE5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE5E4u;
            // 0x3fe5e8: 0x523821  addu        $a3, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FFF60u;
    if (runtime->hasFunction(0x3FFF60u)) {
        auto targetFn = runtime->lookupFunction(0x3FFF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE5ECu; }
        if (ctx->pc != 0x3FE5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FFF60_0x3fff60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE5ECu; }
        if (ctx->pc != 0x3FE5ECu) { return; }
    }
    ctx->pc = 0x3FE5ECu;
label_3fe5ec:
    // 0x3fe5ec: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x3fe5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_3fe5f0:
    // 0x3fe5f0: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x3fe5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_3fe5f4:
    // 0x3fe5f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3fe5f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3fe5f8:
    // 0x3fe5f8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3fe5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3fe5fc:
    // 0x3fe5fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3fe5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3fe600:
    // 0x3fe600: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3fe600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3fe604:
    // 0x3fe604: 0x1680ffea  bnez        $s4, . + 4 + (-0x16 << 2)
label_3fe608:
    if (ctx->pc == 0x3FE608u) {
        ctx->pc = 0x3FE608u;
            // 0x3fe608: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x3FE60Cu;
        goto label_3fe60c;
    }
    ctx->pc = 0x3FE604u;
    {
        const bool branch_taken_0x3fe604 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FE608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE604u;
            // 0x3fe608: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe604) {
            ctx->pc = 0x3FE5B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fe5b0;
        }
    }
    ctx->pc = 0x3FE60Cu;
label_3fe60c:
    // 0x3fe60c: 0x0  nop
    ctx->pc = 0x3fe60cu;
    // NOP
label_3fe610:
    // 0x3fe610: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3fe610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3fe614:
    // 0x3fe614: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3fe614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3fe618:
    // 0x3fe618: 0x320f809  jalr        $t9
label_3fe61c:
    if (ctx->pc == 0x3FE61Cu) {
        ctx->pc = 0x3FE61Cu;
            // 0x3fe61c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE620u;
        goto label_3fe620;
    }
    ctx->pc = 0x3FE618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FE620u);
        ctx->pc = 0x3FE61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE618u;
            // 0x3fe61c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FE620u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FE620u; }
            if (ctx->pc != 0x3FE620u) { return; }
        }
        }
    }
    ctx->pc = 0x3FE620u;
label_3fe620:
    // 0x3fe620: 0x10000031  b           . + 4 + (0x31 << 2)
label_3fe624:
    if (ctx->pc == 0x3FE624u) {
        ctx->pc = 0x3FE628u;
        goto label_3fe628;
    }
    ctx->pc = 0x3FE620u;
    {
        const bool branch_taken_0x3fe620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe620) {
            ctx->pc = 0x3FE6E8u;
            goto label_3fe6e8;
        }
    }
    ctx->pc = 0x3FE628u;
label_3fe628:
    // 0x3fe628: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3fe628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3fe62c:
    // 0x3fe62c: 0x8ea600c8  lw          $a2, 0xC8($s5)
    ctx->pc = 0x3fe62cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_3fe630:
    // 0x3fe630: 0x8c678a08  lw          $a3, -0x75F8($v1)
    ctx->pc = 0x3fe630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3fe634:
    // 0x3fe634: 0x8ea300c4  lw          $v1, 0xC4($s5)
    ctx->pc = 0x3fe634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
label_3fe638:
    // 0x3fe638: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3fe638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_3fe63c:
    // 0x3fe63c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3fe63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3fe640:
    // 0x3fe640: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x3fe640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
label_3fe644:
    // 0x3fe644: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3fe644u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3fe648:
    // 0x3fe648: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3fe648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3fe64c:
    // 0x3fe64c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_3fe650:
    if (ctx->pc == 0x3FE650u) {
        ctx->pc = 0x3FE654u;
        goto label_3fe654;
    }
    ctx->pc = 0x3FE64Cu;
    {
        const bool branch_taken_0x3fe64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe64c) {
            ctx->pc = 0x3FE6B8u;
            goto label_3fe6b8;
        }
    }
    ctx->pc = 0x3FE654u;
label_3fe654:
    // 0x3fe654: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x3fe654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
label_3fe658:
    // 0x3fe658: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3fe658u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_3fe65c:
    // 0x3fe65c: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x3fe65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fe660:
    // 0x3fe660: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x3fe660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fe664:
    // 0x3fe664: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3fe664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3fe668:
    // 0x3fe668: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x3fe668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_3fe66c:
    // 0x3fe66c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x3fe66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3fe670:
    // 0x3fe670: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x3fe670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fe674:
    // 0x3fe674: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3fe674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fe678:
    // 0x3fe678: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3fe678u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fe67c:
    // 0x3fe67c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3fe680:
    if (ctx->pc == 0x3FE680u) {
        ctx->pc = 0x3FE680u;
            // 0x3fe680: 0x24a4001c  addiu       $a0, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->pc = 0x3FE684u;
        goto label_3fe684;
    }
    ctx->pc = 0x3FE67Cu;
    {
        const bool branch_taken_0x3fe67c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FE680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE67Cu;
            // 0x3fe680: 0x24a4001c  addiu       $a0, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe67c) {
            ctx->pc = 0x3FE688u;
            goto label_3fe688;
        }
    }
    ctx->pc = 0x3FE684u;
label_3fe684:
    // 0x3fe684: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3fe684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3fe688:
    // 0x3fe688: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x3fe688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_3fe68c:
    // 0x3fe68c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3fe68cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3fe690:
    // 0x3fe690: 0x8ea400c4  lw          $a0, 0xC4($s5)
    ctx->pc = 0x3fe690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
label_3fe694:
    // 0x3fe694: 0x24660020  addiu       $a2, $v1, 0x20
    ctx->pc = 0x3fe694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_3fe698:
    // 0x3fe698: 0x8ea300c8  lw          $v1, 0xC8($s5)
    ctx->pc = 0x3fe698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_3fe69c:
    // 0x3fe69c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3fe69cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3fe6a0:
    // 0x3fe6a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3fe6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3fe6a4:
    // 0x3fe6a4: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x3fe6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
label_3fe6a8:
    // 0x3fe6a8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3fe6a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3fe6ac:
    // 0x3fe6ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3fe6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3fe6b0:
    // 0x3fe6b0: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
label_3fe6b4:
    if (ctx->pc == 0x3FE6B4u) {
        ctx->pc = 0x3FE6B4u;
            // 0x3fe6b4: 0x6283c  dsll32      $a1, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
        ctx->pc = 0x3FE6B8u;
        goto label_3fe6b8;
    }
    ctx->pc = 0x3FE6B0u;
    {
        const bool branch_taken_0x3fe6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe6b0) {
            ctx->pc = 0x3FE6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE6B0u;
            // 0x3fe6b4: 0x6283c  dsll32      $a1, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FE658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fe658;
        }
    }
    ctx->pc = 0x3FE6B8u;
label_3fe6b8:
    // 0x3fe6b8: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x3fe6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3fe6bc:
    // 0x3fe6bc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_3fe6c0:
    if (ctx->pc == 0x3FE6C0u) {
        ctx->pc = 0x3FE6C4u;
        goto label_3fe6c4;
    }
    ctx->pc = 0x3FE6BCu;
    {
        const bool branch_taken_0x3fe6bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe6bc) {
            ctx->pc = 0x3FE6E8u;
            goto label_3fe6e8;
        }
    }
    ctx->pc = 0x3FE6C4u;
label_3fe6c4:
    // 0x3fe6c4: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x3fe6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3fe6c8:
    // 0x3fe6c8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3fe6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3fe6cc:
    // 0x3fe6cc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3fe6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3fe6d0:
    // 0x3fe6d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fe6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fe6d4:
    // 0x3fe6d4: 0xc0ffe48  jal         func_3FF920
label_3fe6d8:
    if (ctx->pc == 0x3FE6D8u) {
        ctx->pc = 0x3FE6D8u;
            // 0x3fe6d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3FE6DCu;
        goto label_3fe6dc;
    }
    ctx->pc = 0x3FE6D4u;
    SET_GPR_U32(ctx, 31, 0x3FE6DCu);
    ctx->pc = 0x3FE6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE6D4u;
            // 0x3fe6d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FF920u;
    if (runtime->hasFunction(0x3FF920u)) {
        auto targetFn = runtime->lookupFunction(0x3FF920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE6DCu; }
        if (ctx->pc != 0x3FE6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FF920_0x3ff920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE6DCu; }
        if (ctx->pc != 0x3FE6DCu) { return; }
    }
    ctx->pc = 0x3FE6DCu;
label_3fe6dc:
    // 0x3fe6dc: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
label_3fe6e0:
    if (ctx->pc == 0x3FE6E0u) {
        ctx->pc = 0x3FE6E0u;
            // 0x3fe6e0: 0x8ea20074  lw          $v0, 0x74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
        ctx->pc = 0x3FE6E4u;
        goto label_3fe6e4;
    }
    ctx->pc = 0x3FE6DCu;
    {
        const bool branch_taken_0x3fe6dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe6dc) {
            ctx->pc = 0x3FE6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE6DCu;
            // 0x3fe6e0: 0x8ea20074  lw          $v0, 0x74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FE6C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fe6c8;
        }
    }
    ctx->pc = 0x3FE6E4u;
label_3fe6e4:
    // 0x3fe6e4: 0x0  nop
    ctx->pc = 0x3fe6e4u;
    // NOP
label_3fe6e8:
    // 0x3fe6e8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3fe6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3fe6ec:
    // 0x3fe6ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3fe6ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fe6f0:
    // 0x3fe6f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3fe6f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fe6f4:
    // 0x3fe6f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3fe6f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fe6f8:
    // 0x3fe6f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3fe6f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fe6fc:
    // 0x3fe6fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fe6fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fe700:
    // 0x3fe700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fe700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fe704:
    // 0x3fe704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fe704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fe708:
    // 0x3fe708: 0x3e00008  jr          $ra
label_3fe70c:
    if (ctx->pc == 0x3FE70Cu) {
        ctx->pc = 0x3FE70Cu;
            // 0x3fe70c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3FE710u;
        goto label_3fe710;
    }
    ctx->pc = 0x3FE708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FE70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE708u;
            // 0x3fe70c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FE710u;
label_3fe710:
    // 0x3fe710: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3fe710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3fe714:
    // 0x3fe714: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3fe714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3fe718:
    // 0x3fe718: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3fe718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3fe71c:
    // 0x3fe71c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fe71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fe720:
    // 0x3fe720: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3fe720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3fe724:
    // 0x3fe724: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3fe724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3fe728:
    // 0x3fe728: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3fe728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3fe72c:
    // 0x3fe72c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3fe72cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fe730:
    // 0x3fe730: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3fe730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3fe734:
    // 0x3fe734: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3fe734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3fe738:
    // 0x3fe738: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3fe738u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fe73c:
    // 0x3fe73c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3fe73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3fe740:
    // 0x3fe740: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3fe740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fe744:
    // 0x3fe744: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fe744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fe748:
    // 0x3fe748: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3fe748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fe74c:
    // 0x3fe74c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fe74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fe750:
    // 0x3fe750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fe750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fe754:
    // 0x3fe754: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3fe754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3fe758:
    // 0x3fe758: 0x8c520968  lw          $s2, 0x968($v0)
    ctx->pc = 0x3fe758u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_3fe75c:
    // 0x3fe75c: 0x12430025  beq         $s2, $v1, . + 4 + (0x25 << 2)
label_3fe760:
    if (ctx->pc == 0x3FE760u) {
        ctx->pc = 0x3FE760u;
            // 0x3fe760: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->pc = 0x3FE764u;
        goto label_3fe764;
    }
    ctx->pc = 0x3FE75Cu;
    {
        const bool branch_taken_0x3fe75c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x3FE760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE75Cu;
            // 0x3fe760: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe75c) {
            ctx->pc = 0x3FE7F4u;
            goto label_3fe7f4;
        }
    }
    ctx->pc = 0x3FE764u;
label_3fe764:
    // 0x3fe764: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3fe764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fe768:
    // 0x3fe768: 0x52420023  beql        $s2, $v0, . + 4 + (0x23 << 2)
label_3fe76c:
    if (ctx->pc == 0x3FE76Cu) {
        ctx->pc = 0x3FE76Cu;
            // 0x3fe76c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3FE770u;
        goto label_3fe770;
    }
    ctx->pc = 0x3FE768u;
    {
        const bool branch_taken_0x3fe768 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe768) {
            ctx->pc = 0x3FE76Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE768u;
            // 0x3fe76c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FE7F8u;
            goto label_3fe7f8;
        }
    }
    ctx->pc = 0x3FE770u;
label_3fe770:
    // 0x3fe770: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3fe770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fe774:
    // 0x3fe774: 0x1242001f  beq         $s2, $v0, . + 4 + (0x1F << 2)
label_3fe778:
    if (ctx->pc == 0x3FE778u) {
        ctx->pc = 0x3FE77Cu;
        goto label_3fe77c;
    }
    ctx->pc = 0x3FE774u;
    {
        const bool branch_taken_0x3fe774 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe774) {
            ctx->pc = 0x3FE7F4u;
            goto label_3fe7f4;
        }
    }
    ctx->pc = 0x3FE77Cu;
label_3fe77c:
    // 0x3fe77c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3fe77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fe780:
    // 0x3fe780: 0x1242001c  beq         $s2, $v0, . + 4 + (0x1C << 2)
label_3fe784:
    if (ctx->pc == 0x3FE784u) {
        ctx->pc = 0x3FE788u;
        goto label_3fe788;
    }
    ctx->pc = 0x3FE780u;
    {
        const bool branch_taken_0x3fe780 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe780) {
            ctx->pc = 0x3FE7F4u;
            goto label_3fe7f4;
        }
    }
    ctx->pc = 0x3FE788u;
label_3fe788:
    // 0x3fe788: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3fe788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fe78c:
    // 0x3fe78c: 0x12420019  beq         $s2, $v0, . + 4 + (0x19 << 2)
label_3fe790:
    if (ctx->pc == 0x3FE790u) {
        ctx->pc = 0x3FE794u;
        goto label_3fe794;
    }
    ctx->pc = 0x3FE78Cu;
    {
        const bool branch_taken_0x3fe78c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe78c) {
            ctx->pc = 0x3FE7F4u;
            goto label_3fe7f4;
        }
    }
    ctx->pc = 0x3FE794u;
label_3fe794:
    // 0x3fe794: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3fe794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3fe798:
    // 0x3fe798: 0x12420016  beq         $s2, $v0, . + 4 + (0x16 << 2)
label_3fe79c:
    if (ctx->pc == 0x3FE79Cu) {
        ctx->pc = 0x3FE7A0u;
        goto label_3fe7a0;
    }
    ctx->pc = 0x3FE798u;
    {
        const bool branch_taken_0x3fe798 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe798) {
            ctx->pc = 0x3FE7F4u;
            goto label_3fe7f4;
        }
    }
    ctx->pc = 0x3FE7A0u;
label_3fe7a0:
    // 0x3fe7a0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3fe7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3fe7a4:
    // 0x3fe7a4: 0x12420013  beq         $s2, $v0, . + 4 + (0x13 << 2)
label_3fe7a8:
    if (ctx->pc == 0x3FE7A8u) {
        ctx->pc = 0x3FE7ACu;
        goto label_3fe7ac;
    }
    ctx->pc = 0x3FE7A4u;
    {
        const bool branch_taken_0x3fe7a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe7a4) {
            ctx->pc = 0x3FE7F4u;
            goto label_3fe7f4;
        }
    }
    ctx->pc = 0x3FE7ACu;
label_3fe7ac:
    // 0x3fe7ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3fe7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3fe7b0:
    // 0x3fe7b0: 0x12420010  beq         $s2, $v0, . + 4 + (0x10 << 2)
label_3fe7b4:
    if (ctx->pc == 0x3FE7B4u) {
        ctx->pc = 0x3FE7B8u;
        goto label_3fe7b8;
    }
    ctx->pc = 0x3FE7B0u;
    {
        const bool branch_taken_0x3fe7b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe7b0) {
            ctx->pc = 0x3FE7F4u;
            goto label_3fe7f4;
        }
    }
    ctx->pc = 0x3FE7B8u;
label_3fe7b8:
    // 0x3fe7b8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3fe7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3fe7bc:
    // 0x3fe7bc: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
label_3fe7c0:
    if (ctx->pc == 0x3FE7C0u) {
        ctx->pc = 0x3FE7C4u;
        goto label_3fe7c4;
    }
    ctx->pc = 0x3FE7BCu;
    {
        const bool branch_taken_0x3fe7bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe7bc) {
            ctx->pc = 0x3FE7F4u;
            goto label_3fe7f4;
        }
    }
    ctx->pc = 0x3FE7C4u;
label_3fe7c4:
    // 0x3fe7c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3fe7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3fe7c8:
    // 0x3fe7c8: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
label_3fe7cc:
    if (ctx->pc == 0x3FE7CCu) {
        ctx->pc = 0x3FE7D0u;
        goto label_3fe7d0;
    }
    ctx->pc = 0x3FE7C8u;
    {
        const bool branch_taken_0x3fe7c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe7c8) {
            ctx->pc = 0x3FE7F4u;
            goto label_3fe7f4;
        }
    }
    ctx->pc = 0x3FE7D0u;
label_3fe7d0:
    // 0x3fe7d0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3fe7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3fe7d4:
    // 0x3fe7d4: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
label_3fe7d8:
    if (ctx->pc == 0x3FE7D8u) {
        ctx->pc = 0x3FE7DCu;
        goto label_3fe7dc;
    }
    ctx->pc = 0x3FE7D4u;
    {
        const bool branch_taken_0x3fe7d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe7d4) {
            ctx->pc = 0x3FE7F4u;
            goto label_3fe7f4;
        }
    }
    ctx->pc = 0x3FE7DCu;
label_3fe7dc:
    // 0x3fe7dc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3fe7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3fe7e0:
    // 0x3fe7e0: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
label_3fe7e4:
    if (ctx->pc == 0x3FE7E4u) {
        ctx->pc = 0x3FE7E8u;
        goto label_3fe7e8;
    }
    ctx->pc = 0x3FE7E0u;
    {
        const bool branch_taken_0x3fe7e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe7e0) {
            ctx->pc = 0x3FE7F4u;
            goto label_3fe7f4;
        }
    }
    ctx->pc = 0x3FE7E8u;
label_3fe7e8:
    // 0x3fe7e8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3fe7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3fe7ec:
    // 0x3fe7ec: 0x56420002  bnel        $s2, $v0, . + 4 + (0x2 << 2)
label_3fe7f0:
    if (ctx->pc == 0x3FE7F0u) {
        ctx->pc = 0x3FE7F0u;
            // 0x3fe7f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3FE7F4u;
        goto label_3fe7f4;
    }
    ctx->pc = 0x3FE7ECu;
    {
        const bool branch_taken_0x3fe7ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fe7ec) {
            ctx->pc = 0x3FE7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE7ECu;
            // 0x3fe7f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FE7F8u;
            goto label_3fe7f8;
        }
    }
    ctx->pc = 0x3FE7F4u;
label_3fe7f4:
    // 0x3fe7f4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3fe7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fe7f8:
    // 0x3fe7f8: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x3fe7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3fe7fc:
    // 0x3fe7fc: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x3fe7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3fe800:
    // 0x3fe800: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3fe800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3fe804:
    // 0x3fe804: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3fe804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3fe808:
    // 0x3fe808: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3fe808u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3fe80c:
    // 0x3fe80c: 0xf012  mflo        $fp
    ctx->pc = 0x3fe80cu;
    SET_GPR_U64(ctx, 30, ctx->lo);
label_3fe810:
    // 0x3fe810: 0x53c0001b  beql        $fp, $zero, . + 4 + (0x1B << 2)
label_3fe814:
    if (ctx->pc == 0x3FE814u) {
        ctx->pc = 0x3FE814u;
            // 0x3fe814: 0x26a400c0  addiu       $a0, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->pc = 0x3FE818u;
        goto label_3fe818;
    }
    ctx->pc = 0x3FE810u;
    {
        const bool branch_taken_0x3fe810 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe810) {
            ctx->pc = 0x3FE814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE810u;
            // 0x3fe814: 0x26a400c0  addiu       $a0, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FE880u;
            goto label_3fe880;
        }
    }
    ctx->pc = 0x3FE818u;
label_3fe818:
    // 0x3fe818: 0x26a400c0  addiu       $a0, $s5, 0xC0
    ctx->pc = 0x3fe818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
label_3fe81c:
    // 0x3fe81c: 0xc100504  jal         func_401410
label_3fe820:
    if (ctx->pc == 0x3FE820u) {
        ctx->pc = 0x3FE820u;
            // 0x3fe820: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE824u;
        goto label_3fe824;
    }
    ctx->pc = 0x3FE81Cu;
    SET_GPR_U32(ctx, 31, 0x3FE824u);
    ctx->pc = 0x3FE820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE81Cu;
            // 0x3fe820: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401410u;
    if (runtime->hasFunction(0x401410u)) {
        auto targetFn = runtime->lookupFunction(0x401410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE824u; }
        if (ctx->pc != 0x3FE824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401410_0x401410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE824u; }
        if (ctx->pc != 0x3FE824u) { return; }
    }
    ctx->pc = 0x3FE824u;
label_3fe824:
    // 0x3fe824: 0x26a400c0  addiu       $a0, $s5, 0xC0
    ctx->pc = 0x3fe824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
label_3fe828:
    // 0x3fe828: 0xc1001f8  jal         func_4007E0
label_3fe82c:
    if (ctx->pc == 0x3FE82Cu) {
        ctx->pc = 0x3FE82Cu;
            // 0x3fe82c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE830u;
        goto label_3fe830;
    }
    ctx->pc = 0x3FE828u;
    SET_GPR_U32(ctx, 31, 0x3FE830u);
    ctx->pc = 0x3FE82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE828u;
            // 0x3fe82c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4007E0u;
    if (runtime->hasFunction(0x4007E0u)) {
        auto targetFn = runtime->lookupFunction(0x4007E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE830u; }
        if (ctx->pc != 0x3FE830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004007E0_0x4007e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE830u; }
        if (ctx->pc != 0x3FE830u) { return; }
    }
    ctx->pc = 0x3FE830u;
label_3fe830:
    // 0x3fe830: 0x26a400cc  addiu       $a0, $s5, 0xCC
    ctx->pc = 0x3fe830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 204));
label_3fe834:
    // 0x3fe834: 0xc100504  jal         func_401410
label_3fe838:
    if (ctx->pc == 0x3FE838u) {
        ctx->pc = 0x3FE838u;
            // 0x3fe838: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE83Cu;
        goto label_3fe83c;
    }
    ctx->pc = 0x3FE834u;
    SET_GPR_U32(ctx, 31, 0x3FE83Cu);
    ctx->pc = 0x3FE838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE834u;
            // 0x3fe838: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401410u;
    if (runtime->hasFunction(0x401410u)) {
        auto targetFn = runtime->lookupFunction(0x401410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE83Cu; }
        if (ctx->pc != 0x3FE83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401410_0x401410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE83Cu; }
        if (ctx->pc != 0x3FE83Cu) { return; }
    }
    ctx->pc = 0x3FE83Cu;
label_3fe83c:
    // 0x3fe83c: 0x26a400cc  addiu       $a0, $s5, 0xCC
    ctx->pc = 0x3fe83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 204));
label_3fe840:
    // 0x3fe840: 0xc1001f8  jal         func_4007E0
label_3fe844:
    if (ctx->pc == 0x3FE844u) {
        ctx->pc = 0x3FE844u;
            // 0x3fe844: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE848u;
        goto label_3fe848;
    }
    ctx->pc = 0x3FE840u;
    SET_GPR_U32(ctx, 31, 0x3FE848u);
    ctx->pc = 0x3FE844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE840u;
            // 0x3fe844: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4007E0u;
    if (runtime->hasFunction(0x4007E0u)) {
        auto targetFn = runtime->lookupFunction(0x4007E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE848u; }
        if (ctx->pc != 0x3FE848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004007E0_0x4007e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE848u; }
        if (ctx->pc != 0x3FE848u) { return; }
    }
    ctx->pc = 0x3FE848u;
label_3fe848:
    // 0x3fe848: 0x26a400a8  addiu       $a0, $s5, 0xA8
    ctx->pc = 0x3fe848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 168));
label_3fe84c:
    // 0x3fe84c: 0xc100220  jal         func_400880
label_3fe850:
    if (ctx->pc == 0x3FE850u) {
        ctx->pc = 0x3FE850u;
            // 0x3fe850: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE854u;
        goto label_3fe854;
    }
    ctx->pc = 0x3FE84Cu;
    SET_GPR_U32(ctx, 31, 0x3FE854u);
    ctx->pc = 0x3FE850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE84Cu;
            // 0x3fe850: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x400880u;
    if (runtime->hasFunction(0x400880u)) {
        auto targetFn = runtime->lookupFunction(0x400880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE854u; }
        if (ctx->pc != 0x3FE854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00400880_0x400880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE854u; }
        if (ctx->pc != 0x3FE854u) { return; }
    }
    ctx->pc = 0x3FE854u;
label_3fe854:
    // 0x3fe854: 0x26a400a8  addiu       $a0, $s5, 0xA8
    ctx->pc = 0x3fe854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 168));
label_3fe858:
    // 0x3fe858: 0xc100280  jal         func_400A00
label_3fe85c:
    if (ctx->pc == 0x3FE85Cu) {
        ctx->pc = 0x3FE85Cu;
            // 0x3fe85c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE860u;
        goto label_3fe860;
    }
    ctx->pc = 0x3FE858u;
    SET_GPR_U32(ctx, 31, 0x3FE860u);
    ctx->pc = 0x3FE85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE858u;
            // 0x3fe85c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x400A00u;
    if (runtime->hasFunction(0x400A00u)) {
        auto targetFn = runtime->lookupFunction(0x400A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE860u; }
        if (ctx->pc != 0x3FE860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00400A00_0x400a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE860u; }
        if (ctx->pc != 0x3FE860u) { return; }
    }
    ctx->pc = 0x3FE860u;
label_3fe860:
    // 0x3fe860: 0x26a400b4  addiu       $a0, $s5, 0xB4
    ctx->pc = 0x3fe860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 180));
label_3fe864:
    // 0x3fe864: 0xc100220  jal         func_400880
label_3fe868:
    if (ctx->pc == 0x3FE868u) {
        ctx->pc = 0x3FE868u;
            // 0x3fe868: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE86Cu;
        goto label_3fe86c;
    }
    ctx->pc = 0x3FE864u;
    SET_GPR_U32(ctx, 31, 0x3FE86Cu);
    ctx->pc = 0x3FE868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE864u;
            // 0x3fe868: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x400880u;
    if (runtime->hasFunction(0x400880u)) {
        auto targetFn = runtime->lookupFunction(0x400880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE86Cu; }
        if (ctx->pc != 0x3FE86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00400880_0x400880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE86Cu; }
        if (ctx->pc != 0x3FE86Cu) { return; }
    }
    ctx->pc = 0x3FE86Cu;
label_3fe86c:
    // 0x3fe86c: 0x26a400b4  addiu       $a0, $s5, 0xB4
    ctx->pc = 0x3fe86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 180));
label_3fe870:
    // 0x3fe870: 0xc100280  jal         func_400A00
label_3fe874:
    if (ctx->pc == 0x3FE874u) {
        ctx->pc = 0x3FE874u;
            // 0x3fe874: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FE878u;
        goto label_3fe878;
    }
    ctx->pc = 0x3FE870u;
    SET_GPR_U32(ctx, 31, 0x3FE878u);
    ctx->pc = 0x3FE874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE870u;
            // 0x3fe874: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x400A00u;
    if (runtime->hasFunction(0x400A00u)) {
        auto targetFn = runtime->lookupFunction(0x400A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE878u; }
        if (ctx->pc != 0x3FE878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00400A00_0x400a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE878u; }
        if (ctx->pc != 0x3FE878u) { return; }
    }
    ctx->pc = 0x3FE878u;
label_3fe878:
    // 0x3fe878: 0x10000019  b           . + 4 + (0x19 << 2)
label_3fe87c:
    if (ctx->pc == 0x3FE87Cu) {
        ctx->pc = 0x3FE87Cu;
            // 0x3fe87c: 0x8eb600c8  lw          $s6, 0xC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
        ctx->pc = 0x3FE880u;
        goto label_3fe880;
    }
    ctx->pc = 0x3FE878u;
    {
        const bool branch_taken_0x3fe878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE878u;
            // 0x3fe87c: 0x8eb600c8  lw          $s6, 0xC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe878) {
            ctx->pc = 0x3FE8E0u;
            goto label_3fe8e0;
        }
    }
    ctx->pc = 0x3FE880u;
label_3fe880:
    // 0x3fe880: 0xc100504  jal         func_401410
label_3fe884:
    if (ctx->pc == 0x3FE884u) {
        ctx->pc = 0x3FE884u;
            // 0x3fe884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FE888u;
        goto label_3fe888;
    }
    ctx->pc = 0x3FE880u;
    SET_GPR_U32(ctx, 31, 0x3FE888u);
    ctx->pc = 0x3FE884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE880u;
            // 0x3fe884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401410u;
    if (runtime->hasFunction(0x401410u)) {
        auto targetFn = runtime->lookupFunction(0x401410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE888u; }
        if (ctx->pc != 0x3FE888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401410_0x401410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE888u; }
        if (ctx->pc != 0x3FE888u) { return; }
    }
    ctx->pc = 0x3FE888u;
label_3fe888:
    // 0x3fe888: 0x26a400c0  addiu       $a0, $s5, 0xC0
    ctx->pc = 0x3fe888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
label_3fe88c:
    // 0x3fe88c: 0xc1001f8  jal         func_4007E0
label_3fe890:
    if (ctx->pc == 0x3FE890u) {
        ctx->pc = 0x3FE890u;
            // 0x3fe890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FE894u;
        goto label_3fe894;
    }
    ctx->pc = 0x3FE88Cu;
    SET_GPR_U32(ctx, 31, 0x3FE894u);
    ctx->pc = 0x3FE890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE88Cu;
            // 0x3fe890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4007E0u;
    if (runtime->hasFunction(0x4007E0u)) {
        auto targetFn = runtime->lookupFunction(0x4007E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE894u; }
        if (ctx->pc != 0x3FE894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004007E0_0x4007e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE894u; }
        if (ctx->pc != 0x3FE894u) { return; }
    }
    ctx->pc = 0x3FE894u;
label_3fe894:
    // 0x3fe894: 0x26a400cc  addiu       $a0, $s5, 0xCC
    ctx->pc = 0x3fe894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 204));
label_3fe898:
    // 0x3fe898: 0xc100504  jal         func_401410
label_3fe89c:
    if (ctx->pc == 0x3FE89Cu) {
        ctx->pc = 0x3FE89Cu;
            // 0x3fe89c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FE8A0u;
        goto label_3fe8a0;
    }
    ctx->pc = 0x3FE898u;
    SET_GPR_U32(ctx, 31, 0x3FE8A0u);
    ctx->pc = 0x3FE89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE898u;
            // 0x3fe89c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401410u;
    if (runtime->hasFunction(0x401410u)) {
        auto targetFn = runtime->lookupFunction(0x401410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE8A0u; }
        if (ctx->pc != 0x3FE8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401410_0x401410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE8A0u; }
        if (ctx->pc != 0x3FE8A0u) { return; }
    }
    ctx->pc = 0x3FE8A0u;
label_3fe8a0:
    // 0x3fe8a0: 0x26a400cc  addiu       $a0, $s5, 0xCC
    ctx->pc = 0x3fe8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 204));
label_3fe8a4:
    // 0x3fe8a4: 0xc1001f8  jal         func_4007E0
label_3fe8a8:
    if (ctx->pc == 0x3FE8A8u) {
        ctx->pc = 0x3FE8A8u;
            // 0x3fe8a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FE8ACu;
        goto label_3fe8ac;
    }
    ctx->pc = 0x3FE8A4u;
    SET_GPR_U32(ctx, 31, 0x3FE8ACu);
    ctx->pc = 0x3FE8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE8A4u;
            // 0x3fe8a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4007E0u;
    if (runtime->hasFunction(0x4007E0u)) {
        auto targetFn = runtime->lookupFunction(0x4007E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE8ACu; }
        if (ctx->pc != 0x3FE8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004007E0_0x4007e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE8ACu; }
        if (ctx->pc != 0x3FE8ACu) { return; }
    }
    ctx->pc = 0x3FE8ACu;
label_3fe8ac:
    // 0x3fe8ac: 0x26a400a8  addiu       $a0, $s5, 0xA8
    ctx->pc = 0x3fe8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 168));
label_3fe8b0:
    // 0x3fe8b0: 0xc100220  jal         func_400880
label_3fe8b4:
    if (ctx->pc == 0x3FE8B4u) {
        ctx->pc = 0x3FE8B4u;
            // 0x3fe8b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FE8B8u;
        goto label_3fe8b8;
    }
    ctx->pc = 0x3FE8B0u;
    SET_GPR_U32(ctx, 31, 0x3FE8B8u);
    ctx->pc = 0x3FE8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE8B0u;
            // 0x3fe8b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x400880u;
    if (runtime->hasFunction(0x400880u)) {
        auto targetFn = runtime->lookupFunction(0x400880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE8B8u; }
        if (ctx->pc != 0x3FE8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00400880_0x400880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE8B8u; }
        if (ctx->pc != 0x3FE8B8u) { return; }
    }
    ctx->pc = 0x3FE8B8u;
label_3fe8b8:
    // 0x3fe8b8: 0x26a400a8  addiu       $a0, $s5, 0xA8
    ctx->pc = 0x3fe8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 168));
label_3fe8bc:
    // 0x3fe8bc: 0xc100280  jal         func_400A00
label_3fe8c0:
    if (ctx->pc == 0x3FE8C0u) {
        ctx->pc = 0x3FE8C0u;
            // 0x3fe8c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FE8C4u;
        goto label_3fe8c4;
    }
    ctx->pc = 0x3FE8BCu;
    SET_GPR_U32(ctx, 31, 0x3FE8C4u);
    ctx->pc = 0x3FE8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE8BCu;
            // 0x3fe8c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x400A00u;
    if (runtime->hasFunction(0x400A00u)) {
        auto targetFn = runtime->lookupFunction(0x400A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE8C4u; }
        if (ctx->pc != 0x3FE8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00400A00_0x400a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE8C4u; }
        if (ctx->pc != 0x3FE8C4u) { return; }
    }
    ctx->pc = 0x3FE8C4u;
label_3fe8c4:
    // 0x3fe8c4: 0x26a400b4  addiu       $a0, $s5, 0xB4
    ctx->pc = 0x3fe8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 180));
label_3fe8c8:
    // 0x3fe8c8: 0xc100220  jal         func_400880
label_3fe8cc:
    if (ctx->pc == 0x3FE8CCu) {
        ctx->pc = 0x3FE8CCu;
            // 0x3fe8cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FE8D0u;
        goto label_3fe8d0;
    }
    ctx->pc = 0x3FE8C8u;
    SET_GPR_U32(ctx, 31, 0x3FE8D0u);
    ctx->pc = 0x3FE8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE8C8u;
            // 0x3fe8cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x400880u;
    if (runtime->hasFunction(0x400880u)) {
        auto targetFn = runtime->lookupFunction(0x400880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE8D0u; }
        if (ctx->pc != 0x3FE8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00400880_0x400880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE8D0u; }
        if (ctx->pc != 0x3FE8D0u) { return; }
    }
    ctx->pc = 0x3FE8D0u;
label_3fe8d0:
    // 0x3fe8d0: 0x26a400b4  addiu       $a0, $s5, 0xB4
    ctx->pc = 0x3fe8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 180));
label_3fe8d4:
    // 0x3fe8d4: 0xc100280  jal         func_400A00
label_3fe8d8:
    if (ctx->pc == 0x3FE8D8u) {
        ctx->pc = 0x3FE8D8u;
            // 0x3fe8d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FE8DCu;
        goto label_3fe8dc;
    }
    ctx->pc = 0x3FE8D4u;
    SET_GPR_U32(ctx, 31, 0x3FE8DCu);
    ctx->pc = 0x3FE8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE8D4u;
            // 0x3fe8d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x400A00u;
    if (runtime->hasFunction(0x400A00u)) {
        auto targetFn = runtime->lookupFunction(0x400A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE8DCu; }
        if (ctx->pc != 0x3FE8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00400A00_0x400a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE8DCu; }
        if (ctx->pc != 0x3FE8DCu) { return; }
    }
    ctx->pc = 0x3FE8DCu;
label_3fe8dc:
    // 0x3fe8dc: 0x8eb600c8  lw          $s6, 0xC8($s5)
    ctx->pc = 0x3fe8dcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_3fe8e0:
    // 0x3fe8e0: 0x8eb000d4  lw          $s0, 0xD4($s5)
    ctx->pc = 0x3fe8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
label_3fe8e4:
    // 0x3fe8e4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3fe8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3fe8e8:
    // 0x3fe8e8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x3fe8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_3fe8ec:
    // 0x3fe8ec: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x3fe8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_3fe8f0:
    // 0x3fe8f0: 0x16e0000f  bnez        $s7, . + 4 + (0xF << 2)
label_3fe8f4:
    if (ctx->pc == 0x3FE8F4u) {
        ctx->pc = 0x3FE8F8u;
        goto label_3fe8f8;
    }
    ctx->pc = 0x3FE8F0u;
    {
        const bool branch_taken_0x3fe8f0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe8f0) {
            ctx->pc = 0x3FE930u;
            goto label_3fe930;
        }
    }
    ctx->pc = 0x3FE8F8u;
label_3fe8f8:
    // 0x3fe8f8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3fe8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3fe8fc:
    // 0x3fe8fc: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3fe8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3fe900:
    // 0x3fe900: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3fe900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3fe904:
    // 0x3fe904: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3fe904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_3fe908:
    // 0x3fe908: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3fe908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3fe90c:
    // 0x3fe90c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x3fe90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_3fe910:
    // 0x3fe910: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x3fe910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3fe914:
    // 0x3fe914: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3fe914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3fe918:
    // 0x3fe918: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3fe918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3fe91c:
    // 0x3fe91c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3fe91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_3fe920:
    // 0x3fe920: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x3fe920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3fe924:
    // 0x3fe924: 0x10000012  b           . + 4 + (0x12 << 2)
label_3fe928:
    if (ctx->pc == 0x3FE928u) {
        ctx->pc = 0x3FE928u;
            // 0x3fe928: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x3FE92Cu;
        goto label_3fe92c;
    }
    ctx->pc = 0x3FE924u;
    {
        const bool branch_taken_0x3fe924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE924u;
            // 0x3fe928: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe924) {
            ctx->pc = 0x3FE970u;
            goto label_3fe970;
        }
    }
    ctx->pc = 0x3FE92Cu;
label_3fe92c:
    // 0x3fe92c: 0x0  nop
    ctx->pc = 0x3fe92cu;
    // NOP
label_3fe930:
    // 0x3fe930: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x3fe930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3fe934:
    // 0x3fe934: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x3fe934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3fe938:
    // 0x3fe938: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x3fe938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3fe93c:
    // 0x3fe93c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x3fe93cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_3fe940:
    // 0x3fe940: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3fe940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3fe944:
    // 0x3fe944: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3fe944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fe948:
    // 0x3fe948: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fe948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fe94c:
    // 0x3fe94c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3fe94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3fe950:
    // 0x3fe950: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3fe950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3fe954:
    // 0x3fe954: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3fe954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_3fe958:
    // 0x3fe958: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x3fe958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_3fe95c:
    // 0x3fe95c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3fe95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3fe960:
    // 0x3fe960: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fe960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fe964:
    // 0x3fe964: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x3fe964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_3fe968:
    // 0x3fe968: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3fe968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3fe96c:
    // 0x3fe96c: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x3fe96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_3fe970:
    // 0x3fe970: 0x16203c  dsll32      $a0, $s6, 0
    ctx->pc = 0x3fe970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 0));
label_3fe974:
    // 0x3fe974: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3fe974u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_3fe978:
    // 0x3fe978: 0xc075128  jal         func_1D44A0
label_3fe97c:
    if (ctx->pc == 0x3FE97Cu) {
        ctx->pc = 0x3FE97Cu;
            // 0x3fe97c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3FE980u;
        goto label_3fe980;
    }
    ctx->pc = 0x3FE978u;
    SET_GPR_U32(ctx, 31, 0x3FE980u);
    ctx->pc = 0x3FE97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FE978u;
            // 0x3fe97c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE980u; }
        if (ctx->pc != 0x3FE980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FE980u; }
        if (ctx->pc != 0x3FE980u) { return; }
    }
    ctx->pc = 0x3FE980u;
label_3fe980:
    // 0x3fe980: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x3fe980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
label_3fe984:
    // 0x3fe984: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fe984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fe988:
    // 0x3fe988: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3fe988u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3fe98c:
    // 0x3fe98c: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3fe98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3fe990:
    // 0x3fe990: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3fe990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fe994:
    // 0x3fe994: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3fe994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3fe998:
    // 0x3fe998: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fe998u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fe99c:
    // 0x3fe99c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3fe9a0:
    if (ctx->pc == 0x3FE9A0u) {
        ctx->pc = 0x3FE9A4u;
        goto label_3fe9a4;
    }
    ctx->pc = 0x3FE99Cu;
    {
        const bool branch_taken_0x3fe99c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe99c) {
            ctx->pc = 0x3FE9B0u;
            goto label_3fe9b0;
        }
    }
    ctx->pc = 0x3FE9A4u;
label_3fe9a4:
    // 0x3fe9a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fe9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fe9a8:
    // 0x3fe9a8: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3fe9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3fe9ac:
    // 0x3fe9ac: 0x0  nop
    ctx->pc = 0x3fe9acu;
    // NOP
label_3fe9b0:
    // 0x3fe9b0: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x3fe9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_3fe9b4:
    // 0x3fe9b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3fe9b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3fe9b8:
    // 0x3fe9b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3fe9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fe9bc:
    // 0x3fe9bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fe9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fe9c0:
    // 0x3fe9c0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fe9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fe9c4:
    // 0x3fe9c4: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3fe9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3fe9c8:
    // 0x3fe9c8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fe9c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fe9cc:
    // 0x3fe9cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3fe9d0:
    if (ctx->pc == 0x3FE9D0u) {
        ctx->pc = 0x3FE9D4u;
        goto label_3fe9d4;
    }
    ctx->pc = 0x3FE9CCu;
    {
        const bool branch_taken_0x3fe9cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe9cc) {
            ctx->pc = 0x3FE9E0u;
            goto label_3fe9e0;
        }
    }
    ctx->pc = 0x3FE9D4u;
label_3fe9d4:
    // 0x3fe9d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fe9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fe9d8:
    // 0x3fe9d8: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3fe9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3fe9dc:
    // 0x3fe9dc: 0x0  nop
    ctx->pc = 0x3fe9dcu;
    // NOP
label_3fe9e0:
    // 0x3fe9e0: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x3fe9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_3fe9e4:
    // 0x3fe9e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3fe9e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3fe9e8:
    // 0x3fe9e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3fe9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fe9ec:
    // 0x3fe9ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fe9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fe9f0:
    // 0x3fe9f0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3fe9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3fe9f4:
    // 0x3fe9f4: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3fe9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3fe9f8:
    // 0x3fe9f8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fe9f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fe9fc:
    // 0x3fe9fc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3fea00:
    if (ctx->pc == 0x3FEA00u) {
        ctx->pc = 0x3FEA04u;
        goto label_3fea04;
    }
    ctx->pc = 0x3FE9FCu;
    {
        const bool branch_taken_0x3fe9fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe9fc) {
            ctx->pc = 0x3FEA10u;
            goto label_3fea10;
        }
    }
    ctx->pc = 0x3FEA04u;
label_3fea04:
    // 0x3fea04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fea08:
    // 0x3fea08: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3fea08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3fea0c:
    // 0x3fea0c: 0x0  nop
    ctx->pc = 0x3fea0cu;
    // NOP
label_3fea10:
    // 0x3fea10: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x3fea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3fea14:
    // 0x3fea14: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x3fea14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3fea18:
    // 0x3fea18: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x3fea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3fea1c:
    // 0x3fea1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fea1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fea20:
    // 0x3fea20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3fea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3fea24:
    // 0x3fea24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3fea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fea28:
    // 0x3fea28: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x3fea28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fea2c:
    // 0x3fea2c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x3fea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3fea30:
    // 0x3fea30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3fea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fea34:
    // 0x3fea34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fea34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3fea38:
    // 0x3fea38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3fea38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3fea3c:
    // 0x3fea3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3fea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3fea40:
    // 0x3fea40: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3fea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3fea44:
    // 0x3fea44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3fea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3fea48:
    // 0x3fea48: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3fea48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3fea4c:
    // 0x3fea4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3fea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3fea50:
    // 0x3fea50: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3fea50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3fea54:
    // 0x3fea54: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3fea58:
    if (ctx->pc == 0x3FEA58u) {
        ctx->pc = 0x3FEA58u;
            // 0x3fea58: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x3FEA5Cu;
        goto label_3fea5c;
    }
    ctx->pc = 0x3FEA54u;
    {
        const bool branch_taken_0x3fea54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FEA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEA54u;
            // 0x3fea58: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fea54) {
            ctx->pc = 0x3FEA30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fea30;
        }
    }
    ctx->pc = 0x3FEA5Cu;
label_3fea5c:
    // 0x3fea5c: 0x8ea300dc  lw          $v1, 0xDC($s5)
    ctx->pc = 0x3fea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
label_3fea60:
    // 0x3fea60: 0x26a400d8  addiu       $a0, $s5, 0xD8
    ctx->pc = 0x3fea60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 216));
label_3fea64:
    // 0x3fea64: 0x8ea200e0  lw          $v0, 0xE0($s5)
    ctx->pc = 0x3fea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
label_3fea68:
    // 0x3fea68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fea68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fea6c:
    // 0x3fea6c: 0x26270004  addiu       $a3, $s1, 0x4
    ctx->pc = 0x3fea6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3fea70:
    // 0x3fea70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3fea70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3fea74:
    // 0x3fea74: 0xc0a997c  jal         func_2A65F0
label_3fea78:
    if (ctx->pc == 0x3FEA78u) {
        ctx->pc = 0x3FEA78u;
            // 0x3fea78: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3FEA7Cu;
        goto label_3fea7c;
    }
    ctx->pc = 0x3FEA74u;
    SET_GPR_U32(ctx, 31, 0x3FEA7Cu);
    ctx->pc = 0x3FEA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEA74u;
            // 0x3fea78: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEA7Cu; }
        if (ctx->pc != 0x3FEA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEA7Cu; }
        if (ctx->pc != 0x3FEA7Cu) { return; }
    }
    ctx->pc = 0x3FEA7Cu;
label_3fea7c:
    // 0x3fea7c: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x3fea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3fea80:
    // 0x3fea80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3fea80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3fea84:
    // 0x3fea84: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3fea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3fea88:
    // 0x3fea88: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3fea88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3fea8c:
    // 0x3fea8c: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x3fea8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3fea90:
    // 0x3fea90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fea94:
    // 0x3fea94: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3fea94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fea98:
    // 0x3fea98: 0xc0ffb88  jal         func_3FEE20
label_3fea9c:
    if (ctx->pc == 0x3FEA9Cu) {
        ctx->pc = 0x3FEA9Cu;
            // 0x3fea9c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3FEAA0u;
        goto label_3feaa0;
    }
    ctx->pc = 0x3FEA98u;
    SET_GPR_U32(ctx, 31, 0x3FEAA0u);
    ctx->pc = 0x3FEA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEA98u;
            // 0x3fea9c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FEE20u;
    if (runtime->hasFunction(0x3FEE20u)) {
        auto targetFn = runtime->lookupFunction(0x3FEE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEAA0u; }
        if (ctx->pc != 0x3FEAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FEE20_0x3fee20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEAA0u; }
        if (ctx->pc != 0x3FEAA0u) { return; }
    }
    ctx->pc = 0x3FEAA0u;
label_3feaa0:
    // 0x3feaa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3feaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3feaa4:
    // 0x3feaa4: 0x12430026  beq         $s2, $v1, . + 4 + (0x26 << 2)
label_3feaa8:
    if (ctx->pc == 0x3FEAA8u) {
        ctx->pc = 0x3FEAA8u;
            // 0x3feaa8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3FEAACu;
        goto label_3feaac;
    }
    ctx->pc = 0x3FEAA4u;
    {
        const bool branch_taken_0x3feaa4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x3FEAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEAA4u;
            // 0x3feaa8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feaa4) {
            ctx->pc = 0x3FEB40u;
            goto label_3feb40;
        }
    }
    ctx->pc = 0x3FEAACu;
label_3feaac:
    // 0x3feaac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3feaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3feab0:
    // 0x3feab0: 0x12430023  beq         $s2, $v1, . + 4 + (0x23 << 2)
label_3feab4:
    if (ctx->pc == 0x3FEAB4u) {
        ctx->pc = 0x3FEAB8u;
        goto label_3feab8;
    }
    ctx->pc = 0x3FEAB0u;
    {
        const bool branch_taken_0x3feab0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3feab0) {
            ctx->pc = 0x3FEB40u;
            goto label_3feb40;
        }
    }
    ctx->pc = 0x3FEAB8u;
label_3feab8:
    // 0x3feab8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3feab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3feabc:
    // 0x3feabc: 0x12430020  beq         $s2, $v1, . + 4 + (0x20 << 2)
label_3feac0:
    if (ctx->pc == 0x3FEAC0u) {
        ctx->pc = 0x3FEAC4u;
        goto label_3feac4;
    }
    ctx->pc = 0x3FEABCu;
    {
        const bool branch_taken_0x3feabc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3feabc) {
            ctx->pc = 0x3FEB40u;
            goto label_3feb40;
        }
    }
    ctx->pc = 0x3FEAC4u;
label_3feac4:
    // 0x3feac4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3feac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3feac8:
    // 0x3feac8: 0x1243001d  beq         $s2, $v1, . + 4 + (0x1D << 2)
label_3feacc:
    if (ctx->pc == 0x3FEACCu) {
        ctx->pc = 0x3FEAD0u;
        goto label_3fead0;
    }
    ctx->pc = 0x3FEAC8u;
    {
        const bool branch_taken_0x3feac8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3feac8) {
            ctx->pc = 0x3FEB40u;
            goto label_3feb40;
        }
    }
    ctx->pc = 0x3FEAD0u;
label_3fead0:
    // 0x3fead0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3fead0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fead4:
    // 0x3fead4: 0x1243001a  beq         $s2, $v1, . + 4 + (0x1A << 2)
label_3fead8:
    if (ctx->pc == 0x3FEAD8u) {
        ctx->pc = 0x3FEADCu;
        goto label_3feadc;
    }
    ctx->pc = 0x3FEAD4u;
    {
        const bool branch_taken_0x3fead4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fead4) {
            ctx->pc = 0x3FEB40u;
            goto label_3feb40;
        }
    }
    ctx->pc = 0x3FEADCu;
label_3feadc:
    // 0x3feadc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3feadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3feae0:
    // 0x3feae0: 0x12430017  beq         $s2, $v1, . + 4 + (0x17 << 2)
label_3feae4:
    if (ctx->pc == 0x3FEAE4u) {
        ctx->pc = 0x3FEAE8u;
        goto label_3feae8;
    }
    ctx->pc = 0x3FEAE0u;
    {
        const bool branch_taken_0x3feae0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3feae0) {
            ctx->pc = 0x3FEB40u;
            goto label_3feb40;
        }
    }
    ctx->pc = 0x3FEAE8u;
label_3feae8:
    // 0x3feae8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3feae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3feaec:
    // 0x3feaec: 0x12430014  beq         $s2, $v1, . + 4 + (0x14 << 2)
label_3feaf0:
    if (ctx->pc == 0x3FEAF0u) {
        ctx->pc = 0x3FEAF4u;
        goto label_3feaf4;
    }
    ctx->pc = 0x3FEAECu;
    {
        const bool branch_taken_0x3feaec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3feaec) {
            ctx->pc = 0x3FEB40u;
            goto label_3feb40;
        }
    }
    ctx->pc = 0x3FEAF4u;
label_3feaf4:
    // 0x3feaf4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3feaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3feaf8:
    // 0x3feaf8: 0x12430011  beq         $s2, $v1, . + 4 + (0x11 << 2)
label_3feafc:
    if (ctx->pc == 0x3FEAFCu) {
        ctx->pc = 0x3FEB00u;
        goto label_3feb00;
    }
    ctx->pc = 0x3FEAF8u;
    {
        const bool branch_taken_0x3feaf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3feaf8) {
            ctx->pc = 0x3FEB40u;
            goto label_3feb40;
        }
    }
    ctx->pc = 0x3FEB00u;
label_3feb00:
    // 0x3feb00: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3feb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3feb04:
    // 0x3feb04: 0x1243000e  beq         $s2, $v1, . + 4 + (0xE << 2)
label_3feb08:
    if (ctx->pc == 0x3FEB08u) {
        ctx->pc = 0x3FEB0Cu;
        goto label_3feb0c;
    }
    ctx->pc = 0x3FEB04u;
    {
        const bool branch_taken_0x3feb04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3feb04) {
            ctx->pc = 0x3FEB40u;
            goto label_3feb40;
        }
    }
    ctx->pc = 0x3FEB0Cu;
label_3feb0c:
    // 0x3feb0c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3feb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3feb10:
    // 0x3feb10: 0x1243000b  beq         $s2, $v1, . + 4 + (0xB << 2)
label_3feb14:
    if (ctx->pc == 0x3FEB14u) {
        ctx->pc = 0x3FEB18u;
        goto label_3feb18;
    }
    ctx->pc = 0x3FEB10u;
    {
        const bool branch_taken_0x3feb10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3feb10) {
            ctx->pc = 0x3FEB40u;
            goto label_3feb40;
        }
    }
    ctx->pc = 0x3FEB18u;
label_3feb18:
    // 0x3feb18: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3feb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3feb1c:
    // 0x3feb1c: 0x12430008  beq         $s2, $v1, . + 4 + (0x8 << 2)
label_3feb20:
    if (ctx->pc == 0x3FEB20u) {
        ctx->pc = 0x3FEB24u;
        goto label_3feb24;
    }
    ctx->pc = 0x3FEB1Cu;
    {
        const bool branch_taken_0x3feb1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3feb1c) {
            ctx->pc = 0x3FEB40u;
            goto label_3feb40;
        }
    }
    ctx->pc = 0x3FEB24u;
label_3feb24:
    // 0x3feb24: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3feb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3feb28:
    // 0x3feb28: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
label_3feb2c:
    if (ctx->pc == 0x3FEB2Cu) {
        ctx->pc = 0x3FEB30u;
        goto label_3feb30;
    }
    ctx->pc = 0x3FEB28u;
    {
        const bool branch_taken_0x3feb28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3feb28) {
            ctx->pc = 0x3FEB40u;
            goto label_3feb40;
        }
    }
    ctx->pc = 0x3FEB30u;
label_3feb30:
    // 0x3feb30: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3feb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3feb34:
    // 0x3feb34: 0x1643003a  bne         $s2, $v1, . + 4 + (0x3A << 2)
label_3feb38:
    if (ctx->pc == 0x3FEB38u) {
        ctx->pc = 0x3FEB3Cu;
        goto label_3feb3c;
    }
    ctx->pc = 0x3FEB34u;
    {
        const bool branch_taken_0x3feb34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x3feb34) {
            ctx->pc = 0x3FEC20u;
            goto label_3fec20;
        }
    }
    ctx->pc = 0x3FEB3Cu;
label_3feb3c:
    // 0x3feb3c: 0x0  nop
    ctx->pc = 0x3feb3cu;
    // NOP
label_3feb40:
    // 0x3feb40: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x3feb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3feb44:
    // 0x3feb44: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x3feb44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3feb48:
    // 0x3feb48: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x3feb48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
label_3feb4c:
    // 0x3feb4c: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x3feb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3feb50:
    // 0x3feb50: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3feb50u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_3feb54:
    // 0x3feb54: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x3feb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3feb58:
    // 0x3feb58: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3feb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3feb5c:
    // 0x3feb5c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3feb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3feb60:
    // 0x3feb60: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x3feb60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_3feb64:
    // 0x3feb64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3feb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3feb68:
    // 0x3feb68: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3feb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3feb6c:
    // 0x3feb6c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3feb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3feb70:
    // 0x3feb70: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3feb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_3feb74:
    // 0x3feb74: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x3feb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_3feb78:
    // 0x3feb78: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3feb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3feb7c:
    // 0x3feb7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3feb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3feb80:
    // 0x3feb80: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x3feb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_3feb84:
    // 0x3feb84: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3feb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3feb88:
    // 0x3feb88: 0xc075128  jal         func_1D44A0
label_3feb8c:
    if (ctx->pc == 0x3FEB8Cu) {
        ctx->pc = 0x3FEB8Cu;
            // 0x3feb8c: 0xafa000d4  sw          $zero, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x3FEB90u;
        goto label_3feb90;
    }
    ctx->pc = 0x3FEB88u;
    SET_GPR_U32(ctx, 31, 0x3FEB90u);
    ctx->pc = 0x3FEB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEB88u;
            // 0x3feb8c: 0xafa000d4  sw          $zero, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEB90u; }
        if (ctx->pc != 0x3FEB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEB90u; }
        if (ctx->pc != 0x3FEB90u) { return; }
    }
    ctx->pc = 0x3FEB90u;
label_3feb90:
    // 0x3feb90: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x3feb90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
label_3feb94:
    // 0x3feb94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3feb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3feb98:
    // 0x3feb98: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3feb98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_3feb9c:
    // 0x3feb9c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x3feb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_3feba0:
    // 0x3feba0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3feba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3feba4:
    // 0x3feba4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x3feba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_3feba8:
    // 0x3feba8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3feba8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3febac:
    // 0x3febac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3febb0:
    if (ctx->pc == 0x3FEBB0u) {
        ctx->pc = 0x3FEBB4u;
        goto label_3febb4;
    }
    ctx->pc = 0x3FEBACu;
    {
        const bool branch_taken_0x3febac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3febac) {
            ctx->pc = 0x3FEBC0u;
            goto label_3febc0;
        }
    }
    ctx->pc = 0x3FEBB4u;
label_3febb4:
    // 0x3febb4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3febb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3febb8:
    // 0x3febb8: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x3febb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_3febbc:
    // 0x3febbc: 0x0  nop
    ctx->pc = 0x3febbcu;
    // NOP
label_3febc0:
    // 0x3febc0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3febc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_3febc4:
    // 0x3febc4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3febc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3febc8:
    // 0x3febc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3febc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3febcc:
    // 0x3febcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3febccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3febd0:
    // 0x3febd0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3febd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3febd4:
    // 0x3febd4: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3febd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3febd8:
    // 0x3febd8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3febd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3febdc:
    // 0x3febdc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3febe0:
    if (ctx->pc == 0x3FEBE0u) {
        ctx->pc = 0x3FEBE4u;
        goto label_3febe4;
    }
    ctx->pc = 0x3FEBDCu;
    {
        const bool branch_taken_0x3febdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3febdc) {
            ctx->pc = 0x3FEBF0u;
            goto label_3febf0;
        }
    }
    ctx->pc = 0x3FEBE4u;
label_3febe4:
    // 0x3febe4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3febe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3febe8:
    // 0x3febe8: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3febe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3febec:
    // 0x3febec: 0x0  nop
    ctx->pc = 0x3febecu;
    // NOP
label_3febf0:
    // 0x3febf0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3febf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_3febf4:
    // 0x3febf4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3febf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3febf8:
    // 0x3febf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3febf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3febfc:
    // 0x3febfc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3febfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fec00:
    // 0x3fec00: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3fec00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3fec04:
    // 0x3fec04: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3fec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3fec08:
    // 0x3fec08: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3fec08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3fec0c:
    // 0x3fec0c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3fec10:
    if (ctx->pc == 0x3FEC10u) {
        ctx->pc = 0x3FEC14u;
        goto label_3fec14;
    }
    ctx->pc = 0x3FEC0Cu;
    {
        const bool branch_taken_0x3fec0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fec0c) {
            ctx->pc = 0x3FEC20u;
            goto label_3fec20;
        }
    }
    ctx->pc = 0x3FEC14u;
label_3fec14:
    // 0x3fec14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fec14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fec18:
    // 0x3fec18: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3fec18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3fec1c:
    // 0x3fec1c: 0x0  nop
    ctx->pc = 0x3fec1cu;
    // NOP
label_3fec20:
    // 0x3fec20: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3fec20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3fec24:
    // 0x3fec24: 0x16203c  dsll32      $a0, $s6, 0
    ctx->pc = 0x3fec24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 0));
label_3fec28:
    // 0x3fec28: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3fec28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3fec2c:
    // 0x3fec2c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3fec2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_3fec30:
    // 0x3fec30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fec30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3fec34:
    // 0x3fec34: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x3fec34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_3fec38:
    // 0x3fec38: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3fec38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_3fec3c:
    // 0x3fec3c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3fec3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3fec40:
    // 0x3fec40: 0x24700020  addiu       $s0, $v1, 0x20
    ctx->pc = 0x3fec40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_3fec44:
    // 0x3fec44: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x3fec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3fec48:
    // 0x3fec48: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3fec48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3fec4c:
    // 0x3fec4c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x3fec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_3fec50:
    // 0x3fec50: 0x2fe182b  sltu        $v1, $s7, $fp
    ctx->pc = 0x3fec50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3fec54:
    // 0x3fec54: 0x1460ff26  bnez        $v1, . + 4 + (-0xDA << 2)
label_3fec58:
    if (ctx->pc == 0x3FEC58u) {
        ctx->pc = 0x3FEC58u;
            // 0x3fec58: 0x24960020  addiu       $s6, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x3FEC5Cu;
        goto label_3fec5c;
    }
    ctx->pc = 0x3FEC54u;
    {
        const bool branch_taken_0x3fec54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FEC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEC54u;
            // 0x3fec58: 0x24960020  addiu       $s6, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fec54) {
            ctx->pc = 0x3FE8F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fe8f0;
        }
    }
    ctx->pc = 0x3FEC5Cu;
label_3fec5c:
    // 0x3fec5c: 0x8ea600c8  lw          $a2, 0xC8($s5)
    ctx->pc = 0x3fec5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_3fec60:
    // 0x3fec60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fec60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fec64:
    // 0x3fec64: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3fec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3fec68:
    // 0x3fec68: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3fec68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3fec6c:
    // 0x3fec6c: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x3fec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_3fec70:
    // 0x3fec70: 0x3c52818  mult        $a1, $fp, $a1
    ctx->pc = 0x3fec70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3fec74:
    // 0x3fec74: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x3fec74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3fec78:
    // 0x3fec78: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3fec7c:
    if (ctx->pc == 0x3FEC7Cu) {
        ctx->pc = 0x3FEC7Cu;
            // 0x3fec7c: 0x8ea400d4  lw          $a0, 0xD4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
        ctx->pc = 0x3FEC80u;
        goto label_3fec80;
    }
    ctx->pc = 0x3FEC78u;
    {
        const bool branch_taken_0x3fec78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEC78u;
            // 0x3fec7c: 0x8ea400d4  lw          $a0, 0xD4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fec78) {
            ctx->pc = 0x3FEC88u;
            goto label_3fec88;
        }
    }
    ctx->pc = 0x3FEC80u;
label_3fec80:
    // 0x3fec80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fec80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fec84:
    // 0x3fec84: 0xac65e388  sw          $a1, -0x1C78($v1)
    ctx->pc = 0x3fec84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 5));
label_3fec88:
    // 0x3fec88: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x3fec88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
label_3fec8c:
    // 0x3fec8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fec90:
    // 0x3fec90: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3fec90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_3fec94:
    // 0x3fec94: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3fec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3fec98:
    // 0x3fec98: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3fec98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3fec9c:
    // 0x3fec9c: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x3fec9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_3feca0:
    // 0x3feca0: 0x3c52818  mult        $a1, $fp, $a1
    ctx->pc = 0x3feca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3feca4:
    // 0x3feca4: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x3feca4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3feca8:
    // 0x3feca8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3fecac:
    if (ctx->pc == 0x3FECACu) {
        ctx->pc = 0x3FECB0u;
        goto label_3fecb0;
    }
    ctx->pc = 0x3FECA8u;
    {
        const bool branch_taken_0x3feca8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3feca8) {
            ctx->pc = 0x3FECB8u;
            goto label_3fecb8;
        }
    }
    ctx->pc = 0x3FECB0u;
label_3fecb0:
    // 0x3fecb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fecb4:
    // 0x3fecb4: 0xac65e398  sw          $a1, -0x1C68($v1)
    ctx->pc = 0x3fecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 5));
label_3fecb8:
    // 0x3fecb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fecbc:
    // 0x3fecbc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3fecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_3fecc0:
    // 0x3fecc0: 0x7e082b  sltu        $at, $v1, $fp
    ctx->pc = 0x3fecc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3fecc4:
    // 0x3fecc4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3fecc8:
    if (ctx->pc == 0x3FECC8u) {
        ctx->pc = 0x3FECCCu;
        goto label_3feccc;
    }
    ctx->pc = 0x3FECC4u;
    {
        const bool branch_taken_0x3fecc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fecc4) {
            ctx->pc = 0x3FECD4u;
            goto label_3fecd4;
        }
    }
    ctx->pc = 0x3FECCCu;
label_3feccc:
    // 0x3feccc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fecccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fecd0:
    // 0x3fecd0: 0xac7ee3c8  sw          $fp, -0x1C38($v1)
    ctx->pc = 0x3fecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 30));
label_3fecd4:
    // 0x3fecd4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fecd8:
    // 0x3fecd8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3fecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3fecdc:
    // 0x3fecdc: 0x7e082b  sltu        $at, $v1, $fp
    ctx->pc = 0x3fecdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3fece0:
    // 0x3fece0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fece4:
    if (ctx->pc == 0x3FECE4u) {
        ctx->pc = 0x3FECE4u;
            // 0x3fece4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FECE8u;
        goto label_3fece8;
    }
    ctx->pc = 0x3FECE0u;
    {
        const bool branch_taken_0x3fece0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fece0) {
            ctx->pc = 0x3FECE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FECE0u;
            // 0x3fece4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FECF4u;
            goto label_3fecf4;
        }
    }
    ctx->pc = 0x3FECE8u;
label_3fece8:
    // 0x3fece8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fece8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fecec:
    // 0x3fecec: 0xac7ee3d0  sw          $fp, -0x1C30($v1)
    ctx->pc = 0x3fececu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 30));
label_3fecf0:
    // 0x3fecf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fecf4:
    // 0x3fecf4: 0x52430026  beql        $s2, $v1, . + 4 + (0x26 << 2)
label_3fecf8:
    if (ctx->pc == 0x3FECF8u) {
        ctx->pc = 0x3FECF8u;
            // 0x3fecf8: 0x4283c  dsll32      $a1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        ctx->pc = 0x3FECFCu;
        goto label_3fecfc;
    }
    ctx->pc = 0x3FECF4u;
    {
        const bool branch_taken_0x3fecf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fecf4) {
            ctx->pc = 0x3FECF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FECF4u;
            // 0x3fecf8: 0x4283c  dsll32      $a1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FED90u;
            goto label_3fed90;
        }
    }
    ctx->pc = 0x3FECFCu;
label_3fecfc:
    // 0x3fecfc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3fecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fed00:
    // 0x3fed00: 0x12430022  beq         $s2, $v1, . + 4 + (0x22 << 2)
label_3fed04:
    if (ctx->pc == 0x3FED04u) {
        ctx->pc = 0x3FED08u;
        goto label_3fed08;
    }
    ctx->pc = 0x3FED00u;
    {
        const bool branch_taken_0x3fed00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fed00) {
            ctx->pc = 0x3FED8Cu;
            goto label_3fed8c;
        }
    }
    ctx->pc = 0x3FED08u;
label_3fed08:
    // 0x3fed08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3fed08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fed0c:
    // 0x3fed0c: 0x1243001f  beq         $s2, $v1, . + 4 + (0x1F << 2)
label_3fed10:
    if (ctx->pc == 0x3FED10u) {
        ctx->pc = 0x3FED14u;
        goto label_3fed14;
    }
    ctx->pc = 0x3FED0Cu;
    {
        const bool branch_taken_0x3fed0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fed0c) {
            ctx->pc = 0x3FED8Cu;
            goto label_3fed8c;
        }
    }
    ctx->pc = 0x3FED14u;
label_3fed14:
    // 0x3fed14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3fed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fed18:
    // 0x3fed18: 0x1243001c  beq         $s2, $v1, . + 4 + (0x1C << 2)
label_3fed1c:
    if (ctx->pc == 0x3FED1Cu) {
        ctx->pc = 0x3FED20u;
        goto label_3fed20;
    }
    ctx->pc = 0x3FED18u;
    {
        const bool branch_taken_0x3fed18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fed18) {
            ctx->pc = 0x3FED8Cu;
            goto label_3fed8c;
        }
    }
    ctx->pc = 0x3FED20u;
label_3fed20:
    // 0x3fed20: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3fed20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fed24:
    // 0x3fed24: 0x12430019  beq         $s2, $v1, . + 4 + (0x19 << 2)
label_3fed28:
    if (ctx->pc == 0x3FED28u) {
        ctx->pc = 0x3FED2Cu;
        goto label_3fed2c;
    }
    ctx->pc = 0x3FED24u;
    {
        const bool branch_taken_0x3fed24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fed24) {
            ctx->pc = 0x3FED8Cu;
            goto label_3fed8c;
        }
    }
    ctx->pc = 0x3FED2Cu;
label_3fed2c:
    // 0x3fed2c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3fed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3fed30:
    // 0x3fed30: 0x12430016  beq         $s2, $v1, . + 4 + (0x16 << 2)
label_3fed34:
    if (ctx->pc == 0x3FED34u) {
        ctx->pc = 0x3FED38u;
        goto label_3fed38;
    }
    ctx->pc = 0x3FED30u;
    {
        const bool branch_taken_0x3fed30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fed30) {
            ctx->pc = 0x3FED8Cu;
            goto label_3fed8c;
        }
    }
    ctx->pc = 0x3FED38u;
label_3fed38:
    // 0x3fed38: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3fed38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3fed3c:
    // 0x3fed3c: 0x12430013  beq         $s2, $v1, . + 4 + (0x13 << 2)
label_3fed40:
    if (ctx->pc == 0x3FED40u) {
        ctx->pc = 0x3FED44u;
        goto label_3fed44;
    }
    ctx->pc = 0x3FED3Cu;
    {
        const bool branch_taken_0x3fed3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fed3c) {
            ctx->pc = 0x3FED8Cu;
            goto label_3fed8c;
        }
    }
    ctx->pc = 0x3FED44u;
label_3fed44:
    // 0x3fed44: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3fed44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3fed48:
    // 0x3fed48: 0x12430010  beq         $s2, $v1, . + 4 + (0x10 << 2)
label_3fed4c:
    if (ctx->pc == 0x3FED4Cu) {
        ctx->pc = 0x3FED50u;
        goto label_3fed50;
    }
    ctx->pc = 0x3FED48u;
    {
        const bool branch_taken_0x3fed48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fed48) {
            ctx->pc = 0x3FED8Cu;
            goto label_3fed8c;
        }
    }
    ctx->pc = 0x3FED50u;
label_3fed50:
    // 0x3fed50: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3fed50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3fed54:
    // 0x3fed54: 0x1243000d  beq         $s2, $v1, . + 4 + (0xD << 2)
label_3fed58:
    if (ctx->pc == 0x3FED58u) {
        ctx->pc = 0x3FED5Cu;
        goto label_3fed5c;
    }
    ctx->pc = 0x3FED54u;
    {
        const bool branch_taken_0x3fed54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fed54) {
            ctx->pc = 0x3FED8Cu;
            goto label_3fed8c;
        }
    }
    ctx->pc = 0x3FED5Cu;
label_3fed5c:
    // 0x3fed5c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3fed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3fed60:
    // 0x3fed60: 0x1243000a  beq         $s2, $v1, . + 4 + (0xA << 2)
label_3fed64:
    if (ctx->pc == 0x3FED64u) {
        ctx->pc = 0x3FED68u;
        goto label_3fed68;
    }
    ctx->pc = 0x3FED60u;
    {
        const bool branch_taken_0x3fed60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fed60) {
            ctx->pc = 0x3FED8Cu;
            goto label_3fed8c;
        }
    }
    ctx->pc = 0x3FED68u;
label_3fed68:
    // 0x3fed68: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3fed68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3fed6c:
    // 0x3fed6c: 0x12430007  beq         $s2, $v1, . + 4 + (0x7 << 2)
label_3fed70:
    if (ctx->pc == 0x3FED70u) {
        ctx->pc = 0x3FED74u;
        goto label_3fed74;
    }
    ctx->pc = 0x3FED6Cu;
    {
        const bool branch_taken_0x3fed6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fed6c) {
            ctx->pc = 0x3FED8Cu;
            goto label_3fed8c;
        }
    }
    ctx->pc = 0x3FED74u;
label_3fed74:
    // 0x3fed74: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3fed74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3fed78:
    // 0x3fed78: 0x12430004  beq         $s2, $v1, . + 4 + (0x4 << 2)
label_3fed7c:
    if (ctx->pc == 0x3FED7Cu) {
        ctx->pc = 0x3FED80u;
        goto label_3fed80;
    }
    ctx->pc = 0x3FED78u;
    {
        const bool branch_taken_0x3fed78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fed78) {
            ctx->pc = 0x3FED8Cu;
            goto label_3fed8c;
        }
    }
    ctx->pc = 0x3FED80u;
label_3fed80:
    // 0x3fed80: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3fed80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3fed84:
    // 0x3fed84: 0x5643001a  bnel        $s2, $v1, . + 4 + (0x1A << 2)
label_3fed88:
    if (ctx->pc == 0x3FED88u) {
        ctx->pc = 0x3FED88u;
            // 0x3fed88: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3FED8Cu;
        goto label_3fed8c;
    }
    ctx->pc = 0x3FED84u;
    {
        const bool branch_taken_0x3fed84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fed84) {
            ctx->pc = 0x3FED88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FED84u;
            // 0x3fed88: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FEDF0u;
            goto label_3fedf0;
        }
    }
    ctx->pc = 0x3FED8Cu;
label_3fed8c:
    // 0x3fed8c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x3fed8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_3fed90:
    // 0x3fed90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fed90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fed94:
    // 0x3fed94: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3fed94u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_3fed98:
    // 0x3fed98: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3fed98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3fed9c:
    // 0x3fed9c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3fed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3feda0:
    // 0x3feda0: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x3feda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_3feda4:
    // 0x3feda4: 0x3c52818  mult        $a1, $fp, $a1
    ctx->pc = 0x3feda4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3feda8:
    // 0x3feda8: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x3feda8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3fedac:
    // 0x3fedac: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3fedb0:
    if (ctx->pc == 0x3FEDB0u) {
        ctx->pc = 0x3FEDB0u;
            // 0x3fedb0: 0x4203c  dsll32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
        ctx->pc = 0x3FEDB4u;
        goto label_3fedb4;
    }
    ctx->pc = 0x3FEDACu;
    {
        const bool branch_taken_0x3fedac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fedac) {
            ctx->pc = 0x3FEDB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEDACu;
            // 0x3fedb0: 0x4203c  dsll32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FEDC0u;
            goto label_3fedc0;
        }
    }
    ctx->pc = 0x3FEDB4u;
label_3fedb4:
    // 0x3fedb4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fedb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fedb8:
    // 0x3fedb8: 0xac65e388  sw          $a1, -0x1C78($v1)
    ctx->pc = 0x3fedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 5));
label_3fedbc:
    // 0x3fedbc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3fedbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_3fedc0:
    // 0x3fedc0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fedc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fedc4:
    // 0x3fedc4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3fedc4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_3fedc8:
    // 0x3fedc8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3fedc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3fedcc:
    // 0x3fedcc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3fedccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fedd0:
    // 0x3fedd0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3fedd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3fedd4:
    // 0x3fedd4: 0x3c42018  mult        $a0, $fp, $a0
    ctx->pc = 0x3fedd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3fedd8:
    // 0x3fedd8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3fedd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3feddc:
    // 0x3feddc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3fede0:
    if (ctx->pc == 0x3FEDE0u) {
        ctx->pc = 0x3FEDE4u;
        goto label_3fede4;
    }
    ctx->pc = 0x3FEDDCu;
    {
        const bool branch_taken_0x3feddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3feddc) {
            ctx->pc = 0x3FEDECu;
            goto label_3fedec;
        }
    }
    ctx->pc = 0x3FEDE4u;
label_3fede4:
    // 0x3fede4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fede4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fede8:
    // 0x3fede8: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3fede8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3fedec:
    // 0x3fedec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3fedecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3fedf0:
    // 0x3fedf0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3fedf0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3fedf4:
    // 0x3fedf4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3fedf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fedf8:
    // 0x3fedf8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3fedf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fedfc:
    // 0x3fedfc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3fedfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fee00:
    // 0x3fee00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3fee00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fee04:
    // 0x3fee04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3fee04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fee08:
    // 0x3fee08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fee08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fee0c:
    // 0x3fee0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fee0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fee10:
    // 0x3fee10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fee10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fee14:
    // 0x3fee14: 0x3e00008  jr          $ra
label_3fee18:
    if (ctx->pc == 0x3FEE18u) {
        ctx->pc = 0x3FEE18u;
            // 0x3fee18: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3FEE1Cu;
        goto label_3fee1c;
    }
    ctx->pc = 0x3FEE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FEE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEE14u;
            // 0x3fee18: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FEE1Cu;
label_3fee1c:
    // 0x3fee1c: 0x0  nop
    ctx->pc = 0x3fee1cu;
    // NOP
}
