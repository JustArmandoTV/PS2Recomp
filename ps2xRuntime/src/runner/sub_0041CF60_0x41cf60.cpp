#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041CF60
// Address: 0x41cf60 - 0x41d7b0
void sub_0041CF60_0x41cf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CF60_0x41cf60");
#endif

    switch (ctx->pc) {
        case 0x41cf60u: goto label_41cf60;
        case 0x41cf64u: goto label_41cf64;
        case 0x41cf68u: goto label_41cf68;
        case 0x41cf6cu: goto label_41cf6c;
        case 0x41cf70u: goto label_41cf70;
        case 0x41cf74u: goto label_41cf74;
        case 0x41cf78u: goto label_41cf78;
        case 0x41cf7cu: goto label_41cf7c;
        case 0x41cf80u: goto label_41cf80;
        case 0x41cf84u: goto label_41cf84;
        case 0x41cf88u: goto label_41cf88;
        case 0x41cf8cu: goto label_41cf8c;
        case 0x41cf90u: goto label_41cf90;
        case 0x41cf94u: goto label_41cf94;
        case 0x41cf98u: goto label_41cf98;
        case 0x41cf9cu: goto label_41cf9c;
        case 0x41cfa0u: goto label_41cfa0;
        case 0x41cfa4u: goto label_41cfa4;
        case 0x41cfa8u: goto label_41cfa8;
        case 0x41cfacu: goto label_41cfac;
        case 0x41cfb0u: goto label_41cfb0;
        case 0x41cfb4u: goto label_41cfb4;
        case 0x41cfb8u: goto label_41cfb8;
        case 0x41cfbcu: goto label_41cfbc;
        case 0x41cfc0u: goto label_41cfc0;
        case 0x41cfc4u: goto label_41cfc4;
        case 0x41cfc8u: goto label_41cfc8;
        case 0x41cfccu: goto label_41cfcc;
        case 0x41cfd0u: goto label_41cfd0;
        case 0x41cfd4u: goto label_41cfd4;
        case 0x41cfd8u: goto label_41cfd8;
        case 0x41cfdcu: goto label_41cfdc;
        case 0x41cfe0u: goto label_41cfe0;
        case 0x41cfe4u: goto label_41cfe4;
        case 0x41cfe8u: goto label_41cfe8;
        case 0x41cfecu: goto label_41cfec;
        case 0x41cff0u: goto label_41cff0;
        case 0x41cff4u: goto label_41cff4;
        case 0x41cff8u: goto label_41cff8;
        case 0x41cffcu: goto label_41cffc;
        case 0x41d000u: goto label_41d000;
        case 0x41d004u: goto label_41d004;
        case 0x41d008u: goto label_41d008;
        case 0x41d00cu: goto label_41d00c;
        case 0x41d010u: goto label_41d010;
        case 0x41d014u: goto label_41d014;
        case 0x41d018u: goto label_41d018;
        case 0x41d01cu: goto label_41d01c;
        case 0x41d020u: goto label_41d020;
        case 0x41d024u: goto label_41d024;
        case 0x41d028u: goto label_41d028;
        case 0x41d02cu: goto label_41d02c;
        case 0x41d030u: goto label_41d030;
        case 0x41d034u: goto label_41d034;
        case 0x41d038u: goto label_41d038;
        case 0x41d03cu: goto label_41d03c;
        case 0x41d040u: goto label_41d040;
        case 0x41d044u: goto label_41d044;
        case 0x41d048u: goto label_41d048;
        case 0x41d04cu: goto label_41d04c;
        case 0x41d050u: goto label_41d050;
        case 0x41d054u: goto label_41d054;
        case 0x41d058u: goto label_41d058;
        case 0x41d05cu: goto label_41d05c;
        case 0x41d060u: goto label_41d060;
        case 0x41d064u: goto label_41d064;
        case 0x41d068u: goto label_41d068;
        case 0x41d06cu: goto label_41d06c;
        case 0x41d070u: goto label_41d070;
        case 0x41d074u: goto label_41d074;
        case 0x41d078u: goto label_41d078;
        case 0x41d07cu: goto label_41d07c;
        case 0x41d080u: goto label_41d080;
        case 0x41d084u: goto label_41d084;
        case 0x41d088u: goto label_41d088;
        case 0x41d08cu: goto label_41d08c;
        case 0x41d090u: goto label_41d090;
        case 0x41d094u: goto label_41d094;
        case 0x41d098u: goto label_41d098;
        case 0x41d09cu: goto label_41d09c;
        case 0x41d0a0u: goto label_41d0a0;
        case 0x41d0a4u: goto label_41d0a4;
        case 0x41d0a8u: goto label_41d0a8;
        case 0x41d0acu: goto label_41d0ac;
        case 0x41d0b0u: goto label_41d0b0;
        case 0x41d0b4u: goto label_41d0b4;
        case 0x41d0b8u: goto label_41d0b8;
        case 0x41d0bcu: goto label_41d0bc;
        case 0x41d0c0u: goto label_41d0c0;
        case 0x41d0c4u: goto label_41d0c4;
        case 0x41d0c8u: goto label_41d0c8;
        case 0x41d0ccu: goto label_41d0cc;
        case 0x41d0d0u: goto label_41d0d0;
        case 0x41d0d4u: goto label_41d0d4;
        case 0x41d0d8u: goto label_41d0d8;
        case 0x41d0dcu: goto label_41d0dc;
        case 0x41d0e0u: goto label_41d0e0;
        case 0x41d0e4u: goto label_41d0e4;
        case 0x41d0e8u: goto label_41d0e8;
        case 0x41d0ecu: goto label_41d0ec;
        case 0x41d0f0u: goto label_41d0f0;
        case 0x41d0f4u: goto label_41d0f4;
        case 0x41d0f8u: goto label_41d0f8;
        case 0x41d0fcu: goto label_41d0fc;
        case 0x41d100u: goto label_41d100;
        case 0x41d104u: goto label_41d104;
        case 0x41d108u: goto label_41d108;
        case 0x41d10cu: goto label_41d10c;
        case 0x41d110u: goto label_41d110;
        case 0x41d114u: goto label_41d114;
        case 0x41d118u: goto label_41d118;
        case 0x41d11cu: goto label_41d11c;
        case 0x41d120u: goto label_41d120;
        case 0x41d124u: goto label_41d124;
        case 0x41d128u: goto label_41d128;
        case 0x41d12cu: goto label_41d12c;
        case 0x41d130u: goto label_41d130;
        case 0x41d134u: goto label_41d134;
        case 0x41d138u: goto label_41d138;
        case 0x41d13cu: goto label_41d13c;
        case 0x41d140u: goto label_41d140;
        case 0x41d144u: goto label_41d144;
        case 0x41d148u: goto label_41d148;
        case 0x41d14cu: goto label_41d14c;
        case 0x41d150u: goto label_41d150;
        case 0x41d154u: goto label_41d154;
        case 0x41d158u: goto label_41d158;
        case 0x41d15cu: goto label_41d15c;
        case 0x41d160u: goto label_41d160;
        case 0x41d164u: goto label_41d164;
        case 0x41d168u: goto label_41d168;
        case 0x41d16cu: goto label_41d16c;
        case 0x41d170u: goto label_41d170;
        case 0x41d174u: goto label_41d174;
        case 0x41d178u: goto label_41d178;
        case 0x41d17cu: goto label_41d17c;
        case 0x41d180u: goto label_41d180;
        case 0x41d184u: goto label_41d184;
        case 0x41d188u: goto label_41d188;
        case 0x41d18cu: goto label_41d18c;
        case 0x41d190u: goto label_41d190;
        case 0x41d194u: goto label_41d194;
        case 0x41d198u: goto label_41d198;
        case 0x41d19cu: goto label_41d19c;
        case 0x41d1a0u: goto label_41d1a0;
        case 0x41d1a4u: goto label_41d1a4;
        case 0x41d1a8u: goto label_41d1a8;
        case 0x41d1acu: goto label_41d1ac;
        case 0x41d1b0u: goto label_41d1b0;
        case 0x41d1b4u: goto label_41d1b4;
        case 0x41d1b8u: goto label_41d1b8;
        case 0x41d1bcu: goto label_41d1bc;
        case 0x41d1c0u: goto label_41d1c0;
        case 0x41d1c4u: goto label_41d1c4;
        case 0x41d1c8u: goto label_41d1c8;
        case 0x41d1ccu: goto label_41d1cc;
        case 0x41d1d0u: goto label_41d1d0;
        case 0x41d1d4u: goto label_41d1d4;
        case 0x41d1d8u: goto label_41d1d8;
        case 0x41d1dcu: goto label_41d1dc;
        case 0x41d1e0u: goto label_41d1e0;
        case 0x41d1e4u: goto label_41d1e4;
        case 0x41d1e8u: goto label_41d1e8;
        case 0x41d1ecu: goto label_41d1ec;
        case 0x41d1f0u: goto label_41d1f0;
        case 0x41d1f4u: goto label_41d1f4;
        case 0x41d1f8u: goto label_41d1f8;
        case 0x41d1fcu: goto label_41d1fc;
        case 0x41d200u: goto label_41d200;
        case 0x41d204u: goto label_41d204;
        case 0x41d208u: goto label_41d208;
        case 0x41d20cu: goto label_41d20c;
        case 0x41d210u: goto label_41d210;
        case 0x41d214u: goto label_41d214;
        case 0x41d218u: goto label_41d218;
        case 0x41d21cu: goto label_41d21c;
        case 0x41d220u: goto label_41d220;
        case 0x41d224u: goto label_41d224;
        case 0x41d228u: goto label_41d228;
        case 0x41d22cu: goto label_41d22c;
        case 0x41d230u: goto label_41d230;
        case 0x41d234u: goto label_41d234;
        case 0x41d238u: goto label_41d238;
        case 0x41d23cu: goto label_41d23c;
        case 0x41d240u: goto label_41d240;
        case 0x41d244u: goto label_41d244;
        case 0x41d248u: goto label_41d248;
        case 0x41d24cu: goto label_41d24c;
        case 0x41d250u: goto label_41d250;
        case 0x41d254u: goto label_41d254;
        case 0x41d258u: goto label_41d258;
        case 0x41d25cu: goto label_41d25c;
        case 0x41d260u: goto label_41d260;
        case 0x41d264u: goto label_41d264;
        case 0x41d268u: goto label_41d268;
        case 0x41d26cu: goto label_41d26c;
        case 0x41d270u: goto label_41d270;
        case 0x41d274u: goto label_41d274;
        case 0x41d278u: goto label_41d278;
        case 0x41d27cu: goto label_41d27c;
        case 0x41d280u: goto label_41d280;
        case 0x41d284u: goto label_41d284;
        case 0x41d288u: goto label_41d288;
        case 0x41d28cu: goto label_41d28c;
        case 0x41d290u: goto label_41d290;
        case 0x41d294u: goto label_41d294;
        case 0x41d298u: goto label_41d298;
        case 0x41d29cu: goto label_41d29c;
        case 0x41d2a0u: goto label_41d2a0;
        case 0x41d2a4u: goto label_41d2a4;
        case 0x41d2a8u: goto label_41d2a8;
        case 0x41d2acu: goto label_41d2ac;
        case 0x41d2b0u: goto label_41d2b0;
        case 0x41d2b4u: goto label_41d2b4;
        case 0x41d2b8u: goto label_41d2b8;
        case 0x41d2bcu: goto label_41d2bc;
        case 0x41d2c0u: goto label_41d2c0;
        case 0x41d2c4u: goto label_41d2c4;
        case 0x41d2c8u: goto label_41d2c8;
        case 0x41d2ccu: goto label_41d2cc;
        case 0x41d2d0u: goto label_41d2d0;
        case 0x41d2d4u: goto label_41d2d4;
        case 0x41d2d8u: goto label_41d2d8;
        case 0x41d2dcu: goto label_41d2dc;
        case 0x41d2e0u: goto label_41d2e0;
        case 0x41d2e4u: goto label_41d2e4;
        case 0x41d2e8u: goto label_41d2e8;
        case 0x41d2ecu: goto label_41d2ec;
        case 0x41d2f0u: goto label_41d2f0;
        case 0x41d2f4u: goto label_41d2f4;
        case 0x41d2f8u: goto label_41d2f8;
        case 0x41d2fcu: goto label_41d2fc;
        case 0x41d300u: goto label_41d300;
        case 0x41d304u: goto label_41d304;
        case 0x41d308u: goto label_41d308;
        case 0x41d30cu: goto label_41d30c;
        case 0x41d310u: goto label_41d310;
        case 0x41d314u: goto label_41d314;
        case 0x41d318u: goto label_41d318;
        case 0x41d31cu: goto label_41d31c;
        case 0x41d320u: goto label_41d320;
        case 0x41d324u: goto label_41d324;
        case 0x41d328u: goto label_41d328;
        case 0x41d32cu: goto label_41d32c;
        case 0x41d330u: goto label_41d330;
        case 0x41d334u: goto label_41d334;
        case 0x41d338u: goto label_41d338;
        case 0x41d33cu: goto label_41d33c;
        case 0x41d340u: goto label_41d340;
        case 0x41d344u: goto label_41d344;
        case 0x41d348u: goto label_41d348;
        case 0x41d34cu: goto label_41d34c;
        case 0x41d350u: goto label_41d350;
        case 0x41d354u: goto label_41d354;
        case 0x41d358u: goto label_41d358;
        case 0x41d35cu: goto label_41d35c;
        case 0x41d360u: goto label_41d360;
        case 0x41d364u: goto label_41d364;
        case 0x41d368u: goto label_41d368;
        case 0x41d36cu: goto label_41d36c;
        case 0x41d370u: goto label_41d370;
        case 0x41d374u: goto label_41d374;
        case 0x41d378u: goto label_41d378;
        case 0x41d37cu: goto label_41d37c;
        case 0x41d380u: goto label_41d380;
        case 0x41d384u: goto label_41d384;
        case 0x41d388u: goto label_41d388;
        case 0x41d38cu: goto label_41d38c;
        case 0x41d390u: goto label_41d390;
        case 0x41d394u: goto label_41d394;
        case 0x41d398u: goto label_41d398;
        case 0x41d39cu: goto label_41d39c;
        case 0x41d3a0u: goto label_41d3a0;
        case 0x41d3a4u: goto label_41d3a4;
        case 0x41d3a8u: goto label_41d3a8;
        case 0x41d3acu: goto label_41d3ac;
        case 0x41d3b0u: goto label_41d3b0;
        case 0x41d3b4u: goto label_41d3b4;
        case 0x41d3b8u: goto label_41d3b8;
        case 0x41d3bcu: goto label_41d3bc;
        case 0x41d3c0u: goto label_41d3c0;
        case 0x41d3c4u: goto label_41d3c4;
        case 0x41d3c8u: goto label_41d3c8;
        case 0x41d3ccu: goto label_41d3cc;
        case 0x41d3d0u: goto label_41d3d0;
        case 0x41d3d4u: goto label_41d3d4;
        case 0x41d3d8u: goto label_41d3d8;
        case 0x41d3dcu: goto label_41d3dc;
        case 0x41d3e0u: goto label_41d3e0;
        case 0x41d3e4u: goto label_41d3e4;
        case 0x41d3e8u: goto label_41d3e8;
        case 0x41d3ecu: goto label_41d3ec;
        case 0x41d3f0u: goto label_41d3f0;
        case 0x41d3f4u: goto label_41d3f4;
        case 0x41d3f8u: goto label_41d3f8;
        case 0x41d3fcu: goto label_41d3fc;
        case 0x41d400u: goto label_41d400;
        case 0x41d404u: goto label_41d404;
        case 0x41d408u: goto label_41d408;
        case 0x41d40cu: goto label_41d40c;
        case 0x41d410u: goto label_41d410;
        case 0x41d414u: goto label_41d414;
        case 0x41d418u: goto label_41d418;
        case 0x41d41cu: goto label_41d41c;
        case 0x41d420u: goto label_41d420;
        case 0x41d424u: goto label_41d424;
        case 0x41d428u: goto label_41d428;
        case 0x41d42cu: goto label_41d42c;
        case 0x41d430u: goto label_41d430;
        case 0x41d434u: goto label_41d434;
        case 0x41d438u: goto label_41d438;
        case 0x41d43cu: goto label_41d43c;
        case 0x41d440u: goto label_41d440;
        case 0x41d444u: goto label_41d444;
        case 0x41d448u: goto label_41d448;
        case 0x41d44cu: goto label_41d44c;
        case 0x41d450u: goto label_41d450;
        case 0x41d454u: goto label_41d454;
        case 0x41d458u: goto label_41d458;
        case 0x41d45cu: goto label_41d45c;
        case 0x41d460u: goto label_41d460;
        case 0x41d464u: goto label_41d464;
        case 0x41d468u: goto label_41d468;
        case 0x41d46cu: goto label_41d46c;
        case 0x41d470u: goto label_41d470;
        case 0x41d474u: goto label_41d474;
        case 0x41d478u: goto label_41d478;
        case 0x41d47cu: goto label_41d47c;
        case 0x41d480u: goto label_41d480;
        case 0x41d484u: goto label_41d484;
        case 0x41d488u: goto label_41d488;
        case 0x41d48cu: goto label_41d48c;
        case 0x41d490u: goto label_41d490;
        case 0x41d494u: goto label_41d494;
        case 0x41d498u: goto label_41d498;
        case 0x41d49cu: goto label_41d49c;
        case 0x41d4a0u: goto label_41d4a0;
        case 0x41d4a4u: goto label_41d4a4;
        case 0x41d4a8u: goto label_41d4a8;
        case 0x41d4acu: goto label_41d4ac;
        case 0x41d4b0u: goto label_41d4b0;
        case 0x41d4b4u: goto label_41d4b4;
        case 0x41d4b8u: goto label_41d4b8;
        case 0x41d4bcu: goto label_41d4bc;
        case 0x41d4c0u: goto label_41d4c0;
        case 0x41d4c4u: goto label_41d4c4;
        case 0x41d4c8u: goto label_41d4c8;
        case 0x41d4ccu: goto label_41d4cc;
        case 0x41d4d0u: goto label_41d4d0;
        case 0x41d4d4u: goto label_41d4d4;
        case 0x41d4d8u: goto label_41d4d8;
        case 0x41d4dcu: goto label_41d4dc;
        case 0x41d4e0u: goto label_41d4e0;
        case 0x41d4e4u: goto label_41d4e4;
        case 0x41d4e8u: goto label_41d4e8;
        case 0x41d4ecu: goto label_41d4ec;
        case 0x41d4f0u: goto label_41d4f0;
        case 0x41d4f4u: goto label_41d4f4;
        case 0x41d4f8u: goto label_41d4f8;
        case 0x41d4fcu: goto label_41d4fc;
        case 0x41d500u: goto label_41d500;
        case 0x41d504u: goto label_41d504;
        case 0x41d508u: goto label_41d508;
        case 0x41d50cu: goto label_41d50c;
        case 0x41d510u: goto label_41d510;
        case 0x41d514u: goto label_41d514;
        case 0x41d518u: goto label_41d518;
        case 0x41d51cu: goto label_41d51c;
        case 0x41d520u: goto label_41d520;
        case 0x41d524u: goto label_41d524;
        case 0x41d528u: goto label_41d528;
        case 0x41d52cu: goto label_41d52c;
        case 0x41d530u: goto label_41d530;
        case 0x41d534u: goto label_41d534;
        case 0x41d538u: goto label_41d538;
        case 0x41d53cu: goto label_41d53c;
        case 0x41d540u: goto label_41d540;
        case 0x41d544u: goto label_41d544;
        case 0x41d548u: goto label_41d548;
        case 0x41d54cu: goto label_41d54c;
        case 0x41d550u: goto label_41d550;
        case 0x41d554u: goto label_41d554;
        case 0x41d558u: goto label_41d558;
        case 0x41d55cu: goto label_41d55c;
        case 0x41d560u: goto label_41d560;
        case 0x41d564u: goto label_41d564;
        case 0x41d568u: goto label_41d568;
        case 0x41d56cu: goto label_41d56c;
        case 0x41d570u: goto label_41d570;
        case 0x41d574u: goto label_41d574;
        case 0x41d578u: goto label_41d578;
        case 0x41d57cu: goto label_41d57c;
        case 0x41d580u: goto label_41d580;
        case 0x41d584u: goto label_41d584;
        case 0x41d588u: goto label_41d588;
        case 0x41d58cu: goto label_41d58c;
        case 0x41d590u: goto label_41d590;
        case 0x41d594u: goto label_41d594;
        case 0x41d598u: goto label_41d598;
        case 0x41d59cu: goto label_41d59c;
        case 0x41d5a0u: goto label_41d5a0;
        case 0x41d5a4u: goto label_41d5a4;
        case 0x41d5a8u: goto label_41d5a8;
        case 0x41d5acu: goto label_41d5ac;
        case 0x41d5b0u: goto label_41d5b0;
        case 0x41d5b4u: goto label_41d5b4;
        case 0x41d5b8u: goto label_41d5b8;
        case 0x41d5bcu: goto label_41d5bc;
        case 0x41d5c0u: goto label_41d5c0;
        case 0x41d5c4u: goto label_41d5c4;
        case 0x41d5c8u: goto label_41d5c8;
        case 0x41d5ccu: goto label_41d5cc;
        case 0x41d5d0u: goto label_41d5d0;
        case 0x41d5d4u: goto label_41d5d4;
        case 0x41d5d8u: goto label_41d5d8;
        case 0x41d5dcu: goto label_41d5dc;
        case 0x41d5e0u: goto label_41d5e0;
        case 0x41d5e4u: goto label_41d5e4;
        case 0x41d5e8u: goto label_41d5e8;
        case 0x41d5ecu: goto label_41d5ec;
        case 0x41d5f0u: goto label_41d5f0;
        case 0x41d5f4u: goto label_41d5f4;
        case 0x41d5f8u: goto label_41d5f8;
        case 0x41d5fcu: goto label_41d5fc;
        case 0x41d600u: goto label_41d600;
        case 0x41d604u: goto label_41d604;
        case 0x41d608u: goto label_41d608;
        case 0x41d60cu: goto label_41d60c;
        case 0x41d610u: goto label_41d610;
        case 0x41d614u: goto label_41d614;
        case 0x41d618u: goto label_41d618;
        case 0x41d61cu: goto label_41d61c;
        case 0x41d620u: goto label_41d620;
        case 0x41d624u: goto label_41d624;
        case 0x41d628u: goto label_41d628;
        case 0x41d62cu: goto label_41d62c;
        case 0x41d630u: goto label_41d630;
        case 0x41d634u: goto label_41d634;
        case 0x41d638u: goto label_41d638;
        case 0x41d63cu: goto label_41d63c;
        case 0x41d640u: goto label_41d640;
        case 0x41d644u: goto label_41d644;
        case 0x41d648u: goto label_41d648;
        case 0x41d64cu: goto label_41d64c;
        case 0x41d650u: goto label_41d650;
        case 0x41d654u: goto label_41d654;
        case 0x41d658u: goto label_41d658;
        case 0x41d65cu: goto label_41d65c;
        case 0x41d660u: goto label_41d660;
        case 0x41d664u: goto label_41d664;
        case 0x41d668u: goto label_41d668;
        case 0x41d66cu: goto label_41d66c;
        case 0x41d670u: goto label_41d670;
        case 0x41d674u: goto label_41d674;
        case 0x41d678u: goto label_41d678;
        case 0x41d67cu: goto label_41d67c;
        case 0x41d680u: goto label_41d680;
        case 0x41d684u: goto label_41d684;
        case 0x41d688u: goto label_41d688;
        case 0x41d68cu: goto label_41d68c;
        case 0x41d690u: goto label_41d690;
        case 0x41d694u: goto label_41d694;
        case 0x41d698u: goto label_41d698;
        case 0x41d69cu: goto label_41d69c;
        case 0x41d6a0u: goto label_41d6a0;
        case 0x41d6a4u: goto label_41d6a4;
        case 0x41d6a8u: goto label_41d6a8;
        case 0x41d6acu: goto label_41d6ac;
        case 0x41d6b0u: goto label_41d6b0;
        case 0x41d6b4u: goto label_41d6b4;
        case 0x41d6b8u: goto label_41d6b8;
        case 0x41d6bcu: goto label_41d6bc;
        case 0x41d6c0u: goto label_41d6c0;
        case 0x41d6c4u: goto label_41d6c4;
        case 0x41d6c8u: goto label_41d6c8;
        case 0x41d6ccu: goto label_41d6cc;
        case 0x41d6d0u: goto label_41d6d0;
        case 0x41d6d4u: goto label_41d6d4;
        case 0x41d6d8u: goto label_41d6d8;
        case 0x41d6dcu: goto label_41d6dc;
        case 0x41d6e0u: goto label_41d6e0;
        case 0x41d6e4u: goto label_41d6e4;
        case 0x41d6e8u: goto label_41d6e8;
        case 0x41d6ecu: goto label_41d6ec;
        case 0x41d6f0u: goto label_41d6f0;
        case 0x41d6f4u: goto label_41d6f4;
        case 0x41d6f8u: goto label_41d6f8;
        case 0x41d6fcu: goto label_41d6fc;
        case 0x41d700u: goto label_41d700;
        case 0x41d704u: goto label_41d704;
        case 0x41d708u: goto label_41d708;
        case 0x41d70cu: goto label_41d70c;
        case 0x41d710u: goto label_41d710;
        case 0x41d714u: goto label_41d714;
        case 0x41d718u: goto label_41d718;
        case 0x41d71cu: goto label_41d71c;
        case 0x41d720u: goto label_41d720;
        case 0x41d724u: goto label_41d724;
        case 0x41d728u: goto label_41d728;
        case 0x41d72cu: goto label_41d72c;
        case 0x41d730u: goto label_41d730;
        case 0x41d734u: goto label_41d734;
        case 0x41d738u: goto label_41d738;
        case 0x41d73cu: goto label_41d73c;
        case 0x41d740u: goto label_41d740;
        case 0x41d744u: goto label_41d744;
        case 0x41d748u: goto label_41d748;
        case 0x41d74cu: goto label_41d74c;
        case 0x41d750u: goto label_41d750;
        case 0x41d754u: goto label_41d754;
        case 0x41d758u: goto label_41d758;
        case 0x41d75cu: goto label_41d75c;
        case 0x41d760u: goto label_41d760;
        case 0x41d764u: goto label_41d764;
        case 0x41d768u: goto label_41d768;
        case 0x41d76cu: goto label_41d76c;
        case 0x41d770u: goto label_41d770;
        case 0x41d774u: goto label_41d774;
        case 0x41d778u: goto label_41d778;
        case 0x41d77cu: goto label_41d77c;
        case 0x41d780u: goto label_41d780;
        case 0x41d784u: goto label_41d784;
        case 0x41d788u: goto label_41d788;
        case 0x41d78cu: goto label_41d78c;
        case 0x41d790u: goto label_41d790;
        case 0x41d794u: goto label_41d794;
        case 0x41d798u: goto label_41d798;
        case 0x41d79cu: goto label_41d79c;
        case 0x41d7a0u: goto label_41d7a0;
        case 0x41d7a4u: goto label_41d7a4;
        case 0x41d7a8u: goto label_41d7a8;
        case 0x41d7acu: goto label_41d7ac;
        default: break;
    }

    ctx->pc = 0x41cf60u;

