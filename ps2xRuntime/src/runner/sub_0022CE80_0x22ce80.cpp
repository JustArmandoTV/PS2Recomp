#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022CE80
// Address: 0x22ce80 - 0x22d6a0
void sub_0022CE80_0x22ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CE80_0x22ce80");
#endif

    switch (ctx->pc) {
        case 0x22ce80u: goto label_22ce80;
        case 0x22ce84u: goto label_22ce84;
        case 0x22ce88u: goto label_22ce88;
        case 0x22ce8cu: goto label_22ce8c;
        case 0x22ce90u: goto label_22ce90;
        case 0x22ce94u: goto label_22ce94;
        case 0x22ce98u: goto label_22ce98;
        case 0x22ce9cu: goto label_22ce9c;
        case 0x22cea0u: goto label_22cea0;
        case 0x22cea4u: goto label_22cea4;
        case 0x22cea8u: goto label_22cea8;
        case 0x22ceacu: goto label_22ceac;
        case 0x22ceb0u: goto label_22ceb0;
        case 0x22ceb4u: goto label_22ceb4;
        case 0x22ceb8u: goto label_22ceb8;
        case 0x22cebcu: goto label_22cebc;
        case 0x22cec0u: goto label_22cec0;
        case 0x22cec4u: goto label_22cec4;
        case 0x22cec8u: goto label_22cec8;
        case 0x22ceccu: goto label_22cecc;
        case 0x22ced0u: goto label_22ced0;
        case 0x22ced4u: goto label_22ced4;
        case 0x22ced8u: goto label_22ced8;
        case 0x22cedcu: goto label_22cedc;
        case 0x22cee0u: goto label_22cee0;
        case 0x22cee4u: goto label_22cee4;
        case 0x22cee8u: goto label_22cee8;
        case 0x22ceecu: goto label_22ceec;
        case 0x22cef0u: goto label_22cef0;
        case 0x22cef4u: goto label_22cef4;
        case 0x22cef8u: goto label_22cef8;
        case 0x22cefcu: goto label_22cefc;
        case 0x22cf00u: goto label_22cf00;
        case 0x22cf04u: goto label_22cf04;
        case 0x22cf08u: goto label_22cf08;
        case 0x22cf0cu: goto label_22cf0c;
        case 0x22cf10u: goto label_22cf10;
        case 0x22cf14u: goto label_22cf14;
        case 0x22cf18u: goto label_22cf18;
        case 0x22cf1cu: goto label_22cf1c;
        case 0x22cf20u: goto label_22cf20;
        case 0x22cf24u: goto label_22cf24;
        case 0x22cf28u: goto label_22cf28;
        case 0x22cf2cu: goto label_22cf2c;
        case 0x22cf30u: goto label_22cf30;
        case 0x22cf34u: goto label_22cf34;
        case 0x22cf38u: goto label_22cf38;
        case 0x22cf3cu: goto label_22cf3c;
        case 0x22cf40u: goto label_22cf40;
        case 0x22cf44u: goto label_22cf44;
        case 0x22cf48u: goto label_22cf48;
        case 0x22cf4cu: goto label_22cf4c;
        case 0x22cf50u: goto label_22cf50;
        case 0x22cf54u: goto label_22cf54;
        case 0x22cf58u: goto label_22cf58;
        case 0x22cf5cu: goto label_22cf5c;
        case 0x22cf60u: goto label_22cf60;
        case 0x22cf64u: goto label_22cf64;
        case 0x22cf68u: goto label_22cf68;
        case 0x22cf6cu: goto label_22cf6c;
        case 0x22cf70u: goto label_22cf70;
        case 0x22cf74u: goto label_22cf74;
        case 0x22cf78u: goto label_22cf78;
        case 0x22cf7cu: goto label_22cf7c;
        case 0x22cf80u: goto label_22cf80;
        case 0x22cf84u: goto label_22cf84;
        case 0x22cf88u: goto label_22cf88;
        case 0x22cf8cu: goto label_22cf8c;
        case 0x22cf90u: goto label_22cf90;
        case 0x22cf94u: goto label_22cf94;
        case 0x22cf98u: goto label_22cf98;
        case 0x22cf9cu: goto label_22cf9c;
        case 0x22cfa0u: goto label_22cfa0;
        case 0x22cfa4u: goto label_22cfa4;
        case 0x22cfa8u: goto label_22cfa8;
        case 0x22cfacu: goto label_22cfac;
        case 0x22cfb0u: goto label_22cfb0;
        case 0x22cfb4u: goto label_22cfb4;
        case 0x22cfb8u: goto label_22cfb8;
        case 0x22cfbcu: goto label_22cfbc;
        case 0x22cfc0u: goto label_22cfc0;
        case 0x22cfc4u: goto label_22cfc4;
        case 0x22cfc8u: goto label_22cfc8;
        case 0x22cfccu: goto label_22cfcc;
        case 0x22cfd0u: goto label_22cfd0;
        case 0x22cfd4u: goto label_22cfd4;
        case 0x22cfd8u: goto label_22cfd8;
        case 0x22cfdcu: goto label_22cfdc;
        case 0x22cfe0u: goto label_22cfe0;
        case 0x22cfe4u: goto label_22cfe4;
        case 0x22cfe8u: goto label_22cfe8;
        case 0x22cfecu: goto label_22cfec;
        case 0x22cff0u: goto label_22cff0;
        case 0x22cff4u: goto label_22cff4;
        case 0x22cff8u: goto label_22cff8;
        case 0x22cffcu: goto label_22cffc;
        case 0x22d000u: goto label_22d000;
        case 0x22d004u: goto label_22d004;
        case 0x22d008u: goto label_22d008;
        case 0x22d00cu: goto label_22d00c;
        case 0x22d010u: goto label_22d010;
        case 0x22d014u: goto label_22d014;
        case 0x22d018u: goto label_22d018;
        case 0x22d01cu: goto label_22d01c;
        case 0x22d020u: goto label_22d020;
        case 0x22d024u: goto label_22d024;
        case 0x22d028u: goto label_22d028;
        case 0x22d02cu: goto label_22d02c;
        case 0x22d030u: goto label_22d030;
        case 0x22d034u: goto label_22d034;
        case 0x22d038u: goto label_22d038;
        case 0x22d03cu: goto label_22d03c;
        case 0x22d040u: goto label_22d040;
        case 0x22d044u: goto label_22d044;
        case 0x22d048u: goto label_22d048;
        case 0x22d04cu: goto label_22d04c;
        case 0x22d050u: goto label_22d050;
        case 0x22d054u: goto label_22d054;
        case 0x22d058u: goto label_22d058;
        case 0x22d05cu: goto label_22d05c;
        case 0x22d060u: goto label_22d060;
        case 0x22d064u: goto label_22d064;
        case 0x22d068u: goto label_22d068;
        case 0x22d06cu: goto label_22d06c;
        case 0x22d070u: goto label_22d070;
        case 0x22d074u: goto label_22d074;
        case 0x22d078u: goto label_22d078;
        case 0x22d07cu: goto label_22d07c;
        case 0x22d080u: goto label_22d080;
        case 0x22d084u: goto label_22d084;
        case 0x22d088u: goto label_22d088;
        case 0x22d08cu: goto label_22d08c;
        case 0x22d090u: goto label_22d090;
        case 0x22d094u: goto label_22d094;
        case 0x22d098u: goto label_22d098;
        case 0x22d09cu: goto label_22d09c;
        case 0x22d0a0u: goto label_22d0a0;
        case 0x22d0a4u: goto label_22d0a4;
        case 0x22d0a8u: goto label_22d0a8;
        case 0x22d0acu: goto label_22d0ac;
        case 0x22d0b0u: goto label_22d0b0;
        case 0x22d0b4u: goto label_22d0b4;
        case 0x22d0b8u: goto label_22d0b8;
        case 0x22d0bcu: goto label_22d0bc;
        case 0x22d0c0u: goto label_22d0c0;
        case 0x22d0c4u: goto label_22d0c4;
        case 0x22d0c8u: goto label_22d0c8;
        case 0x22d0ccu: goto label_22d0cc;
        case 0x22d0d0u: goto label_22d0d0;
        case 0x22d0d4u: goto label_22d0d4;
        case 0x22d0d8u: goto label_22d0d8;
        case 0x22d0dcu: goto label_22d0dc;
        case 0x22d0e0u: goto label_22d0e0;
        case 0x22d0e4u: goto label_22d0e4;
        case 0x22d0e8u: goto label_22d0e8;
        case 0x22d0ecu: goto label_22d0ec;
        case 0x22d0f0u: goto label_22d0f0;
        case 0x22d0f4u: goto label_22d0f4;
        case 0x22d0f8u: goto label_22d0f8;
        case 0x22d0fcu: goto label_22d0fc;
        case 0x22d100u: goto label_22d100;
        case 0x22d104u: goto label_22d104;
        case 0x22d108u: goto label_22d108;
        case 0x22d10cu: goto label_22d10c;
        case 0x22d110u: goto label_22d110;
        case 0x22d114u: goto label_22d114;
        case 0x22d118u: goto label_22d118;
        case 0x22d11cu: goto label_22d11c;
        case 0x22d120u: goto label_22d120;
        case 0x22d124u: goto label_22d124;
        case 0x22d128u: goto label_22d128;
        case 0x22d12cu: goto label_22d12c;
        case 0x22d130u: goto label_22d130;
        case 0x22d134u: goto label_22d134;
        case 0x22d138u: goto label_22d138;
        case 0x22d13cu: goto label_22d13c;
        case 0x22d140u: goto label_22d140;
        case 0x22d144u: goto label_22d144;
        case 0x22d148u: goto label_22d148;
        case 0x22d14cu: goto label_22d14c;
        case 0x22d150u: goto label_22d150;
        case 0x22d154u: goto label_22d154;
        case 0x22d158u: goto label_22d158;
        case 0x22d15cu: goto label_22d15c;
        case 0x22d160u: goto label_22d160;
        case 0x22d164u: goto label_22d164;
        case 0x22d168u: goto label_22d168;
        case 0x22d16cu: goto label_22d16c;
        case 0x22d170u: goto label_22d170;
        case 0x22d174u: goto label_22d174;
        case 0x22d178u: goto label_22d178;
        case 0x22d17cu: goto label_22d17c;
        case 0x22d180u: goto label_22d180;
        case 0x22d184u: goto label_22d184;
        case 0x22d188u: goto label_22d188;
        case 0x22d18cu: goto label_22d18c;
        case 0x22d190u: goto label_22d190;
        case 0x22d194u: goto label_22d194;
        case 0x22d198u: goto label_22d198;
        case 0x22d19cu: goto label_22d19c;
        case 0x22d1a0u: goto label_22d1a0;
        case 0x22d1a4u: goto label_22d1a4;
        case 0x22d1a8u: goto label_22d1a8;
        case 0x22d1acu: goto label_22d1ac;
        case 0x22d1b0u: goto label_22d1b0;
        case 0x22d1b4u: goto label_22d1b4;
        case 0x22d1b8u: goto label_22d1b8;
        case 0x22d1bcu: goto label_22d1bc;
        case 0x22d1c0u: goto label_22d1c0;
        case 0x22d1c4u: goto label_22d1c4;
        case 0x22d1c8u: goto label_22d1c8;
        case 0x22d1ccu: goto label_22d1cc;
        case 0x22d1d0u: goto label_22d1d0;
        case 0x22d1d4u: goto label_22d1d4;
        case 0x22d1d8u: goto label_22d1d8;
        case 0x22d1dcu: goto label_22d1dc;
        case 0x22d1e0u: goto label_22d1e0;
        case 0x22d1e4u: goto label_22d1e4;
        case 0x22d1e8u: goto label_22d1e8;
        case 0x22d1ecu: goto label_22d1ec;
        case 0x22d1f0u: goto label_22d1f0;
        case 0x22d1f4u: goto label_22d1f4;
        case 0x22d1f8u: goto label_22d1f8;
        case 0x22d1fcu: goto label_22d1fc;
        case 0x22d200u: goto label_22d200;
        case 0x22d204u: goto label_22d204;
        case 0x22d208u: goto label_22d208;
        case 0x22d20cu: goto label_22d20c;
        case 0x22d210u: goto label_22d210;
        case 0x22d214u: goto label_22d214;
        case 0x22d218u: goto label_22d218;
        case 0x22d21cu: goto label_22d21c;
        case 0x22d220u: goto label_22d220;
        case 0x22d224u: goto label_22d224;
        case 0x22d228u: goto label_22d228;
        case 0x22d22cu: goto label_22d22c;
        case 0x22d230u: goto label_22d230;
        case 0x22d234u: goto label_22d234;
        case 0x22d238u: goto label_22d238;
        case 0x22d23cu: goto label_22d23c;
        case 0x22d240u: goto label_22d240;
        case 0x22d244u: goto label_22d244;
        case 0x22d248u: goto label_22d248;
        case 0x22d24cu: goto label_22d24c;
        case 0x22d250u: goto label_22d250;
        case 0x22d254u: goto label_22d254;
        case 0x22d258u: goto label_22d258;
        case 0x22d25cu: goto label_22d25c;
        case 0x22d260u: goto label_22d260;
        case 0x22d264u: goto label_22d264;
        case 0x22d268u: goto label_22d268;
        case 0x22d26cu: goto label_22d26c;
        case 0x22d270u: goto label_22d270;
        case 0x22d274u: goto label_22d274;
        case 0x22d278u: goto label_22d278;
        case 0x22d27cu: goto label_22d27c;
        case 0x22d280u: goto label_22d280;
        case 0x22d284u: goto label_22d284;
        case 0x22d288u: goto label_22d288;
        case 0x22d28cu: goto label_22d28c;
        case 0x22d290u: goto label_22d290;
        case 0x22d294u: goto label_22d294;
        case 0x22d298u: goto label_22d298;
        case 0x22d29cu: goto label_22d29c;
        case 0x22d2a0u: goto label_22d2a0;
        case 0x22d2a4u: goto label_22d2a4;
        case 0x22d2a8u: goto label_22d2a8;
        case 0x22d2acu: goto label_22d2ac;
        case 0x22d2b0u: goto label_22d2b0;
        case 0x22d2b4u: goto label_22d2b4;
        case 0x22d2b8u: goto label_22d2b8;
        case 0x22d2bcu: goto label_22d2bc;
        case 0x22d2c0u: goto label_22d2c0;
        case 0x22d2c4u: goto label_22d2c4;
        case 0x22d2c8u: goto label_22d2c8;
        case 0x22d2ccu: goto label_22d2cc;
        case 0x22d2d0u: goto label_22d2d0;
        case 0x22d2d4u: goto label_22d2d4;
        case 0x22d2d8u: goto label_22d2d8;
        case 0x22d2dcu: goto label_22d2dc;
        case 0x22d2e0u: goto label_22d2e0;
        case 0x22d2e4u: goto label_22d2e4;
        case 0x22d2e8u: goto label_22d2e8;
        case 0x22d2ecu: goto label_22d2ec;
        case 0x22d2f0u: goto label_22d2f0;
        case 0x22d2f4u: goto label_22d2f4;
        case 0x22d2f8u: goto label_22d2f8;
        case 0x22d2fcu: goto label_22d2fc;
        case 0x22d300u: goto label_22d300;
        case 0x22d304u: goto label_22d304;
        case 0x22d308u: goto label_22d308;
        case 0x22d30cu: goto label_22d30c;
        case 0x22d310u: goto label_22d310;
        case 0x22d314u: goto label_22d314;
        case 0x22d318u: goto label_22d318;
        case 0x22d31cu: goto label_22d31c;
        case 0x22d320u: goto label_22d320;
        case 0x22d324u: goto label_22d324;
        case 0x22d328u: goto label_22d328;
        case 0x22d32cu: goto label_22d32c;
        case 0x22d330u: goto label_22d330;
        case 0x22d334u: goto label_22d334;
        case 0x22d338u: goto label_22d338;
        case 0x22d33cu: goto label_22d33c;
        case 0x22d340u: goto label_22d340;
        case 0x22d344u: goto label_22d344;
        case 0x22d348u: goto label_22d348;
        case 0x22d34cu: goto label_22d34c;
        case 0x22d350u: goto label_22d350;
        case 0x22d354u: goto label_22d354;
        case 0x22d358u: goto label_22d358;
        case 0x22d35cu: goto label_22d35c;
        case 0x22d360u: goto label_22d360;
        case 0x22d364u: goto label_22d364;
        case 0x22d368u: goto label_22d368;
        case 0x22d36cu: goto label_22d36c;
        case 0x22d370u: goto label_22d370;
        case 0x22d374u: goto label_22d374;
        case 0x22d378u: goto label_22d378;
        case 0x22d37cu: goto label_22d37c;
        case 0x22d380u: goto label_22d380;
        case 0x22d384u: goto label_22d384;
        case 0x22d388u: goto label_22d388;
        case 0x22d38cu: goto label_22d38c;
        case 0x22d390u: goto label_22d390;
        case 0x22d394u: goto label_22d394;
        case 0x22d398u: goto label_22d398;
        case 0x22d39cu: goto label_22d39c;
        case 0x22d3a0u: goto label_22d3a0;
        case 0x22d3a4u: goto label_22d3a4;
        case 0x22d3a8u: goto label_22d3a8;
        case 0x22d3acu: goto label_22d3ac;
        case 0x22d3b0u: goto label_22d3b0;
        case 0x22d3b4u: goto label_22d3b4;
        case 0x22d3b8u: goto label_22d3b8;
        case 0x22d3bcu: goto label_22d3bc;
        case 0x22d3c0u: goto label_22d3c0;
        case 0x22d3c4u: goto label_22d3c4;
        case 0x22d3c8u: goto label_22d3c8;
        case 0x22d3ccu: goto label_22d3cc;
        case 0x22d3d0u: goto label_22d3d0;
        case 0x22d3d4u: goto label_22d3d4;
        case 0x22d3d8u: goto label_22d3d8;
        case 0x22d3dcu: goto label_22d3dc;
        case 0x22d3e0u: goto label_22d3e0;
        case 0x22d3e4u: goto label_22d3e4;
        case 0x22d3e8u: goto label_22d3e8;
        case 0x22d3ecu: goto label_22d3ec;
        case 0x22d3f0u: goto label_22d3f0;
        case 0x22d3f4u: goto label_22d3f4;
        case 0x22d3f8u: goto label_22d3f8;
        case 0x22d3fcu: goto label_22d3fc;
        case 0x22d400u: goto label_22d400;
        case 0x22d404u: goto label_22d404;
        case 0x22d408u: goto label_22d408;
        case 0x22d40cu: goto label_22d40c;
        case 0x22d410u: goto label_22d410;
        case 0x22d414u: goto label_22d414;
        case 0x22d418u: goto label_22d418;
        case 0x22d41cu: goto label_22d41c;
        case 0x22d420u: goto label_22d420;
        case 0x22d424u: goto label_22d424;
        case 0x22d428u: goto label_22d428;
        case 0x22d42cu: goto label_22d42c;
        case 0x22d430u: goto label_22d430;
        case 0x22d434u: goto label_22d434;
        case 0x22d438u: goto label_22d438;
        case 0x22d43cu: goto label_22d43c;
        case 0x22d440u: goto label_22d440;
        case 0x22d444u: goto label_22d444;
        case 0x22d448u: goto label_22d448;
        case 0x22d44cu: goto label_22d44c;
        case 0x22d450u: goto label_22d450;
        case 0x22d454u: goto label_22d454;
        case 0x22d458u: goto label_22d458;
        case 0x22d45cu: goto label_22d45c;
        case 0x22d460u: goto label_22d460;
        case 0x22d464u: goto label_22d464;
        case 0x22d468u: goto label_22d468;
        case 0x22d46cu: goto label_22d46c;
        case 0x22d470u: goto label_22d470;
        case 0x22d474u: goto label_22d474;
        case 0x22d478u: goto label_22d478;
        case 0x22d47cu: goto label_22d47c;
        case 0x22d480u: goto label_22d480;
        case 0x22d484u: goto label_22d484;
        case 0x22d488u: goto label_22d488;
        case 0x22d48cu: goto label_22d48c;
        case 0x22d490u: goto label_22d490;
        case 0x22d494u: goto label_22d494;
        case 0x22d498u: goto label_22d498;
        case 0x22d49cu: goto label_22d49c;
        case 0x22d4a0u: goto label_22d4a0;
        case 0x22d4a4u: goto label_22d4a4;
        case 0x22d4a8u: goto label_22d4a8;
        case 0x22d4acu: goto label_22d4ac;
        case 0x22d4b0u: goto label_22d4b0;
        case 0x22d4b4u: goto label_22d4b4;
        case 0x22d4b8u: goto label_22d4b8;
        case 0x22d4bcu: goto label_22d4bc;
        case 0x22d4c0u: goto label_22d4c0;
        case 0x22d4c4u: goto label_22d4c4;
        case 0x22d4c8u: goto label_22d4c8;
        case 0x22d4ccu: goto label_22d4cc;
        case 0x22d4d0u: goto label_22d4d0;
        case 0x22d4d4u: goto label_22d4d4;
        case 0x22d4d8u: goto label_22d4d8;
        case 0x22d4dcu: goto label_22d4dc;
        case 0x22d4e0u: goto label_22d4e0;
        case 0x22d4e4u: goto label_22d4e4;
        case 0x22d4e8u: goto label_22d4e8;
        case 0x22d4ecu: goto label_22d4ec;
        case 0x22d4f0u: goto label_22d4f0;
        case 0x22d4f4u: goto label_22d4f4;
        case 0x22d4f8u: goto label_22d4f8;
        case 0x22d4fcu: goto label_22d4fc;
        case 0x22d500u: goto label_22d500;
        case 0x22d504u: goto label_22d504;
        case 0x22d508u: goto label_22d508;
        case 0x22d50cu: goto label_22d50c;
        case 0x22d510u: goto label_22d510;
        case 0x22d514u: goto label_22d514;
        case 0x22d518u: goto label_22d518;
        case 0x22d51cu: goto label_22d51c;
        case 0x22d520u: goto label_22d520;
        case 0x22d524u: goto label_22d524;
        case 0x22d528u: goto label_22d528;
        case 0x22d52cu: goto label_22d52c;
        case 0x22d530u: goto label_22d530;
        case 0x22d534u: goto label_22d534;
        case 0x22d538u: goto label_22d538;
        case 0x22d53cu: goto label_22d53c;
        case 0x22d540u: goto label_22d540;
        case 0x22d544u: goto label_22d544;
        case 0x22d548u: goto label_22d548;
        case 0x22d54cu: goto label_22d54c;
        case 0x22d550u: goto label_22d550;
        case 0x22d554u: goto label_22d554;
        case 0x22d558u: goto label_22d558;
        case 0x22d55cu: goto label_22d55c;
        case 0x22d560u: goto label_22d560;
        case 0x22d564u: goto label_22d564;
        case 0x22d568u: goto label_22d568;
        case 0x22d56cu: goto label_22d56c;
        case 0x22d570u: goto label_22d570;
        case 0x22d574u: goto label_22d574;
        case 0x22d578u: goto label_22d578;
        case 0x22d57cu: goto label_22d57c;
        case 0x22d580u: goto label_22d580;
        case 0x22d584u: goto label_22d584;
        case 0x22d588u: goto label_22d588;
        case 0x22d58cu: goto label_22d58c;
        case 0x22d590u: goto label_22d590;
        case 0x22d594u: goto label_22d594;
        case 0x22d598u: goto label_22d598;
        case 0x22d59cu: goto label_22d59c;
        case 0x22d5a0u: goto label_22d5a0;
        case 0x22d5a4u: goto label_22d5a4;
        case 0x22d5a8u: goto label_22d5a8;
        case 0x22d5acu: goto label_22d5ac;
        case 0x22d5b0u: goto label_22d5b0;
        case 0x22d5b4u: goto label_22d5b4;
        case 0x22d5b8u: goto label_22d5b8;
        case 0x22d5bcu: goto label_22d5bc;
        case 0x22d5c0u: goto label_22d5c0;
        case 0x22d5c4u: goto label_22d5c4;
        case 0x22d5c8u: goto label_22d5c8;
        case 0x22d5ccu: goto label_22d5cc;
        case 0x22d5d0u: goto label_22d5d0;
        case 0x22d5d4u: goto label_22d5d4;
        case 0x22d5d8u: goto label_22d5d8;
        case 0x22d5dcu: goto label_22d5dc;
        case 0x22d5e0u: goto label_22d5e0;
        case 0x22d5e4u: goto label_22d5e4;
        case 0x22d5e8u: goto label_22d5e8;
        case 0x22d5ecu: goto label_22d5ec;
        case 0x22d5f0u: goto label_22d5f0;
        case 0x22d5f4u: goto label_22d5f4;
        case 0x22d5f8u: goto label_22d5f8;
        case 0x22d5fcu: goto label_22d5fc;
        case 0x22d600u: goto label_22d600;
        case 0x22d604u: goto label_22d604;
        case 0x22d608u: goto label_22d608;
        case 0x22d60cu: goto label_22d60c;
        case 0x22d610u: goto label_22d610;
        case 0x22d614u: goto label_22d614;
        case 0x22d618u: goto label_22d618;
        case 0x22d61cu: goto label_22d61c;
        case 0x22d620u: goto label_22d620;
        case 0x22d624u: goto label_22d624;
        case 0x22d628u: goto label_22d628;
        case 0x22d62cu: goto label_22d62c;
        case 0x22d630u: goto label_22d630;
        case 0x22d634u: goto label_22d634;
        case 0x22d638u: goto label_22d638;
        case 0x22d63cu: goto label_22d63c;
        case 0x22d640u: goto label_22d640;
        case 0x22d644u: goto label_22d644;
        case 0x22d648u: goto label_22d648;
        case 0x22d64cu: goto label_22d64c;
        case 0x22d650u: goto label_22d650;
        case 0x22d654u: goto label_22d654;
        case 0x22d658u: goto label_22d658;
        case 0x22d65cu: goto label_22d65c;
        case 0x22d660u: goto label_22d660;
        case 0x22d664u: goto label_22d664;
        case 0x22d668u: goto label_22d668;
        case 0x22d66cu: goto label_22d66c;
        case 0x22d670u: goto label_22d670;
        case 0x22d674u: goto label_22d674;
        case 0x22d678u: goto label_22d678;
        case 0x22d67cu: goto label_22d67c;
        case 0x22d680u: goto label_22d680;
        case 0x22d684u: goto label_22d684;
        case 0x22d688u: goto label_22d688;
        case 0x22d68cu: goto label_22d68c;
        case 0x22d690u: goto label_22d690;
        case 0x22d694u: goto label_22d694;
        case 0x22d698u: goto label_22d698;
        case 0x22d69cu: goto label_22d69c;
        default: break;
    }

    ctx->pc = 0x22ce80u;

