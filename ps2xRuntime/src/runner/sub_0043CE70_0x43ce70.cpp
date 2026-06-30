#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043CE70
// Address: 0x43ce70 - 0x43dbb0
void sub_0043CE70_0x43ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043CE70_0x43ce70");
#endif

    switch (ctx->pc) {
        case 0x43ce70u: goto label_43ce70;
        case 0x43ce74u: goto label_43ce74;
        case 0x43ce78u: goto label_43ce78;
        case 0x43ce7cu: goto label_43ce7c;
        case 0x43ce80u: goto label_43ce80;
        case 0x43ce84u: goto label_43ce84;
        case 0x43ce88u: goto label_43ce88;
        case 0x43ce8cu: goto label_43ce8c;
        case 0x43ce90u: goto label_43ce90;
        case 0x43ce94u: goto label_43ce94;
        case 0x43ce98u: goto label_43ce98;
        case 0x43ce9cu: goto label_43ce9c;
        case 0x43cea0u: goto label_43cea0;
        case 0x43cea4u: goto label_43cea4;
        case 0x43cea8u: goto label_43cea8;
        case 0x43ceacu: goto label_43ceac;
        case 0x43ceb0u: goto label_43ceb0;
        case 0x43ceb4u: goto label_43ceb4;
        case 0x43ceb8u: goto label_43ceb8;
        case 0x43cebcu: goto label_43cebc;
        case 0x43cec0u: goto label_43cec0;
        case 0x43cec4u: goto label_43cec4;
        case 0x43cec8u: goto label_43cec8;
        case 0x43ceccu: goto label_43cecc;
        case 0x43ced0u: goto label_43ced0;
        case 0x43ced4u: goto label_43ced4;
        case 0x43ced8u: goto label_43ced8;
        case 0x43cedcu: goto label_43cedc;
        case 0x43cee0u: goto label_43cee0;
        case 0x43cee4u: goto label_43cee4;
        case 0x43cee8u: goto label_43cee8;
        case 0x43ceecu: goto label_43ceec;
        case 0x43cef0u: goto label_43cef0;
        case 0x43cef4u: goto label_43cef4;
        case 0x43cef8u: goto label_43cef8;
        case 0x43cefcu: goto label_43cefc;
        case 0x43cf00u: goto label_43cf00;
        case 0x43cf04u: goto label_43cf04;
        case 0x43cf08u: goto label_43cf08;
        case 0x43cf0cu: goto label_43cf0c;
        case 0x43cf10u: goto label_43cf10;
        case 0x43cf14u: goto label_43cf14;
        case 0x43cf18u: goto label_43cf18;
        case 0x43cf1cu: goto label_43cf1c;
        case 0x43cf20u: goto label_43cf20;
        case 0x43cf24u: goto label_43cf24;
        case 0x43cf28u: goto label_43cf28;
        case 0x43cf2cu: goto label_43cf2c;
        case 0x43cf30u: goto label_43cf30;
        case 0x43cf34u: goto label_43cf34;
        case 0x43cf38u: goto label_43cf38;
        case 0x43cf3cu: goto label_43cf3c;
        case 0x43cf40u: goto label_43cf40;
        case 0x43cf44u: goto label_43cf44;
        case 0x43cf48u: goto label_43cf48;
        case 0x43cf4cu: goto label_43cf4c;
        case 0x43cf50u: goto label_43cf50;
        case 0x43cf54u: goto label_43cf54;
        case 0x43cf58u: goto label_43cf58;
        case 0x43cf5cu: goto label_43cf5c;
        case 0x43cf60u: goto label_43cf60;
        case 0x43cf64u: goto label_43cf64;
        case 0x43cf68u: goto label_43cf68;
        case 0x43cf6cu: goto label_43cf6c;
        case 0x43cf70u: goto label_43cf70;
        case 0x43cf74u: goto label_43cf74;
        case 0x43cf78u: goto label_43cf78;
        case 0x43cf7cu: goto label_43cf7c;
        case 0x43cf80u: goto label_43cf80;
        case 0x43cf84u: goto label_43cf84;
        case 0x43cf88u: goto label_43cf88;
        case 0x43cf8cu: goto label_43cf8c;
        case 0x43cf90u: goto label_43cf90;
        case 0x43cf94u: goto label_43cf94;
        case 0x43cf98u: goto label_43cf98;
        case 0x43cf9cu: goto label_43cf9c;
        case 0x43cfa0u: goto label_43cfa0;
        case 0x43cfa4u: goto label_43cfa4;
        case 0x43cfa8u: goto label_43cfa8;
        case 0x43cfacu: goto label_43cfac;
        case 0x43cfb0u: goto label_43cfb0;
        case 0x43cfb4u: goto label_43cfb4;
        case 0x43cfb8u: goto label_43cfb8;
        case 0x43cfbcu: goto label_43cfbc;
        case 0x43cfc0u: goto label_43cfc0;
        case 0x43cfc4u: goto label_43cfc4;
        case 0x43cfc8u: goto label_43cfc8;
        case 0x43cfccu: goto label_43cfcc;
        case 0x43cfd0u: goto label_43cfd0;
        case 0x43cfd4u: goto label_43cfd4;
        case 0x43cfd8u: goto label_43cfd8;
        case 0x43cfdcu: goto label_43cfdc;
        case 0x43cfe0u: goto label_43cfe0;
        case 0x43cfe4u: goto label_43cfe4;
        case 0x43cfe8u: goto label_43cfe8;
        case 0x43cfecu: goto label_43cfec;
        case 0x43cff0u: goto label_43cff0;
        case 0x43cff4u: goto label_43cff4;
        case 0x43cff8u: goto label_43cff8;
        case 0x43cffcu: goto label_43cffc;
        case 0x43d000u: goto label_43d000;
        case 0x43d004u: goto label_43d004;
        case 0x43d008u: goto label_43d008;
        case 0x43d00cu: goto label_43d00c;
        case 0x43d010u: goto label_43d010;
        case 0x43d014u: goto label_43d014;
        case 0x43d018u: goto label_43d018;
        case 0x43d01cu: goto label_43d01c;
        case 0x43d020u: goto label_43d020;
        case 0x43d024u: goto label_43d024;
        case 0x43d028u: goto label_43d028;
        case 0x43d02cu: goto label_43d02c;
        case 0x43d030u: goto label_43d030;
        case 0x43d034u: goto label_43d034;
        case 0x43d038u: goto label_43d038;
        case 0x43d03cu: goto label_43d03c;
        case 0x43d040u: goto label_43d040;
        case 0x43d044u: goto label_43d044;
        case 0x43d048u: goto label_43d048;
        case 0x43d04cu: goto label_43d04c;
        case 0x43d050u: goto label_43d050;
        case 0x43d054u: goto label_43d054;
        case 0x43d058u: goto label_43d058;
        case 0x43d05cu: goto label_43d05c;
        case 0x43d060u: goto label_43d060;
        case 0x43d064u: goto label_43d064;
        case 0x43d068u: goto label_43d068;
        case 0x43d06cu: goto label_43d06c;
        case 0x43d070u: goto label_43d070;
        case 0x43d074u: goto label_43d074;
        case 0x43d078u: goto label_43d078;
        case 0x43d07cu: goto label_43d07c;
        case 0x43d080u: goto label_43d080;
        case 0x43d084u: goto label_43d084;
        case 0x43d088u: goto label_43d088;
        case 0x43d08cu: goto label_43d08c;
        case 0x43d090u: goto label_43d090;
        case 0x43d094u: goto label_43d094;
        case 0x43d098u: goto label_43d098;
        case 0x43d09cu: goto label_43d09c;
        case 0x43d0a0u: goto label_43d0a0;
        case 0x43d0a4u: goto label_43d0a4;
        case 0x43d0a8u: goto label_43d0a8;
        case 0x43d0acu: goto label_43d0ac;
        case 0x43d0b0u: goto label_43d0b0;
        case 0x43d0b4u: goto label_43d0b4;
        case 0x43d0b8u: goto label_43d0b8;
        case 0x43d0bcu: goto label_43d0bc;
        case 0x43d0c0u: goto label_43d0c0;
        case 0x43d0c4u: goto label_43d0c4;
        case 0x43d0c8u: goto label_43d0c8;
        case 0x43d0ccu: goto label_43d0cc;
        case 0x43d0d0u: goto label_43d0d0;
        case 0x43d0d4u: goto label_43d0d4;
        case 0x43d0d8u: goto label_43d0d8;
        case 0x43d0dcu: goto label_43d0dc;
        case 0x43d0e0u: goto label_43d0e0;
        case 0x43d0e4u: goto label_43d0e4;
        case 0x43d0e8u: goto label_43d0e8;
        case 0x43d0ecu: goto label_43d0ec;
        case 0x43d0f0u: goto label_43d0f0;
        case 0x43d0f4u: goto label_43d0f4;
        case 0x43d0f8u: goto label_43d0f8;
        case 0x43d0fcu: goto label_43d0fc;
        case 0x43d100u: goto label_43d100;
        case 0x43d104u: goto label_43d104;
        case 0x43d108u: goto label_43d108;
        case 0x43d10cu: goto label_43d10c;
        case 0x43d110u: goto label_43d110;
        case 0x43d114u: goto label_43d114;
        case 0x43d118u: goto label_43d118;
        case 0x43d11cu: goto label_43d11c;
        case 0x43d120u: goto label_43d120;
        case 0x43d124u: goto label_43d124;
        case 0x43d128u: goto label_43d128;
        case 0x43d12cu: goto label_43d12c;
        case 0x43d130u: goto label_43d130;
        case 0x43d134u: goto label_43d134;
        case 0x43d138u: goto label_43d138;
        case 0x43d13cu: goto label_43d13c;
        case 0x43d140u: goto label_43d140;
        case 0x43d144u: goto label_43d144;
        case 0x43d148u: goto label_43d148;
        case 0x43d14cu: goto label_43d14c;
        case 0x43d150u: goto label_43d150;
        case 0x43d154u: goto label_43d154;
        case 0x43d158u: goto label_43d158;
        case 0x43d15cu: goto label_43d15c;
        case 0x43d160u: goto label_43d160;
        case 0x43d164u: goto label_43d164;
        case 0x43d168u: goto label_43d168;
        case 0x43d16cu: goto label_43d16c;
        case 0x43d170u: goto label_43d170;
        case 0x43d174u: goto label_43d174;
        case 0x43d178u: goto label_43d178;
        case 0x43d17cu: goto label_43d17c;
        case 0x43d180u: goto label_43d180;
        case 0x43d184u: goto label_43d184;
        case 0x43d188u: goto label_43d188;
        case 0x43d18cu: goto label_43d18c;
        case 0x43d190u: goto label_43d190;
        case 0x43d194u: goto label_43d194;
        case 0x43d198u: goto label_43d198;
        case 0x43d19cu: goto label_43d19c;
        case 0x43d1a0u: goto label_43d1a0;
        case 0x43d1a4u: goto label_43d1a4;
        case 0x43d1a8u: goto label_43d1a8;
        case 0x43d1acu: goto label_43d1ac;
        case 0x43d1b0u: goto label_43d1b0;
        case 0x43d1b4u: goto label_43d1b4;
        case 0x43d1b8u: goto label_43d1b8;
        case 0x43d1bcu: goto label_43d1bc;
        case 0x43d1c0u: goto label_43d1c0;
        case 0x43d1c4u: goto label_43d1c4;
        case 0x43d1c8u: goto label_43d1c8;
        case 0x43d1ccu: goto label_43d1cc;
        case 0x43d1d0u: goto label_43d1d0;
        case 0x43d1d4u: goto label_43d1d4;
        case 0x43d1d8u: goto label_43d1d8;
        case 0x43d1dcu: goto label_43d1dc;
        case 0x43d1e0u: goto label_43d1e0;
        case 0x43d1e4u: goto label_43d1e4;
        case 0x43d1e8u: goto label_43d1e8;
        case 0x43d1ecu: goto label_43d1ec;
        case 0x43d1f0u: goto label_43d1f0;
        case 0x43d1f4u: goto label_43d1f4;
        case 0x43d1f8u: goto label_43d1f8;
        case 0x43d1fcu: goto label_43d1fc;
        case 0x43d200u: goto label_43d200;
        case 0x43d204u: goto label_43d204;
        case 0x43d208u: goto label_43d208;
        case 0x43d20cu: goto label_43d20c;
        case 0x43d210u: goto label_43d210;
        case 0x43d214u: goto label_43d214;
        case 0x43d218u: goto label_43d218;
        case 0x43d21cu: goto label_43d21c;
        case 0x43d220u: goto label_43d220;
        case 0x43d224u: goto label_43d224;
        case 0x43d228u: goto label_43d228;
        case 0x43d22cu: goto label_43d22c;
        case 0x43d230u: goto label_43d230;
        case 0x43d234u: goto label_43d234;
        case 0x43d238u: goto label_43d238;
        case 0x43d23cu: goto label_43d23c;
        case 0x43d240u: goto label_43d240;
        case 0x43d244u: goto label_43d244;
        case 0x43d248u: goto label_43d248;
        case 0x43d24cu: goto label_43d24c;
        case 0x43d250u: goto label_43d250;
        case 0x43d254u: goto label_43d254;
        case 0x43d258u: goto label_43d258;
        case 0x43d25cu: goto label_43d25c;
        case 0x43d260u: goto label_43d260;
        case 0x43d264u: goto label_43d264;
        case 0x43d268u: goto label_43d268;
        case 0x43d26cu: goto label_43d26c;
        case 0x43d270u: goto label_43d270;
        case 0x43d274u: goto label_43d274;
        case 0x43d278u: goto label_43d278;
        case 0x43d27cu: goto label_43d27c;
        case 0x43d280u: goto label_43d280;
        case 0x43d284u: goto label_43d284;
        case 0x43d288u: goto label_43d288;
        case 0x43d28cu: goto label_43d28c;
        case 0x43d290u: goto label_43d290;
        case 0x43d294u: goto label_43d294;
        case 0x43d298u: goto label_43d298;
        case 0x43d29cu: goto label_43d29c;
        case 0x43d2a0u: goto label_43d2a0;
        case 0x43d2a4u: goto label_43d2a4;
        case 0x43d2a8u: goto label_43d2a8;
        case 0x43d2acu: goto label_43d2ac;
        case 0x43d2b0u: goto label_43d2b0;
        case 0x43d2b4u: goto label_43d2b4;
        case 0x43d2b8u: goto label_43d2b8;
        case 0x43d2bcu: goto label_43d2bc;
        case 0x43d2c0u: goto label_43d2c0;
        case 0x43d2c4u: goto label_43d2c4;
        case 0x43d2c8u: goto label_43d2c8;
        case 0x43d2ccu: goto label_43d2cc;
        case 0x43d2d0u: goto label_43d2d0;
        case 0x43d2d4u: goto label_43d2d4;
        case 0x43d2d8u: goto label_43d2d8;
        case 0x43d2dcu: goto label_43d2dc;
        case 0x43d2e0u: goto label_43d2e0;
        case 0x43d2e4u: goto label_43d2e4;
        case 0x43d2e8u: goto label_43d2e8;
        case 0x43d2ecu: goto label_43d2ec;
        case 0x43d2f0u: goto label_43d2f0;
        case 0x43d2f4u: goto label_43d2f4;
        case 0x43d2f8u: goto label_43d2f8;
        case 0x43d2fcu: goto label_43d2fc;
        case 0x43d300u: goto label_43d300;
        case 0x43d304u: goto label_43d304;
        case 0x43d308u: goto label_43d308;
        case 0x43d30cu: goto label_43d30c;
        case 0x43d310u: goto label_43d310;
        case 0x43d314u: goto label_43d314;
        case 0x43d318u: goto label_43d318;
        case 0x43d31cu: goto label_43d31c;
        case 0x43d320u: goto label_43d320;
        case 0x43d324u: goto label_43d324;
        case 0x43d328u: goto label_43d328;
        case 0x43d32cu: goto label_43d32c;
        case 0x43d330u: goto label_43d330;
        case 0x43d334u: goto label_43d334;
        case 0x43d338u: goto label_43d338;
        case 0x43d33cu: goto label_43d33c;
        case 0x43d340u: goto label_43d340;
        case 0x43d344u: goto label_43d344;
        case 0x43d348u: goto label_43d348;
        case 0x43d34cu: goto label_43d34c;
        case 0x43d350u: goto label_43d350;
        case 0x43d354u: goto label_43d354;
        case 0x43d358u: goto label_43d358;
        case 0x43d35cu: goto label_43d35c;
        case 0x43d360u: goto label_43d360;
        case 0x43d364u: goto label_43d364;
        case 0x43d368u: goto label_43d368;
        case 0x43d36cu: goto label_43d36c;
        case 0x43d370u: goto label_43d370;
        case 0x43d374u: goto label_43d374;
        case 0x43d378u: goto label_43d378;
        case 0x43d37cu: goto label_43d37c;
        case 0x43d380u: goto label_43d380;
        case 0x43d384u: goto label_43d384;
        case 0x43d388u: goto label_43d388;
        case 0x43d38cu: goto label_43d38c;
        case 0x43d390u: goto label_43d390;
        case 0x43d394u: goto label_43d394;
        case 0x43d398u: goto label_43d398;
        case 0x43d39cu: goto label_43d39c;
        case 0x43d3a0u: goto label_43d3a0;
        case 0x43d3a4u: goto label_43d3a4;
        case 0x43d3a8u: goto label_43d3a8;
        case 0x43d3acu: goto label_43d3ac;
        case 0x43d3b0u: goto label_43d3b0;
        case 0x43d3b4u: goto label_43d3b4;
        case 0x43d3b8u: goto label_43d3b8;
        case 0x43d3bcu: goto label_43d3bc;
        case 0x43d3c0u: goto label_43d3c0;
        case 0x43d3c4u: goto label_43d3c4;
        case 0x43d3c8u: goto label_43d3c8;
        case 0x43d3ccu: goto label_43d3cc;
        case 0x43d3d0u: goto label_43d3d0;
        case 0x43d3d4u: goto label_43d3d4;
        case 0x43d3d8u: goto label_43d3d8;
        case 0x43d3dcu: goto label_43d3dc;
        case 0x43d3e0u: goto label_43d3e0;
        case 0x43d3e4u: goto label_43d3e4;
        case 0x43d3e8u: goto label_43d3e8;
        case 0x43d3ecu: goto label_43d3ec;
        case 0x43d3f0u: goto label_43d3f0;
        case 0x43d3f4u: goto label_43d3f4;
        case 0x43d3f8u: goto label_43d3f8;
        case 0x43d3fcu: goto label_43d3fc;
        case 0x43d400u: goto label_43d400;
        case 0x43d404u: goto label_43d404;
        case 0x43d408u: goto label_43d408;
        case 0x43d40cu: goto label_43d40c;
        case 0x43d410u: goto label_43d410;
        case 0x43d414u: goto label_43d414;
        case 0x43d418u: goto label_43d418;
        case 0x43d41cu: goto label_43d41c;
        case 0x43d420u: goto label_43d420;
        case 0x43d424u: goto label_43d424;
        case 0x43d428u: goto label_43d428;
        case 0x43d42cu: goto label_43d42c;
        case 0x43d430u: goto label_43d430;
        case 0x43d434u: goto label_43d434;
        case 0x43d438u: goto label_43d438;
        case 0x43d43cu: goto label_43d43c;
        case 0x43d440u: goto label_43d440;
        case 0x43d444u: goto label_43d444;
        case 0x43d448u: goto label_43d448;
        case 0x43d44cu: goto label_43d44c;
        case 0x43d450u: goto label_43d450;
        case 0x43d454u: goto label_43d454;
        case 0x43d458u: goto label_43d458;
        case 0x43d45cu: goto label_43d45c;
        case 0x43d460u: goto label_43d460;
        case 0x43d464u: goto label_43d464;
        case 0x43d468u: goto label_43d468;
        case 0x43d46cu: goto label_43d46c;
        case 0x43d470u: goto label_43d470;
        case 0x43d474u: goto label_43d474;
        case 0x43d478u: goto label_43d478;
        case 0x43d47cu: goto label_43d47c;
        case 0x43d480u: goto label_43d480;
        case 0x43d484u: goto label_43d484;
        case 0x43d488u: goto label_43d488;
        case 0x43d48cu: goto label_43d48c;
        case 0x43d490u: goto label_43d490;
        case 0x43d494u: goto label_43d494;
        case 0x43d498u: goto label_43d498;
        case 0x43d49cu: goto label_43d49c;
        case 0x43d4a0u: goto label_43d4a0;
        case 0x43d4a4u: goto label_43d4a4;
        case 0x43d4a8u: goto label_43d4a8;
        case 0x43d4acu: goto label_43d4ac;
        case 0x43d4b0u: goto label_43d4b0;
        case 0x43d4b4u: goto label_43d4b4;
        case 0x43d4b8u: goto label_43d4b8;
        case 0x43d4bcu: goto label_43d4bc;
        case 0x43d4c0u: goto label_43d4c0;
        case 0x43d4c4u: goto label_43d4c4;
        case 0x43d4c8u: goto label_43d4c8;
        case 0x43d4ccu: goto label_43d4cc;
        case 0x43d4d0u: goto label_43d4d0;
        case 0x43d4d4u: goto label_43d4d4;
        case 0x43d4d8u: goto label_43d4d8;
        case 0x43d4dcu: goto label_43d4dc;
        case 0x43d4e0u: goto label_43d4e0;
        case 0x43d4e4u: goto label_43d4e4;
        case 0x43d4e8u: goto label_43d4e8;
        case 0x43d4ecu: goto label_43d4ec;
        case 0x43d4f0u: goto label_43d4f0;
        case 0x43d4f4u: goto label_43d4f4;
        case 0x43d4f8u: goto label_43d4f8;
        case 0x43d4fcu: goto label_43d4fc;
        case 0x43d500u: goto label_43d500;
        case 0x43d504u: goto label_43d504;
        case 0x43d508u: goto label_43d508;
        case 0x43d50cu: goto label_43d50c;
        case 0x43d510u: goto label_43d510;
        case 0x43d514u: goto label_43d514;
        case 0x43d518u: goto label_43d518;
        case 0x43d51cu: goto label_43d51c;
        case 0x43d520u: goto label_43d520;
        case 0x43d524u: goto label_43d524;
        case 0x43d528u: goto label_43d528;
        case 0x43d52cu: goto label_43d52c;
        case 0x43d530u: goto label_43d530;
        case 0x43d534u: goto label_43d534;
        case 0x43d538u: goto label_43d538;
        case 0x43d53cu: goto label_43d53c;
        case 0x43d540u: goto label_43d540;
        case 0x43d544u: goto label_43d544;
        case 0x43d548u: goto label_43d548;
        case 0x43d54cu: goto label_43d54c;
        case 0x43d550u: goto label_43d550;
        case 0x43d554u: goto label_43d554;
        case 0x43d558u: goto label_43d558;
        case 0x43d55cu: goto label_43d55c;
        case 0x43d560u: goto label_43d560;
        case 0x43d564u: goto label_43d564;
        case 0x43d568u: goto label_43d568;
        case 0x43d56cu: goto label_43d56c;
        case 0x43d570u: goto label_43d570;
        case 0x43d574u: goto label_43d574;
        case 0x43d578u: goto label_43d578;
        case 0x43d57cu: goto label_43d57c;
        case 0x43d580u: goto label_43d580;
        case 0x43d584u: goto label_43d584;
        case 0x43d588u: goto label_43d588;
        case 0x43d58cu: goto label_43d58c;
        case 0x43d590u: goto label_43d590;
        case 0x43d594u: goto label_43d594;
        case 0x43d598u: goto label_43d598;
        case 0x43d59cu: goto label_43d59c;
        case 0x43d5a0u: goto label_43d5a0;
        case 0x43d5a4u: goto label_43d5a4;
        case 0x43d5a8u: goto label_43d5a8;
        case 0x43d5acu: goto label_43d5ac;
        case 0x43d5b0u: goto label_43d5b0;
        case 0x43d5b4u: goto label_43d5b4;
        case 0x43d5b8u: goto label_43d5b8;
        case 0x43d5bcu: goto label_43d5bc;
        case 0x43d5c0u: goto label_43d5c0;
        case 0x43d5c4u: goto label_43d5c4;
        case 0x43d5c8u: goto label_43d5c8;
        case 0x43d5ccu: goto label_43d5cc;
        case 0x43d5d0u: goto label_43d5d0;
        case 0x43d5d4u: goto label_43d5d4;
        case 0x43d5d8u: goto label_43d5d8;
        case 0x43d5dcu: goto label_43d5dc;
        case 0x43d5e0u: goto label_43d5e0;
        case 0x43d5e4u: goto label_43d5e4;
        case 0x43d5e8u: goto label_43d5e8;
        case 0x43d5ecu: goto label_43d5ec;
        case 0x43d5f0u: goto label_43d5f0;
        case 0x43d5f4u: goto label_43d5f4;
        case 0x43d5f8u: goto label_43d5f8;
        case 0x43d5fcu: goto label_43d5fc;
        case 0x43d600u: goto label_43d600;
        case 0x43d604u: goto label_43d604;
        case 0x43d608u: goto label_43d608;
        case 0x43d60cu: goto label_43d60c;
        case 0x43d610u: goto label_43d610;
        case 0x43d614u: goto label_43d614;
        case 0x43d618u: goto label_43d618;
        case 0x43d61cu: goto label_43d61c;
        case 0x43d620u: goto label_43d620;
        case 0x43d624u: goto label_43d624;
        case 0x43d628u: goto label_43d628;
        case 0x43d62cu: goto label_43d62c;
        case 0x43d630u: goto label_43d630;
        case 0x43d634u: goto label_43d634;
        case 0x43d638u: goto label_43d638;
        case 0x43d63cu: goto label_43d63c;
        case 0x43d640u: goto label_43d640;
        case 0x43d644u: goto label_43d644;
        case 0x43d648u: goto label_43d648;
        case 0x43d64cu: goto label_43d64c;
        case 0x43d650u: goto label_43d650;
        case 0x43d654u: goto label_43d654;
        case 0x43d658u: goto label_43d658;
        case 0x43d65cu: goto label_43d65c;
        case 0x43d660u: goto label_43d660;
        case 0x43d664u: goto label_43d664;
        case 0x43d668u: goto label_43d668;
        case 0x43d66cu: goto label_43d66c;
        case 0x43d670u: goto label_43d670;
        case 0x43d674u: goto label_43d674;
        case 0x43d678u: goto label_43d678;
        case 0x43d67cu: goto label_43d67c;
        case 0x43d680u: goto label_43d680;
        case 0x43d684u: goto label_43d684;
        case 0x43d688u: goto label_43d688;
        case 0x43d68cu: goto label_43d68c;
        case 0x43d690u: goto label_43d690;
        case 0x43d694u: goto label_43d694;
        case 0x43d698u: goto label_43d698;
        case 0x43d69cu: goto label_43d69c;
        case 0x43d6a0u: goto label_43d6a0;
        case 0x43d6a4u: goto label_43d6a4;
        case 0x43d6a8u: goto label_43d6a8;
        case 0x43d6acu: goto label_43d6ac;
        case 0x43d6b0u: goto label_43d6b0;
        case 0x43d6b4u: goto label_43d6b4;
        case 0x43d6b8u: goto label_43d6b8;
        case 0x43d6bcu: goto label_43d6bc;
        case 0x43d6c0u: goto label_43d6c0;
        case 0x43d6c4u: goto label_43d6c4;
        case 0x43d6c8u: goto label_43d6c8;
        case 0x43d6ccu: goto label_43d6cc;
        case 0x43d6d0u: goto label_43d6d0;
        case 0x43d6d4u: goto label_43d6d4;
        case 0x43d6d8u: goto label_43d6d8;
        case 0x43d6dcu: goto label_43d6dc;
        case 0x43d6e0u: goto label_43d6e0;
        case 0x43d6e4u: goto label_43d6e4;
        case 0x43d6e8u: goto label_43d6e8;
        case 0x43d6ecu: goto label_43d6ec;
        case 0x43d6f0u: goto label_43d6f0;
        case 0x43d6f4u: goto label_43d6f4;
        case 0x43d6f8u: goto label_43d6f8;
        case 0x43d6fcu: goto label_43d6fc;
        case 0x43d700u: goto label_43d700;
        case 0x43d704u: goto label_43d704;
        case 0x43d708u: goto label_43d708;
        case 0x43d70cu: goto label_43d70c;
        case 0x43d710u: goto label_43d710;
        case 0x43d714u: goto label_43d714;
        case 0x43d718u: goto label_43d718;
        case 0x43d71cu: goto label_43d71c;
        case 0x43d720u: goto label_43d720;
        case 0x43d724u: goto label_43d724;
        case 0x43d728u: goto label_43d728;
        case 0x43d72cu: goto label_43d72c;
        case 0x43d730u: goto label_43d730;
        case 0x43d734u: goto label_43d734;
        case 0x43d738u: goto label_43d738;
        case 0x43d73cu: goto label_43d73c;
        case 0x43d740u: goto label_43d740;
        case 0x43d744u: goto label_43d744;
        case 0x43d748u: goto label_43d748;
        case 0x43d74cu: goto label_43d74c;
        case 0x43d750u: goto label_43d750;
        case 0x43d754u: goto label_43d754;
        case 0x43d758u: goto label_43d758;
        case 0x43d75cu: goto label_43d75c;
        case 0x43d760u: goto label_43d760;
        case 0x43d764u: goto label_43d764;
        case 0x43d768u: goto label_43d768;
        case 0x43d76cu: goto label_43d76c;
        case 0x43d770u: goto label_43d770;
        case 0x43d774u: goto label_43d774;
        case 0x43d778u: goto label_43d778;
        case 0x43d77cu: goto label_43d77c;
        case 0x43d780u: goto label_43d780;
        case 0x43d784u: goto label_43d784;
        case 0x43d788u: goto label_43d788;
        case 0x43d78cu: goto label_43d78c;
        case 0x43d790u: goto label_43d790;
        case 0x43d794u: goto label_43d794;
        case 0x43d798u: goto label_43d798;
        case 0x43d79cu: goto label_43d79c;
        case 0x43d7a0u: goto label_43d7a0;
        case 0x43d7a4u: goto label_43d7a4;
        case 0x43d7a8u: goto label_43d7a8;
        case 0x43d7acu: goto label_43d7ac;
        case 0x43d7b0u: goto label_43d7b0;
        case 0x43d7b4u: goto label_43d7b4;
        case 0x43d7b8u: goto label_43d7b8;
        case 0x43d7bcu: goto label_43d7bc;
        case 0x43d7c0u: goto label_43d7c0;
        case 0x43d7c4u: goto label_43d7c4;
        case 0x43d7c8u: goto label_43d7c8;
        case 0x43d7ccu: goto label_43d7cc;
        case 0x43d7d0u: goto label_43d7d0;
        case 0x43d7d4u: goto label_43d7d4;
        case 0x43d7d8u: goto label_43d7d8;
        case 0x43d7dcu: goto label_43d7dc;
        case 0x43d7e0u: goto label_43d7e0;
        case 0x43d7e4u: goto label_43d7e4;
        case 0x43d7e8u: goto label_43d7e8;
        case 0x43d7ecu: goto label_43d7ec;
        case 0x43d7f0u: goto label_43d7f0;
        case 0x43d7f4u: goto label_43d7f4;
        case 0x43d7f8u: goto label_43d7f8;
        case 0x43d7fcu: goto label_43d7fc;
        case 0x43d800u: goto label_43d800;
        case 0x43d804u: goto label_43d804;
        case 0x43d808u: goto label_43d808;
        case 0x43d80cu: goto label_43d80c;
        case 0x43d810u: goto label_43d810;
        case 0x43d814u: goto label_43d814;
        case 0x43d818u: goto label_43d818;
        case 0x43d81cu: goto label_43d81c;
        case 0x43d820u: goto label_43d820;
        case 0x43d824u: goto label_43d824;
        case 0x43d828u: goto label_43d828;
        case 0x43d82cu: goto label_43d82c;
        case 0x43d830u: goto label_43d830;
        case 0x43d834u: goto label_43d834;
        case 0x43d838u: goto label_43d838;
        case 0x43d83cu: goto label_43d83c;
        case 0x43d840u: goto label_43d840;
        case 0x43d844u: goto label_43d844;
        case 0x43d848u: goto label_43d848;
        case 0x43d84cu: goto label_43d84c;
        case 0x43d850u: goto label_43d850;
        case 0x43d854u: goto label_43d854;
        case 0x43d858u: goto label_43d858;
        case 0x43d85cu: goto label_43d85c;
        case 0x43d860u: goto label_43d860;
        case 0x43d864u: goto label_43d864;
        case 0x43d868u: goto label_43d868;
        case 0x43d86cu: goto label_43d86c;
        case 0x43d870u: goto label_43d870;
        case 0x43d874u: goto label_43d874;
        case 0x43d878u: goto label_43d878;
        case 0x43d87cu: goto label_43d87c;
        case 0x43d880u: goto label_43d880;
        case 0x43d884u: goto label_43d884;
        case 0x43d888u: goto label_43d888;
        case 0x43d88cu: goto label_43d88c;
        case 0x43d890u: goto label_43d890;
        case 0x43d894u: goto label_43d894;
        case 0x43d898u: goto label_43d898;
        case 0x43d89cu: goto label_43d89c;
        case 0x43d8a0u: goto label_43d8a0;
        case 0x43d8a4u: goto label_43d8a4;
        case 0x43d8a8u: goto label_43d8a8;
        case 0x43d8acu: goto label_43d8ac;
        case 0x43d8b0u: goto label_43d8b0;
        case 0x43d8b4u: goto label_43d8b4;
        case 0x43d8b8u: goto label_43d8b8;
        case 0x43d8bcu: goto label_43d8bc;
        case 0x43d8c0u: goto label_43d8c0;
        case 0x43d8c4u: goto label_43d8c4;
        case 0x43d8c8u: goto label_43d8c8;
        case 0x43d8ccu: goto label_43d8cc;
        case 0x43d8d0u: goto label_43d8d0;
        case 0x43d8d4u: goto label_43d8d4;
        case 0x43d8d8u: goto label_43d8d8;
        case 0x43d8dcu: goto label_43d8dc;
        case 0x43d8e0u: goto label_43d8e0;
        case 0x43d8e4u: goto label_43d8e4;
        case 0x43d8e8u: goto label_43d8e8;
        case 0x43d8ecu: goto label_43d8ec;
        case 0x43d8f0u: goto label_43d8f0;
        case 0x43d8f4u: goto label_43d8f4;
        case 0x43d8f8u: goto label_43d8f8;
        case 0x43d8fcu: goto label_43d8fc;
        case 0x43d900u: goto label_43d900;
        case 0x43d904u: goto label_43d904;
        case 0x43d908u: goto label_43d908;
        case 0x43d90cu: goto label_43d90c;
        case 0x43d910u: goto label_43d910;
        case 0x43d914u: goto label_43d914;
        case 0x43d918u: goto label_43d918;
        case 0x43d91cu: goto label_43d91c;
        case 0x43d920u: goto label_43d920;
        case 0x43d924u: goto label_43d924;
        case 0x43d928u: goto label_43d928;
        case 0x43d92cu: goto label_43d92c;
        case 0x43d930u: goto label_43d930;
        case 0x43d934u: goto label_43d934;
        case 0x43d938u: goto label_43d938;
        case 0x43d93cu: goto label_43d93c;
        case 0x43d940u: goto label_43d940;
        case 0x43d944u: goto label_43d944;
        case 0x43d948u: goto label_43d948;
        case 0x43d94cu: goto label_43d94c;
        case 0x43d950u: goto label_43d950;
        case 0x43d954u: goto label_43d954;
        case 0x43d958u: goto label_43d958;
        case 0x43d95cu: goto label_43d95c;
        case 0x43d960u: goto label_43d960;
        case 0x43d964u: goto label_43d964;
        case 0x43d968u: goto label_43d968;
        case 0x43d96cu: goto label_43d96c;
        case 0x43d970u: goto label_43d970;
        case 0x43d974u: goto label_43d974;
        case 0x43d978u: goto label_43d978;
        case 0x43d97cu: goto label_43d97c;
        case 0x43d980u: goto label_43d980;
        case 0x43d984u: goto label_43d984;
        case 0x43d988u: goto label_43d988;
        case 0x43d98cu: goto label_43d98c;
        case 0x43d990u: goto label_43d990;
        case 0x43d994u: goto label_43d994;
        case 0x43d998u: goto label_43d998;
        case 0x43d99cu: goto label_43d99c;
        case 0x43d9a0u: goto label_43d9a0;
        case 0x43d9a4u: goto label_43d9a4;
        case 0x43d9a8u: goto label_43d9a8;
        case 0x43d9acu: goto label_43d9ac;
        case 0x43d9b0u: goto label_43d9b0;
        case 0x43d9b4u: goto label_43d9b4;
        case 0x43d9b8u: goto label_43d9b8;
        case 0x43d9bcu: goto label_43d9bc;
        case 0x43d9c0u: goto label_43d9c0;
        case 0x43d9c4u: goto label_43d9c4;
        case 0x43d9c8u: goto label_43d9c8;
        case 0x43d9ccu: goto label_43d9cc;
        case 0x43d9d0u: goto label_43d9d0;
        case 0x43d9d4u: goto label_43d9d4;
        case 0x43d9d8u: goto label_43d9d8;
        case 0x43d9dcu: goto label_43d9dc;
        case 0x43d9e0u: goto label_43d9e0;
        case 0x43d9e4u: goto label_43d9e4;
        case 0x43d9e8u: goto label_43d9e8;
        case 0x43d9ecu: goto label_43d9ec;
        case 0x43d9f0u: goto label_43d9f0;
        case 0x43d9f4u: goto label_43d9f4;
        case 0x43d9f8u: goto label_43d9f8;
        case 0x43d9fcu: goto label_43d9fc;
        case 0x43da00u: goto label_43da00;
        case 0x43da04u: goto label_43da04;
        case 0x43da08u: goto label_43da08;
        case 0x43da0cu: goto label_43da0c;
        case 0x43da10u: goto label_43da10;
        case 0x43da14u: goto label_43da14;
        case 0x43da18u: goto label_43da18;
        case 0x43da1cu: goto label_43da1c;
        case 0x43da20u: goto label_43da20;
        case 0x43da24u: goto label_43da24;
        case 0x43da28u: goto label_43da28;
        case 0x43da2cu: goto label_43da2c;
        case 0x43da30u: goto label_43da30;
        case 0x43da34u: goto label_43da34;
        case 0x43da38u: goto label_43da38;
        case 0x43da3cu: goto label_43da3c;
        case 0x43da40u: goto label_43da40;
        case 0x43da44u: goto label_43da44;
        case 0x43da48u: goto label_43da48;
        case 0x43da4cu: goto label_43da4c;
        case 0x43da50u: goto label_43da50;
        case 0x43da54u: goto label_43da54;
        case 0x43da58u: goto label_43da58;
        case 0x43da5cu: goto label_43da5c;
        case 0x43da60u: goto label_43da60;
        case 0x43da64u: goto label_43da64;
        case 0x43da68u: goto label_43da68;
        case 0x43da6cu: goto label_43da6c;
        case 0x43da70u: goto label_43da70;
        case 0x43da74u: goto label_43da74;
        case 0x43da78u: goto label_43da78;
        case 0x43da7cu: goto label_43da7c;
        case 0x43da80u: goto label_43da80;
        case 0x43da84u: goto label_43da84;
        case 0x43da88u: goto label_43da88;
        case 0x43da8cu: goto label_43da8c;
        case 0x43da90u: goto label_43da90;
        case 0x43da94u: goto label_43da94;
        case 0x43da98u: goto label_43da98;
        case 0x43da9cu: goto label_43da9c;
        case 0x43daa0u: goto label_43daa0;
        case 0x43daa4u: goto label_43daa4;
        case 0x43daa8u: goto label_43daa8;
        case 0x43daacu: goto label_43daac;
        case 0x43dab0u: goto label_43dab0;
        case 0x43dab4u: goto label_43dab4;
        case 0x43dab8u: goto label_43dab8;
        case 0x43dabcu: goto label_43dabc;
        case 0x43dac0u: goto label_43dac0;
        case 0x43dac4u: goto label_43dac4;
        case 0x43dac8u: goto label_43dac8;
        case 0x43daccu: goto label_43dacc;
        case 0x43dad0u: goto label_43dad0;
        case 0x43dad4u: goto label_43dad4;
        case 0x43dad8u: goto label_43dad8;
        case 0x43dadcu: goto label_43dadc;
        case 0x43dae0u: goto label_43dae0;
        case 0x43dae4u: goto label_43dae4;
        case 0x43dae8u: goto label_43dae8;
        case 0x43daecu: goto label_43daec;
        case 0x43daf0u: goto label_43daf0;
        case 0x43daf4u: goto label_43daf4;
        case 0x43daf8u: goto label_43daf8;
        case 0x43dafcu: goto label_43dafc;
        case 0x43db00u: goto label_43db00;
        case 0x43db04u: goto label_43db04;
        case 0x43db08u: goto label_43db08;
        case 0x43db0cu: goto label_43db0c;
        case 0x43db10u: goto label_43db10;
        case 0x43db14u: goto label_43db14;
        case 0x43db18u: goto label_43db18;
        case 0x43db1cu: goto label_43db1c;
        case 0x43db20u: goto label_43db20;
        case 0x43db24u: goto label_43db24;
        case 0x43db28u: goto label_43db28;
        case 0x43db2cu: goto label_43db2c;
        case 0x43db30u: goto label_43db30;
        case 0x43db34u: goto label_43db34;
        case 0x43db38u: goto label_43db38;
        case 0x43db3cu: goto label_43db3c;
        case 0x43db40u: goto label_43db40;
        case 0x43db44u: goto label_43db44;
        case 0x43db48u: goto label_43db48;
        case 0x43db4cu: goto label_43db4c;
        case 0x43db50u: goto label_43db50;
        case 0x43db54u: goto label_43db54;
        case 0x43db58u: goto label_43db58;
        case 0x43db5cu: goto label_43db5c;
        case 0x43db60u: goto label_43db60;
        case 0x43db64u: goto label_43db64;
        case 0x43db68u: goto label_43db68;
        case 0x43db6cu: goto label_43db6c;
        case 0x43db70u: goto label_43db70;
        case 0x43db74u: goto label_43db74;
        case 0x43db78u: goto label_43db78;
        case 0x43db7cu: goto label_43db7c;
        case 0x43db80u: goto label_43db80;
        case 0x43db84u: goto label_43db84;
        case 0x43db88u: goto label_43db88;
        case 0x43db8cu: goto label_43db8c;
        case 0x43db90u: goto label_43db90;
        case 0x43db94u: goto label_43db94;
        case 0x43db98u: goto label_43db98;
        case 0x43db9cu: goto label_43db9c;
        case 0x43dba0u: goto label_43dba0;
        case 0x43dba4u: goto label_43dba4;
        case 0x43dba8u: goto label_43dba8;
        case 0x43dbacu: goto label_43dbac;
        default: break;
    }

    ctx->pc = 0x43ce70u;