label_41cf60:
    // 0x41cf60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x41cf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_41cf64:
    // 0x41cf64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41cf68:
    // 0x41cf68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41cf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41cf6c:
    // 0x41cf6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41cf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41cf70:
    // 0x41cf70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41cf70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41cf74:
    // 0x41cf74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41cf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41cf78:
    // 0x41cf78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41cf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41cf7c:
    // 0x41cf7c: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x41cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_41cf80:
    // 0x41cf80: 0x14600059  bnez        $v1, . + 4 + (0x59 << 2)
label_41cf84:
    if (ctx->pc == 0x41CF84u) {
        ctx->pc = 0x41CF84u;
            // 0x41cf84: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CF88u;
        goto label_41cf88;
    }
    ctx->pc = 0x41CF80u;
    {
        const bool branch_taken_0x41cf80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CF80u;
            // 0x41cf84: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cf80) {
            ctx->pc = 0x41D0E8u;
            goto label_41d0e8;
        }
    }
    ctx->pc = 0x41CF88u;
label_41cf88:
    // 0x41cf88: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x41cf88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41cf8c:
    // 0x41cf8c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x41cf8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_41cf90:
    // 0x41cf90: 0x320f809  jalr        $t9
label_41cf94:
    if (ctx->pc == 0x41CF94u) {
        ctx->pc = 0x41CF94u;
            // 0x41cf94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CF98u;
        goto label_41cf98;
    }
    ctx->pc = 0x41CF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41CF98u);
        ctx->pc = 0x41CF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CF90u;
            // 0x41cf94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41CF98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41CF98u; }
            if (ctx->pc != 0x41CF98u) { return; }
        }
        }
    }
    ctx->pc = 0x41CF98u;
