#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042CEF0
// Address: 0x42cef0 - 0x42dc30
void sub_0042CEF0_0x42cef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042CEF0_0x42cef0");
#endif

    switch (ctx->pc) {
        case 0x42cef0u: goto label_42cef0;
        case 0x42cef4u: goto label_42cef4;
        case 0x42cef8u: goto label_42cef8;
        case 0x42cefcu: goto label_42cefc;
        case 0x42cf00u: goto label_42cf00;
        case 0x42cf04u: goto label_42cf04;
        case 0x42cf08u: goto label_42cf08;
        case 0x42cf0cu: goto label_42cf0c;
        case 0x42cf10u: goto label_42cf10;
        case 0x42cf14u: goto label_42cf14;
        case 0x42cf18u: goto label_42cf18;
        case 0x42cf1cu: goto label_42cf1c;
        case 0x42cf20u: goto label_42cf20;
        case 0x42cf24u: goto label_42cf24;
        case 0x42cf28u: goto label_42cf28;
        case 0x42cf2cu: goto label_42cf2c;
        case 0x42cf30u: goto label_42cf30;
        case 0x42cf34u: goto label_42cf34;
        case 0x42cf38u: goto label_42cf38;
        case 0x42cf3cu: goto label_42cf3c;
        case 0x42cf40u: goto label_42cf40;
        case 0x42cf44u: goto label_42cf44;
        case 0x42cf48u: goto label_42cf48;
        case 0x42cf4cu: goto label_42cf4c;
        case 0x42cf50u: goto label_42cf50;
        case 0x42cf54u: goto label_42cf54;
        case 0x42cf58u: goto label_42cf58;
        case 0x42cf5cu: goto label_42cf5c;
        case 0x42cf60u: goto label_42cf60;
        case 0x42cf64u: goto label_42cf64;
        case 0x42cf68u: goto label_42cf68;
        case 0x42cf6cu: goto label_42cf6c;
        case 0x42cf70u: goto label_42cf70;
        case 0x42cf74u: goto label_42cf74;
        case 0x42cf78u: goto label_42cf78;
        case 0x42cf7cu: goto label_42cf7c;
        case 0x42cf80u: goto label_42cf80;
        case 0x42cf84u: goto label_42cf84;
        case 0x42cf88u: goto label_42cf88;
        case 0x42cf8cu: goto label_42cf8c;
        case 0x42cf90u: goto label_42cf90;
        case 0x42cf94u: goto label_42cf94;
        case 0x42cf98u: goto label_42cf98;
        case 0x42cf9cu: goto label_42cf9c;
        case 0x42cfa0u: goto label_42cfa0;
        case 0x42cfa4u: goto label_42cfa4;
        case 0x42cfa8u: goto label_42cfa8;
        case 0x42cfacu: goto label_42cfac;
        case 0x42cfb0u: goto label_42cfb0;
        case 0x42cfb4u: goto label_42cfb4;
        case 0x42cfb8u: goto label_42cfb8;
        case 0x42cfbcu: goto label_42cfbc;
        case 0x42cfc0u: goto label_42cfc0;
        case 0x42cfc4u: goto label_42cfc4;
        case 0x42cfc8u: goto label_42cfc8;
        case 0x42cfccu: goto label_42cfcc;
        case 0x42cfd0u: goto label_42cfd0;
        case 0x42cfd4u: goto label_42cfd4;
        case 0x42cfd8u: goto label_42cfd8;
        case 0x42cfdcu: goto label_42cfdc;
        case 0x42cfe0u: goto label_42cfe0;
        case 0x42cfe4u: goto label_42cfe4;
        case 0x42cfe8u: goto label_42cfe8;
        case 0x42cfecu: goto label_42cfec;
        case 0x42cff0u: goto label_42cff0;
        case 0x42cff4u: goto label_42cff4;
        case 0x42cff8u: goto label_42cff8;
        case 0x42cffcu: goto label_42cffc;
        case 0x42d000u: goto label_42d000;
        case 0x42d004u: goto label_42d004;
        case 0x42d008u: goto label_42d008;
        case 0x42d00cu: goto label_42d00c;
        case 0x42d010u: goto label_42d010;
        case 0x42d014u: goto label_42d014;
        case 0x42d018u: goto label_42d018;
        case 0x42d01cu: goto label_42d01c;
        case 0x42d020u: goto label_42d020;
        case 0x42d024u: goto label_42d024;
        case 0x42d028u: goto label_42d028;
        case 0x42d02cu: goto label_42d02c;
        case 0x42d030u: goto label_42d030;
        case 0x42d034u: goto label_42d034;
        case 0x42d038u: goto label_42d038;
        case 0x42d03cu: goto label_42d03c;
        case 0x42d040u: goto label_42d040;
        case 0x42d044u: goto label_42d044;
        case 0x42d048u: goto label_42d048;
        case 0x42d04cu: goto label_42d04c;
        case 0x42d050u: goto label_42d050;
        case 0x42d054u: goto label_42d054;
        case 0x42d058u: goto label_42d058;
        case 0x42d05cu: goto label_42d05c;
        case 0x42d060u: goto label_42d060;
        case 0x42d064u: goto label_42d064;
        case 0x42d068u: goto label_42d068;
        case 0x42d06cu: goto label_42d06c;
        case 0x42d070u: goto label_42d070;
        case 0x42d074u: goto label_42d074;
        case 0x42d078u: goto label_42d078;
        case 0x42d07cu: goto label_42d07c;
        case 0x42d080u: goto label_42d080;
        case 0x42d084u: goto label_42d084;
        case 0x42d088u: goto label_42d088;
        case 0x42d08cu: goto label_42d08c;
        case 0x42d090u: goto label_42d090;
        case 0x42d094u: goto label_42d094;
        case 0x42d098u: goto label_42d098;
        case 0x42d09cu: goto label_42d09c;
        case 0x42d0a0u: goto label_42d0a0;
        case 0x42d0a4u: goto label_42d0a4;
        case 0x42d0a8u: goto label_42d0a8;
        case 0x42d0acu: goto label_42d0ac;
        case 0x42d0b0u: goto label_42d0b0;
        case 0x42d0b4u: goto label_42d0b4;
        case 0x42d0b8u: goto label_42d0b8;
        case 0x42d0bcu: goto label_42d0bc;
        case 0x42d0c0u: goto label_42d0c0;
        case 0x42d0c4u: goto label_42d0c4;
        case 0x42d0c8u: goto label_42d0c8;
        case 0x42d0ccu: goto label_42d0cc;
        case 0x42d0d0u: goto label_42d0d0;
        case 0x42d0d4u: goto label_42d0d4;
        case 0x42d0d8u: goto label_42d0d8;
        case 0x42d0dcu: goto label_42d0dc;
        case 0x42d0e0u: goto label_42d0e0;
        case 0x42d0e4u: goto label_42d0e4;
        case 0x42d0e8u: goto label_42d0e8;
        case 0x42d0ecu: goto label_42d0ec;
        case 0x42d0f0u: goto label_42d0f0;
        case 0x42d0f4u: goto label_42d0f4;
        case 0x42d0f8u: goto label_42d0f8;
        case 0x42d0fcu: goto label_42d0fc;
        case 0x42d100u: goto label_42d100;
        case 0x42d104u: goto label_42d104;
        case 0x42d108u: goto label_42d108;
        case 0x42d10cu: goto label_42d10c;
        case 0x42d110u: goto label_42d110;
        case 0x42d114u: goto label_42d114;
        case 0x42d118u: goto label_42d118;
        case 0x42d11cu: goto label_42d11c;
        case 0x42d120u: goto label_42d120;
        case 0x42d124u: goto label_42d124;
        case 0x42d128u: goto label_42d128;
        case 0x42d12cu: goto label_42d12c;
        case 0x42d130u: goto label_42d130;
        case 0x42d134u: goto label_42d134;
        case 0x42d138u: goto label_42d138;
        case 0x42d13cu: goto label_42d13c;
        case 0x42d140u: goto label_42d140;
        case 0x42d144u: goto label_42d144;
        case 0x42d148u: goto label_42d148;
        case 0x42d14cu: goto label_42d14c;
        case 0x42d150u: goto label_42d150;
        case 0x42d154u: goto label_42d154;
        case 0x42d158u: goto label_42d158;
        case 0x42d15cu: goto label_42d15c;
        case 0x42d160u: goto label_42d160;
        case 0x42d164u: goto label_42d164;
        case 0x42d168u: goto label_42d168;
        case 0x42d16cu: goto label_42d16c;
        case 0x42d170u: goto label_42d170;
        case 0x42d174u: goto label_42d174;
        case 0x42d178u: goto label_42d178;
        case 0x42d17cu: goto label_42d17c;
        case 0x42d180u: goto label_42d180;
        case 0x42d184u: goto label_42d184;
        case 0x42d188u: goto label_42d188;
        case 0x42d18cu: goto label_42d18c;
        case 0x42d190u: goto label_42d190;
        case 0x42d194u: goto label_42d194;
        case 0x42d198u: goto label_42d198;
        case 0x42d19cu: goto label_42d19c;
        case 0x42d1a0u: goto label_42d1a0;
        case 0x42d1a4u: goto label_42d1a4;
        case 0x42d1a8u: goto label_42d1a8;
        case 0x42d1acu: goto label_42d1ac;
        case 0x42d1b0u: goto label_42d1b0;
        case 0x42d1b4u: goto label_42d1b4;
        case 0x42d1b8u: goto label_42d1b8;
        case 0x42d1bcu: goto label_42d1bc;
        case 0x42d1c0u: goto label_42d1c0;
        case 0x42d1c4u: goto label_42d1c4;
        case 0x42d1c8u: goto label_42d1c8;
        case 0x42d1ccu: goto label_42d1cc;
        case 0x42d1d0u: goto label_42d1d0;
        case 0x42d1d4u: goto label_42d1d4;
        case 0x42d1d8u: goto label_42d1d8;
        case 0x42d1dcu: goto label_42d1dc;
        case 0x42d1e0u: goto label_42d1e0;
        case 0x42d1e4u: goto label_42d1e4;
        case 0x42d1e8u: goto label_42d1e8;
        case 0x42d1ecu: goto label_42d1ec;
        case 0x42d1f0u: goto label_42d1f0;
        case 0x42d1f4u: goto label_42d1f4;
        case 0x42d1f8u: goto label_42d1f8;
        case 0x42d1fcu: goto label_42d1fc;
        case 0x42d200u: goto label_42d200;
        case 0x42d204u: goto label_42d204;
        case 0x42d208u: goto label_42d208;
        case 0x42d20cu: goto label_42d20c;
        case 0x42d210u: goto label_42d210;
        case 0x42d214u: goto label_42d214;
        case 0x42d218u: goto label_42d218;
        case 0x42d21cu: goto label_42d21c;
        case 0x42d220u: goto label_42d220;
        case 0x42d224u: goto label_42d224;
        case 0x42d228u: goto label_42d228;
        case 0x42d22cu: goto label_42d22c;
        case 0x42d230u: goto label_42d230;
        case 0x42d234u: goto label_42d234;
        case 0x42d238u: goto label_42d238;
        case 0x42d23cu: goto label_42d23c;
        case 0x42d240u: goto label_42d240;
        case 0x42d244u: goto label_42d244;
        case 0x42d248u: goto label_42d248;
        case 0x42d24cu: goto label_42d24c;
        case 0x42d250u: goto label_42d250;
        case 0x42d254u: goto label_42d254;
        case 0x42d258u: goto label_42d258;
        case 0x42d25cu: goto label_42d25c;
        case 0x42d260u: goto label_42d260;
        case 0x42d264u: goto label_42d264;
        case 0x42d268u: goto label_42d268;
        case 0x42d26cu: goto label_42d26c;
        case 0x42d270u: goto label_42d270;
        case 0x42d274u: goto label_42d274;
        case 0x42d278u: goto label_42d278;
        case 0x42d27cu: goto label_42d27c;
        case 0x42d280u: goto label_42d280;
        case 0x42d284u: goto label_42d284;
        case 0x42d288u: goto label_42d288;
        case 0x42d28cu: goto label_42d28c;
        case 0x42d290u: goto label_42d290;
        case 0x42d294u: goto label_42d294;
        case 0x42d298u: goto label_42d298;
        case 0x42d29cu: goto label_42d29c;
        case 0x42d2a0u: goto label_42d2a0;
        case 0x42d2a4u: goto label_42d2a4;
        case 0x42d2a8u: goto label_42d2a8;
        case 0x42d2acu: goto label_42d2ac;
        case 0x42d2b0u: goto label_42d2b0;
        case 0x42d2b4u: goto label_42d2b4;
        case 0x42d2b8u: goto label_42d2b8;
        case 0x42d2bcu: goto label_42d2bc;
        case 0x42d2c0u: goto label_42d2c0;
        case 0x42d2c4u: goto label_42d2c4;
        case 0x42d2c8u: goto label_42d2c8;
        case 0x42d2ccu: goto label_42d2cc;
        case 0x42d2d0u: goto label_42d2d0;
        case 0x42d2d4u: goto label_42d2d4;
        case 0x42d2d8u: goto label_42d2d8;
        case 0x42d2dcu: goto label_42d2dc;
        case 0x42d2e0u: goto label_42d2e0;
        case 0x42d2e4u: goto label_42d2e4;
        case 0x42d2e8u: goto label_42d2e8;
        case 0x42d2ecu: goto label_42d2ec;
        case 0x42d2f0u: goto label_42d2f0;
        case 0x42d2f4u: goto label_42d2f4;
        case 0x42d2f8u: goto label_42d2f8;
        case 0x42d2fcu: goto label_42d2fc;
        case 0x42d300u: goto label_42d300;
        case 0x42d304u: goto label_42d304;
        case 0x42d308u: goto label_42d308;
        case 0x42d30cu: goto label_42d30c;
        case 0x42d310u: goto label_42d310;
        case 0x42d314u: goto label_42d314;
        case 0x42d318u: goto label_42d318;
        case 0x42d31cu: goto label_42d31c;
        case 0x42d320u: goto label_42d320;
        case 0x42d324u: goto label_42d324;
        case 0x42d328u: goto label_42d328;
        case 0x42d32cu: goto label_42d32c;
        case 0x42d330u: goto label_42d330;
        case 0x42d334u: goto label_42d334;
        case 0x42d338u: goto label_42d338;
        case 0x42d33cu: goto label_42d33c;
        case 0x42d340u: goto label_42d340;
        case 0x42d344u: goto label_42d344;
        case 0x42d348u: goto label_42d348;
        case 0x42d34cu: goto label_42d34c;
        case 0x42d350u: goto label_42d350;
        case 0x42d354u: goto label_42d354;
        case 0x42d358u: goto label_42d358;
        case 0x42d35cu: goto label_42d35c;
        case 0x42d360u: goto label_42d360;
        case 0x42d364u: goto label_42d364;
        case 0x42d368u: goto label_42d368;
        case 0x42d36cu: goto label_42d36c;
        case 0x42d370u: goto label_42d370;
        case 0x42d374u: goto label_42d374;
        case 0x42d378u: goto label_42d378;
        case 0x42d37cu: goto label_42d37c;
        case 0x42d380u: goto label_42d380;
        case 0x42d384u: goto label_42d384;
        case 0x42d388u: goto label_42d388;
        case 0x42d38cu: goto label_42d38c;
        case 0x42d390u: goto label_42d390;
        case 0x42d394u: goto label_42d394;
        case 0x42d398u: goto label_42d398;
        case 0x42d39cu: goto label_42d39c;
        case 0x42d3a0u: goto label_42d3a0;
        case 0x42d3a4u: goto label_42d3a4;
        case 0x42d3a8u: goto label_42d3a8;
        case 0x42d3acu: goto label_42d3ac;
        case 0x42d3b0u: goto label_42d3b0;
        case 0x42d3b4u: goto label_42d3b4;
        case 0x42d3b8u: goto label_42d3b8;
        case 0x42d3bcu: goto label_42d3bc;
        case 0x42d3c0u: goto label_42d3c0;
        case 0x42d3c4u: goto label_42d3c4;
        case 0x42d3c8u: goto label_42d3c8;
        case 0x42d3ccu: goto label_42d3cc;
        case 0x42d3d0u: goto label_42d3d0;
        case 0x42d3d4u: goto label_42d3d4;
        case 0x42d3d8u: goto label_42d3d8;
        case 0x42d3dcu: goto label_42d3dc;
        case 0x42d3e0u: goto label_42d3e0;
        case 0x42d3e4u: goto label_42d3e4;
        case 0x42d3e8u: goto label_42d3e8;
        case 0x42d3ecu: goto label_42d3ec;
        case 0x42d3f0u: goto label_42d3f0;
        case 0x42d3f4u: goto label_42d3f4;
        case 0x42d3f8u: goto label_42d3f8;
        case 0x42d3fcu: goto label_42d3fc;
        case 0x42d400u: goto label_42d400;
        case 0x42d404u: goto label_42d404;
        case 0x42d408u: goto label_42d408;
        case 0x42d40cu: goto label_42d40c;
        case 0x42d410u: goto label_42d410;
        case 0x42d414u: goto label_42d414;
        case 0x42d418u: goto label_42d418;
        case 0x42d41cu: goto label_42d41c;
        case 0x42d420u: goto label_42d420;
        case 0x42d424u: goto label_42d424;
        case 0x42d428u: goto label_42d428;
        case 0x42d42cu: goto label_42d42c;
        case 0x42d430u: goto label_42d430;
        case 0x42d434u: goto label_42d434;
        case 0x42d438u: goto label_42d438;
        case 0x42d43cu: goto label_42d43c;
        case 0x42d440u: goto label_42d440;
        case 0x42d444u: goto label_42d444;
        case 0x42d448u: goto label_42d448;
        case 0x42d44cu: goto label_42d44c;
        case 0x42d450u: goto label_42d450;
        case 0x42d454u: goto label_42d454;
        case 0x42d458u: goto label_42d458;
        case 0x42d45cu: goto label_42d45c;
        case 0x42d460u: goto label_42d460;
        case 0x42d464u: goto label_42d464;
        case 0x42d468u: goto label_42d468;
        case 0x42d46cu: goto label_42d46c;
        case 0x42d470u: goto label_42d470;
        case 0x42d474u: goto label_42d474;
        case 0x42d478u: goto label_42d478;
        case 0x42d47cu: goto label_42d47c;
        case 0x42d480u: goto label_42d480;
        case 0x42d484u: goto label_42d484;
        case 0x42d488u: goto label_42d488;
        case 0x42d48cu: goto label_42d48c;
        case 0x42d490u: goto label_42d490;
        case 0x42d494u: goto label_42d494;
        case 0x42d498u: goto label_42d498;
        case 0x42d49cu: goto label_42d49c;
        case 0x42d4a0u: goto label_42d4a0;
        case 0x42d4a4u: goto label_42d4a4;
        case 0x42d4a8u: goto label_42d4a8;
        case 0x42d4acu: goto label_42d4ac;
        case 0x42d4b0u: goto label_42d4b0;
        case 0x42d4b4u: goto label_42d4b4;
        case 0x42d4b8u: goto label_42d4b8;
        case 0x42d4bcu: goto label_42d4bc;
        case 0x42d4c0u: goto label_42d4c0;
        case 0x42d4c4u: goto label_42d4c4;
        case 0x42d4c8u: goto label_42d4c8;
        case 0x42d4ccu: goto label_42d4cc;
        case 0x42d4d0u: goto label_42d4d0;
        case 0x42d4d4u: goto label_42d4d4;
        case 0x42d4d8u: goto label_42d4d8;
        case 0x42d4dcu: goto label_42d4dc;
        case 0x42d4e0u: goto label_42d4e0;
        case 0x42d4e4u: goto label_42d4e4;
        case 0x42d4e8u: goto label_42d4e8;
        case 0x42d4ecu: goto label_42d4ec;
        case 0x42d4f0u: goto label_42d4f0;
        case 0x42d4f4u: goto label_42d4f4;
        case 0x42d4f8u: goto label_42d4f8;
        case 0x42d4fcu: goto label_42d4fc;
        case 0x42d500u: goto label_42d500;
        case 0x42d504u: goto label_42d504;
        case 0x42d508u: goto label_42d508;
        case 0x42d50cu: goto label_42d50c;
        case 0x42d510u: goto label_42d510;
        case 0x42d514u: goto label_42d514;
        case 0x42d518u: goto label_42d518;
        case 0x42d51cu: goto label_42d51c;
        case 0x42d520u: goto label_42d520;
        case 0x42d524u: goto label_42d524;
        case 0x42d528u: goto label_42d528;
        case 0x42d52cu: goto label_42d52c;
        case 0x42d530u: goto label_42d530;
        case 0x42d534u: goto label_42d534;
        case 0x42d538u: goto label_42d538;
        case 0x42d53cu: goto label_42d53c;
        case 0x42d540u: goto label_42d540;
        case 0x42d544u: goto label_42d544;
        case 0x42d548u: goto label_42d548;
        case 0x42d54cu: goto label_42d54c;
        case 0x42d550u: goto label_42d550;
        case 0x42d554u: goto label_42d554;
        case 0x42d558u: goto label_42d558;
        case 0x42d55cu: goto label_42d55c;
        case 0x42d560u: goto label_42d560;
        case 0x42d564u: goto label_42d564;
        case 0x42d568u: goto label_42d568;
        case 0x42d56cu: goto label_42d56c;
        case 0x42d570u: goto label_42d570;
        case 0x42d574u: goto label_42d574;
        case 0x42d578u: goto label_42d578;
        case 0x42d57cu: goto label_42d57c;
        case 0x42d580u: goto label_42d580;
        case 0x42d584u: goto label_42d584;
        case 0x42d588u: goto label_42d588;
        case 0x42d58cu: goto label_42d58c;
        case 0x42d590u: goto label_42d590;
        case 0x42d594u: goto label_42d594;
        case 0x42d598u: goto label_42d598;
        case 0x42d59cu: goto label_42d59c;
        case 0x42d5a0u: goto label_42d5a0;
        case 0x42d5a4u: goto label_42d5a4;
        case 0x42d5a8u: goto label_42d5a8;
        case 0x42d5acu: goto label_42d5ac;
        case 0x42d5b0u: goto label_42d5b0;
        case 0x42d5b4u: goto label_42d5b4;
        case 0x42d5b8u: goto label_42d5b8;
        case 0x42d5bcu: goto label_42d5bc;
        case 0x42d5c0u: goto label_42d5c0;
        case 0x42d5c4u: goto label_42d5c4;
        case 0x42d5c8u: goto label_42d5c8;
        case 0x42d5ccu: goto label_42d5cc;
        case 0x42d5d0u: goto label_42d5d0;
        case 0x42d5d4u: goto label_42d5d4;
        case 0x42d5d8u: goto label_42d5d8;
        case 0x42d5dcu: goto label_42d5dc;
        case 0x42d5e0u: goto label_42d5e0;
        case 0x42d5e4u: goto label_42d5e4;
        case 0x42d5e8u: goto label_42d5e8;
        case 0x42d5ecu: goto label_42d5ec;
        case 0x42d5f0u: goto label_42d5f0;
        case 0x42d5f4u: goto label_42d5f4;
        case 0x42d5f8u: goto label_42d5f8;
        case 0x42d5fcu: goto label_42d5fc;
        case 0x42d600u: goto label_42d600;
        case 0x42d604u: goto label_42d604;
        case 0x42d608u: goto label_42d608;
        case 0x42d60cu: goto label_42d60c;
        case 0x42d610u: goto label_42d610;
        case 0x42d614u: goto label_42d614;
        case 0x42d618u: goto label_42d618;
        case 0x42d61cu: goto label_42d61c;
        case 0x42d620u: goto label_42d620;
        case 0x42d624u: goto label_42d624;
        case 0x42d628u: goto label_42d628;
        case 0x42d62cu: goto label_42d62c;
        case 0x42d630u: goto label_42d630;
        case 0x42d634u: goto label_42d634;
        case 0x42d638u: goto label_42d638;
        case 0x42d63cu: goto label_42d63c;
        case 0x42d640u: goto label_42d640;
        case 0x42d644u: goto label_42d644;
        case 0x42d648u: goto label_42d648;
        case 0x42d64cu: goto label_42d64c;
        case 0x42d650u: goto label_42d650;
        case 0x42d654u: goto label_42d654;
        case 0x42d658u: goto label_42d658;
        case 0x42d65cu: goto label_42d65c;
        case 0x42d660u: goto label_42d660;
        case 0x42d664u: goto label_42d664;
        case 0x42d668u: goto label_42d668;
        case 0x42d66cu: goto label_42d66c;
        case 0x42d670u: goto label_42d670;
        case 0x42d674u: goto label_42d674;
        case 0x42d678u: goto label_42d678;
        case 0x42d67cu: goto label_42d67c;
        case 0x42d680u: goto label_42d680;
        case 0x42d684u: goto label_42d684;
        case 0x42d688u: goto label_42d688;
        case 0x42d68cu: goto label_42d68c;
        case 0x42d690u: goto label_42d690;
        case 0x42d694u: goto label_42d694;
        case 0x42d698u: goto label_42d698;
        case 0x42d69cu: goto label_42d69c;
        case 0x42d6a0u: goto label_42d6a0;
        case 0x42d6a4u: goto label_42d6a4;
        case 0x42d6a8u: goto label_42d6a8;
        case 0x42d6acu: goto label_42d6ac;
        case 0x42d6b0u: goto label_42d6b0;
        case 0x42d6b4u: goto label_42d6b4;
        case 0x42d6b8u: goto label_42d6b8;
        case 0x42d6bcu: goto label_42d6bc;
        case 0x42d6c0u: goto label_42d6c0;
        case 0x42d6c4u: goto label_42d6c4;
        case 0x42d6c8u: goto label_42d6c8;
        case 0x42d6ccu: goto label_42d6cc;
        case 0x42d6d0u: goto label_42d6d0;
        case 0x42d6d4u: goto label_42d6d4;
        case 0x42d6d8u: goto label_42d6d8;
        case 0x42d6dcu: goto label_42d6dc;
        case 0x42d6e0u: goto label_42d6e0;
        case 0x42d6e4u: goto label_42d6e4;
        case 0x42d6e8u: goto label_42d6e8;
        case 0x42d6ecu: goto label_42d6ec;
        case 0x42d6f0u: goto label_42d6f0;
        case 0x42d6f4u: goto label_42d6f4;
        case 0x42d6f8u: goto label_42d6f8;
        case 0x42d6fcu: goto label_42d6fc;
        case 0x42d700u: goto label_42d700;
        case 0x42d704u: goto label_42d704;
        case 0x42d708u: goto label_42d708;
        case 0x42d70cu: goto label_42d70c;
        case 0x42d710u: goto label_42d710;
        case 0x42d714u: goto label_42d714;
        case 0x42d718u: goto label_42d718;
        case 0x42d71cu: goto label_42d71c;
        case 0x42d720u: goto label_42d720;
        case 0x42d724u: goto label_42d724;
        case 0x42d728u: goto label_42d728;
        case 0x42d72cu: goto label_42d72c;
        case 0x42d730u: goto label_42d730;
        case 0x42d734u: goto label_42d734;
        case 0x42d738u: goto label_42d738;
        case 0x42d73cu: goto label_42d73c;
        case 0x42d740u: goto label_42d740;
        case 0x42d744u: goto label_42d744;
        case 0x42d748u: goto label_42d748;
        case 0x42d74cu: goto label_42d74c;
        case 0x42d750u: goto label_42d750;
        case 0x42d754u: goto label_42d754;
        case 0x42d758u: goto label_42d758;
        case 0x42d75cu: goto label_42d75c;
        case 0x42d760u: goto label_42d760;
        case 0x42d764u: goto label_42d764;
        case 0x42d768u: goto label_42d768;
        case 0x42d76cu: goto label_42d76c;
        case 0x42d770u: goto label_42d770;
        case 0x42d774u: goto label_42d774;
        case 0x42d778u: goto label_42d778;
        case 0x42d77cu: goto label_42d77c;
        case 0x42d780u: goto label_42d780;
        case 0x42d784u: goto label_42d784;
        case 0x42d788u: goto label_42d788;
        case 0x42d78cu: goto label_42d78c;
        case 0x42d790u: goto label_42d790;
        case 0x42d794u: goto label_42d794;
        case 0x42d798u: goto label_42d798;
        case 0x42d79cu: goto label_42d79c;
        case 0x42d7a0u: goto label_42d7a0;
        case 0x42d7a4u: goto label_42d7a4;
        case 0x42d7a8u: goto label_42d7a8;
        case 0x42d7acu: goto label_42d7ac;
        case 0x42d7b0u: goto label_42d7b0;
        case 0x42d7b4u: goto label_42d7b4;
        case 0x42d7b8u: goto label_42d7b8;
        case 0x42d7bcu: goto label_42d7bc;
        case 0x42d7c0u: goto label_42d7c0;
        case 0x42d7c4u: goto label_42d7c4;
        case 0x42d7c8u: goto label_42d7c8;
        case 0x42d7ccu: goto label_42d7cc;
        case 0x42d7d0u: goto label_42d7d0;
        case 0x42d7d4u: goto label_42d7d4;
        case 0x42d7d8u: goto label_42d7d8;
        case 0x42d7dcu: goto label_42d7dc;
        case 0x42d7e0u: goto label_42d7e0;
        case 0x42d7e4u: goto label_42d7e4;
        case 0x42d7e8u: goto label_42d7e8;
        case 0x42d7ecu: goto label_42d7ec;
        case 0x42d7f0u: goto label_42d7f0;
        case 0x42d7f4u: goto label_42d7f4;
        case 0x42d7f8u: goto label_42d7f8;
        case 0x42d7fcu: goto label_42d7fc;
        case 0x42d800u: goto label_42d800;
        case 0x42d804u: goto label_42d804;
        case 0x42d808u: goto label_42d808;
        case 0x42d80cu: goto label_42d80c;
        case 0x42d810u: goto label_42d810;
        case 0x42d814u: goto label_42d814;
        case 0x42d818u: goto label_42d818;
        case 0x42d81cu: goto label_42d81c;
        case 0x42d820u: goto label_42d820;
        case 0x42d824u: goto label_42d824;
        case 0x42d828u: goto label_42d828;
        case 0x42d82cu: goto label_42d82c;
        case 0x42d830u: goto label_42d830;
        case 0x42d834u: goto label_42d834;
        case 0x42d838u: goto label_42d838;
        case 0x42d83cu: goto label_42d83c;
        case 0x42d840u: goto label_42d840;
        case 0x42d844u: goto label_42d844;
        case 0x42d848u: goto label_42d848;
        case 0x42d84cu: goto label_42d84c;
        case 0x42d850u: goto label_42d850;
        case 0x42d854u: goto label_42d854;
        case 0x42d858u: goto label_42d858;
        case 0x42d85cu: goto label_42d85c;
        case 0x42d860u: goto label_42d860;
        case 0x42d864u: goto label_42d864;
        case 0x42d868u: goto label_42d868;
        case 0x42d86cu: goto label_42d86c;
        case 0x42d870u: goto label_42d870;
        case 0x42d874u: goto label_42d874;
        case 0x42d878u: goto label_42d878;
        case 0x42d87cu: goto label_42d87c;
        case 0x42d880u: goto label_42d880;
        case 0x42d884u: goto label_42d884;
        case 0x42d888u: goto label_42d888;
        case 0x42d88cu: goto label_42d88c;
        case 0x42d890u: goto label_42d890;
        case 0x42d894u: goto label_42d894;
        case 0x42d898u: goto label_42d898;
        case 0x42d89cu: goto label_42d89c;
        case 0x42d8a0u: goto label_42d8a0;
        case 0x42d8a4u: goto label_42d8a4;
        case 0x42d8a8u: goto label_42d8a8;
        case 0x42d8acu: goto label_42d8ac;
        case 0x42d8b0u: goto label_42d8b0;
        case 0x42d8b4u: goto label_42d8b4;
        case 0x42d8b8u: goto label_42d8b8;
        case 0x42d8bcu: goto label_42d8bc;
        case 0x42d8c0u: goto label_42d8c0;
        case 0x42d8c4u: goto label_42d8c4;
        case 0x42d8c8u: goto label_42d8c8;
        case 0x42d8ccu: goto label_42d8cc;
        case 0x42d8d0u: goto label_42d8d0;
        case 0x42d8d4u: goto label_42d8d4;
        case 0x42d8d8u: goto label_42d8d8;
        case 0x42d8dcu: goto label_42d8dc;
        case 0x42d8e0u: goto label_42d8e0;
        case 0x42d8e4u: goto label_42d8e4;
        case 0x42d8e8u: goto label_42d8e8;
        case 0x42d8ecu: goto label_42d8ec;
        case 0x42d8f0u: goto label_42d8f0;
        case 0x42d8f4u: goto label_42d8f4;
        case 0x42d8f8u: goto label_42d8f8;
        case 0x42d8fcu: goto label_42d8fc;
        case 0x42d900u: goto label_42d900;
        case 0x42d904u: goto label_42d904;
        case 0x42d908u: goto label_42d908;
        case 0x42d90cu: goto label_42d90c;
        case 0x42d910u: goto label_42d910;
        case 0x42d914u: goto label_42d914;
        case 0x42d918u: goto label_42d918;
        case 0x42d91cu: goto label_42d91c;
        case 0x42d920u: goto label_42d920;
        case 0x42d924u: goto label_42d924;
        case 0x42d928u: goto label_42d928;
        case 0x42d92cu: goto label_42d92c;
        case 0x42d930u: goto label_42d930;
        case 0x42d934u: goto label_42d934;
        case 0x42d938u: goto label_42d938;
        case 0x42d93cu: goto label_42d93c;
        case 0x42d940u: goto label_42d940;
        case 0x42d944u: goto label_42d944;
        case 0x42d948u: goto label_42d948;
        case 0x42d94cu: goto label_42d94c;
        case 0x42d950u: goto label_42d950;
        case 0x42d954u: goto label_42d954;
        case 0x42d958u: goto label_42d958;
        case 0x42d95cu: goto label_42d95c;
        case 0x42d960u: goto label_42d960;
        case 0x42d964u: goto label_42d964;
        case 0x42d968u: goto label_42d968;
        case 0x42d96cu: goto label_42d96c;
        case 0x42d970u: goto label_42d970;
        case 0x42d974u: goto label_42d974;
        case 0x42d978u: goto label_42d978;
        case 0x42d97cu: goto label_42d97c;
        case 0x42d980u: goto label_42d980;
        case 0x42d984u: goto label_42d984;
        case 0x42d988u: goto label_42d988;
        case 0x42d98cu: goto label_42d98c;
        case 0x42d990u: goto label_42d990;
        case 0x42d994u: goto label_42d994;
        case 0x42d998u: goto label_42d998;
        case 0x42d99cu: goto label_42d99c;
        case 0x42d9a0u: goto label_42d9a0;
        case 0x42d9a4u: goto label_42d9a4;
        case 0x42d9a8u: goto label_42d9a8;
        case 0x42d9acu: goto label_42d9ac;
        case 0x42d9b0u: goto label_42d9b0;
        case 0x42d9b4u: goto label_42d9b4;
        case 0x42d9b8u: goto label_42d9b8;
        case 0x42d9bcu: goto label_42d9bc;
        case 0x42d9c0u: goto label_42d9c0;
        case 0x42d9c4u: goto label_42d9c4;
        case 0x42d9c8u: goto label_42d9c8;
        case 0x42d9ccu: goto label_42d9cc;
        case 0x42d9d0u: goto label_42d9d0;
        case 0x42d9d4u: goto label_42d9d4;
        case 0x42d9d8u: goto label_42d9d8;
        case 0x42d9dcu: goto label_42d9dc;
        case 0x42d9e0u: goto label_42d9e0;
        case 0x42d9e4u: goto label_42d9e4;
        case 0x42d9e8u: goto label_42d9e8;
        case 0x42d9ecu: goto label_42d9ec;
        case 0x42d9f0u: goto label_42d9f0;
        case 0x42d9f4u: goto label_42d9f4;
        case 0x42d9f8u: goto label_42d9f8;
        case 0x42d9fcu: goto label_42d9fc;
        case 0x42da00u: goto label_42da00;
        case 0x42da04u: goto label_42da04;
        case 0x42da08u: goto label_42da08;
        case 0x42da0cu: goto label_42da0c;
        case 0x42da10u: goto label_42da10;
        case 0x42da14u: goto label_42da14;
        case 0x42da18u: goto label_42da18;
        case 0x42da1cu: goto label_42da1c;
        case 0x42da20u: goto label_42da20;
        case 0x42da24u: goto label_42da24;
        case 0x42da28u: goto label_42da28;
        case 0x42da2cu: goto label_42da2c;
        case 0x42da30u: goto label_42da30;
        case 0x42da34u: goto label_42da34;
        case 0x42da38u: goto label_42da38;
        case 0x42da3cu: goto label_42da3c;
        case 0x42da40u: goto label_42da40;
        case 0x42da44u: goto label_42da44;
        case 0x42da48u: goto label_42da48;
        case 0x42da4cu: goto label_42da4c;
        case 0x42da50u: goto label_42da50;
        case 0x42da54u: goto label_42da54;
        case 0x42da58u: goto label_42da58;
        case 0x42da5cu: goto label_42da5c;
        case 0x42da60u: goto label_42da60;
        case 0x42da64u: goto label_42da64;
        case 0x42da68u: goto label_42da68;
        case 0x42da6cu: goto label_42da6c;
        case 0x42da70u: goto label_42da70;
        case 0x42da74u: goto label_42da74;
        case 0x42da78u: goto label_42da78;
        case 0x42da7cu: goto label_42da7c;
        case 0x42da80u: goto label_42da80;
        case 0x42da84u: goto label_42da84;
        case 0x42da88u: goto label_42da88;
        case 0x42da8cu: goto label_42da8c;
        case 0x42da90u: goto label_42da90;
        case 0x42da94u: goto label_42da94;
        case 0x42da98u: goto label_42da98;
        case 0x42da9cu: goto label_42da9c;
        case 0x42daa0u: goto label_42daa0;
        case 0x42daa4u: goto label_42daa4;
        case 0x42daa8u: goto label_42daa8;
        case 0x42daacu: goto label_42daac;
        case 0x42dab0u: goto label_42dab0;
        case 0x42dab4u: goto label_42dab4;
        case 0x42dab8u: goto label_42dab8;
        case 0x42dabcu: goto label_42dabc;
        case 0x42dac0u: goto label_42dac0;
        case 0x42dac4u: goto label_42dac4;
        case 0x42dac8u: goto label_42dac8;
        case 0x42daccu: goto label_42dacc;
        case 0x42dad0u: goto label_42dad0;
        case 0x42dad4u: goto label_42dad4;
        case 0x42dad8u: goto label_42dad8;
        case 0x42dadcu: goto label_42dadc;
        case 0x42dae0u: goto label_42dae0;
        case 0x42dae4u: goto label_42dae4;
        case 0x42dae8u: goto label_42dae8;
        case 0x42daecu: goto label_42daec;
        case 0x42daf0u: goto label_42daf0;
        case 0x42daf4u: goto label_42daf4;
        case 0x42daf8u: goto label_42daf8;
        case 0x42dafcu: goto label_42dafc;
        case 0x42db00u: goto label_42db00;
        case 0x42db04u: goto label_42db04;
        case 0x42db08u: goto label_42db08;
        case 0x42db0cu: goto label_42db0c;
        case 0x42db10u: goto label_42db10;
        case 0x42db14u: goto label_42db14;
        case 0x42db18u: goto label_42db18;
        case 0x42db1cu: goto label_42db1c;
        case 0x42db20u: goto label_42db20;
        case 0x42db24u: goto label_42db24;
        case 0x42db28u: goto label_42db28;
        case 0x42db2cu: goto label_42db2c;
        case 0x42db30u: goto label_42db30;
        case 0x42db34u: goto label_42db34;
        case 0x42db38u: goto label_42db38;
        case 0x42db3cu: goto label_42db3c;
        case 0x42db40u: goto label_42db40;
        case 0x42db44u: goto label_42db44;
        case 0x42db48u: goto label_42db48;
        case 0x42db4cu: goto label_42db4c;
        case 0x42db50u: goto label_42db50;
        case 0x42db54u: goto label_42db54;
        case 0x42db58u: goto label_42db58;
        case 0x42db5cu: goto label_42db5c;
        case 0x42db60u: goto label_42db60;
        case 0x42db64u: goto label_42db64;
        case 0x42db68u: goto label_42db68;
        case 0x42db6cu: goto label_42db6c;
        case 0x42db70u: goto label_42db70;
        case 0x42db74u: goto label_42db74;
        case 0x42db78u: goto label_42db78;
        case 0x42db7cu: goto label_42db7c;
        case 0x42db80u: goto label_42db80;
        case 0x42db84u: goto label_42db84;
        case 0x42db88u: goto label_42db88;
        case 0x42db8cu: goto label_42db8c;
        case 0x42db90u: goto label_42db90;
        case 0x42db94u: goto label_42db94;
        case 0x42db98u: goto label_42db98;
        case 0x42db9cu: goto label_42db9c;
        case 0x42dba0u: goto label_42dba0;
        case 0x42dba4u: goto label_42dba4;
        case 0x42dba8u: goto label_42dba8;
        case 0x42dbacu: goto label_42dbac;
        case 0x42dbb0u: goto label_42dbb0;
        case 0x42dbb4u: goto label_42dbb4;
        case 0x42dbb8u: goto label_42dbb8;
        case 0x42dbbcu: goto label_42dbbc;
        case 0x42dbc0u: goto label_42dbc0;
        case 0x42dbc4u: goto label_42dbc4;
        case 0x42dbc8u: goto label_42dbc8;
        case 0x42dbccu: goto label_42dbcc;
        case 0x42dbd0u: goto label_42dbd0;
        case 0x42dbd4u: goto label_42dbd4;
        case 0x42dbd8u: goto label_42dbd8;
        case 0x42dbdcu: goto label_42dbdc;
        case 0x42dbe0u: goto label_42dbe0;
        case 0x42dbe4u: goto label_42dbe4;
        case 0x42dbe8u: goto label_42dbe8;
        case 0x42dbecu: goto label_42dbec;
        case 0x42dbf0u: goto label_42dbf0;
        case 0x42dbf4u: goto label_42dbf4;
        case 0x42dbf8u: goto label_42dbf8;
        case 0x42dbfcu: goto label_42dbfc;
        case 0x42dc00u: goto label_42dc00;
        case 0x42dc04u: goto label_42dc04;
        case 0x42dc08u: goto label_42dc08;
        case 0x42dc0cu: goto label_42dc0c;
        case 0x42dc10u: goto label_42dc10;
        case 0x42dc14u: goto label_42dc14;
        case 0x42dc18u: goto label_42dc18;
        case 0x42dc1cu: goto label_42dc1c;
        case 0x42dc20u: goto label_42dc20;
        case 0x42dc24u: goto label_42dc24;
        case 0x42dc28u: goto label_42dc28;
        case 0x42dc2cu: goto label_42dc2c;
        default: break;
    }

    ctx->pc = 0x42cef0u;