label_43ce70:
    // 0x43ce70: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x43ce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_43ce74:
    // 0x43ce74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x43ce74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_43ce78:
    // 0x43ce78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x43ce78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_43ce7c:
    // 0x43ce7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x43ce7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43ce80:
    // 0x43ce80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43ce80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43ce84:
    // 0x43ce84: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x43ce84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_43ce88:
    // 0x43ce88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43ce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43ce8c:
    // 0x43ce8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x43ce8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43ce90:
    // 0x43ce90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43ce90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43ce94:
    // 0x43ce94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x43ce94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43ce98:
    // 0x43ce98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43ce98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43ce9c:
    // 0x43ce9c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x43ce9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_43cea0:
    // 0x43cea0: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x43cea0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_43cea4:
    // 0x43cea4: 0x1060008d  beqz        $v1, . + 4 + (0x8D << 2)
label_43cea8:
    if (ctx->pc == 0x43CEA8u) {
        ctx->pc = 0x43CEA8u;
            // 0x43cea8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CEACu;
        goto label_43ceac;
    }
    ctx->pc = 0x43CEA4u;
    {
        const bool branch_taken_0x43cea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CEA4u;
            // 0x43cea8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cea4) {
            ctx->pc = 0x43D0DCu;
            goto label_43d0dc;
        }
    }
    ctx->pc = 0x43CEACu;
