#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025CDE0
// Address: 0x25cde0 - 0x25d610
void sub_0025CDE0_0x25cde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CDE0_0x25cde0");
#endif

    switch (ctx->pc) {
        case 0x25cde0u: goto label_25cde0;
        case 0x25cde4u: goto label_25cde4;
        case 0x25cde8u: goto label_25cde8;
        case 0x25cdecu: goto label_25cdec;
        case 0x25cdf0u: goto label_25cdf0;
        case 0x25cdf4u: goto label_25cdf4;
        case 0x25cdf8u: goto label_25cdf8;
        case 0x25cdfcu: goto label_25cdfc;
        case 0x25ce00u: goto label_25ce00;
        case 0x25ce04u: goto label_25ce04;
        case 0x25ce08u: goto label_25ce08;
        case 0x25ce0cu: goto label_25ce0c;
        case 0x25ce10u: goto label_25ce10;
        case 0x25ce14u: goto label_25ce14;
        case 0x25ce18u: goto label_25ce18;
        case 0x25ce1cu: goto label_25ce1c;
        case 0x25ce20u: goto label_25ce20;
        case 0x25ce24u: goto label_25ce24;
        case 0x25ce28u: goto label_25ce28;
        case 0x25ce2cu: goto label_25ce2c;
        case 0x25ce30u: goto label_25ce30;
        case 0x25ce34u: goto label_25ce34;
        case 0x25ce38u: goto label_25ce38;
        case 0x25ce3cu: goto label_25ce3c;
        case 0x25ce40u: goto label_25ce40;
        case 0x25ce44u: goto label_25ce44;
        case 0x25ce48u: goto label_25ce48;
        case 0x25ce4cu: goto label_25ce4c;
        case 0x25ce50u: goto label_25ce50;
        case 0x25ce54u: goto label_25ce54;
        case 0x25ce58u: goto label_25ce58;
        case 0x25ce5cu: goto label_25ce5c;
        case 0x25ce60u: goto label_25ce60;
        case 0x25ce64u: goto label_25ce64;
        case 0x25ce68u: goto label_25ce68;
        case 0x25ce6cu: goto label_25ce6c;
        case 0x25ce70u: goto label_25ce70;
        case 0x25ce74u: goto label_25ce74;
        case 0x25ce78u: goto label_25ce78;
        case 0x25ce7cu: goto label_25ce7c;
        case 0x25ce80u: goto label_25ce80;
        case 0x25ce84u: goto label_25ce84;
        case 0x25ce88u: goto label_25ce88;
        case 0x25ce8cu: goto label_25ce8c;
        case 0x25ce90u: goto label_25ce90;
        case 0x25ce94u: goto label_25ce94;
        case 0x25ce98u: goto label_25ce98;
        case 0x25ce9cu: goto label_25ce9c;
        case 0x25cea0u: goto label_25cea0;
        case 0x25cea4u: goto label_25cea4;
        case 0x25cea8u: goto label_25cea8;
        case 0x25ceacu: goto label_25ceac;
        case 0x25ceb0u: goto label_25ceb0;
        case 0x25ceb4u: goto label_25ceb4;
        case 0x25ceb8u: goto label_25ceb8;
        case 0x25cebcu: goto label_25cebc;
        case 0x25cec0u: goto label_25cec0;
        case 0x25cec4u: goto label_25cec4;
        case 0x25cec8u: goto label_25cec8;
        case 0x25ceccu: goto label_25cecc;
        case 0x25ced0u: goto label_25ced0;
        case 0x25ced4u: goto label_25ced4;
        case 0x25ced8u: goto label_25ced8;
        case 0x25cedcu: goto label_25cedc;
        case 0x25cee0u: goto label_25cee0;
        case 0x25cee4u: goto label_25cee4;
        case 0x25cee8u: goto label_25cee8;
        case 0x25ceecu: goto label_25ceec;
        case 0x25cef0u: goto label_25cef0;
        case 0x25cef4u: goto label_25cef4;
        case 0x25cef8u: goto label_25cef8;
        case 0x25cefcu: goto label_25cefc;
        case 0x25cf00u: goto label_25cf00;
        case 0x25cf04u: goto label_25cf04;
        case 0x25cf08u: goto label_25cf08;
        case 0x25cf0cu: goto label_25cf0c;
        case 0x25cf10u: goto label_25cf10;
        case 0x25cf14u: goto label_25cf14;
        case 0x25cf18u: goto label_25cf18;
        case 0x25cf1cu: goto label_25cf1c;
        case 0x25cf20u: goto label_25cf20;
        case 0x25cf24u: goto label_25cf24;
        case 0x25cf28u: goto label_25cf28;
        case 0x25cf2cu: goto label_25cf2c;
        case 0x25cf30u: goto label_25cf30;
        case 0x25cf34u: goto label_25cf34;
        case 0x25cf38u: goto label_25cf38;
        case 0x25cf3cu: goto label_25cf3c;
        case 0x25cf40u: goto label_25cf40;
        case 0x25cf44u: goto label_25cf44;
        case 0x25cf48u: goto label_25cf48;
        case 0x25cf4cu: goto label_25cf4c;
        case 0x25cf50u: goto label_25cf50;
        case 0x25cf54u: goto label_25cf54;
        case 0x25cf58u: goto label_25cf58;
        case 0x25cf5cu: goto label_25cf5c;
        case 0x25cf60u: goto label_25cf60;
        case 0x25cf64u: goto label_25cf64;
        case 0x25cf68u: goto label_25cf68;
        case 0x25cf6cu: goto label_25cf6c;
        case 0x25cf70u: goto label_25cf70;
        case 0x25cf74u: goto label_25cf74;
        case 0x25cf78u: goto label_25cf78;
        case 0x25cf7cu: goto label_25cf7c;
        case 0x25cf80u: goto label_25cf80;
        case 0x25cf84u: goto label_25cf84;
        case 0x25cf88u: goto label_25cf88;
        case 0x25cf8cu: goto label_25cf8c;
        case 0x25cf90u: goto label_25cf90;
        case 0x25cf94u: goto label_25cf94;
        case 0x25cf98u: goto label_25cf98;
        case 0x25cf9cu: goto label_25cf9c;
        case 0x25cfa0u: goto label_25cfa0;
        case 0x25cfa4u: goto label_25cfa4;
        case 0x25cfa8u: goto label_25cfa8;
        case 0x25cfacu: goto label_25cfac;
        case 0x25cfb0u: goto label_25cfb0;
        case 0x25cfb4u: goto label_25cfb4;
        case 0x25cfb8u: goto label_25cfb8;
        case 0x25cfbcu: goto label_25cfbc;
        case 0x25cfc0u: goto label_25cfc0;
        case 0x25cfc4u: goto label_25cfc4;
        case 0x25cfc8u: goto label_25cfc8;
        case 0x25cfccu: goto label_25cfcc;
        case 0x25cfd0u: goto label_25cfd0;
        case 0x25cfd4u: goto label_25cfd4;
        case 0x25cfd8u: goto label_25cfd8;
        case 0x25cfdcu: goto label_25cfdc;
        case 0x25cfe0u: goto label_25cfe0;
        case 0x25cfe4u: goto label_25cfe4;
        case 0x25cfe8u: goto label_25cfe8;
        case 0x25cfecu: goto label_25cfec;
        case 0x25cff0u: goto label_25cff0;
        case 0x25cff4u: goto label_25cff4;
        case 0x25cff8u: goto label_25cff8;
        case 0x25cffcu: goto label_25cffc;
        case 0x25d000u: goto label_25d000;
        case 0x25d004u: goto label_25d004;
        case 0x25d008u: goto label_25d008;
        case 0x25d00cu: goto label_25d00c;
        case 0x25d010u: goto label_25d010;
        case 0x25d014u: goto label_25d014;
        case 0x25d018u: goto label_25d018;
        case 0x25d01cu: goto label_25d01c;
        case 0x25d020u: goto label_25d020;
        case 0x25d024u: goto label_25d024;
        case 0x25d028u: goto label_25d028;
        case 0x25d02cu: goto label_25d02c;
        case 0x25d030u: goto label_25d030;
        case 0x25d034u: goto label_25d034;
        case 0x25d038u: goto label_25d038;
        case 0x25d03cu: goto label_25d03c;
        case 0x25d040u: goto label_25d040;
        case 0x25d044u: goto label_25d044;
        case 0x25d048u: goto label_25d048;
        case 0x25d04cu: goto label_25d04c;
        case 0x25d050u: goto label_25d050;
        case 0x25d054u: goto label_25d054;
        case 0x25d058u: goto label_25d058;
        case 0x25d05cu: goto label_25d05c;
        case 0x25d060u: goto label_25d060;
        case 0x25d064u: goto label_25d064;
        case 0x25d068u: goto label_25d068;
        case 0x25d06cu: goto label_25d06c;
        case 0x25d070u: goto label_25d070;
        case 0x25d074u: goto label_25d074;
        case 0x25d078u: goto label_25d078;
        case 0x25d07cu: goto label_25d07c;
        case 0x25d080u: goto label_25d080;
        case 0x25d084u: goto label_25d084;
        case 0x25d088u: goto label_25d088;
        case 0x25d08cu: goto label_25d08c;
        case 0x25d090u: goto label_25d090;
        case 0x25d094u: goto label_25d094;
        case 0x25d098u: goto label_25d098;
        case 0x25d09cu: goto label_25d09c;
        case 0x25d0a0u: goto label_25d0a0;
        case 0x25d0a4u: goto label_25d0a4;
        case 0x25d0a8u: goto label_25d0a8;
        case 0x25d0acu: goto label_25d0ac;
        case 0x25d0b0u: goto label_25d0b0;
        case 0x25d0b4u: goto label_25d0b4;
        case 0x25d0b8u: goto label_25d0b8;
        case 0x25d0bcu: goto label_25d0bc;
        case 0x25d0c0u: goto label_25d0c0;
        case 0x25d0c4u: goto label_25d0c4;
        case 0x25d0c8u: goto label_25d0c8;
        case 0x25d0ccu: goto label_25d0cc;
        case 0x25d0d0u: goto label_25d0d0;
        case 0x25d0d4u: goto label_25d0d4;
        case 0x25d0d8u: goto label_25d0d8;
        case 0x25d0dcu: goto label_25d0dc;
        case 0x25d0e0u: goto label_25d0e0;
        case 0x25d0e4u: goto label_25d0e4;
        case 0x25d0e8u: goto label_25d0e8;
        case 0x25d0ecu: goto label_25d0ec;
        case 0x25d0f0u: goto label_25d0f0;
        case 0x25d0f4u: goto label_25d0f4;
        case 0x25d0f8u: goto label_25d0f8;
        case 0x25d0fcu: goto label_25d0fc;
        case 0x25d100u: goto label_25d100;
        case 0x25d104u: goto label_25d104;
        case 0x25d108u: goto label_25d108;
        case 0x25d10cu: goto label_25d10c;
        case 0x25d110u: goto label_25d110;
        case 0x25d114u: goto label_25d114;
        case 0x25d118u: goto label_25d118;
        case 0x25d11cu: goto label_25d11c;
        case 0x25d120u: goto label_25d120;
        case 0x25d124u: goto label_25d124;
        case 0x25d128u: goto label_25d128;
        case 0x25d12cu: goto label_25d12c;
        case 0x25d130u: goto label_25d130;
        case 0x25d134u: goto label_25d134;
        case 0x25d138u: goto label_25d138;
        case 0x25d13cu: goto label_25d13c;
        case 0x25d140u: goto label_25d140;
        case 0x25d144u: goto label_25d144;
        case 0x25d148u: goto label_25d148;
        case 0x25d14cu: goto label_25d14c;
        case 0x25d150u: goto label_25d150;
        case 0x25d154u: goto label_25d154;
        case 0x25d158u: goto label_25d158;
        case 0x25d15cu: goto label_25d15c;
        case 0x25d160u: goto label_25d160;
        case 0x25d164u: goto label_25d164;
        case 0x25d168u: goto label_25d168;
        case 0x25d16cu: goto label_25d16c;
        case 0x25d170u: goto label_25d170;
        case 0x25d174u: goto label_25d174;
        case 0x25d178u: goto label_25d178;
        case 0x25d17cu: goto label_25d17c;
        case 0x25d180u: goto label_25d180;
        case 0x25d184u: goto label_25d184;
        case 0x25d188u: goto label_25d188;
        case 0x25d18cu: goto label_25d18c;
        case 0x25d190u: goto label_25d190;
        case 0x25d194u: goto label_25d194;
        case 0x25d198u: goto label_25d198;
        case 0x25d19cu: goto label_25d19c;
        case 0x25d1a0u: goto label_25d1a0;
        case 0x25d1a4u: goto label_25d1a4;
        case 0x25d1a8u: goto label_25d1a8;
        case 0x25d1acu: goto label_25d1ac;
        case 0x25d1b0u: goto label_25d1b0;
        case 0x25d1b4u: goto label_25d1b4;
        case 0x25d1b8u: goto label_25d1b8;
        case 0x25d1bcu: goto label_25d1bc;
        case 0x25d1c0u: goto label_25d1c0;
        case 0x25d1c4u: goto label_25d1c4;
        case 0x25d1c8u: goto label_25d1c8;
        case 0x25d1ccu: goto label_25d1cc;
        case 0x25d1d0u: goto label_25d1d0;
        case 0x25d1d4u: goto label_25d1d4;
        case 0x25d1d8u: goto label_25d1d8;
        case 0x25d1dcu: goto label_25d1dc;
        case 0x25d1e0u: goto label_25d1e0;
        case 0x25d1e4u: goto label_25d1e4;
        case 0x25d1e8u: goto label_25d1e8;
        case 0x25d1ecu: goto label_25d1ec;
        case 0x25d1f0u: goto label_25d1f0;
        case 0x25d1f4u: goto label_25d1f4;
        case 0x25d1f8u: goto label_25d1f8;
        case 0x25d1fcu: goto label_25d1fc;
        case 0x25d200u: goto label_25d200;
        case 0x25d204u: goto label_25d204;
        case 0x25d208u: goto label_25d208;
        case 0x25d20cu: goto label_25d20c;
        case 0x25d210u: goto label_25d210;
        case 0x25d214u: goto label_25d214;
        case 0x25d218u: goto label_25d218;
        case 0x25d21cu: goto label_25d21c;
        case 0x25d220u: goto label_25d220;
        case 0x25d224u: goto label_25d224;
        case 0x25d228u: goto label_25d228;
        case 0x25d22cu: goto label_25d22c;
        case 0x25d230u: goto label_25d230;
        case 0x25d234u: goto label_25d234;
        case 0x25d238u: goto label_25d238;
        case 0x25d23cu: goto label_25d23c;
        case 0x25d240u: goto label_25d240;
        case 0x25d244u: goto label_25d244;
        case 0x25d248u: goto label_25d248;
        case 0x25d24cu: goto label_25d24c;
        case 0x25d250u: goto label_25d250;
        case 0x25d254u: goto label_25d254;
        case 0x25d258u: goto label_25d258;
        case 0x25d25cu: goto label_25d25c;
        case 0x25d260u: goto label_25d260;
        case 0x25d264u: goto label_25d264;
        case 0x25d268u: goto label_25d268;
        case 0x25d26cu: goto label_25d26c;
        case 0x25d270u: goto label_25d270;
        case 0x25d274u: goto label_25d274;
        case 0x25d278u: goto label_25d278;
        case 0x25d27cu: goto label_25d27c;
        case 0x25d280u: goto label_25d280;
        case 0x25d284u: goto label_25d284;
        case 0x25d288u: goto label_25d288;
        case 0x25d28cu: goto label_25d28c;
        case 0x25d290u: goto label_25d290;
        case 0x25d294u: goto label_25d294;
        case 0x25d298u: goto label_25d298;
        case 0x25d29cu: goto label_25d29c;
        case 0x25d2a0u: goto label_25d2a0;
        case 0x25d2a4u: goto label_25d2a4;
        case 0x25d2a8u: goto label_25d2a8;
        case 0x25d2acu: goto label_25d2ac;
        case 0x25d2b0u: goto label_25d2b0;
        case 0x25d2b4u: goto label_25d2b4;
        case 0x25d2b8u: goto label_25d2b8;
        case 0x25d2bcu: goto label_25d2bc;
        case 0x25d2c0u: goto label_25d2c0;
        case 0x25d2c4u: goto label_25d2c4;
        case 0x25d2c8u: goto label_25d2c8;
        case 0x25d2ccu: goto label_25d2cc;
        case 0x25d2d0u: goto label_25d2d0;
        case 0x25d2d4u: goto label_25d2d4;
        case 0x25d2d8u: goto label_25d2d8;
        case 0x25d2dcu: goto label_25d2dc;
        case 0x25d2e0u: goto label_25d2e0;
        case 0x25d2e4u: goto label_25d2e4;
        case 0x25d2e8u: goto label_25d2e8;
        case 0x25d2ecu: goto label_25d2ec;
        case 0x25d2f0u: goto label_25d2f0;
        case 0x25d2f4u: goto label_25d2f4;
        case 0x25d2f8u: goto label_25d2f8;
        case 0x25d2fcu: goto label_25d2fc;
        case 0x25d300u: goto label_25d300;
        case 0x25d304u: goto label_25d304;
        case 0x25d308u: goto label_25d308;
        case 0x25d30cu: goto label_25d30c;
        case 0x25d310u: goto label_25d310;
        case 0x25d314u: goto label_25d314;
        case 0x25d318u: goto label_25d318;
        case 0x25d31cu: goto label_25d31c;
        case 0x25d320u: goto label_25d320;
        case 0x25d324u: goto label_25d324;
        case 0x25d328u: goto label_25d328;
        case 0x25d32cu: goto label_25d32c;
        case 0x25d330u: goto label_25d330;
        case 0x25d334u: goto label_25d334;
        case 0x25d338u: goto label_25d338;
        case 0x25d33cu: goto label_25d33c;
        case 0x25d340u: goto label_25d340;
        case 0x25d344u: goto label_25d344;
        case 0x25d348u: goto label_25d348;
        case 0x25d34cu: goto label_25d34c;
        case 0x25d350u: goto label_25d350;
        case 0x25d354u: goto label_25d354;
        case 0x25d358u: goto label_25d358;
        case 0x25d35cu: goto label_25d35c;
        case 0x25d360u: goto label_25d360;
        case 0x25d364u: goto label_25d364;
        case 0x25d368u: goto label_25d368;
        case 0x25d36cu: goto label_25d36c;
        case 0x25d370u: goto label_25d370;
        case 0x25d374u: goto label_25d374;
        case 0x25d378u: goto label_25d378;
        case 0x25d37cu: goto label_25d37c;
        case 0x25d380u: goto label_25d380;
        case 0x25d384u: goto label_25d384;
        case 0x25d388u: goto label_25d388;
        case 0x25d38cu: goto label_25d38c;
        case 0x25d390u: goto label_25d390;
        case 0x25d394u: goto label_25d394;
        case 0x25d398u: goto label_25d398;
        case 0x25d39cu: goto label_25d39c;
        case 0x25d3a0u: goto label_25d3a0;
        case 0x25d3a4u: goto label_25d3a4;
        case 0x25d3a8u: goto label_25d3a8;
        case 0x25d3acu: goto label_25d3ac;
        case 0x25d3b0u: goto label_25d3b0;
        case 0x25d3b4u: goto label_25d3b4;
        case 0x25d3b8u: goto label_25d3b8;
        case 0x25d3bcu: goto label_25d3bc;
        case 0x25d3c0u: goto label_25d3c0;
        case 0x25d3c4u: goto label_25d3c4;
        case 0x25d3c8u: goto label_25d3c8;
        case 0x25d3ccu: goto label_25d3cc;
        case 0x25d3d0u: goto label_25d3d0;
        case 0x25d3d4u: goto label_25d3d4;
        case 0x25d3d8u: goto label_25d3d8;
        case 0x25d3dcu: goto label_25d3dc;
        case 0x25d3e0u: goto label_25d3e0;
        case 0x25d3e4u: goto label_25d3e4;
        case 0x25d3e8u: goto label_25d3e8;
        case 0x25d3ecu: goto label_25d3ec;
        case 0x25d3f0u: goto label_25d3f0;
        case 0x25d3f4u: goto label_25d3f4;
        case 0x25d3f8u: goto label_25d3f8;
        case 0x25d3fcu: goto label_25d3fc;
        case 0x25d400u: goto label_25d400;
        case 0x25d404u: goto label_25d404;
        case 0x25d408u: goto label_25d408;
        case 0x25d40cu: goto label_25d40c;
        case 0x25d410u: goto label_25d410;
        case 0x25d414u: goto label_25d414;
        case 0x25d418u: goto label_25d418;
        case 0x25d41cu: goto label_25d41c;
        case 0x25d420u: goto label_25d420;
        case 0x25d424u: goto label_25d424;
        case 0x25d428u: goto label_25d428;
        case 0x25d42cu: goto label_25d42c;
        case 0x25d430u: goto label_25d430;
        case 0x25d434u: goto label_25d434;
        case 0x25d438u: goto label_25d438;
        case 0x25d43cu: goto label_25d43c;
        case 0x25d440u: goto label_25d440;
        case 0x25d444u: goto label_25d444;
        case 0x25d448u: goto label_25d448;
        case 0x25d44cu: goto label_25d44c;
        case 0x25d450u: goto label_25d450;
        case 0x25d454u: goto label_25d454;
        case 0x25d458u: goto label_25d458;
        case 0x25d45cu: goto label_25d45c;
        case 0x25d460u: goto label_25d460;
        case 0x25d464u: goto label_25d464;
        case 0x25d468u: goto label_25d468;
        case 0x25d46cu: goto label_25d46c;
        case 0x25d470u: goto label_25d470;
        case 0x25d474u: goto label_25d474;
        case 0x25d478u: goto label_25d478;
        case 0x25d47cu: goto label_25d47c;
        case 0x25d480u: goto label_25d480;
        case 0x25d484u: goto label_25d484;
        case 0x25d488u: goto label_25d488;
        case 0x25d48cu: goto label_25d48c;
        case 0x25d490u: goto label_25d490;
        case 0x25d494u: goto label_25d494;
        case 0x25d498u: goto label_25d498;
        case 0x25d49cu: goto label_25d49c;
        case 0x25d4a0u: goto label_25d4a0;
        case 0x25d4a4u: goto label_25d4a4;
        case 0x25d4a8u: goto label_25d4a8;
        case 0x25d4acu: goto label_25d4ac;
        case 0x25d4b0u: goto label_25d4b0;
        case 0x25d4b4u: goto label_25d4b4;
        case 0x25d4b8u: goto label_25d4b8;
        case 0x25d4bcu: goto label_25d4bc;
        case 0x25d4c0u: goto label_25d4c0;
        case 0x25d4c4u: goto label_25d4c4;
        case 0x25d4c8u: goto label_25d4c8;
        case 0x25d4ccu: goto label_25d4cc;
        case 0x25d4d0u: goto label_25d4d0;
        case 0x25d4d4u: goto label_25d4d4;
        case 0x25d4d8u: goto label_25d4d8;
        case 0x25d4dcu: goto label_25d4dc;
        case 0x25d4e0u: goto label_25d4e0;
        case 0x25d4e4u: goto label_25d4e4;
        case 0x25d4e8u: goto label_25d4e8;
        case 0x25d4ecu: goto label_25d4ec;
        case 0x25d4f0u: goto label_25d4f0;
        case 0x25d4f4u: goto label_25d4f4;
        case 0x25d4f8u: goto label_25d4f8;
        case 0x25d4fcu: goto label_25d4fc;
        case 0x25d500u: goto label_25d500;
        case 0x25d504u: goto label_25d504;
        case 0x25d508u: goto label_25d508;
        case 0x25d50cu: goto label_25d50c;
        case 0x25d510u: goto label_25d510;
        case 0x25d514u: goto label_25d514;
        case 0x25d518u: goto label_25d518;
        case 0x25d51cu: goto label_25d51c;
        case 0x25d520u: goto label_25d520;
        case 0x25d524u: goto label_25d524;
        case 0x25d528u: goto label_25d528;
        case 0x25d52cu: goto label_25d52c;
        case 0x25d530u: goto label_25d530;
        case 0x25d534u: goto label_25d534;
        case 0x25d538u: goto label_25d538;
        case 0x25d53cu: goto label_25d53c;
        case 0x25d540u: goto label_25d540;
        case 0x25d544u: goto label_25d544;
        case 0x25d548u: goto label_25d548;
        case 0x25d54cu: goto label_25d54c;
        case 0x25d550u: goto label_25d550;
        case 0x25d554u: goto label_25d554;
        case 0x25d558u: goto label_25d558;
        case 0x25d55cu: goto label_25d55c;
        case 0x25d560u: goto label_25d560;
        case 0x25d564u: goto label_25d564;
        case 0x25d568u: goto label_25d568;
        case 0x25d56cu: goto label_25d56c;
        case 0x25d570u: goto label_25d570;
        case 0x25d574u: goto label_25d574;
        case 0x25d578u: goto label_25d578;
        case 0x25d57cu: goto label_25d57c;
        case 0x25d580u: goto label_25d580;
        case 0x25d584u: goto label_25d584;
        case 0x25d588u: goto label_25d588;
        case 0x25d58cu: goto label_25d58c;
        case 0x25d590u: goto label_25d590;
        case 0x25d594u: goto label_25d594;
        case 0x25d598u: goto label_25d598;
        case 0x25d59cu: goto label_25d59c;
        case 0x25d5a0u: goto label_25d5a0;
        case 0x25d5a4u: goto label_25d5a4;
        case 0x25d5a8u: goto label_25d5a8;
        case 0x25d5acu: goto label_25d5ac;
        case 0x25d5b0u: goto label_25d5b0;
        case 0x25d5b4u: goto label_25d5b4;
        case 0x25d5b8u: goto label_25d5b8;
        case 0x25d5bcu: goto label_25d5bc;
        case 0x25d5c0u: goto label_25d5c0;
        case 0x25d5c4u: goto label_25d5c4;
        case 0x25d5c8u: goto label_25d5c8;
        case 0x25d5ccu: goto label_25d5cc;
        case 0x25d5d0u: goto label_25d5d0;
        case 0x25d5d4u: goto label_25d5d4;
        case 0x25d5d8u: goto label_25d5d8;
        case 0x25d5dcu: goto label_25d5dc;
        case 0x25d5e0u: goto label_25d5e0;
        case 0x25d5e4u: goto label_25d5e4;
        case 0x25d5e8u: goto label_25d5e8;
        case 0x25d5ecu: goto label_25d5ec;
        case 0x25d5f0u: goto label_25d5f0;
        case 0x25d5f4u: goto label_25d5f4;
        case 0x25d5f8u: goto label_25d5f8;
        case 0x25d5fcu: goto label_25d5fc;
        case 0x25d600u: goto label_25d600;
        case 0x25d604u: goto label_25d604;
        case 0x25d608u: goto label_25d608;
        case 0x25d60cu: goto label_25d60c;
        default: break;
    }

    ctx->pc = 0x25cde0u;