label_42cef0:
    // 0x42cef0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x42cef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_42cef4:
    // 0x42cef4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x42cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_42cef8:
    // 0x42cef8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x42cef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_42cefc:
    // 0x42cefc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x42cefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_42cf00:
    // 0x42cf00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x42cf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_42cf04:
    // 0x42cf04: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x42cf04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_42cf08:
    // 0x42cf08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x42cf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_42cf0c:
    // 0x42cf0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x42cf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_42cf10:
    // 0x42cf10: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x42cf10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_42cf14:
    // 0x42cf14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42cf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42cf18:
    // 0x42cf18: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x42cf18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42cf1c:
    // 0x42cf1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42cf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42cf20:
    // 0x42cf20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x42cf20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42cf24:
    // 0x42cf24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42cf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42cf28:
    // 0x42cf28: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x42cf28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_42cf2c:
    // 0x42cf2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42cf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42cf30:
    // 0x42cf30: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x42cf30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_42cf34:
    // 0x42cf34: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x42cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_42cf38:
    // 0x42cf38: 0x8c8400d8  lw          $a0, 0xD8($a0)
    ctx->pc = 0x42cf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_42cf3c:
    // 0x42cf3c: 0x8c630cd0  lw          $v1, 0xCD0($v1)
    ctx->pc = 0x42cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3280)));