label_43ceac:
    // 0x43ceac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43ceacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43ceb0:
    // 0x43ceb0: 0xc04f278  jal         func_13C9E0
label_43ceb4:
    if (ctx->pc == 0x43CEB4u) {
        ctx->pc = 0x43CEB4u;
            // 0x43ceb4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x43CEB8u;
        goto label_43ceb8;
    }
    ctx->pc = 0x43CEB0u;
    SET_GPR_U32(ctx, 31, 0x43CEB8u);
    ctx->pc = 0x43CEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CEB0u;
            // 0x43ceb4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CEB8u; }
        if (ctx->pc != 0x43CEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CEB8u; }
        if (ctx->pc != 0x43CEB8u) { return; }
    }
    ctx->pc = 0x43CEB8u;
label_43ceb8:
    // 0x43ceb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43ceb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43cebc:
    // 0x43cebc: 0xc04ce80  jal         func_133A00
label_43cec0:
    if (ctx->pc == 0x43CEC0u) {
        ctx->pc = 0x43CEC0u;
            // 0x43cec0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x43CEC4u;
        goto label_43cec4;
    }
    ctx->pc = 0x43CEBCu;
    SET_GPR_U32(ctx, 31, 0x43CEC4u);
    ctx->pc = 0x43CEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CEBCu;
            // 0x43cec0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CEC4u; }
        if (ctx->pc != 0x43CEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CEC4u; }
        if (ctx->pc != 0x43CEC4u) { return; }
    }
    ctx->pc = 0x43CEC4u;
label_43cec4:
    // 0x43cec4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43cec8:
    // 0x43cec8: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x43cec8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_43cecc:
    // 0x43cecc: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x43ceccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_43ced0:
    // 0x43ced0: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x43ced0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_43ced4:
    // 0x43ced4: 0xc07698c  jal         func_1DA630
label_43ced8:
    if (ctx->pc == 0x43CED8u) {
        ctx->pc = 0x43CED8u;
            // 0x43ced8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CEDCu;
        goto label_43cedc;
    }
    ctx->pc = 0x43CED4u;
    SET_GPR_U32(ctx, 31, 0x43CEDCu);
    ctx->pc = 0x43CED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CED4u;
            // 0x43ced8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CEDCu; }
        if (ctx->pc != 0x43CEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CEDCu; }
        if (ctx->pc != 0x43CEDCu) { return; }
    }
    ctx->pc = 0x43CEDCu;
label_43cedc:
    // 0x43cedc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x43cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43cee0:
    // 0x43cee0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_43cee4:
    if (ctx->pc == 0x43CEE4u) {
        ctx->pc = 0x43CEE8u;
        goto label_43cee8;
    }
    ctx->pc = 0x43CEE0u;
    {
        const bool branch_taken_0x43cee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x43cee0) {
            ctx->pc = 0x43CEF0u;
            goto label_43cef0;
        }
    }
    ctx->pc = 0x43CEE8u;
label_43cee8:
    // 0x43cee8: 0x10000033  b           . + 4 + (0x33 << 2)
label_43ceec:
    if (ctx->pc == 0x43CEECu) {
        ctx->pc = 0x43CEECu;
            // 0x43ceec: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x43CEF0u;
        goto label_43cef0;
    }
    ctx->pc = 0x43CEE8u;
    {
        const bool branch_taken_0x43cee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CEE8u;
            // 0x43ceec: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cee8) {
            ctx->pc = 0x43CFB8u;
            goto label_43cfb8;
        }
    }
    ctx->pc = 0x43CEF0u;
label_43cef0:
    // 0x43cef0: 0xc0576f4  jal         func_15DBD0
label_43cef4:
    if (ctx->pc == 0x43CEF4u) {
        ctx->pc = 0x43CEF8u;
        goto label_43cef8;
    }
    ctx->pc = 0x43CEF0u;
    SET_GPR_U32(ctx, 31, 0x43CEF8u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CEF8u; }
        if (ctx->pc != 0x43CEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CEF8u; }
        if (ctx->pc != 0x43CEF8u) { return; }
    }
    ctx->pc = 0x43CEF8u;
label_43cef8:
    // 0x43cef8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x43cef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_43cefc:
    // 0x43cefc: 0xc076984  jal         func_1DA610
label_43cf00:
    if (ctx->pc == 0x43CF00u) {
        ctx->pc = 0x43CF00u;
            // 0x43cf00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CF04u;
        goto label_43cf04;
    }
    ctx->pc = 0x43CEFCu;
    SET_GPR_U32(ctx, 31, 0x43CF04u);
    ctx->pc = 0x43CF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CEFCu;
            // 0x43cf00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CF04u; }
        if (ctx->pc != 0x43CF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CF04u; }
        if (ctx->pc != 0x43CF04u) { return; }
    }
    ctx->pc = 0x43CF04u;
label_43cf04:
    // 0x43cf04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x43cf04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43cf08:
    // 0x43cf08: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x43cf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_43cf0c:
    // 0x43cf0c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43cf10:
    // 0x43cf10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x43cf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43cf14:
    // 0x43cf14: 0xc4420180  lwc1        $f2, 0x180($v0)
    ctx->pc = 0x43cf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43cf18:
    // 0x43cf18: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x43cf18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43cf1c:
    // 0x43cf1c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43cf20:
    // 0x43cf20: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x43cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43cf24:
    // 0x43cf24: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x43cf24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_43cf28:
    // 0x43cf28: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43cf2c:
    // 0x43cf2c: 0xc440018c  lwc1        $f0, 0x18C($v0)
    ctx->pc = 0x43cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43cf30:
    // 0x43cf30: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x43cf30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_43cf34:
    // 0x43cf34: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43cf38:
    // 0x43cf38: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x43cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
label_43cf3c:
    // 0x43cf3c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x43cf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_43cf40:
    // 0x43cf40: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x43cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_43cf44:
    // 0x43cf44: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x43cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43cf48:
    // 0x43cf48: 0xc04cca0  jal         func_133280
label_43cf4c:
    if (ctx->pc == 0x43CF4Cu) {
        ctx->pc = 0x43CF4Cu;
            // 0x43cf4c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x43CF50u;
        goto label_43cf50;
    }
    ctx->pc = 0x43CF48u;
    SET_GPR_U32(ctx, 31, 0x43CF50u);
    ctx->pc = 0x43CF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CF48u;
            // 0x43cf4c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CF50u; }
        if (ctx->pc != 0x43CF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CF50u; }
        if (ctx->pc != 0x43CF50u) { return; }
    }
    ctx->pc = 0x43CF50u;
label_43cf50:
    // 0x43cf50: 0xc076980  jal         func_1DA600
label_43cf54:
    if (ctx->pc == 0x43CF54u) {
        ctx->pc = 0x43CF54u;
            // 0x43cf54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CF58u;
        goto label_43cf58;
    }
    ctx->pc = 0x43CF50u;
    SET_GPR_U32(ctx, 31, 0x43CF58u);
    ctx->pc = 0x43CF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CF50u;
            // 0x43cf54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CF58u; }
        if (ctx->pc != 0x43CF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CF58u; }
        if (ctx->pc != 0x43CF58u) { return; }
    }
    ctx->pc = 0x43CF58u;
label_43cf58:
    // 0x43cf58: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x43cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_43cf5c:
    // 0x43cf5c: 0xc04cc34  jal         func_1330D0
label_43cf60:
    if (ctx->pc == 0x43CF60u) {
        ctx->pc = 0x43CF60u;
            // 0x43cf60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CF64u;
        goto label_43cf64;
    }
    ctx->pc = 0x43CF5Cu;
    SET_GPR_U32(ctx, 31, 0x43CF64u);
    ctx->pc = 0x43CF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CF5Cu;
            // 0x43cf60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CF64u; }
        if (ctx->pc != 0x43CF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CF64u; }
        if (ctx->pc != 0x43CF64u) { return; }
    }
    ctx->pc = 0x43CF64u;
label_43cf64:
    // 0x43cf64: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x43cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_43cf68:
    // 0x43cf68: 0xc461d0e8  lwc1        $f1, -0x2F18($v1)
    ctx->pc = 0x43cf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43cf6c:
    // 0x43cf6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x43cf6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43cf70:
    // 0x43cf70: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_43cf74:
    if (ctx->pc == 0x43CF74u) {
        ctx->pc = 0x43CF74u;
            // 0x43cf74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CF78u;
        goto label_43cf78;
    }
    ctx->pc = 0x43CF70u;
    {
        const bool branch_taken_0x43cf70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x43cf70) {
            ctx->pc = 0x43CF74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43CF70u;
            // 0x43cf74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43CF80u;
            goto label_43cf80;
        }
    }
    ctx->pc = 0x43CF78u;
label_43cf78:
    // 0x43cf78: 0x1000000f  b           . + 4 + (0xF << 2)
label_43cf7c:
    if (ctx->pc == 0x43CF7Cu) {
        ctx->pc = 0x43CF7Cu;
            // 0x43cf7c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x43CF80u;
        goto label_43cf80;
    }
    ctx->pc = 0x43CF78u;
    {
        const bool branch_taken_0x43cf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CF78u;
            // 0x43cf7c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cf78) {
            ctx->pc = 0x43CFB8u;
            goto label_43cfb8;
        }
    }
    ctx->pc = 0x43CF80u;
label_43cf80:
    // 0x43cf80: 0xc07697c  jal         func_1DA5F0
label_43cf84:
    if (ctx->pc == 0x43CF84u) {
        ctx->pc = 0x43CF88u;
        goto label_43cf88;
    }
    ctx->pc = 0x43CF80u;
    SET_GPR_U32(ctx, 31, 0x43CF88u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CF88u; }
        if (ctx->pc != 0x43CF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CF88u; }
        if (ctx->pc != 0x43CF88u) { return; }
    }
    ctx->pc = 0x43CF88u;
label_43cf88:
    // 0x43cf88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x43cf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43cf8c:
    // 0x43cf8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x43cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_43cf90:
    // 0x43cf90: 0xc04cd60  jal         func_133580
label_43cf94:
    if (ctx->pc == 0x43CF94u) {
        ctx->pc = 0x43CF94u;
            // 0x43cf94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CF98u;
        goto label_43cf98;
    }
    ctx->pc = 0x43CF90u;
    SET_GPR_U32(ctx, 31, 0x43CF98u);
    ctx->pc = 0x43CF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CF90u;
            // 0x43cf94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CF98u; }
        if (ctx->pc != 0x43CF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CF98u; }
        if (ctx->pc != 0x43CF98u) { return; }
    }
    ctx->pc = 0x43CF98u;
label_43cf98:
    // 0x43cf98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x43cf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_43cf9c:
    // 0x43cf9c: 0xc04c650  jal         func_131940
label_43cfa0:
    if (ctx->pc == 0x43CFA0u) {
        ctx->pc = 0x43CFA0u;
            // 0x43cfa0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x43CFA4u;
        goto label_43cfa4;
    }
    ctx->pc = 0x43CF9Cu;
    SET_GPR_U32(ctx, 31, 0x43CFA4u);
    ctx->pc = 0x43CFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CF9Cu;
            // 0x43cfa0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CFA4u; }
        if (ctx->pc != 0x43CFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CFA4u; }
        if (ctx->pc != 0x43CFA4u) { return; }
    }
    ctx->pc = 0x43CFA4u;