label_25cde0:
    // 0x25cde0: 0x27bdfcb0  addiu       $sp, $sp, -0x350
    ctx->pc = 0x25cde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966448));
label_25cde4:
    // 0x25cde4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x25cde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_25cde8:
    // 0x25cde8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x25cde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_25cdec:
    // 0x25cdec: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x25cdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_25cdf0:
    // 0x25cdf0: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x25cdf0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_25cdf4:
    // 0x25cdf4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x25cdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_25cdf8:
    // 0x25cdf8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x25cdf8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25cdfc:
    // 0x25cdfc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x25cdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_25ce00:
    // 0x25ce00: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x25ce00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_25ce04:
    // 0x25ce04: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25ce04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25ce08:
    // 0x25ce08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_25ce0c:
    // 0x25ce0c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x25ce0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25ce10:
    // 0x25ce10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25ce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25ce14:
    // 0x25ce14: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x25ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_25ce18:
    // 0x25ce18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25ce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_25ce1c:
    // 0x25ce1c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x25ce1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_25ce20:
    // 0x25ce20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25ce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_25ce24:
    // 0x25ce24: 0x27b10328  addiu       $s1, $sp, 0x328
    ctx->pc = 0x25ce24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
label_25ce28:
    // 0x25ce28: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x25ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
label_25ce2c:
    // 0x25ce2c: 0x27b0032c  addiu       $s0, $sp, 0x32C
    ctx->pc = 0x25ce2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 812));