label_41cf98:
    // 0x41cf98: 0x24036d6a  addiu       $v1, $zero, 0x6D6A
    ctx->pc = 0x41cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28010));
label_41cf9c:
    // 0x41cf9c: 0x54430053  bnel        $v0, $v1, . + 4 + (0x53 << 2)
label_41cfa0:
    if (ctx->pc == 0x41CFA0u) {
        ctx->pc = 0x41CFA0u;
            // 0x41cfa0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x41CFA4u;
        goto label_41cfa4;
    }
    ctx->pc = 0x41CF9Cu;
    {
        const bool branch_taken_0x41cf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x41cf9c) {
            ctx->pc = 0x41CFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41CF9Cu;
            // 0x41cfa0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41D0ECu;
            goto label_41d0ec;
        }
    }
    ctx->pc = 0x41CFA4u;
label_41cfa4:
    // 0x41cfa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41cfa8:
    // 0x41cfa8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x41cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_41cfac:
    // 0x41cfac: 0x8c50e370  lw          $s0, -0x1C90($v0)
    ctx->pc = 0x41cfacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_41cfb0:
    // 0x41cfb0: 0x8c710e80  lw          $s1, 0xE80($v1)
    ctx->pc = 0x41cfb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_41cfb4:
    // 0x41cfb4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x41cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_41cfb8:
    // 0x41cfb8: 0xc44c0180  lwc1        $f12, 0x180($v0)
    ctx->pc = 0x41cfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41cfbc:
    // 0x41cfbc: 0xc44d0184  lwc1        $f13, 0x184($v0)
    ctx->pc = 0x41cfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_41cfc0:
    // 0x41cfc0: 0xc44e0188  lwc1        $f14, 0x188($v0)
    ctx->pc = 0x41cfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_41cfc4:
    // 0x41cfc4: 0xc04cbd8  jal         func_132F60
label_41cfc8:
    if (ctx->pc == 0x41CFC8u) {
        ctx->pc = 0x41CFC8u;
            // 0x41cfc8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x41CFCCu;
        goto label_41cfcc;
    }
    ctx->pc = 0x41CFC4u;
    SET_GPR_U32(ctx, 31, 0x41CFCCu);
    ctx->pc = 0x41CFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CFC4u;
            // 0x41cfc8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CFCCu; }
        if (ctx->pc != 0x41CFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CFCCu; }
        if (ctx->pc != 0x41CFCCu) { return; }
    }
    ctx->pc = 0x41CFCCu;
label_41cfcc:
    // 0x41cfcc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x41cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_41cfd0:
    // 0x41cfd0: 0xc04cc44  jal         func_133110
label_41cfd4:
    if (ctx->pc == 0x41CFD4u) {
        ctx->pc = 0x41CFD4u;
            // 0x41cfd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CFD8u;
        goto label_41cfd8;
    }
    ctx->pc = 0x41CFD0u;
    SET_GPR_U32(ctx, 31, 0x41CFD8u);
    ctx->pc = 0x41CFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CFD0u;
            // 0x41cfd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CFD8u; }
        if (ctx->pc != 0x41CFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CFD8u; }
        if (ctx->pc != 0x41CFD8u) { return; }
    }
    ctx->pc = 0x41CFD8u;
label_41cfd8:
    // 0x41cfd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41cfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41cfdc:
    // 0x41cfdc: 0xc04f278  jal         func_13C9E0
label_41cfe0:
    if (ctx->pc == 0x41CFE0u) {
        ctx->pc = 0x41CFE0u;
            // 0x41cfe0: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x41CFE4u;
        goto label_41cfe4;
    }
    ctx->pc = 0x41CFDCu;
    SET_GPR_U32(ctx, 31, 0x41CFE4u);
    ctx->pc = 0x41CFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CFDCu;
            // 0x41cfe0: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CFE4u; }
        if (ctx->pc != 0x41CFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CFE4u; }
        if (ctx->pc != 0x41CFE4u) { return; }
    }
    ctx->pc = 0x41CFE4u;
label_41cfe4:
    // 0x41cfe4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x41cfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_41cfe8:
    // 0x41cfe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41cfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41cfec:
    // 0x41cfec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x41cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_41cff0:
    // 0x41cff0: 0xc04cca0  jal         func_133280
label_41cff4:
    if (ctx->pc == 0x41CFF4u) {
        ctx->pc = 0x41CFF4u;
            // 0x41cff4: 0x24c6c700  addiu       $a2, $a2, -0x3900 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952704));
        ctx->pc = 0x41CFF8u;
        goto label_41cff8;
    }
    ctx->pc = 0x41CFF0u;
    SET_GPR_U32(ctx, 31, 0x41CFF8u);
    ctx->pc = 0x41CFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CFF0u;
            // 0x41cff4: 0x24c6c700  addiu       $a2, $a2, -0x3900 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CFF8u; }
        if (ctx->pc != 0x41CFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CFF8u; }
        if (ctx->pc != 0x41CFF8u) { return; }
    }
    ctx->pc = 0x41CFF8u;
label_41cff8:
    // 0x41cff8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x41cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_41cffc:
    // 0x41cffc: 0xc04cc44  jal         func_133110
label_41d000:
    if (ctx->pc == 0x41D000u) {
        ctx->pc = 0x41D000u;
            // 0x41d000: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D004u;
        goto label_41d004;
    }
    ctx->pc = 0x41CFFCu;
    SET_GPR_U32(ctx, 31, 0x41D004u);
    ctx->pc = 0x41D000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CFFCu;
            // 0x41d000: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D004u; }
        if (ctx->pc != 0x41D004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D004u; }
        if (ctx->pc != 0x41D004u) { return; }
    }
    ctx->pc = 0x41D004u;
label_41d004:
    // 0x41d004: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x41d004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_41d008:
    // 0x41d008: 0xc04cc08  jal         func_133020
label_41d00c:
    if (ctx->pc == 0x41D00Cu) {
        ctx->pc = 0x41D00Cu;
            // 0x41d00c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x41D010u;
        goto label_41d010;
    }
    ctx->pc = 0x41D008u;
    SET_GPR_U32(ctx, 31, 0x41D010u);
    ctx->pc = 0x41D00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D008u;
            // 0x41d00c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D010u; }
        if (ctx->pc != 0x41D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D010u; }
        if (ctx->pc != 0x41D010u) { return; }
    }
    ctx->pc = 0x41D010u;
label_41d010:
    // 0x41d010: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x41d010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41d014:
    // 0x41d014: 0x0  nop
    ctx->pc = 0x41d014u;
    // NOP
label_41d018:
    // 0x41d018: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x41d018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41d01c:
    // 0x41d01c: 0x45010032  bc1t        . + 4 + (0x32 << 2)
label_41d020:
    if (ctx->pc == 0x41D020u) {
        ctx->pc = 0x41D024u;
        goto label_41d024;
    }
    ctx->pc = 0x41D01Cu;
    {
        const bool branch_taken_0x41d01c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41d01c) {
            ctx->pc = 0x41D0E8u;
            goto label_41d0e8;
        }
    }
    ctx->pc = 0x41D024u;
label_41d024:
    // 0x41d024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41d028:
    // 0x41d028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41d028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41d02c:
    // 0x41d02c: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x41d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_41d030:
    // 0x41d030: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x41d030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41d034:
    // 0x41d034: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x41d034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41d038:
    // 0x41d038: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x41d038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d03c:
    // 0x41d03c: 0xc0e32a4  jal         func_38CA90
label_41d040:
    if (ctx->pc == 0x41D040u) {
        ctx->pc = 0x41D040u;
            // 0x41d040: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->pc = 0x41D044u;
        goto label_41d044;
    }
    ctx->pc = 0x41D03Cu;
    SET_GPR_U32(ctx, 31, 0x41D044u);
    ctx->pc = 0x41D040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D03Cu;
            // 0x41d040: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D044u; }
        if (ctx->pc != 0x41D044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D044u; }
        if (ctx->pc != 0x41D044u) { return; }
    }
    ctx->pc = 0x41D044u;