label_43cfa4:
    // 0x43cfa4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x43cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_43cfa8:
    // 0x43cfa8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x43cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_43cfac:
    // 0x43cfac: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x43cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_43cfb0:
    // 0x43cfb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x43cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_43cfb4:
    // 0x43cfb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x43cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_43cfb8:
    // 0x43cfb8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x43cfb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_43cfbc:
    // 0x43cfbc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_43cfc0:
    if (ctx->pc == 0x43CFC0u) {
        ctx->pc = 0x43CFC0u;
            // 0x43cfc0: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x43CFC4u;
        goto label_43cfc4;
    }
    ctx->pc = 0x43CFBCu;
    {
        const bool branch_taken_0x43cfbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CFBCu;
            // 0x43cfc0: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cfbc) {
            ctx->pc = 0x43CFCCu;
            goto label_43cfcc;
        }
    }
    ctx->pc = 0x43CFC4u;
label_43cfc4:
    // 0x43cfc4: 0x10000046  b           . + 4 + (0x46 << 2)
label_43cfc8:
    if (ctx->pc == 0x43CFC8u) {
        ctx->pc = 0x43CFC8u;
            // 0x43cfc8: 0xa26000f0  sb          $zero, 0xF0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 240), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x43CFCCu;
        goto label_43cfcc;
    }
    ctx->pc = 0x43CFC4u;
    {
        const bool branch_taken_0x43cfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CFC4u;
            // 0x43cfc8: 0xa26000f0  sb          $zero, 0xF0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 240), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cfc4) {
            ctx->pc = 0x43D0E0u;
            goto label_43d0e0;
        }
    }
    ctx->pc = 0x43CFCCu;
label_43cfcc:
    // 0x43cfcc: 0xc66c00dc  lwc1        $f12, 0xDC($s3)
    ctx->pc = 0x43cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_43cfd0:
    // 0x43cfd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43cfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43cfd4:
    // 0x43cfd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x43cfd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43cfd8:
    // 0x43cfd8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x43cfd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_43cfdc:
    // 0x43cfdc: 0xc04ce50  jal         func_133940
label_43cfe0:
    if (ctx->pc == 0x43CFE0u) {
        ctx->pc = 0x43CFE0u;
            // 0x43cfe0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x43CFE4u;
        goto label_43cfe4;
    }
    ctx->pc = 0x43CFDCu;
    SET_GPR_U32(ctx, 31, 0x43CFE4u);
    ctx->pc = 0x43CFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CFDCu;
            // 0x43cfe0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CFE4u; }
        if (ctx->pc != 0x43CFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CFE4u; }
        if (ctx->pc != 0x43CFE4u) { return; }
    }
    ctx->pc = 0x43CFE4u;
label_43cfe4:
    // 0x43cfe4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43cfe8:
    // 0x43cfe8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43cfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43cfec:
    // 0x43cfec: 0x8c68e3c0  lw          $t0, -0x1C40($v1)
    ctx->pc = 0x43cfecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_43cff0:
    // 0x43cff0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x43cff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43cff4:
    // 0x43cff4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x43cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_43cff8:
    // 0x43cff8: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x43cff8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_43cffc:
    // 0x43cffc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43d000:
    // 0x43d000: 0x86880  sll         $t5, $t0, 2
    ctx->pc = 0x43d000u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_43d004:
    // 0x43d004: 0x8c67e3d8  lw          $a3, -0x1C28($v1)
    ctx->pc = 0x43d004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_43d008:
    // 0x43d008: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43d008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43d00c:
    // 0x43d00c: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x43d00cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_43d010:
    // 0x43d010: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x43d010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_43d014:
    // 0x43d014: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x43d014u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_43d018:
    // 0x43d018: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43d018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43d01c:
    // 0x43d01c: 0x888821  addu        $s1, $a0, $t0
    ctx->pc = 0x43d01cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_43d020:
    // 0x43d020: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x43d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_43d024:
    // 0x43d024: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x43d024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_43d028:
    // 0x43d028: 0x6d4021  addu        $t0, $v1, $t5
    ctx->pc = 0x43d028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_43d02c:
    // 0x43d02c: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x43d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
label_43d030:
    // 0x43d030: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43d030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43d034:
    // 0x43d034: 0x8cece3d8  lw          $t4, -0x1C28($a3)
    ctx->pc = 0x43d034u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_43d038:
    // 0x43d038: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x43d038u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_43d03c:
    // 0x43d03c: 0x8c6ae3b8  lw          $t2, -0x1C48($v1)
    ctx->pc = 0x43d03cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_43d040:
    // 0x43d040: 0x8c8be378  lw          $t3, -0x1C88($a0)
    ctx->pc = 0x43d040u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_43d044:
    // 0x43d044: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x43d044u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_43d048:
    // 0x43d048: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x43d048u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_43d04c:
    // 0x43d04c: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x43d04cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_43d050:
    // 0x43d050: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43d050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43d054:
    // 0x43d054: 0x16c8021  addu        $s0, $t3, $t4
    ctx->pc = 0x43d054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_43d058:
    // 0x43d058: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x43d058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_43d05c:
    // 0x43d05c: 0xad500000  sw          $s0, 0x0($t2)
    ctx->pc = 0x43d05cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 16));
label_43d060:
    // 0x43d060: 0x8c4a0028  lw          $t2, 0x28($v0)
    ctx->pc = 0x43d060u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_43d064:
    // 0x43d064: 0x8d29e3d8  lw          $t1, -0x1C28($t1)
    ctx->pc = 0x43d064u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960088)));
label_43d068:
    // 0x43d068: 0x8ce2e3c0  lw          $v0, -0x1C40($a3)
    ctx->pc = 0x43d068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960064)));
label_43d06c:
    // 0x43d06c: 0x12a3821  addu        $a3, $t1, $t2
    ctx->pc = 0x43d06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_43d070:
    // 0x43d070: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x43d070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_43d074:
    // 0x43d074: 0xad07e3d8  sw          $a3, -0x1C28($t0)
    ctx->pc = 0x43d074u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960088), GPR_U32(ctx, 7));
label_43d078:
    // 0x43d078: 0xc04cd60  jal         func_133580
label_43d07c:
    if (ctx->pc == 0x43D07Cu) {
        ctx->pc = 0x43D07Cu;
            // 0x43d07c: 0xac62e3c0  sw          $v0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
        ctx->pc = 0x43D080u;
        goto label_43d080;
    }
    ctx->pc = 0x43D078u;
    SET_GPR_U32(ctx, 31, 0x43D080u);
    ctx->pc = 0x43D07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D078u;
            // 0x43d07c: 0xac62e3c0  sw          $v0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D080u; }
        if (ctx->pc != 0x43D080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D080u; }
        if (ctx->pc != 0x43D080u) { return; }
    }
    ctx->pc = 0x43D080u;
label_43d080:
    // 0x43d080: 0x26640100  addiu       $a0, $s3, 0x100
    ctx->pc = 0x43d080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_43d084:
    // 0x43d084: 0xc04cce8  jal         func_1333A0
label_43d088:
    if (ctx->pc == 0x43D088u) {
        ctx->pc = 0x43D088u;
            // 0x43d088: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x43D08Cu;
        goto label_43d08c;
    }
    ctx->pc = 0x43D084u;
    SET_GPR_U32(ctx, 31, 0x43D08Cu);
    ctx->pc = 0x43D088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D084u;
            // 0x43d088: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D08Cu; }
        if (ctx->pc != 0x43D08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D08Cu; }
        if (ctx->pc != 0x43D08Cu) { return; }
    }
    ctx->pc = 0x43D08Cu;
label_43d08c:
    // 0x43d08c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x43d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_43d090:
    // 0x43d090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43d090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43d094:
    // 0x43d094: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x43d094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_43d098:
    // 0x43d098: 0xc04e4a4  jal         func_139290
label_43d09c:
    if (ctx->pc == 0x43D09Cu) {
        ctx->pc = 0x43D09Cu;
            // 0x43d09c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D0A0u;
        goto label_43d0a0;
    }
    ctx->pc = 0x43D098u;
    SET_GPR_U32(ctx, 31, 0x43D0A0u);
    ctx->pc = 0x43D09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D098u;
            // 0x43d09c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D0A0u; }
        if (ctx->pc != 0x43D0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D0A0u; }
        if (ctx->pc != 0x43D0A0u) { return; }
    }
    ctx->pc = 0x43D0A0u;
label_43d0a0:
    // 0x43d0a0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x43d0a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_43d0a4:
    // 0x43d0a4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x43d0a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_43d0a8:
    // 0x43d0a8: 0x320f809  jalr        $t9
label_43d0ac:
    if (ctx->pc == 0x43D0ACu) {
        ctx->pc = 0x43D0ACu;
            // 0x43d0ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D0B0u;
        goto label_43d0b0;
    }
    ctx->pc = 0x43D0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43D0B0u);
        ctx->pc = 0x43D0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D0A8u;
            // 0x43d0ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43D0B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43D0B0u; }
            if (ctx->pc != 0x43D0B0u) { return; }
        }
        }
    }
    ctx->pc = 0x43D0B0u;
label_43d0b0:
    // 0x43d0b0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x43d0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_43d0b4:
    // 0x43d0b4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x43d0b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_43d0b8:
    // 0x43d0b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43d0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43d0bc:
    // 0x43d0bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x43d0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43d0c0:
    // 0x43d0c0: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x43d0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_43d0c4:
    // 0x43d0c4: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x43d0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_43d0c8:
    // 0x43d0c8: 0xc04cfcc  jal         func_133F30
label_43d0cc:
    if (ctx->pc == 0x43D0CCu) {
        ctx->pc = 0x43D0CCu;
            // 0x43d0cc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D0D0u;
        goto label_43d0d0;
    }
    ctx->pc = 0x43D0C8u;
    SET_GPR_U32(ctx, 31, 0x43D0D0u);
    ctx->pc = 0x43D0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D0C8u;
            // 0x43d0cc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D0D0u; }
        if (ctx->pc != 0x43D0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D0D0u; }
        if (ctx->pc != 0x43D0D0u) { return; }
    }
    ctx->pc = 0x43D0D0u;
label_43d0d0:
    // 0x43d0d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43d0d4:
    // 0x43d0d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_43d0d8:
    if (ctx->pc == 0x43D0D8u) {
        ctx->pc = 0x43D0D8u;
            // 0x43d0d8: 0xa26300f0  sb          $v1, 0xF0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 240), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x43D0DCu;
        goto label_43d0dc;
    }
    ctx->pc = 0x43D0D4u;
    {
        const bool branch_taken_0x43d0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D0D4u;
            // 0x43d0d8: 0xa26300f0  sb          $v1, 0xF0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 240), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d0d4) {
            ctx->pc = 0x43D0E0u;
            goto label_43d0e0;
        }
    }
    ctx->pc = 0x43D0DCu;
label_43d0dc:
    // 0x43d0dc: 0xa26000f0  sb          $zero, 0xF0($s3)
    ctx->pc = 0x43d0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 240), (uint8_t)GPR_U32(ctx, 0));
label_43d0e0:
    // 0x43d0e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x43d0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_43d0e4:
    // 0x43d0e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x43d0e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43d0e8:
    // 0x43d0e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x43d0e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43d0ec:
    // 0x43d0ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43d0ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43d0f0:
    // 0x43d0f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43d0f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43d0f4:
    // 0x43d0f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43d0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43d0f8:
    // 0x43d0f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43d0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43d0fc:
    // 0x43d0fc: 0x3e00008  jr          $ra
label_43d100:
    if (ctx->pc == 0x43D100u) {
        ctx->pc = 0x43D100u;
            // 0x43d100: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x43D104u;
        goto label_43d104;
    }
    ctx->pc = 0x43D0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D0FCu;
            // 0x43d100: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43D104u;
label_43d104:
    // 0x43d104: 0x0  nop
    ctx->pc = 0x43d104u;
    // NOP
label_43d108:
    // 0x43d108: 0x0  nop
    ctx->pc = 0x43d108u;
    // NOP
label_43d10c:
    // 0x43d10c: 0x0  nop
    ctx->pc = 0x43d10cu;
    // NOP
label_43d110:
    // 0x43d110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_43d114:
    // 0x43d114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43d114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43d118:
    // 0x43d118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43d118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43d11c:
    // 0x43d11c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43d11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43d120:
    // 0x43d120: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43d120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43d124:
    // 0x43d124: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x43d124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_43d128:
    // 0x43d128: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x43d128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_43d12c:
    // 0x43d12c: 0xc0dc9bc  jal         func_3726F0
label_43d130:
    if (ctx->pc == 0x43D130u) {
        ctx->pc = 0x43D130u;
            // 0x43d130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D134u;
        goto label_43d134;
    }
    ctx->pc = 0x43D12Cu;
    SET_GPR_U32(ctx, 31, 0x43D134u);
    ctx->pc = 0x43D130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D12Cu;
            // 0x43d130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D134u; }
        if (ctx->pc != 0x43D134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D134u; }
        if (ctx->pc != 0x43D134u) { return; }
    }
    ctx->pc = 0x43D134u;
label_43d134:
    // 0x43d134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43d134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43d138:
    // 0x43d138: 0xc0dc9a0  jal         func_372680
label_43d13c:
    if (ctx->pc == 0x43D13Cu) {
        ctx->pc = 0x43D13Cu;
            // 0x43d13c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x43D140u;
        goto label_43d140;
    }
    ctx->pc = 0x43D138u;
    SET_GPR_U32(ctx, 31, 0x43D140u);
    ctx->pc = 0x43D13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D138u;
            // 0x43d13c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D140u; }
        if (ctx->pc != 0x43D140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D140u; }
        if (ctx->pc != 0x43D140u) { return; }
    }
    ctx->pc = 0x43D140u;
label_43d140:
    // 0x43d140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43d140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43d144:
    // 0x43d144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43d144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43d148:
    // 0x43d148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43d148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43d14c:
    // 0x43d14c: 0x3e00008  jr          $ra
label_43d150:
    if (ctx->pc == 0x43D150u) {
        ctx->pc = 0x43D150u;
            // 0x43d150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43D154u;
        goto label_43d154;
    }
    ctx->pc = 0x43D14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D14Cu;
            // 0x43d150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43D154u;
label_43d154:
    // 0x43d154: 0x0  nop
    ctx->pc = 0x43d154u;
    // NOP
label_43d158:
    // 0x43d158: 0x0  nop
    ctx->pc = 0x43d158u;
    // NOP
label_43d15c:
    // 0x43d15c: 0x0  nop
    ctx->pc = 0x43d15cu;
    // NOP
label_43d160:
    // 0x43d160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43d160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43d164:
    // 0x43d164: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x43d164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_43d168:
    // 0x43d168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43d168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43d16c:
    // 0x43d16c: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x43d16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_43d170:
    // 0x43d170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43d170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43d174:
    // 0x43d174: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43d174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43d178:
    // 0x43d178: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x43d178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_43d17c:
    // 0x43d17c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43d17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43d180:
    // 0x43d180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43d180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43d184:
    // 0x43d184: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x43d184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_43d188:
    // 0x43d188: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43d18c:
    // 0x43d18c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43d18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43d190:
    // 0x43d190: 0xc08bff0  jal         func_22FFC0
label_43d194:
    if (ctx->pc == 0x43D194u) {
        ctx->pc = 0x43D194u;
            // 0x43d194: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D198u;
        goto label_43d198;
    }
    ctx->pc = 0x43D190u;
    SET_GPR_U32(ctx, 31, 0x43D198u);
    ctx->pc = 0x43D194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D190u;
            // 0x43d194: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D198u; }
        if (ctx->pc != 0x43D198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D198u; }
        if (ctx->pc != 0x43D198u) { return; }
    }
    ctx->pc = 0x43D198u;
label_43d198:
    // 0x43d198: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x43d198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43d19c:
    // 0x43d19c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x43d19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_43d1a0:
    // 0x43d1a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43d1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43d1a4:
    // 0x43d1a4: 0xc08914c  jal         func_224530
label_43d1a8:
    if (ctx->pc == 0x43D1A8u) {
        ctx->pc = 0x43D1A8u;
            // 0x43d1a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D1ACu;
        goto label_43d1ac;
    }
    ctx->pc = 0x43D1A4u;
    SET_GPR_U32(ctx, 31, 0x43D1ACu);
    ctx->pc = 0x43D1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D1A4u;
            // 0x43d1a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D1ACu; }
        if (ctx->pc != 0x43D1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D1ACu; }
        if (ctx->pc != 0x43D1ACu) { return; }
    }
    ctx->pc = 0x43D1ACu;
label_43d1ac:
    // 0x43d1ac: 0xc0e393c  jal         func_38E4F0
label_43d1b0:
    if (ctx->pc == 0x43D1B0u) {
        ctx->pc = 0x43D1B0u;
            // 0x43d1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D1B4u;
        goto label_43d1b4;
    }
    ctx->pc = 0x43D1ACu;
    SET_GPR_U32(ctx, 31, 0x43D1B4u);
    ctx->pc = 0x43D1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D1ACu;
            // 0x43d1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D1B4u; }
        if (ctx->pc != 0x43D1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D1B4u; }
        if (ctx->pc != 0x43D1B4u) { return; }
    }
    ctx->pc = 0x43D1B4u;
label_43d1b4:
    // 0x43d1b4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x43d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43d1b8:
    // 0x43d1b8: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x43d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_43d1bc:
    // 0x43d1bc: 0x34667084  ori         $a2, $v1, 0x7084
    ctx->pc = 0x43d1bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_43d1c0:
    // 0x43d1c0: 0x2408f9fb  addiu       $t0, $zero, -0x605
    ctx->pc = 0x43d1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965755));
label_43d1c4:
    // 0x43d1c4: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x43d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_43d1c8:
    // 0x43d1c8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x43d1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43d1cc:
    // 0x43d1cc: 0xac860154  sw          $a2, 0x154($a0)
    ctx->pc = 0x43d1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 6));
label_43d1d0:
    // 0x43d1d0: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x43d1d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_43d1d4:
    // 0x43d1d4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x43d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43d1d8:
    // 0x43d1d8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x43d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_43d1dc:
    // 0x43d1dc: 0x346bcccd  ori         $t3, $v1, 0xCCCD
    ctx->pc = 0x43d1dcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_43d1e0:
    // 0x43d1e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x43d1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43d1e4:
    // 0x43d1e4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x43d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_43d1e8:
    // 0x43d1e8: 0xac850158  sw          $a1, 0x158($a0)
    ctx->pc = 0x43d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 5));