label_25ce30:
    // 0x25ce30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25ce34:
    // 0x25ce34: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x25ce34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_25ce38:
    // 0x25ce38: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x25ce38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_25ce3c:
    // 0x25ce3c: 0x27a70340  addiu       $a3, $sp, 0x340
    ctx->pc = 0x25ce3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_25ce40:
    // 0x25ce40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25ce44:
    // 0x25ce44: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x25ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_25ce48:
    // 0x25ce48: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x25ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25ce4c:
    // 0x25ce4c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25ce50:
    // 0x25ce50: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_25ce54:
    // 0x25ce54: 0xafa20320  sw          $v0, 0x320($sp)
    ctx->pc = 0x25ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 2));
label_25ce58:
    // 0x25ce58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25ce5c:
    // 0x25ce5c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25ce60:
    // 0x25ce60: 0xafa20324  sw          $v0, 0x324($sp)
    ctx->pc = 0x25ce60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 2));
label_25ce64:
    // 0x25ce64: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25ce68:
    // 0x25ce68: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25ce68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ce6c:
    // 0x25ce6c: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x25ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_25ce70:
    // 0x25ce70: 0xe7a00330  swc1        $f0, 0x330($sp)
    ctx->pc = 0x25ce70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
label_25ce74:
    // 0x25ce74: 0xa0a00005  sb          $zero, 0x5($a1)
    ctx->pc = 0x25ce74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 0));
label_25ce78:
    // 0x25ce78: 0xc0991e4  jal         func_264790
label_25ce7c:
    if (ctx->pc == 0x25CE7Cu) {
        ctx->pc = 0x25CE7Cu;
            // 0x25ce7c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25CE80u;
        goto label_25ce80;
    }
    ctx->pc = 0x25CE78u;
    SET_GPR_U32(ctx, 31, 0x25CE80u);
    ctx->pc = 0x25CE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CE78u;
            // 0x25ce7c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264790u;
    if (runtime->hasFunction(0x264790u)) {
        auto targetFn = runtime->lookupFunction(0x264790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CE80u; }
        if (ctx->pc != 0x25CE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264790_0x264790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CE80u; }
        if (ctx->pc != 0x25CE80u) { return; }
    }
    ctx->pc = 0x25CE80u;
label_25ce80:
    // 0x25ce80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ce84:
    // 0x25ce84: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_25ce88:
    if (ctx->pc == 0x25CE88u) {
        ctx->pc = 0x25CE8Cu;
        goto label_25ce8c;
    }
    ctx->pc = 0x25CE84u;
    {
        const bool branch_taken_0x25ce84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25ce84) {
            ctx->pc = 0x25CEB0u;
            goto label_25ceb0;
        }
    }
    ctx->pc = 0x25CE8Cu;
label_25ce8c:
    // 0x25ce8c: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x25ce8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_25ce90:
    // 0x25ce90: 0x106001d1  beqz        $v1, . + 4 + (0x1D1 << 2)
label_25ce94:
    if (ctx->pc == 0x25CE94u) {
        ctx->pc = 0x25CE98u;
        goto label_25ce98;
    }
    ctx->pc = 0x25CE90u;
    {
        const bool branch_taken_0x25ce90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ce90) {
            ctx->pc = 0x25D5D8u;
            goto label_25d5d8;
        }
    }
    ctx->pc = 0x25CE98u;
label_25ce98:
    // 0x25ce98: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x25ce98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_25ce9c:
    // 0x25ce9c: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x25ce9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25cea0:
    // 0x25cea0: 0xc098768  jal         func_261DA0
label_25cea4:
    if (ctx->pc == 0x25CEA4u) {
        ctx->pc = 0x25CEA4u;
            // 0x25cea4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25CEA8u;
        goto label_25cea8;
    }
    ctx->pc = 0x25CEA0u;
    SET_GPR_U32(ctx, 31, 0x25CEA8u);
    ctx->pc = 0x25CEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CEA0u;
            // 0x25cea4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261DA0u;
    if (runtime->hasFunction(0x261DA0u)) {
        auto targetFn = runtime->lookupFunction(0x261DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CEA8u; }
        if (ctx->pc != 0x25CEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261DA0_0x261da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CEA8u; }
        if (ctx->pc != 0x25CEA8u) { return; }
    }
    ctx->pc = 0x25CEA8u;
label_25cea8:
    // 0x25cea8: 0x100001cb  b           . + 4 + (0x1CB << 2)