label_41d044:
    // 0x41d044: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x41d044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
label_41d048:
    // 0x41d048: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x41d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_41d04c:
    // 0x41d04c: 0xa242004c  sb          $v0, 0x4C($s2)
    ctx->pc = 0x41d04cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 2));
label_41d050:
    // 0x41d050: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41d050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41d054:
    // 0x41d054: 0x8c420cd0  lw          $v0, 0xCD0($v0)
    ctx->pc = 0x41d054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_41d058:
    // 0x41d058: 0xc12a1e0  jal         func_4A8780
label_41d05c:
    if (ctx->pc == 0x41D05Cu) {
        ctx->pc = 0x41D05Cu;
            // 0x41d05c: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->pc = 0x41D060u;
        goto label_41d060;
    }
    ctx->pc = 0x41D058u;
    SET_GPR_U32(ctx, 31, 0x41D060u);
    ctx->pc = 0x41D05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D058u;
            // 0x41d05c: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A8780u;
    if (runtime->hasFunction(0x4A8780u)) {
        auto targetFn = runtime->lookupFunction(0x4A8780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D060u; }
        if (ctx->pc != 0x41D060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8780_0x4a8780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D060u; }
        if (ctx->pc != 0x41D060u) { return; }
    }
    ctx->pc = 0x41D060u;
label_41d060:
    // 0x41d060: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x41d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_41d064:
    // 0x41d064: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_41d068:
    if (ctx->pc == 0x41D068u) {
        ctx->pc = 0x41D068u;
            // 0x41d068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D06Cu;
        goto label_41d06c;
    }
    ctx->pc = 0x41D064u;
    {
        const bool branch_taken_0x41d064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d064) {
            ctx->pc = 0x41D068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41D064u;
            // 0x41d068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41D070u;
            goto label_41d070;
        }
    }
    ctx->pc = 0x41D06Cu;
label_41d06c:
    // 0x41d06c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x41d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_41d070:
    // 0x41d070: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_41d074:
    if (ctx->pc == 0x41D074u) {
        ctx->pc = 0x41D074u;
            // 0x41d074: 0x8e4200a4  lw          $v0, 0xA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->pc = 0x41D078u;
        goto label_41d078;
    }
    ctx->pc = 0x41D070u;
    {
        const bool branch_taken_0x41d070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d070) {
            ctx->pc = 0x41D074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41D070u;
            // 0x41d074: 0x8e4200a4  lw          $v0, 0xA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41D08Cu;
            goto label_41d08c;
        }
    }
    ctx->pc = 0x41D078u;
label_41d078:
    // 0x41d078: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_41d07c:
    if (ctx->pc == 0x41D07Cu) {
        ctx->pc = 0x41D07Cu;
            // 0x41d07c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D080u;
        goto label_41d080;
    }
    ctx->pc = 0x41D078u;
    {
        const bool branch_taken_0x41d078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d078) {
            ctx->pc = 0x41D07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41D078u;
            // 0x41d07c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41D084u;
            goto label_41d084;
        }
    }
    ctx->pc = 0x41D080u;
label_41d080:
    // 0x41d080: 0x8c700020  lw          $s0, 0x20($v1)
    ctx->pc = 0x41d080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_41d084:
    // 0x41d084: 0x10000004  b           . + 4 + (0x4 << 2)
label_41d088:
    if (ctx->pc == 0x41D088u) {
        ctx->pc = 0x41D08Cu;
        goto label_41d08c;
    }
    ctx->pc = 0x41D084u;
    {
        const bool branch_taken_0x41d084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d084) {
            ctx->pc = 0x41D098u;
            goto label_41d098;
        }
    }
    ctx->pc = 0x41D08Cu;
label_41d08c:
    // 0x41d08c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_41d090:
    if (ctx->pc == 0x41D090u) {
        ctx->pc = 0x41D094u;
        goto label_41d094;
    }
    ctx->pc = 0x41D08Cu;
    {
        const bool branch_taken_0x41d08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d08c) {
            ctx->pc = 0x41D098u;
            goto label_41d098;
        }
    }
    ctx->pc = 0x41D094u;
label_41d094:
    // 0x41d094: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41d094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41d098:
    // 0x41d098: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_41d09c:
    if (ctx->pc == 0x41D09Cu) {
        ctx->pc = 0x41D09Cu;
            // 0x41d09c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x41D0A0u;
        goto label_41d0a0;
    }
    ctx->pc = 0x41D098u;
    {
        const bool branch_taken_0x41d098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d098) {
            ctx->pc = 0x41D09Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41D098u;
            // 0x41d09c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41D0C8u;
            goto label_41d0c8;
        }
    }
    ctx->pc = 0x41D0A0u;
label_41d0a0:
    // 0x41d0a0: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x41d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_41d0a4:
    // 0x41d0a4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x41d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_41d0a8:
    // 0x41d0a8: 0x2442c6d0  addiu       $v0, $v0, -0x3930
    ctx->pc = 0x41d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952656));
label_41d0ac:
    // 0x41d0ac: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x41d0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_41d0b0:
    // 0x41d0b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41d0b4:
    // 0x41d0b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41d0b8:
    // 0x41d0b8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x41d0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41d0bc:
    // 0x41d0bc: 0xc10aa04  jal         func_42A810
label_41d0c0:
    if (ctx->pc == 0x41D0C0u) {
        ctx->pc = 0x41D0C0u;
            // 0x41d0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D0C4u;
        goto label_41d0c4;
    }
    ctx->pc = 0x41D0BCu;
    SET_GPR_U32(ctx, 31, 0x41D0C4u);
    ctx->pc = 0x41D0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D0BCu;
            // 0x41d0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42A810u;
    if (runtime->hasFunction(0x42A810u)) {
        auto targetFn = runtime->lookupFunction(0x42A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D0C4u; }
        if (ctx->pc != 0x41D0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042A810_0x42a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D0C4u; }
        if (ctx->pc != 0x41D0C4u) { return; }
    }
    ctx->pc = 0x41D0C4u;
label_41d0c4:
    // 0x41d0c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x41d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_41d0c8:
    // 0x41d0c8: 0xc073234  jal         func_1CC8D0
label_41d0cc:
    if (ctx->pc == 0x41D0CCu) {
        ctx->pc = 0x41D0CCu;
            // 0x41d0cc: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->pc = 0x41D0D0u;
        goto label_41d0d0;
    }
    ctx->pc = 0x41D0C8u;
    SET_GPR_U32(ctx, 31, 0x41D0D0u);
    ctx->pc = 0x41D0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D0C8u;
            // 0x41d0cc: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D0D0u; }
        if (ctx->pc != 0x41D0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D0D0u; }
        if (ctx->pc != 0x41D0D0u) { return; }
    }
    ctx->pc = 0x41D0D0u;
label_41d0d0:
    // 0x41d0d0: 0xc10c9d8  jal         func_432760
label_41d0d4:
    if (ctx->pc == 0x41D0D4u) {
        ctx->pc = 0x41D0D4u;
            // 0x41d0d4: 0x8e6400e8  lw          $a0, 0xE8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
        ctx->pc = 0x41D0D8u;
        goto label_41d0d8;
    }
    ctx->pc = 0x41D0D0u;
    SET_GPR_U32(ctx, 31, 0x41D0D8u);
    ctx->pc = 0x41D0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D0D0u;
            // 0x41d0d4: 0x8e6400e8  lw          $a0, 0xE8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D0D8u; }
        if (ctx->pc != 0x41D0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D0D8u; }
        if (ctx->pc != 0x41D0D8u) { return; }
    }
    ctx->pc = 0x41D0D8u;
label_41d0d8:
    // 0x41d0d8: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x41d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_41d0dc:
    // 0x41d0dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41d0e0:
    // 0x41d0e0: 0xae6400ec  sw          $a0, 0xEC($s3)
    ctx->pc = 0x41d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 4));
label_41d0e4:
    // 0x41d0e4: 0xae6300d0  sw          $v1, 0xD0($s3)
    ctx->pc = 0x41d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 3));
label_41d0e8:
    // 0x41d0e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41d0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41d0ec:
    // 0x41d0ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41d0ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41d0f0:
    // 0x41d0f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41d0f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41d0f4:
    // 0x41d0f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41d0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d0f8:
    // 0x41d0f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41d0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41d0fc:
    // 0x41d0fc: 0x3e00008  jr          $ra
label_41d100:
    if (ctx->pc == 0x41D100u) {
        ctx->pc = 0x41D100u;
            // 0x41d100: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x41D104u;
        goto label_41d104;
    }
    ctx->pc = 0x41D0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D0FCu;
            // 0x41d100: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41D104u;
label_41d104:
    // 0x41d104: 0x0  nop
    ctx->pc = 0x41d104u;
    // NOP
label_41d108:
    // 0x41d108: 0x0  nop
    ctx->pc = 0x41d108u;
    // NOP
label_41d10c:
    // 0x41d10c: 0x0  nop
    ctx->pc = 0x41d10cu;
    // NOP
label_41d110:
    // 0x41d110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41d114:
    // 0x41d114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41d114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41d118:
    // 0x41d118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41d118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41d11c:
    // 0x41d11c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41d11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41d120:
    // 0x41d120: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x41d120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_41d124:
    // 0x41d124: 0x320f809  jalr        $t9
label_41d128:
    if (ctx->pc == 0x41D128u) {
        ctx->pc = 0x41D128u;
            // 0x41d128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D12Cu;
        goto label_41d12c;
    }
    ctx->pc = 0x41D124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41D12Cu);
        ctx->pc = 0x41D128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D124u;
            // 0x41d128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41D12Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41D12Cu; }
            if (ctx->pc != 0x41D12Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41D12Cu;
label_41d12c:
    // 0x41d12c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x41d12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41d130:
    // 0x41d130: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x41d130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_41d134:
    // 0x41d134: 0x320f809  jalr        $t9
label_41d138:
    if (ctx->pc == 0x41D138u) {
        ctx->pc = 0x41D138u;
            // 0x41d138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D13Cu;
        goto label_41d13c;
    }
    ctx->pc = 0x41D134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41D13Cu);
        ctx->pc = 0x41D138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D134u;
            // 0x41d138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41D13Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41D13Cu; }
            if (ctx->pc != 0x41D13Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41D13Cu;
label_41d13c:
    // 0x41d13c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x41d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_41d140:
    // 0x41d140: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x41d140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_41d144:
    // 0x41d144: 0xc10c9b4  jal         func_4326D0
label_41d148:
    if (ctx->pc == 0x41D148u) {
        ctx->pc = 0x41D148u;
            // 0x41d148: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->pc = 0x41D14Cu;
        goto label_41d14c;
    }
    ctx->pc = 0x41D144u;
    SET_GPR_U32(ctx, 31, 0x41D14Cu);
    ctx->pc = 0x41D148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D144u;
            // 0x41d148: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D14Cu; }
        if (ctx->pc != 0x41D14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D14Cu; }
        if (ctx->pc != 0x41D14Cu) { return; }
    }
    ctx->pc = 0x41D14Cu;
label_41d14c:
    // 0x41d14c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41d14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41d150:
    // 0x41d150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41d150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41d154:
    // 0x41d154: 0x3e00008  jr          $ra
label_41d158:
    if (ctx->pc == 0x41D158u) {
        ctx->pc = 0x41D158u;
            // 0x41d158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41D15Cu;
        goto label_41d15c;
    }
    ctx->pc = 0x41D154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D154u;
            // 0x41d158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41D15Cu;
label_41d15c:
    // 0x41d15c: 0x0  nop
    ctx->pc = 0x41d15cu;
    // NOP
label_41d160:
    // 0x41d160: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x41d160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41d164:
    // 0x41d164: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x41d164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_41d168:
    // 0x41d168: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41d168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41d16c:
    // 0x41d16c: 0x0  nop
    ctx->pc = 0x41d16cu;
    // NOP
label_41d170:
    // 0x41d170: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41d170u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_41d174:
    // 0x41d174: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x41d174u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_41d178:
    // 0x41d178: 0x0  nop
    ctx->pc = 0x41d178u;
    // NOP
label_41d17c:
    // 0x41d17c: 0xac8300d4  sw          $v1, 0xD4($a0)
    ctx->pc = 0x41d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