label_43d1ec:
    // 0x43d1ec: 0x346acccd  ori         $t2, $v1, 0xCCCD
    ctx->pc = 0x43d1ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_43d1f0:
    // 0x43d1f0: 0x8e090050  lw          $t1, 0x50($s0)
    ctx->pc = 0x43d1f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43d1f4:
    // 0x43d1f4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x43d1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_43d1f8:
    // 0x43d1f8: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x43d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_43d1fc:
    // 0x43d1fc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x43d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_43d200:
    // 0x43d200: 0xad2b015c  sw          $t3, 0x15C($t1)
    ctx->pc = 0x43d200u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 348), GPR_U32(ctx, 11));
label_43d204:
    // 0x43d204: 0x8e090050  lw          $t1, 0x50($s0)
    ctx->pc = 0x43d204u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43d208:
    // 0x43d208: 0xad2a0160  sw          $t2, 0x160($t1)
    ctx->pc = 0x43d208u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 352), GPR_U32(ctx, 10));
label_43d20c:
    // 0x43d20c: 0x8e0900b0  lw          $t1, 0xB0($s0)
    ctx->pc = 0x43d20cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_43d210:
    // 0x43d210: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x43d210u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_43d214:
    // 0x43d214: 0x35080604  ori         $t0, $t0, 0x604
    ctx->pc = 0x43d214u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1540);
label_43d218:
    // 0x43d218: 0xae0800b0  sw          $t0, 0xB0($s0)
    ctx->pc = 0x43d218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 8));
label_43d21c:
    // 0x43d21c: 0xa2070064  sb          $a3, 0x64($s0)
    ctx->pc = 0x43d21cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 7));
label_43d220:
    // 0x43d220: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x43d220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_43d224:
    // 0x43d224: 0xa2000066  sb          $zero, 0x66($s0)
    ctx->pc = 0x43d224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 0));
label_43d228:
    // 0x43d228: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x43d228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_43d22c:
    // 0x43d22c: 0xa2060068  sb          $a2, 0x68($s0)
    ctx->pc = 0x43d22cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 6));
label_43d230:
    // 0x43d230: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x43d230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_43d234:
    // 0x43d234: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x43d234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43d238:
    // 0x43d238: 0xae05008c  sw          $a1, 0x8C($s0)
    ctx->pc = 0x43d238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 5));
label_43d23c:
    // 0x43d23c: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x43d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
label_43d240:
    // 0x43d240: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x43d240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_43d244:
    // 0x43d244: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x43d244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_43d248:
    // 0x43d248: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x43d248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_43d24c:
    // 0x43d24c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x43d24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_43d250:
    // 0x43d250: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x43d250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_43d254:
    // 0x43d254: 0xa20000e8  sb          $zero, 0xE8($s0)
    ctx->pc = 0x43d254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 232), (uint8_t)GPR_U32(ctx, 0));
label_43d258:
    // 0x43d258: 0xa20000f0  sb          $zero, 0xF0($s0)
    ctx->pc = 0x43d258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 0));
label_43d25c:
    // 0x43d25c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43d25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43d260:
    // 0x43d260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43d260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43d264:
    // 0x43d264: 0x3e00008  jr          $ra
label_43d268:
    if (ctx->pc == 0x43D268u) {
        ctx->pc = 0x43D268u;
            // 0x43d268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43D26Cu;
        goto label_43d26c;
    }
    ctx->pc = 0x43D264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D264u;
            // 0x43d268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43D26Cu;
label_43d26c:
    // 0x43d26c: 0x0  nop
    ctx->pc = 0x43d26cu;
    // NOP
label_43d270:
    // 0x43d270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43d270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43d274:
    // 0x43d274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43d274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43d278:
    // 0x43d278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43d27c:
    // 0x43d27c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43d27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43d280:
    // 0x43d280: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x43d280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_43d284:
    // 0x43d284: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43d288:
    if (ctx->pc == 0x43D288u) {
        ctx->pc = 0x43D288u;
            // 0x43d288: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x43D28Cu;
        goto label_43d28c;
    }
    ctx->pc = 0x43D284u;
    {
        const bool branch_taken_0x43d284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43d284) {
            ctx->pc = 0x43D288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43D284u;
            // 0x43d288: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43D2A0u;
            goto label_43d2a0;
        }
    }
    ctx->pc = 0x43D28Cu;
label_43d28c:
    // 0x43d28c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x43d28cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_43d290:
    // 0x43d290: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43d290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43d294:
    // 0x43d294: 0x320f809  jalr        $t9
label_43d298:
    if (ctx->pc == 0x43D298u) {
        ctx->pc = 0x43D298u;
            // 0x43d298: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43D29Cu;
        goto label_43d29c;
    }
    ctx->pc = 0x43D294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43D29Cu);
        ctx->pc = 0x43D298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D294u;
            // 0x43d298: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43D29Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43D29Cu; }
            if (ctx->pc != 0x43D29Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43D29Cu;
label_43d29c:
    // 0x43d29c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x43d29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_43d2a0:
    // 0x43d2a0: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x43d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_43d2a4:
    // 0x43d2a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43d2a8:
    if (ctx->pc == 0x43D2A8u) {
        ctx->pc = 0x43D2A8u;
            // 0x43d2a8: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
        ctx->pc = 0x43D2ACu;
        goto label_43d2ac;
    }
    ctx->pc = 0x43D2A4u;
    {
        const bool branch_taken_0x43d2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43d2a4) {
            ctx->pc = 0x43D2A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43D2A4u;
            // 0x43d2a8: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43D2C0u;
            goto label_43d2c0;
        }
    }
    ctx->pc = 0x43D2ACu;
label_43d2ac:
    // 0x43d2ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43d2acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43d2b0:
    // 0x43d2b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43d2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43d2b4:
    // 0x43d2b4: 0x320f809  jalr        $t9
label_43d2b8:
    if (ctx->pc == 0x43D2B8u) {
        ctx->pc = 0x43D2B8u;
            // 0x43d2b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43D2BCu;
        goto label_43d2bc;
    }
    ctx->pc = 0x43D2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43D2BCu);
        ctx->pc = 0x43D2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D2B4u;
            // 0x43d2b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43D2BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43D2BCu; }
            if (ctx->pc != 0x43D2BCu) { return; }
        }
        }
    }
    ctx->pc = 0x43D2BCu;
label_43d2bc:
    // 0x43d2bc: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x43d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_43d2c0:
    // 0x43d2c0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x43d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43d2c4:
    // 0x43d2c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43d2c8:
    if (ctx->pc == 0x43D2C8u) {
        ctx->pc = 0x43D2C8u;
            // 0x43d2c8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x43D2CCu;
        goto label_43d2cc;
    }
    ctx->pc = 0x43D2C4u;
    {
        const bool branch_taken_0x43d2c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43d2c4) {
            ctx->pc = 0x43D2C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43D2C4u;
            // 0x43d2c8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43D2E0u;
            goto label_43d2e0;
        }
    }
    ctx->pc = 0x43D2CCu;
label_43d2cc:
    // 0x43d2cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43d2ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43d2d0:
    // 0x43d2d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43d2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43d2d4:
    // 0x43d2d4: 0x320f809  jalr        $t9
label_43d2d8:
    if (ctx->pc == 0x43D2D8u) {
        ctx->pc = 0x43D2D8u;
            // 0x43d2d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43D2DCu;
        goto label_43d2dc;
    }
    ctx->pc = 0x43D2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43D2DCu);
        ctx->pc = 0x43D2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D2D4u;
            // 0x43d2d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43D2DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43D2DCu; }
            if (ctx->pc != 0x43D2DCu) { return; }
        }
        }
    }
    ctx->pc = 0x43D2DCu;
label_43d2dc:
    // 0x43d2dc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x43d2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_43d2e0:
    // 0x43d2e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43d2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43d2e4:
    // 0x43d2e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43d2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43d2e8:
    // 0x43d2e8: 0x3e00008  jr          $ra
label_43d2ec:
    if (ctx->pc == 0x43D2ECu) {
        ctx->pc = 0x43D2ECu;
            // 0x43d2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43D2F0u;
        goto label_43d2f0;
    }
    ctx->pc = 0x43D2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D2E8u;
            // 0x43d2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43D2F0u;
label_43d2f0:
    // 0x43d2f0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x43d2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_43d2f4:
    // 0x43d2f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x43d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_43d2f8:
    // 0x43d2f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x43d2f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43d2fc:
    // 0x43d2fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43d2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43d300:
    // 0x43d300: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43d300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43d304:
    // 0x43d304: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x43d304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43d308:
    // 0x43d308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43d308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43d30c:
    // 0x43d30c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43d30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43d310:
    // 0x43d310: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x43d310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43d314:
    // 0x43d314: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x43d314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43d318:
    // 0x43d318: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_43d31c:
    if (ctx->pc == 0x43D31Cu) {
        ctx->pc = 0x43D31Cu;
            // 0x43d31c: 0xe48100dc  swc1        $f1, 0xDC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
        ctx->pc = 0x43D320u;
        goto label_43d320;
    }
    ctx->pc = 0x43D318u;
    {
        const bool branch_taken_0x43d318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x43D31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D318u;
            // 0x43d31c: 0xe48100dc  swc1        $f1, 0xDC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d318) {
            ctx->pc = 0x43D328u;
            goto label_43d328;
        }
    }
    ctx->pc = 0x43D320u;
label_43d320:
    // 0x43d320: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x43d320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_43d324:
    // 0x43d324: 0xae6200dc  sw          $v0, 0xDC($s3)
    ctx->pc = 0x43d324u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 2));
label_43d328:
    // 0x43d328: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x43d328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43d32c:
    // 0x43d32c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x43d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_43d330:
    // 0x43d330: 0xe66000e0  swc1        $f0, 0xE0($s3)
    ctx->pc = 0x43d330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
label_43d334:
    // 0x43d334: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x43d334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43d338:
    // 0x43d338: 0xc0892d0  jal         func_224B40
label_43d33c:
    if (ctx->pc == 0x43D33Cu) {
        ctx->pc = 0x43D33Cu;
            // 0x43d33c: 0xe66000e4  swc1        $f0, 0xE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 228), bits); }
        ctx->pc = 0x43D340u;
        goto label_43d340;
    }
    ctx->pc = 0x43D338u;
    SET_GPR_U32(ctx, 31, 0x43D340u);
    ctx->pc = 0x43D33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D338u;
            // 0x43d33c: 0xe66000e4  swc1        $f0, 0xE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D340u; }
        if (ctx->pc != 0x43D340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D340u; }
        if (ctx->pc != 0x43D340u) { return; }
    }
    ctx->pc = 0x43D340u;
label_43d340:
    // 0x43d340: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43d340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43d344:
    // 0x43d344: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43d344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43d348:
    // 0x43d348: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x43d348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_43d34c:
    // 0x43d34c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x43d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_43d350:
    // 0x43d350: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x43d350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_43d354:
    // 0x43d354: 0xc0a7a88  jal         func_29EA20
label_43d358:
    if (ctx->pc == 0x43D358u) {
        ctx->pc = 0x43D358u;
            // 0x43d358: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x43D35Cu;
        goto label_43d35c;
    }
    ctx->pc = 0x43D354u;
    SET_GPR_U32(ctx, 31, 0x43D35Cu);
    ctx->pc = 0x43D358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D354u;
            // 0x43d358: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D35Cu; }
        if (ctx->pc != 0x43D35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D35Cu; }
        if (ctx->pc != 0x43D35Cu) { return; }
    }
    ctx->pc = 0x43D35Cu;
label_43d35c:
    // 0x43d35c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x43d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_43d360:
    // 0x43d360: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x43d360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43d364:
    // 0x43d364: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_43d368:
    if (ctx->pc == 0x43D368u) {
        ctx->pc = 0x43D368u;
            // 0x43d368: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x43D36Cu;
        goto label_43d36c;
    }
    ctx->pc = 0x43D364u;
    {
        const bool branch_taken_0x43d364 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D364u;
            // 0x43d368: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d364) {
            ctx->pc = 0x43D388u;
            goto label_43d388;
        }
    }
    ctx->pc = 0x43D36Cu;
label_43d36c:
    // 0x43d36c: 0xc66000dc  lwc1        $f0, 0xDC($s3)
    ctx->pc = 0x43d36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43d370:
    // 0x43d370: 0x3c024118  lui         $v0, 0x4118
    ctx->pc = 0x43d370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16664 << 16));
label_43d374:
    // 0x43d374: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x43d374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_43d378:
    // 0x43d378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43d378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43d37c:
    // 0x43d37c: 0xc0827ac  jal         func_209EB0
label_43d380:
    if (ctx->pc == 0x43D380u) {
        ctx->pc = 0x43D380u;
            // 0x43d380: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x43D384u;
        goto label_43d384;
    }
    ctx->pc = 0x43D37Cu;
    SET_GPR_U32(ctx, 31, 0x43D384u);
    ctx->pc = 0x43D380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D37Cu;
            // 0x43d380: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D384u; }
        if (ctx->pc != 0x43D384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D384u; }
        if (ctx->pc != 0x43D384u) { return; }
    }
    ctx->pc = 0x43D384u;
label_43d384:
    // 0x43d384: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x43d384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43d388:
    // 0x43d388: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x43d388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_43d38c:
    // 0x43d38c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x43d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_43d390:
    // 0x43d390: 0xc0b6e68  jal         func_2DB9A0
label_43d394:
    if (ctx->pc == 0x43D394u) {
        ctx->pc = 0x43D394u;
            // 0x43d394: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x43D398u;
        goto label_43d398;
    }
    ctx->pc = 0x43D390u;
    SET_GPR_U32(ctx, 31, 0x43D398u);
    ctx->pc = 0x43D394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D390u;
            // 0x43d394: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D398u; }
        if (ctx->pc != 0x43D398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D398u; }
        if (ctx->pc != 0x43D398u) { return; }
    }
    ctx->pc = 0x43D398u;
label_43d398:
    // 0x43d398: 0xc0b6dac  jal         func_2DB6B0
label_43d39c:
    if (ctx->pc == 0x43D39Cu) {
        ctx->pc = 0x43D39Cu;
            // 0x43d39c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x43D3A0u;
        goto label_43d3a0;
    }
    ctx->pc = 0x43D398u;
    SET_GPR_U32(ctx, 31, 0x43D3A0u);
    ctx->pc = 0x43D39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D398u;
            // 0x43d39c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D3A0u; }
        if (ctx->pc != 0x43D3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D3A0u; }
        if (ctx->pc != 0x43D3A0u) { return; }
    }
    ctx->pc = 0x43D3A0u;
label_43d3a0:
    // 0x43d3a0: 0xc0cac94  jal         func_32B250
label_43d3a4:
    if (ctx->pc == 0x43D3A4u) {
        ctx->pc = 0x43D3A4u;
            // 0x43d3a4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x43D3A8u;
        goto label_43d3a8;
    }
    ctx->pc = 0x43D3A0u;
    SET_GPR_U32(ctx, 31, 0x43D3A8u);
    ctx->pc = 0x43D3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D3A0u;
            // 0x43d3a4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D3A8u; }
        if (ctx->pc != 0x43D3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D3A8u; }
        if (ctx->pc != 0x43D3A8u) { return; }
    }
    ctx->pc = 0x43D3A8u;
label_43d3a8:
    // 0x43d3a8: 0xc0cac84  jal         func_32B210
label_43d3ac:
    if (ctx->pc == 0x43D3ACu) {
        ctx->pc = 0x43D3ACu;
            // 0x43d3ac: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x43D3B0u;
        goto label_43d3b0;
    }
    ctx->pc = 0x43D3A8u;
    SET_GPR_U32(ctx, 31, 0x43D3B0u);
    ctx->pc = 0x43D3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D3A8u;
            // 0x43d3ac: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D3B0u; }
        if (ctx->pc != 0x43D3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D3B0u; }
        if (ctx->pc != 0x43D3B0u) { return; }
    }
    ctx->pc = 0x43D3B0u;
label_43d3b0:
    // 0x43d3b0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x43d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_43d3b4:
    // 0x43d3b4: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x43d3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_43d3b8:
    // 0x43d3b8: 0xc44dc910  lwc1        $f13, -0x36F0($v0)
    ctx->pc = 0x43d3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_43d3bc:
    // 0x43d3bc: 0xc0a562c  jal         func_2958B0
label_43d3c0:
    if (ctx->pc == 0x43D3C0u) {
        ctx->pc = 0x43D3C0u;
            // 0x43d3c0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x43D3C4u;
        goto label_43d3c4;
    }
    ctx->pc = 0x43D3BCu;
    SET_GPR_U32(ctx, 31, 0x43D3C4u);
    ctx->pc = 0x43D3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D3BCu;
            // 0x43d3c0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D3C4u; }
        if (ctx->pc != 0x43D3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D3C4u; }
        if (ctx->pc != 0x43D3C4u) { return; }
    }
    ctx->pc = 0x43D3C4u;
label_43d3c4:
    // 0x43d3c4: 0xafb200d4  sw          $s2, 0xD4($sp)
    ctx->pc = 0x43d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 18));
label_43d3c8:
    // 0x43d3c8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x43d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_43d3cc:
    // 0x43d3cc: 0xc6670018  lwc1        $f7, 0x18($s3)
    ctx->pc = 0x43d3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_43d3d0:
    // 0x43d3d0: 0x3448cccd  ori         $t0, $v0, 0xCCCD
    ctx->pc = 0x43d3d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_43d3d4:
    // 0x43d3d4: 0xc6660014  lwc1        $f6, 0x14($s3)
    ctx->pc = 0x43d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_43d3d8:
    // 0x43d3d8: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x43d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_43d3dc:
    // 0x43d3dc: 0xc6650010  lwc1        $f5, 0x10($s3)
    ctx->pc = 0x43d3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_43d3e0:
    // 0x43d3e0: 0x34470180  ori         $a3, $v0, 0x180
    ctx->pc = 0x43d3e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_43d3e4:
    // 0x43d3e4: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x43d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43d3e8:
    // 0x43d3e8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x43d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_43d3ec:
    // 0x43d3ec: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x43d3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43d3f0:
    // 0x43d3f0: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x43d3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_43d3f4:
    // 0x43d3f4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x43d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43d3f8:
    // 0x43d3f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43d3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43d3fc:
    // 0x43d3fc: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x43d3fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_43d400:
    // 0x43d400: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x43d400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_43d404:
    // 0x43d404: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x43d404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_43d408:
    // 0x43d408: 0xa3a60180  sb          $a2, 0x180($sp)
    ctx->pc = 0x43d408u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 6));
label_43d40c:
    // 0x43d40c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x43d40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_43d410:
    // 0x43d410: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43d414:
    // 0x43d414: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x43d414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43d418:
    // 0x43d418: 0xafa40164  sw          $a0, 0x164($sp)
    ctx->pc = 0x43d418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 4));