label_25ceac:
    if (ctx->pc == 0x25CEACu) {
        ctx->pc = 0x25CEB0u;
        goto label_25ceb0;
    }
    ctx->pc = 0x25CEA8u;
    {
        const bool branch_taken_0x25cea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cea8) {
            ctx->pc = 0x25D5D8u;
            goto label_25d5d8;
        }
    }
    ctx->pc = 0x25CEB0u;
label_25ceb0:
    // 0x25ceb0: 0x7bc30000  lq          $v1, 0x0($fp)
    ctx->pc = 0x25ceb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_25ceb4:
    // 0x25ceb4: 0x27ab0310  addiu       $t3, $sp, 0x310
    ctx->pc = 0x25ceb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_25ceb8:
    // 0x25ceb8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x25ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_25cebc:
    // 0x25cebc: 0x7d630000  sq          $v1, 0x0($t3)
    ctx->pc = 0x25cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 3));
label_25cec0:
    // 0x25cec0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25cec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25cec4:
    // 0x25cec4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x25cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25cec8:
    // 0x25cec8: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_25cecc:
    if (ctx->pc == 0x25CECCu) {
        ctx->pc = 0x25CED0u;
        goto label_25ced0;
    }
    ctx->pc = 0x25CEC8u;
    {
        const bool branch_taken_0x25cec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25cec8) {
            ctx->pc = 0x25CF38u;
            goto label_25cf38;
        }
    }
    ctx->pc = 0x25CED0u;
label_25ced0:
    // 0x25ced0: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x25ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25ced4:
    // 0x25ced4: 0x26860009  addiu       $a2, $s4, 0x9
    ctx->pc = 0x25ced4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 9));
label_25ced8:
    // 0x25ced8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x25ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25cedc:
    // 0x25cedc: 0x27a70340  addiu       $a3, $sp, 0x340
    ctx->pc = 0x25cedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_25cee0:
    // 0x25cee0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25cee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25cee4:
    // 0x25cee4: 0x92850008  lbu         $a1, 0x8($s4)
    ctx->pc = 0x25cee4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_25cee8:
    // 0x25cee8: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x25cee8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25ceec:
    // 0x25ceec: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x25ceecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25cef0:
    // 0x25cef0: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x25cef0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25cef4:
    // 0x25cef4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x25cef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_25cef8:
    // 0x25cef8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x25cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_25cefc:
    // 0x25cefc: 0x320f809  jalr        $t9
label_25cf00:
    if (ctx->pc == 0x25CF00u) {
        ctx->pc = 0x25CF00u;
            // 0x25cf00: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->pc = 0x25CF04u;
        goto label_25cf04;
    }
    ctx->pc = 0x25CEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25CF04u);
        ctx->pc = 0x25CF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CEFCu;
            // 0x25cf00: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25CF04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25CF04u; }
            if (ctx->pc != 0x25CF04u) { return; }
        }
        }
    }
    ctx->pc = 0x25CF04u;
label_25cf04:
    // 0x25cf04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_25cf08:
    if (ctx->pc == 0x25CF08u) {
        ctx->pc = 0x25CF0Cu;
        goto label_25cf0c;
    }
    ctx->pc = 0x25CF04u;
    {
        const bool branch_taken_0x25cf04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cf04) {
            ctx->pc = 0x25CF28u;
            goto label_25cf28;
        }
    }
    ctx->pc = 0x25CF0Cu;
label_25cf0c:
    // 0x25cf0c: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x25cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_25cf10:
    // 0x25cf10: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x25cf10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25cf14:
    // 0x25cf14: 0xc098768  jal         func_261DA0
label_25cf18:
    if (ctx->pc == 0x25CF18u) {
        ctx->pc = 0x25CF18u;
            // 0x25cf18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25CF1Cu;
        goto label_25cf1c;
    }
    ctx->pc = 0x25CF14u;
    SET_GPR_U32(ctx, 31, 0x25CF1Cu);
    ctx->pc = 0x25CF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CF14u;
            // 0x25cf18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261DA0u;
    if (runtime->hasFunction(0x261DA0u)) {
        auto targetFn = runtime->lookupFunction(0x261DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF1Cu; }
        if (ctx->pc != 0x25CF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261DA0_0x261da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF1Cu; }
        if (ctx->pc != 0x25CF1Cu) { return; }
    }
    ctx->pc = 0x25CF1Cu;
label_25cf1c:
    // 0x25cf1c: 0x100001ae  b           . + 4 + (0x1AE << 2)
label_25cf20:
    if (ctx->pc == 0x25CF20u) {
        ctx->pc = 0x25CF24u;
        goto label_25cf24;
    }
    ctx->pc = 0x25CF1Cu;
    {
        const bool branch_taken_0x25cf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cf1c) {
            ctx->pc = 0x25D5D8u;
            goto label_25d5d8;
        }
    }
    ctx->pc = 0x25CF24u;
label_25cf24:
    // 0x25cf24: 0x0  nop
    ctx->pc = 0x25cf24u;
    // NOP
label_25cf28:
    // 0x25cf28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25cf2c:
    // 0x25cf2c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_25cf30:
    if (ctx->pc == 0x25CF30u) {
        ctx->pc = 0x25CF34u;
        goto label_25cf34;
    }
    ctx->pc = 0x25CF2Cu;
    {
        const bool branch_taken_0x25cf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25cf2c) {
            ctx->pc = 0x25CF38u;
            goto label_25cf38;
        }
    }
    ctx->pc = 0x25CF34u;
label_25cf34:
    // 0x25cf34: 0xa2e30005  sb          $v1, 0x5($s7)
    ctx->pc = 0x25cf34u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 5), (uint8_t)GPR_U32(ctx, 3));
label_25cf38:
    // 0x25cf38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25cf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25cf3c:
    // 0x25cf3c: 0xc0983f4  jal         func_260FD0
label_25cf40:
    if (ctx->pc == 0x25CF40u) {
        ctx->pc = 0x25CF40u;
            // 0x25cf40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25CF44u;
        goto label_25cf44;
    }
    ctx->pc = 0x25CF3Cu;
    SET_GPR_U32(ctx, 31, 0x25CF44u);
    ctx->pc = 0x25CF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CF3Cu;
            // 0x25cf40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260FD0u;
    if (runtime->hasFunction(0x260FD0u)) {
        auto targetFn = runtime->lookupFunction(0x260FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF44u; }
        if (ctx->pc != 0x25CF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260FD0_0x260fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF44u; }
        if (ctx->pc != 0x25CF44u) { return; }
    }
    ctx->pc = 0x25CF44u;
label_25cf44:
    // 0x25cf44: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x25cf44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_25cf48:
    // 0x25cf48: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25cf48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25cf4c:
    // 0x25cf4c: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x25cf4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25cf50:
    // 0x25cf50: 0x1020010d  beqz        $at, . + 4 + (0x10D << 2)
label_25cf54:
    if (ctx->pc == 0x25CF54u) {
        ctx->pc = 0x25CF54u;
            // 0x25cf54: 0x8e560000  lw          $s6, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x25CF58u;
        goto label_25cf58;
    }
    ctx->pc = 0x25CF50u;
    {
        const bool branch_taken_0x25cf50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CF50u;
            // 0x25cf54: 0x8e560000  lw          $s6, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf50) {
            ctx->pc = 0x25D388u;
            goto label_25d388;
        }
    }
    ctx->pc = 0x25CF58u;
label_25cf58:
    // 0x25cf58: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x25cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25cf5c:
    // 0x25cf5c: 0x27a50308  addiu       $a1, $sp, 0x308
    ctx->pc = 0x25cf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
label_25cf60:
    // 0x25cf60: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x25cf60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_25cf64:
    // 0x25cf64: 0x27a30304  addiu       $v1, $sp, 0x304
    ctx->pc = 0x25cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 772));
label_25cf68:
    // 0x25cf68: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x25cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_25cf6c:
    // 0x25cf6c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x25cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25cf70:
    // 0x25cf70: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x25cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_25cf74:
    // 0x25cf74: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x25cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_25cf78:
    // 0x25cf78: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25cf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cf7c:
    // 0x25cf7c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x25cf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_25cf80:
    // 0x25cf80: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x25cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_25cf84:
    // 0x25cf84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25cf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25cf88:
    // 0x25cf88: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x25cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_25cf8c:
    // 0x25cf8c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x25cf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cf90:
    // 0x25cf90: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x25cf90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25cf94:
    // 0x25cf94: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x25cf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_25cf98:
    // 0x25cf98: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x25cf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cf9c:
    // 0x25cf9c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25cf9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25cfa0:
    // 0x25cfa0: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x25cfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25cfa4:
    // 0x25cfa4: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x25cfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25cfa8:
    // 0x25cfa8: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x25cfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25cfac:
    // 0x25cfac: 0xc7a20314  lwc1        $f2, 0x314($sp)
    ctx->pc = 0x25cfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25cfb0:
    // 0x25cfb0: 0xc7a0031c  lwc1        $f0, 0x31C($sp)
    ctx->pc = 0x25cfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cfb4:
    // 0x25cfb4: 0xc7a30310  lwc1        $f3, 0x310($sp)
    ctx->pc = 0x25cfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25cfb8:
    // 0x25cfb8: 0xc7a10318  lwc1        $f1, 0x318($sp)
    ctx->pc = 0x25cfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25cfbc:
    // 0x25cfbc: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x25cfbcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_25cfc0:
    // 0x25cfc0: 0xe7a202f4  swc1        $f2, 0x2F4($sp)
    ctx->pc = 0x25cfc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 756), bits); }
label_25cfc4:
    // 0x25cfc4: 0x46052080  add.s       $f2, $f4, $f5
    ctx->pc = 0x25cfc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_25cfc8:
    // 0x25cfc8: 0xe7a002fc  swc1        $f0, 0x2FC($sp)
    ctx->pc = 0x25cfc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 764), bits); }
label_25cfcc:
    // 0x25cfcc: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x25cfccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_25cfd0:
    // 0x25cfd0: 0xe7a302f0  swc1        $f3, 0x2F0($sp)
    ctx->pc = 0x25cfd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
label_25cfd4:
    // 0x25cfd4: 0xe7a102f8  swc1        $f1, 0x2F8($sp)
    ctx->pc = 0x25cfd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
label_25cfd8:
    // 0x25cfd8: 0xe7a0030c  swc1        $f0, 0x30C($sp)
    ctx->pc = 0x25cfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 780), bits); }
label_25cfdc:
    // 0x25cfdc: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x25cfdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_25cfe0:
    // 0x25cfe0: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
label_25cfe4:
    if (ctx->pc == 0x25CFE4u) {
        ctx->pc = 0x25CFE8u;
        goto label_25cfe8;
    }
    ctx->pc = 0x25CFE0u;
    {
        const bool branch_taken_0x25cfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cfe0) {
            ctx->pc = 0x25D370u;
            goto label_25d370;
        }
    }
    ctx->pc = 0x25CFE8u;