label_22ce80:
    // 0x22ce80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_22ce84:
    // 0x22ce84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22ce88:
    // 0x22ce88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22ce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22ce8c:
    // 0x22ce8c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_22ce90:
    // 0x22ce90: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22ce90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_22ce94:
    // 0x22ce94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22ce94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22ce98:
    // 0x22ce98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22ce98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22ce9c:
    // 0x22ce9c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x22ce9cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_22cea0:
    // 0x22cea0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22cea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22cea4:
    // 0x22cea4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x22cea4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_22cea8:
    // 0x22cea8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x22cea8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_22ceac:
    // 0x22ceac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x22ceacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22ceb0:
    // 0x22ceb0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x22ceb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_22ceb4:
    // 0x22ceb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22ceb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22ceb8:
    // 0x22ceb8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_22cebc:
    // 0x22cebc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22cec0:
    // 0x22cec0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_22cec4:
    // 0x22cec4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_22cec8:
    // 0x22cec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22cecc:
    // 0x22cecc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x22ceccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_22ced0:
    // 0x22ced0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22ced4:
    // 0x22ced4: 0x2442f050  addiu       $v0, $v0, -0xFB0
    ctx->pc = 0x22ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963280));
label_22ced8:
    // 0x22ced8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x22ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_22cedc:
    // 0x22cedc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22cee0:
    // 0x22cee0: 0x2442f030  addiu       $v0, $v0, -0xFD0
    ctx->pc = 0x22cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963248));