label_42cf40:
    // 0x42cf40: 0x14830093  bne         $a0, $v1, . + 4 + (0x93 << 2)
label_42cf44:
    if (ctx->pc == 0x42CF44u) {
        ctx->pc = 0x42CF44u;
            // 0x42cf44: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42CF48u;
        goto label_42cf48;
    }
    ctx->pc = 0x42CF40u;
    {
        const bool branch_taken_0x42cf40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x42CF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CF40u;
            // 0x42cf44: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cf40) {
            ctx->pc = 0x42D190u;
            goto label_42d190;
        }
    }
    ctx->pc = 0x42CF48u;
label_42cf48:
    // 0x42cf48: 0x92830090  lbu         $v1, 0x90($s4)
    ctx->pc = 0x42cf48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 144)));
label_42cf4c:
    // 0x42cf4c: 0x50600091  beql        $v1, $zero, . + 4 + (0x91 << 2)
label_42cf50:
    if (ctx->pc == 0x42CF50u) {
        ctx->pc = 0x42CF50u;
            // 0x42cf50: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x42CF54u;
        goto label_42cf54;
    }
    ctx->pc = 0x42CF4Cu;
    {
        const bool branch_taken_0x42cf4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42cf4c) {
            ctx->pc = 0x42CF50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42CF4Cu;
            // 0x42cf50: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42D194u;
            goto label_42d194;
        }
    }
    ctx->pc = 0x42CF54u;
label_42cf54:
    // 0x42cf54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42cf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42cf58:
    // 0x42cf58: 0xc04f278  jal         func_13C9E0
label_42cf5c:
    if (ctx->pc == 0x42CF5Cu) {
        ctx->pc = 0x42CF5Cu;
            // 0x42cf5c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x42CF60u;
        goto label_42cf60;
    }
    ctx->pc = 0x42CF58u;
    SET_GPR_U32(ctx, 31, 0x42CF60u);
    ctx->pc = 0x42CF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CF58u;
            // 0x42cf5c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CF60u; }
        if (ctx->pc != 0x42CF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CF60u; }
        if (ctx->pc != 0x42CF60u) { return; }
    }
    ctx->pc = 0x42CF60u;
label_42cf60:
    // 0x42cf60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42cf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42cf64:
    // 0x42cf64: 0xc04ce80  jal         func_133A00
label_42cf68:
    if (ctx->pc == 0x42CF68u) {
        ctx->pc = 0x42CF68u;
            // 0x42cf68: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x42CF6Cu;
        goto label_42cf6c;
    }
    ctx->pc = 0x42CF64u;
    SET_GPR_U32(ctx, 31, 0x42CF6Cu);
    ctx->pc = 0x42CF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CF64u;
            // 0x42cf68: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CF6Cu; }
        if (ctx->pc != 0x42CF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CF6Cu; }
        if (ctx->pc != 0x42CF6Cu) { return; }
    }
    ctx->pc = 0x42CF6Cu;
label_42cf6c:
    // 0x42cf6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x42cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_42cf70:
    // 0x42cf70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42cf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42cf74:
    // 0x42cf74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42cf74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42cf78:
    // 0x42cf78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42cf78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42cf7c:
    // 0x42cf7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x42cf7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_42cf80:
    // 0x42cf80: 0xc04ce50  jal         func_133940
label_42cf84:
    if (ctx->pc == 0x42CF84u) {
        ctx->pc = 0x42CF84u;
            // 0x42cf84: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x42CF88u;
        goto label_42cf88;
    }
    ctx->pc = 0x42CF80u;
    SET_GPR_U32(ctx, 31, 0x42CF88u);
    ctx->pc = 0x42CF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CF80u;
            // 0x42cf84: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CF88u; }
        if (ctx->pc != 0x42CF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CF88u; }
        if (ctx->pc != 0x42CF88u) { return; }
    }
    ctx->pc = 0x42CF88u;
label_42cf88:
    // 0x42cf88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42cf8c:
    // 0x42cf8c: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x42cf8cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
label_42cf90:
    // 0x42cf90: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x42cf90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_42cf94:
    // 0x42cf94: 0x8e760000  lw          $s6, 0x0($s3)
    ctx->pc = 0x42cf94u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_42cf98:
    // 0x42cf98: 0xc07698c  jal         func_1DA630
label_42cf9c:
    if (ctx->pc == 0x42CF9Cu) {
        ctx->pc = 0x42CF9Cu;
            // 0x42cf9c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42CFA0u;
        goto label_42cfa0;
    }
    ctx->pc = 0x42CF98u;
    SET_GPR_U32(ctx, 31, 0x42CFA0u);
    ctx->pc = 0x42CF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CF98u;
            // 0x42cf9c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CFA0u; }
        if (ctx->pc != 0x42CFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CFA0u; }
        if (ctx->pc != 0x42CFA0u) { return; }
    }
    ctx->pc = 0x42CFA0u;
label_42cfa0:
    // 0x42cfa0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x42cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42cfa4:
    // 0x42cfa4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_42cfa8:
    if (ctx->pc == 0x42CFA8u) {
        ctx->pc = 0x42CFACu;
        goto label_42cfac;
    }
    ctx->pc = 0x42CFA4u;
    {
        const bool branch_taken_0x42cfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x42cfa4) {
            ctx->pc = 0x42CFB4u;
            goto label_42cfb4;
        }
    }
    ctx->pc = 0x42CFACu;
label_42cfac:
    // 0x42cfac: 0x10000033  b           . + 4 + (0x33 << 2)
label_42cfb0:
    if (ctx->pc == 0x42CFB0u) {
        ctx->pc = 0x42CFB0u;
            // 0x42cfb0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x42CFB4u;
        goto label_42cfb4;
    }
    ctx->pc = 0x42CFACu;
    {
        const bool branch_taken_0x42cfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CFACu;
            // 0x42cfb0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cfac) {
            ctx->pc = 0x42D07Cu;
            goto label_42d07c;
        }
    }
    ctx->pc = 0x42CFB4u;
label_42cfb4:
    // 0x42cfb4: 0xc0576f4  jal         func_15DBD0
label_42cfb8:
    if (ctx->pc == 0x42CFB8u) {
        ctx->pc = 0x42CFBCu;
        goto label_42cfbc;
    }
    ctx->pc = 0x42CFB4u;
    SET_GPR_U32(ctx, 31, 0x42CFBCu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CFBCu; }
        if (ctx->pc != 0x42CFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CFBCu; }
        if (ctx->pc != 0x42CFBCu) { return; }
    }
    ctx->pc = 0x42CFBCu;
label_42cfbc:
    // 0x42cfbc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x42cfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42cfc0:
    // 0x42cfc0: 0xc076984  jal         func_1DA610
label_42cfc4:
    if (ctx->pc == 0x42CFC4u) {
        ctx->pc = 0x42CFC4u;
            // 0x42cfc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42CFC8u;
        goto label_42cfc8;
    }
    ctx->pc = 0x42CFC0u;
    SET_GPR_U32(ctx, 31, 0x42CFC8u);
    ctx->pc = 0x42CFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CFC0u;
            // 0x42cfc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CFC8u; }
        if (ctx->pc != 0x42CFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CFC8u; }
        if (ctx->pc != 0x42CFC8u) { return; }
    }
    ctx->pc = 0x42CFC8u;
label_42cfc8:
    // 0x42cfc8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x42cfc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42cfcc:
    // 0x42cfcc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x42cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_42cfd0:
    // 0x42cfd0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x42cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_42cfd4:
    // 0x42cfd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42cfd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42cfd8:
    // 0x42cfd8: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x42cfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42cfdc:
    // 0x42cfdc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x42cfdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42cfe0:
    // 0x42cfe0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x42cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_42cfe4:
    // 0x42cfe4: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x42cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42cfe8:
    // 0x42cfe8: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x42cfe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_42cfec:
    // 0x42cfec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x42cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_42cff0:
    // 0x42cff0: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x42cff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42cff4:
    // 0x42cff4: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x42cff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_42cff8:
    // 0x42cff8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x42cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_42cffc:
    // 0x42cffc: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x42cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_42d000:
    // 0x42d000: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x42d000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_42d004:
    // 0x42d004: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x42d004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_42d008:
    // 0x42d008: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x42d008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42d00c:
    // 0x42d00c: 0xc04cca0  jal         func_133280
label_42d010:
    if (ctx->pc == 0x42D010u) {
        ctx->pc = 0x42D010u;
            // 0x42d010: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x42D014u;
        goto label_42d014;
    }
    ctx->pc = 0x42D00Cu;
    SET_GPR_U32(ctx, 31, 0x42D014u);
    ctx->pc = 0x42D010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D00Cu;
            // 0x42d010: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D014u; }
        if (ctx->pc != 0x42D014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D014u; }
        if (ctx->pc != 0x42D014u) { return; }
    }
    ctx->pc = 0x42D014u;
label_42d014:
    // 0x42d014: 0xc076980  jal         func_1DA600
label_42d018:
    if (ctx->pc == 0x42D018u) {
        ctx->pc = 0x42D018u;
            // 0x42d018: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D01Cu;
        goto label_42d01c;
    }
    ctx->pc = 0x42D014u;
    SET_GPR_U32(ctx, 31, 0x42D01Cu);
    ctx->pc = 0x42D018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D014u;
            // 0x42d018: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D01Cu; }
        if (ctx->pc != 0x42D01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D01Cu; }
        if (ctx->pc != 0x42D01Cu) { return; }
    }
    ctx->pc = 0x42D01Cu;
label_42d01c:
    // 0x42d01c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x42d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_42d020:
    // 0x42d020: 0xc04cc34  jal         func_1330D0
label_42d024:
    if (ctx->pc == 0x42D024u) {
        ctx->pc = 0x42D024u;
            // 0x42d024: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D028u;
        goto label_42d028;
    }
    ctx->pc = 0x42D020u;
    SET_GPR_U32(ctx, 31, 0x42D028u);
    ctx->pc = 0x42D024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D020u;
            // 0x42d024: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D028u; }
        if (ctx->pc != 0x42D028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D028u; }
        if (ctx->pc != 0x42D028u) { return; }
    }
    ctx->pc = 0x42D028u;
label_42d028:
    // 0x42d028: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x42d028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_42d02c:
    // 0x42d02c: 0xc461cb80  lwc1        $f1, -0x3480($v1)
    ctx->pc = 0x42d02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d030:
    // 0x42d030: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x42d030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42d034:
    // 0x42d034: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_42d038:
    if (ctx->pc == 0x42D038u) {
        ctx->pc = 0x42D038u;
            // 0x42d038: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D03Cu;
        goto label_42d03c;
    }
    ctx->pc = 0x42D034u;
    {
        const bool branch_taken_0x42d034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x42d034) {
            ctx->pc = 0x42D038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42D034u;
            // 0x42d038: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42D044u;
            goto label_42d044;
        }
    }
    ctx->pc = 0x42D03Cu;
label_42d03c:
    // 0x42d03c: 0x1000000f  b           . + 4 + (0xF << 2)
label_42d040:
    if (ctx->pc == 0x42D040u) {
        ctx->pc = 0x42D040u;
            // 0x42d040: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x42D044u;
        goto label_42d044;
    }
    ctx->pc = 0x42D03Cu;
    {
        const bool branch_taken_0x42d03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D03Cu;
            // 0x42d040: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d03c) {
            ctx->pc = 0x42D07Cu;
            goto label_42d07c;
        }
    }
    ctx->pc = 0x42D044u;
label_42d044:
    // 0x42d044: 0xc07697c  jal         func_1DA5F0
label_42d048:
    if (ctx->pc == 0x42D048u) {
        ctx->pc = 0x42D04Cu;
        goto label_42d04c;
    }
    ctx->pc = 0x42D044u;
    SET_GPR_U32(ctx, 31, 0x42D04Cu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D04Cu; }
        if (ctx->pc != 0x42D04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D04Cu; }
        if (ctx->pc != 0x42D04Cu) { return; }
    }
    ctx->pc = 0x42D04Cu;
label_42d04c:
    // 0x42d04c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42d04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42d050:
    // 0x42d050: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x42d050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_42d054:
    // 0x42d054: 0xc04cd60  jal         func_133580