label_41d180:
    // 0x41d180: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x41d180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41d184:
    // 0x41d184: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x41d184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41d188:
    // 0x41d188: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_41d18c:
    if (ctx->pc == 0x41D18Cu) {
        ctx->pc = 0x41D18Cu;
            // 0x41d18c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x41D190u;
        goto label_41d190;
    }
    ctx->pc = 0x41D188u;
    {
        const bool branch_taken_0x41d188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41d188) {
            ctx->pc = 0x41D18Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41D188u;
            // 0x41d18c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x41D1A0u;
            goto label_41d1a0;
        }
    }
    ctx->pc = 0x41D190u;
label_41d190:
    // 0x41d190: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41d190u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_41d194:
    // 0x41d194: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x41d194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_41d198:
    // 0x41d198: 0x10000007  b           . + 4 + (0x7 << 2)
label_41d19c:
    if (ctx->pc == 0x41D19Cu) {
        ctx->pc = 0x41D19Cu;
            // 0x41d19c: 0xac8500e4  sw          $a1, 0xE4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 5));
        ctx->pc = 0x41D1A0u;
        goto label_41d1a0;
    }
    ctx->pc = 0x41D198u;
    {
        const bool branch_taken_0x41d198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D198u;
            // 0x41d19c: 0xac8500e4  sw          $a1, 0xE4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d198) {
            ctx->pc = 0x41D1B8u;
            goto label_41d1b8;
        }
    }
    ctx->pc = 0x41D1A0u;
label_41d1a0:
    // 0x41d1a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x41d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_41d1a4:
    // 0x41d1a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41d1a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_41d1a8:
    // 0x41d1a8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x41d1a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_41d1ac:
    // 0x41d1ac: 0x0  nop
    ctx->pc = 0x41d1acu;
    // NOP
label_41d1b0:
    // 0x41d1b0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x41d1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_41d1b4:
    // 0x41d1b4: 0xac8500e4  sw          $a1, 0xE4($a0)
    ctx->pc = 0x41d1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 5));
label_41d1b8:
    // 0x41d1b8: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x41d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
label_41d1bc:
    // 0x41d1bc: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x41d1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
label_41d1c0:
    // 0x41d1c0: 0x3e00008  jr          $ra
label_41d1c4:
    if (ctx->pc == 0x41D1C4u) {
        ctx->pc = 0x41D1C4u;
            // 0x41d1c4: 0xac8000ec  sw          $zero, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
        ctx->pc = 0x41D1C8u;
        goto label_41d1c8;
    }
    ctx->pc = 0x41D1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D1C0u;
            // 0x41d1c4: 0xac8000ec  sw          $zero, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41D1C8u;
label_41d1c8:
    // 0x41d1c8: 0x0  nop
    ctx->pc = 0x41d1c8u;
    // NOP
label_41d1cc:
    // 0x41d1cc: 0x0  nop
    ctx->pc = 0x41d1ccu;
    // NOP
label_41d1d0:
    // 0x41d1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41d1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41d1d4:
    // 0x41d1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41d1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41d1d8:
    // 0x41d1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41d1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41d1dc:
    // 0x41d1dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41d1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d1e0:
    // 0x41d1e0: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x41d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_41d1e4:
    // 0x41d1e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41d1e8:
    if (ctx->pc == 0x41D1E8u) {
        ctx->pc = 0x41D1E8u;
            // 0x41d1e8: 0x260400d8  addiu       $a0, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->pc = 0x41D1ECu;
        goto label_41d1ec;
    }
    ctx->pc = 0x41D1E4u;
    {
        const bool branch_taken_0x41d1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d1e4) {
            ctx->pc = 0x41D1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41D1E4u;
            // 0x41d1e8: 0x260400d8  addiu       $a0, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41D200u;
            goto label_41d200;
        }
    }
    ctx->pc = 0x41D1ECu;
label_41d1ec:
    // 0x41d1ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41d1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41d1f0:
    // 0x41d1f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41d1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41d1f4:
    // 0x41d1f4: 0x320f809  jalr        $t9
label_41d1f8:
    if (ctx->pc == 0x41D1F8u) {
        ctx->pc = 0x41D1F8u;
            // 0x41d1f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41D1FCu;
        goto label_41d1fc;
    }
    ctx->pc = 0x41D1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41D1FCu);
        ctx->pc = 0x41D1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D1F4u;
            // 0x41d1f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41D1FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41D1FCu; }
            if (ctx->pc != 0x41D1FCu) { return; }
        }
        }
    }
    ctx->pc = 0x41D1FCu;
label_41d1fc:
    // 0x41d1fc: 0x260400d8  addiu       $a0, $s0, 0xD8
    ctx->pc = 0x41d1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_41d200:
    // 0x41d200: 0xc0d37dc  jal         func_34DF70
label_41d204:
    if (ctx->pc == 0x41D204u) {
        ctx->pc = 0x41D204u;
            // 0x41d204: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->pc = 0x41D208u;
        goto label_41d208;
    }
    ctx->pc = 0x41D200u;
    SET_GPR_U32(ctx, 31, 0x41D208u);
    ctx->pc = 0x41D204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D200u;
            // 0x41d204: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D208u; }
        if (ctx->pc != 0x41D208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D208u; }
        if (ctx->pc != 0x41D208u) { return; }
    }
    ctx->pc = 0x41D208u;
label_41d208:
    // 0x41d208: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x41d208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_41d20c:
    // 0x41d20c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41d210:
    if (ctx->pc == 0x41D210u) {
        ctx->pc = 0x41D210u;
            // 0x41d210: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x41D214u;
        goto label_41d214;
    }
    ctx->pc = 0x41D20Cu;
    {
        const bool branch_taken_0x41d20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d20c) {
            ctx->pc = 0x41D210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41D20Cu;
            // 0x41d210: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41D228u;
            goto label_41d228;
        }
    }
    ctx->pc = 0x41D214u;
label_41d214:
    // 0x41d214: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41d214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41d218:
    // 0x41d218: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41d218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41d21c:
    // 0x41d21c: 0x320f809  jalr        $t9
label_41d220:
    if (ctx->pc == 0x41D220u) {
        ctx->pc = 0x41D220u;
            // 0x41d220: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41D224u;
        goto label_41d224;
    }
    ctx->pc = 0x41D21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41D224u);
        ctx->pc = 0x41D220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D21Cu;
            // 0x41d220: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41D224u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41D224u; }
            if (ctx->pc != 0x41D224u) { return; }
        }
        }
    }
    ctx->pc = 0x41D224u;
label_41d224:
    // 0x41d224: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x41d224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_41d228:
    // 0x41d228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41d228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41d22c:
    // 0x41d22c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41d22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41d230:
    // 0x41d230: 0x3e00008  jr          $ra
label_41d234:
    if (ctx->pc == 0x41D234u) {
        ctx->pc = 0x41D234u;
            // 0x41d234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41D238u;
        goto label_41d238;
    }
    ctx->pc = 0x41D230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D230u;
            // 0x41d234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41D238u;
label_41d238:
    // 0x41d238: 0x0  nop
    ctx->pc = 0x41d238u;
    // NOP
label_41d23c:
    // 0x41d23c: 0x0  nop
    ctx->pc = 0x41d23cu;
    // NOP
label_41d240:
    // 0x41d240: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x41d240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_41d244:
    // 0x41d244: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41d244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41d248:
    // 0x41d248: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x41d248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_41d24c:
    // 0x41d24c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41d24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41d250:
    // 0x41d250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41d250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41d254:
    // 0x41d254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41d254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41d258:
    // 0x41d258: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41d258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41d25c:
    // 0x41d25c: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x41d25cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_41d260:
    // 0x41d260: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x41d260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_41d264:
    // 0x41d264: 0x320f809  jalr        $t9
label_41d268:
    if (ctx->pc == 0x41D268u) {
        ctx->pc = 0x41D268u;
            // 0x41d268: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D26Cu;
        goto label_41d26c;
    }
    ctx->pc = 0x41D264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41D26Cu);
        ctx->pc = 0x41D268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D264u;
            // 0x41d268: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41D26Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41D26Cu; }
            if (ctx->pc != 0x41D26Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41D26Cu;
label_41d26c:
    // 0x41d26c: 0x8e030cd0  lw          $v1, 0xCD0($s0)
    ctx->pc = 0x41d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3280)));
label_41d270:
    // 0x41d270: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x41d270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_41d274:
    // 0x41d274: 0x548300d9  bnel        $a0, $v1, . + 4 + (0xD9 << 2)
label_41d278:
    if (ctx->pc == 0x41D278u) {
        ctx->pc = 0x41D278u;
            // 0x41d278: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x41D27Cu;
        goto label_41d27c;
    }
    ctx->pc = 0x41D274u;
    {
        const bool branch_taken_0x41d274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x41d274) {
            ctx->pc = 0x41D278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41D274u;
            // 0x41d278: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41D5DCu;
            goto label_41d5dc;
        }
    }
    ctx->pc = 0x41D27Cu;
label_41d27c:
    // 0x41d27c: 0xc0892d0  jal         func_224B40
label_41d280:
    if (ctx->pc == 0x41D280u) {
        ctx->pc = 0x41D280u;
            // 0x41d280: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x41D284u;
        goto label_41d284;
    }
    ctx->pc = 0x41D27Cu;
    SET_GPR_U32(ctx, 31, 0x41D284u);
    ctx->pc = 0x41D280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D27Cu;
            // 0x41d280: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D284u; }
        if (ctx->pc != 0x41D284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D284u; }
        if (ctx->pc != 0x41D284u) { return; }
    }
    ctx->pc = 0x41D284u;
label_41d284:
    // 0x41d284: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41d284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41d288:
    // 0x41d288: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x41d288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_41d28c:
    // 0x41d28c: 0x8c437330  lw          $v1, 0x7330($v0)
    ctx->pc = 0x41d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29488)));
label_41d290:
    // 0x41d290: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x41d290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_41d294:
    // 0x41d294: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x41d294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_41d298:
    // 0x41d298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41d298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41d29c:
    // 0x41d29c: 0x8c5000b4  lw          $s0, 0xB4($v0)
    ctx->pc = 0x41d29cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_41d2a0:
    // 0x41d2a0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x41d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_41d2a4:
    // 0x41d2a4: 0xc0b6e68  jal         func_2DB9A0
label_41d2a8:
    if (ctx->pc == 0x41D2A8u) {
        ctx->pc = 0x41D2A8u;
            // 0x41d2a8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x41D2ACu;
        goto label_41d2ac;
    }
    ctx->pc = 0x41D2A4u;
    SET_GPR_U32(ctx, 31, 0x41D2ACu);
    ctx->pc = 0x41D2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D2A4u;
            // 0x41d2a8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D2ACu; }
        if (ctx->pc != 0x41D2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D2ACu; }
        if (ctx->pc != 0x41D2ACu) { return; }
    }
    ctx->pc = 0x41D2ACu;
label_41d2ac:
    // 0x41d2ac: 0xc0b6dac  jal         func_2DB6B0
label_41d2b0:
    if (ctx->pc == 0x41D2B0u) {
        ctx->pc = 0x41D2B0u;
            // 0x41d2b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x41D2B4u;
        goto label_41d2b4;
    }
    ctx->pc = 0x41D2ACu;
    SET_GPR_U32(ctx, 31, 0x41D2B4u);
    ctx->pc = 0x41D2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D2ACu;
            // 0x41d2b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D2B4u; }
        if (ctx->pc != 0x41D2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D2B4u; }
        if (ctx->pc != 0x41D2B4u) { return; }
    }
    ctx->pc = 0x41D2B4u;
label_41d2b4:
    // 0x41d2b4: 0xc0cac94  jal         func_32B250
label_41d2b8:
    if (ctx->pc == 0x41D2B8u) {
        ctx->pc = 0x41D2B8u;
            // 0x41d2b8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x41D2BCu;
        goto label_41d2bc;
    }
    ctx->pc = 0x41D2B4u;
    SET_GPR_U32(ctx, 31, 0x41D2BCu);
    ctx->pc = 0x41D2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D2B4u;
            // 0x41d2b8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D2BCu; }
        if (ctx->pc != 0x41D2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D2BCu; }
        if (ctx->pc != 0x41D2BCu) { return; }
    }
    ctx->pc = 0x41D2BCu;
label_41d2bc:
    // 0x41d2bc: 0xc0cac84  jal         func_32B210