label_25cfe8:
    // 0x25cfe8: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x25cfe8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_25cfec:
    // 0x25cfec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25cfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25cff0:
    // 0x25cff0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25cff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25cff4:
    // 0x25cff4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x25cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_25cff8:
    // 0x25cff8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x25cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_25cffc:
    // 0x25cffc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_25d000:
    // 0x25d000: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x25d000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_25d004:
    // 0x25d004: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x25d004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_25d008:
    // 0x25d008: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x25d008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_25d00c:
    // 0x25d00c: 0x320f809  jalr        $t9
label_25d010:
    if (ctx->pc == 0x25D010u) {
        ctx->pc = 0x25D010u;
            // 0x25d010: 0x27a701f0  addiu       $a3, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x25D014u;
        goto label_25d014;
    }
    ctx->pc = 0x25D00Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25D014u);
        ctx->pc = 0x25D010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D00Cu;
            // 0x25d010: 0x27a701f0  addiu       $a3, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25D014u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25D014u; }
            if (ctx->pc != 0x25D014u) { return; }
        }
        }
    }
    ctx->pc = 0x25D014u;
label_25d014:
    // 0x25d014: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x25d014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_25d018:
    // 0x25d018: 0x27ae0160  addiu       $t6, $sp, 0x160
    ctx->pc = 0x25d018u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_25d01c:
    // 0x25d01c: 0x27a901c0  addiu       $t1, $sp, 0x1C0
    ctx->pc = 0x25d01cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_25d020:
    // 0x25d020: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x25d020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_25d024:
    // 0x25d024: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x25d024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_25d028:
    // 0x25d028: 0x27a601c4  addiu       $a2, $sp, 0x1C4
    ctx->pc = 0x25d028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
label_25d02c:
    // 0x25d02c: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x25d02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_25d030:
    // 0x25d030: 0x27a401d4  addiu       $a0, $sp, 0x1D4
    ctx->pc = 0x25d030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
label_25d034:
    // 0x25d034: 0x27a301e4  addiu       $v1, $sp, 0x1E4
    ctx->pc = 0x25d034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_25d038:
    // 0x25d038: 0x27b801b8  addiu       $t8, $sp, 0x1B8
    ctx->pc = 0x25d038u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_25d03c:
    // 0x25d03c: 0x27b901d8  addiu       $t9, $sp, 0x1D8
    ctx->pc = 0x25d03cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_25d040:
    // 0x25d040: 0x8c4c0008  lw          $t4, 0x8($v0)
    ctx->pc = 0x25d040u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25d044:
    // 0x25d044: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x25d044u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_25d048:
    // 0x25d048: 0x798f0000  lq          $t7, 0x0($t4)
    ctx->pc = 0x25d048u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 12), 0)));
label_25d04c:
    // 0x25d04c: 0x244dffff  addiu       $t5, $v0, -0x1
    ctx->pc = 0x25d04cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_25d050:
    // 0x25d050: 0x7dcf0000  sq          $t7, 0x0($t6)
    ctx->pc = 0x25d050u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 15));
label_25d054:
    // 0x25d054: 0xd5100  sll         $t2, $t5, 4
    ctx->pc = 0x25d054u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_25d058:
    // 0x25d058: 0x798f0010  lq          $t7, 0x10($t4)
    ctx->pc = 0x25d058u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 12), 16)));
label_25d05c:
    // 0x25d05c: 0x27ae0150  addiu       $t6, $sp, 0x150
    ctx->pc = 0x25d05cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_25d060:
    // 0x25d060: 0x15d5021  addu        $t2, $t2, $sp
    ctx->pc = 0x25d060u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
label_25d064:
    // 0x25d064: 0x27a201c8  addiu       $v0, $sp, 0x1C8
    ctx->pc = 0x25d064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_25d068:
    // 0x25d068: 0x254b01f0  addiu       $t3, $t2, 0x1F0
    ctx->pc = 0x25d068u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 496));
label_25d06c:
    // 0x25d06c: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x25d06cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_25d070:
    // 0x25d070: 0x7dcf0000  sq          $t7, 0x0($t6)
    ctx->pc = 0x25d070u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 15));
label_25d074:
    // 0x25d074: 0x798f0020  lq          $t7, 0x20($t4)
    ctx->pc = 0x25d074u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 12), 32)));
label_25d078:
    // 0x25d078: 0x27ae0140  addiu       $t6, $sp, 0x140
    ctx->pc = 0x25d078u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_25d07c:
    // 0x25d07c: 0x7dcf0000  sq          $t7, 0x0($t6)
    ctx->pc = 0x25d07cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 15));
label_25d080:
    // 0x25d080: 0x798e0030  lq          $t6, 0x30($t4)
    ctx->pc = 0x25d080u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 12), 48)));
label_25d084:
    // 0x25d084: 0x27ac0130  addiu       $t4, $sp, 0x130
    ctx->pc = 0x25d084u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_25d088:
    // 0x25d088: 0x7d8e0000  sq          $t6, 0x0($t4)
    ctx->pc = 0x25d088u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 14));
label_25d08c:
    // 0x25d08c: 0xc7a40160  lwc1        $f4, 0x160($sp)
    ctx->pc = 0x25d08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25d090:
    // 0x25d090: 0xc7a30164  lwc1        $f3, 0x164($sp)
    ctx->pc = 0x25d090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25d094:
    // 0x25d094: 0xc7a20168  lwc1        $f2, 0x168($sp)
    ctx->pc = 0x25d094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25d098:
    // 0x25d098: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x25d098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d09c:
    // 0x25d09c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x25d09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d0a0:
    // 0x25d0a0: 0xe7a401b0  swc1        $f4, 0x1B0($sp)
    ctx->pc = 0x25d0a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_25d0a4:
    // 0x25d0a4: 0xe7a301b4  swc1        $f3, 0x1B4($sp)
    ctx->pc = 0x25d0a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_25d0a8:
    // 0x25d0a8: 0xe7a201b8  swc1        $f2, 0x1B8($sp)
    ctx->pc = 0x25d0a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_25d0ac:
    // 0x25d0ac: 0xe7a101bc  swc1        $f1, 0x1BC($sp)
    ctx->pc = 0x25d0acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_25d0b0:
    // 0x25d0b0: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x25d0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_25d0b4:
    // 0x25d0b4: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x25d0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d0b8:
    // 0x25d0b8: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x25d0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_25d0bc:
    // 0x25d0bc: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x25d0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d0c0:
    // 0x25d0c0: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x25d0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_25d0c4:
    // 0x25d0c4: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x25d0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d0c8:
    // 0x25d0c8: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x25d0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_25d0cc:
    // 0x25d0cc: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x25d0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d0d0:
    // 0x25d0d0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x25d0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_25d0d4:
    // 0x25d0d4: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x25d0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d0d8:
    // 0x25d0d8: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x25d0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_25d0dc:
    // 0x25d0dc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x25d0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d0e0:
    // 0x25d0e0: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x25d0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_25d0e4:
    // 0x25d0e4: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x25d0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d0e8:
    // 0x25d0e8: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x25d0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_25d0ec:
    // 0x25d0ec: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x25d0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d0f0:
    // 0x25d0f0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x25d0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_25d0f4:
    // 0x25d0f4: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x25d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d0f8:
    // 0x25d0f8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x25d0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_25d0fc:
    // 0x25d0fc: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x25d0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d100:
    // 0x25d100: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x25d100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_25d104:
    // 0x25d104: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x25d104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d108:
    // 0x25d108: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x25d108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_25d10c:
    // 0x25d10c: 0x0  nop
    ctx->pc = 0x25d10cu;
    // NOP
label_25d110:
    // 0x25d110: 0x27ac01e8  addiu       $t4, $sp, 0x1E8
    ctx->pc = 0x25d110u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_25d114:
    // 0x25d114: 0xc5660000  lwc1        $f6, 0x0($t3)
    ctx->pc = 0x25d114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25d118:
    // 0x25d118: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x25d118u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_25d11c:
    // 0x25d11c: 0xc7a301b0  lwc1        $f3, 0x1B0($sp)
    ctx->pc = 0x25d11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25d120:
    // 0x25d120: 0xc5650004  lwc1        $f5, 0x4($t3)
    ctx->pc = 0x25d120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25d124:
    // 0x25d124: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x25d124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25d128:
    // 0x25d128: 0xc5640008  lwc1        $f4, 0x8($t3)
    ctx->pc = 0x25d128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25d12c:
    // 0x25d12c: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x25d12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d130:
    // 0x25d130: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x25d130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d134:
    // 0x25d134: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x25d134u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_25d138:
    // 0x25d138: 0x256bfff0  addiu       $t3, $t3, -0x10
    ctx->pc = 0x25d138u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967280));
label_25d13c:
    // 0x25d13c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25d13cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25d140:
    // 0x25d140: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x25d140u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25d144:
    // 0x25d144: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x25d144u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_25d148:
    // 0x25d148: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25d14c:
    // 0x25d14c: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x25d14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_25d150:
    // 0x25d150: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x25d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25d154:
    // 0x25d154: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x25d154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25d158:
    // 0x25d158: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x25d158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d15c:
    // 0x25d15c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25d15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d160:
    // 0x25d160: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x25d160u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_25d164:
    // 0x25d164: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25d164u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25d168:
    // 0x25d168: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x25d168u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25d16c:
    // 0x25d16c: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x25d16cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_25d170:
    // 0x25d170: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25d174:
    // 0x25d174: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x25d174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_25d178:
    // 0x25d178: 0xc7030000  lwc1        $f3, 0x0($t8)
    ctx->pc = 0x25d178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25d17c:
    // 0x25d17c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x25d17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25d180:
    // 0x25d180: 0xc7210000  lwc1        $f1, 0x0($t9)
    ctx->pc = 0x25d180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d184:
    // 0x25d184: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x25d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d188:
    // 0x25d188: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x25d188u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_25d18c:
    // 0x25d18c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25d18cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25d190:
    // 0x25d190: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x25d190u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25d194:
    // 0x25d194: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x25d194u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_25d198:
    // 0x25d198: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25d19c:
    // 0x25d19c: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x25d19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_25d1a0:
    // 0x25d1a0: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x25d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
label_25d1a4:
    // 0x25d1a4: 0x5a1ffda  bgez        $t5, . + 4 + (-0x26 << 2)
label_25d1a8:
    if (ctx->pc == 0x25D1A8u) {
        ctx->pc = 0x25D1A8u;
            // 0x25d1a8: 0x254afff0  addiu       $t2, $t2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
        ctx->pc = 0x25D1ACu;
        goto label_25d1ac;
    }
    ctx->pc = 0x25D1A4u;
    {
        const bool branch_taken_0x25d1a4 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x25D1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D1A4u;
            // 0x25d1a8: 0x254afff0  addiu       $t2, $t2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d1a4) {
            ctx->pc = 0x25D110u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25d110;
        }
    }
    ctx->pc = 0x25D1ACu;