label_22cee4:
    // 0x22cee4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x22cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_22cee8:
    // 0x22cee8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22ceec:
    // 0x22ceec: 0x2442efe0  addiu       $v0, $v0, -0x1020
    ctx->pc = 0x22ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963168));
label_22cef0:
    // 0x22cef0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_22cef4:
    // 0x22cef4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22cef8:
    // 0x22cef8: 0x2442eff0  addiu       $v0, $v0, -0x1010
    ctx->pc = 0x22cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
label_22cefc:
    // 0x22cefc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x22cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_22cf00:
    // 0x22cf00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22cf04:
    // 0x22cf04: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x22cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_22cf08:
    // 0x22cf08: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x22cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_22cf0c:
    // 0x22cf0c: 0xac900010  sw          $s0, 0x10($a0)
    ctx->pc = 0x22cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 16));
label_22cf10:
    // 0x22cf10: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x22cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
label_22cf14:
    // 0x22cf14: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x22cf14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22cf18:
    // 0x22cf18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22cf1c:
    if (ctx->pc == 0x22CF1Cu) {
        ctx->pc = 0x22CF1Cu;
            // 0x22cf1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22CF20u;
        goto label_22cf20;
    }
    ctx->pc = 0x22CF18u;
    {
        const bool branch_taken_0x22cf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF18u;
            // 0x22cf1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf18) {
            ctx->pc = 0x22CF2Cu;
            goto label_22cf2c;
        }
    }
    ctx->pc = 0x22CF20u;
label_22cf20:
    // 0x22cf20: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x22cf20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_22cf24:
    // 0x22cf24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22cf28:
    // 0x22cf28: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x22cf28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_22cf2c:
    // 0x22cf2c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_22cf30:
    if (ctx->pc == 0x22CF30u) {
        ctx->pc = 0x22CF30u;
            // 0x22cf30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22CF34u;
        goto label_22cf34;
    }
    ctx->pc = 0x22CF2Cu;
    {
        const bool branch_taken_0x22cf2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF2Cu;
            // 0x22cf30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf2c) {
            ctx->pc = 0x22CF38u;
            goto label_22cf38;
        }
    }
    ctx->pc = 0x22CF34u;
label_22cf34:
    // 0x22cf34: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x22cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_22cf38:
    // 0x22cf38: 0xc08ca34  jal         func_2328D0
label_22cf3c:
    if (ctx->pc == 0x22CF3Cu) {
        ctx->pc = 0x22CF3Cu;
            // 0x22cf3c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x22CF40u;
        goto label_22cf40;
    }
    ctx->pc = 0x22CF38u;
    SET_GPR_U32(ctx, 31, 0x22CF40u);
    ctx->pc = 0x22CF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF38u;
            // 0x22cf3c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2328D0u;
    if (runtime->hasFunction(0x2328D0u)) {
        auto targetFn = runtime->lookupFunction(0x2328D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF40u; }
        if (ctx->pc != 0x22CF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002328D0_0x2328d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF40u; }
        if (ctx->pc != 0x22CF40u) { return; }
    }
    ctx->pc = 0x22CF40u;
label_22cf40:
    // 0x22cf40: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x22cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_22cf44:
    // 0x22cf44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22cf48:
    // 0x22cf48: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22cf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22cf4c:
    // 0x22cf4c: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x22cf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_22cf50:
    // 0x22cf50: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x22cf50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_22cf54:
    // 0x22cf54: 0xc47702f0  lwc1        $f23, 0x2F0($v1)
    ctx->pc = 0x22cf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_22cf58:
    // 0x22cf58: 0xc47802f4  lwc1        $f24, 0x2F4($v1)
    ctx->pc = 0x22cf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_22cf5c:
    // 0x22cf5c: 0xc47902f8  lwc1        $f25, 0x2F8($v1)
    ctx->pc = 0x22cf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_22cf60:
    // 0x22cf60: 0xc4740300  lwc1        $f20, 0x300($v1)
    ctx->pc = 0x22cf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22cf64:
    // 0x22cf64: 0xc4750304  lwc1        $f21, 0x304($v1)
    ctx->pc = 0x22cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_22cf68:
    // 0x22cf68: 0xc4760308  lwc1        $f22, 0x308($v1)
    ctx->pc = 0x22cf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_22cf6c:
    // 0x22cf6c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x22cf6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_22cf70:
    // 0x22cf70: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x22cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_22cf74:
    // 0x22cf74: 0xe7b80064  swc1        $f24, 0x64($sp)
    ctx->pc = 0x22cf74u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_22cf78:
    // 0x22cf78: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x22cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_22cf7c:
    // 0x22cf7c: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x22cf7cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_22cf80:
    // 0x22cf80: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x22cf80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_22cf84:
    // 0x22cf84: 0xe7b50074  swc1        $f21, 0x74($sp)
    ctx->pc = 0x22cf84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_22cf88:
    // 0x22cf88: 0xc0a7a88  jal         func_29EA20
label_22cf8c:
    if (ctx->pc == 0x22CF8Cu) {
        ctx->pc = 0x22CF8Cu;
            // 0x22cf8c: 0xe7b60078  swc1        $f22, 0x78($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x22CF90u;
        goto label_22cf90;
    }
    ctx->pc = 0x22CF88u;
    SET_GPR_U32(ctx, 31, 0x22CF90u);
    ctx->pc = 0x22CF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF88u;
            // 0x22cf8c: 0xe7b60078  swc1        $f22, 0x78($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF90u; }
        if (ctx->pc != 0x22CF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF90u; }
        if (ctx->pc != 0x22CF90u) { return; }
    }
    ctx->pc = 0x22CF90u;
label_22cf90:
    // 0x22cf90: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x22cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_22cf94:
    // 0x22cf94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22cf94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22cf98:
    // 0x22cf98: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_22cf9c:
    if (ctx->pc == 0x22CF9Cu) {
        ctx->pc = 0x22CF9Cu;
            // 0x22cf9c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22CFA0u;
        goto label_22cfa0;
    }
    ctx->pc = 0x22CF98u;
    {
        const bool branch_taken_0x22cf98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF98u;
            // 0x22cf9c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf98) {
            ctx->pc = 0x22CFB0u;
            goto label_22cfb0;
        }
    }
    ctx->pc = 0x22CFA0u;
label_22cfa0:
    // 0x22cfa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22cfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22cfa4:
    // 0x22cfa4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22cfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22cfa8:
    // 0x22cfa8: 0xc08a7ec  jal         func_229FB0
label_22cfac:
    if (ctx->pc == 0x22CFACu) {
        ctx->pc = 0x22CFACu;
            // 0x22cfac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22CFB0u;
        goto label_22cfb0;
    }
    ctx->pc = 0x22CFA8u;
    SET_GPR_U32(ctx, 31, 0x22CFB0u);
    ctx->pc = 0x22CFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFA8u;
            // 0x22cfac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229FB0u;
    if (runtime->hasFunction(0x229FB0u)) {
        auto targetFn = runtime->lookupFunction(0x229FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFB0u; }
        if (ctx->pc != 0x22CFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229FB0_0x229fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFB0u; }
        if (ctx->pc != 0x22CFB0u) { return; }
    }
    ctx->pc = 0x22CFB0u;
label_22cfb0:
    // 0x22cfb0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22cfb4:
    // 0x22cfb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22cfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22cfb8:
    // 0x22cfb8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_22cfbc:
    if (ctx->pc == 0x22CFBCu) {
        ctx->pc = 0x22CFBCu;
            // 0x22cfbc: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x22CFC0u;
        goto label_22cfc0;
    }
    ctx->pc = 0x22CFB8u;
    {
        const bool branch_taken_0x22cfb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFB8u;
            // 0x22cfbc: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfb8) {
            ctx->pc = 0x22CFC4u;
            goto label_22cfc4;
        }
    }
    ctx->pc = 0x22CFC0u;
label_22cfc0:
    // 0x22cfc0: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x22cfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_22cfc4:
    // 0x22cfc4: 0xc08ad18  jal         func_22B460
label_22cfc8:
    if (ctx->pc == 0x22CFC8u) {
        ctx->pc = 0x22CFC8u;
            // 0x22cfc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22CFCCu;
        goto label_22cfcc;
    }
    ctx->pc = 0x22CFC4u;
    SET_GPR_U32(ctx, 31, 0x22CFCCu);
    ctx->pc = 0x22CFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFC4u;
            // 0x22cfc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B460u;
    if (runtime->hasFunction(0x22B460u)) {
        auto targetFn = runtime->lookupFunction(0x22B460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFCCu; }
        if (ctx->pc != 0x22CFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B460_0x22b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFCCu; }
        if (ctx->pc != 0x22CFCCu) { return; }
    }
    ctx->pc = 0x22CFCCu;
label_22cfcc:
    // 0x22cfcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22cfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22cfd0:
    // 0x22cfd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cfd4:
    // 0x22cfd4: 0xc08c798  jal         func_231E60
label_22cfd8:
    if (ctx->pc == 0x22CFD8u) {
        ctx->pc = 0x22CFD8u;
            // 0x22cfd8: 0xae320014  sw          $s2, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
        ctx->pc = 0x22CFDCu;
        goto label_22cfdc;
    }
    ctx->pc = 0x22CFD4u;
    SET_GPR_U32(ctx, 31, 0x22CFDCu);
    ctx->pc = 0x22CFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFD4u;
            // 0x22cfd8: 0xae320014  sw          $s2, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFDCu; }
        if (ctx->pc != 0x22CFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFDCu; }
        if (ctx->pc != 0x22CFDCu) { return; }
    }
    ctx->pc = 0x22CFDCu;
label_22cfdc:
    // 0x22cfdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22cfe0:
    // 0x22cfe0: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x22cfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_22cfe4:
    // 0x22cfe4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22cfe8:
    // 0x22cfe8: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x22cfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_22cfec:
    // 0x22cfec: 0xe7b70060  swc1        $f23, 0x60($sp)
    ctx->pc = 0x22cfecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_22cff0:
    // 0x22cff0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x22cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_22cff4:
    // 0x22cff4: 0xe7b80064  swc1        $f24, 0x64($sp)
    ctx->pc = 0x22cff4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_22cff8:
    // 0x22cff8: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x22cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_22cffc:
    // 0x22cffc: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x22cffcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_22d000:
    // 0x22d000: 0xe7b70070  swc1        $f23, 0x70($sp)
    ctx->pc = 0x22d000u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_22d004:
    // 0x22d004: 0xe7b50074  swc1        $f21, 0x74($sp)
    ctx->pc = 0x22d004u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_22d008:
    // 0x22d008: 0xc0a7a88  jal         func_29EA20