label_42d058:
    if (ctx->pc == 0x42D058u) {
        ctx->pc = 0x42D058u;
            // 0x42d058: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D05Cu;
        goto label_42d05c;
    }
    ctx->pc = 0x42D054u;
    SET_GPR_U32(ctx, 31, 0x42D05Cu);
    ctx->pc = 0x42D058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D054u;
            // 0x42d058: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D05Cu; }
        if (ctx->pc != 0x42D05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D05Cu; }
        if (ctx->pc != 0x42D05Cu) { return; }
    }
    ctx->pc = 0x42D05Cu;
label_42d05c:
    // 0x42d05c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x42d05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_42d060:
    // 0x42d060: 0xc04c650  jal         func_131940
label_42d064:
    if (ctx->pc == 0x42D064u) {
        ctx->pc = 0x42D064u;
            // 0x42d064: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x42D068u;
        goto label_42d068;
    }
    ctx->pc = 0x42D060u;
    SET_GPR_U32(ctx, 31, 0x42D068u);
    ctx->pc = 0x42D064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D060u;
            // 0x42d064: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D068u; }
        if (ctx->pc != 0x42D068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D068u; }
        if (ctx->pc != 0x42D068u) { return; }
    }
    ctx->pc = 0x42D068u;
label_42d068:
    // 0x42d068: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x42d068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_42d06c:
    // 0x42d06c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x42d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42d070:
    // 0x42d070: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x42d070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_42d074:
    // 0x42d074: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x42d074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_42d078:
    // 0x42d078: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x42d078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42d07c:
    // 0x42d07c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x42d07cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_42d080:
    // 0x42d080: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
label_42d084:
    if (ctx->pc == 0x42D084u) {
        ctx->pc = 0x42D084u;
            // 0x42d084: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x42D088u;
        goto label_42d088;
    }
    ctx->pc = 0x42D080u;
    {
        const bool branch_taken_0x42d080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D080u;
            // 0x42d084: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d080) {
            ctx->pc = 0x42D190u;
            goto label_42d190;
        }
    }
    ctx->pc = 0x42D088u;
label_42d088:
    // 0x42d088: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x42d088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_42d08c:
    // 0x42d08c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42d08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42d090:
    // 0x42d090: 0xc04cd60  jal         func_133580
label_42d094:
    if (ctx->pc == 0x42D094u) {
        ctx->pc = 0x42D094u;
            // 0x42d094: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D098u;
        goto label_42d098;
    }
    ctx->pc = 0x42D090u;
    SET_GPR_U32(ctx, 31, 0x42D098u);
    ctx->pc = 0x42D094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D090u;
            // 0x42d094: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D098u; }
        if (ctx->pc != 0x42D098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D098u; }
        if (ctx->pc != 0x42D098u) { return; }
    }
    ctx->pc = 0x42D098u;
label_42d098:
    // 0x42d098: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x42d098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_42d09c:
    // 0x42d09c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42d09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42d0a0:
    // 0x42d0a0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x42d0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_42d0a4:
    // 0x42d0a4: 0xc04e4a4  jal         func_139290
label_42d0a8:
    if (ctx->pc == 0x42D0A8u) {
        ctx->pc = 0x42D0A8u;
            // 0x42d0a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42D0ACu;
        goto label_42d0ac;
    }
    ctx->pc = 0x42D0A4u;
    SET_GPR_U32(ctx, 31, 0x42D0ACu);
    ctx->pc = 0x42D0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D0A4u;
            // 0x42d0a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D0ACu; }
        if (ctx->pc != 0x42D0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D0ACu; }
        if (ctx->pc != 0x42D0ACu) { return; }
    }
    ctx->pc = 0x42D0ACu;
label_42d0ac:
    // 0x42d0ac: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x42d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_42d0b0:
    // 0x42d0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42d0b4:
    // 0x42d0b4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x42d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_42d0b8:
    // 0x42d0b8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x42d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_42d0bc:
    // 0x42d0bc: 0x8e8300d4  lw          $v1, 0xD4($s4)
    ctx->pc = 0x42d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_42d0c0:
    // 0x42d0c0: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_42d0c4:
    if (ctx->pc == 0x42D0C4u) {
        ctx->pc = 0x42D0C4u;
            // 0x42d0c4: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x42D0C8u;
        goto label_42d0c8;
    }
    ctx->pc = 0x42D0C0u;
    {
        const bool branch_taken_0x42d0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x42d0c0) {
            ctx->pc = 0x42D0C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42D0C0u;
            // 0x42d0c4: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42D0ECu;
            goto label_42d0ec;
        }
    }
    ctx->pc = 0x42D0C8u;
label_42d0c8:
    // 0x42d0c8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_42d0cc:
    if (ctx->pc == 0x42D0CCu) {
        ctx->pc = 0x42D0CCu;
            // 0x42d0cc: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x42D0D0u;
        goto label_42d0d0;
    }
    ctx->pc = 0x42D0C8u;
    {
        const bool branch_taken_0x42d0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42d0c8) {
            ctx->pc = 0x42D0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42D0C8u;
            // 0x42d0cc: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42D0D8u;
            goto label_42d0d8;
        }
    }
    ctx->pc = 0x42D0D0u;
label_42d0d0:
    // 0x42d0d0: 0x1000000b  b           . + 4 + (0xB << 2)
label_42d0d4:
    if (ctx->pc == 0x42D0D4u) {
        ctx->pc = 0x42D0D4u;
            // 0x42d0d4: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->pc = 0x42D0D8u;
        goto label_42d0d8;
    }
    ctx->pc = 0x42D0D0u;
    {
        const bool branch_taken_0x42d0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D0D0u;
            // 0x42d0d4: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d0d0) {
            ctx->pc = 0x42D100u;
            goto label_42d100;
        }
    }
    ctx->pc = 0x42D0D8u;
label_42d0d8:
    // 0x42d0d8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x42d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_42d0dc:
    // 0x42d0dc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x42d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_42d0e0:
    // 0x42d0e0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x42d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_42d0e4:
    // 0x42d0e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_42d0e8:
    if (ctx->pc == 0x42D0E8u) {
        ctx->pc = 0x42D0E8u;
            // 0x42d0e8: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x42D0ECu;
        goto label_42d0ec;
    }
    ctx->pc = 0x42D0E4u;
    {
        const bool branch_taken_0x42d0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D0E4u;
            // 0x42d0e8: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d0e4) {
            ctx->pc = 0x42D0FCu;
            goto label_42d0fc;
        }
    }
    ctx->pc = 0x42D0ECu;
label_42d0ec:
    // 0x42d0ec: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x42d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_42d0f0:
    // 0x42d0f0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x42d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_42d0f4:
    // 0x42d0f4: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x42d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_42d0f8:
    // 0x42d0f8: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x42d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_42d0fc:
    // 0x42d0fc: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x42d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_42d100:
    // 0x42d100: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_42d104:
    if (ctx->pc == 0x42D104u) {
        ctx->pc = 0x42D104u;
            // 0x42d104: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x42D108u;
        goto label_42d108;
    }
    ctx->pc = 0x42D100u;
    {
        const bool branch_taken_0x42d100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42d100) {
            ctx->pc = 0x42D104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42D100u;
            // 0x42d104: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42D15Cu;
            goto label_42d15c;
        }
    }
    ctx->pc = 0x42D108u;
label_42d108:
    // 0x42d108: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x42d108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_42d10c:
    // 0x42d10c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x42d10cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_42d110:
    // 0x42d110: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x42d110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42d114:
    // 0x42d114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42d114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42d118:
    // 0x42d118: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42d118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42d11c:
    // 0x42d11c: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x42d11cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_42d120:
    // 0x42d120: 0xc04cfcc  jal         func_133F30
label_42d124:
    if (ctx->pc == 0x42D124u) {
        ctx->pc = 0x42D124u;
            // 0x42d124: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D128u;
        goto label_42d128;
    }
    ctx->pc = 0x42D120u;
    SET_GPR_U32(ctx, 31, 0x42D128u);
    ctx->pc = 0x42D124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D120u;
            // 0x42d124: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D128u; }
        if (ctx->pc != 0x42D128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D128u; }
        if (ctx->pc != 0x42D128u) { return; }
    }
    ctx->pc = 0x42D128u;
label_42d128:
    // 0x42d128: 0xc66c001c  lwc1        $f12, 0x1C($s3)
    ctx->pc = 0x42d128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_42d12c:
    // 0x42d12c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x42d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_42d130:
    // 0x42d130: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x42d130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_42d134:
    // 0x42d134: 0xc054bbc  jal         func_152EF0
label_42d138:
    if (ctx->pc == 0x42D138u) {
        ctx->pc = 0x42D138u;
            // 0x42d138: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x42D13Cu;
        goto label_42d13c;
    }
    ctx->pc = 0x42D134u;
    SET_GPR_U32(ctx, 31, 0x42D13Cu);
    ctx->pc = 0x42D138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D134u;
            // 0x42d138: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D13Cu; }
        if (ctx->pc != 0x42D13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D13Cu; }
        if (ctx->pc != 0x42D13Cu) { return; }
    }
    ctx->pc = 0x42D13Cu;
label_42d13c:
    // 0x42d13c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x42d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_42d140:
    // 0x42d140: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x42d140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42d144:
    // 0x42d144: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x42d144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42d148:
    // 0x42d148: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x42d148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_42d14c:
    // 0x42d14c: 0xc054c2c  jal         func_1530B0
label_42d150:
    if (ctx->pc == 0x42D150u) {
        ctx->pc = 0x42D150u;
            // 0x42d150: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D154u;
        goto label_42d154;
    }
    ctx->pc = 0x42D14Cu;
    SET_GPR_U32(ctx, 31, 0x42D154u);
    ctx->pc = 0x42D150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D14Cu;
            // 0x42d150: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D154u; }
        if (ctx->pc != 0x42D154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D154u; }
        if (ctx->pc != 0x42D154u) { return; }
    }
    ctx->pc = 0x42D154u;
label_42d154:
    // 0x42d154: 0x1000000e  b           . + 4 + (0xE << 2)
label_42d158:
    if (ctx->pc == 0x42D158u) {
        ctx->pc = 0x42D15Cu;
        goto label_42d15c;
    }
    ctx->pc = 0x42D154u;
    {
        const bool branch_taken_0x42d154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42d154) {
            ctx->pc = 0x42D190u;
            goto label_42d190;
        }
    }
    ctx->pc = 0x42D15Cu;
label_42d15c:
    // 0x42d15c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x42d15cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_42d160:
    // 0x42d160: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x42d160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42d164:
    // 0x42d164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42d164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42d168:
    // 0x42d168: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42d168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42d16c:
    // 0x42d16c: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x42d16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_42d170:
    // 0x42d170: 0xc04cfcc  jal         func_133F30
label_42d174:
    if (ctx->pc == 0x42D174u) {
        ctx->pc = 0x42D174u;
            // 0x42d174: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D178u;
        goto label_42d178;
    }
    ctx->pc = 0x42D170u;
    SET_GPR_U32(ctx, 31, 0x42D178u);
    ctx->pc = 0x42D174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D170u;
            // 0x42d174: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D178u; }
        if (ctx->pc != 0x42D178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D178u; }
        if (ctx->pc != 0x42D178u) { return; }
    }
    ctx->pc = 0x42D178u;
label_42d178:
    // 0x42d178: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x42d178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_42d17c:
    // 0x42d17c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x42d17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42d180:
    // 0x42d180: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x42d180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42d184:
    // 0x42d184: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x42d184u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_42d188:
    // 0x42d188: 0xc050044  jal         func_140110
label_42d18c:
    if (ctx->pc == 0x42D18Cu) {
        ctx->pc = 0x42D18Cu;
            // 0x42d18c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D190u;
        goto label_42d190;
    }
    ctx->pc = 0x42D188u;
    SET_GPR_U32(ctx, 31, 0x42D190u);
    ctx->pc = 0x42D18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D188u;
            // 0x42d18c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D190u; }
        if (ctx->pc != 0x42D190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D190u; }
        if (ctx->pc != 0x42D190u) { return; }
    }
    ctx->pc = 0x42D190u;
label_42d190:
    // 0x42d190: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x42d190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_42d194:
    // 0x42d194: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x42d194u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_42d198:
    // 0x42d198: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x42d198u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_42d19c:
    // 0x42d19c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x42d19cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_42d1a0:
    // 0x42d1a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42d1a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42d1a4:
    // 0x42d1a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42d1a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42d1a8:
    // 0x42d1a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42d1a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42d1ac:
    // 0x42d1ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42d1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42d1b0:
    // 0x42d1b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42d1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42d1b4:
    // 0x42d1b4: 0x3e00008  jr          $ra
label_42d1b8:
    if (ctx->pc == 0x42D1B8u) {
        ctx->pc = 0x42D1B8u;
            // 0x42d1b8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x42D1BCu;
        goto label_42d1bc;
    }
    ctx->pc = 0x42D1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D1B4u;
            // 0x42d1b8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42D1BCu;
label_42d1bc:
    // 0x42d1bc: 0x0  nop
    ctx->pc = 0x42d1bcu;
    // NOP
label_42d1c0:
    // 0x42d1c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x42d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_42d1c4:
    // 0x42d1c4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x42d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_42d1c8:
    // 0x42d1c8: 0xc48100dc  lwc1        $f1, 0xDC($a0)
    ctx->pc = 0x42d1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d1cc:
    // 0x42d1cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x42d1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42d1d0:
    // 0x42d1d0: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x42d1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42d1d4:
    // 0x42d1d4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x42d1d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_42d1d8:
    // 0x42d1d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x42d1d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42d1dc:
    // 0x42d1dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_42d1e0:
    if (ctx->pc == 0x42D1E0u) {
        ctx->pc = 0x42D1E0u;
            // 0x42d1e0: 0xe48100dc  swc1        $f1, 0xDC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
        ctx->pc = 0x42D1E4u;
        goto label_42d1e4;
    }
    ctx->pc = 0x42D1DCu;
    {
        const bool branch_taken_0x42d1dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x42D1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D1DCu;
            // 0x42d1e0: 0xe48100dc  swc1        $f1, 0xDC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d1dc) {
            ctx->pc = 0x42D1E8u;
            goto label_42d1e8;
        }
    }
    ctx->pc = 0x42D1E4u;
label_42d1e4:
    // 0x42d1e4: 0xe48000dc  swc1        $f0, 0xDC($a0)
    ctx->pc = 0x42d1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
label_42d1e8:
    // 0x42d1e8: 0x3e00008  jr          $ra
label_42d1ec:
    if (ctx->pc == 0x42D1ECu) {
        ctx->pc = 0x42D1F0u;
        goto label_42d1f0;
    }
    ctx->pc = 0x42D1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42D1F0u;
label_42d1f0:
    // 0x42d1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42d1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42d1f4:
    // 0x42d1f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42d1f8:
    // 0x42d1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42d1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42d1fc:
    // 0x42d1fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42d200:
    // 0x42d200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42d200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42d204:
    // 0x42d204: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x42d204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_42d208:
    // 0x42d208: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x42d208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_42d20c:
    // 0x42d20c: 0xc0dc9bc  jal         func_3726F0
label_42d210:
    if (ctx->pc == 0x42D210u) {
        ctx->pc = 0x42D210u;
            // 0x42d210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D214u;
        goto label_42d214;
    }
    ctx->pc = 0x42D20Cu;
    SET_GPR_U32(ctx, 31, 0x42D214u);
    ctx->pc = 0x42D210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D20Cu;
            // 0x42d210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D214u; }
        if (ctx->pc != 0x42D214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D214u; }
        if (ctx->pc != 0x42D214u) { return; }
    }
    ctx->pc = 0x42D214u;
label_42d214:
    // 0x42d214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42d214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42d218:
    // 0x42d218: 0xc0dc9a0  jal         func_372680
label_42d21c:
    if (ctx->pc == 0x42D21Cu) {
        ctx->pc = 0x42D21Cu;
            // 0x42d21c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x42D220u;
        goto label_42d220;
    }
    ctx->pc = 0x42D218u;
    SET_GPR_U32(ctx, 31, 0x42D220u);
    ctx->pc = 0x42D21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D218u;
            // 0x42d21c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D220u; }
        if (ctx->pc != 0x42D220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D220u; }
        if (ctx->pc != 0x42D220u) { return; }
    }
    ctx->pc = 0x42D220u;
label_42d220:
    // 0x42d220: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42d220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42d224:
    // 0x42d224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42d224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42d228:
    // 0x42d228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42d228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42d22c:
    // 0x42d22c: 0x3e00008  jr          $ra
label_42d230:
    if (ctx->pc == 0x42D230u) {
        ctx->pc = 0x42D230u;
            // 0x42d230: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42D234u;
        goto label_42d234;
    }
    ctx->pc = 0x42D22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D22Cu;
            // 0x42d230: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42D234u;
label_42d234:
    // 0x42d234: 0x0  nop
    ctx->pc = 0x42d234u;
    // NOP
label_42d238:
    // 0x42d238: 0x0  nop
    ctx->pc = 0x42d238u;
    // NOP
label_42d23c:
    // 0x42d23c: 0x0  nop
    ctx->pc = 0x42d23cu;
    // NOP
label_42d240:
    // 0x42d240: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x42d240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_42d244:
    // 0x42d244: 0x80baaa0  j           func_2EAA80
label_42d248:
    if (ctx->pc == 0x42D248u) {
        ctx->pc = 0x42D248u;
            // 0x42d248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D24Cu;
        goto label_42d24c;
    }
    ctx->pc = 0x42D244u;
    ctx->pc = 0x42D248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D244u;
            // 0x42d248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x42D24Cu;
label_42d24c:
    // 0x42d24c: 0x0  nop
    ctx->pc = 0x42d24cu;
    // NOP
label_42d250:
    // 0x42d250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42d254:
    // 0x42d254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42d258:
    // 0x42d258: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x42d258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42d25c:
    // 0x42d25c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42d25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42d260:
    // 0x42d260: 0xc48100dc  lwc1        $f1, 0xDC($a0)
    ctx->pc = 0x42d260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d264:
    // 0x42d264: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x42d264u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42d268:
    // 0x42d268: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_42d26c:
    if (ctx->pc == 0x42D26Cu) {
        ctx->pc = 0x42D26Cu;
            // 0x42d26c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D270u;
        goto label_42d270;
    }
    ctx->pc = 0x42D268u;
    {
        const bool branch_taken_0x42d268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x42D26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D268u;
            // 0x42d26c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d268) {
            ctx->pc = 0x42D288u;
            goto label_42d288;
        }
    }
    ctx->pc = 0x42D270u;
label_42d270:
    // 0x42d270: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x42d270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_42d274:
    // 0x42d274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42d274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42d278:
    // 0x42d278: 0xc122d2c  jal         func_48B4B0