label_25d1ac:
    // 0x25d1ac: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x25d1acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_25d1b0:
    // 0x25d1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d1b4:
    // 0x25d1b4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x25d1b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25d1b8:
    // 0x25d1b8: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x25d1b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_25d1bc:
    // 0x25d1bc: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x25d1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_25d1c0:
    // 0x25d1c0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_25d1c4:
    // 0x25d1c4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x25d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_25d1c8:
    // 0x25d1c8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x25d1c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_25d1cc:
    // 0x25d1cc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x25d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25d1d0:
    // 0x25d1d0: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x25d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_25d1d4:
    // 0x25d1d4: 0x245001f0  addiu       $s0, $v0, 0x1F0
    ctx->pc = 0x25d1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
label_25d1d8:
    // 0x25d1d8: 0x320f809  jalr        $t9
label_25d1dc:
    if (ctx->pc == 0x25D1DCu) {
        ctx->pc = 0x25D1DCu;
            // 0x25d1dc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25D1E0u;
        goto label_25d1e0;
    }
    ctx->pc = 0x25D1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25D1E0u);
        ctx->pc = 0x25D1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D1D8u;
            // 0x25d1dc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25D1E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25D1E0u; }
            if (ctx->pc != 0x25D1E0u) { return; }
        }
        }
    }
    ctx->pc = 0x25D1E0u;
label_25d1e0:
    // 0x25d1e0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x25d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_25d1e4:
    // 0x25d1e4: 0x27ab0180  addiu       $t3, $sp, 0x180
    ctx->pc = 0x25d1e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_25d1e8:
    // 0x25d1e8: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x25d1e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_25d1ec:
    // 0x25d1ec: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x25d1ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_25d1f0:
    // 0x25d1f0: 0x27a901a0  addiu       $t1, $sp, 0x1A0
    ctx->pc = 0x25d1f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_25d1f4:
    // 0x25d1f4: 0x27a80184  addiu       $t0, $sp, 0x184
    ctx->pc = 0x25d1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_25d1f8:
    // 0x25d1f8: 0x27a70174  addiu       $a3, $sp, 0x174
    ctx->pc = 0x25d1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_25d1fc:
    // 0x25d1fc: 0x27a60194  addiu       $a2, $sp, 0x194
    ctx->pc = 0x25d1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_25d200:
    // 0x25d200: 0x27a501a4  addiu       $a1, $sp, 0x1A4
    ctx->pc = 0x25d200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_25d204:
    // 0x25d204: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x25d204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_25d208:
    // 0x25d208: 0x27b80198  addiu       $t8, $sp, 0x198
    ctx->pc = 0x25d208u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_25d20c:
    // 0x25d20c: 0x27b901a8  addiu       $t9, $sp, 0x1A8
    ctx->pc = 0x25d20cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_25d210:
    // 0x25d210: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x25d210u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25d214:
    // 0x25d214: 0x246fffff  addiu       $t7, $v1, -0x1
    ctx->pc = 0x25d214u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25d218:
    // 0x25d218: 0xf6100  sll         $t4, $t7, 4
    ctx->pc = 0x25d218u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_25d21c:
    // 0x25d21c: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x25d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_25d220:
    // 0x25d220: 0x20c6821  addu        $t5, $s0, $t4
    ctx->pc = 0x25d220u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
label_25d224:
    // 0x25d224: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x25d224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_25d228:
    // 0x25d228: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x25d228u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_25d22c:
    // 0x25d22c: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x25d22cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
label_25d230:
    // 0x25d230: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x25d230u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_25d234:
    // 0x25d234: 0x79d00010  lq          $s0, 0x10($t6)
    ctx->pc = 0x25d234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 14), 16)));
label_25d238:
    // 0x25d238: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x25d238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_25d23c:
    // 0x25d23c: 0x7c500000  sq          $s0, 0x0($v0)
    ctx->pc = 0x25d23cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 16));
label_25d240:
    // 0x25d240: 0x79d00020  lq          $s0, 0x20($t6)
    ctx->pc = 0x25d240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 14), 32)));
label_25d244:
    // 0x25d244: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x25d244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_25d248:
    // 0x25d248: 0x7c500000  sq          $s0, 0x0($v0)
    ctx->pc = 0x25d248u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 16));
label_25d24c:
    // 0x25d24c: 0x79ce0030  lq          $t6, 0x30($t6)
    ctx->pc = 0x25d24cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 14), 48)));
label_25d250:
    // 0x25d250: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x25d250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_25d254:
    // 0x25d254: 0x7c4e0000  sq          $t6, 0x0($v0)
    ctx->pc = 0x25d254u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 14));
label_25d258:
    // 0x25d258: 0xc7a40120  lwc1        $f4, 0x120($sp)
    ctx->pc = 0x25d258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25d25c:
    // 0x25d25c: 0xc7a30124  lwc1        $f3, 0x124($sp)
    ctx->pc = 0x25d25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25d260:
    // 0x25d260: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x25d260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25d264:
    // 0x25d264: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x25d264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d268:
    // 0x25d268: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x25d268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d26c:
    // 0x25d26c: 0xe7a40170  swc1        $f4, 0x170($sp)
    ctx->pc = 0x25d26cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_25d270:
    // 0x25d270: 0xe7a30174  swc1        $f3, 0x174($sp)
    ctx->pc = 0x25d270u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_25d274:
    // 0x25d274: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x25d274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_25d278:
    // 0x25d278: 0xe7a1017c  swc1        $f1, 0x17C($sp)
    ctx->pc = 0x25d278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_25d27c:
    // 0x25d27c: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x25d27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_25d280:
    // 0x25d280: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x25d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d284:
    // 0x25d284: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x25d284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_25d288:
    // 0x25d288: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x25d288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d28c:
    // 0x25d28c: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x25d28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_25d290:
    // 0x25d290: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x25d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d294:
    // 0x25d294: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x25d294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_25d298:
    // 0x25d298: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x25d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d29c:
    // 0x25d29c: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x25d29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_25d2a0:
    // 0x25d2a0: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x25d2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d2a4:
    // 0x25d2a4: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x25d2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_25d2a8:
    // 0x25d2a8: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x25d2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d2ac:
    // 0x25d2ac: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x25d2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_25d2b0:
    // 0x25d2b0: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x25d2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d2b4:
    // 0x25d2b4: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x25d2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
label_25d2b8:
    // 0x25d2b8: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x25d2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d2bc:
    // 0x25d2bc: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x25d2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_25d2c0:
    // 0x25d2c0: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x25d2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d2c4:
    // 0x25d2c4: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x25d2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_25d2c8:
    // 0x25d2c8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x25d2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d2cc:
    // 0x25d2cc: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x25d2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_25d2d0:
    // 0x25d2d0: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x25d2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d2d4:
    // 0x25d2d4: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x25d2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_25d2d8:
    // 0x25d2d8: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x25d2d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_25d2dc:
    // 0x25d2dc: 0xc5a60000  lwc1        $f6, 0x0($t5)
    ctx->pc = 0x25d2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25d2e0:
    // 0x25d2e0: 0xc7a30170  lwc1        $f3, 0x170($sp)
    ctx->pc = 0x25d2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25d2e4:
    // 0x25d2e4: 0xc5a50004  lwc1        $f5, 0x4($t5)
    ctx->pc = 0x25d2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25d2e8:
    // 0x25d2e8: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x25d2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25d2ec:
    // 0x25d2ec: 0xc5a40008  lwc1        $f4, 0x8($t5)
    ctx->pc = 0x25d2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25d2f0:
    // 0x25d2f0: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x25d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d2f4:
    // 0x25d2f4: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x25d2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d2f8:
    // 0x25d2f8: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x25d2f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_25d2fc:
    // 0x25d2fc: 0x25adfff0  addiu       $t5, $t5, -0x10
    ctx->pc = 0x25d2fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967280));
label_25d300:
    // 0x25d300: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25d300u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25d304:
    // 0x25d304: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x25d304u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25d308:
    // 0x25d308: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x25d308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_25d30c:
    // 0x25d30c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d30cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25d310:
    // 0x25d310: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x25d310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_25d314:
    // 0x25d314: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x25d314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25d318:
    // 0x25d318: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x25d318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25d31c:
    // 0x25d31c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x25d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d320:
    // 0x25d320: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25d320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d324:
    // 0x25d324: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x25d324u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_25d328:
    // 0x25d328: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25d328u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25d32c:
    // 0x25d32c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x25d32cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25d330:
    // 0x25d330: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x25d330u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_25d334:
    // 0x25d334: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25d338:
    // 0x25d338: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x25d338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_25d33c:
    // 0x25d33c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x25d33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25d340:
    // 0x25d340: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x25d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25d344:
    // 0x25d344: 0xc7010000  lwc1        $f1, 0x0($t8)
    ctx->pc = 0x25d344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d348:
    // 0x25d348: 0xc7200000  lwc1        $f0, 0x0($t9)
    ctx->pc = 0x25d348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d34c:
    // 0x25d34c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x25d34cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_25d350:
    // 0x25d350: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25d350u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_25d354:
    // 0x25d354: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x25d354u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25d358:
    // 0x25d358: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x25d358u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_25d35c:
    // 0x25d35c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25d360:
    // 0x25d360: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x25d360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_25d364:
    // 0x25d364: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x25d364u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_25d368:
    // 0x25d368: 0x5e1ffdb  bgez        $t7, . + 4 + (-0x25 << 2)
label_25d36c:
    if (ctx->pc == 0x25D36Cu) {
        ctx->pc = 0x25D36Cu;
            // 0x25d36c: 0x258cfff0  addiu       $t4, $t4, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967280));
        ctx->pc = 0x25D370u;
        goto label_25d370;
    }
    ctx->pc = 0x25D368u;
    {
        const bool branch_taken_0x25d368 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x25D36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D368u;
            // 0x25d36c: 0x258cfff0  addiu       $t4, $t4, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d368) {
            ctx->pc = 0x25D2D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25d2d8;
        }
    }
    ctx->pc = 0x25D370u;
label_25d370:
    // 0x25d370: 0x8ea8000c  lw          $t0, 0xC($s5)
    ctx->pc = 0x25d370u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_25d374:
    // 0x25d374: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d378:
    // 0x25d378: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x25d378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_25d37c:
    // 0x25d37c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25d37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d380:
    // 0x25d380: 0xc097f58  jal         func_25FD60
label_25d384:
    if (ctx->pc == 0x25D384u) {
        ctx->pc = 0x25D384u;
            // 0x25d384: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25D388u;
        goto label_25d388;
    }
    ctx->pc = 0x25D380u;
    SET_GPR_U32(ctx, 31, 0x25D388u);
    ctx->pc = 0x25D384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D380u;
            // 0x25d384: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FD60u;
    if (runtime->hasFunction(0x25FD60u)) {
        auto targetFn = runtime->lookupFunction(0x25FD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D388u; }
        if (ctx->pc != 0x25D388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FD60_0x25fd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D388u; }
        if (ctx->pc != 0x25D388u) { return; }
    }
    ctx->pc = 0x25D388u;