label_43d41c:
    // 0x43d41c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x43d41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43d420:
    // 0x43d420: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x43d420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_43d424:
    // 0x43d424: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x43d424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43d428:
    // 0x43d428: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x43d428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_43d42c:
    // 0x43d42c: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x43d42cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_43d430:
    // 0x43d430: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x43d430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_43d434:
    // 0x43d434: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x43d434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_43d438:
    // 0x43d438: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x43d438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
label_43d43c:
    // 0x43d43c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x43d43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_43d440:
    // 0x43d440: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x43d440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
label_43d444:
    // 0x43d444: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x43d444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43d448:
    // 0x43d448: 0xafa8017c  sw          $t0, 0x17C($sp)
    ctx->pc = 0x43d448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 8));
label_43d44c:
    // 0x43d44c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x43d44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43d450:
    // 0x43d450: 0xafa80170  sw          $t0, 0x170($sp)
    ctx->pc = 0x43d450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 8));
label_43d454:
    // 0x43d454: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x43d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43d458:
    // 0x43d458: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x43d458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_43d45c:
    // 0x43d45c: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x43d45cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_43d460:
    // 0x43d460: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x43d460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_43d464:
    // 0x43d464: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x43d464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_43d468:
    // 0x43d468: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x43d468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43d46c:
    // 0x43d46c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x43d46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43d470:
    // 0x43d470: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x43d470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43d474:
    // 0x43d474: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x43d474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_43d478:
    // 0x43d478: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x43d478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_43d47c:
    // 0x43d47c: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x43d47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_43d480:
    // 0x43d480: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x43d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_43d484:
    // 0x43d484: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x43d484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_43d488:
    // 0x43d488: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x43d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43d48c:
    // 0x43d48c: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x43d48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43d490:
    // 0x43d490: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x43d490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43d494:
    // 0x43d494: 0xe7a500e0  swc1        $f5, 0xE0($sp)
    ctx->pc = 0x43d494u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_43d498:
    // 0x43d498: 0xe7a600e4  swc1        $f6, 0xE4($sp)
    ctx->pc = 0x43d498u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_43d49c:
    // 0x43d49c: 0xe7a700e8  swc1        $f7, 0xE8($sp)
    ctx->pc = 0x43d49cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_43d4a0:
    // 0x43d4a0: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x43d4a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_43d4a4:
    // 0x43d4a4: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x43d4a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_43d4a8:
    // 0x43d4a8: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x43d4a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_43d4ac:
    // 0x43d4ac: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x43d4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_43d4b0:
    // 0x43d4b0: 0xc0a7a88  jal         func_29EA20
label_43d4b4:
    if (ctx->pc == 0x43D4B4u) {
        ctx->pc = 0x43D4B4u;
            // 0x43d4b4: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x43D4B8u;
        goto label_43d4b8;
    }
    ctx->pc = 0x43D4B0u;
    SET_GPR_U32(ctx, 31, 0x43D4B8u);
    ctx->pc = 0x43D4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D4B0u;
            // 0x43d4b4: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D4B8u; }
        if (ctx->pc != 0x43D4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D4B8u; }
        if (ctx->pc != 0x43D4B8u) { return; }
    }
    ctx->pc = 0x43D4B8u;
label_43d4b8:
    // 0x43d4b8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x43d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_43d4bc:
    // 0x43d4bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43d4bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43d4c0:
    // 0x43d4c0: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_43d4c4:
    if (ctx->pc == 0x43D4C4u) {
        ctx->pc = 0x43D4C4u;
            // 0x43d4c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x43D4C8u;
        goto label_43d4c8;
    }
    ctx->pc = 0x43D4C0u;
    {
        const bool branch_taken_0x43d4c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D4C0u;
            // 0x43d4c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d4c0) {
            ctx->pc = 0x43D510u;
            goto label_43d510;
        }
    }
    ctx->pc = 0x43D4C8u;
label_43d4c8:
    // 0x43d4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43d4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43d4cc:
    // 0x43d4cc: 0xc088ef4  jal         func_223BD0
label_43d4d0:
    if (ctx->pc == 0x43D4D0u) {
        ctx->pc = 0x43D4D0u;
            // 0x43d4d0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x43D4D4u;
        goto label_43d4d4;
    }
    ctx->pc = 0x43D4CCu;
    SET_GPR_U32(ctx, 31, 0x43D4D4u);
    ctx->pc = 0x43D4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D4CCu;
            // 0x43d4d0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D4D4u; }
        if (ctx->pc != 0x43D4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D4D4u; }
        if (ctx->pc != 0x43D4D4u) { return; }
    }
    ctx->pc = 0x43D4D4u;
label_43d4d4:
    // 0x43d4d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43d4d8:
    // 0x43d4d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x43d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_43d4dc:
    // 0x43d4dc: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x43d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_43d4e0:
    // 0x43d4e0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x43d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_43d4e4:
    // 0x43d4e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x43d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_43d4e8:
    // 0x43d4e8: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x43d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_43d4ec:
    // 0x43d4ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43d4f0:
    // 0x43d4f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x43d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_43d4f4:
    // 0x43d4f4: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x43d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_43d4f8:
    // 0x43d4f8: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x43d4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_43d4fc:
    // 0x43d4fc: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x43d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
label_43d500:
    // 0x43d500: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43d504:
    // 0x43d504: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x43d504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_43d508:
    // 0x43d508: 0xc088b38  jal         func_222CE0
label_43d50c:
    if (ctx->pc == 0x43D50Cu) {
        ctx->pc = 0x43D50Cu;
            // 0x43d50c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D510u;
        goto label_43d510;
    }
    ctx->pc = 0x43D508u;
    SET_GPR_U32(ctx, 31, 0x43D510u);
    ctx->pc = 0x43D50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D508u;
            // 0x43d50c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D510u; }
        if (ctx->pc != 0x43D510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D510u; }
        if (ctx->pc != 0x43D510u) { return; }
    }
    ctx->pc = 0x43D510u;
label_43d510:
    // 0x43d510: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x43d510u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_43d514:
    // 0x43d514: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_43d518:
    if (ctx->pc == 0x43D518u) {
        ctx->pc = 0x43D518u;
            // 0x43d518: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x43D51Cu;
        goto label_43d51c;
    }
    ctx->pc = 0x43D514u;
    {
        const bool branch_taken_0x43d514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43d514) {
            ctx->pc = 0x43D518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43D514u;
            // 0x43d518: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43D558u;
            goto label_43d558;
        }
    }
    ctx->pc = 0x43D51Cu;
label_43d51c:
    // 0x43d51c: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x43d51cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_43d520:
    // 0x43d520: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x43d520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_43d524:
    // 0x43d524: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x43d524u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_43d528:
    // 0x43d528: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x43d528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_43d52c:
    // 0x43d52c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43d52cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_43d530:
    // 0x43d530: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_43d534:
    if (ctx->pc == 0x43D534u) {
        ctx->pc = 0x43D538u;
        goto label_43d538;
    }
    ctx->pc = 0x43D530u;
    {
        const bool branch_taken_0x43d530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43d530) {
            ctx->pc = 0x43D554u;
            goto label_43d554;
        }
    }
    ctx->pc = 0x43D538u;
label_43d538:
    // 0x43d538: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_43d53c:
    if (ctx->pc == 0x43D53Cu) {
        ctx->pc = 0x43D540u;
        goto label_43d540;
    }
    ctx->pc = 0x43D538u;
    {
        const bool branch_taken_0x43d538 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x43d538) {
            ctx->pc = 0x43D554u;
            goto label_43d554;
        }
    }
    ctx->pc = 0x43D540u;
label_43d540:
    // 0x43d540: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x43d540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_43d544:
    // 0x43d544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43d544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43d548:
    // 0x43d548: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43d548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43d54c:
    // 0x43d54c: 0x320f809  jalr        $t9
label_43d550:
    if (ctx->pc == 0x43D550u) {
        ctx->pc = 0x43D550u;
            // 0x43d550: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43D554u;
        goto label_43d554;
    }
    ctx->pc = 0x43D54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43D554u);
        ctx->pc = 0x43D550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D54Cu;
            // 0x43d550: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43D554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43D554u; }
            if (ctx->pc != 0x43D554u) { return; }
        }
        }
    }
    ctx->pc = 0x43D554u;
label_43d554:
    // 0x43d554: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x43d554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_43d558:
    // 0x43d558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43d558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43d55c:
    // 0x43d55c: 0xc08c164  jal         func_230590
label_43d560:
    if (ctx->pc == 0x43D560u) {
        ctx->pc = 0x43D560u;
            // 0x43d560: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43D564u;
        goto label_43d564;
    }
    ctx->pc = 0x43D55Cu;
    SET_GPR_U32(ctx, 31, 0x43D564u);
    ctx->pc = 0x43D560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D55Cu;
            // 0x43d560: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D564u; }
        if (ctx->pc != 0x43D564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D564u; }
        if (ctx->pc != 0x43D564u) { return; }
    }
    ctx->pc = 0x43D564u;
label_43d564:
    // 0x43d564: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x43d564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_43d568:
    // 0x43d568: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x43d568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_43d56c:
    // 0x43d56c: 0x34647084  ori         $a0, $v1, 0x7084
    ctx->pc = 0x43d56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_43d570:
    // 0x43d570: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x43d570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_43d574:
    // 0x43d574: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x43d574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_43d578:
    // 0x43d578: 0xae240154  sw          $a0, 0x154($s1)
    ctx->pc = 0x43d578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 4));
label_43d57c:
    // 0x43d57c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x43d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_43d580:
    // 0x43d580: 0xae230158  sw          $v1, 0x158($s1)
    ctx->pc = 0x43d580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 3));
label_43d584:
    // 0x43d584: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x43d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_43d588:
    // 0x43d588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43d588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43d58c:
    // 0x43d58c: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x43d58cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_43d590:
    // 0x43d590: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43d590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43d594:
    // 0x43d594: 0xc08914c  jal         func_224530
label_43d598:
    if (ctx->pc == 0x43D598u) {
        ctx->pc = 0x43D598u;
            // 0x43d598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D59Cu;
        goto label_43d59c;
    }
    ctx->pc = 0x43D594u;
    SET_GPR_U32(ctx, 31, 0x43D59Cu);
    ctx->pc = 0x43D598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D594u;
            // 0x43d598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D59Cu; }
        if (ctx->pc != 0x43D59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D59Cu; }
        if (ctx->pc != 0x43D59Cu) { return; }
    }
    ctx->pc = 0x43D59Cu;
label_43d59c:
    // 0x43d59c: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x43d59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43d5a0:
    // 0x43d5a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43d5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43d5a4:
    // 0x43d5a4: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x43d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43d5a8:
    // 0x43d5a8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x43d5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_43d5ac:
    // 0x43d5ac: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x43d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43d5b0:
    // 0x43d5b0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x43d5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_43d5b4:
    // 0x43d5b4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x43d5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_43d5b8:
    // 0x43d5b8: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x43d5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_43d5bc:
    // 0x43d5bc: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x43d5bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_43d5c0:
    // 0x43d5c0: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x43d5c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_43d5c4:
    // 0x43d5c4: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x43d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_43d5c8:
    // 0x43d5c8: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x43d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43d5cc:
    // 0x43d5cc: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x43d5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43d5d0:
    // 0x43d5d0: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x43d5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43d5d4:
    // 0x43d5d4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x43d5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_43d5d8:
    // 0x43d5d8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x43d5d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_43d5dc:
    // 0x43d5dc: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x43d5dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_43d5e0:
    // 0x43d5e0: 0xc0892b0  jal         func_224AC0
label_43d5e4:
    if (ctx->pc == 0x43D5E4u) {
        ctx->pc = 0x43D5E4u;
            // 0x43d5e4: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x43D5E8u;
        goto label_43d5e8;
    }
    ctx->pc = 0x43D5E0u;
    SET_GPR_U32(ctx, 31, 0x43D5E8u);
    ctx->pc = 0x43D5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D5E0u;
            // 0x43d5e4: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D5E8u; }
        if (ctx->pc != 0x43D5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D5E8u; }
        if (ctx->pc != 0x43D5E8u) { return; }
    }
    ctx->pc = 0x43D5E8u;
label_43d5e8:
    // 0x43d5e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43d5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43d5ec:
    // 0x43d5ec: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x43d5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_43d5f0:
    // 0x43d5f0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x43d5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_43d5f4:
    // 0x43d5f4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x43d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_43d5f8:
    // 0x43d5f8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x43d5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_43d5fc:
    // 0x43d5fc: 0xc0891d8  jal         func_224760
label_43d600:
    if (ctx->pc == 0x43D600u) {
        ctx->pc = 0x43D600u;
            // 0x43d600: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x43D604u;
        goto label_43d604;
    }
    ctx->pc = 0x43D5FCu;
    SET_GPR_U32(ctx, 31, 0x43D604u);
    ctx->pc = 0x43D600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D5FCu;
            // 0x43d600: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D604u; }
        if (ctx->pc != 0x43D604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D604u; }
        if (ctx->pc != 0x43D604u) { return; }
    }
    ctx->pc = 0x43D604u;
label_43d604:
    // 0x43d604: 0xae710050  sw          $s1, 0x50($s3)
    ctx->pc = 0x43d604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 17));
label_43d608:
    // 0x43d608: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43d608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43d60c:
    // 0x43d60c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x43d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_43d610:
    // 0x43d610: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x43d610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_43d614:
    // 0x43d614: 0xc0a7a88  jal         func_29EA20
label_43d618:
    if (ctx->pc == 0x43D618u) {
        ctx->pc = 0x43D618u;
            // 0x43d618: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x43D61Cu;
        goto label_43d61c;
    }
    ctx->pc = 0x43D614u;
    SET_GPR_U32(ctx, 31, 0x43D61Cu);
    ctx->pc = 0x43D618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D614u;
            // 0x43d618: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D61Cu; }
        if (ctx->pc != 0x43D61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D61Cu; }
        if (ctx->pc != 0x43D61Cu) { return; }
    }
    ctx->pc = 0x43D61Cu;
label_43d61c:
    // 0x43d61c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x43d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_43d620:
    // 0x43d620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43d620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43d624:
    // 0x43d624: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_43d628:
    if (ctx->pc == 0x43D628u) {
        ctx->pc = 0x43D628u;
            // 0x43d628: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x43D62Cu;
        goto label_43d62c;
    }
    ctx->pc = 0x43D624u;
    {
        const bool branch_taken_0x43d624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D624u;
            // 0x43d628: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d624) {
            ctx->pc = 0x43D648u;
            goto label_43d648;
        }
    }
    ctx->pc = 0x43D62Cu;
label_43d62c:
    // 0x43d62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43d62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43d630:
    // 0x43d630: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43d630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43d634:
    // 0x43d634: 0xc0869d0  jal         func_21A740
label_43d638:
    if (ctx->pc == 0x43D638u) {
        ctx->pc = 0x43D638u;
            // 0x43d638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D63Cu;
        goto label_43d63c;
    }
    ctx->pc = 0x43D634u;
    SET_GPR_U32(ctx, 31, 0x43D63Cu);
    ctx->pc = 0x43D638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D634u;
            // 0x43d638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D63Cu; }
        if (ctx->pc != 0x43D63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D63Cu; }
        if (ctx->pc != 0x43D63Cu) { return; }
    }
    ctx->pc = 0x43D63Cu;
label_43d63c:
    // 0x43d63c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43d640:
    // 0x43d640: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x43d640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_43d644:
    // 0x43d644: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x43d644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_43d648:
    // 0x43d648: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x43d648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_43d64c:
    // 0x43d64c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43d650:
    // 0x43d650: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43d654:
    // 0x43d654: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43d654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43d658:
    // 0x43d658: 0xc08c650  jal         func_231940
label_43d65c:
    if (ctx->pc == 0x43D65Cu) {
        ctx->pc = 0x43D65Cu;
            // 0x43d65c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D660u;
        goto label_43d660;
    }
    ctx->pc = 0x43D658u;
    SET_GPR_U32(ctx, 31, 0x43D660u);
    ctx->pc = 0x43D65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D658u;
            // 0x43d65c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D660u; }
        if (ctx->pc != 0x43D660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D660u; }
        if (ctx->pc != 0x43D660u) { return; }
    }
    ctx->pc = 0x43D660u;
label_43d660:
    // 0x43d660: 0xc66000e4  lwc1        $f0, 0xE4($s3)
    ctx->pc = 0x43d660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43d664:
    // 0x43d664: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x43d664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_43d668:
    // 0x43d668: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x43d668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_43d66c:
    // 0x43d66c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x43d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_43d670:
    // 0x43d670: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x43d670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_43d674:
    // 0x43d674: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x43d674u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
label_43d678:
    // 0x43d678: 0xae630070  sw          $v1, 0x70($s3)
    ctx->pc = 0x43d678u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
label_43d67c:
    // 0x43d67c: 0xe6600078  swc1        $f0, 0x78($s3)
    ctx->pc = 0x43d67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
label_43d680:
    // 0x43d680: 0xc040180  jal         func_100600
label_43d684:
    if (ctx->pc == 0x43D684u) {
        ctx->pc = 0x43D684u;
            // 0x43d684: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x43D688u;
        goto label_43d688;
    }
    ctx->pc = 0x43D680u;
    SET_GPR_U32(ctx, 31, 0x43D688u);
    ctx->pc = 0x43D684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D680u;
            // 0x43d684: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D688u; }
        if (ctx->pc != 0x43D688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D688u; }
        if (ctx->pc != 0x43D688u) { return; }
    }
    ctx->pc = 0x43D688u;
label_43d688:
    // 0x43d688: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_43d68c:
    if (ctx->pc == 0x43D68Cu) {
        ctx->pc = 0x43D68Cu;
            // 0x43d68c: 0xae6200a0  sw          $v0, 0xA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x43D690u;
        goto label_43d690;
    }
    ctx->pc = 0x43D688u;
    {
        const bool branch_taken_0x43d688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43d688) {
            ctx->pc = 0x43D68Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43D688u;
            // 0x43d68c: 0xae6200a0  sw          $v0, 0xA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43D6D8u;
            goto label_43d6d8;
        }
    }
    ctx->pc = 0x43D690u;