label_22d00c:
    if (ctx->pc == 0x22D00Cu) {
        ctx->pc = 0x22D00Cu;
            // 0x22d00c: 0xe7b60078  swc1        $f22, 0x78($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x22D010u;
        goto label_22d010;
    }
    ctx->pc = 0x22D008u;
    SET_GPR_U32(ctx, 31, 0x22D010u);
    ctx->pc = 0x22D00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D008u;
            // 0x22d00c: 0xe7b60078  swc1        $f22, 0x78($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D010u; }
        if (ctx->pc != 0x22D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D010u; }
        if (ctx->pc != 0x22D010u) { return; }
    }
    ctx->pc = 0x22D010u;
label_22d010:
    // 0x22d010: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x22d010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_22d014:
    // 0x22d014: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22d014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d018:
    // 0x22d018: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_22d01c:
    if (ctx->pc == 0x22D01Cu) {
        ctx->pc = 0x22D01Cu;
            // 0x22d01c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22D020u;
        goto label_22d020;
    }
    ctx->pc = 0x22D018u;
    {
        const bool branch_taken_0x22d018 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D018u;
            // 0x22d01c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d018) {
            ctx->pc = 0x22D030u;
            goto label_22d030;
        }
    }
    ctx->pc = 0x22D020u;
label_22d020:
    // 0x22d020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d024:
    // 0x22d024: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22d024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22d028:
    // 0x22d028: 0xc08a7ec  jal         func_229FB0
label_22d02c:
    if (ctx->pc == 0x22D02Cu) {
        ctx->pc = 0x22D02Cu;
            // 0x22d02c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D030u;
        goto label_22d030;
    }
    ctx->pc = 0x22D028u;
    SET_GPR_U32(ctx, 31, 0x22D030u);
    ctx->pc = 0x22D02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D028u;
            // 0x22d02c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229FB0u;
    if (runtime->hasFunction(0x229FB0u)) {
        auto targetFn = runtime->lookupFunction(0x229FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D030u; }
        if (ctx->pc != 0x22D030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229FB0_0x229fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D030u; }
        if (ctx->pc != 0x22D030u) { return; }
    }
    ctx->pc = 0x22D030u;
label_22d030:
    // 0x22d030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22d034:
    // 0x22d034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d038:
    // 0x22d038: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_22d03c:
    if (ctx->pc == 0x22D03Cu) {
        ctx->pc = 0x22D03Cu;
            // 0x22d03c: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x22D040u;
        goto label_22d040;
    }
    ctx->pc = 0x22D038u;
    {
        const bool branch_taken_0x22d038 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D038u;
            // 0x22d03c: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d038) {
            ctx->pc = 0x22D044u;
            goto label_22d044;
        }
    }
    ctx->pc = 0x22D040u;
label_22d040:
    // 0x22d040: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x22d040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_22d044:
    // 0x22d044: 0xc08ad18  jal         func_22B460
label_22d048:
    if (ctx->pc == 0x22D048u) {
        ctx->pc = 0x22D048u;
            // 0x22d048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D04Cu;
        goto label_22d04c;
    }
    ctx->pc = 0x22D044u;
    SET_GPR_U32(ctx, 31, 0x22D04Cu);
    ctx->pc = 0x22D048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D044u;
            // 0x22d048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B460u;
    if (runtime->hasFunction(0x22B460u)) {
        auto targetFn = runtime->lookupFunction(0x22B460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D04Cu; }
        if (ctx->pc != 0x22D04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B460_0x22b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D04Cu; }
        if (ctx->pc != 0x22D04Cu) { return; }
    }
    ctx->pc = 0x22D04Cu;
label_22d04c:
    // 0x22d04c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d050:
    // 0x22d050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d054:
    // 0x22d054: 0xc08c798  jal         func_231E60
label_22d058:
    if (ctx->pc == 0x22D058u) {
        ctx->pc = 0x22D058u;
            // 0x22d058: 0xae320018  sw          $s2, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
        ctx->pc = 0x22D05Cu;
        goto label_22d05c;
    }
    ctx->pc = 0x22D054u;
    SET_GPR_U32(ctx, 31, 0x22D05Cu);
    ctx->pc = 0x22D058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D054u;
            // 0x22d058: 0xae320018  sw          $s2, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D05Cu; }
        if (ctx->pc != 0x22D05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D05Cu; }
        if (ctx->pc != 0x22D05Cu) { return; }
    }
    ctx->pc = 0x22D05Cu;
label_22d05c:
    // 0x22d05c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22d060:
    // 0x22d060: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x22d060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_22d064:
    // 0x22d064: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22d064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22d068:
    // 0x22d068: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x22d068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_22d06c:
    // 0x22d06c: 0xe7b70060  swc1        $f23, 0x60($sp)
    ctx->pc = 0x22d06cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_22d070:
    // 0x22d070: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x22d070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_22d074:
    // 0x22d074: 0xe7b50064  swc1        $f21, 0x64($sp)
    ctx->pc = 0x22d074u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_22d078:
    // 0x22d078: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x22d078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_22d07c:
    // 0x22d07c: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x22d07cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_22d080:
    // 0x22d080: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x22d080u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_22d084:
    // 0x22d084: 0xe7b50074  swc1        $f21, 0x74($sp)
    ctx->pc = 0x22d084u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_22d088:
    // 0x22d088: 0xc0a7a88  jal         func_29EA20
label_22d08c:
    if (ctx->pc == 0x22D08Cu) {
        ctx->pc = 0x22D08Cu;
            // 0x22d08c: 0xe7b60078  swc1        $f22, 0x78($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x22D090u;
        goto label_22d090;
    }
    ctx->pc = 0x22D088u;
    SET_GPR_U32(ctx, 31, 0x22D090u);
    ctx->pc = 0x22D08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D088u;
            // 0x22d08c: 0xe7b60078  swc1        $f22, 0x78($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D090u; }
        if (ctx->pc != 0x22D090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D090u; }
        if (ctx->pc != 0x22D090u) { return; }
    }
    ctx->pc = 0x22D090u;
label_22d090:
    // 0x22d090: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x22d090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_22d094:
    // 0x22d094: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22d094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d098:
    // 0x22d098: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_22d09c:
    if (ctx->pc == 0x22D09Cu) {
        ctx->pc = 0x22D09Cu;
            // 0x22d09c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22D0A0u;
        goto label_22d0a0;
    }
    ctx->pc = 0x22D098u;
    {
        const bool branch_taken_0x22d098 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D098u;
            // 0x22d09c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d098) {
            ctx->pc = 0x22D0B0u;
            goto label_22d0b0;
        }
    }
    ctx->pc = 0x22D0A0u;
label_22d0a0:
    // 0x22d0a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d0a4:
    // 0x22d0a4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22d0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22d0a8:
    // 0x22d0a8: 0xc08a7ec  jal         func_229FB0
label_22d0ac:
    if (ctx->pc == 0x22D0ACu) {
        ctx->pc = 0x22D0ACu;
            // 0x22d0ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D0B0u;
        goto label_22d0b0;
    }
    ctx->pc = 0x22D0A8u;
    SET_GPR_U32(ctx, 31, 0x22D0B0u);
    ctx->pc = 0x22D0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D0A8u;
            // 0x22d0ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229FB0u;
    if (runtime->hasFunction(0x229FB0u)) {
        auto targetFn = runtime->lookupFunction(0x229FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D0B0u; }
        if (ctx->pc != 0x22D0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229FB0_0x229fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D0B0u; }
        if (ctx->pc != 0x22D0B0u) { return; }
    }
    ctx->pc = 0x22D0B0u;
label_22d0b0:
    // 0x22d0b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22d0b4:
    // 0x22d0b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d0b8:
    // 0x22d0b8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_22d0bc:
    if (ctx->pc == 0x22D0BCu) {
        ctx->pc = 0x22D0BCu;
            // 0x22d0bc: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x22D0C0u;
        goto label_22d0c0;
    }
    ctx->pc = 0x22D0B8u;
    {
        const bool branch_taken_0x22d0b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D0B8u;
            // 0x22d0bc: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0b8) {
            ctx->pc = 0x22D0C4u;
            goto label_22d0c4;
        }
    }
    ctx->pc = 0x22D0C0u;
label_22d0c0:
    // 0x22d0c0: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x22d0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_22d0c4:
    // 0x22d0c4: 0xc08ad18  jal         func_22B460
label_22d0c8:
    if (ctx->pc == 0x22D0C8u) {
        ctx->pc = 0x22D0C8u;
            // 0x22d0c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D0CCu;
        goto label_22d0cc;
    }
    ctx->pc = 0x22D0C4u;
    SET_GPR_U32(ctx, 31, 0x22D0CCu);
    ctx->pc = 0x22D0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D0C4u;
            // 0x22d0c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B460u;
    if (runtime->hasFunction(0x22B460u)) {
        auto targetFn = runtime->lookupFunction(0x22B460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D0CCu; }
        if (ctx->pc != 0x22D0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B460_0x22b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D0CCu; }
        if (ctx->pc != 0x22D0CCu) { return; }
    }
    ctx->pc = 0x22D0CCu;
label_22d0cc:
    // 0x22d0cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d0d0:
    // 0x22d0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d0d4:
    // 0x22d0d4: 0xc08c798  jal         func_231E60
label_22d0d8:
    if (ctx->pc == 0x22D0D8u) {
        ctx->pc = 0x22D0D8u;
            // 0x22d0d8: 0xae32001c  sw          $s2, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
        ctx->pc = 0x22D0DCu;
        goto label_22d0dc;
    }
    ctx->pc = 0x22D0D4u;
    SET_GPR_U32(ctx, 31, 0x22D0DCu);
    ctx->pc = 0x22D0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D0D4u;
            // 0x22d0d8: 0xae32001c  sw          $s2, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D0DCu; }
        if (ctx->pc != 0x22D0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D0DCu; }
        if (ctx->pc != 0x22D0DCu) { return; }
    }
    ctx->pc = 0x22D0DCu;
label_22d0dc:
    // 0x22d0dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22d0e0:
    // 0x22d0e0: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x22d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_22d0e4:
    // 0x22d0e4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22d0e8:
    // 0x22d0e8: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x22d0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_22d0ec:
    // 0x22d0ec: 0xe7b70060  swc1        $f23, 0x60($sp)
    ctx->pc = 0x22d0ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_22d0f0:
    // 0x22d0f0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x22d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_22d0f4:
    // 0x22d0f4: 0xe7b80064  swc1        $f24, 0x64($sp)
    ctx->pc = 0x22d0f4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_22d0f8:
    // 0x22d0f8: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x22d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_22d0fc:
    // 0x22d0fc: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x22d0fcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_22d100:
    // 0x22d100: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x22d100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_22d104:
    // 0x22d104: 0xe7b80074  swc1        $f24, 0x74($sp)
    ctx->pc = 0x22d104u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_22d108:
    // 0x22d108: 0xc0a7a88  jal         func_29EA20
label_22d10c:
    if (ctx->pc == 0x22D10Cu) {
        ctx->pc = 0x22D10Cu;
            // 0x22d10c: 0xe7b60078  swc1        $f22, 0x78($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x22D110u;
        goto label_22d110;
    }
    ctx->pc = 0x22D108u;
    SET_GPR_U32(ctx, 31, 0x22D110u);
    ctx->pc = 0x22D10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D108u;
            // 0x22d10c: 0xe7b60078  swc1        $f22, 0x78($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D110u; }
        if (ctx->pc != 0x22D110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D110u; }
        if (ctx->pc != 0x22D110u) { return; }
    }
    ctx->pc = 0x22D110u;
label_22d110:
    // 0x22d110: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x22d110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_22d114:
    // 0x22d114: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22d114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d118:
    // 0x22d118: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_22d11c:
    if (ctx->pc == 0x22D11Cu) {
        ctx->pc = 0x22D11Cu;
            // 0x22d11c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22D120u;
        goto label_22d120;
    }
    ctx->pc = 0x22D118u;
    {
        const bool branch_taken_0x22d118 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D118u;
            // 0x22d11c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d118) {
            ctx->pc = 0x22D130u;
            goto label_22d130;
        }
    }
    ctx->pc = 0x22D120u;
label_22d120:
    // 0x22d120: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d124:
    // 0x22d124: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22d124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22d128:
    // 0x22d128: 0xc08a7ec  jal         func_229FB0
label_22d12c:
    if (ctx->pc == 0x22D12Cu) {
        ctx->pc = 0x22D12Cu;
            // 0x22d12c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D130u;
        goto label_22d130;
    }
    ctx->pc = 0x22D128u;
    SET_GPR_U32(ctx, 31, 0x22D130u);
    ctx->pc = 0x22D12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D128u;
            // 0x22d12c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229FB0u;
    if (runtime->hasFunction(0x229FB0u)) {
        auto targetFn = runtime->lookupFunction(0x229FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D130u; }
        if (ctx->pc != 0x22D130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229FB0_0x229fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D130u; }
        if (ctx->pc != 0x22D130u) { return; }
    }
    ctx->pc = 0x22D130u;