label_25d388:
    // 0x25d388: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x25d388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25d38c:
    // 0x25d38c: 0xc7a00340  lwc1        $f0, 0x340($sp)
    ctx->pc = 0x25d38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d390:
    // 0x25d390: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x25d390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_25d394:
    // 0x25d394: 0xc7a00344  lwc1        $f0, 0x344($sp)
    ctx->pc = 0x25d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d398:
    // 0x25d398: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x25d398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_25d39c:
    // 0x25d39c: 0xc7a00348  lwc1        $f0, 0x348($sp)
    ctx->pc = 0x25d39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d3a0:
    // 0x25d3a0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x25d3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_25d3a4:
    // 0x25d3a4: 0xc7a0034c  lwc1        $f0, 0x34C($sp)
    ctx->pc = 0x25d3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d3a8:
    // 0x25d3a8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x25d3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_25d3ac:
    // 0x25d3ac: 0xc7a00310  lwc1        $f0, 0x310($sp)
    ctx->pc = 0x25d3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d3b0:
    // 0x25d3b0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x25d3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_25d3b4:
    // 0x25d3b4: 0xc7a00314  lwc1        $f0, 0x314($sp)
    ctx->pc = 0x25d3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d3b8:
    // 0x25d3b8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x25d3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_25d3bc:
    // 0x25d3bc: 0xc7a00318  lwc1        $f0, 0x318($sp)
    ctx->pc = 0x25d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d3c0:
    // 0x25d3c0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x25d3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_25d3c4:
    // 0x25d3c4: 0xc7a0031c  lwc1        $f0, 0x31C($sp)
    ctx->pc = 0x25d3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d3c8:
    // 0x25d3c8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_25d3cc:
    if (ctx->pc == 0x25D3CCu) {
        ctx->pc = 0x25D3CCu;
            // 0x25d3cc: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->pc = 0x25D3D0u;
        goto label_25d3d0;
    }
    ctx->pc = 0x25D3C8u;
    {
        const bool branch_taken_0x25d3c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D3C8u;
            // 0x25d3cc: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d3c8) {
            ctx->pc = 0x25D3E8u;
            goto label_25d3e8;
        }
    }
    ctx->pc = 0x25D3D0u;
label_25d3d0:
    // 0x25d3d0: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x25d3d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_25d3d4:
    // 0x25d3d4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x25d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_25d3d8:
    // 0x25d3d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25d3dc:
    // 0x25d3dc: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x25d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_25d3e0:
    // 0x25d3e0: 0x1000006f  b           . + 4 + (0x6F << 2)
label_25d3e4:
    if (ctx->pc == 0x25D3E4u) {
        ctx->pc = 0x25D3E4u;
            // 0x25d3e4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x25D3E8u;
        goto label_25d3e8;
    }
    ctx->pc = 0x25D3E0u;
    {
        const bool branch_taken_0x25d3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D3E0u;
            // 0x25d3e4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d3e0) {
            ctx->pc = 0x25D5A0u;
            goto label_25d5a0;
        }
    }
    ctx->pc = 0x25D3E8u;
label_25d3e8:
    // 0x25d3e8: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x25d3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_25d3ec:
    // 0x25d3ec: 0x92850008  lbu         $a1, 0x8($s4)
    ctx->pc = 0x25d3ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_25d3f0:
    // 0x25d3f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x25d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25d3f4:
    // 0x25d3f4: 0x92840009  lbu         $a0, 0x9($s4)
    ctx->pc = 0x25d3f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 9)));
label_25d3f8:
    // 0x25d3f8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x25d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25d3fc:
    // 0x25d3fc: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_25d400:
    if (ctx->pc == 0x25D400u) {
        ctx->pc = 0x25D400u;
            // 0x25d400: 0x8ce60030  lw          $a2, 0x30($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
        ctx->pc = 0x25D404u;
        goto label_25d404;
    }
    ctx->pc = 0x25D3FCu;
    {
        const bool branch_taken_0x25d3fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x25D400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D3FCu;
            // 0x25d400: 0x8ce60030  lw          $a2, 0x30($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d3fc) {
            ctx->pc = 0x25D40Cu;
            goto label_25d40c;
        }
    }
    ctx->pc = 0x25D404u;
label_25d404:
    // 0x25d404: 0x10000002  b           . + 4 + (0x2 << 2)
label_25d408:
    if (ctx->pc == 0x25D408u) {
        ctx->pc = 0x25D408u;
            // 0x25d408: 0xc4c10004  lwc1        $f1, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x25D40Cu;
        goto label_25d40c;
    }
    ctx->pc = 0x25D404u;
    {
        const bool branch_taken_0x25d404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D404u;
            // 0x25d408: 0xc4c10004  lwc1        $f1, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d404) {
            ctx->pc = 0x25D410u;
            goto label_25d410;
        }
    }
    ctx->pc = 0x25D40Cu;
label_25d40c:
    // 0x25d40c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x25d40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d410:
    // 0x25d410: 0xc7c0000c  lwc1        $f0, 0xC($fp)
    ctx->pc = 0x25d410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d414:
    // 0x25d414: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25d414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25d418:
    // 0x25d418: 0x45000061  bc1f        . + 4 + (0x61 << 2)
label_25d41c:
    if (ctx->pc == 0x25D41Cu) {
        ctx->pc = 0x25D420u;
        goto label_25d420;
    }
    ctx->pc = 0x25D418u;
    {
        const bool branch_taken_0x25d418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d418) {
            ctx->pc = 0x25D5A0u;
            goto label_25d5a0;
        }
    }
    ctx->pc = 0x25D420u;
label_25d420:
    // 0x25d420: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x25d420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_25d424:
    // 0x25d424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d428:
    // 0x25d428: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d42c:
    // 0x25d42c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x25d42cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d430:
    // 0x25d430: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x25d430u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25d434:
    // 0x25d434: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x25d434u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d438:
    // 0x25d438: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x25d438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_25d43c:
    // 0x25d43c: 0x90e30038  lbu         $v1, 0x38($a3)
    ctx->pc = 0x25d43cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
label_25d440:
    // 0x25d440: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x25d440u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_25d444:
    // 0x25d444: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x25d444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_25d448:
    // 0x25d448: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x25d448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25d44c:
    // 0x25d44c: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x25d44cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25d450:
    // 0x25d450: 0xc0984a0  jal         func_261280
label_25d454:
    if (ctx->pc == 0x25D454u) {
        ctx->pc = 0x25D454u;
            // 0x25d454: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25D458u;
        goto label_25d458;
    }
    ctx->pc = 0x25D450u;
    SET_GPR_U32(ctx, 31, 0x25D458u);
    ctx->pc = 0x25D454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D450u;
            // 0x25d454: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261280u;
    if (runtime->hasFunction(0x261280u)) {
        auto targetFn = runtime->lookupFunction(0x261280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D458u; }
        if (ctx->pc != 0x25D458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261280_0x261280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D458u; }
        if (ctx->pc != 0x25D458u) { return; }
    }
    ctx->pc = 0x25D458u;
label_25d458:
    // 0x25d458: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x25d458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25d45c:
    // 0x25d45c: 0x1443003e  bne         $v0, $v1, . + 4 + (0x3E << 2)
label_25d460:
    if (ctx->pc == 0x25D460u) {
        ctx->pc = 0x25D464u;
        goto label_25d464;
    }
    ctx->pc = 0x25D45Cu;
    {
        const bool branch_taken_0x25d45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25d45c) {
            ctx->pc = 0x25D558u;
            goto label_25d558;
        }
    }
    ctx->pc = 0x25D464u;
label_25d464:
    // 0x25d464: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x25d464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_25d468:
    // 0x25d468: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x25d468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_25d46c:
    // 0x25d46c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_25d470:
    if (ctx->pc == 0x25D470u) {
        ctx->pc = 0x25D474u;
        goto label_25d474;
    }
    ctx->pc = 0x25D46Cu;
    {
        const bool branch_taken_0x25d46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25d46c) {
            ctx->pc = 0x25D488u;
            goto label_25d488;
        }
    }
    ctx->pc = 0x25D474u;
label_25d474:
    // 0x25d474: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25d474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25d478:
    // 0x25d478: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x25d478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_25d47c:
    // 0x25d47c: 0x10000048  b           . + 4 + (0x48 << 2)
label_25d480:
    if (ctx->pc == 0x25D480u) {
        ctx->pc = 0x25D480u;
            // 0x25d480: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x25D484u;
        goto label_25d484;
    }
    ctx->pc = 0x25D47Cu;
    {
        const bool branch_taken_0x25d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D47Cu;
            // 0x25d480: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d47c) {
            ctx->pc = 0x25D5A0u;
            goto label_25d5a0;
        }
    }
    ctx->pc = 0x25D484u;
label_25d484:
    // 0x25d484: 0x0  nop
    ctx->pc = 0x25d484u;
    // NOP
label_25d488:
    // 0x25d488: 0x8e423050  lw          $v0, 0x3050($s2)
    ctx->pc = 0x25d488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12368)));
label_25d48c:
    // 0x25d48c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_25d490:
    if (ctx->pc == 0x25D490u) {
        ctx->pc = 0x25D494u;
        goto label_25d494;
    }
    ctx->pc = 0x25D48Cu;
    {
        const bool branch_taken_0x25d48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d48c) {
            ctx->pc = 0x25D4E8u;
            goto label_25d4e8;
        }
    }
    ctx->pc = 0x25D494u;
label_25d494:
    // 0x25d494: 0x12e00014  beqz        $s7, . + 4 + (0x14 << 2)
label_25d498:
    if (ctx->pc == 0x25D498u) {
        ctx->pc = 0x25D49Cu;
        goto label_25d49c;
    }
    ctx->pc = 0x25D494u;
    {
        const bool branch_taken_0x25d494 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d494) {
            ctx->pc = 0x25D4E8u;
            goto label_25d4e8;
        }
    }
    ctx->pc = 0x25D49Cu;
label_25d49c:
    // 0x25d49c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x25d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_25d4a0:
    // 0x25d4a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_25d4a4:
    if (ctx->pc == 0x25D4A4u) {
        ctx->pc = 0x25D4A8u;
        goto label_25d4a8;
    }
    ctx->pc = 0x25D4A0u;
    {
        const bool branch_taken_0x25d4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d4a0) {
            ctx->pc = 0x25D4E8u;
            goto label_25d4e8;
        }
    }
    ctx->pc = 0x25D4A8u;
label_25d4a8:
    // 0x25d4a8: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x25d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_25d4ac:
    // 0x25d4ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25d4acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25d4b0:
    // 0x25d4b0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x25d4b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_25d4b4:
    // 0x25d4b4: 0x320f809  jalr        $t9
label_25d4b8:
    if (ctx->pc == 0x25D4B8u) {
        ctx->pc = 0x25D4B8u;
            // 0x25d4b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25D4BCu;
        goto label_25d4bc;
    }
    ctx->pc = 0x25D4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25D4BCu);
        ctx->pc = 0x25D4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D4B4u;
            // 0x25d4b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25D4BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25D4BCu; }
            if (ctx->pc != 0x25D4BCu) { return; }
        }
        }
    }
    ctx->pc = 0x25D4BCu;