label_42d27c:
    if (ctx->pc == 0x42D27Cu) {
        ctx->pc = 0x42D27Cu;
            // 0x42d27c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x42D280u;
        goto label_42d280;
    }
    ctx->pc = 0x42D278u;
    SET_GPR_U32(ctx, 31, 0x42D280u);
    ctx->pc = 0x42D27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D278u;
            // 0x42d27c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D280u; }
        if (ctx->pc != 0x42D280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D280u; }
        if (ctx->pc != 0x42D280u) { return; }
    }
    ctx->pc = 0x42D280u;
label_42d280:
    // 0x42d280: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x42d280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_42d284:
    // 0x42d284: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x42d284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_42d288:
    // 0x42d288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42d288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42d28c:
    // 0x42d28c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42d28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42d290:
    // 0x42d290: 0x3e00008  jr          $ra
label_42d294:
    if (ctx->pc == 0x42D294u) {
        ctx->pc = 0x42D294u;
            // 0x42d294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42D298u;
        goto label_42d298;
    }
    ctx->pc = 0x42D290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D290u;
            // 0x42d294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42D298u;
label_42d298:
    // 0x42d298: 0x0  nop
    ctx->pc = 0x42d298u;
    // NOP
label_42d29c:
    // 0x42d29c: 0x0  nop
    ctx->pc = 0x42d29cu;
    // NOP
label_42d2a0:
    // 0x42d2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42d2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42d2a4:
    // 0x42d2a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42d2a8:
    // 0x42d2a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42d2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42d2ac:
    // 0x42d2ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42d2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42d2b0:
    // 0x42d2b0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x42d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_42d2b4:
    // 0x42d2b4: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x42d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_42d2b8:
    // 0x42d2b8: 0x8c420cd0  lw          $v0, 0xCD0($v0)
    ctx->pc = 0x42d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_42d2bc:
    // 0x42d2bc: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_42d2c0:
    if (ctx->pc == 0x42D2C0u) {
        ctx->pc = 0x42D2C0u;
            // 0x42d2c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D2C4u;
        goto label_42d2c4;
    }
    ctx->pc = 0x42D2BCu;
    {
        const bool branch_taken_0x42d2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x42D2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D2BCu;
            // 0x42d2c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d2bc) {
            ctx->pc = 0x42D314u;
            goto label_42d314;
        }
    }
    ctx->pc = 0x42D2C4u;
label_42d2c4:
    // 0x42d2c4: 0xc0e393c  jal         func_38E4F0
label_42d2c8:
    if (ctx->pc == 0x42D2C8u) {
        ctx->pc = 0x42D2CCu;
        goto label_42d2cc;
    }
    ctx->pc = 0x42D2C4u;
    SET_GPR_U32(ctx, 31, 0x42D2CCu);
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D2CCu; }
        if (ctx->pc != 0x42D2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D2CCu; }
        if (ctx->pc != 0x42D2CCu) { return; }
    }
    ctx->pc = 0x42D2CCu;
label_42d2cc:
    // 0x42d2cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42d2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42d2d0:
    // 0x42d2d0: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x42d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_42d2d4:
    // 0x42d2d4: 0xae06008c  sw          $a2, 0x8C($s0)
    ctx->pc = 0x42d2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 6));
label_42d2d8:
    // 0x42d2d8: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x42d2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_42d2dc:
    // 0x42d2dc: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x42d2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_42d2e0:
    // 0x42d2e0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x42d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_42d2e4:
    // 0x42d2e4: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x42d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_42d2e8:
    // 0x42d2e8: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x42d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
label_42d2ec:
    // 0x42d2ec: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x42d2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_42d2f0:
    // 0x42d2f0: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x42d2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_42d2f4:
    // 0x42d2f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42d2f8:
    // 0x42d2f8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x42d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_42d2fc:
    // 0x42d2fc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42d300:
    // 0x42d300: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42d300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42d304:
    // 0x42d304: 0xc08bff0  jal         func_22FFC0
label_42d308:
    if (ctx->pc == 0x42D308u) {
        ctx->pc = 0x42D308u;
            // 0x42d308: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D30Cu;
        goto label_42d30c;
    }
    ctx->pc = 0x42D304u;
    SET_GPR_U32(ctx, 31, 0x42D30Cu);
    ctx->pc = 0x42D308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D304u;
            // 0x42d308: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D30Cu; }
        if (ctx->pc != 0x42D30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D30Cu; }
        if (ctx->pc != 0x42D30Cu) { return; }
    }
    ctx->pc = 0x42D30Cu;
label_42d30c:
    // 0x42d30c: 0x1000000b  b           . + 4 + (0xB << 2)
label_42d310:
    if (ctx->pc == 0x42D310u) {
        ctx->pc = 0x42D310u;
            // 0x42d310: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x42D314u;
        goto label_42d314;
    }
    ctx->pc = 0x42D30Cu;
    {
        const bool branch_taken_0x42d30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D30Cu;
            // 0x42d310: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d30c) {
            ctx->pc = 0x42D33Cu;
            goto label_42d33c;
        }
    }
    ctx->pc = 0x42D314u;
label_42d314:
    // 0x42d314: 0xc0e393c  jal         func_38E4F0
label_42d318:
    if (ctx->pc == 0x42D318u) {
        ctx->pc = 0x42D31Cu;
        goto label_42d31c;
    }
    ctx->pc = 0x42D314u;
    SET_GPR_U32(ctx, 31, 0x42D31Cu);
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D31Cu; }
        if (ctx->pc != 0x42D31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D31Cu; }
        if (ctx->pc != 0x42D31Cu) { return; }
    }
    ctx->pc = 0x42D31Cu;
label_42d31c:
    // 0x42d31c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x42d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_42d320:
    // 0x42d320: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42d320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42d324:
    // 0x42d324: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42d324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42d328:
    // 0x42d328: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x42d328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_42d32c:
    // 0x42d32c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42d330:
    // 0x42d330: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42d330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42d334:
    // 0x42d334: 0xc08bff0  jal         func_22FFC0
label_42d338:
    if (ctx->pc == 0x42D338u) {
        ctx->pc = 0x42D338u;
            // 0x42d338: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D33Cu;
        goto label_42d33c;
    }
    ctx->pc = 0x42D334u;
    SET_GPR_U32(ctx, 31, 0x42D33Cu);
    ctx->pc = 0x42D338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D334u;
            // 0x42d338: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D33Cu; }
        if (ctx->pc != 0x42D33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D33Cu; }
        if (ctx->pc != 0x42D33Cu) { return; }
    }
    ctx->pc = 0x42D33Cu;
label_42d33c:
    // 0x42d33c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42d33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42d340:
    // 0x42d340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42d340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42d344:
    // 0x42d344: 0x3e00008  jr          $ra
label_42d348:
    if (ctx->pc == 0x42D348u) {
        ctx->pc = 0x42D348u;
            // 0x42d348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42D34Cu;
        goto label_42d34c;
    }
    ctx->pc = 0x42D344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D344u;
            // 0x42d348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42D34Cu;
label_42d34c:
    // 0x42d34c: 0x0  nop
    ctx->pc = 0x42d34cu;
    // NOP
label_42d350:
    // 0x42d350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42d350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42d354:
    // 0x42d354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42d358:
    // 0x42d358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42d358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42d35c:
    // 0x42d35c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42d35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42d360:
    // 0x42d360: 0x8c8400e0  lw          $a0, 0xE0($a0)
    ctx->pc = 0x42d360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_42d364:
    // 0x42d364: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42d368:
    if (ctx->pc == 0x42D368u) {
        ctx->pc = 0x42D368u;
            // 0x42d368: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x42D36Cu;
        goto label_42d36c;
    }
    ctx->pc = 0x42D364u;
    {
        const bool branch_taken_0x42d364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42d364) {
            ctx->pc = 0x42D368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42D364u;
            // 0x42d368: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42D380u;
            goto label_42d380;
        }
    }
    ctx->pc = 0x42D36Cu;
label_42d36c:
    // 0x42d36c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42d36cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42d370:
    // 0x42d370: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42d370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42d374:
    // 0x42d374: 0x320f809  jalr        $t9
label_42d378:
    if (ctx->pc == 0x42D378u) {
        ctx->pc = 0x42D378u;
            // 0x42d378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42D37Cu;
        goto label_42d37c;
    }
    ctx->pc = 0x42D374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42D37Cu);
        ctx->pc = 0x42D378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D374u;
            // 0x42d378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42D37Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42D37Cu; }
            if (ctx->pc != 0x42D37Cu) { return; }
        }
        }
    }
    ctx->pc = 0x42D37Cu;
label_42d37c:
    // 0x42d37c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x42d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_42d380:
    // 0x42d380: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x42d380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_42d384:
    // 0x42d384: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42d388:
    if (ctx->pc == 0x42D388u) {
        ctx->pc = 0x42D388u;
            // 0x42d388: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x42D38Cu;
        goto label_42d38c;
    }
    ctx->pc = 0x42D384u;
    {
        const bool branch_taken_0x42d384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42d384) {
            ctx->pc = 0x42D388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42D384u;
            // 0x42d388: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42D3A0u;
            goto label_42d3a0;
        }
    }
    ctx->pc = 0x42D38Cu;
label_42d38c:
    // 0x42d38c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42d38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42d390:
    // 0x42d390: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42d390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42d394:
    // 0x42d394: 0x320f809  jalr        $t9
label_42d398:
    if (ctx->pc == 0x42D398u) {
        ctx->pc = 0x42D398u;
            // 0x42d398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42D39Cu;
        goto label_42d39c;
    }
    ctx->pc = 0x42D394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42D39Cu);
        ctx->pc = 0x42D398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D394u;
            // 0x42d398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42D39Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42D39Cu; }
            if (ctx->pc != 0x42D39Cu) { return; }
        }
        }
    }
    ctx->pc = 0x42D39Cu;
label_42d39c:
    // 0x42d39c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x42d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_42d3a0:
    // 0x42d3a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42d3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42d3a4:
    // 0x42d3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42d3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42d3a8:
    // 0x42d3a8: 0x3e00008  jr          $ra
label_42d3ac:
    if (ctx->pc == 0x42D3ACu) {
        ctx->pc = 0x42D3ACu;
            // 0x42d3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42D3B0u;
        goto label_42d3b0;
    }
    ctx->pc = 0x42D3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D3A8u;
            // 0x42d3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42D3B0u;
label_42d3b0:
    // 0x42d3b0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x42d3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_42d3b4:
    // 0x42d3b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x42d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_42d3b8:
    // 0x42d3b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x42d3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_42d3bc:
    // 0x42d3bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x42d3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42d3c0:
    // 0x42d3c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42d3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42d3c4:
    // 0x42d3c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42d3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42d3c8:
    // 0x42d3c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42d3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42d3cc:
    // 0x42d3cc: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x42d3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d3d0:
    // 0x42d3d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x42d3d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_42d3d4:
    // 0x42d3d4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x42d3d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_42d3d8:
    // 0x42d3d8: 0x0  nop
    ctx->pc = 0x42d3d8u;
    // NOP
label_42d3dc:
    // 0x42d3dc: 0xac8200d4  sw          $v0, 0xD4($a0)
    ctx->pc = 0x42d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 2));
label_42d3e0:
    // 0x42d3e0: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x42d3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d3e4:
    // 0x42d3e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x42d3e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42d3e8:
    // 0x42d3e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_42d3ec:
    if (ctx->pc == 0x42D3ECu) {
        ctx->pc = 0x42D3ECu;
            // 0x42d3ec: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D3F0u;
        goto label_42d3f0;
    }
    ctx->pc = 0x42D3E8u;
    {
        const bool branch_taken_0x42d3e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x42D3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D3E8u;
            // 0x42d3ec: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d3e8) {
            ctx->pc = 0x42D400u;
            goto label_42d400;
        }
    }
    ctx->pc = 0x42D3F0u;
label_42d3f0:
    // 0x42d3f0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x42d3f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_42d3f4:
    // 0x42d3f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x42d3f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_42d3f8:
    // 0x42d3f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_42d3fc:
    if (ctx->pc == 0x42D3FCu) {
        ctx->pc = 0x42D3FCu;
            // 0x42d3fc: 0xae4300d8  sw          $v1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
        ctx->pc = 0x42D400u;
        goto label_42d400;
    }
    ctx->pc = 0x42D3F8u;
    {
        const bool branch_taken_0x42d3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D3F8u;
            // 0x42d3fc: 0xae4300d8  sw          $v1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d3f8) {
            ctx->pc = 0x42D41Cu;
            goto label_42d41c;
        }
    }
    ctx->pc = 0x42D400u;
label_42d400:
    // 0x42d400: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x42d400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_42d404:
    // 0x42d404: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x42d404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_42d408:
    // 0x42d408: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x42d408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_42d40c:
    // 0x42d40c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x42d40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_42d410:
    // 0x42d410: 0x0  nop
    ctx->pc = 0x42d410u;
    // NOP
label_42d414:
    // 0x42d414: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x42d414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42d418:
    // 0x42d418: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x42d418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
label_42d41c:
    // 0x42d41c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42d420:
    // 0x42d420: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x42d420u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42d424:
    // 0x42d424: 0xc0892d0  jal         func_224B40
label_42d428:
    if (ctx->pc == 0x42D428u) {
        ctx->pc = 0x42D428u;
            // 0x42d428: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x42D42Cu;
        goto label_42d42c;
    }
    ctx->pc = 0x42D424u;
    SET_GPR_U32(ctx, 31, 0x42D42Cu);
    ctx->pc = 0x42D428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D424u;
            // 0x42d428: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D42Cu; }
        if (ctx->pc != 0x42D42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D42Cu; }
        if (ctx->pc != 0x42D42Cu) { return; }
    }
    ctx->pc = 0x42D42Cu;
label_42d42c:
    // 0x42d42c: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x42d42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42d430:
    // 0x42d430: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x42d430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_42d434:
    // 0x42d434: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x42d434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d438:
    // 0x42d438: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x42d438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_42d43c:
    // 0x42d43c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x42d43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42d440:
    // 0x42d440: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x42d440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_42d444:
    // 0x42d444: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x42d444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_42d448:
    // 0x42d448: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x42d448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_42d44c:
    // 0x42d44c: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x42d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_42d450:
    // 0x42d450: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x42d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42d454:
    // 0x42d454: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x42d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42d458:
    // 0x42d458: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x42d458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d45c:
    // 0x42d45c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x42d45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42d460:
    // 0x42d460: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x42d460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_42d464:
    // 0x42d464: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x42d464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_42d468:
    // 0x42d468: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x42d468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_42d46c:
    // 0x42d46c: 0xc0a3830  jal         func_28E0C0
label_42d470:
    if (ctx->pc == 0x42D470u) {
        ctx->pc = 0x42D470u;
            // 0x42d470: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x42D474u;
        goto label_42d474;
    }
    ctx->pc = 0x42D46Cu;
    SET_GPR_U32(ctx, 31, 0x42D474u);
    ctx->pc = 0x42D470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D46Cu;
            // 0x42d470: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D474u; }
        if (ctx->pc != 0x42D474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D474u; }
        if (ctx->pc != 0x42D474u) { return; }
    }
    ctx->pc = 0x42D474u;
label_42d474:
    // 0x42d474: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42d474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42d478:
    // 0x42d478: 0x8e4500d4  lw          $a1, 0xD4($s2)
    ctx->pc = 0x42d478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_42d47c:
    // 0x42d47c: 0x8c4374a8  lw          $v1, 0x74A8($v0)
    ctx->pc = 0x42d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29864)));
label_42d480:
    // 0x42d480: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x42d480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_42d484:
    // 0x42d484: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x42d484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_42d488:
    // 0x42d488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42d488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42d48c:
    // 0x42d48c: 0x8c5100a8  lw          $s1, 0xA8($v0)
    ctx->pc = 0x42d48cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_42d490:
    // 0x42d490: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x42d490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_42d494:
    // 0x42d494: 0xc0b6e68  jal         func_2DB9A0
label_42d498:
    if (ctx->pc == 0x42D498u) {
        ctx->pc = 0x42D498u;
            // 0x42d498: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x42D49Cu;
        goto label_42d49c;
    }
    ctx->pc = 0x42D494u;
    SET_GPR_U32(ctx, 31, 0x42D49Cu);
    ctx->pc = 0x42D498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D494u;
            // 0x42d498: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D49Cu; }
        if (ctx->pc != 0x42D49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D49Cu; }
        if (ctx->pc != 0x42D49Cu) { return; }
    }
    ctx->pc = 0x42D49Cu;
label_42d49c:
    // 0x42d49c: 0xc0b6dac  jal         func_2DB6B0
label_42d4a0:
    if (ctx->pc == 0x42D4A0u) {
        ctx->pc = 0x42D4A0u;
            // 0x42d4a0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x42D4A4u;
        goto label_42d4a4;
    }
    ctx->pc = 0x42D49Cu;
    SET_GPR_U32(ctx, 31, 0x42D4A4u);
    ctx->pc = 0x42D4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D49Cu;
            // 0x42d4a0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D4A4u; }
        if (ctx->pc != 0x42D4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D4A4u; }
        if (ctx->pc != 0x42D4A4u) { return; }
    }
    ctx->pc = 0x42D4A4u;
label_42d4a4:
    // 0x42d4a4: 0xc0cac94  jal         func_32B250
label_42d4a8:
    if (ctx->pc == 0x42D4A8u) {
        ctx->pc = 0x42D4A8u;
            // 0x42d4a8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x42D4ACu;
        goto label_42d4ac;
    }
    ctx->pc = 0x42D4A4u;
    SET_GPR_U32(ctx, 31, 0x42D4ACu);
    ctx->pc = 0x42D4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D4A4u;
            // 0x42d4a8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D4ACu; }
        if (ctx->pc != 0x42D4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D4ACu; }
        if (ctx->pc != 0x42D4ACu) { return; }
    }
    ctx->pc = 0x42D4ACu;
label_42d4ac:
    // 0x42d4ac: 0xc0cac84  jal         func_32B210
label_42d4b0:
    if (ctx->pc == 0x42D4B0u) {
        ctx->pc = 0x42D4B0u;
            // 0x42d4b0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x42D4B4u;
        goto label_42d4b4;
    }
    ctx->pc = 0x42D4ACu;
    SET_GPR_U32(ctx, 31, 0x42D4B4u);
    ctx->pc = 0x42D4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D4ACu;
            // 0x42d4b0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D4B4u; }
        if (ctx->pc != 0x42D4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D4B4u; }
        if (ctx->pc != 0x42D4B4u) { return; }
    }
    ctx->pc = 0x42D4B4u;
label_42d4b4:
    // 0x42d4b4: 0x3c0247c3  lui         $v0, 0x47C3
    ctx->pc = 0x42d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18371 << 16));
label_42d4b8:
    // 0x42d4b8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x42d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_42d4bc:
    // 0x42d4bc: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x42d4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_42d4c0:
    // 0x42d4c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42d4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42d4c4:
    // 0x42d4c4: 0xc0a5a68  jal         func_2969A0