label_41d2c0:
    if (ctx->pc == 0x41D2C0u) {
        ctx->pc = 0x41D2C0u;
            // 0x41d2c0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x41D2C4u;
        goto label_41d2c4;
    }
    ctx->pc = 0x41D2BCu;
    SET_GPR_U32(ctx, 31, 0x41D2C4u);
    ctx->pc = 0x41D2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D2BCu;
            // 0x41d2c0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D2C4u; }
        if (ctx->pc != 0x41D2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D2C4u; }
        if (ctx->pc != 0x41D2C4u) { return; }
    }
    ctx->pc = 0x41D2C4u;
label_41d2c4:
    // 0x41d2c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x41d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_41d2c8:
    // 0x41d2c8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x41d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_41d2cc:
    // 0x41d2cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x41d2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41d2d0:
    // 0x41d2d0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x41d2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_41d2d4:
    // 0x41d2d4: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x41d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
label_41d2d8:
    // 0x41d2d8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x41d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_41d2dc:
    // 0x41d2dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x41d2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_41d2e0:
    // 0x41d2e0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x41d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_41d2e4:
    // 0x41d2e4: 0xc0a562c  jal         func_2958B0
label_41d2e8:
    if (ctx->pc == 0x41D2E8u) {
        ctx->pc = 0x41D2E8u;
            // 0x41d2e8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x41D2ECu;
        goto label_41d2ec;
    }
    ctx->pc = 0x41D2E4u;
    SET_GPR_U32(ctx, 31, 0x41D2ECu);
    ctx->pc = 0x41D2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D2E4u;
            // 0x41d2e8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D2ECu; }
        if (ctx->pc != 0x41D2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D2ECu; }
        if (ctx->pc != 0x41D2ECu) { return; }
    }
    ctx->pc = 0x41D2ECu;
label_41d2ec:
    // 0x41d2ec: 0xafb000c4  sw          $s0, 0xC4($sp)
    ctx->pc = 0x41d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 16));
label_41d2f0:
    // 0x41d2f0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x41d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_41d2f4:
    // 0x41d2f4: 0xc6280018  lwc1        $f8, 0x18($s1)
    ctx->pc = 0x41d2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_41d2f8:
    // 0x41d2f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x41d2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41d2fc:
    // 0x41d2fc: 0xc6270014  lwc1        $f7, 0x14($s1)
    ctx->pc = 0x41d2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_41d300:
    // 0x41d300: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x41d300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41d304:
    // 0x41d304: 0xc6260010  lwc1        $f6, 0x10($s1)
    ctx->pc = 0x41d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_41d308:
    // 0x41d308: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x41d308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_41d30c:
    // 0x41d30c: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x41d30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41d310:
    // 0x41d310: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x41d310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_41d314:
    // 0x41d314: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x41d314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41d318:
    // 0x41d318: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x41d318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41d31c:
    // 0x41d31c: 0xa3a40172  sb          $a0, 0x172($sp)
    ctx->pc = 0x41d31cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 4));
label_41d320:
    // 0x41d320: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x41d320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_41d324:
    // 0x41d324: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x41d324u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_41d328:
    // 0x41d328: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x41d328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_41d32c:
    // 0x41d32c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x41d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_41d330:
    // 0x41d330: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x41d330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_41d334:
    // 0x41d334: 0xc445c910  lwc1        $f5, -0x36F0($v0)
    ctx->pc = 0x41d334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_41d338:
    // 0x41d338: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x41d338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41d33c:
    // 0x41d33c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x41d33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41d340:
    // 0x41d340: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x41d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41d344:
    // 0x41d344: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x41d344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_41d348:
    // 0x41d348: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x41d348u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_41d34c:
    // 0x41d34c: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x41d34cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_41d350:
    // 0x41d350: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x41d350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_41d354:
    // 0x41d354: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x41d354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_41d358:
    // 0x41d358: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x41d358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_41d35c:
    // 0x41d35c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x41d35cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_41d360:
    // 0x41d360: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41d360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41d364:
    // 0x41d364: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x41d364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_41d368:
    // 0x41d368: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41d36c:
    // 0x41d36c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x41d36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41d370:
    // 0x41d370: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x41d370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_41d374:
    // 0x41d374: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x41d374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41d378:
    // 0x41d378: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x41d378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41d37c:
    // 0x41d37c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x41d37cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_41d380:
    // 0x41d380: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x41d380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_41d384:
    // 0x41d384: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x41d384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_41d388:
    // 0x41d388: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x41d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41d38c:
    // 0x41d38c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x41d38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41d390:
    // 0x41d390: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x41d390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41d394:
    // 0x41d394: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x41d394u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_41d398:
    // 0x41d398: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x41d398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_41d39c:
    // 0x41d39c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x41d39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_41d3a0:
    // 0x41d3a0: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x41d3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_41d3a4:
    // 0x41d3a4: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x41d3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41d3a8:
    // 0x41d3a8: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x41d3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41d3ac:
    // 0x41d3ac: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x41d3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41d3b0:
    // 0x41d3b0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x41d3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41d3b4:
    // 0x41d3b4: 0xe7a600d0  swc1        $f6, 0xD0($sp)
    ctx->pc = 0x41d3b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_41d3b8:
    // 0x41d3b8: 0xe7a700d4  swc1        $f7, 0xD4($sp)
    ctx->pc = 0x41d3b8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_41d3bc:
    // 0x41d3bc: 0xe7a800d8  swc1        $f8, 0xD8($sp)
    ctx->pc = 0x41d3bcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_41d3c0:
    // 0x41d3c0: 0xe7a50168  swc1        $f5, 0x168($sp)
    ctx->pc = 0x41d3c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_41d3c4:
    // 0x41d3c4: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x41d3c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_41d3c8:
    // 0x41d3c8: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x41d3c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_41d3cc:
    // 0x41d3cc: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x41d3ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_41d3d0:
    // 0x41d3d0: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x41d3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_41d3d4:
    // 0x41d3d4: 0xc0a7a88  jal         func_29EA20
label_41d3d8:
    if (ctx->pc == 0x41D3D8u) {
        ctx->pc = 0x41D3D8u;
            // 0x41d3d8: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x41D3DCu;
        goto label_41d3dc;
    }
    ctx->pc = 0x41D3D4u;
    SET_GPR_U32(ctx, 31, 0x41D3DCu);
    ctx->pc = 0x41D3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D3D4u;
            // 0x41d3d8: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D3DCu; }
        if (ctx->pc != 0x41D3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D3DCu; }
        if (ctx->pc != 0x41D3DCu) { return; }
    }
    ctx->pc = 0x41D3DCu;
label_41d3dc:
    // 0x41d3dc: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x41d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_41d3e0:
    // 0x41d3e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41d3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41d3e4:
    // 0x41d3e4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_41d3e8:
    if (ctx->pc == 0x41D3E8u) {
        ctx->pc = 0x41D3E8u;
            // 0x41d3e8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41D3ECu;
        goto label_41d3ec;
    }
    ctx->pc = 0x41D3E4u;
    {
        const bool branch_taken_0x41d3e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D3E4u;
            // 0x41d3e8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d3e4) {
            ctx->pc = 0x41D434u;
            goto label_41d434;
        }
    }
    ctx->pc = 0x41D3ECu;
label_41d3ec:
    // 0x41d3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41d3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d3f0:
    // 0x41d3f0: 0xc088ef4  jal         func_223BD0
label_41d3f4:
    if (ctx->pc == 0x41D3F4u) {
        ctx->pc = 0x41D3F4u;
            // 0x41d3f4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x41D3F8u;
        goto label_41d3f8;
    }
    ctx->pc = 0x41D3F0u;
    SET_GPR_U32(ctx, 31, 0x41D3F8u);
    ctx->pc = 0x41D3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D3F0u;
            // 0x41d3f4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D3F8u; }
        if (ctx->pc != 0x41D3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D3F8u; }
        if (ctx->pc != 0x41D3F8u) { return; }
    }
    ctx->pc = 0x41D3F8u;
label_41d3f8:
    // 0x41d3f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41d3fc:
    // 0x41d3fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_41d400:
    // 0x41d400: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x41d400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_41d404:
    // 0x41d404: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x41d404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_41d408:
    // 0x41d408: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x41d408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_41d40c:
    // 0x41d40c: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x41d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_41d410:
    // 0x41d410: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41d414:
    // 0x41d414: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41d414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41d418:
    // 0x41d418: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x41d418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_41d41c:
    // 0x41d41c: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x41d41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_41d420:
    // 0x41d420: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x41d420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_41d424:
    // 0x41d424: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x41d424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41d428:
    // 0x41d428: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x41d428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_41d42c:
    // 0x41d42c: 0xc088b38  jal         func_222CE0
label_41d430:
    if (ctx->pc == 0x41D430u) {
        ctx->pc = 0x41D430u;
            // 0x41d430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D434u;
        goto label_41d434;
    }
    ctx->pc = 0x41D42Cu;
    SET_GPR_U32(ctx, 31, 0x41D434u);
    ctx->pc = 0x41D430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D42Cu;
            // 0x41d430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D434u; }
        if (ctx->pc != 0x41D434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D434u; }
        if (ctx->pc != 0x41D434u) { return; }
    }
    ctx->pc = 0x41D434u;
label_41d434:
    // 0x41d434: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x41d434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_41d438:
    // 0x41d438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41d438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d43c:
    // 0x41d43c: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x41d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_41d440:
    // 0x41d440: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x41d440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_41d444:
    // 0x41d444: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x41d444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_41d448:
    // 0x41d448: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41d448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41d44c:
    // 0x41d44c: 0xc08914c  jal         func_224530
label_41d450:
    if (ctx->pc == 0x41D450u) {
        ctx->pc = 0x41D450u;
            // 0x41d450: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D454u;
        goto label_41d454;
    }
    ctx->pc = 0x41D44Cu;
    SET_GPR_U32(ctx, 31, 0x41D454u);
    ctx->pc = 0x41D450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D44Cu;
            // 0x41d450: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D454u; }
        if (ctx->pc != 0x41D454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D454u; }
        if (ctx->pc != 0x41D454u) { return; }
    }
    ctx->pc = 0x41D454u;
label_41d454:
    // 0x41d454: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x41d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41d458:
    // 0x41d458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41d458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d45c:
    // 0x41d45c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x41d45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41d460:
    // 0x41d460: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x41d460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_41d464:
    // 0x41d464: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x41d464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41d468:
    // 0x41d468: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x41d468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_41d46c:
    // 0x41d46c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x41d46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_41d470:
    // 0x41d470: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x41d470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_41d474:
    // 0x41d474: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x41d474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_41d478:
    // 0x41d478: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x41d478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_41d47c:
    // 0x41d47c: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x41d47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41d480:
    // 0x41d480: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x41d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41d484:
    // 0x41d484: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x41d484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41d488:
    // 0x41d488: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x41d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41d48c:
    // 0x41d48c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x41d48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_41d490:
    // 0x41d490: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x41d490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_41d494:
    // 0x41d494: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x41d494u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_41d498:
    // 0x41d498: 0xc0892b0  jal         func_224AC0
label_41d49c:
    if (ctx->pc == 0x41D49Cu) {
        ctx->pc = 0x41D49Cu;
            // 0x41d49c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x41D4A0u;
        goto label_41d4a0;
    }
    ctx->pc = 0x41D498u;
    SET_GPR_U32(ctx, 31, 0x41D4A0u);
    ctx->pc = 0x41D49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D498u;
            // 0x41d49c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D4A0u; }
        if (ctx->pc != 0x41D4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D4A0u; }
        if (ctx->pc != 0x41D4A0u) { return; }
    }
    ctx->pc = 0x41D4A0u;
label_41d4a0:
    // 0x41d4a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41d4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d4a4:
    // 0x41d4a4: 0xc0891d8  jal         func_224760
label_41d4a8:
    if (ctx->pc == 0x41D4A8u) {
        ctx->pc = 0x41D4A8u;
            // 0x41d4a8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x41D4ACu;
        goto label_41d4ac;
    }
    ctx->pc = 0x41D4A4u;
    SET_GPR_U32(ctx, 31, 0x41D4ACu);
    ctx->pc = 0x41D4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D4A4u;
            // 0x41d4a8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D4ACu; }
        if (ctx->pc != 0x41D4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D4ACu; }
        if (ctx->pc != 0x41D4ACu) { return; }
    }
    ctx->pc = 0x41D4ACu;