label_22d130:
    // 0x22d130: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22d134:
    // 0x22d134: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d138:
    // 0x22d138: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_22d13c:
    if (ctx->pc == 0x22D13Cu) {
        ctx->pc = 0x22D13Cu;
            // 0x22d13c: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x22D140u;
        goto label_22d140;
    }
    ctx->pc = 0x22D138u;
    {
        const bool branch_taken_0x22d138 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D138u;
            // 0x22d13c: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d138) {
            ctx->pc = 0x22D144u;
            goto label_22d144;
        }
    }
    ctx->pc = 0x22D140u;
label_22d140:
    // 0x22d140: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x22d140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_22d144:
    // 0x22d144: 0xc08ad18  jal         func_22B460
label_22d148:
    if (ctx->pc == 0x22D148u) {
        ctx->pc = 0x22D148u;
            // 0x22d148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D14Cu;
        goto label_22d14c;
    }
    ctx->pc = 0x22D144u;
    SET_GPR_U32(ctx, 31, 0x22D14Cu);
    ctx->pc = 0x22D148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D144u;
            // 0x22d148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B460u;
    if (runtime->hasFunction(0x22B460u)) {
        auto targetFn = runtime->lookupFunction(0x22B460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D14Cu; }
        if (ctx->pc != 0x22D14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B460_0x22b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D14Cu; }
        if (ctx->pc != 0x22D14Cu) { return; }
    }
    ctx->pc = 0x22D14Cu;
label_22d14c:
    // 0x22d14c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d150:
    // 0x22d150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d154:
    // 0x22d154: 0xc08c798  jal         func_231E60
label_22d158:
    if (ctx->pc == 0x22D158u) {
        ctx->pc = 0x22D158u;
            // 0x22d158: 0xae320020  sw          $s2, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 18));
        ctx->pc = 0x22D15Cu;
        goto label_22d15c;
    }
    ctx->pc = 0x22D154u;
    SET_GPR_U32(ctx, 31, 0x22D15Cu);
    ctx->pc = 0x22D158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D154u;
            // 0x22d158: 0xae320020  sw          $s2, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D15Cu; }
        if (ctx->pc != 0x22D15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D15Cu; }
        if (ctx->pc != 0x22D15Cu) { return; }
    }
    ctx->pc = 0x22D15Cu;
label_22d15c:
    // 0x22d15c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22d160:
    // 0x22d160: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x22d160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_22d164:
    // 0x22d164: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22d164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22d168:
    // 0x22d168: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x22d168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_22d16c:
    // 0x22d16c: 0xe7b70060  swc1        $f23, 0x60($sp)
    ctx->pc = 0x22d16cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_22d170:
    // 0x22d170: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x22d170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_22d174:
    // 0x22d174: 0xe7b80064  swc1        $f24, 0x64($sp)
    ctx->pc = 0x22d174u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_22d178:
    // 0x22d178: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x22d178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_22d17c:
    // 0x22d17c: 0xe7b60068  swc1        $f22, 0x68($sp)
    ctx->pc = 0x22d17cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_22d180:
    // 0x22d180: 0xe7b60078  swc1        $f22, 0x78($sp)
    ctx->pc = 0x22d180u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_22d184:
    // 0x22d184: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x22d184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_22d188:
    // 0x22d188: 0xc0a7a88  jal         func_29EA20
label_22d18c:
    if (ctx->pc == 0x22D18Cu) {
        ctx->pc = 0x22D18Cu;
            // 0x22d18c: 0xe7b50074  swc1        $f21, 0x74($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->pc = 0x22D190u;
        goto label_22d190;
    }
    ctx->pc = 0x22D188u;
    SET_GPR_U32(ctx, 31, 0x22D190u);
    ctx->pc = 0x22D18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D188u;
            // 0x22d18c: 0xe7b50074  swc1        $f21, 0x74($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D190u; }
        if (ctx->pc != 0x22D190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D190u; }
        if (ctx->pc != 0x22D190u) { return; }
    }
    ctx->pc = 0x22D190u;
label_22d190:
    // 0x22d190: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x22d190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_22d194:
    // 0x22d194: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22d194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d198:
    // 0x22d198: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_22d19c:
    if (ctx->pc == 0x22D19Cu) {
        ctx->pc = 0x22D19Cu;
            // 0x22d19c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22D1A0u;
        goto label_22d1a0;
    }
    ctx->pc = 0x22D198u;
    {
        const bool branch_taken_0x22d198 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D198u;
            // 0x22d19c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d198) {
            ctx->pc = 0x22D1B0u;
            goto label_22d1b0;
        }
    }
    ctx->pc = 0x22D1A0u;
label_22d1a0:
    // 0x22d1a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d1a4:
    // 0x22d1a4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22d1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22d1a8:
    // 0x22d1a8: 0xc08a7ec  jal         func_229FB0
label_22d1ac:
    if (ctx->pc == 0x22D1ACu) {
        ctx->pc = 0x22D1ACu;
            // 0x22d1ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D1B0u;
        goto label_22d1b0;
    }
    ctx->pc = 0x22D1A8u;
    SET_GPR_U32(ctx, 31, 0x22D1B0u);
    ctx->pc = 0x22D1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1A8u;
            // 0x22d1ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229FB0u;
    if (runtime->hasFunction(0x229FB0u)) {
        auto targetFn = runtime->lookupFunction(0x229FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D1B0u; }
        if (ctx->pc != 0x22D1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229FB0_0x229fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D1B0u; }
        if (ctx->pc != 0x22D1B0u) { return; }
    }
    ctx->pc = 0x22D1B0u;
label_22d1b0:
    // 0x22d1b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22d1b4:
    // 0x22d1b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d1b8:
    // 0x22d1b8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_22d1bc:
    if (ctx->pc == 0x22D1BCu) {
        ctx->pc = 0x22D1BCu;
            // 0x22d1bc: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x22D1C0u;
        goto label_22d1c0;
    }
    ctx->pc = 0x22D1B8u;
    {
        const bool branch_taken_0x22d1b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1B8u;
            // 0x22d1bc: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1b8) {
            ctx->pc = 0x22D1C4u;
            goto label_22d1c4;
        }
    }
    ctx->pc = 0x22D1C0u;
label_22d1c0:
    // 0x22d1c0: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x22d1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_22d1c4:
    // 0x22d1c4: 0xc08ad18  jal         func_22B460
label_22d1c8:
    if (ctx->pc == 0x22D1C8u) {
        ctx->pc = 0x22D1C8u;
            // 0x22d1c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D1CCu;
        goto label_22d1cc;
    }
    ctx->pc = 0x22D1C4u;
    SET_GPR_U32(ctx, 31, 0x22D1CCu);
    ctx->pc = 0x22D1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1C4u;
            // 0x22d1c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B460u;
    if (runtime->hasFunction(0x22B460u)) {
        auto targetFn = runtime->lookupFunction(0x22B460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D1CCu; }
        if (ctx->pc != 0x22D1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B460_0x22b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D1CCu; }
        if (ctx->pc != 0x22D1CCu) { return; }
    }
    ctx->pc = 0x22D1CCu;
label_22d1cc:
    // 0x22d1cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d1d0:
    // 0x22d1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d1d4:
    // 0x22d1d4: 0xc08c798  jal         func_231E60
label_22d1d8:
    if (ctx->pc == 0x22D1D8u) {
        ctx->pc = 0x22D1D8u;
            // 0x22d1d8: 0xae320024  sw          $s2, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
        ctx->pc = 0x22D1DCu;
        goto label_22d1dc;
    }
    ctx->pc = 0x22D1D4u;
    SET_GPR_U32(ctx, 31, 0x22D1DCu);
    ctx->pc = 0x22D1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1D4u;
            // 0x22d1d8: 0xae320024  sw          $s2, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D1DCu; }
        if (ctx->pc != 0x22D1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D1DCu; }
        if (ctx->pc != 0x22D1DCu) { return; }
    }
    ctx->pc = 0x22D1DCu;
label_22d1dc:
    // 0x22d1dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22d1e0:
    // 0x22d1e0: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x22d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_22d1e4:
    // 0x22d1e4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22d1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22d1e8:
    // 0x22d1e8: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x22d1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_22d1ec:
    // 0x22d1ec: 0xe7b70060  swc1        $f23, 0x60($sp)
    ctx->pc = 0x22d1ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_22d1f0:
    // 0x22d1f0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x22d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_22d1f4:
    // 0x22d1f4: 0xe7b80064  swc1        $f24, 0x64($sp)
    ctx->pc = 0x22d1f4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_22d1f8:
    // 0x22d1f8: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x22d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_22d1fc:
    // 0x22d1fc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x22d1fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_22d200:
    // 0x22d200: 0xe7b50074  swc1        $f21, 0x74($sp)
    ctx->pc = 0x22d200u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_22d204:
    // 0x22d204: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x22d204u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_22d208:
    // 0x22d208: 0xc0a7a88  jal         func_29EA20
label_22d20c:
    if (ctx->pc == 0x22D20Cu) {
        ctx->pc = 0x22D20Cu;
            // 0x22d20c: 0xe7b90078  swc1        $f25, 0x78($sp) (Delay Slot)
        { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x22D210u;
        goto label_22d210;
    }
    ctx->pc = 0x22D208u;
    SET_GPR_U32(ctx, 31, 0x22D210u);
    ctx->pc = 0x22D20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D208u;
            // 0x22d20c: 0xe7b90078  swc1        $f25, 0x78($sp) (Delay Slot)
        { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D210u; }
        if (ctx->pc != 0x22D210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D210u; }
        if (ctx->pc != 0x22D210u) { return; }
    }
    ctx->pc = 0x22D210u;
label_22d210:
    // 0x22d210: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x22d210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_22d214:
    // 0x22d214: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22d214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d218:
    // 0x22d218: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_22d21c:
    if (ctx->pc == 0x22D21Cu) {
        ctx->pc = 0x22D21Cu;
            // 0x22d21c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22D220u;
        goto label_22d220;
    }
    ctx->pc = 0x22D218u;
    {
        const bool branch_taken_0x22d218 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D218u;
            // 0x22d21c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d218) {
            ctx->pc = 0x22D230u;
            goto label_22d230;
        }
    }
    ctx->pc = 0x22D220u;
label_22d220:
    // 0x22d220: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d224:
    // 0x22d224: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22d224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22d228:
    // 0x22d228: 0xc08a7ec  jal         func_229FB0
label_22d22c:
    if (ctx->pc == 0x22D22Cu) {
        ctx->pc = 0x22D22Cu;
            // 0x22d22c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D230u;
        goto label_22d230;
    }
    ctx->pc = 0x22D228u;
    SET_GPR_U32(ctx, 31, 0x22D230u);
    ctx->pc = 0x22D22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D228u;
            // 0x22d22c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229FB0u;
    if (runtime->hasFunction(0x229FB0u)) {
        auto targetFn = runtime->lookupFunction(0x229FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D230u; }
        if (ctx->pc != 0x22D230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229FB0_0x229fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D230u; }
        if (ctx->pc != 0x22D230u) { return; }
    }
    ctx->pc = 0x22D230u;
label_22d230:
    // 0x22d230: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22d230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22d234:
    // 0x22d234: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d238:
    // 0x22d238: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_22d23c:
    if (ctx->pc == 0x22D23Cu) {
        ctx->pc = 0x22D23Cu;
            // 0x22d23c: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x22D240u;
        goto label_22d240;
    }
    ctx->pc = 0x22D238u;
    {
        const bool branch_taken_0x22d238 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D238u;
            // 0x22d23c: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d238) {
            ctx->pc = 0x22D244u;
            goto label_22d244;
        }
    }
    ctx->pc = 0x22D240u;
label_22d240:
    // 0x22d240: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x22d240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_22d244:
    // 0x22d244: 0xc08ad18  jal         func_22B460
label_22d248:
    if (ctx->pc == 0x22D248u) {
        ctx->pc = 0x22D248u;
            // 0x22d248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D24Cu;
        goto label_22d24c;
    }
    ctx->pc = 0x22D244u;
    SET_GPR_U32(ctx, 31, 0x22D24Cu);
    ctx->pc = 0x22D248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D244u;
            // 0x22d248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B460u;
    if (runtime->hasFunction(0x22B460u)) {
        auto targetFn = runtime->lookupFunction(0x22B460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D24Cu; }
        if (ctx->pc != 0x22D24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B460_0x22b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D24Cu; }
        if (ctx->pc != 0x22D24Cu) { return; }
    }
    ctx->pc = 0x22D24Cu;
label_22d24c:
    // 0x22d24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d250:
    // 0x22d250: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d254:
    // 0x22d254: 0xc08c798  jal         func_231E60