label_42d4c8:
    if (ctx->pc == 0x42D4C8u) {
        ctx->pc = 0x42D4C8u;
            // 0x42d4c8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x42D4CCu;
        goto label_42d4cc;
    }
    ctx->pc = 0x42D4C4u;
    SET_GPR_U32(ctx, 31, 0x42D4CCu);
    ctx->pc = 0x42D4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D4C4u;
            // 0x42d4c8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D4CCu; }
        if (ctx->pc != 0x42D4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D4CCu; }
        if (ctx->pc != 0x42D4CCu) { return; }
    }
    ctx->pc = 0x42D4CCu;
label_42d4cc:
    // 0x42d4cc: 0xafb100f4  sw          $s1, 0xF4($sp)
    ctx->pc = 0x42d4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 17));
label_42d4d0:
    // 0x42d4d0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x42d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_42d4d4:
    // 0x42d4d4: 0xc6460018  lwc1        $f6, 0x18($s2)
    ctx->pc = 0x42d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_42d4d8:
    // 0x42d4d8: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x42d4d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_42d4dc:
    // 0x42d4dc: 0xc6450014  lwc1        $f5, 0x14($s2)
    ctx->pc = 0x42d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_42d4e0:
    // 0x42d4e0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x42d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_42d4e4:
    // 0x42d4e4: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x42d4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42d4e8:
    // 0x42d4e8: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x42d4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_42d4ec:
    // 0x42d4ec: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x42d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42d4f0:
    // 0x42d4f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42d4f4:
    // 0x42d4f4: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x42d4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42d4f8:
    // 0x42d4f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x42d4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42d4fc:
    // 0x42d4fc: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x42d4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d500:
    // 0x42d500: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x42d500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_42d504:
    // 0x42d504: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x42d504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_42d508:
    // 0x42d508: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x42d508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_42d50c:
    // 0x42d50c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x42d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42d510:
    // 0x42d510: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x42d510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_42d514:
    // 0x42d514: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x42d514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_42d518:
    // 0x42d518: 0xa3a801a0  sb          $t0, 0x1A0($sp)
    ctx->pc = 0x42d518u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 416), (uint8_t)GPR_U32(ctx, 8));
label_42d51c:
    // 0x42d51c: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x42d51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_42d520:
    // 0x42d520: 0xafa7019c  sw          $a3, 0x19C($sp)
    ctx->pc = 0x42d520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 7));
label_42d524:
    // 0x42d524: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x42d524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_42d528:
    // 0x42d528: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x42d528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_42d52c:
    // 0x42d52c: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x42d52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42d530:
    // 0x42d530: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x42d530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_42d534:
    // 0x42d534: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x42d534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d538:
    // 0x42d538: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x42d538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42d53c:
    // 0x42d53c: 0xe7a20150  swc1        $f2, 0x150($sp)
    ctx->pc = 0x42d53cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_42d540:
    // 0x42d540: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x42d540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_42d544:
    // 0x42d544: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x42d544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_42d548:
    // 0x42d548: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x42d548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42d54c:
    // 0x42d54c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x42d54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d550:
    // 0x42d550: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x42d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42d554:
    // 0x42d554: 0xe7a2015c  swc1        $f2, 0x15C($sp)
    ctx->pc = 0x42d554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_42d558:
    // 0x42d558: 0xe7a10160  swc1        $f1, 0x160($sp)
    ctx->pc = 0x42d558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_42d55c:
    // 0x42d55c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x42d55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_42d560:
    // 0x42d560: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x42d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42d564:
    // 0x42d564: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x42d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d568:
    // 0x42d568: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x42d568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42d56c:
    // 0x42d56c: 0xe7a20168  swc1        $f2, 0x168($sp)
    ctx->pc = 0x42d56cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_42d570:
    // 0x42d570: 0xe7a1016c  swc1        $f1, 0x16C($sp)
    ctx->pc = 0x42d570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_42d574:
    // 0x42d574: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x42d574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_42d578:
    // 0x42d578: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x42d578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42d57c:
    // 0x42d57c: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x42d57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42d580:
    // 0x42d580: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x42d580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d584:
    // 0x42d584: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x42d584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42d588:
    // 0x42d588: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x42d588u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_42d58c:
    // 0x42d58c: 0xe7a50104  swc1        $f5, 0x104($sp)
    ctx->pc = 0x42d58cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_42d590:
    // 0x42d590: 0xe7a60108  swc1        $f6, 0x108($sp)
    ctx->pc = 0x42d590u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_42d594:
    // 0x42d594: 0xe7a30140  swc1        $f3, 0x140($sp)
    ctx->pc = 0x42d594u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_42d598:
    // 0x42d598: 0xe7a20174  swc1        $f2, 0x174($sp)
    ctx->pc = 0x42d598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_42d59c:
    // 0x42d59c: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x42d59cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_42d5a0:
    // 0x42d5a0: 0xc0a7a88  jal         func_29EA20
label_42d5a4:
    if (ctx->pc == 0x42D5A4u) {
        ctx->pc = 0x42D5A4u;
            // 0x42d5a4: 0xe7a00180  swc1        $f0, 0x180($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->pc = 0x42D5A8u;
        goto label_42d5a8;
    }
    ctx->pc = 0x42D5A0u;
    SET_GPR_U32(ctx, 31, 0x42D5A8u);
    ctx->pc = 0x42D5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D5A0u;
            // 0x42d5a4: 0xe7a00180  swc1        $f0, 0x180($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D5A8u; }
        if (ctx->pc != 0x42D5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D5A8u; }
        if (ctx->pc != 0x42D5A8u) { return; }
    }
    ctx->pc = 0x42D5A8u;
label_42d5a8:
    // 0x42d5a8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x42d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_42d5ac:
    // 0x42d5ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x42d5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42d5b0:
    // 0x42d5b0: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_42d5b4:
    if (ctx->pc == 0x42D5B4u) {
        ctx->pc = 0x42D5B4u;
            // 0x42d5b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42D5B8u;
        goto label_42d5b8;
    }
    ctx->pc = 0x42D5B0u;
    {
        const bool branch_taken_0x42d5b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D5B0u;
            // 0x42d5b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d5b0) {
            ctx->pc = 0x42D600u;
            goto label_42d600;
        }
    }
    ctx->pc = 0x42D5B8u;
label_42d5b8:
    // 0x42d5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42d5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42d5bc:
    // 0x42d5bc: 0xc088ef4  jal         func_223BD0
label_42d5c0:
    if (ctx->pc == 0x42D5C0u) {
        ctx->pc = 0x42D5C0u;
            // 0x42d5c0: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x42D5C4u;
        goto label_42d5c4;
    }
    ctx->pc = 0x42D5BCu;
    SET_GPR_U32(ctx, 31, 0x42D5C4u);
    ctx->pc = 0x42D5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D5BCu;
            // 0x42d5c0: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D5C4u; }
        if (ctx->pc != 0x42D5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D5C4u; }
        if (ctx->pc != 0x42D5C4u) { return; }
    }
    ctx->pc = 0x42D5C4u;
label_42d5c4:
    // 0x42d5c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42d5c8:
    // 0x42d5c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42d5cc:
    // 0x42d5cc: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x42d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_42d5d0:
    // 0x42d5d0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x42d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_42d5d4:
    // 0x42d5d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x42d5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_42d5d8:
    // 0x42d5d8: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x42d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_42d5dc:
    // 0x42d5dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42d5e0:
    // 0x42d5e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_42d5e4:
    // 0x42d5e4: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x42d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_42d5e8:
    // 0x42d5e8: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x42d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_42d5ec:
    // 0x42d5ec: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x42d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_42d5f0:
    // 0x42d5f0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42d5f4:
    // 0x42d5f4: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x42d5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_42d5f8:
    // 0x42d5f8: 0xc088b38  jal         func_222CE0
label_42d5fc:
    if (ctx->pc == 0x42D5FCu) {
        ctx->pc = 0x42D5FCu;
            // 0x42d5fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D600u;
        goto label_42d600;
    }
    ctx->pc = 0x42D5F8u;
    SET_GPR_U32(ctx, 31, 0x42D600u);
    ctx->pc = 0x42D5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D5F8u;
            // 0x42d5fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D600u; }
        if (ctx->pc != 0x42D600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D600u; }
        if (ctx->pc != 0x42D600u) { return; }
    }
    ctx->pc = 0x42D600u;
label_42d600:
    // 0x42d600: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x42d600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_42d604:
    // 0x42d604: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42d604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42d608:
    // 0x42d608: 0xc08c164  jal         func_230590
label_42d60c:
    if (ctx->pc == 0x42D60Cu) {
        ctx->pc = 0x42D60Cu;
            // 0x42d60c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42D610u;
        goto label_42d610;
    }
    ctx->pc = 0x42D608u;
    SET_GPR_U32(ctx, 31, 0x42D610u);
    ctx->pc = 0x42D60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D608u;
            // 0x42d60c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D610u; }
        if (ctx->pc != 0x42D610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D610u; }
        if (ctx->pc != 0x42D610u) { return; }
    }
    ctx->pc = 0x42D610u;
label_42d610:
    // 0x42d610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42d610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42d614:
    // 0x42d614: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x42d614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_42d618:
    // 0x42d618: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42d618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42d61c:
    // 0x42d61c: 0xc08914c  jal         func_224530
label_42d620:
    if (ctx->pc == 0x42D620u) {
        ctx->pc = 0x42D620u;
            // 0x42d620: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D624u;
        goto label_42d624;
    }
    ctx->pc = 0x42D61Cu;
    SET_GPR_U32(ctx, 31, 0x42D624u);
    ctx->pc = 0x42D620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D61Cu;
            // 0x42d620: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D624u; }
        if (ctx->pc != 0x42D624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D624u; }
        if (ctx->pc != 0x42D624u) { return; }
    }
    ctx->pc = 0x42D624u;
label_42d624:
    // 0x42d624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42d624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42d628:
    // 0x42d628: 0xc0892c0  jal         func_224B00
label_42d62c:
    if (ctx->pc == 0x42D62Cu) {
        ctx->pc = 0x42D62Cu;
            // 0x42d62c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x42D630u;
        goto label_42d630;
    }
    ctx->pc = 0x42D628u;
    SET_GPR_U32(ctx, 31, 0x42D630u);
    ctx->pc = 0x42D62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D628u;
            // 0x42d62c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B00u;
    if (runtime->hasFunction(0x224B00u)) {
        auto targetFn = runtime->lookupFunction(0x224B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D630u; }
        if (ctx->pc != 0x42D630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B00_0x224b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D630u; }
        if (ctx->pc != 0x42D630u) { return; }
    }
    ctx->pc = 0x42D630u;
label_42d630:
    // 0x42d630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42d630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42d634:
    // 0x42d634: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x42d634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_42d638:
    // 0x42d638: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x42d638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_42d63c:
    // 0x42d63c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x42d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_42d640:
    // 0x42d640: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x42d640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_42d644:
    // 0x42d644: 0xc0891d8  jal         func_224760
label_42d648:
    if (ctx->pc == 0x42D648u) {
        ctx->pc = 0x42D648u;
            // 0x42d648: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x42D64Cu;
        goto label_42d64c;
    }
    ctx->pc = 0x42D644u;
    SET_GPR_U32(ctx, 31, 0x42D64Cu);
    ctx->pc = 0x42D648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D644u;
            // 0x42d648: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D64Cu; }
        if (ctx->pc != 0x42D64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D64Cu; }
        if (ctx->pc != 0x42D64Cu) { return; }
    }
    ctx->pc = 0x42D64Cu;
label_42d64c:
    // 0x42d64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42d650:
    // 0x42d650: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x42d650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_42d654:
    // 0x42d654: 0xae43008c  sw          $v1, 0x8C($s2)
    ctx->pc = 0x42d654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
label_42d658:
    // 0x42d658: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x42d658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_42d65c:
    // 0x42d65c: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x42d65cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
label_42d660:
    // 0x42d660: 0x2403f9ff  addiu       $v1, $zero, -0x601
    ctx->pc = 0x42d660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_42d664:
    // 0x42d664: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x42d664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
label_42d668:
    // 0x42d668: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x42d668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_42d66c:
    // 0x42d66c: 0xae440080  sw          $a0, 0x80($s2)
    ctx->pc = 0x42d66cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 4));
label_42d670:
    // 0x42d670: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42d670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42d674:
    // 0x42d674: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x42d674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_42d678:
    // 0x42d678: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x42d678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_42d67c:
    // 0x42d67c: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x42d67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
label_42d680:
    // 0x42d680: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x42d680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
label_42d684:
    // 0x42d684: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x42d684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_42d688:
    // 0x42d688: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x42d688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_42d68c:
    // 0x42d68c: 0xc0a7a88  jal         func_29EA20
label_42d690:
    if (ctx->pc == 0x42D690u) {
        ctx->pc = 0x42D690u;
            // 0x42d690: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x42D694u;
        goto label_42d694;
    }
    ctx->pc = 0x42D68Cu;
    SET_GPR_U32(ctx, 31, 0x42D694u);
    ctx->pc = 0x42D690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D68Cu;
            // 0x42d690: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D694u; }
        if (ctx->pc != 0x42D694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D694u; }
        if (ctx->pc != 0x42D694u) { return; }
    }
    ctx->pc = 0x42D694u;
label_42d694:
    // 0x42d694: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x42d694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_42d698:
    // 0x42d698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42d698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42d69c:
    // 0x42d69c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_42d6a0:
    if (ctx->pc == 0x42D6A0u) {
        ctx->pc = 0x42D6A0u;
            // 0x42d6a0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42D6A4u;
        goto label_42d6a4;
    }
    ctx->pc = 0x42D69Cu;
    {
        const bool branch_taken_0x42d69c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D69Cu;
            // 0x42d6a0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d69c) {
            ctx->pc = 0x42D6C0u;
            goto label_42d6c0;
        }
    }
    ctx->pc = 0x42D6A4u;
label_42d6a4:
    // 0x42d6a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42d6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42d6a8:
    // 0x42d6a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42d6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42d6ac:
    // 0x42d6ac: 0xc0869d0  jal         func_21A740
label_42d6b0:
    if (ctx->pc == 0x42D6B0u) {
        ctx->pc = 0x42D6B0u;
            // 0x42d6b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D6B4u;
        goto label_42d6b4;
    }
    ctx->pc = 0x42D6ACu;
    SET_GPR_U32(ctx, 31, 0x42D6B4u);
    ctx->pc = 0x42D6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D6ACu;
            // 0x42d6b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D6B4u; }
        if (ctx->pc != 0x42D6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D6B4u; }
        if (ctx->pc != 0x42D6B4u) { return; }
    }
    ctx->pc = 0x42D6B4u;
label_42d6b4:
    // 0x42d6b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42d6b8:
    // 0x42d6b8: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x42d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_42d6bc:
    // 0x42d6bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_42d6c0:
    // 0x42d6c0: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x42d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_42d6c4:
    // 0x42d6c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42d6c8:
    // 0x42d6c8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42d6cc:
    // 0x42d6cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42d6d0:
    // 0x42d6d0: 0xc08c650  jal         func_231940
label_42d6d4:
    if (ctx->pc == 0x42D6D4u) {
        ctx->pc = 0x42D6D4u;
            // 0x42d6d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D6D8u;
        goto label_42d6d8;
    }
    ctx->pc = 0x42D6D0u;
    SET_GPR_U32(ctx, 31, 0x42D6D8u);
    ctx->pc = 0x42D6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D6D0u;
            // 0x42d6d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D6D8u; }
        if (ctx->pc != 0x42D6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D6D8u; }
        if (ctx->pc != 0x42D6D8u) { return; }
    }
    ctx->pc = 0x42D6D8u;
label_42d6d8:
    // 0x42d6d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x42d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42d6dc:
    // 0x42d6dc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x42d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_42d6e0:
    // 0x42d6e0: 0xa2420064  sb          $v0, 0x64($s2)
    ctx->pc = 0x42d6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 2));
label_42d6e4:
    // 0x42d6e4: 0xa2400065  sb          $zero, 0x65($s2)
    ctx->pc = 0x42d6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 0));
label_42d6e8:
    // 0x42d6e8: 0xa2420066  sb          $v0, 0x66($s2)
    ctx->pc = 0x42d6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
label_42d6ec:
    // 0x42d6ec: 0xa2400067  sb          $zero, 0x67($s2)
    ctx->pc = 0x42d6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 0));
label_42d6f0:
    // 0x42d6f0: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x42d6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_42d6f4:
    // 0x42d6f4: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x42d6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_42d6f8:
    // 0x42d6f8: 0xa242006a  sb          $v0, 0x6A($s2)
    ctx->pc = 0x42d6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 2));
label_42d6fc:
    // 0x42d6fc: 0xc040180  jal         func_100600
label_42d700:
    if (ctx->pc == 0x42D700u) {
        ctx->pc = 0x42D700u;
            // 0x42d700: 0xa240006b  sb          $zero, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x42D704u;
        goto label_42d704;
    }
    ctx->pc = 0x42D6FCu;
    SET_GPR_U32(ctx, 31, 0x42D704u);
    ctx->pc = 0x42D700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D6FCu;
            // 0x42d700: 0xa240006b  sb          $zero, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D704u; }
        if (ctx->pc != 0x42D704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D704u; }
        if (ctx->pc != 0x42D704u) { return; }
    }
    ctx->pc = 0x42D704u;
label_42d704:
    // 0x42d704: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42d704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42d708:
    // 0x42d708: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_42d70c:
    if (ctx->pc == 0x42D70Cu) {
        ctx->pc = 0x42D70Cu;
            // 0x42d70c: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x42D710u;
        goto label_42d710;
    }
    ctx->pc = 0x42D708u;
    {
        const bool branch_taken_0x42d708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42d708) {
            ctx->pc = 0x42D70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42D708u;
            // 0x42d70c: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42D748u;
            goto label_42d748;
        }
    }
    ctx->pc = 0x42D710u;
label_42d710:
    // 0x42d710: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42d710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42d714:
    // 0x42d714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42d718:
    // 0x42d718: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x42d718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_42d71c:
    // 0x42d71c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x42d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_42d720:
    // 0x42d720: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42d720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42d724:
    // 0x42d724: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x42d724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_42d728:
    // 0x42d728: 0xc040138  jal         func_1004E0
label_42d72c:
    if (ctx->pc == 0x42D72Cu) {
        ctx->pc = 0x42D72Cu;
            // 0x42d72c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x42D730u;
        goto label_42d730;
    }
    ctx->pc = 0x42D728u;
    SET_GPR_U32(ctx, 31, 0x42D730u);
    ctx->pc = 0x42D72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D728u;
            // 0x42d72c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D730u; }
        if (ctx->pc != 0x42D730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D730u; }
        if (ctx->pc != 0x42D730u) { return; }
    }
    ctx->pc = 0x42D730u;
label_42d730:
    // 0x42d730: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x42d730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_42d734:
    // 0x42d734: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x42d734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_42d738:
    // 0x42d738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42d738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42d73c:
    // 0x42d73c: 0xc04a576  jal         func_1295D8