label_41d4ac:
    // 0x41d4ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x41d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41d4b0:
    // 0x41d4b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41d4b4:
    // 0x41d4b4: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x41d4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
label_41d4b8:
    // 0x41d4b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41d4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d4bc:
    // 0x41d4bc: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x41d4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_41d4c0:
    // 0x41d4c0: 0xa2230066  sb          $v1, 0x66($s1)
    ctx->pc = 0x41d4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 3));
label_41d4c4:
    // 0x41d4c4: 0xa2200067  sb          $zero, 0x67($s1)
    ctx->pc = 0x41d4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 0));
label_41d4c8:
    // 0x41d4c8: 0xa2230068  sb          $v1, 0x68($s1)
    ctx->pc = 0x41d4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 3));
label_41d4cc:
    // 0x41d4cc: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x41d4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_41d4d0:
    // 0x41d4d0: 0xa223006a  sb          $v1, 0x6A($s1)
    ctx->pc = 0x41d4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 3));
label_41d4d4:
    // 0x41d4d4: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x41d4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_41d4d8:
    // 0x41d4d8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x41d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41d4dc:
    // 0x41d4dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41d4e0:
    // 0x41d4e0: 0xc08c164  jal         func_230590
label_41d4e4:
    if (ctx->pc == 0x41D4E4u) {
        ctx->pc = 0x41D4E4u;
            // 0x41d4e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41D4E8u;
        goto label_41d4e8;
    }
    ctx->pc = 0x41D4E0u;
    SET_GPR_U32(ctx, 31, 0x41D4E8u);
    ctx->pc = 0x41D4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D4E0u;
            // 0x41d4e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D4E8u; }
        if (ctx->pc != 0x41D4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D4E8u; }
        if (ctx->pc != 0x41D4E8u) { return; }
    }
    ctx->pc = 0x41D4E8u;
label_41d4e8:
    // 0x41d4e8: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x41d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_41d4ec:
    // 0x41d4ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41d4f0:
    // 0x41d4f0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41d4f4:
    // 0x41d4f4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x41d4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_41d4f8:
    // 0x41d4f8: 0xc0a7a88  jal         func_29EA20
label_41d4fc:
    if (ctx->pc == 0x41D4FCu) {
        ctx->pc = 0x41D4FCu;
            // 0x41d4fc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x41D500u;
        goto label_41d500;
    }
    ctx->pc = 0x41D4F8u;
    SET_GPR_U32(ctx, 31, 0x41D500u);
    ctx->pc = 0x41D4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D4F8u;
            // 0x41d4fc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D500u; }
        if (ctx->pc != 0x41D500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D500u; }
        if (ctx->pc != 0x41D500u) { return; }
    }
    ctx->pc = 0x41D500u;
label_41d500:
    // 0x41d500: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x41d500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_41d504:
    // 0x41d504: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x41d504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41d508:
    // 0x41d508: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_41d50c:
    if (ctx->pc == 0x41D50Cu) {
        ctx->pc = 0x41D50Cu;
            // 0x41d50c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41D510u;
        goto label_41d510;
    }
    ctx->pc = 0x41D508u;
    {
        const bool branch_taken_0x41d508 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D508u;
            // 0x41d50c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d508) {
            ctx->pc = 0x41D52Cu;
            goto label_41d52c;
        }
    }
    ctx->pc = 0x41D510u;
label_41d510:
    // 0x41d510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41d510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41d514:
    // 0x41d514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41d514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d518:
    // 0x41d518: 0xc0869d0  jal         func_21A740
label_41d51c:
    if (ctx->pc == 0x41D51Cu) {
        ctx->pc = 0x41D51Cu;
            // 0x41d51c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D520u;
        goto label_41d520;
    }
    ctx->pc = 0x41D518u;
    SET_GPR_U32(ctx, 31, 0x41D520u);
    ctx->pc = 0x41D51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D518u;
            // 0x41d51c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D520u; }
        if (ctx->pc != 0x41D520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D520u; }
        if (ctx->pc != 0x41D520u) { return; }
    }
    ctx->pc = 0x41D520u;
label_41d520:
    // 0x41d520: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41d520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41d524:
    // 0x41d524: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x41d524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_41d528:
    // 0x41d528: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x41d528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_41d52c:
    // 0x41d52c: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x41d52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_41d530:
    // 0x41d530: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41d530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41d534:
    // 0x41d534: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x41d534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41d538:
    // 0x41d538: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41d538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41d53c:
    // 0x41d53c: 0xc08c650  jal         func_231940
label_41d540:
    if (ctx->pc == 0x41D540u) {
        ctx->pc = 0x41D540u;
            // 0x41d540: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D544u;
        goto label_41d544;
    }
    ctx->pc = 0x41D53Cu;
    SET_GPR_U32(ctx, 31, 0x41D544u);
    ctx->pc = 0x41D540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D53Cu;
            // 0x41d540: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D544u; }
        if (ctx->pc != 0x41D544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D544u; }
        if (ctx->pc != 0x41D544u) { return; }
    }
    ctx->pc = 0x41D544u;
label_41d544:
    // 0x41d544: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x41d544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41d548:
    // 0x41d548: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41d548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41d54c:
    // 0x41d54c: 0x262400d8  addiu       $a0, $s1, 0xD8
    ctx->pc = 0x41d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
label_41d550:
    // 0x41d550: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x41d550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_41d554:
    // 0x41d554: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x41d554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_41d558:
    // 0x41d558: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x41d558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41d55c:
    // 0x41d55c: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x41d55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_41d560:
    // 0x41d560: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x41d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41d564:
    // 0x41d564: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x41d564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_41d568:
    // 0x41d568: 0xae3100e0  sw          $s1, 0xE0($s1)
    ctx->pc = 0x41d568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 17));
label_41d56c:
    // 0x41d56c: 0x8c437330  lw          $v1, 0x7330($v0)
    ctx->pc = 0x41d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29488)));
label_41d570:
    // 0x41d570: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x41d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_41d574:
    // 0x41d574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x41d574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_41d578:
    // 0x41d578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41d57c:
    // 0x41d57c: 0x8c4700a8  lw          $a3, 0xA8($v0)
    ctx->pc = 0x41d57cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_41d580:
    // 0x41d580: 0xc0d37ec  jal         func_34DFB0
label_41d584:
    if (ctx->pc == 0x41D584u) {
        ctx->pc = 0x41D584u;
            // 0x41d584: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x41D588u;
        goto label_41d588;
    }
    ctx->pc = 0x41D580u;
    SET_GPR_U32(ctx, 31, 0x41D588u);
    ctx->pc = 0x41D584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D580u;
            // 0x41d584: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D588u; }
        if (ctx->pc != 0x41D588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D588u; }
        if (ctx->pc != 0x41D588u) { return; }
    }
    ctx->pc = 0x41D588u;
label_41d588:
    // 0x41d588: 0xc040180  jal         func_100600
label_41d58c:
    if (ctx->pc == 0x41D58Cu) {
        ctx->pc = 0x41D58Cu;
            // 0x41d58c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x41D590u;
        goto label_41d590;
    }
    ctx->pc = 0x41D588u;
    SET_GPR_U32(ctx, 31, 0x41D590u);
    ctx->pc = 0x41D58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D588u;
            // 0x41d58c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D590u; }
        if (ctx->pc != 0x41D590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D590u; }
        if (ctx->pc != 0x41D590u) { return; }
    }
    ctx->pc = 0x41D590u;
label_41d590:
    // 0x41d590: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41d590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41d594:
    // 0x41d594: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_41d598:
    if (ctx->pc == 0x41D598u) {
        ctx->pc = 0x41D598u;
            // 0x41d598: 0xae3000e8  sw          $s0, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 16));
        ctx->pc = 0x41D59Cu;
        goto label_41d59c;
    }
    ctx->pc = 0x41D594u;
    {
        const bool branch_taken_0x41d594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d594) {
            ctx->pc = 0x41D598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41D594u;
            // 0x41d598: 0xae3000e8  sw          $s0, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41D5D8u;
            goto label_41d5d8;
        }
    }
    ctx->pc = 0x41D59Cu;
label_41d59c:
    // 0x41d59c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x41d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_41d5a0:
    // 0x41d5a0: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x41d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
label_41d5a4:
    // 0x41d5a4: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x41d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_41d5a8:
    // 0x41d5a8: 0x346500a9  ori         $a1, $v1, 0xA9
    ctx->pc = 0x41d5a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)169);
label_41d5ac:
    // 0x41d5ac: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x41d5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41d5b0:
    // 0x41d5b0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x41d5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_41d5b4:
    // 0x41d5b4: 0x320f809  jalr        $t9
label_41d5b8:
    if (ctx->pc == 0x41D5B8u) {
        ctx->pc = 0x41D5B8u;
            // 0x41d5b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x41D5BCu;
        goto label_41d5bc;
    }
    ctx->pc = 0x41D5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41D5BCu);
        ctx->pc = 0x41D5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D5B4u;
            // 0x41d5b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41D5BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41D5BCu; }
            if (ctx->pc != 0x41D5BCu) { return; }
        }
        }
    }
    ctx->pc = 0x41D5BCu;
label_41d5bc:
    // 0x41d5bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41d5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41d5c0:
    // 0x41d5c0: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x41d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_41d5c4:
    // 0x41d5c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41d5c8:
    // 0x41d5c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x41d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_41d5cc:
    // 0x41d5cc: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x41d5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_41d5d0:
    // 0x41d5d0: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x41d5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_41d5d4:
    // 0x41d5d4: 0xae3000e8  sw          $s0, 0xE8($s1)
    ctx->pc = 0x41d5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 16));
label_41d5d8:
    // 0x41d5d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x41d5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_41d5dc:
    // 0x41d5dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41d5dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41d5e0:
    // 0x41d5e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41d5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d5e4:
    // 0x41d5e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41d5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41d5e8:
    // 0x41d5e8: 0x3e00008  jr          $ra
label_41d5ec:
    if (ctx->pc == 0x41D5ECu) {
        ctx->pc = 0x41D5ECu;
            // 0x41d5ec: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x41D5F0u;
        goto label_41d5f0;
    }
    ctx->pc = 0x41D5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D5E8u;
            // 0x41d5ec: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41D5F0u;
label_41d5f0:
    // 0x41d5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41d5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41d5f4:
    // 0x41d5f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41d5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41d5f8:
    // 0x41d5f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41d5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41d5fc:
    // 0x41d5fc: 0xc0aeebc  jal         func_2BBAF0
label_41d600:
    if (ctx->pc == 0x41D600u) {
        ctx->pc = 0x41D600u;
            // 0x41d600: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D604u;
        goto label_41d604;
    }
    ctx->pc = 0x41D5FCu;
    SET_GPR_U32(ctx, 31, 0x41D604u);
    ctx->pc = 0x41D600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D5FCu;
            // 0x41d600: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D604u; }
        if (ctx->pc != 0x41D604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D604u; }
        if (ctx->pc != 0x41D604u) { return; }
    }
    ctx->pc = 0x41D604u;
label_41d604:
    // 0x41d604: 0xc0aeeb4  jal         func_2BBAD0
label_41d608:
    if (ctx->pc == 0x41D608u) {
        ctx->pc = 0x41D608u;
            // 0x41d608: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x41D60Cu;
        goto label_41d60c;
    }
    ctx->pc = 0x41D604u;
    SET_GPR_U32(ctx, 31, 0x41D60Cu);
    ctx->pc = 0x41D608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D604u;
            // 0x41d608: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D60Cu; }
        if (ctx->pc != 0x41D60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D60Cu; }
        if (ctx->pc != 0x41D60Cu) { return; }
    }
    ctx->pc = 0x41D60Cu;
label_41d60c:
    // 0x41d60c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41d60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_41d610:
    // 0x41d610: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41d610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41d614:
    // 0x41d614: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x41d614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_41d618:
    // 0x41d618: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x41d618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_41d61c:
    // 0x41d61c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41d620:
    // 0x41d620: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x41d620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_41d624:
    // 0x41d624: 0xc0aeea4  jal         func_2BBA90