label_22d258:
    if (ctx->pc == 0x22D258u) {
        ctx->pc = 0x22D258u;
            // 0x22d258: 0xae320028  sw          $s2, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
        ctx->pc = 0x22D25Cu;
        goto label_22d25c;
    }
    ctx->pc = 0x22D254u;
    SET_GPR_U32(ctx, 31, 0x22D25Cu);
    ctx->pc = 0x22D258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D254u;
            // 0x22d258: 0xae320028  sw          $s2, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D25Cu; }
        if (ctx->pc != 0x22D25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D25Cu; }
        if (ctx->pc != 0x22D25Cu) { return; }
    }
    ctx->pc = 0x22D25Cu;
label_22d25c:
    // 0x22d25c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22d25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d260:
    // 0x22d260: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22d260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22d264:
    // 0x22d264: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x22d264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22d268:
    // 0x22d268: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x22d268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_22d26c:
    // 0x22d26c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22d26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22d270:
    // 0x22d270: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x22d270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_22d274:
    // 0x22d274: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22d274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d278:
    // 0x22d278: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x22d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_22d27c:
    // 0x22d27c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x22d27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_22d280:
    // 0x22d280: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x22d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_22d284:
    // 0x22d284: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22d284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22d288:
    // 0x22d288: 0x3e00008  jr          $ra
label_22d28c:
    if (ctx->pc == 0x22D28Cu) {
        ctx->pc = 0x22D28Cu;
            // 0x22d28c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x22D290u;
        goto label_22d290;
    }
    ctx->pc = 0x22D288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D288u;
            // 0x22d28c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D290u;
label_22d290:
    // 0x22d290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22d294:
    // 0x22d294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22d294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22d298:
    // 0x22d298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22d29c:
    // 0x22d29c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d2a0:
    // 0x22d2a0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_22d2a4:
    if (ctx->pc == 0x22D2A4u) {
        ctx->pc = 0x22D2A4u;
            // 0x22d2a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D2A8u;
        goto label_22d2a8;
    }
    ctx->pc = 0x22D2A0u;
    {
        const bool branch_taken_0x22d2a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d2a0) {
            ctx->pc = 0x22D2A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D2A0u;
            // 0x22d2a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D2CCu;
            goto label_22d2cc;
        }
    }
    ctx->pc = 0x22D2A8u;
label_22d2a8:
    // 0x22d2a8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x22d2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_22d2ac:
    // 0x22d2ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x22d2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_22d2b0:
    // 0x22d2b0: 0x2463f030  addiu       $v1, $v1, -0xFD0
    ctx->pc = 0x22d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963248));
label_22d2b4:
    // 0x22d2b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22d2b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22d2b8:
    // 0x22d2b8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_22d2bc:
    if (ctx->pc == 0x22D2BCu) {
        ctx->pc = 0x22D2BCu;
            // 0x22d2bc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x22D2C0u;
        goto label_22d2c0;
    }
    ctx->pc = 0x22D2B8u;
    {
        const bool branch_taken_0x22d2b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22D2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D2B8u;
            // 0x22d2bc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2b8) {
            ctx->pc = 0x22D2C8u;
            goto label_22d2c8;
        }
    }
    ctx->pc = 0x22D2C0u;
label_22d2c0:
    // 0x22d2c0: 0xc0400a8  jal         func_1002A0
label_22d2c4:
    if (ctx->pc == 0x22D2C4u) {
        ctx->pc = 0x22D2C8u;
        goto label_22d2c8;
    }
    ctx->pc = 0x22D2C0u;
    SET_GPR_U32(ctx, 31, 0x22D2C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D2C8u; }
        if (ctx->pc != 0x22D2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D2C8u; }
        if (ctx->pc != 0x22D2C8u) { return; }
    }
    ctx->pc = 0x22D2C8u;
label_22d2c8:
    // 0x22d2c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22d2c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d2cc:
    // 0x22d2cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22d2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22d2d0:
    // 0x22d2d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22d2d4:
    // 0x22d2d4: 0x3e00008  jr          $ra
label_22d2d8:
    if (ctx->pc == 0x22D2D8u) {
        ctx->pc = 0x22D2D8u;
            // 0x22d2d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22D2DCu;
        goto label_22d2dc;
    }
    ctx->pc = 0x22D2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D2D4u;
            // 0x22d2d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D2DCu;
label_22d2dc:
    // 0x22d2dc: 0x0  nop
    ctx->pc = 0x22d2dcu;
    // NOP
label_22d2e0:
    // 0x22d2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22d2e4:
    // 0x22d2e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22d2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22d2e8:
    // 0x22d2e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22d2ec:
    // 0x22d2ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d2f0:
    // 0x22d2f0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_22d2f4:
    if (ctx->pc == 0x22D2F4u) {
        ctx->pc = 0x22D2F4u;
            // 0x22d2f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D2F8u;
        goto label_22d2f8;
    }
    ctx->pc = 0x22D2F0u;
    {
        const bool branch_taken_0x22d2f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d2f0) {
            ctx->pc = 0x22D2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D2F0u;
            // 0x22d2f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D31Cu;
            goto label_22d31c;
        }
    }
    ctx->pc = 0x22D2F8u;
label_22d2f8:
    // 0x22d2f8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x22d2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_22d2fc:
    // 0x22d2fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x22d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_22d300:
    // 0x22d300: 0x2463f050  addiu       $v1, $v1, -0xFB0
    ctx->pc = 0x22d300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963280));
label_22d304:
    // 0x22d304: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22d304u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22d308:
    // 0x22d308: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_22d30c:
    if (ctx->pc == 0x22D30Cu) {
        ctx->pc = 0x22D30Cu;
            // 0x22d30c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x22D310u;
        goto label_22d310;
    }
    ctx->pc = 0x22D308u;
    {
        const bool branch_taken_0x22d308 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22D30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D308u;
            // 0x22d30c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d308) {
            ctx->pc = 0x22D318u;
            goto label_22d318;
        }
    }
    ctx->pc = 0x22D310u;
label_22d310:
    // 0x22d310: 0xc0400a8  jal         func_1002A0
label_22d314:
    if (ctx->pc == 0x22D314u) {
        ctx->pc = 0x22D318u;
        goto label_22d318;
    }
    ctx->pc = 0x22D310u;
    SET_GPR_U32(ctx, 31, 0x22D318u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D318u; }
        if (ctx->pc != 0x22D318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D318u; }
        if (ctx->pc != 0x22D318u) { return; }
    }
    ctx->pc = 0x22D318u;
label_22d318:
    // 0x22d318: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22d318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d31c:
    // 0x22d31c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22d31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22d320:
    // 0x22d320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22d324:
    // 0x22d324: 0x3e00008  jr          $ra
label_22d328:
    if (ctx->pc == 0x22D328u) {
        ctx->pc = 0x22D328u;
            // 0x22d328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22D32Cu;
        goto label_22d32c;
    }
    ctx->pc = 0x22D324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D324u;
            // 0x22d328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D32Cu;
label_22d32c:
    // 0x22d32c: 0x0  nop
    ctx->pc = 0x22d32cu;
    // NOP
label_22d330:
    // 0x22d330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22d330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22d334:
    // 0x22d334: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22d334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22d338:
    // 0x22d338: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22d33c:
    // 0x22d33c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22d340:
    // 0x22d340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22d344:
    // 0x22d344: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22d348:
    // 0x22d348: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22d348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d34c:
    // 0x22d34c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_22d350:
    if (ctx->pc == 0x22D350u) {
        ctx->pc = 0x22D350u;
            // 0x22d350: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D354u;
        goto label_22d354;
    }
    ctx->pc = 0x22D34Cu;
    {
        const bool branch_taken_0x22d34c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D34Cu;
            // 0x22d350: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d34c) {
            ctx->pc = 0x22D424u;
            goto label_22d424;
        }
    }
    ctx->pc = 0x22D354u;
label_22d354:
    // 0x22d354: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22d354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22d358:
    // 0x22d358: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x22d358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_22d35c:
    // 0x22d35c: 0x2442efe0  addiu       $v0, $v0, -0x1020
    ctx->pc = 0x22d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963168));
label_22d360:
    // 0x22d360: 0x2463eff0  addiu       $v1, $v1, -0x1010
    ctx->pc = 0x22d360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963184));
label_22d364:
    // 0x22d364: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22d364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22d368:
    // 0x22d368: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22d368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d36c:
    // 0x22d36c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22d370:
    // 0x22d370: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x22d370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_22d374:
    // 0x22d374: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x22d374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_22d378:
    // 0x22d378: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x22d378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d37c:
    // 0x22d37c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x22d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_22d380:
    // 0x22d380: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x22d380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_22d384:
    // 0x22d384: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_22d388:
    if (ctx->pc == 0x22D388u) {
        ctx->pc = 0x22D38Cu;
        goto label_22d38c;
    }
    ctx->pc = 0x22D384u;
    {
        const bool branch_taken_0x22d384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d384) {
            ctx->pc = 0x22D398u;
            goto label_22d398;
        }
    }
    ctx->pc = 0x22D38Cu;
label_22d38c:
    // 0x22d38c: 0xc08d414  jal         func_235050
label_22d390:
    if (ctx->pc == 0x22D390u) {
        ctx->pc = 0x22D394u;
        goto label_22d394;
    }
    ctx->pc = 0x22D38Cu;
    SET_GPR_U32(ctx, 31, 0x22D394u);
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D394u; }
        if (ctx->pc != 0x22D394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D394u; }
        if (ctx->pc != 0x22D394u) { return; }
    }
    ctx->pc = 0x22D394u;
label_22d394:
    // 0x22d394: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x22d394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_22d398:
    // 0x22d398: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22d398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_22d39c:
    // 0x22d39c: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x22d39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_22d3a0:
    // 0x22d3a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_22d3a4:
    if (ctx->pc == 0x22D3A4u) {
        ctx->pc = 0x22D3A4u;
            // 0x22d3a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x22D3A8u;
        goto label_22d3a8;
    }
    ctx->pc = 0x22D3A0u;
    {
        const bool branch_taken_0x22d3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D3A0u;
            // 0x22d3a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3a0) {
            ctx->pc = 0x22D380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d380;
        }
    }
    ctx->pc = 0x22D3A8u;
label_22d3a8:
    // 0x22d3a8: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x22d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_22d3ac:
    // 0x22d3ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22d3b0:
    if (ctx->pc == 0x22D3B0u) {
        ctx->pc = 0x22D3B0u;
            // 0x22d3b0: 0x26220008  addiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x22D3B4u;
        goto label_22d3b4;
    }
    ctx->pc = 0x22D3ACu;
    {
        const bool branch_taken_0x22d3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d3ac) {
            ctx->pc = 0x22D3B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D3ACu;
            // 0x22d3b0: 0x26220008  addiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D3C4u;
            goto label_22d3c4;
        }
    }
    ctx->pc = 0x22D3B4u;
label_22d3b4:
    // 0x22d3b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22d3b8:
    // 0x22d3b8: 0x2442f030  addiu       $v0, $v0, -0xFD0
    ctx->pc = 0x22d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963248));
label_22d3bc:
    // 0x22d3bc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x22d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_22d3c0:
    // 0x22d3c0: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x22d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_22d3c4:
    // 0x22d3c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22d3c8:
    if (ctx->pc == 0x22D3C8u) {
        ctx->pc = 0x22D3CCu;
        goto label_22d3cc;
    }
    ctx->pc = 0x22D3C4u;
    {
        const bool branch_taken_0x22d3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d3c4) {
            ctx->pc = 0x22D3D8u;
            goto label_22d3d8;
        }
    }
    ctx->pc = 0x22D3CCu;
label_22d3cc:
    // 0x22d3cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22d3d0:
    // 0x22d3d0: 0x2442f050  addiu       $v0, $v0, -0xFB0
    ctx->pc = 0x22d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963280));
label_22d3d4:
    // 0x22d3d4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_22d3d8:
    // 0x22d3d8: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_22d3dc:
    if (ctx->pc == 0x22D3DCu) {
        ctx->pc = 0x22D3DCu;
            // 0x22d3dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x22D3E0u;
        goto label_22d3e0;
    }
    ctx->pc = 0x22D3D8u;
    {
        const bool branch_taken_0x22d3d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d3d8) {
            ctx->pc = 0x22D3DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D3D8u;
            // 0x22d3dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D400u;
            goto label_22d400;
        }
    }
    ctx->pc = 0x22D3E0u;
label_22d3e0:
    // 0x22d3e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22d3e4:
    // 0x22d3e4: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_22d3e8:
    // 0x22d3e8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_22d3ec:
    if (ctx->pc == 0x22D3ECu) {
        ctx->pc = 0x22D3ECu;
            // 0x22d3ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22D3F0u;
        goto label_22d3f0;
    }
    ctx->pc = 0x22D3E8u;
    {
        const bool branch_taken_0x22d3e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D3E8u;
            // 0x22d3ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3e8) {
            ctx->pc = 0x22D3FCu;
            goto label_22d3fc;
        }
    }
    ctx->pc = 0x22D3F0u;