label_42d740:
    if (ctx->pc == 0x42D740u) {
        ctx->pc = 0x42D740u;
            // 0x42d740: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x42D744u;
        goto label_42d744;
    }
    ctx->pc = 0x42D73Cu;
    SET_GPR_U32(ctx, 31, 0x42D744u);
    ctx->pc = 0x42D740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D73Cu;
            // 0x42d740: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D744u; }
        if (ctx->pc != 0x42D744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D744u; }
        if (ctx->pc != 0x42D744u) { return; }
    }
    ctx->pc = 0x42D744u;
label_42d744:
    // 0x42d744: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x42d744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_42d748:
    // 0x42d748: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x42d748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_42d74c:
    // 0x42d74c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x42d74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_42d750:
    // 0x42d750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42d750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42d754:
    // 0x42d754: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42d754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42d758:
    // 0x42d758: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42d758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42d75c:
    // 0x42d75c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x42d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_42d760:
    // 0x42d760: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42d760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42d764:
    // 0x42d764: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x42d764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_42d768:
    // 0x42d768: 0x34461aae  ori         $a2, $v0, 0x1AAE
    ctx->pc = 0x42d768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6830);
label_42d76c:
    // 0x42d76c: 0xc122cd8  jal         func_48B360
label_42d770:
    if (ctx->pc == 0x42D770u) {
        ctx->pc = 0x42D770u;
            // 0x42d770: 0xae5000e0  sw          $s0, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 16));
        ctx->pc = 0x42D774u;
        goto label_42d774;
    }
    ctx->pc = 0x42D76Cu;
    SET_GPR_U32(ctx, 31, 0x42D774u);
    ctx->pc = 0x42D770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D76Cu;
            // 0x42d770: 0xae5000e0  sw          $s0, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D774u; }
        if (ctx->pc != 0x42D774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D774u; }
        if (ctx->pc != 0x42D774u) { return; }
    }
    ctx->pc = 0x42D774u;
label_42d774:
    // 0x42d774: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x42d774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_42d778:
    // 0x42d778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42d778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42d77c:
    // 0x42d77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42d77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42d780:
    // 0x42d780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42d780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42d784:
    // 0x42d784: 0x3e00008  jr          $ra
label_42d788:
    if (ctx->pc == 0x42D788u) {
        ctx->pc = 0x42D788u;
            // 0x42d788: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x42D78Cu;
        goto label_42d78c;
    }
    ctx->pc = 0x42D784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D784u;
            // 0x42d788: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42D78Cu;
label_42d78c:
    // 0x42d78c: 0x0  nop
    ctx->pc = 0x42d78cu;
    // NOP
label_42d790:
    // 0x42d790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42d790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42d794:
    // 0x42d794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42d794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42d798:
    // 0x42d798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42d798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42d79c:
    // 0x42d79c: 0xc0aeebc  jal         func_2BBAF0
label_42d7a0:
    if (ctx->pc == 0x42D7A0u) {
        ctx->pc = 0x42D7A0u;
            // 0x42d7a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D7A4u;
        goto label_42d7a4;
    }
    ctx->pc = 0x42D79Cu;
    SET_GPR_U32(ctx, 31, 0x42D7A4u);
    ctx->pc = 0x42D7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D79Cu;
            // 0x42d7a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D7A4u; }
        if (ctx->pc != 0x42D7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D7A4u; }
        if (ctx->pc != 0x42D7A4u) { return; }
    }
    ctx->pc = 0x42D7A4u;
label_42d7a4:
    // 0x42d7a4: 0xc0aeeb4  jal         func_2BBAD0
label_42d7a8:
    if (ctx->pc == 0x42D7A8u) {
        ctx->pc = 0x42D7A8u;
            // 0x42d7a8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x42D7ACu;
        goto label_42d7ac;
    }
    ctx->pc = 0x42D7A4u;
    SET_GPR_U32(ctx, 31, 0x42D7ACu);
    ctx->pc = 0x42D7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D7A4u;
            // 0x42d7a8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D7ACu; }
        if (ctx->pc != 0x42D7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D7ACu; }
        if (ctx->pc != 0x42D7ACu) { return; }
    }
    ctx->pc = 0x42D7ACu;
label_42d7ac:
    // 0x42d7ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42d7b0:
    // 0x42d7b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42d7b4:
    // 0x42d7b4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x42d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_42d7b8:
    // 0x42d7b8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x42d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_42d7bc:
    // 0x42d7bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42d7c0:
    // 0x42d7c0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x42d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_42d7c4:
    // 0x42d7c4: 0xc0aeea4  jal         func_2BBA90
label_42d7c8:
    if (ctx->pc == 0x42D7C8u) {
        ctx->pc = 0x42D7C8u;
            // 0x42d7c8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x42D7CCu;
        goto label_42d7cc;
    }
    ctx->pc = 0x42D7C4u;
    SET_GPR_U32(ctx, 31, 0x42D7CCu);
    ctx->pc = 0x42D7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D7C4u;
            // 0x42d7c8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D7CCu; }
        if (ctx->pc != 0x42D7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D7CCu; }
        if (ctx->pc != 0x42D7CCu) { return; }
    }
    ctx->pc = 0x42D7CCu;
label_42d7cc:
    // 0x42d7cc: 0xc0aee8c  jal         func_2BBA30
label_42d7d0:
    if (ctx->pc == 0x42D7D0u) {
        ctx->pc = 0x42D7D0u;
            // 0x42d7d0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x42D7D4u;
        goto label_42d7d4;
    }
    ctx->pc = 0x42D7CCu;
    SET_GPR_U32(ctx, 31, 0x42D7D4u);
    ctx->pc = 0x42D7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D7CCu;
            // 0x42d7d0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D7D4u; }
        if (ctx->pc != 0x42D7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D7D4u; }
        if (ctx->pc != 0x42D7D4u) { return; }
    }
    ctx->pc = 0x42D7D4u;
label_42d7d4:
    // 0x42d7d4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x42d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_42d7d8:
    // 0x42d7d8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x42d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_42d7dc:
    // 0x42d7dc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x42d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_42d7e0:
    // 0x42d7e0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x42d7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_42d7e4:
    // 0x42d7e4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x42d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_42d7e8:
    // 0x42d7e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42d7ec:
    // 0x42d7ec: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x42d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_42d7f0:
    // 0x42d7f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42d7f4:
    // 0x42d7f4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x42d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_42d7f8:
    // 0x42d7f8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x42d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_42d7fc:
    // 0x42d7fc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x42d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_42d800:
    // 0x42d800: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x42d800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_42d804:
    // 0x42d804: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x42d804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_42d808:
    // 0x42d808: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x42d808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_42d80c:
    // 0x42d80c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x42d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_42d810:
    // 0x42d810: 0xc0775b8  jal         func_1DD6E0
label_42d814:
    if (ctx->pc == 0x42D814u) {
        ctx->pc = 0x42D814u;
            // 0x42d814: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x42D818u;
        goto label_42d818;
    }
    ctx->pc = 0x42D810u;
    SET_GPR_U32(ctx, 31, 0x42D818u);
    ctx->pc = 0x42D814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D810u;
            // 0x42d814: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D818u; }
        if (ctx->pc != 0x42D818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D818u; }
        if (ctx->pc != 0x42D818u) { return; }
    }
    ctx->pc = 0x42D818u;
label_42d818:
    // 0x42d818: 0xc077314  jal         func_1DCC50
label_42d81c:
    if (ctx->pc == 0x42D81Cu) {
        ctx->pc = 0x42D81Cu;
            // 0x42d81c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x42D820u;
        goto label_42d820;
    }
    ctx->pc = 0x42D818u;
    SET_GPR_U32(ctx, 31, 0x42D820u);
    ctx->pc = 0x42D81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D818u;
            // 0x42d81c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D820u; }
        if (ctx->pc != 0x42D820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D820u; }
        if (ctx->pc != 0x42D820u) { return; }
    }
    ctx->pc = 0x42D820u;
label_42d820:
    // 0x42d820: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x42d820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_42d824:
    // 0x42d824: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x42d824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_42d828:
    // 0x42d828: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x42d828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_42d82c:
    // 0x42d82c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x42d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42d830:
    // 0x42d830: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x42d830u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_42d834:
    // 0x42d834: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42d834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42d838:
    // 0x42d838: 0x2463c4d0  addiu       $v1, $v1, -0x3B30
    ctx->pc = 0x42d838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952144));
label_42d83c:
    // 0x42d83c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x42d83cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_42d840:
    // 0x42d840: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42d840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42d844:
    // 0x42d844: 0x2442c510  addiu       $v0, $v0, -0x3AF0
    ctx->pc = 0x42d844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952208));
label_42d848:
    // 0x42d848: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x42d848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_42d84c:
    // 0x42d84c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42d850:
    // 0x42d850: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x42d850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_42d854:
    // 0x42d854: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x42d854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_42d858:
    // 0x42d858: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x42d858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42d85c:
    // 0x42d85c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x42d85cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_42d860:
    // 0x42d860: 0x320f809  jalr        $t9
label_42d864:
    if (ctx->pc == 0x42D864u) {
        ctx->pc = 0x42D864u;
            // 0x42d864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D868u;
        goto label_42d868;
    }
    ctx->pc = 0x42D860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42D868u);
        ctx->pc = 0x42D864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D860u;
            // 0x42d864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42D868u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42D868u; }
            if (ctx->pc != 0x42D868u) { return; }
        }
        }
    }
    ctx->pc = 0x42D868u;
label_42d868:
    // 0x42d868: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42d868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42d86c:
    // 0x42d86c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42d86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42d870:
    // 0x42d870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42d870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42d874:
    // 0x42d874: 0x3e00008  jr          $ra
label_42d878:
    if (ctx->pc == 0x42D878u) {
        ctx->pc = 0x42D878u;
            // 0x42d878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42D87Cu;
        goto label_42d87c;
    }
    ctx->pc = 0x42D874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D874u;
            // 0x42d878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42D87Cu;
label_42d87c:
    // 0x42d87c: 0x0  nop
    ctx->pc = 0x42d87cu;
    // NOP
label_42d880:
    // 0x42d880: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x42d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d884:
    // 0x42d884: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x42d884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_42d888:
    // 0x42d888: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x42d888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42d88c:
    // 0x42d88c: 0x0  nop
    ctx->pc = 0x42d88cu;
    // NOP
label_42d890:
    // 0x42d890: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x42d890u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_42d894:
    // 0x42d894: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x42d894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_42d898:
    // 0x42d898: 0x0  nop
    ctx->pc = 0x42d898u;
    // NOP
label_42d89c:
    // 0x42d89c: 0xac8300d4  sw          $v1, 0xD4($a0)
    ctx->pc = 0x42d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
label_42d8a0:
    // 0x42d8a0: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x42d8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42d8a4:
    // 0x42d8a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x42d8a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42d8a8:
    // 0x42d8a8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_42d8ac:
    if (ctx->pc == 0x42D8ACu) {
        ctx->pc = 0x42D8ACu;
            // 0x42d8ac: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x42D8B0u;
        goto label_42d8b0;
    }
    ctx->pc = 0x42D8A8u;
    {
        const bool branch_taken_0x42d8a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x42d8a8) {
            ctx->pc = 0x42D8ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42D8A8u;
            // 0x42d8ac: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x42D8C0u;
            goto label_42d8c0;
        }
    }
    ctx->pc = 0x42D8B0u;
label_42d8b0:
    // 0x42d8b0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x42d8b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_42d8b4:
    // 0x42d8b4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x42d8b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_42d8b8:
    // 0x42d8b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_42d8bc:
    if (ctx->pc == 0x42D8BCu) {
        ctx->pc = 0x42D8BCu;
            // 0x42d8bc: 0xac8500d8  sw          $a1, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 5));
        ctx->pc = 0x42D8C0u;
        goto label_42d8c0;
    }
    ctx->pc = 0x42D8B8u;
    {
        const bool branch_taken_0x42d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D8B8u;
            // 0x42d8bc: 0xac8500d8  sw          $a1, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d8b8) {
            ctx->pc = 0x42D8D8u;
            goto label_42d8d8;
        }
    }
    ctx->pc = 0x42D8C0u;
label_42d8c0:
    // 0x42d8c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x42d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_42d8c4:
    // 0x42d8c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x42d8c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_42d8c8:
    // 0x42d8c8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x42d8c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_42d8cc:
    // 0x42d8cc: 0x0  nop
    ctx->pc = 0x42d8ccu;
    // NOP
label_42d8d0:
    // 0x42d8d0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x42d8d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_42d8d4:
    // 0x42d8d4: 0xac8500d8  sw          $a1, 0xD8($a0)
    ctx->pc = 0x42d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 5));
label_42d8d8:
    // 0x42d8d8: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x42d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
label_42d8dc:
    // 0x42d8dc: 0x3e00008  jr          $ra
label_42d8e0:
    if (ctx->pc == 0x42D8E0u) {
        ctx->pc = 0x42D8E0u;
            // 0x42d8e0: 0xac8000dc  sw          $zero, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x42D8E4u;
        goto label_42d8e4;
    }
    ctx->pc = 0x42D8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D8DCu;
            // 0x42d8e0: 0xac8000dc  sw          $zero, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42D8E4u;
label_42d8e4:
    // 0x42d8e4: 0x0  nop
    ctx->pc = 0x42d8e4u;
    // NOP
label_42d8e8:
    // 0x42d8e8: 0x0  nop
    ctx->pc = 0x42d8e8u;
    // NOP
label_42d8ec:
    // 0x42d8ec: 0x0  nop
    ctx->pc = 0x42d8ecu;
    // NOP
label_42d8f0:
    // 0x42d8f0: 0x3e00008  jr          $ra
label_42d8f4:
    if (ctx->pc == 0x42D8F4u) {
        ctx->pc = 0x42D8F4u;
            // 0x42d8f4: 0x24026d74  addiu       $v0, $zero, 0x6D74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28020));
        ctx->pc = 0x42D8F8u;
        goto label_42d8f8;
    }
    ctx->pc = 0x42D8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D8F0u;
            // 0x42d8f4: 0x24026d74  addiu       $v0, $zero, 0x6D74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42D8F8u;
label_42d8f8:
    // 0x42d8f8: 0x0  nop
    ctx->pc = 0x42d8f8u;
    // NOP
label_42d8fc:
    // 0x42d8fc: 0x0  nop
    ctx->pc = 0x42d8fcu;
    // NOP
label_42d900:
    // 0x42d900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x42d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_42d904:
    // 0x42d904: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x42d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_42d908:
    // 0x42d908: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x42d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_42d90c:
    // 0x42d90c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42d910:
    // 0x42d910: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x42d910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42d914:
    // 0x42d914: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42d918:
    // 0x42d918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42d91c:
    // 0x42d91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42d91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42d920:
    // 0x42d920: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x42d920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_42d924:
    // 0x42d924: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_42d928:
    if (ctx->pc == 0x42D928u) {
        ctx->pc = 0x42D928u;
            // 0x42d928: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42D92Cu;
        goto label_42d92c;
    }
    ctx->pc = 0x42D924u;
    {
        const bool branch_taken_0x42d924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D924u;
            // 0x42d928: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d924) {
            ctx->pc = 0x42D968u;
            goto label_42d968;
        }
    }
    ctx->pc = 0x42D92Cu;
label_42d92c:
    // 0x42d92c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42d92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42d930:
    // 0x42d930: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42d930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42d934:
    // 0x42d934: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x42d934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42d938:
    // 0x42d938: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x42d938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_42d93c:
    // 0x42d93c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x42d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_42d940:
    // 0x42d940: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x42d940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42d944:
    // 0x42d944: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42d944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42d948:
    // 0x42d948: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x42d948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_42d94c:
    // 0x42d94c: 0x320f809  jalr        $t9
label_42d950:
    if (ctx->pc == 0x42D950u) {
        ctx->pc = 0x42D954u;
        goto label_42d954;
    }
    ctx->pc = 0x42D94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42D954u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42D954u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42D954u; }
            if (ctx->pc != 0x42D954u) { return; }
        }
        }
    }
    ctx->pc = 0x42D954u;
label_42d954:
    // 0x42d954: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x42d954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_42d958:
    // 0x42d958: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x42d958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_42d95c:
    // 0x42d95c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x42d95cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_42d960:
    // 0x42d960: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_42d964:
    if (ctx->pc == 0x42D964u) {
        ctx->pc = 0x42D964u;
            // 0x42d964: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x42D968u;
        goto label_42d968;
    }
    ctx->pc = 0x42D960u;
    {
        const bool branch_taken_0x42d960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42D964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D960u;
            // 0x42d964: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d960) {
            ctx->pc = 0x42D938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42d938;
        }
    }
    ctx->pc = 0x42D968u;
label_42d968:
    // 0x42d968: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x42d968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42d96c:
    // 0x42d96c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x42d96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_42d970:
    // 0x42d970: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42d970u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42d974:
    // 0x42d974: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42d974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42d978:
    // 0x42d978: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42d978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42d97c:
    // 0x42d97c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42d97cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42d980:
    // 0x42d980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42d980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42d984:
    // 0x42d984: 0x3e00008  jr          $ra
label_42d988:
    if (ctx->pc == 0x42D988u) {
        ctx->pc = 0x42D988u;
            // 0x42d988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x42D98Cu;
        goto label_42d98c;
    }
    ctx->pc = 0x42D984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42D984u;
            // 0x42d988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42D98Cu;
label_42d98c:
    // 0x42d98c: 0x0  nop
    ctx->pc = 0x42d98cu;
    // NOP
label_42d990:
    // 0x42d990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42d990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42d994:
    // 0x42d994: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42d994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42d998:
    // 0x42d998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42d99c:
    // 0x42d99c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x42d99cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_42d9a0:
    // 0x42d9a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42d9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42d9a4:
    // 0x42d9a4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x42d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_42d9a8:
    // 0x42d9a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x42d9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42d9ac:
    // 0x42d9ac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x42d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_42d9b0:
    // 0x42d9b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42d9b4:
    // 0x42d9b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42d9b8:
    // 0x42d9b8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x42d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_42d9bc:
    // 0x42d9bc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x42d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42d9c0:
    // 0x42d9c0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x42d9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_42d9c4:
    // 0x42d9c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x42d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_42d9c8:
    // 0x42d9c8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x42d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_42d9cc:
    // 0x42d9cc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x42d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_42d9d0:
    // 0x42d9d0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x42d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_42d9d4:
    // 0x42d9d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x42d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_42d9d8:
    // 0x42d9d8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x42d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_42d9dc:
    // 0x42d9dc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x42d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_42d9e0:
    // 0x42d9e0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x42d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_42d9e4:
    // 0x42d9e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42d9e8:
    // 0x42d9e8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x42d9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42d9ec:
    // 0x42d9ec: 0xc0a997c  jal         func_2A65F0