label_43d690:
    // 0x43d690: 0x8e660050  lw          $a2, 0x50($s3)
    ctx->pc = 0x43d690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_43d694:
    // 0x43d694: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x43d694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_43d698:
    // 0x43d698: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x43d698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_43d69c:
    // 0x43d69c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x43d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_43d6a0:
    // 0x43d6a0: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x43d6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_43d6a4:
    // 0x43d6a4: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x43d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_43d6a8:
    // 0x43d6a8: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x43d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_43d6ac:
    // 0x43d6ac: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x43d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_43d6b0:
    // 0x43d6b0: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x43d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_43d6b4:
    // 0x43d6b4: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x43d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_43d6b8:
    // 0x43d6b8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x43d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_43d6bc:
    // 0x43d6bc: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x43d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_43d6c0:
    // 0x43d6c0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x43d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_43d6c4:
    // 0x43d6c4: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x43d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_43d6c8:
    // 0x43d6c8: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x43d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_43d6cc:
    // 0x43d6cc: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x43d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_43d6d0:
    // 0x43d6d0: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x43d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_43d6d4:
    // 0x43d6d4: 0xae6200a0  sw          $v0, 0xA0($s3)
    ctx->pc = 0x43d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
label_43d6d8:
    // 0x43d6d8: 0x2405f9fb  addiu       $a1, $zero, -0x605
    ctx->pc = 0x43d6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965755));
label_43d6dc:
    // 0x43d6dc: 0x8e6600b0  lw          $a2, 0xB0($s3)
    ctx->pc = 0x43d6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_43d6e0:
    // 0x43d6e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x43d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43d6e4:
    // 0x43d6e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x43d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43d6e8:
    // 0x43d6e8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x43d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_43d6ec:
    // 0x43d6ec: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x43d6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_43d6f0:
    // 0x43d6f0: 0x34a50604  ori         $a1, $a1, 0x604
    ctx->pc = 0x43d6f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1540);
label_43d6f4:
    // 0x43d6f4: 0xae6500b0  sw          $a1, 0xB0($s3)
    ctx->pc = 0x43d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 5));
label_43d6f8:
    // 0x43d6f8: 0xa2630064  sb          $v1, 0x64($s3)
    ctx->pc = 0x43d6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 3));
label_43d6fc:
    // 0x43d6fc: 0xa2600065  sb          $zero, 0x65($s3)
    ctx->pc = 0x43d6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 101), (uint8_t)GPR_U32(ctx, 0));
label_43d700:
    // 0x43d700: 0xa2600066  sb          $zero, 0x66($s3)
    ctx->pc = 0x43d700u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 102), (uint8_t)GPR_U32(ctx, 0));
label_43d704:
    // 0x43d704: 0xa2600067  sb          $zero, 0x67($s3)
    ctx->pc = 0x43d704u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 103), (uint8_t)GPR_U32(ctx, 0));
label_43d708:
    // 0x43d708: 0xa2620068  sb          $v0, 0x68($s3)
    ctx->pc = 0x43d708u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 104), (uint8_t)GPR_U32(ctx, 2));
label_43d70c:
    // 0x43d70c: 0xc040180  jal         func_100600
label_43d710:
    if (ctx->pc == 0x43D710u) {
        ctx->pc = 0x43D710u;
            // 0x43d710: 0xa2600069  sb          $zero, 0x69($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 105), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x43D714u;
        goto label_43d714;
    }
    ctx->pc = 0x43D70Cu;
    SET_GPR_U32(ctx, 31, 0x43D714u);
    ctx->pc = 0x43D710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D70Cu;
            // 0x43d710: 0xa2600069  sb          $zero, 0x69($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 105), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D714u; }
        if (ctx->pc != 0x43D714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D714u; }
        if (ctx->pc != 0x43D714u) { return; }
    }
    ctx->pc = 0x43D714u;
label_43d714:
    // 0x43d714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43d714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43d718:
    // 0x43d718: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_43d71c:
    if (ctx->pc == 0x43D71Cu) {
        ctx->pc = 0x43D71Cu;
            // 0x43d71c: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x43D720u;
        goto label_43d720;
    }
    ctx->pc = 0x43D718u;
    {
        const bool branch_taken_0x43d718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43d718) {
            ctx->pc = 0x43D71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43D718u;
            // 0x43d71c: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43D758u;
            goto label_43d758;
        }
    }
    ctx->pc = 0x43D720u;
label_43d720:
    // 0x43d720: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x43d720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_43d724:
    // 0x43d724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x43d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43d728:
    // 0x43d728: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x43d728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_43d72c:
    // 0x43d72c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x43d72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_43d730:
    // 0x43d730: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43d730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_43d734:
    // 0x43d734: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x43d734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_43d738:
    // 0x43d738: 0xc040138  jal         func_1004E0
label_43d73c:
    if (ctx->pc == 0x43D73Cu) {
        ctx->pc = 0x43D73Cu;
            // 0x43d73c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x43D740u;
        goto label_43d740;
    }
    ctx->pc = 0x43D738u;
    SET_GPR_U32(ctx, 31, 0x43D740u);
    ctx->pc = 0x43D73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D738u;
            // 0x43d73c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D740u; }
        if (ctx->pc != 0x43D740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D740u; }
        if (ctx->pc != 0x43D740u) { return; }
    }
    ctx->pc = 0x43D740u;
label_43d740:
    // 0x43d740: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x43d740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_43d744:
    // 0x43d744: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x43d744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_43d748:
    // 0x43d748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43d748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43d74c:
    // 0x43d74c: 0xc04a576  jal         func_1295D8
label_43d750:
    if (ctx->pc == 0x43D750u) {
        ctx->pc = 0x43D750u;
            // 0x43d750: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x43D754u;
        goto label_43d754;
    }
    ctx->pc = 0x43D74Cu;
    SET_GPR_U32(ctx, 31, 0x43D754u);
    ctx->pc = 0x43D750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D74Cu;
            // 0x43d750: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D754u; }
        if (ctx->pc != 0x43D754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D754u; }
        if (ctx->pc != 0x43D754u) { return; }
    }
    ctx->pc = 0x43D754u;
label_43d754:
    // 0x43d754: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x43d754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_43d758:
    // 0x43d758: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x43d758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_43d75c:
    // 0x43d75c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x43d75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_43d760:
    // 0x43d760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43d760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43d764:
    // 0x43d764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43d764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43d768:
    // 0x43d768: 0x240613ae  addiu       $a2, $zero, 0x13AE
    ctx->pc = 0x43d768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5038));
label_43d76c:
    // 0x43d76c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x43d76cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43d770:
    // 0x43d770: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x43d770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43d774:
    // 0x43d774: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x43d774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_43d778:
    // 0x43d778: 0xc122cd8  jal         func_48B360
label_43d77c:
    if (ctx->pc == 0x43D77Cu) {
        ctx->pc = 0x43D77Cu;
            // 0x43d77c: 0xae7000ec  sw          $s0, 0xEC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 16));
        ctx->pc = 0x43D780u;
        goto label_43d780;
    }
    ctx->pc = 0x43D778u;
    SET_GPR_U32(ctx, 31, 0x43D780u);
    ctx->pc = 0x43D77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D778u;
            // 0x43d77c: 0xae7000ec  sw          $s0, 0xEC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D780u; }
        if (ctx->pc != 0x43D780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D780u; }
        if (ctx->pc != 0x43D780u) { return; }
    }
    ctx->pc = 0x43D780u;
label_43d780:
    // 0x43d780: 0x3c0245c8  lui         $v0, 0x45C8
    ctx->pc = 0x43d780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17864 << 16));
label_43d784:
    // 0x43d784: 0x8e6400ec  lw          $a0, 0xEC($s3)
    ctx->pc = 0x43d784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 236)));
label_43d788:
    // 0x43d788: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43d788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43d78c:
    // 0x43d78c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43d78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43d790:
    // 0x43d790: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x43d790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_43d794:
    // 0x43d794: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x43d794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43d798:
    // 0x43d798: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x43d798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_43d79c:
    // 0x43d79c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x43d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_43d7a0:
    // 0x43d7a0: 0xc122cd8  jal         func_48B360
label_43d7a4:
    if (ctx->pc == 0x43D7A4u) {
        ctx->pc = 0x43D7A4u;
            // 0x43d7a4: 0x344613ae  ori         $a2, $v0, 0x13AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5038);
        ctx->pc = 0x43D7A8u;
        goto label_43d7a8;
    }
    ctx->pc = 0x43D7A0u;
    SET_GPR_U32(ctx, 31, 0x43D7A8u);
    ctx->pc = 0x43D7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D7A0u;
            // 0x43d7a4: 0x344613ae  ori         $a2, $v0, 0x13AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5038);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D7A8u; }
        if (ctx->pc != 0x43D7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D7A8u; }
        if (ctx->pc != 0x43D7A8u) { return; }
    }
    ctx->pc = 0x43D7A8u;
label_43d7a8:
    // 0x43d7a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43d7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_43d7ac:
    // 0x43d7ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43d7acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43d7b0:
    // 0x43d7b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43d7b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43d7b4:
    // 0x43d7b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43d7b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43d7b8:
    // 0x43d7b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43d7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43d7bc:
    // 0x43d7bc: 0x3e00008  jr          $ra
label_43d7c0:
    if (ctx->pc == 0x43D7C0u) {
        ctx->pc = 0x43D7C0u;
            // 0x43d7c0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x43D7C4u;
        goto label_43d7c4;
    }
    ctx->pc = 0x43D7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D7BCu;
            // 0x43d7c0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43D7C4u;
label_43d7c4:
    // 0x43d7c4: 0x0  nop
    ctx->pc = 0x43d7c4u;
    // NOP
label_43d7c8:
    // 0x43d7c8: 0x0  nop
    ctx->pc = 0x43d7c8u;
    // NOP
label_43d7cc:
    // 0x43d7cc: 0x0  nop
    ctx->pc = 0x43d7ccu;
    // NOP
label_43d7d0:
    // 0x43d7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43d7d4:
    // 0x43d7d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43d7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43d7d8:
    // 0x43d7d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43d7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43d7dc:
    // 0x43d7dc: 0xc0aeebc  jal         func_2BBAF0
label_43d7e0:
    if (ctx->pc == 0x43D7E0u) {
        ctx->pc = 0x43D7E0u;
            // 0x43d7e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D7E4u;
        goto label_43d7e4;
    }
    ctx->pc = 0x43D7DCu;
    SET_GPR_U32(ctx, 31, 0x43D7E4u);
    ctx->pc = 0x43D7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D7DCu;
            // 0x43d7e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D7E4u; }
        if (ctx->pc != 0x43D7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D7E4u; }
        if (ctx->pc != 0x43D7E4u) { return; }
    }
    ctx->pc = 0x43D7E4u;
label_43d7e4:
    // 0x43d7e4: 0xc0aeeb4  jal         func_2BBAD0
label_43d7e8:
    if (ctx->pc == 0x43D7E8u) {
        ctx->pc = 0x43D7E8u;
            // 0x43d7e8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x43D7ECu;
        goto label_43d7ec;
    }
    ctx->pc = 0x43D7E4u;
    SET_GPR_U32(ctx, 31, 0x43D7ECu);
    ctx->pc = 0x43D7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D7E4u;
            // 0x43d7e8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D7ECu; }
        if (ctx->pc != 0x43D7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D7ECu; }
        if (ctx->pc != 0x43D7ECu) { return; }
    }
    ctx->pc = 0x43D7ECu;
label_43d7ec:
    // 0x43d7ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x43d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_43d7f0:
    // 0x43d7f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43d7f4:
    // 0x43d7f4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x43d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_43d7f8:
    // 0x43d7f8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x43d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_43d7fc:
    // 0x43d7fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_43d800:
    // 0x43d800: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x43d800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_43d804:
    // 0x43d804: 0xc0aeea4  jal         func_2BBA90
label_43d808:
    if (ctx->pc == 0x43D808u) {
        ctx->pc = 0x43D808u;
            // 0x43d808: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x43D80Cu;
        goto label_43d80c;
    }
    ctx->pc = 0x43D804u;
    SET_GPR_U32(ctx, 31, 0x43D80Cu);
    ctx->pc = 0x43D808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D804u;
            // 0x43d808: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D80Cu; }
        if (ctx->pc != 0x43D80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D80Cu; }
        if (ctx->pc != 0x43D80Cu) { return; }
    }
    ctx->pc = 0x43D80Cu;
label_43d80c:
    // 0x43d80c: 0xc0aee8c  jal         func_2BBA30
label_43d810:
    if (ctx->pc == 0x43D810u) {
        ctx->pc = 0x43D810u;
            // 0x43d810: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x43D814u;
        goto label_43d814;
    }
    ctx->pc = 0x43D80Cu;
    SET_GPR_U32(ctx, 31, 0x43D814u);
    ctx->pc = 0x43D810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D80Cu;
            // 0x43d810: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D814u; }
        if (ctx->pc != 0x43D814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D814u; }
        if (ctx->pc != 0x43D814u) { return; }
    }
    ctx->pc = 0x43D814u;
label_43d814:
    // 0x43d814: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x43d814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_43d818:
    // 0x43d818: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x43d818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_43d81c:
    // 0x43d81c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x43d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_43d820:
    // 0x43d820: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x43d820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_43d824:
    // 0x43d824: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x43d824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_43d828:
    // 0x43d828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43d828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43d82c:
    // 0x43d82c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x43d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_43d830:
    // 0x43d830: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43d830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_43d834:
    // 0x43d834: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x43d834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_43d838:
    // 0x43d838: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x43d838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_43d83c:
    // 0x43d83c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x43d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_43d840:
    // 0x43d840: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x43d840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_43d844:
    // 0x43d844: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x43d844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_43d848:
    // 0x43d848: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x43d848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_43d84c:
    // 0x43d84c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x43d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_43d850:
    // 0x43d850: 0xc0775b8  jal         func_1DD6E0
label_43d854:
    if (ctx->pc == 0x43D854u) {
        ctx->pc = 0x43D854u;
            // 0x43d854: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x43D858u;
        goto label_43d858;
    }
    ctx->pc = 0x43D850u;
    SET_GPR_U32(ctx, 31, 0x43D858u);
    ctx->pc = 0x43D854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D850u;
            // 0x43d854: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D858u; }
        if (ctx->pc != 0x43D858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D858u; }
        if (ctx->pc != 0x43D858u) { return; }
    }
    ctx->pc = 0x43D858u;
label_43d858:
    // 0x43d858: 0xc077314  jal         func_1DCC50
label_43d85c:
    if (ctx->pc == 0x43D85Cu) {
        ctx->pc = 0x43D85Cu;
            // 0x43d85c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x43D860u;
        goto label_43d860;
    }
    ctx->pc = 0x43D858u;
    SET_GPR_U32(ctx, 31, 0x43D860u);
    ctx->pc = 0x43D85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43D858u;
            // 0x43d85c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D860u; }
        if (ctx->pc != 0x43D860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43D860u; }
        if (ctx->pc != 0x43D860u) { return; }
    }
    ctx->pc = 0x43D860u;
label_43d860:
    // 0x43d860: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x43d860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_43d864:
    // 0x43d864: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x43d864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_43d868:
    // 0x43d868: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x43d868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_43d86c:
    // 0x43d86c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x43d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_43d870:
    // 0x43d870: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x43d870u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_43d874:
    // 0x43d874: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43d874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43d878:
    // 0x43d878: 0x2463d0b0  addiu       $v1, $v1, -0x2F50
    ctx->pc = 0x43d878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955184));
label_43d87c:
    // 0x43d87c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x43d87cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_43d880:
    // 0x43d880: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43d880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43d884:
    // 0x43d884: 0x2442d0f0  addiu       $v0, $v0, -0x2F10
    ctx->pc = 0x43d884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955248));
label_43d888:
    // 0x43d888: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x43d888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_43d88c:
    // 0x43d88c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_43d890:
    // 0x43d890: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x43d890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_43d894:
    // 0x43d894: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x43d894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_43d898:
    // 0x43d898: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x43d898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_43d89c:
    // 0x43d89c: 0xa20000e8  sb          $zero, 0xE8($s0)
    ctx->pc = 0x43d89cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 232), (uint8_t)GPR_U32(ctx, 0));
label_43d8a0:
    // 0x43d8a0: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x43d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_43d8a4:
    // 0x43d8a4: 0xa20000f0  sb          $zero, 0xF0($s0)
    ctx->pc = 0x43d8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 0));
label_43d8a8:
    // 0x43d8a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x43d8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_43d8ac:
    // 0x43d8ac: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x43d8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_43d8b0:
    // 0x43d8b0: 0x320f809  jalr        $t9
label_43d8b4:
    if (ctx->pc == 0x43D8B4u) {
        ctx->pc = 0x43D8B4u;
            // 0x43d8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D8B8u;
        goto label_43d8b8;
    }
    ctx->pc = 0x43D8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43D8B8u);
        ctx->pc = 0x43D8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D8B0u;
            // 0x43d8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43D8B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43D8B8u; }
            if (ctx->pc != 0x43D8B8u) { return; }
        }
        }
    }
    ctx->pc = 0x43D8B8u;
label_43d8b8:
    // 0x43d8b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43d8b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43d8bc:
    // 0x43d8bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43d8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43d8c0:
    // 0x43d8c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43d8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43d8c4:
    // 0x43d8c4: 0x3e00008  jr          $ra
label_43d8c8:
    if (ctx->pc == 0x43D8C8u) {
        ctx->pc = 0x43D8C8u;
            // 0x43d8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43D8CCu;
        goto label_43d8cc;
    }
    ctx->pc = 0x43D8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D8C4u;
            // 0x43d8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43D8CCu;
label_43d8cc:
    // 0x43d8cc: 0x0  nop
    ctx->pc = 0x43d8ccu;
    // NOP
label_43d8d0:
    // 0x43d8d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_43d8d4:
    // 0x43d8d4: 0xa08300cc  sb          $v1, 0xCC($a0)
    ctx->pc = 0x43d8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 3));
label_43d8d8:
    // 0x43d8d8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x43d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_43d8dc:
    // 0x43d8dc: 0xac8300c4  sw          $v1, 0xC4($a0)
    ctx->pc = 0x43d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
label_43d8e0:
    // 0x43d8e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x43d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_43d8e4:
    // 0x43d8e4: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x43d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_43d8e8:
    // 0x43d8e8: 0x80a5007a  lb          $a1, 0x7A($a1)
    ctx->pc = 0x43d8e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
label_43d8ec:
    // 0x43d8ec: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x43d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_43d8f0:
    // 0x43d8f0: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x43d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_43d8f4:
    // 0x43d8f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x43d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_43d8f8:
    // 0x43d8f8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x43d8f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_43d8fc:
    // 0x43d8fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43d8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_43d900:
    // 0x43d900: 0x3e00008  jr          $ra
label_43d904:
    if (ctx->pc == 0x43D904u) {
        ctx->pc = 0x43D904u;
            // 0x43d904: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->pc = 0x43D908u;
        goto label_43d908;
    }
    ctx->pc = 0x43D900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D900u;
            // 0x43d904: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43D908u;