label_22d3f0:
    // 0x22d3f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22d3f4:
    // 0x22d3f4: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_22d3f8:
    // 0x22d3f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22d3fc:
    // 0x22d3fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x22d3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_22d400:
    // 0x22d400: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22d400u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22d404:
    // 0x22d404: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_22d408:
    if (ctx->pc == 0x22D408u) {
        ctx->pc = 0x22D408u;
            // 0x22d408: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D40Cu;
        goto label_22d40c;
    }
    ctx->pc = 0x22D404u;
    {
        const bool branch_taken_0x22d404 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22d404) {
            ctx->pc = 0x22D408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D404u;
            // 0x22d408: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D428u;
            goto label_22d428;
        }
    }
    ctx->pc = 0x22D40Cu;
label_22d40c:
    // 0x22d40c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22d410:
    // 0x22d410: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x22d410u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_22d414:
    // 0x22d414: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22d414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22d418:
    // 0x22d418: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d41c:
    // 0x22d41c: 0xc0a7ab4  jal         func_29EAD0
label_22d420:
    if (ctx->pc == 0x22D420u) {
        ctx->pc = 0x22D420u;
            // 0x22d420: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x22D424u;
        goto label_22d424;
    }
    ctx->pc = 0x22D41Cu;
    SET_GPR_U32(ctx, 31, 0x22D424u);
    ctx->pc = 0x22D420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D41Cu;
            // 0x22d420: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D424u; }
        if (ctx->pc != 0x22D424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D424u; }
        if (ctx->pc != 0x22D424u) { return; }
    }
    ctx->pc = 0x22D424u;
label_22d424:
    // 0x22d424: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22d424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d428:
    // 0x22d428: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22d428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22d42c:
    // 0x22d42c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22d42cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22d430:
    // 0x22d430: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d434:
    // 0x22d434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d438:
    // 0x22d438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22d43c:
    // 0x22d43c: 0x3e00008  jr          $ra
label_22d440:
    if (ctx->pc == 0x22D440u) {
        ctx->pc = 0x22D440u;
            // 0x22d440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x22D444u;
        goto label_22d444;
    }
    ctx->pc = 0x22D43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D43Cu;
            // 0x22d440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D444u;
label_22d444:
    // 0x22d444: 0x0  nop
    ctx->pc = 0x22d444u;
    // NOP
label_22d448:
    // 0x22d448: 0x0  nop
    ctx->pc = 0x22d448u;
    // NOP
label_22d44c:
    // 0x22d44c: 0x0  nop
    ctx->pc = 0x22d44cu;
    // NOP
label_22d450:
    // 0x22d450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22d450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22d454:
    // 0x22d454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d458:
    // 0x22d458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22d45c:
    // 0x22d45c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x22d45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_22d460:
    // 0x22d460: 0x80c50018  lb          $a1, 0x18($a2)
    ctx->pc = 0x22d460u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
label_22d464:
    // 0x22d464: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
label_22d468:
    if (ctx->pc == 0x22D468u) {
        ctx->pc = 0x22D468u;
            // 0x22d468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D46Cu;
        goto label_22d46c;
    }
    ctx->pc = 0x22D464u;
    {
        const bool branch_taken_0x22d464 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x22d464) {
            ctx->pc = 0x22D468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D464u;
            // 0x22d468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D474u;
            goto label_22d474;
        }
    }
    ctx->pc = 0x22D46Cu;
label_22d46c:
    // 0x22d46c: 0x80c30010  lb          $v1, 0x10($a2)
    ctx->pc = 0x22d46cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_22d470:
    // 0x22d470: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x22d470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_22d474:
    // 0x22d474: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_22d478:
    if (ctx->pc == 0x22D478u) {
        ctx->pc = 0x22D478u;
            // 0x22d478: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x22D47Cu;
        goto label_22d47c;
    }
    ctx->pc = 0x22D474u;
    {
        const bool branch_taken_0x22d474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d474) {
            ctx->pc = 0x22D478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D474u;
            // 0x22d478: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D490u;
            goto label_22d490;
        }
    }
    ctx->pc = 0x22D47Cu;
label_22d47c:
    // 0x22d47c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22d47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22d480:
    // 0x22d480: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x22d480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_22d484:
    // 0x22d484: 0x320f809  jalr        $t9
label_22d488:
    if (ctx->pc == 0x22D488u) {
        ctx->pc = 0x22D48Cu;
        goto label_22d48c;
    }
    ctx->pc = 0x22D484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22D48Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22D48Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22D48Cu; }
            if (ctx->pc != 0x22D48Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22D48Cu;
label_22d48c:
    // 0x22d48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d490:
    // 0x22d490: 0x3e00008  jr          $ra
label_22d494:
    if (ctx->pc == 0x22D494u) {
        ctx->pc = 0x22D494u;
            // 0x22d494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x22D498u;
        goto label_22d498;
    }
    ctx->pc = 0x22D490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D490u;
            // 0x22d494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D498u;
label_22d498:
    // 0x22d498: 0x0  nop
    ctx->pc = 0x22d498u;
    // NOP
label_22d49c:
    // 0x22d49c: 0x0  nop
    ctx->pc = 0x22d49cu;
    // NOP
label_22d4a0:
    // 0x22d4a0: 0x3e00008  jr          $ra
label_22d4a4:
    if (ctx->pc == 0x22D4A4u) {
        ctx->pc = 0x22D4A8u;
        goto label_22d4a8;
    }
    ctx->pc = 0x22D4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D4A8u;
label_22d4a8:
    // 0x22d4a8: 0x0  nop
    ctx->pc = 0x22d4a8u;
    // NOP
label_22d4ac:
    // 0x22d4ac: 0x0  nop
    ctx->pc = 0x22d4acu;
    // NOP
label_22d4b0:
    // 0x22d4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22d4b4:
    // 0x22d4b4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22d4b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22d4b8:
    // 0x22d4b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22d4bc:
    // 0x22d4bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22d4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d4c0:
    // 0x22d4c0: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x22d4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_22d4c4:
    // 0x22d4c4: 0x50a60012  beql        $a1, $a2, . + 4 + (0x12 << 2)
label_22d4c8:
    if (ctx->pc == 0x22D4C8u) {
        ctx->pc = 0x22D4C8u;
            // 0x22d4c8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D4CCu;
        goto label_22d4cc;
    }
    ctx->pc = 0x22D4C4u;
    {
        const bool branch_taken_0x22d4c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x22d4c4) {
            ctx->pc = 0x22D4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D4C4u;
            // 0x22d4c8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D510u;
            goto label_22d510;
        }
    }
    ctx->pc = 0x22D4CCu;
label_22d4cc:
    // 0x22d4cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d4d0:
    // 0x22d4d0: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
label_22d4d4:
    if (ctx->pc == 0x22D4D4u) {
        ctx->pc = 0x22D4D4u;
            // 0x22d4d4: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x22D4D8u;
        goto label_22d4d8;
    }
    ctx->pc = 0x22D4D0u;
    {
        const bool branch_taken_0x22d4d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x22d4d0) {
            ctx->pc = 0x22D4D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D4D0u;
            // 0x22d4d4: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D4FCu;
            goto label_22d4fc;
        }
    }
    ctx->pc = 0x22D4D8u;
label_22d4d8:
    // 0x22d4d8: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_22d4dc:
    if (ctx->pc == 0x22D4DCu) {
        ctx->pc = 0x22D4DCu;
            // 0x22d4dc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D4E0u;
        goto label_22d4e0;
    }
    ctx->pc = 0x22D4D8u;
    {
        const bool branch_taken_0x22d4d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d4d8) {
            ctx->pc = 0x22D4DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D4D8u;
            // 0x22d4dc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D4E8u;
            goto label_22d4e8;
        }
    }
    ctx->pc = 0x22D4E0u;
label_22d4e0:
    // 0x22d4e0: 0x1000000f  b           . + 4 + (0xF << 2)
label_22d4e4:
    if (ctx->pc == 0x22D4E4u) {
        ctx->pc = 0x22D4E4u;
            // 0x22d4e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x22D4E8u;
        goto label_22d4e8;
    }
    ctx->pc = 0x22D4E0u;
    {
        const bool branch_taken_0x22d4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D4E0u;
            // 0x22d4e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4e0) {
            ctx->pc = 0x22D520u;
            goto label_22d520;
        }
    }
    ctx->pc = 0x22D4E8u;
label_22d4e8:
    // 0x22d4e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22d4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22d4ec:
    // 0x22d4ec: 0xc08914c  jal         func_224530
label_22d4f0:
    if (ctx->pc == 0x22D4F0u) {
        ctx->pc = 0x22D4F0u;
            // 0x22d4f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D4F4u;
        goto label_22d4f4;
    }
    ctx->pc = 0x22D4ECu;
    SET_GPR_U32(ctx, 31, 0x22D4F4u);
    ctx->pc = 0x22D4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D4ECu;
            // 0x22d4f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D4F4u; }
        if (ctx->pc != 0x22D4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D4F4u; }
        if (ctx->pc != 0x22D4F4u) { return; }
    }
    ctx->pc = 0x22D4F4u;
label_22d4f4:
    // 0x22d4f4: 0x10000009  b           . + 4 + (0x9 << 2)
label_22d4f8:
    if (ctx->pc == 0x22D4F8u) {
        ctx->pc = 0x22D4FCu;
        goto label_22d4fc;
    }
    ctx->pc = 0x22D4F4u;
    {
        const bool branch_taken_0x22d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d4f4) {
            ctx->pc = 0x22D51Cu;
            goto label_22d51c;
        }
    }
    ctx->pc = 0x22D4FCu;
label_22d4fc:
    // 0x22d4fc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x22d4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22d500:
    // 0x22d500: 0xc08c3f4  jal         func_230FD0
label_22d504:
    if (ctx->pc == 0x22D504u) {
        ctx->pc = 0x22D504u;
            // 0x22d504: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->pc = 0x22D508u;
        goto label_22d508;
    }
    ctx->pc = 0x22D500u;
    SET_GPR_U32(ctx, 31, 0x22D508u);
    ctx->pc = 0x22D504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D500u;
            // 0x22d504: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230FD0u;
    if (runtime->hasFunction(0x230FD0u)) {
        auto targetFn = runtime->lookupFunction(0x230FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D508u; }
        if (ctx->pc != 0x22D508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230FD0_0x230fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D508u; }
        if (ctx->pc != 0x22D508u) { return; }
    }
    ctx->pc = 0x22D508u;
label_22d508:
    // 0x22d508: 0x10000004  b           . + 4 + (0x4 << 2)
label_22d50c:
    if (ctx->pc == 0x22D50Cu) {
        ctx->pc = 0x22D510u;
        goto label_22d510;
    }
    ctx->pc = 0x22D508u;
    {
        const bool branch_taken_0x22d508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d508) {
            ctx->pc = 0x22D51Cu;
            goto label_22d51c;
        }
    }
    ctx->pc = 0x22D510u;
label_22d510:
    // 0x22d510: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22d510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22d514:
    // 0x22d514: 0xc08914c  jal         func_224530
label_22d518:
    if (ctx->pc == 0x22D518u) {
        ctx->pc = 0x22D518u;
            // 0x22d518: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D51Cu;
        goto label_22d51c;
    }
    ctx->pc = 0x22D514u;
    SET_GPR_U32(ctx, 31, 0x22D51Cu);
    ctx->pc = 0x22D518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D514u;
            // 0x22d518: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D51Cu; }
        if (ctx->pc != 0x22D51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D51Cu; }
        if (ctx->pc != 0x22D51Cu) { return; }
    }
    ctx->pc = 0x22D51Cu;
label_22d51c:
    // 0x22d51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d520:
    // 0x22d520: 0x3e00008  jr          $ra
label_22d524:
    if (ctx->pc == 0x22D524u) {
        ctx->pc = 0x22D524u;
            // 0x22d524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22D528u;
        goto label_22d528;
    }
    ctx->pc = 0x22D520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D520u;
            // 0x22d524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D528u;
label_22d528:
    // 0x22d528: 0x0  nop
    ctx->pc = 0x22d528u;
    // NOP
label_22d52c:
    // 0x22d52c: 0x0  nop
    ctx->pc = 0x22d52cu;
    // NOP
label_22d530:
    // 0x22d530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22d534:
    // 0x22d534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22d538:
    // 0x22d538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22d53c:
    // 0x22d53c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d540:
    // 0x22d540: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_22d544:
    if (ctx->pc == 0x22D544u) {
        ctx->pc = 0x22D544u;
            // 0x22d544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D548u;
        goto label_22d548;
    }
    ctx->pc = 0x22D540u;
    {
        const bool branch_taken_0x22d540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D540u;
            // 0x22d544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d540) {
            ctx->pc = 0x22D54Cu;
            goto label_22d54c;
        }
    }
    ctx->pc = 0x22D548u;
label_22d548:
    // 0x22d548: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x22d548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_22d54c:
    // 0x22d54c: 0xc08ca50  jal         func_232940