label_42d9f0:
    if (ctx->pc == 0x42D9F0u) {
        ctx->pc = 0x42D9F0u;
            // 0x42d9f0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x42D9F4u;
        goto label_42d9f4;
    }
    ctx->pc = 0x42D9ECu;
    SET_GPR_U32(ctx, 31, 0x42D9F4u);
    ctx->pc = 0x42D9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D9ECu;
            // 0x42d9f0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D9F4u; }
        if (ctx->pc != 0x42D9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42D9F4u; }
        if (ctx->pc != 0x42D9F4u) { return; }
    }
    ctx->pc = 0x42D9F4u;
label_42d9f4:
    // 0x42d9f4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x42d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_42d9f8:
    // 0x42d9f8: 0xc0d879c  jal         func_361E70
label_42d9fc:
    if (ctx->pc == 0x42D9FCu) {
        ctx->pc = 0x42D9FCu;
            // 0x42d9fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DA00u;
        goto label_42da00;
    }
    ctx->pc = 0x42D9F8u;
    SET_GPR_U32(ctx, 31, 0x42DA00u);
    ctx->pc = 0x42D9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42D9F8u;
            // 0x42d9fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DA00u; }
        if (ctx->pc != 0x42DA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DA00u; }
        if (ctx->pc != 0x42DA00u) { return; }
    }
    ctx->pc = 0x42DA00u;
label_42da00:
    // 0x42da00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42da00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42da04:
    // 0x42da04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42da04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42da08:
    // 0x42da08: 0x3e00008  jr          $ra
label_42da0c:
    if (ctx->pc == 0x42DA0Cu) {
        ctx->pc = 0x42DA0Cu;
            // 0x42da0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42DA10u;
        goto label_42da10;
    }
    ctx->pc = 0x42DA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DA08u;
            // 0x42da0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42DA10u;
label_42da10:
    // 0x42da10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42da10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42da14:
    // 0x42da14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42da14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42da18:
    // 0x42da18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42da18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42da1c:
    // 0x42da1c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x42da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_42da20:
    // 0x42da20: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_42da24:
    if (ctx->pc == 0x42DA24u) {
        ctx->pc = 0x42DA24u;
            // 0x42da24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DA28u;
        goto label_42da28;
    }
    ctx->pc = 0x42DA20u;
    {
        const bool branch_taken_0x42da20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DA20u;
            // 0x42da24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42da20) {
            ctx->pc = 0x42DB40u;
            goto label_42db40;
        }
    }
    ctx->pc = 0x42DA28u;
label_42da28:
    // 0x42da28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x42da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42da2c:
    // 0x42da2c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x42da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_42da30:
    // 0x42da30: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x42da30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_42da34:
    // 0x42da34: 0xc075128  jal         func_1D44A0
label_42da38:
    if (ctx->pc == 0x42DA38u) {
        ctx->pc = 0x42DA38u;
            // 0x42da38: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x42DA3Cu;
        goto label_42da3c;
    }
    ctx->pc = 0x42DA34u;
    SET_GPR_U32(ctx, 31, 0x42DA3Cu);
    ctx->pc = 0x42DA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DA34u;
            // 0x42da38: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DA3Cu; }
        if (ctx->pc != 0x42DA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DA3Cu; }
        if (ctx->pc != 0x42DA3Cu) { return; }
    }
    ctx->pc = 0x42DA3Cu;
label_42da3c:
    // 0x42da3c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x42da3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_42da40:
    // 0x42da40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42da40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42da44:
    // 0x42da44: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x42da44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_42da48:
    // 0x42da48: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x42da48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_42da4c:
    // 0x42da4c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x42da4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_42da50:
    // 0x42da50: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_42da54:
    if (ctx->pc == 0x42DA54u) {
        ctx->pc = 0x42DA54u;
            // 0x42da54: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x42DA58u;
        goto label_42da58;
    }
    ctx->pc = 0x42DA50u;
    {
        const bool branch_taken_0x42da50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DA50u;
            // 0x42da54: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42da50) {
            ctx->pc = 0x42DA60u;
            goto label_42da60;
        }
    }
    ctx->pc = 0x42DA58u;
label_42da58:
    // 0x42da58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42da58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42da5c:
    // 0x42da5c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x42da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_42da60:
    // 0x42da60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x42da60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42da64:
    // 0x42da64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42da64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42da68:
    // 0x42da68: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x42da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_42da6c:
    // 0x42da6c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x42da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_42da70:
    // 0x42da70: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x42da70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_42da74:
    // 0x42da74: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_42da78:
    if (ctx->pc == 0x42DA78u) {
        ctx->pc = 0x42DA78u;
            // 0x42da78: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x42DA7Cu;
        goto label_42da7c;
    }
    ctx->pc = 0x42DA74u;
    {
        const bool branch_taken_0x42da74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42da74) {
            ctx->pc = 0x42DA78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42DA74u;
            // 0x42da78: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42DA88u;
            goto label_42da88;
        }
    }
    ctx->pc = 0x42DA7Cu;
label_42da7c:
    // 0x42da7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42da80:
    // 0x42da80: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x42da80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_42da84:
    // 0x42da84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x42da84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42da88:
    // 0x42da88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42da88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42da8c:
    // 0x42da8c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x42da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_42da90:
    // 0x42da90: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x42da90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_42da94:
    // 0x42da94: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x42da94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_42da98:
    // 0x42da98: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_42da9c:
    if (ctx->pc == 0x42DA9Cu) {
        ctx->pc = 0x42DA9Cu;
            // 0x42da9c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x42DAA0u;
        goto label_42daa0;
    }
    ctx->pc = 0x42DA98u;
    {
        const bool branch_taken_0x42da98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42da98) {
            ctx->pc = 0x42DA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42DA98u;
            // 0x42da9c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42DAACu;
            goto label_42daac;
        }
    }
    ctx->pc = 0x42DAA0u;
label_42daa0:
    // 0x42daa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42daa4:
    // 0x42daa4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x42daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_42daa8:
    // 0x42daa8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x42daa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42daac:
    // 0x42daac: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x42daacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_42dab0:
    // 0x42dab0: 0x320f809  jalr        $t9
label_42dab4:
    if (ctx->pc == 0x42DAB4u) {
        ctx->pc = 0x42DAB4u;
            // 0x42dab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DAB8u;
        goto label_42dab8;
    }
    ctx->pc = 0x42DAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42DAB8u);
        ctx->pc = 0x42DAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DAB0u;
            // 0x42dab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42DAB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42DAB8u; }
            if (ctx->pc != 0x42DAB8u) { return; }
        }
        }
    }
    ctx->pc = 0x42DAB8u;
label_42dab8:
    // 0x42dab8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x42dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_42dabc:
    // 0x42dabc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42dac0:
    // 0x42dac0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x42dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_42dac4:
    // 0x42dac4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x42dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_42dac8:
    // 0x42dac8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x42dac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_42dacc:
    // 0x42dacc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x42daccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_42dad0:
    // 0x42dad0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_42dad4:
    if (ctx->pc == 0x42DAD4u) {
        ctx->pc = 0x42DAD4u;
            // 0x42dad4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x42DAD8u;
        goto label_42dad8;
    }
    ctx->pc = 0x42DAD0u;
    {
        const bool branch_taken_0x42dad0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42dad0) {
            ctx->pc = 0x42DAD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42DAD0u;
            // 0x42dad4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42DAE4u;
            goto label_42dae4;
        }
    }
    ctx->pc = 0x42DAD8u;
label_42dad8:
    // 0x42dad8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42dadc:
    // 0x42dadc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x42dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_42dae0:
    // 0x42dae0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x42dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_42dae4:
    // 0x42dae4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42dae8:
    // 0x42dae8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x42dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_42daec:
    // 0x42daec: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x42daecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_42daf0:
    // 0x42daf0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x42daf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_42daf4:
    // 0x42daf4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x42daf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_42daf8:
    // 0x42daf8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_42dafc:
    if (ctx->pc == 0x42DAFCu) {
        ctx->pc = 0x42DB00u;
        goto label_42db00;
    }
    ctx->pc = 0x42DAF8u;
    {
        const bool branch_taken_0x42daf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42daf8) {
            ctx->pc = 0x42DB08u;
            goto label_42db08;
        }
    }
    ctx->pc = 0x42DB00u;
label_42db00:
    // 0x42db00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42db00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42db04:
    // 0x42db04: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x42db04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_42db08:
    // 0x42db08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42db08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42db0c:
    // 0x42db0c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x42db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_42db10:
    // 0x42db10: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x42db10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_42db14:
    // 0x42db14: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_42db18:
    if (ctx->pc == 0x42DB18u) {
        ctx->pc = 0x42DB1Cu;
        goto label_42db1c;
    }
    ctx->pc = 0x42DB14u;
    {
        const bool branch_taken_0x42db14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42db14) {
            ctx->pc = 0x42DB24u;
            goto label_42db24;
        }
    }
    ctx->pc = 0x42DB1Cu;
label_42db1c:
    // 0x42db1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42db20:
    // 0x42db20: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x42db20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_42db24:
    // 0x42db24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42db24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42db28:
    // 0x42db28: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x42db28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_42db2c:
    // 0x42db2c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x42db2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_42db30:
    // 0x42db30: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_42db34:
    if (ctx->pc == 0x42DB34u) {
        ctx->pc = 0x42DB34u;
            // 0x42db34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x42DB38u;
        goto label_42db38;
    }
    ctx->pc = 0x42DB30u;
    {
        const bool branch_taken_0x42db30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42db30) {
            ctx->pc = 0x42DB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42DB30u;
            // 0x42db34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42DB44u;
            goto label_42db44;
        }
    }
    ctx->pc = 0x42DB38u;
label_42db38:
    // 0x42db38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42db38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42db3c:
    // 0x42db3c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x42db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_42db40:
    // 0x42db40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42db40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42db44:
    // 0x42db44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42db44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42db48:
    // 0x42db48: 0x3e00008  jr          $ra
label_42db4c:
    if (ctx->pc == 0x42DB4Cu) {
        ctx->pc = 0x42DB4Cu;
            // 0x42db4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42DB50u;
        goto label_42db50;
    }
    ctx->pc = 0x42DB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DB48u;
            // 0x42db4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42DB50u;
label_42db50:
    // 0x42db50: 0x810b1a0  j           func_42C680
label_42db54:
    if (ctx->pc == 0x42DB54u) {
        ctx->pc = 0x42DB54u;
            // 0x42db54: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x42DB58u;
        goto label_42db58;
    }
    ctx->pc = 0x42DB50u;
    ctx->pc = 0x42DB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DB50u;
            // 0x42db54: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42C680u;
    {
        auto targetFn = runtime->lookupFunction(0x42C680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x42DB58u;
label_42db58:
    // 0x42db58: 0x0  nop
    ctx->pc = 0x42db58u;
    // NOP
label_42db5c:
    // 0x42db5c: 0x0  nop
    ctx->pc = 0x42db5cu;
    // NOP
label_42db60:
    // 0x42db60: 0x810b2e4  j           func_42CB90
label_42db64:
    if (ctx->pc == 0x42DB64u) {
        ctx->pc = 0x42DB64u;
            // 0x42db64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x42DB68u;
        goto label_42db68;
    }
    ctx->pc = 0x42DB60u;
    ctx->pc = 0x42DB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DB60u;
            // 0x42db64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42CB90u;
    {
        auto targetFn = runtime->lookupFunction(0x42CB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x42DB68u;
label_42db68:
    // 0x42db68: 0x0  nop
    ctx->pc = 0x42db68u;
    // NOP
label_42db6c:
    // 0x42db6c: 0x0  nop
    ctx->pc = 0x42db6cu;
    // NOP
label_42db70:
    // 0x42db70: 0x810b148  j           func_42C520
label_42db74:
    if (ctx->pc == 0x42DB74u) {
        ctx->pc = 0x42DB74u;
            // 0x42db74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x42DB78u;
        goto label_42db78;
    }
    ctx->pc = 0x42DB70u;
    ctx->pc = 0x42DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DB70u;
            // 0x42db74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42C520u;
    if (runtime->hasFunction(0x42C520u)) {
        auto targetFn = runtime->lookupFunction(0x42C520u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0042C520_0x42c520(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x42DB78u;
label_42db78:
    // 0x42db78: 0x0  nop
    ctx->pc = 0x42db78u;
    // NOP
label_42db7c:
    // 0x42db7c: 0x0  nop
    ctx->pc = 0x42db7cu;
    // NOP
label_42db80:
    // 0x42db80: 0x810b110  j           func_42C440
label_42db84:
    if (ctx->pc == 0x42DB84u) {
        ctx->pc = 0x42DB84u;
            // 0x42db84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x42DB88u;
        goto label_42db88;
    }
    ctx->pc = 0x42DB80u;
    ctx->pc = 0x42DB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DB80u;
            // 0x42db84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42C440u;
    {
        auto targetFn = runtime->lookupFunction(0x42C440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x42DB88u;
label_42db88:
    // 0x42db88: 0x0  nop
    ctx->pc = 0x42db88u;
    // NOP
label_42db8c:
    // 0x42db8c: 0x0  nop
    ctx->pc = 0x42db8cu;
    // NOP
label_42db90:
    // 0x42db90: 0x3e00008  jr          $ra
label_42db94:
    if (ctx->pc == 0x42DB94u) {
        ctx->pc = 0x42DB98u;
        goto label_42db98;
    }
    ctx->pc = 0x42DB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42DB98u;
label_42db98:
    // 0x42db98: 0x0  nop
    ctx->pc = 0x42db98u;
    // NOP
label_42db9c:
    // 0x42db9c: 0x0  nop
    ctx->pc = 0x42db9cu;
    // NOP
label_42dba0:
    // 0x42dba0: 0x3e00008  jr          $ra
label_42dba4:
    if (ctx->pc == 0x42DBA4u) {
        ctx->pc = 0x42DBA8u;
        goto label_42dba8;
    }
    ctx->pc = 0x42DBA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42DBA8u;
label_42dba8:
    // 0x42dba8: 0x0  nop
    ctx->pc = 0x42dba8u;
    // NOP
label_42dbac:
    // 0x42dbac: 0x0  nop
    ctx->pc = 0x42dbacu;
    // NOP
label_42dbb0:
    // 0x42dbb0: 0x3e00008  jr          $ra
label_42dbb4:
    if (ctx->pc == 0x42DBB4u) {
        ctx->pc = 0x42DBB4u;
            // 0x42dbb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42DBB8u;
        goto label_42dbb8;
    }
    ctx->pc = 0x42DBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DBB0u;
            // 0x42dbb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42DBB8u;
label_42dbb8:
    // 0x42dbb8: 0x0  nop
    ctx->pc = 0x42dbb8u;
    // NOP
label_42dbbc:
    // 0x42dbbc: 0x0  nop
    ctx->pc = 0x42dbbcu;
    // NOP
label_42dbc0:
    // 0x42dbc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42dbc4:
    // 0x42dbc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42dbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42dbc8:
    // 0x42dbc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42dbcc:
    // 0x42dbcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42dbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42dbd0:
    // 0x42dbd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42dbd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42dbd4:
    // 0x42dbd4: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_42dbd8:
    if (ctx->pc == 0x42DBD8u) {
        ctx->pc = 0x42DBD8u;
            // 0x42dbd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DBDCu;
        goto label_42dbdc;
    }
    ctx->pc = 0x42DBD4u;
    {
        const bool branch_taken_0x42dbd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DBD4u;
            // 0x42dbd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dbd4) {
            ctx->pc = 0x42DC14u;
            goto label_42dc14;
        }
    }
    ctx->pc = 0x42DBDCu;
label_42dbdc:
    // 0x42dbdc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42dbe0:
    // 0x42dbe0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42dbe4:
    // 0x42dbe4: 0x2463c570  addiu       $v1, $v1, -0x3A90
    ctx->pc = 0x42dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952304));
label_42dbe8:
    // 0x42dbe8: 0x2442c598  addiu       $v0, $v0, -0x3A68
    ctx->pc = 0x42dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952344));
label_42dbec:
    // 0x42dbec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_42dbf0:
    // 0x42dbf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42dbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42dbf4:
    // 0x42dbf4: 0xc07861c  jal         func_1E1870
label_42dbf8:
    if (ctx->pc == 0x42DBF8u) {
        ctx->pc = 0x42DBF8u;
            // 0x42dbf8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x42DBFCu;
        goto label_42dbfc;
    }
    ctx->pc = 0x42DBF4u;
    SET_GPR_U32(ctx, 31, 0x42DBFCu);
    ctx->pc = 0x42DBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DBF4u;
            // 0x42dbf8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1870u;
    if (runtime->hasFunction(0x1E1870u)) {
        auto targetFn = runtime->lookupFunction(0x1E1870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DBFCu; }
        if (ctx->pc != 0x42DBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1870_0x1e1870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DBFCu; }
        if (ctx->pc != 0x42DBFCu) { return; }
    }
    ctx->pc = 0x42DBFCu;
label_42dbfc:
    // 0x42dbfc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x42dbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_42dc00:
    // 0x42dc00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42dc00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_42dc04:
    // 0x42dc04: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42dc08:
    if (ctx->pc == 0x42DC08u) {
        ctx->pc = 0x42DC08u;
            // 0x42dc08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DC0Cu;
        goto label_42dc0c;
    }
    ctx->pc = 0x42DC04u;
    {
        const bool branch_taken_0x42dc04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42dc04) {
            ctx->pc = 0x42DC08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42DC04u;
            // 0x42dc08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42DC18u;
            goto label_42dc18;
        }
    }
    ctx->pc = 0x42DC0Cu;
label_42dc0c:
    // 0x42dc0c: 0xc0400a8  jal         func_1002A0
label_42dc10:
    if (ctx->pc == 0x42DC10u) {
        ctx->pc = 0x42DC10u;
            // 0x42dc10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DC14u;
        goto label_42dc14;
    }
    ctx->pc = 0x42DC0Cu;
    SET_GPR_U32(ctx, 31, 0x42DC14u);
    ctx->pc = 0x42DC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DC0Cu;
            // 0x42dc10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DC14u; }
        if (ctx->pc != 0x42DC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DC14u; }
        if (ctx->pc != 0x42DC14u) { return; }
    }
    ctx->pc = 0x42DC14u;
label_42dc14:
    // 0x42dc14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x42dc14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42dc18:
    // 0x42dc18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42dc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42dc1c:
    // 0x42dc1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42dc1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42dc20:
    // 0x42dc20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42dc20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42dc24:
    // 0x42dc24: 0x3e00008  jr          $ra
label_42dc28:
    if (ctx->pc == 0x42DC28u) {
        ctx->pc = 0x42DC28u;
            // 0x42dc28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42DC2Cu;
        goto label_42dc2c;
    }
    ctx->pc = 0x42DC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DC24u;
            // 0x42dc28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42DC2Cu;
label_42dc2c:
    // 0x42dc2c: 0x0  nop
    ctx->pc = 0x42dc2cu;
    // NOP
}