label_43d908:
    // 0x43d908: 0x0  nop
    ctx->pc = 0x43d908u;
    // NOP
label_43d90c:
    // 0x43d90c: 0x0  nop
    ctx->pc = 0x43d90cu;
    // NOP
label_43d910:
    // 0x43d910: 0x3e00008  jr          $ra
label_43d914:
    if (ctx->pc == 0x43D914u) {
        ctx->pc = 0x43D914u;
            // 0x43d914: 0x24024e34  addiu       $v0, $zero, 0x4E34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20020));
        ctx->pc = 0x43D918u;
        goto label_43d918;
    }
    ctx->pc = 0x43D910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D910u;
            // 0x43d914: 0x24024e34  addiu       $v0, $zero, 0x4E34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43D918u;
label_43d918:
    // 0x43d918: 0x0  nop
    ctx->pc = 0x43d918u;
    // NOP
label_43d91c:
    // 0x43d91c: 0x0  nop
    ctx->pc = 0x43d91cu;
    // NOP
label_43d920:
    // 0x43d920: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x43d920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_43d924:
    // 0x43d924: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x43d924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_43d928:
    // 0x43d928: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x43d928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43d92c:
    // 0x43d92c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43d92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43d930:
    // 0x43d930: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x43d930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43d934:
    // 0x43d934: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43d934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43d938:
    // 0x43d938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43d938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43d93c:
    // 0x43d93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43d93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43d940:
    // 0x43d940: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x43d940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_43d944:
    // 0x43d944: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_43d948:
    if (ctx->pc == 0x43D948u) {
        ctx->pc = 0x43D948u;
            // 0x43d948: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43D94Cu;
        goto label_43d94c;
    }
    ctx->pc = 0x43D944u;
    {
        const bool branch_taken_0x43d944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D944u;
            // 0x43d948: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d944) {
            ctx->pc = 0x43D988u;
            goto label_43d988;
        }
    }
    ctx->pc = 0x43D94Cu;
label_43d94c:
    // 0x43d94c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43d94cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43d950:
    // 0x43d950: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43d950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43d954:
    // 0x43d954: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x43d954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43d958:
    // 0x43d958: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x43d958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_43d95c:
    // 0x43d95c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x43d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_43d960:
    // 0x43d960: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x43d960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43d964:
    // 0x43d964: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43d964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43d968:
    // 0x43d968: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x43d968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_43d96c:
    // 0x43d96c: 0x320f809  jalr        $t9
label_43d970:
    if (ctx->pc == 0x43D970u) {
        ctx->pc = 0x43D974u;
        goto label_43d974;
    }
    ctx->pc = 0x43D96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43D974u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43D974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43D974u; }
            if (ctx->pc != 0x43D974u) { return; }
        }
        }
    }
    ctx->pc = 0x43D974u;
label_43d974:
    // 0x43d974: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x43d974u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_43d978:
    // 0x43d978: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x43d978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_43d97c:
    // 0x43d97c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x43d97cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_43d980:
    // 0x43d980: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_43d984:
    if (ctx->pc == 0x43D984u) {
        ctx->pc = 0x43D984u;
            // 0x43d984: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x43D988u;
        goto label_43d988;
    }
    ctx->pc = 0x43D980u;
    {
        const bool branch_taken_0x43d980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D980u;
            // 0x43d984: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d980) {
            ctx->pc = 0x43D958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43d958;
        }
    }
    ctx->pc = 0x43D988u;
label_43d988:
    // 0x43d988: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x43d988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43d98c:
    // 0x43d98c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x43d98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_43d990:
    // 0x43d990: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x43d990u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43d994:
    // 0x43d994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43d994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43d998:
    // 0x43d998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43d998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43d99c:
    // 0x43d99c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43d99cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43d9a0:
    // 0x43d9a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43d9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43d9a4:
    // 0x43d9a4: 0x3e00008  jr          $ra
label_43d9a8:
    if (ctx->pc == 0x43D9A8u) {
        ctx->pc = 0x43D9A8u;
            // 0x43d9a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x43D9ACu;
        goto label_43d9ac;
    }
    ctx->pc = 0x43D9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43D9A4u;
            // 0x43d9a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43D9ACu;
label_43d9ac:
    // 0x43d9ac: 0x0  nop
    ctx->pc = 0x43d9acu;
    // NOP
label_43d9b0:
    // 0x43d9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43d9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_43d9b4:
    // 0x43d9b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43d9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43d9b8:
    // 0x43d9b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43d9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43d9bc:
    // 0x43d9bc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x43d9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_43d9c0:
    // 0x43d9c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43d9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43d9c4:
    // 0x43d9c4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x43d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_43d9c8:
    // 0x43d9c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43d9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43d9cc:
    // 0x43d9cc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x43d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_43d9d0:
    // 0x43d9d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_43d9d4:
    // 0x43d9d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x43d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_43d9d8:
    // 0x43d9d8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x43d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_43d9dc:
    // 0x43d9dc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x43d9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43d9e0:
    // 0x43d9e0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x43d9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_43d9e4:
    // 0x43d9e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x43d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_43d9e8:
    // 0x43d9e8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x43d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_43d9ec:
    // 0x43d9ec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x43d9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_43d9f0:
    // 0x43d9f0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x43d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_43d9f4:
    // 0x43d9f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x43d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_43d9f8:
    // 0x43d9f8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x43d9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_43d9fc:
    // 0x43d9fc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x43d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_43da00:
    // 0x43da00: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x43da00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_43da04:
    // 0x43da04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43da04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_43da08:
    // 0x43da08: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x43da08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_43da0c:
    // 0x43da0c: 0xc0a997c  jal         func_2A65F0
label_43da10:
    if (ctx->pc == 0x43DA10u) {
        ctx->pc = 0x43DA10u;
            // 0x43da10: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x43DA14u;
        goto label_43da14;
    }
    ctx->pc = 0x43DA0Cu;
    SET_GPR_U32(ctx, 31, 0x43DA14u);
    ctx->pc = 0x43DA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DA0Cu;
            // 0x43da10: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DA14u; }
        if (ctx->pc != 0x43DA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DA14u; }
        if (ctx->pc != 0x43DA14u) { return; }
    }
    ctx->pc = 0x43DA14u;
label_43da14:
    // 0x43da14: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x43da14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_43da18:
    // 0x43da18: 0xc0d879c  jal         func_361E70
label_43da1c:
    if (ctx->pc == 0x43DA1Cu) {
        ctx->pc = 0x43DA1Cu;
            // 0x43da1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DA20u;
        goto label_43da20;
    }
    ctx->pc = 0x43DA18u;
    SET_GPR_U32(ctx, 31, 0x43DA20u);
    ctx->pc = 0x43DA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DA18u;
            // 0x43da1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DA20u; }
        if (ctx->pc != 0x43DA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DA20u; }
        if (ctx->pc != 0x43DA20u) { return; }
    }
    ctx->pc = 0x43DA20u;
label_43da20:
    // 0x43da20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43da20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43da24:
    // 0x43da24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43da24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43da28:
    // 0x43da28: 0x3e00008  jr          $ra
label_43da2c:
    if (ctx->pc == 0x43DA2Cu) {
        ctx->pc = 0x43DA2Cu;
            // 0x43da2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43DA30u;
        goto label_43da30;
    }
    ctx->pc = 0x43DA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DA28u;
            // 0x43da2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43DA30u;
label_43da30:
    // 0x43da30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43da30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43da34:
    // 0x43da34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43da34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43da38:
    // 0x43da38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43da3c:
    // 0x43da3c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x43da3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_43da40:
    // 0x43da40: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_43da44:
    if (ctx->pc == 0x43DA44u) {
        ctx->pc = 0x43DA44u;
            // 0x43da44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DA48u;
        goto label_43da48;
    }
    ctx->pc = 0x43DA40u;
    {
        const bool branch_taken_0x43da40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DA40u;
            // 0x43da44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43da40) {
            ctx->pc = 0x43DB60u;
            goto label_43db60;
        }
    }
    ctx->pc = 0x43DA48u;
label_43da48:
    // 0x43da48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x43da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_43da4c:
    // 0x43da4c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x43da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_43da50:
    // 0x43da50: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x43da50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_43da54:
    // 0x43da54: 0xc075128  jal         func_1D44A0
label_43da58:
    if (ctx->pc == 0x43DA58u) {
        ctx->pc = 0x43DA58u;
            // 0x43da58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x43DA5Cu;
        goto label_43da5c;
    }
    ctx->pc = 0x43DA54u;
    SET_GPR_U32(ctx, 31, 0x43DA5Cu);
    ctx->pc = 0x43DA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DA54u;
            // 0x43da58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DA5Cu; }
        if (ctx->pc != 0x43DA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DA5Cu; }
        if (ctx->pc != 0x43DA5Cu) { return; }
    }
    ctx->pc = 0x43DA5Cu;
label_43da5c:
    // 0x43da5c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x43da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_43da60:
    // 0x43da60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43da60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43da64:
    // 0x43da64: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x43da64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_43da68:
    // 0x43da68: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x43da68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_43da6c:
    // 0x43da6c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x43da6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_43da70:
    // 0x43da70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_43da74:
    if (ctx->pc == 0x43DA74u) {
        ctx->pc = 0x43DA74u;
            // 0x43da74: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x43DA78u;
        goto label_43da78;
    }
    ctx->pc = 0x43DA70u;
    {
        const bool branch_taken_0x43da70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DA70u;
            // 0x43da74: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43da70) {
            ctx->pc = 0x43DA80u;
            goto label_43da80;
        }
    }
    ctx->pc = 0x43DA78u;
label_43da78:
    // 0x43da78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43da78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43da7c:
    // 0x43da7c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x43da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_43da80:
    // 0x43da80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x43da80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43da84:
    // 0x43da84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43da84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43da88:
    // 0x43da88: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x43da88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_43da8c:
    // 0x43da8c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x43da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_43da90:
    // 0x43da90: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x43da90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_43da94:
    // 0x43da94: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43da98:
    if (ctx->pc == 0x43DA98u) {
        ctx->pc = 0x43DA98u;
            // 0x43da98: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x43DA9Cu;
        goto label_43da9c;
    }
    ctx->pc = 0x43DA94u;
    {
        const bool branch_taken_0x43da94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43da94) {
            ctx->pc = 0x43DA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DA94u;
            // 0x43da98: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DAA8u;
            goto label_43daa8;
        }
    }
    ctx->pc = 0x43DA9Cu;
label_43da9c:
    // 0x43da9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43daa0:
    // 0x43daa0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x43daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_43daa4:
    // 0x43daa4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x43daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43daa8:
    // 0x43daa8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43daac:
    // 0x43daac: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x43daacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_43dab0:
    // 0x43dab0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x43dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_43dab4:
    // 0x43dab4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x43dab4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_43dab8:
    // 0x43dab8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43dabc:
    if (ctx->pc == 0x43DABCu) {
        ctx->pc = 0x43DABCu;
            // 0x43dabc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x43DAC0u;
        goto label_43dac0;
    }
    ctx->pc = 0x43DAB8u;
    {
        const bool branch_taken_0x43dab8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dab8) {
            ctx->pc = 0x43DABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DAB8u;
            // 0x43dabc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DACCu;
            goto label_43dacc;
        }
    }
    ctx->pc = 0x43DAC0u;
label_43dac0:
    // 0x43dac0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43dac4:
    // 0x43dac4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x43dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_43dac8:
    // 0x43dac8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x43dac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_43dacc:
    // 0x43dacc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x43daccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_43dad0:
    // 0x43dad0: 0x320f809  jalr        $t9
label_43dad4:
    if (ctx->pc == 0x43DAD4u) {
        ctx->pc = 0x43DAD4u;
            // 0x43dad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DAD8u;
        goto label_43dad8;
    }
    ctx->pc = 0x43DAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43DAD8u);
        ctx->pc = 0x43DAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DAD0u;
            // 0x43dad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43DAD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43DAD8u; }
            if (ctx->pc != 0x43DAD8u) { return; }
        }
        }
    }
    ctx->pc = 0x43DAD8u;
label_43dad8:
    // 0x43dad8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x43dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_43dadc:
    // 0x43dadc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43dae0:
    // 0x43dae0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x43dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_43dae4:
    // 0x43dae4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x43dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_43dae8:
    // 0x43dae8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x43dae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43daec:
    // 0x43daec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x43daecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_43daf0:
    // 0x43daf0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43daf4:
    if (ctx->pc == 0x43DAF4u) {
        ctx->pc = 0x43DAF4u;
            // 0x43daf4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x43DAF8u;
        goto label_43daf8;
    }
    ctx->pc = 0x43DAF0u;
    {
        const bool branch_taken_0x43daf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43daf0) {
            ctx->pc = 0x43DAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DAF0u;
            // 0x43daf4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DB04u;
            goto label_43db04;
        }
    }
    ctx->pc = 0x43DAF8u;
label_43daf8:
    // 0x43daf8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43dafc:
    // 0x43dafc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x43dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_43db00:
    // 0x43db00: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x43db00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_43db04:
    // 0x43db04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43db04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43db08:
    // 0x43db08: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x43db08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_43db0c:
    // 0x43db0c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x43db0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_43db10:
    // 0x43db10: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x43db10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43db14:
    // 0x43db14: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x43db14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_43db18:
    // 0x43db18: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_43db1c:
    if (ctx->pc == 0x43DB1Cu) {
        ctx->pc = 0x43DB20u;
        goto label_43db20;
    }
    ctx->pc = 0x43DB18u;
    {
        const bool branch_taken_0x43db18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43db18) {
            ctx->pc = 0x43DB28u;
            goto label_43db28;
        }
    }
    ctx->pc = 0x43DB20u;
label_43db20:
    // 0x43db20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43db20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43db24:
    // 0x43db24: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x43db24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_43db28:
    // 0x43db28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43db28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43db2c:
    // 0x43db2c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x43db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_43db30:
    // 0x43db30: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x43db30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_43db34:
    // 0x43db34: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_43db38:
    if (ctx->pc == 0x43DB38u) {
        ctx->pc = 0x43DB3Cu;
        goto label_43db3c;
    }
    ctx->pc = 0x43DB34u;
    {
        const bool branch_taken_0x43db34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43db34) {
            ctx->pc = 0x43DB44u;
            goto label_43db44;
        }
    }
    ctx->pc = 0x43DB3Cu;
label_43db3c:
    // 0x43db3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43db40:
    // 0x43db40: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x43db40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_43db44:
    // 0x43db44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43db44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43db48:
    // 0x43db48: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x43db48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_43db4c:
    // 0x43db4c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x43db4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_43db50:
    // 0x43db50: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43db54:
    if (ctx->pc == 0x43DB54u) {
        ctx->pc = 0x43DB54u;
            // 0x43db54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x43DB58u;
        goto label_43db58;
    }
    ctx->pc = 0x43DB50u;
    {
        const bool branch_taken_0x43db50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43db50) {
            ctx->pc = 0x43DB54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DB50u;
            // 0x43db54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DB64u;
            goto label_43db64;
        }
    }
    ctx->pc = 0x43DB58u;
label_43db58:
    // 0x43db58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43db58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43db5c:
    // 0x43db5c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x43db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_43db60:
    // 0x43db60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43db60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43db64:
    // 0x43db64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43db64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43db68:
    // 0x43db68: 0x3e00008  jr          $ra
label_43db6c:
    if (ctx->pc == 0x43DB6Cu) {
        ctx->pc = 0x43DB6Cu;
            // 0x43db6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43DB70u;
        goto label_43db70;
    }
    ctx->pc = 0x43DB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DB68u;
            // 0x43db6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43DB70u;
label_43db70:
    // 0x43db70: 0x810eeb0  j           func_43BAC0
label_43db74:
    if (ctx->pc == 0x43DB74u) {
        ctx->pc = 0x43DB74u;
            // 0x43db74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x43DB78u;
        goto label_43db78;
    }
    ctx->pc = 0x43DB70u;
    ctx->pc = 0x43DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DB70u;
            // 0x43db74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43BAC0u;
    {
        auto targetFn = runtime->lookupFunction(0x43BAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x43DB78u;
label_43db78:
    // 0x43db78: 0x0  nop
    ctx->pc = 0x43db78u;
    // NOP
label_43db7c:
    // 0x43db7c: 0x0  nop
    ctx->pc = 0x43db7cu;
    // NOP
label_43db80:
    // 0x43db80: 0x810f024  j           func_43C090
label_43db84:
    if (ctx->pc == 0x43DB84u) {
        ctx->pc = 0x43DB84u;
            // 0x43db84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x43DB88u;
        goto label_43db88;
    }
    ctx->pc = 0x43DB80u;
    ctx->pc = 0x43DB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DB80u;
            // 0x43db84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43C090u;
    {
        auto targetFn = runtime->lookupFunction(0x43C090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x43DB88u;
label_43db88:
    // 0x43db88: 0x0  nop
    ctx->pc = 0x43db88u;
    // NOP
label_43db8c:
    // 0x43db8c: 0x0  nop
    ctx->pc = 0x43db8cu;
    // NOP
label_43db90:
    // 0x43db90: 0x810ee58  j           func_43B960
label_43db94:
    if (ctx->pc == 0x43DB94u) {
        ctx->pc = 0x43DB94u;
            // 0x43db94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x43DB98u;
        goto label_43db98;
    }
    ctx->pc = 0x43DB90u;
    ctx->pc = 0x43DB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DB90u;
            // 0x43db94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43B960u;
    if (runtime->hasFunction(0x43B960u)) {
        auto targetFn = runtime->lookupFunction(0x43B960u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0043B960_0x43b960(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x43DB98u;
label_43db98:
    // 0x43db98: 0x0  nop
    ctx->pc = 0x43db98u;
    // NOP
label_43db9c:
    // 0x43db9c: 0x0  nop
    ctx->pc = 0x43db9cu;
    // NOP
label_43dba0:
    // 0x43dba0: 0x810ee34  j           func_43B8D0
label_43dba4:
    if (ctx->pc == 0x43DBA4u) {
        ctx->pc = 0x43DBA4u;
            // 0x43dba4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x43DBA8u;
        goto label_43dba8;
    }
    ctx->pc = 0x43DBA0u;
    ctx->pc = 0x43DBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DBA0u;
            // 0x43dba4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43B8D0u;
    {
        auto targetFn = runtime->lookupFunction(0x43B8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x43DBA8u;
label_43dba8:
    // 0x43dba8: 0x0  nop
    ctx->pc = 0x43dba8u;
    // NOP
label_43dbac:
    // 0x43dbac: 0x0  nop
    ctx->pc = 0x43dbacu;
    // NOP
}