label_25d4bc:
    // 0x25d4bc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_25d4c0:
    if (ctx->pc == 0x25D4C0u) {
        ctx->pc = 0x25D4C4u;
        goto label_25d4c4;
    }
    ctx->pc = 0x25D4BCu;
    {
        const bool branch_taken_0x25d4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d4bc) {
            ctx->pc = 0x25D528u;
            goto label_25d528;
        }
    }
    ctx->pc = 0x25D4C4u;
label_25d4c4:
    // 0x25d4c4: 0x8e443050  lw          $a0, 0x3050($s2)
    ctx->pc = 0x25d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12368)));
label_25d4c8:
    // 0x25d4c8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x25d4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25d4cc:
    // 0x25d4cc: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x25d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_25d4d0:
    // 0x25d4d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x25d4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_25d4d4:
    // 0x25d4d4: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x25d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_25d4d8:
    // 0x25d4d8: 0xacb70004  sw          $s7, 0x4($a1)
    ctx->pc = 0x25d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 23));
label_25d4dc:
    // 0x25d4dc: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x25d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_25d4e0:
    // 0x25d4e0: 0x10000019  b           . + 4 + (0x19 << 2)
label_25d4e4:
    if (ctx->pc == 0x25D4E4u) {
        ctx->pc = 0x25D4E4u;
            // 0x25d4e4: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x25D4E8u;
        goto label_25d4e8;
    }
    ctx->pc = 0x25D4E0u;
    {
        const bool branch_taken_0x25d4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D4E0u;
            // 0x25d4e4: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d4e0) {
            ctx->pc = 0x25D548u;
            goto label_25d548;
        }
    }
    ctx->pc = 0x25D4E8u;
label_25d4e8:
    // 0x25d4e8: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x25d4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_25d4ec:
    // 0x25d4ec: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x25d4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25d4f0:
    // 0x25d4f0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x25d4f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25d4f4:
    // 0x25d4f4: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x25d4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25d4f8:
    // 0x25d4f8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x25d4f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d4fc:
    // 0x25d4fc: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x25d4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_25d500:
    // 0x25d500: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25d500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25d504:
    // 0x25d504: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x25d504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_25d508:
    // 0x25d508: 0x320f809  jalr        $t9
label_25d50c:
    if (ctx->pc == 0x25D50Cu) {
        ctx->pc = 0x25D50Cu;
            // 0x25d50c: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25D510u;
        goto label_25d510;
    }
    ctx->pc = 0x25D508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25D510u);
        ctx->pc = 0x25D50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D508u;
            // 0x25d50c: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25D510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25D510u; }
            if (ctx->pc != 0x25D510u) { return; }
        }
        }
    }
    ctx->pc = 0x25D510u;
label_25d510:
    // 0x25d510: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x25d510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25d514:
    // 0x25d514: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x25d514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_25d518:
    // 0x25d518: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x25d518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_25d51c:
    // 0x25d51c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x25d51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_25d520:
    // 0x25d520: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_25d524:
    if (ctx->pc == 0x25D524u) {
        ctx->pc = 0x25D528u;
        goto label_25d528;
    }
    ctx->pc = 0x25D520u;
    {
        const bool branch_taken_0x25d520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25d520) {
            ctx->pc = 0x25D540u;
            goto label_25d540;
        }
    }
    ctx->pc = 0x25D528u;
label_25d528:
    // 0x25d528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d52c:
    // 0x25d52c: 0xc097f24  jal         func_25FC90
label_25d530:
    if (ctx->pc == 0x25D530u) {
        ctx->pc = 0x25D530u;
            // 0x25d530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25D534u;
        goto label_25d534;
    }
    ctx->pc = 0x25D52Cu;
    SET_GPR_U32(ctx, 31, 0x25D534u);
    ctx->pc = 0x25D530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D52Cu;
            // 0x25d530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FC90u;
    if (runtime->hasFunction(0x25FC90u)) {
        auto targetFn = runtime->lookupFunction(0x25FC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D534u; }
        if (ctx->pc != 0x25D534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FC90_0x25fc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D534u; }
        if (ctx->pc != 0x25D534u) { return; }
    }
    ctx->pc = 0x25D534u;
label_25d534:
    // 0x25d534: 0x1000000c  b           . + 4 + (0xC << 2)
label_25d538:
    if (ctx->pc == 0x25D538u) {
        ctx->pc = 0x25D53Cu;
        goto label_25d53c;
    }
    ctx->pc = 0x25D534u;
    {
        const bool branch_taken_0x25d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d534) {
            ctx->pc = 0x25D568u;
            goto label_25d568;
        }
    }
    ctx->pc = 0x25D53Cu;
label_25d53c:
    // 0x25d53c: 0x0  nop
    ctx->pc = 0x25d53cu;
    // NOP
label_25d540:
    // 0x25d540: 0xa6640006  sh          $a0, 0x6($s3)
    ctx->pc = 0x25d540u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 4));
label_25d544:
    // 0x25d544: 0x0  nop
    ctx->pc = 0x25d544u;
    // NOP
label_25d548:
    // 0x25d548: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25d548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25d54c:
    // 0x25d54c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x25d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_25d550:
    // 0x25d550: 0x10000013  b           . + 4 + (0x13 << 2)
label_25d554:
    if (ctx->pc == 0x25D554u) {
        ctx->pc = 0x25D554u;
            // 0x25d554: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x25D558u;
        goto label_25d558;
    }
    ctx->pc = 0x25D550u;
    {
        const bool branch_taken_0x25d550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D550u;
            // 0x25d554: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d550) {
            ctx->pc = 0x25D5A0u;
            goto label_25d5a0;
        }
    }
    ctx->pc = 0x25D558u;
label_25d558:
    // 0x25d558: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x25d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_25d55c:
    // 0x25d55c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_25d560:
    if (ctx->pc == 0x25D560u) {
        ctx->pc = 0x25D564u;
        goto label_25d564;
    }
    ctx->pc = 0x25D55Cu;
    {
        const bool branch_taken_0x25d55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25d55c) {
            ctx->pc = 0x25D570u;
            goto label_25d570;
        }
    }
    ctx->pc = 0x25D564u;
label_25d564:
    // 0x25d564: 0x0  nop
    ctx->pc = 0x25d564u;
    // NOP
label_25d568:
    // 0x25d568: 0x1000000d  b           . + 4 + (0xD << 2)
label_25d56c:
    if (ctx->pc == 0x25D56Cu) {
        ctx->pc = 0x25D56Cu;
            // 0x25d56c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25D570u;
        goto label_25d570;
    }
    ctx->pc = 0x25D568u;
    {
        const bool branch_taken_0x25d568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D568u;
            // 0x25d56c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d568) {
            ctx->pc = 0x25D5A0u;
            goto label_25d5a0;
        }
    }
    ctx->pc = 0x25D570u;
label_25d570:
    // 0x25d570: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x25d570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_25d574:
    // 0x25d574: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_25d578:
    if (ctx->pc == 0x25D578u) {
        ctx->pc = 0x25D57Cu;
        goto label_25d57c;
    }
    ctx->pc = 0x25D574u;
    {
        const bool branch_taken_0x25d574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25d574) {
            ctx->pc = 0x25D590u;
            goto label_25d590;
        }
    }
    ctx->pc = 0x25D57Cu;
label_25d57c:
    // 0x25d57c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25d580:
    // 0x25d580: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x25d580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25d584:
    // 0x25d584: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x25d584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_25d588:
    // 0x25d588: 0x10000005  b           . + 4 + (0x5 << 2)
label_25d58c:
    if (ctx->pc == 0x25D58Cu) {
        ctx->pc = 0x25D58Cu;
            // 0x25d58c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x25D590u;
        goto label_25d590;
    }
    ctx->pc = 0x25D588u;
    {
        const bool branch_taken_0x25d588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D588u;
            // 0x25d58c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d588) {
            ctx->pc = 0x25D5A0u;
            goto label_25d5a0;
        }
    }
    ctx->pc = 0x25D590u;
label_25d590:
    // 0x25d590: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25d590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_25d594:
    // 0x25d594: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25d594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25d598:
    // 0x25d598: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x25d598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_25d59c:
    // 0x25d59c: 0x2c38021  addu        $s0, $s6, $v1
    ctx->pc = 0x25d59cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_25d5a0:
    // 0x25d5a0: 0x8e443050  lw          $a0, 0x3050($s2)
    ctx->pc = 0x25d5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12368)));
label_25d5a4:
    // 0x25d5a4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_25d5a8:
    if (ctx->pc == 0x25D5A8u) {
        ctx->pc = 0x25D5ACu;
        goto label_25d5ac;
    }
    ctx->pc = 0x25D5A4u;
    {
        const bool branch_taken_0x25d5a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d5a4) {
            ctx->pc = 0x25D5D8u;
            goto label_25d5d8;
        }
    }
    ctx->pc = 0x25D5ACu;
label_25d5ac:
    // 0x25d5ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25d5b0:
    // 0x25d5b0: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x25d5b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25d5b4:
    // 0x25d5b4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_25d5b8:
    if (ctx->pc == 0x25D5B8u) {
        ctx->pc = 0x25D5BCu;
        goto label_25d5bc;
    }
    ctx->pc = 0x25D5B4u;
    {
        const bool branch_taken_0x25d5b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d5b4) {
            ctx->pc = 0x25D5D8u;
            goto label_25d5d8;
        }
    }
    ctx->pc = 0x25D5BCu;
label_25d5bc:
    // 0x25d5bc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x25d5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25d5c0:
    // 0x25d5c0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x25d5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_25d5c4:
    // 0x25d5c4: 0x8e443050  lw          $a0, 0x3050($s2)
    ctx->pc = 0x25d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12368)));
label_25d5c8:
    // 0x25d5c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x25d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25d5cc:
    // 0x25d5cc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_25d5d0:
    // 0x25d5d0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x25d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_25d5d4:
    // 0x25d5d4: 0x0  nop
    ctx->pc = 0x25d5d4u;
    // NOP
label_25d5d8:
    // 0x25d5d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x25d5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_25d5dc:
    // 0x25d5dc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x25d5dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25d5e0:
    // 0x25d5e0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x25d5e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25d5e4:
    // 0x25d5e4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x25d5e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25d5e8:
    // 0x25d5e8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x25d5e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25d5ec:
    // 0x25d5ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x25d5ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25d5f0:
    // 0x25d5f0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25d5f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25d5f4:
    // 0x25d5f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25d5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25d5f8:
    // 0x25d5f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25d5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25d5fc:
    // 0x25d5fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25d5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25d600:
    // 0x25d600: 0x3e00008  jr          $ra
label_25d604:
    if (ctx->pc == 0x25D604u) {
        ctx->pc = 0x25D604u;
            // 0x25d604: 0x27bd0350  addiu       $sp, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = 0x25D608u;
        goto label_25d608;
    }
    ctx->pc = 0x25D600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D600u;
            // 0x25d604: 0x27bd0350  addiu       $sp, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D608u;
label_25d608:
    // 0x25d608: 0x0  nop
    ctx->pc = 0x25d608u;
    // NOP
label_25d60c:
    // 0x25d60c: 0x0  nop
    ctx->pc = 0x25d60cu;
    // NOP
}