label_41d628:
    if (ctx->pc == 0x41D628u) {
        ctx->pc = 0x41D628u;
            // 0x41d628: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x41D62Cu;
        goto label_41d62c;
    }
    ctx->pc = 0x41D624u;
    SET_GPR_U32(ctx, 31, 0x41D62Cu);
    ctx->pc = 0x41D628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D624u;
            // 0x41d628: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D62Cu; }
        if (ctx->pc != 0x41D62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D62Cu; }
        if (ctx->pc != 0x41D62Cu) { return; }
    }
    ctx->pc = 0x41D62Cu;
label_41d62c:
    // 0x41d62c: 0xc0aee8c  jal         func_2BBA30
label_41d630:
    if (ctx->pc == 0x41D630u) {
        ctx->pc = 0x41D630u;
            // 0x41d630: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x41D634u;
        goto label_41d634;
    }
    ctx->pc = 0x41D62Cu;
    SET_GPR_U32(ctx, 31, 0x41D634u);
    ctx->pc = 0x41D630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D62Cu;
            // 0x41d630: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D634u; }
        if (ctx->pc != 0x41D634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D634u; }
        if (ctx->pc != 0x41D634u) { return; }
    }
    ctx->pc = 0x41D634u;
label_41d634:
    // 0x41d634: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x41d634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_41d638:
    // 0x41d638: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x41d638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_41d63c:
    // 0x41d63c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x41d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_41d640:
    // 0x41d640: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x41d640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_41d644:
    // 0x41d644: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x41d644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_41d648:
    // 0x41d648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41d648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41d64c:
    // 0x41d64c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x41d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_41d650:
    // 0x41d650: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x41d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_41d654:
    // 0x41d654: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x41d654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_41d658:
    // 0x41d658: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x41d658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_41d65c:
    // 0x41d65c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x41d65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_41d660:
    // 0x41d660: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x41d660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_41d664:
    // 0x41d664: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x41d664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_41d668:
    // 0x41d668: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x41d668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_41d66c:
    // 0x41d66c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x41d66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_41d670:
    // 0x41d670: 0xc0775b8  jal         func_1DD6E0
label_41d674:
    if (ctx->pc == 0x41D674u) {
        ctx->pc = 0x41D674u;
            // 0x41d674: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x41D678u;
        goto label_41d678;
    }
    ctx->pc = 0x41D670u;
    SET_GPR_U32(ctx, 31, 0x41D678u);
    ctx->pc = 0x41D674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D670u;
            // 0x41d674: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D678u; }
        if (ctx->pc != 0x41D678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D678u; }
        if (ctx->pc != 0x41D678u) { return; }
    }
    ctx->pc = 0x41D678u;
label_41d678:
    // 0x41d678: 0xc077314  jal         func_1DCC50
label_41d67c:
    if (ctx->pc == 0x41D67Cu) {
        ctx->pc = 0x41D67Cu;
            // 0x41d67c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x41D680u;
        goto label_41d680;
    }
    ctx->pc = 0x41D678u;
    SET_GPR_U32(ctx, 31, 0x41D680u);
    ctx->pc = 0x41D67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D678u;
            // 0x41d67c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D680u; }
        if (ctx->pc != 0x41D680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D680u; }
        if (ctx->pc != 0x41D680u) { return; }
    }
    ctx->pc = 0x41D680u;
label_41d680:
    // 0x41d680: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x41d680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_41d684:
    // 0x41d684: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x41d684u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_41d688:
    // 0x41d688: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x41d688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_41d68c:
    // 0x41d68c: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x41d68cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
label_41d690:
    // 0x41d690: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x41d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41d694:
    // 0x41d694: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x41d694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_41d698:
    // 0x41d698: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x41d698u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_41d69c:
    // 0x41d69c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x41d69cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_41d6a0:
    // 0x41d6a0: 0x8e0400c8  lw          $a0, 0xC8($s0)
    ctx->pc = 0x41d6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_41d6a4:
    // 0x41d6a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_41d6a8:
    // 0x41d6a8: 0x2508b8f0  addiu       $t0, $t0, -0x4710
    ctx->pc = 0x41d6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949104));
label_41d6ac:
    // 0x41d6ac: 0x24e7b930  addiu       $a3, $a3, -0x46D0
    ctx->pc = 0x41d6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949168));
label_41d6b0:
    // 0x41d6b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41d6b4:
    // 0x41d6b4: 0x24c6cfe0  addiu       $a2, $a2, -0x3020
    ctx->pc = 0x41d6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954976));
label_41d6b8:
    // 0x41d6b8: 0x894818  mult        $t1, $a0, $t1
    ctx->pc = 0x41d6b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_41d6bc:
    // 0x41d6bc: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x41d6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
label_41d6c0:
    // 0x41d6c0: 0x24632460  addiu       $v1, $v1, 0x2460
    ctx->pc = 0x41d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9312));
label_41d6c4:
    // 0x41d6c4: 0x2442b800  addiu       $v0, $v0, -0x4800
    ctx->pc = 0x41d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948864));
label_41d6c8:
    // 0x41d6c8: 0xae0900c8  sw          $t1, 0xC8($s0)
    ctx->pc = 0x41d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 9));
label_41d6cc:
    // 0x41d6cc: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x41d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_41d6d0:
    // 0x41d6d0: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x41d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_41d6d4:
    // 0x41d6d4: 0xae0600d8  sw          $a2, 0xD8($s0)
    ctx->pc = 0x41d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 6));
label_41d6d8:
    // 0x41d6d8: 0xae0500d8  sw          $a1, 0xD8($s0)
    ctx->pc = 0x41d6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 5));
label_41d6dc:
    // 0x41d6dc: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x41d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_41d6e0:
    // 0x41d6e0: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x41d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_41d6e4:
    // 0x41d6e4: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x41d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_41d6e8:
    // 0x41d6e8: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x41d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_41d6ec:
    // 0x41d6ec: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x41d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_41d6f0:
    // 0x41d6f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x41d6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41d6f4:
    // 0x41d6f4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x41d6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_41d6f8:
    // 0x41d6f8: 0x320f809  jalr        $t9
label_41d6fc:
    if (ctx->pc == 0x41D6FCu) {
        ctx->pc = 0x41D6FCu;
            // 0x41d6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D700u;
        goto label_41d700;
    }
    ctx->pc = 0x41D6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41D700u);
        ctx->pc = 0x41D6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D6F8u;
            // 0x41d6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41D700u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41D700u; }
            if (ctx->pc != 0x41D700u) { return; }
        }
        }
    }
    ctx->pc = 0x41D700u;
label_41d700:
    // 0x41d700: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41d700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d704:
    // 0x41d704: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41d704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41d708:
    // 0x41d708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41d708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41d70c:
    // 0x41d70c: 0x3e00008  jr          $ra
label_41d710:
    if (ctx->pc == 0x41D710u) {
        ctx->pc = 0x41D710u;
            // 0x41d710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41D714u;
        goto label_41d714;
    }
    ctx->pc = 0x41D70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D70Cu;
            // 0x41d710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41D714u;
label_41d714:
    // 0x41d714: 0x0  nop
    ctx->pc = 0x41d714u;
    // NOP
label_41d718:
    // 0x41d718: 0x0  nop
    ctx->pc = 0x41d718u;
    // NOP
label_41d71c:
    // 0x41d71c: 0x0  nop
    ctx->pc = 0x41d71cu;
    // NOP
label_41d720:
    // 0x41d720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41d720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41d724:
    // 0x41d724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41d724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41d728:
    // 0x41d728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41d728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41d72c:
    // 0x41d72c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41d72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41d730:
    // 0x41d730: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41d730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d734:
    // 0x41d734: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_41d738:
    if (ctx->pc == 0x41D738u) {
        ctx->pc = 0x41D738u;
            // 0x41d738: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D73Cu;
        goto label_41d73c;
    }
    ctx->pc = 0x41D734u;
    {
        const bool branch_taken_0x41d734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D734u;
            // 0x41d738: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d734) {
            ctx->pc = 0x41D798u;
            goto label_41d798;
        }
    }
    ctx->pc = 0x41D73Cu;
label_41d73c:
    // 0x41d73c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41d740:
    // 0x41d740: 0x2442b800  addiu       $v0, $v0, -0x4800
    ctx->pc = 0x41d740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948864));
label_41d744:
    // 0x41d744: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_41d748:
    if (ctx->pc == 0x41D748u) {
        ctx->pc = 0x41D748u;
            // 0x41d748: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x41D74Cu;
        goto label_41d74c;
    }
    ctx->pc = 0x41D744u;
    {
        const bool branch_taken_0x41d744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D744u;
            // 0x41d748: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d744) {
            ctx->pc = 0x41D780u;
            goto label_41d780;
        }
    }
    ctx->pc = 0x41D74Cu;
label_41d74c:
    // 0x41d74c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41d750:
    // 0x41d750: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x41d750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_41d754:
    // 0x41d754: 0xc0d37dc  jal         func_34DF70
label_41d758:
    if (ctx->pc == 0x41D758u) {
        ctx->pc = 0x41D758u;
            // 0x41d758: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x41D75Cu;
        goto label_41d75c;
    }
    ctx->pc = 0x41D754u;
    SET_GPR_U32(ctx, 31, 0x41D75Cu);
    ctx->pc = 0x41D758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D754u;
            // 0x41d758: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D75Cu; }
        if (ctx->pc != 0x41D75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D75Cu; }
        if (ctx->pc != 0x41D75Cu) { return; }
    }
    ctx->pc = 0x41D75Cu;
label_41d75c:
    // 0x41d75c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_41d760:
    if (ctx->pc == 0x41D760u) {
        ctx->pc = 0x41D760u;
            // 0x41d760: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x41D764u;
        goto label_41d764;
    }
    ctx->pc = 0x41D75Cu;
    {
        const bool branch_taken_0x41d75c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d75c) {
            ctx->pc = 0x41D760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41D75Cu;
            // 0x41d760: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41D784u;
            goto label_41d784;
        }
    }
    ctx->pc = 0x41D764u;
label_41d764:
    // 0x41d764: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41d764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41d768:
    // 0x41d768: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x41d768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_41d76c:
    // 0x41d76c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_41d770:
    if (ctx->pc == 0x41D770u) {
        ctx->pc = 0x41D770u;
            // 0x41d770: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x41D774u;
        goto label_41d774;
    }
    ctx->pc = 0x41D76Cu;
    {
        const bool branch_taken_0x41d76c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D76Cu;
            // 0x41d770: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d76c) {
            ctx->pc = 0x41D780u;
            goto label_41d780;
        }
    }
    ctx->pc = 0x41D774u;
label_41d774:
    // 0x41d774: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41d774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41d778:
    // 0x41d778: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x41d778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_41d77c:
    // 0x41d77c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x41d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_41d780:
    // 0x41d780: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x41d780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_41d784:
    // 0x41d784: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41d784u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41d788:
    // 0x41d788: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_41d78c:
    if (ctx->pc == 0x41D78Cu) {
        ctx->pc = 0x41D78Cu;
            // 0x41d78c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D790u;
        goto label_41d790;
    }
    ctx->pc = 0x41D788u;
    {
        const bool branch_taken_0x41d788 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41d788) {
            ctx->pc = 0x41D78Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41D788u;
            // 0x41d78c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41D79Cu;
            goto label_41d79c;
        }
    }
    ctx->pc = 0x41D790u;
label_41d790:
    // 0x41d790: 0xc0400a8  jal         func_1002A0
label_41d794:
    if (ctx->pc == 0x41D794u) {
        ctx->pc = 0x41D794u;
            // 0x41d794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D798u;
        goto label_41d798;
    }
    ctx->pc = 0x41D790u;
    SET_GPR_U32(ctx, 31, 0x41D798u);
    ctx->pc = 0x41D794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D790u;
            // 0x41d794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D798u; }
        if (ctx->pc != 0x41D798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D798u; }
        if (ctx->pc != 0x41D798u) { return; }
    }
    ctx->pc = 0x41D798u;
label_41d798:
    // 0x41d798: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41d798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d79c:
    // 0x41d79c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41d79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41d7a0:
    // 0x41d7a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41d7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d7a4:
    // 0x41d7a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41d7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41d7a8:
    // 0x41d7a8: 0x3e00008  jr          $ra
label_41d7ac:
    if (ctx->pc == 0x41D7ACu) {
        ctx->pc = 0x41D7ACu;
            // 0x41d7ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41D7B0u;
        goto label_fallthrough_0x41d7a8;
    }
    ctx->pc = 0x41D7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D7A8u;
            // 0x41d7ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x41d7a8:
    ctx->pc = 0x41D7B0u;
}