label_22d550:
    if (ctx->pc == 0x22D550u) {
        ctx->pc = 0x22D550u;
            // 0x22d550: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x22D554u;
        goto label_22d554;
    }
    ctx->pc = 0x22D54Cu;
    SET_GPR_U32(ctx, 31, 0x22D554u);
    ctx->pc = 0x22D550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D54Cu;
            // 0x22d550: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232940u;
    if (runtime->hasFunction(0x232940u)) {
        auto targetFn = runtime->lookupFunction(0x232940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D554u; }
        if (ctx->pc != 0x22D554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232940_0x232940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D554u; }
        if (ctx->pc != 0x22D554u) { return; }
    }
    ctx->pc = 0x22D554u;
label_22d554:
    // 0x22d554: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x22d554u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_22d558:
    // 0x22d558: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_22d55c:
    if (ctx->pc == 0x22D55Cu) {
        ctx->pc = 0x22D55Cu;
            // 0x22d55c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x22D560u;
        goto label_22d560;
    }
    ctx->pc = 0x22D558u;
    {
        const bool branch_taken_0x22d558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d558) {
            ctx->pc = 0x22D55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D558u;
            // 0x22d55c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D59Cu;
            goto label_22d59c;
        }
    }
    ctx->pc = 0x22D560u;
label_22d560:
    // 0x22d560: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x22d560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_22d564:
    // 0x22d564: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22d564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22d568:
    // 0x22d568: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x22d568u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_22d56c:
    // 0x22d56c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x22d56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_22d570:
    // 0x22d570: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22d570u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_22d574:
    // 0x22d574: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_22d578:
    if (ctx->pc == 0x22D578u) {
        ctx->pc = 0x22D57Cu;
        goto label_22d57c;
    }
    ctx->pc = 0x22D574u;
    {
        const bool branch_taken_0x22d574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d574) {
            ctx->pc = 0x22D598u;
            goto label_22d598;
        }
    }
    ctx->pc = 0x22D57Cu;
label_22d57c:
    // 0x22d57c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_22d580:
    if (ctx->pc == 0x22D580u) {
        ctx->pc = 0x22D584u;
        goto label_22d584;
    }
    ctx->pc = 0x22D57Cu;
    {
        const bool branch_taken_0x22d57c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d57c) {
            ctx->pc = 0x22D598u;
            goto label_22d598;
        }
    }
    ctx->pc = 0x22D584u;
label_22d584:
    // 0x22d584: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x22d584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d588:
    // 0x22d588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d58c:
    // 0x22d58c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22d58cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22d590:
    // 0x22d590: 0x320f809  jalr        $t9
label_22d594:
    if (ctx->pc == 0x22D594u) {
        ctx->pc = 0x22D594u;
            // 0x22d594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22D598u;
        goto label_22d598;
    }
    ctx->pc = 0x22D590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22D598u);
        ctx->pc = 0x22D594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D590u;
            // 0x22d594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22D598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22D598u; }
            if (ctx->pc != 0x22D598u) { return; }
        }
        }
    }
    ctx->pc = 0x22D598u;
label_22d598:
    // 0x22d598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22d598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22d59c:
    // 0x22d59c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22d5a0:
    // 0x22d5a0: 0x3e00008  jr          $ra
label_22d5a4:
    if (ctx->pc == 0x22D5A4u) {
        ctx->pc = 0x22D5A4u;
            // 0x22d5a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22D5A8u;
        goto label_22d5a8;
    }
    ctx->pc = 0x22D5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D5A0u;
            // 0x22d5a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D5A8u;
label_22d5a8:
    // 0x22d5a8: 0x0  nop
    ctx->pc = 0x22d5a8u;
    // NOP
label_22d5ac:
    // 0x22d5ac: 0x0  nop
    ctx->pc = 0x22d5acu;
    // NOP
label_22d5b0:
    // 0x22d5b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22d5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22d5b4:
    // 0x22d5b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22d5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22d5b8:
    // 0x22d5b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22d5bc:
    // 0x22d5bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22d5c0:
    // 0x22d5c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22d5c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d5c4:
    // 0x22d5c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22d5c8:
    // 0x22d5c8: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x22d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_22d5cc:
    // 0x22d5cc: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
label_22d5d0:
    if (ctx->pc == 0x22D5D0u) {
        ctx->pc = 0x22D5D0u;
            // 0x22d5d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x22D5D4u;
        goto label_22d5d4;
    }
    ctx->pc = 0x22D5CCu;
    {
        const bool branch_taken_0x22d5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d5cc) {
            ctx->pc = 0x22D5D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D5CCu;
            // 0x22d5d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D638u;
            goto label_22d638;
        }
    }
    ctx->pc = 0x22D5D4u;
label_22d5d4:
    // 0x22d5d4: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x22d5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_22d5d8:
    // 0x22d5d8: 0xc08c94c  jal         func_232530
label_22d5dc:
    if (ctx->pc == 0x22D5DCu) {
        ctx->pc = 0x22D5DCu;
            // 0x22d5dc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x22D5E0u;
        goto label_22d5e0;
    }
    ctx->pc = 0x22D5D8u;
    SET_GPR_U32(ctx, 31, 0x22D5E0u);
    ctx->pc = 0x22D5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D5D8u;
            // 0x22d5dc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232530u;
    if (runtime->hasFunction(0x232530u)) {
        auto targetFn = runtime->lookupFunction(0x232530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D5E0u; }
        if (ctx->pc != 0x22D5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232530_0x232530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D5E0u; }
        if (ctx->pc != 0x22D5E0u) { return; }
    }
    ctx->pc = 0x22D5E0u;
label_22d5e0:
    // 0x22d5e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22d5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d5e4:
    // 0x22d5e4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x22d5e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d5e8:
    // 0x22d5e8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_22d5ec:
    if (ctx->pc == 0x22D5ECu) {
        ctx->pc = 0x22D5ECu;
            // 0x22d5ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D5F0u;
        goto label_22d5f0;
    }
    ctx->pc = 0x22D5E8u;
    {
        const bool branch_taken_0x22d5e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D5E8u;
            // 0x22d5ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5e8) {
            ctx->pc = 0x22D5F8u;
            goto label_22d5f8;
        }
    }
    ctx->pc = 0x22D5F0u;
label_22d5f0:
    // 0x22d5f0: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x22d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_22d5f4:
    // 0x22d5f4: 0x0  nop
    ctx->pc = 0x22d5f4u;
    // NOP
label_22d5f8:
    // 0x22d5f8: 0xc08ad34  jal         func_22B4D0
label_22d5fc:
    if (ctx->pc == 0x22D5FCu) {
        ctx->pc = 0x22D5FCu;
            // 0x22d5fc: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x22D600u;
        goto label_22d600;
    }
    ctx->pc = 0x22D5F8u;
    SET_GPR_U32(ctx, 31, 0x22D600u);
    ctx->pc = 0x22D5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D5F8u;
            // 0x22d5fc: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4D0u;
    if (runtime->hasFunction(0x22B4D0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D600u; }
        if (ctx->pc != 0x22D600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B4D0_0x22b4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D600u; }
        if (ctx->pc != 0x22D600u) { return; }
    }
    ctx->pc = 0x22D600u;
label_22d600:
    // 0x22d600: 0xc08d414  jal         func_235050
label_22d604:
    if (ctx->pc == 0x22D604u) {
        ctx->pc = 0x22D604u;
            // 0x22d604: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x22D608u;
        goto label_22d608;
    }
    ctx->pc = 0x22D600u;
    SET_GPR_U32(ctx, 31, 0x22D608u);
    ctx->pc = 0x22D604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D600u;
            // 0x22d604: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D608u; }
        if (ctx->pc != 0x22D608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D608u; }
        if (ctx->pc != 0x22D608u) { return; }
    }
    ctx->pc = 0x22D608u;
label_22d608:
    // 0x22d608: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22d608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22d60c:
    // 0x22d60c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x22d60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_22d610:
    // 0x22d610: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x22d610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_22d614:
    // 0x22d614: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_22d618:
    if (ctx->pc == 0x22D618u) {
        ctx->pc = 0x22D618u;
            // 0x22d618: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x22D61Cu;
        goto label_22d61c;
    }
    ctx->pc = 0x22D614u;
    {
        const bool branch_taken_0x22d614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D614u;
            // 0x22d618: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d614) {
            ctx->pc = 0x22D5E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d5e8;
        }
    }
    ctx->pc = 0x22D61Cu;
label_22d61c:
    // 0x22d61c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x22d61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22d620:
    // 0x22d620: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x22d620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_22d624:
    // 0x22d624: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x22d624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_22d628:
    // 0x22d628: 0x320f809  jalr        $t9
label_22d62c:
    if (ctx->pc == 0x22D62Cu) {
        ctx->pc = 0x22D62Cu;
            // 0x22d62c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22D630u;
        goto label_22d630;
    }
    ctx->pc = 0x22D628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22D630u);
        ctx->pc = 0x22D62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D628u;
            // 0x22d62c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22D630u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22D630u; }
            if (ctx->pc != 0x22D630u) { return; }
        }
        }
    }
    ctx->pc = 0x22D630u;
label_22d630:
    // 0x22d630: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x22d630u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_22d634:
    // 0x22d634: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22d634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22d638:
    // 0x22d638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d63c:
    // 0x22d63c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d63cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d640:
    // 0x22d640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22d644:
    // 0x22d644: 0x3e00008  jr          $ra
label_22d648:
    if (ctx->pc == 0x22D648u) {
        ctx->pc = 0x22D648u;
            // 0x22d648: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22D64Cu;
        goto label_22d64c;
    }
    ctx->pc = 0x22D644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D644u;
            // 0x22d648: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D64Cu;
label_22d64c:
    // 0x22d64c: 0x0  nop
    ctx->pc = 0x22d64cu;
    // NOP
label_22d650:
    // 0x22d650: 0x808b54c  j           func_22D530
label_22d654:
    if (ctx->pc == 0x22D654u) {
        ctx->pc = 0x22D654u;
            // 0x22d654: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->pc = 0x22D658u;
        goto label_22d658;
    }
    ctx->pc = 0x22D650u;
    ctx->pc = 0x22D654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D650u;
            // 0x22d654: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D530u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_22d530;
    ctx->pc = 0x22D658u;
label_22d658:
    // 0x22d658: 0x0  nop
    ctx->pc = 0x22d658u;
    // NOP
label_22d65c:
    // 0x22d65c: 0x0  nop
    ctx->pc = 0x22d65cu;
    // NOP
label_22d660:
    // 0x22d660: 0x808b4cc  j           func_22D330
label_22d664:
    if (ctx->pc == 0x22D664u) {
        ctx->pc = 0x22D664u;
            // 0x22d664: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->pc = 0x22D668u;
        goto label_22d668;
    }
    ctx->pc = 0x22D660u;
    ctx->pc = 0x22D664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D660u;
            // 0x22d664: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D330u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_22d330;
    ctx->pc = 0x22D668u;
label_22d668:
    // 0x22d668: 0x0  nop
    ctx->pc = 0x22d668u;
    // NOP
label_22d66c:
    // 0x22d66c: 0x0  nop
    ctx->pc = 0x22d66cu;
    // NOP
label_22d670:
    // 0x22d670: 0x808b4cc  j           func_22D330
label_22d674:
    if (ctx->pc == 0x22D674u) {
        ctx->pc = 0x22D674u;
            // 0x22d674: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->pc = 0x22D678u;
        goto label_22d678;
    }
    ctx->pc = 0x22D670u;
    ctx->pc = 0x22D674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D670u;
            // 0x22d674: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D330u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_22d330;
    ctx->pc = 0x22D678u;
label_22d678:
    // 0x22d678: 0x0  nop
    ctx->pc = 0x22d678u;
    // NOP
label_22d67c:
    // 0x22d67c: 0x0  nop
    ctx->pc = 0x22d67cu;
    // NOP
label_22d680:
    // 0x22d680: 0x808b528  j           func_22D4A0
label_22d684:
    if (ctx->pc == 0x22D684u) {
        ctx->pc = 0x22D684u;
            // 0x22d684: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->pc = 0x22D688u;
        goto label_22d688;
    }
    ctx->pc = 0x22D680u;
    ctx->pc = 0x22D684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D680u;
            // 0x22d684: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4A0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_22d4a0;
    ctx->pc = 0x22D688u;
label_22d688:
    // 0x22d688: 0x0  nop
    ctx->pc = 0x22d688u;
    // NOP
label_22d68c:
    // 0x22d68c: 0x0  nop
    ctx->pc = 0x22d68cu;
    // NOP
label_22d690:
    // 0x22d690: 0x808b514  j           func_22D450
label_22d694:
    if (ctx->pc == 0x22D694u) {
        ctx->pc = 0x22D694u;
            // 0x22d694: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->pc = 0x22D698u;
        goto label_22d698;
    }
    ctx->pc = 0x22D690u;
    ctx->pc = 0x22D694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D690u;
            // 0x22d694: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D450u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_22d450;
    ctx->pc = 0x22D698u;
label_22d698:
    // 0x22d698: 0x0  nop
    ctx->pc = 0x22d698u;
    // NOP
label_22d69c:
    // 0x22d69c: 0x0  nop
    ctx->pc = 0x22d69cu;
    // NOP
}
