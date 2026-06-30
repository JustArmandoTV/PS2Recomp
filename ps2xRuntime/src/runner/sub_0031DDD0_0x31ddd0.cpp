#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031DDD0
// Address: 0x31ddd0 - 0x31e5b0
void sub_0031DDD0_0x31ddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DDD0_0x31ddd0");
#endif

    switch (ctx->pc) {
        case 0x31ddd0u: goto label_31ddd0;
        case 0x31ddd4u: goto label_31ddd4;
        case 0x31ddd8u: goto label_31ddd8;
        case 0x31dddcu: goto label_31dddc;
        case 0x31dde0u: goto label_31dde0;
        case 0x31dde4u: goto label_31dde4;
        case 0x31dde8u: goto label_31dde8;
        case 0x31ddecu: goto label_31ddec;
        case 0x31ddf0u: goto label_31ddf0;
        case 0x31ddf4u: goto label_31ddf4;
        case 0x31ddf8u: goto label_31ddf8;
        case 0x31ddfcu: goto label_31ddfc;
        case 0x31de00u: goto label_31de00;
        case 0x31de04u: goto label_31de04;
        case 0x31de08u: goto label_31de08;
        case 0x31de0cu: goto label_31de0c;
        case 0x31de10u: goto label_31de10;
        case 0x31de14u: goto label_31de14;
        case 0x31de18u: goto label_31de18;
        case 0x31de1cu: goto label_31de1c;
        case 0x31de20u: goto label_31de20;
        case 0x31de24u: goto label_31de24;
        case 0x31de28u: goto label_31de28;
        case 0x31de2cu: goto label_31de2c;
        case 0x31de30u: goto label_31de30;
        case 0x31de34u: goto label_31de34;
        case 0x31de38u: goto label_31de38;
        case 0x31de3cu: goto label_31de3c;
        case 0x31de40u: goto label_31de40;
        case 0x31de44u: goto label_31de44;
        case 0x31de48u: goto label_31de48;
        case 0x31de4cu: goto label_31de4c;
        case 0x31de50u: goto label_31de50;
        case 0x31de54u: goto label_31de54;
        case 0x31de58u: goto label_31de58;
        case 0x31de5cu: goto label_31de5c;
        case 0x31de60u: goto label_31de60;
        case 0x31de64u: goto label_31de64;
        case 0x31de68u: goto label_31de68;
        case 0x31de6cu: goto label_31de6c;
        case 0x31de70u: goto label_31de70;
        case 0x31de74u: goto label_31de74;
        case 0x31de78u: goto label_31de78;
        case 0x31de7cu: goto label_31de7c;
        case 0x31de80u: goto label_31de80;
        case 0x31de84u: goto label_31de84;
        case 0x31de88u: goto label_31de88;
        case 0x31de8cu: goto label_31de8c;
        case 0x31de90u: goto label_31de90;
        case 0x31de94u: goto label_31de94;
        case 0x31de98u: goto label_31de98;
        case 0x31de9cu: goto label_31de9c;
        case 0x31dea0u: goto label_31dea0;
        case 0x31dea4u: goto label_31dea4;
        case 0x31dea8u: goto label_31dea8;
        case 0x31deacu: goto label_31deac;
        case 0x31deb0u: goto label_31deb0;
        case 0x31deb4u: goto label_31deb4;
        case 0x31deb8u: goto label_31deb8;
        case 0x31debcu: goto label_31debc;
        case 0x31dec0u: goto label_31dec0;
        case 0x31dec4u: goto label_31dec4;
        case 0x31dec8u: goto label_31dec8;
        case 0x31deccu: goto label_31decc;
        case 0x31ded0u: goto label_31ded0;
        case 0x31ded4u: goto label_31ded4;
        case 0x31ded8u: goto label_31ded8;
        case 0x31dedcu: goto label_31dedc;
        case 0x31dee0u: goto label_31dee0;
        case 0x31dee4u: goto label_31dee4;
        case 0x31dee8u: goto label_31dee8;
        case 0x31deecu: goto label_31deec;
        case 0x31def0u: goto label_31def0;
        case 0x31def4u: goto label_31def4;
        case 0x31def8u: goto label_31def8;
        case 0x31defcu: goto label_31defc;
        case 0x31df00u: goto label_31df00;
        case 0x31df04u: goto label_31df04;
        case 0x31df08u: goto label_31df08;
        case 0x31df0cu: goto label_31df0c;
        case 0x31df10u: goto label_31df10;
        case 0x31df14u: goto label_31df14;
        case 0x31df18u: goto label_31df18;
        case 0x31df1cu: goto label_31df1c;
        case 0x31df20u: goto label_31df20;
        case 0x31df24u: goto label_31df24;
        case 0x31df28u: goto label_31df28;
        case 0x31df2cu: goto label_31df2c;
        case 0x31df30u: goto label_31df30;
        case 0x31df34u: goto label_31df34;
        case 0x31df38u: goto label_31df38;
        case 0x31df3cu: goto label_31df3c;
        case 0x31df40u: goto label_31df40;
        case 0x31df44u: goto label_31df44;
        case 0x31df48u: goto label_31df48;
        case 0x31df4cu: goto label_31df4c;
        case 0x31df50u: goto label_31df50;
        case 0x31df54u: goto label_31df54;
        case 0x31df58u: goto label_31df58;
        case 0x31df5cu: goto label_31df5c;
        case 0x31df60u: goto label_31df60;
        case 0x31df64u: goto label_31df64;
        case 0x31df68u: goto label_31df68;
        case 0x31df6cu: goto label_31df6c;
        case 0x31df70u: goto label_31df70;
        case 0x31df74u: goto label_31df74;
        case 0x31df78u: goto label_31df78;
        case 0x31df7cu: goto label_31df7c;
        case 0x31df80u: goto label_31df80;
        case 0x31df84u: goto label_31df84;
        case 0x31df88u: goto label_31df88;
        case 0x31df8cu: goto label_31df8c;
        case 0x31df90u: goto label_31df90;
        case 0x31df94u: goto label_31df94;
        case 0x31df98u: goto label_31df98;
        case 0x31df9cu: goto label_31df9c;
        case 0x31dfa0u: goto label_31dfa0;
        case 0x31dfa4u: goto label_31dfa4;
        case 0x31dfa8u: goto label_31dfa8;
        case 0x31dfacu: goto label_31dfac;
        case 0x31dfb0u: goto label_31dfb0;
        case 0x31dfb4u: goto label_31dfb4;
        case 0x31dfb8u: goto label_31dfb8;
        case 0x31dfbcu: goto label_31dfbc;
        case 0x31dfc0u: goto label_31dfc0;
        case 0x31dfc4u: goto label_31dfc4;
        case 0x31dfc8u: goto label_31dfc8;
        case 0x31dfccu: goto label_31dfcc;
        case 0x31dfd0u: goto label_31dfd0;
        case 0x31dfd4u: goto label_31dfd4;
        case 0x31dfd8u: goto label_31dfd8;
        case 0x31dfdcu: goto label_31dfdc;
        case 0x31dfe0u: goto label_31dfe0;
        case 0x31dfe4u: goto label_31dfe4;
        case 0x31dfe8u: goto label_31dfe8;
        case 0x31dfecu: goto label_31dfec;
        case 0x31dff0u: goto label_31dff0;
        case 0x31dff4u: goto label_31dff4;
        case 0x31dff8u: goto label_31dff8;
        case 0x31dffcu: goto label_31dffc;
        case 0x31e000u: goto label_31e000;
        case 0x31e004u: goto label_31e004;
        case 0x31e008u: goto label_31e008;
        case 0x31e00cu: goto label_31e00c;
        case 0x31e010u: goto label_31e010;
        case 0x31e014u: goto label_31e014;
        case 0x31e018u: goto label_31e018;
        case 0x31e01cu: goto label_31e01c;
        case 0x31e020u: goto label_31e020;
        case 0x31e024u: goto label_31e024;
        case 0x31e028u: goto label_31e028;
        case 0x31e02cu: goto label_31e02c;
        case 0x31e030u: goto label_31e030;
        case 0x31e034u: goto label_31e034;
        case 0x31e038u: goto label_31e038;
        case 0x31e03cu: goto label_31e03c;
        case 0x31e040u: goto label_31e040;
        case 0x31e044u: goto label_31e044;
        case 0x31e048u: goto label_31e048;
        case 0x31e04cu: goto label_31e04c;
        case 0x31e050u: goto label_31e050;
        case 0x31e054u: goto label_31e054;
        case 0x31e058u: goto label_31e058;
        case 0x31e05cu: goto label_31e05c;
        case 0x31e060u: goto label_31e060;
        case 0x31e064u: goto label_31e064;
        case 0x31e068u: goto label_31e068;
        case 0x31e06cu: goto label_31e06c;
        case 0x31e070u: goto label_31e070;
        case 0x31e074u: goto label_31e074;
        case 0x31e078u: goto label_31e078;
        case 0x31e07cu: goto label_31e07c;
        case 0x31e080u: goto label_31e080;
        case 0x31e084u: goto label_31e084;
        case 0x31e088u: goto label_31e088;
        case 0x31e08cu: goto label_31e08c;
        case 0x31e090u: goto label_31e090;
        case 0x31e094u: goto label_31e094;
        case 0x31e098u: goto label_31e098;
        case 0x31e09cu: goto label_31e09c;
        case 0x31e0a0u: goto label_31e0a0;
        case 0x31e0a4u: goto label_31e0a4;
        case 0x31e0a8u: goto label_31e0a8;
        case 0x31e0acu: goto label_31e0ac;
        case 0x31e0b0u: goto label_31e0b0;
        case 0x31e0b4u: goto label_31e0b4;
        case 0x31e0b8u: goto label_31e0b8;
        case 0x31e0bcu: goto label_31e0bc;
        case 0x31e0c0u: goto label_31e0c0;
        case 0x31e0c4u: goto label_31e0c4;
        case 0x31e0c8u: goto label_31e0c8;
        case 0x31e0ccu: goto label_31e0cc;
        case 0x31e0d0u: goto label_31e0d0;
        case 0x31e0d4u: goto label_31e0d4;
        case 0x31e0d8u: goto label_31e0d8;
        case 0x31e0dcu: goto label_31e0dc;
        case 0x31e0e0u: goto label_31e0e0;
        case 0x31e0e4u: goto label_31e0e4;
        case 0x31e0e8u: goto label_31e0e8;
        case 0x31e0ecu: goto label_31e0ec;
        case 0x31e0f0u: goto label_31e0f0;
        case 0x31e0f4u: goto label_31e0f4;
        case 0x31e0f8u: goto label_31e0f8;
        case 0x31e0fcu: goto label_31e0fc;
        case 0x31e100u: goto label_31e100;
        case 0x31e104u: goto label_31e104;
        case 0x31e108u: goto label_31e108;
        case 0x31e10cu: goto label_31e10c;
        case 0x31e110u: goto label_31e110;
        case 0x31e114u: goto label_31e114;
        case 0x31e118u: goto label_31e118;
        case 0x31e11cu: goto label_31e11c;
        case 0x31e120u: goto label_31e120;
        case 0x31e124u: goto label_31e124;
        case 0x31e128u: goto label_31e128;
        case 0x31e12cu: goto label_31e12c;
        case 0x31e130u: goto label_31e130;
        case 0x31e134u: goto label_31e134;
        case 0x31e138u: goto label_31e138;
        case 0x31e13cu: goto label_31e13c;
        case 0x31e140u: goto label_31e140;
        case 0x31e144u: goto label_31e144;
        case 0x31e148u: goto label_31e148;
        case 0x31e14cu: goto label_31e14c;
        case 0x31e150u: goto label_31e150;
        case 0x31e154u: goto label_31e154;
        case 0x31e158u: goto label_31e158;
        case 0x31e15cu: goto label_31e15c;
        case 0x31e160u: goto label_31e160;
        case 0x31e164u: goto label_31e164;
        case 0x31e168u: goto label_31e168;
        case 0x31e16cu: goto label_31e16c;
        case 0x31e170u: goto label_31e170;
        case 0x31e174u: goto label_31e174;
        case 0x31e178u: goto label_31e178;
        case 0x31e17cu: goto label_31e17c;
        case 0x31e180u: goto label_31e180;
        case 0x31e184u: goto label_31e184;
        case 0x31e188u: goto label_31e188;
        case 0x31e18cu: goto label_31e18c;
        case 0x31e190u: goto label_31e190;
        case 0x31e194u: goto label_31e194;
        case 0x31e198u: goto label_31e198;
        case 0x31e19cu: goto label_31e19c;
        case 0x31e1a0u: goto label_31e1a0;
        case 0x31e1a4u: goto label_31e1a4;
        case 0x31e1a8u: goto label_31e1a8;
        case 0x31e1acu: goto label_31e1ac;
        case 0x31e1b0u: goto label_31e1b0;
        case 0x31e1b4u: goto label_31e1b4;
        case 0x31e1b8u: goto label_31e1b8;
        case 0x31e1bcu: goto label_31e1bc;
        case 0x31e1c0u: goto label_31e1c0;
        case 0x31e1c4u: goto label_31e1c4;
        case 0x31e1c8u: goto label_31e1c8;
        case 0x31e1ccu: goto label_31e1cc;
        case 0x31e1d0u: goto label_31e1d0;
        case 0x31e1d4u: goto label_31e1d4;
        case 0x31e1d8u: goto label_31e1d8;
        case 0x31e1dcu: goto label_31e1dc;
        case 0x31e1e0u: goto label_31e1e0;
        case 0x31e1e4u: goto label_31e1e4;
        case 0x31e1e8u: goto label_31e1e8;
        case 0x31e1ecu: goto label_31e1ec;
        case 0x31e1f0u: goto label_31e1f0;
        case 0x31e1f4u: goto label_31e1f4;
        case 0x31e1f8u: goto label_31e1f8;
        case 0x31e1fcu: goto label_31e1fc;
        case 0x31e200u: goto label_31e200;
        case 0x31e204u: goto label_31e204;
        case 0x31e208u: goto label_31e208;
        case 0x31e20cu: goto label_31e20c;
        case 0x31e210u: goto label_31e210;
        case 0x31e214u: goto label_31e214;
        case 0x31e218u: goto label_31e218;
        case 0x31e21cu: goto label_31e21c;
        case 0x31e220u: goto label_31e220;
        case 0x31e224u: goto label_31e224;
        case 0x31e228u: goto label_31e228;
        case 0x31e22cu: goto label_31e22c;
        case 0x31e230u: goto label_31e230;
        case 0x31e234u: goto label_31e234;
        case 0x31e238u: goto label_31e238;
        case 0x31e23cu: goto label_31e23c;
        case 0x31e240u: goto label_31e240;
        case 0x31e244u: goto label_31e244;
        case 0x31e248u: goto label_31e248;
        case 0x31e24cu: goto label_31e24c;
        case 0x31e250u: goto label_31e250;
        case 0x31e254u: goto label_31e254;
        case 0x31e258u: goto label_31e258;
        case 0x31e25cu: goto label_31e25c;
        case 0x31e260u: goto label_31e260;
        case 0x31e264u: goto label_31e264;
        case 0x31e268u: goto label_31e268;
        case 0x31e26cu: goto label_31e26c;
        case 0x31e270u: goto label_31e270;
        case 0x31e274u: goto label_31e274;
        case 0x31e278u: goto label_31e278;
        case 0x31e27cu: goto label_31e27c;
        case 0x31e280u: goto label_31e280;
        case 0x31e284u: goto label_31e284;
        case 0x31e288u: goto label_31e288;
        case 0x31e28cu: goto label_31e28c;
        case 0x31e290u: goto label_31e290;
        case 0x31e294u: goto label_31e294;
        case 0x31e298u: goto label_31e298;
        case 0x31e29cu: goto label_31e29c;
        case 0x31e2a0u: goto label_31e2a0;
        case 0x31e2a4u: goto label_31e2a4;
        case 0x31e2a8u: goto label_31e2a8;
        case 0x31e2acu: goto label_31e2ac;
        case 0x31e2b0u: goto label_31e2b0;
        case 0x31e2b4u: goto label_31e2b4;
        case 0x31e2b8u: goto label_31e2b8;
        case 0x31e2bcu: goto label_31e2bc;
        case 0x31e2c0u: goto label_31e2c0;
        case 0x31e2c4u: goto label_31e2c4;
        case 0x31e2c8u: goto label_31e2c8;
        case 0x31e2ccu: goto label_31e2cc;
        case 0x31e2d0u: goto label_31e2d0;
        case 0x31e2d4u: goto label_31e2d4;
        case 0x31e2d8u: goto label_31e2d8;
        case 0x31e2dcu: goto label_31e2dc;
        case 0x31e2e0u: goto label_31e2e0;
        case 0x31e2e4u: goto label_31e2e4;
        case 0x31e2e8u: goto label_31e2e8;
        case 0x31e2ecu: goto label_31e2ec;
        case 0x31e2f0u: goto label_31e2f0;
        case 0x31e2f4u: goto label_31e2f4;
        case 0x31e2f8u: goto label_31e2f8;
        case 0x31e2fcu: goto label_31e2fc;
        case 0x31e300u: goto label_31e300;
        case 0x31e304u: goto label_31e304;
        case 0x31e308u: goto label_31e308;
        case 0x31e30cu: goto label_31e30c;
        case 0x31e310u: goto label_31e310;
        case 0x31e314u: goto label_31e314;
        case 0x31e318u: goto label_31e318;
        case 0x31e31cu: goto label_31e31c;
        case 0x31e320u: goto label_31e320;
        case 0x31e324u: goto label_31e324;
        case 0x31e328u: goto label_31e328;
        case 0x31e32cu: goto label_31e32c;
        case 0x31e330u: goto label_31e330;
        case 0x31e334u: goto label_31e334;
        case 0x31e338u: goto label_31e338;
        case 0x31e33cu: goto label_31e33c;
        case 0x31e340u: goto label_31e340;
        case 0x31e344u: goto label_31e344;
        case 0x31e348u: goto label_31e348;
        case 0x31e34cu: goto label_31e34c;
        case 0x31e350u: goto label_31e350;
        case 0x31e354u: goto label_31e354;
        case 0x31e358u: goto label_31e358;
        case 0x31e35cu: goto label_31e35c;
        case 0x31e360u: goto label_31e360;
        case 0x31e364u: goto label_31e364;
        case 0x31e368u: goto label_31e368;
        case 0x31e36cu: goto label_31e36c;
        case 0x31e370u: goto label_31e370;
        case 0x31e374u: goto label_31e374;
        case 0x31e378u: goto label_31e378;
        case 0x31e37cu: goto label_31e37c;
        case 0x31e380u: goto label_31e380;
        case 0x31e384u: goto label_31e384;
        case 0x31e388u: goto label_31e388;
        case 0x31e38cu: goto label_31e38c;
        case 0x31e390u: goto label_31e390;
        case 0x31e394u: goto label_31e394;
        case 0x31e398u: goto label_31e398;
        case 0x31e39cu: goto label_31e39c;
        case 0x31e3a0u: goto label_31e3a0;
        case 0x31e3a4u: goto label_31e3a4;
        case 0x31e3a8u: goto label_31e3a8;
        case 0x31e3acu: goto label_31e3ac;
        case 0x31e3b0u: goto label_31e3b0;
        case 0x31e3b4u: goto label_31e3b4;
        case 0x31e3b8u: goto label_31e3b8;
        case 0x31e3bcu: goto label_31e3bc;
        case 0x31e3c0u: goto label_31e3c0;
        case 0x31e3c4u: goto label_31e3c4;
        case 0x31e3c8u: goto label_31e3c8;
        case 0x31e3ccu: goto label_31e3cc;
        case 0x31e3d0u: goto label_31e3d0;
        case 0x31e3d4u: goto label_31e3d4;
        case 0x31e3d8u: goto label_31e3d8;
        case 0x31e3dcu: goto label_31e3dc;
        case 0x31e3e0u: goto label_31e3e0;
        case 0x31e3e4u: goto label_31e3e4;
        case 0x31e3e8u: goto label_31e3e8;
        case 0x31e3ecu: goto label_31e3ec;
        case 0x31e3f0u: goto label_31e3f0;
        case 0x31e3f4u: goto label_31e3f4;
        case 0x31e3f8u: goto label_31e3f8;
        case 0x31e3fcu: goto label_31e3fc;
        case 0x31e400u: goto label_31e400;
        case 0x31e404u: goto label_31e404;
        case 0x31e408u: goto label_31e408;
        case 0x31e40cu: goto label_31e40c;
        case 0x31e410u: goto label_31e410;
        case 0x31e414u: goto label_31e414;
        case 0x31e418u: goto label_31e418;
        case 0x31e41cu: goto label_31e41c;
        case 0x31e420u: goto label_31e420;
        case 0x31e424u: goto label_31e424;
        case 0x31e428u: goto label_31e428;
        case 0x31e42cu: goto label_31e42c;
        case 0x31e430u: goto label_31e430;
        case 0x31e434u: goto label_31e434;
        case 0x31e438u: goto label_31e438;
        case 0x31e43cu: goto label_31e43c;
        case 0x31e440u: goto label_31e440;
        case 0x31e444u: goto label_31e444;
        case 0x31e448u: goto label_31e448;
        case 0x31e44cu: goto label_31e44c;
        case 0x31e450u: goto label_31e450;
        case 0x31e454u: goto label_31e454;
        case 0x31e458u: goto label_31e458;
        case 0x31e45cu: goto label_31e45c;
        case 0x31e460u: goto label_31e460;
        case 0x31e464u: goto label_31e464;
        case 0x31e468u: goto label_31e468;
        case 0x31e46cu: goto label_31e46c;
        case 0x31e470u: goto label_31e470;
        case 0x31e474u: goto label_31e474;
        case 0x31e478u: goto label_31e478;
        case 0x31e47cu: goto label_31e47c;
        case 0x31e480u: goto label_31e480;
        case 0x31e484u: goto label_31e484;
        case 0x31e488u: goto label_31e488;
        case 0x31e48cu: goto label_31e48c;
        case 0x31e490u: goto label_31e490;
        case 0x31e494u: goto label_31e494;
        case 0x31e498u: goto label_31e498;
        case 0x31e49cu: goto label_31e49c;
        case 0x31e4a0u: goto label_31e4a0;
        case 0x31e4a4u: goto label_31e4a4;
        case 0x31e4a8u: goto label_31e4a8;
        case 0x31e4acu: goto label_31e4ac;
        case 0x31e4b0u: goto label_31e4b0;
        case 0x31e4b4u: goto label_31e4b4;
        case 0x31e4b8u: goto label_31e4b8;
        case 0x31e4bcu: goto label_31e4bc;
        case 0x31e4c0u: goto label_31e4c0;
        case 0x31e4c4u: goto label_31e4c4;
        case 0x31e4c8u: goto label_31e4c8;
        case 0x31e4ccu: goto label_31e4cc;
        case 0x31e4d0u: goto label_31e4d0;
        case 0x31e4d4u: goto label_31e4d4;
        case 0x31e4d8u: goto label_31e4d8;
        case 0x31e4dcu: goto label_31e4dc;
        case 0x31e4e0u: goto label_31e4e0;
        case 0x31e4e4u: goto label_31e4e4;
        case 0x31e4e8u: goto label_31e4e8;
        case 0x31e4ecu: goto label_31e4ec;
        case 0x31e4f0u: goto label_31e4f0;
        case 0x31e4f4u: goto label_31e4f4;
        case 0x31e4f8u: goto label_31e4f8;
        case 0x31e4fcu: goto label_31e4fc;
        case 0x31e500u: goto label_31e500;
        case 0x31e504u: goto label_31e504;
        case 0x31e508u: goto label_31e508;
        case 0x31e50cu: goto label_31e50c;
        case 0x31e510u: goto label_31e510;
        case 0x31e514u: goto label_31e514;
        case 0x31e518u: goto label_31e518;
        case 0x31e51cu: goto label_31e51c;
        case 0x31e520u: goto label_31e520;
        case 0x31e524u: goto label_31e524;
        case 0x31e528u: goto label_31e528;
        case 0x31e52cu: goto label_31e52c;
        case 0x31e530u: goto label_31e530;
        case 0x31e534u: goto label_31e534;
        case 0x31e538u: goto label_31e538;
        case 0x31e53cu: goto label_31e53c;
        case 0x31e540u: goto label_31e540;
        case 0x31e544u: goto label_31e544;
        case 0x31e548u: goto label_31e548;
        case 0x31e54cu: goto label_31e54c;
        case 0x31e550u: goto label_31e550;
        case 0x31e554u: goto label_31e554;
        case 0x31e558u: goto label_31e558;
        case 0x31e55cu: goto label_31e55c;
        case 0x31e560u: goto label_31e560;
        case 0x31e564u: goto label_31e564;
        case 0x31e568u: goto label_31e568;
        case 0x31e56cu: goto label_31e56c;
        case 0x31e570u: goto label_31e570;
        case 0x31e574u: goto label_31e574;
        case 0x31e578u: goto label_31e578;
        case 0x31e57cu: goto label_31e57c;
        case 0x31e580u: goto label_31e580;
        case 0x31e584u: goto label_31e584;
        case 0x31e588u: goto label_31e588;
        case 0x31e58cu: goto label_31e58c;
        case 0x31e590u: goto label_31e590;
        case 0x31e594u: goto label_31e594;
        case 0x31e598u: goto label_31e598;
        case 0x31e59cu: goto label_31e59c;
        case 0x31e5a0u: goto label_31e5a0;
        case 0x31e5a4u: goto label_31e5a4;
        case 0x31e5a8u: goto label_31e5a8;
        case 0x31e5acu: goto label_31e5ac;
        default: break;
    }

    ctx->pc = 0x31ddd0u;

label_31ddd0:
    // 0x31ddd0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x31ddd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_31ddd4:
    // 0x31ddd4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x31ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_31ddd8:
    // 0x31ddd8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x31ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_31dddc:
    // 0x31dddc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x31dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_31dde0:
    // 0x31dde0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x31dde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_31dde4:
    // 0x31dde4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x31dde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_31dde8:
    // 0x31dde8: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x31dde8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_31ddec:
    // 0x31ddec: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x31ddecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_31ddf0:
    // 0x31ddf0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x31ddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_31ddf4:
    // 0x31ddf4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31ddf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_31ddf8:
    // 0x31ddf8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x31ddf8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31ddfc:
    // 0x31ddfc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31ddfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_31de00:
    // 0x31de00: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x31de00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31de04:
    // 0x31de04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31de04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_31de08:
    // 0x31de08: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x31de08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_31de0c:
    // 0x31de0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31de0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_31de10:
    // 0x31de10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31de10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31de14:
    // 0x31de14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31de14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_31de18:
    // 0x31de18: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x31de18u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_31de1c:
    // 0x31de1c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x31de1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_31de20:
    // 0x31de20: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x31de20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_31de24:
    // 0x31de24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31de24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31de28:
    // 0x31de28: 0x9471fa10  lhu         $s1, -0x5F0($v1)
    ctx->pc = 0x31de28u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294965776)));
label_31de2c:
    // 0x31de2c: 0x9450fa12  lhu         $s0, -0x5EE($v0)
    ctx->pc = 0x31de2cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965778)));
label_31de30:
    // 0x31de30: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x31de30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_31de34:
    // 0x31de34: 0xc0506ac  jal         func_141AB0
label_31de38:
    if (ctx->pc == 0x31DE38u) {
        ctx->pc = 0x31DE38u;
            // 0x31de38: 0xafa800bc  sw          $t0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 8));
        ctx->pc = 0x31DE3Cu;
        goto label_31de3c;
    }
    ctx->pc = 0x31DE34u;
    SET_GPR_U32(ctx, 31, 0x31DE3Cu);
    ctx->pc = 0x31DE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DE34u;
            // 0x31de38: 0xafa800bc  sw          $t0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DE3Cu; }
        if (ctx->pc != 0x31DE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DE3Cu; }
        if (ctx->pc != 0x31DE3Cu) { return; }
    }
    ctx->pc = 0x31DE3Cu;
label_31de3c:
    // 0x31de3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31de40:
    // 0x31de40: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x31de40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_31de44:
    // 0x31de44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31de44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31de48:
    // 0x31de48: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x31de48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_31de4c:
    // 0x31de4c: 0x320f809  jalr        $t9
label_31de50:
    if (ctx->pc == 0x31DE50u) {
        ctx->pc = 0x31DE50u;
            // 0x31de50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x31DE54u;
        goto label_31de54;
    }
    ctx->pc = 0x31DE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31DE54u);
        ctx->pc = 0x31DE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DE4Cu;
            // 0x31de50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31DE54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31DE54u; }
            if (ctx->pc != 0x31DE54u) { return; }
        }
        }
    }
    ctx->pc = 0x31DE54u;
label_31de54:
    // 0x31de54: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x31de54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_31de58:
    // 0x31de58: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31de58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_31de5c:
    // 0x31de5c: 0x2463e3d0  addiu       $v1, $v1, -0x1C30
    ctx->pc = 0x31de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960080));
label_31de60:
    // 0x31de60: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x31de60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_31de64:
    // 0x31de64: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x31de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31de68:
    // 0x31de68: 0x2beb821  addu        $s7, $s5, $fp
    ctx->pc = 0x31de68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
label_31de6c:
    // 0x31de6c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x31de6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31de70:
    // 0x31de70: 0x24a5e400  addiu       $a1, $a1, -0x1C00
    ctx->pc = 0x31de70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960128));
label_31de74:
    // 0x31de74: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x31de74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_31de78:
    // 0x31de78: 0x0  nop
    ctx->pc = 0x31de78u;
    // NOP
label_31de7c:
    // 0x31de7c: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x31de7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_31de80:
    // 0x31de80: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x31de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_31de84:
    // 0x31de84: 0x282b021  addu        $s6, $s4, $v0
    ctx->pc = 0x31de84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_31de88:
    // 0x31de88: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x31de88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_31de8c:
    // 0x31de8c: 0x46012082  mul.s       $f2, $f4, $f1
    ctx->pc = 0x31de8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_31de90:
    // 0x31de90: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x31de90u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31de94:
    // 0x31de94: 0x0  nop
    ctx->pc = 0x31de94u;
    // NOP
label_31de98:
    // 0x31de98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31de98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31de9c:
    // 0x31de9c: 0x46032042  mul.s       $f1, $f4, $f3
    ctx->pc = 0x31de9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_31dea0:
    // 0x31dea0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x31dea0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_31dea4:
    // 0x31dea4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x31dea4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31dea8:
    // 0x31dea8: 0x0  nop
    ctx->pc = 0x31dea8u;
    // NOP
label_31deac:
    // 0x31deac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31deacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31deb0:
    // 0x31deb0: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x31deb0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_31deb4:
    // 0x31deb4: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x31deb4u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31deb8:
    // 0x31deb8: 0x0  nop
    ctx->pc = 0x31deb8u;
    // NOP
label_31debc:
    // 0x31debc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31debcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31dec0:
    // 0x31dec0: 0x46010381  sub.s       $f14, $f0, $f1
    ctx->pc = 0x31dec0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_31dec4:
    // 0x31dec4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x31dec4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31dec8:
    // 0x31dec8: 0x0  nop
    ctx->pc = 0x31dec8u;
    // NOP
label_31decc:
    // 0x31decc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31deccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31ded0:
    // 0x31ded0: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_31ded4:
    if (ctx->pc == 0x31DED4u) {
        ctx->pc = 0x31DED4u;
            // 0x31ded4: 0x460203c1  sub.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x31DED8u;
        goto label_31ded8;
    }
    ctx->pc = 0x31DED0u;
    {
        const bool branch_taken_0x31ded0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x31DED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DED0u;
            // 0x31ded4: 0x460203c1  sub.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ded0) {
            ctx->pc = 0x31DEE4u;
            goto label_31dee4;
        }
    }
    ctx->pc = 0x31DED8u;
label_31ded8:
    // 0x31ded8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31ded8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31dedc:
    // 0x31dedc: 0x10000008  b           . + 4 + (0x8 << 2)
label_31dee0:
    if (ctx->pc == 0x31DEE0u) {
        ctx->pc = 0x31DEE0u;
            // 0x31dee0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31DEE4u;
        goto label_31dee4;
    }
    ctx->pc = 0x31DEDCu;
    {
        const bool branch_taken_0x31dedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DEDCu;
            // 0x31dee0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dedc) {
            ctx->pc = 0x31DF00u;
            goto label_31df00;
        }
    }
    ctx->pc = 0x31DEE4u;
label_31dee4:
    // 0x31dee4: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x31dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_31dee8:
    // 0x31dee8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31dee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_31deec:
    // 0x31deec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31deecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31def0:
    // 0x31def0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31def0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31def4:
    // 0x31def4: 0x0  nop
    ctx->pc = 0x31def4u;
    // NOP
label_31def8:
    // 0x31def8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x31def8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_31defc:
    // 0x31defc: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x31defcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_31df00:
    // 0x31df00: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_31df04:
    if (ctx->pc == 0x31DF04u) {
        ctx->pc = 0x31DF04u;
            // 0x31df04: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x31DF08u;
        goto label_31df08;
    }
    ctx->pc = 0x31DF00u;
    {
        const bool branch_taken_0x31df00 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31df00) {
            ctx->pc = 0x31DF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DF00u;
            // 0x31df04: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DF14u;
            goto label_31df14;
        }
    }
    ctx->pc = 0x31DF08u;
label_31df08:
    // 0x31df08: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31df08u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31df0c:
    // 0x31df0c: 0x10000007  b           . + 4 + (0x7 << 2)
label_31df10:
    if (ctx->pc == 0x31DF10u) {
        ctx->pc = 0x31DF10u;
            // 0x31df10: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31DF14u;
        goto label_31df14;
    }
    ctx->pc = 0x31DF0Cu;
    {
        const bool branch_taken_0x31df0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DF0Cu;
            // 0x31df10: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df0c) {
            ctx->pc = 0x31DF2Cu;
            goto label_31df2c;
        }
    }
    ctx->pc = 0x31DF14u;
label_31df14:
    // 0x31df14: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x31df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_31df18:
    // 0x31df18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31df18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31df1c:
    // 0x31df1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31df1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31df20:
    // 0x31df20: 0x0  nop
    ctx->pc = 0x31df20u;
    // NOP
label_31df24:
    // 0x31df24: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x31df24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_31df28:
    // 0x31df28: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x31df28u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_31df2c:
    // 0x31df2c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_31df30:
    // 0x31df30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31df30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31df34:
    // 0x31df34: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x31df34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_31df38:
    // 0x31df38: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31df38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31df3c:
    // 0x31df3c: 0xc0bc284  jal         func_2F0A10
label_31df40:
    if (ctx->pc == 0x31DF40u) {
        ctx->pc = 0x31DF40u;
            // 0x31df40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31DF44u;
        goto label_31df44;
    }
    ctx->pc = 0x31DF3Cu;
    SET_GPR_U32(ctx, 31, 0x31DF44u);
    ctx->pc = 0x31DF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DF3Cu;
            // 0x31df40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DF44u; }
        if (ctx->pc != 0x31DF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DF44u; }
        if (ctx->pc != 0x31DF44u) { return; }
    }
    ctx->pc = 0x31DF44u;
label_31df44:
    // 0x31df44: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x31df44u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31df48:
    // 0x31df48: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x31df48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_31df4c:
    // 0x31df4c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x31df4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_31df50:
    // 0x31df50: 0x2652e3d0  addiu       $s2, $s2, -0x1C30
    ctx->pc = 0x31df50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960080));
label_31df54:
    // 0x31df54: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x31df54u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31df58:
    // 0x31df58: 0x0  nop
    ctx->pc = 0x31df58u;
    // NOP
label_31df5c:
    // 0x31df5c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x31df5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_31df60:
    // 0x31df60: 0xc6540008  lwc1        $f20, 0x8($s2)
    ctx->pc = 0x31df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31df64:
    // 0x31df64: 0xc655000c  lwc1        $f21, 0xC($s2)
    ctx->pc = 0x31df64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_31df68:
    // 0x31df68: 0x46146580  add.s       $f22, $f12, $f20
    ctx->pc = 0x31df68u;
    ctx->f[22] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
label_31df6c:
    // 0x31df6c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_31df70:
    if (ctx->pc == 0x31DF70u) {
        ctx->pc = 0x31DF70u;
            // 0x31df70: 0x46156dc0  add.s       $f23, $f13, $f21 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
        ctx->pc = 0x31DF74u;
        goto label_31df74;
    }
    ctx->pc = 0x31DF6Cu;
    {
        const bool branch_taken_0x31df6c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x31DF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DF6Cu;
            // 0x31df70: 0x46156dc0  add.s       $f23, $f13, $f21 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df6c) {
            ctx->pc = 0x31DF80u;
            goto label_31df80;
        }
    }
    ctx->pc = 0x31DF74u;
label_31df74:
    // 0x31df74: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31df74u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31df78:
    // 0x31df78: 0x10000008  b           . + 4 + (0x8 << 2)
label_31df7c:
    if (ctx->pc == 0x31DF7Cu) {
        ctx->pc = 0x31DF7Cu;
            // 0x31df7c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31DF80u;
        goto label_31df80;
    }
    ctx->pc = 0x31DF78u;
    {
        const bool branch_taken_0x31df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DF78u;
            // 0x31df7c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df78) {
            ctx->pc = 0x31DF9Cu;
            goto label_31df9c;
        }
    }
    ctx->pc = 0x31DF80u;
label_31df80:
    // 0x31df80: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x31df80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_31df84:
    // 0x31df84: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31df84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_31df88:
    // 0x31df88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31df88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31df8c:
    // 0x31df8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31df8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31df90:
    // 0x31df90: 0x0  nop
    ctx->pc = 0x31df90u;
    // NOP
label_31df94:
    // 0x31df94: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x31df94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_31df98:
    // 0x31df98: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x31df98u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_31df9c:
    // 0x31df9c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_31dfa0:
    if (ctx->pc == 0x31DFA0u) {
        ctx->pc = 0x31DFA0u;
            // 0x31dfa0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x31DFA4u;
        goto label_31dfa4;
    }
    ctx->pc = 0x31DF9Cu;
    {
        const bool branch_taken_0x31df9c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31df9c) {
            ctx->pc = 0x31DFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DF9Cu;
            // 0x31dfa0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DFB0u;
            goto label_31dfb0;
        }
    }
    ctx->pc = 0x31DFA4u;
label_31dfa4:
    // 0x31dfa4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31dfa4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31dfa8:
    // 0x31dfa8: 0x10000007  b           . + 4 + (0x7 << 2)
label_31dfac:
    if (ctx->pc == 0x31DFACu) {
        ctx->pc = 0x31DFACu;
            // 0x31dfac: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31DFB0u;
        goto label_31dfb0;
    }
    ctx->pc = 0x31DFA8u;
    {
        const bool branch_taken_0x31dfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DFA8u;
            // 0x31dfac: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dfa8) {
            ctx->pc = 0x31DFC8u;
            goto label_31dfc8;
        }
    }
    ctx->pc = 0x31DFB0u;
label_31dfb0:
    // 0x31dfb0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x31dfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_31dfb4:
    // 0x31dfb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31dfb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31dfb8:
    // 0x31dfb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31dfb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31dfbc:
    // 0x31dfbc: 0x0  nop
    ctx->pc = 0x31dfbcu;
    // NOP
label_31dfc0:
    // 0x31dfc0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x31dfc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_31dfc4:
    // 0x31dfc4: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x31dfc4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_31dfc8:
    // 0x31dfc8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_31dfcc:
    // 0x31dfcc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31dfd0:
    // 0x31dfd0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x31dfd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_31dfd4:
    // 0x31dfd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31dfd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31dfd8:
    // 0x31dfd8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x31dfd8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_31dfdc:
    // 0x31dfdc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31dfdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31dfe0:
    // 0x31dfe0: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x31dfe0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_31dfe4:
    // 0x31dfe4: 0xc0bc284  jal         func_2F0A10
label_31dfe8:
    if (ctx->pc == 0x31DFE8u) {
        ctx->pc = 0x31DFE8u;
            // 0x31dfe8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31DFECu;
        goto label_31dfec;
    }
    ctx->pc = 0x31DFE4u;
    SET_GPR_U32(ctx, 31, 0x31DFECu);
    ctx->pc = 0x31DFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DFE4u;
            // 0x31dfe8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DFECu; }
        if (ctx->pc != 0x31DFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DFECu; }
        if (ctx->pc != 0x31DFECu) { return; }
    }
    ctx->pc = 0x31DFECu;
label_31dfec:
    // 0x31dfec: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x31dfecu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31dff0:
    // 0x31dff0: 0x0  nop
    ctx->pc = 0x31dff0u;
    // NOP
label_31dff4:
    // 0x31dff4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x31dff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_31dff8:
    // 0x31dff8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x31dff8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31dffc:
    // 0x31dffc: 0x0  nop
    ctx->pc = 0x31dffcu;
    // NOP
label_31e000:
    // 0x31e000: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x31e000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_31e004:
    // 0x31e004: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_31e008:
    if (ctx->pc == 0x31E008u) {
        ctx->pc = 0x31E008u;
            // 0x31e008: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x31E00Cu;
        goto label_31e00c;
    }
    ctx->pc = 0x31E004u;
    {
        const bool branch_taken_0x31e004 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x31E008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E004u;
            // 0x31e008: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e004) {
            ctx->pc = 0x31E018u;
            goto label_31e018;
        }
    }
    ctx->pc = 0x31E00Cu;
label_31e00c:
    // 0x31e00c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31e00cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e010:
    // 0x31e010: 0x10000008  b           . + 4 + (0x8 << 2)
label_31e014:
    if (ctx->pc == 0x31E014u) {
        ctx->pc = 0x31E014u;
            // 0x31e014: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E018u;
        goto label_31e018;
    }
    ctx->pc = 0x31E010u;
    {
        const bool branch_taken_0x31e010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E010u;
            // 0x31e014: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e010) {
            ctx->pc = 0x31E034u;
            goto label_31e034;
        }
    }
    ctx->pc = 0x31E018u;
label_31e018:
    // 0x31e018: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x31e018u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_31e01c:
    // 0x31e01c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31e01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_31e020:
    // 0x31e020: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e024:
    // 0x31e024: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e028:
    // 0x31e028: 0x0  nop
    ctx->pc = 0x31e028u;
    // NOP
label_31e02c:
    // 0x31e02c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x31e02cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_31e030:
    // 0x31e030: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x31e030u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_31e034:
    // 0x31e034: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_31e038:
    if (ctx->pc == 0x31E038u) {
        ctx->pc = 0x31E038u;
            // 0x31e038: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x31E03Cu;
        goto label_31e03c;
    }
    ctx->pc = 0x31E034u;
    {
        const bool branch_taken_0x31e034 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31e034) {
            ctx->pc = 0x31E038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E034u;
            // 0x31e038: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E048u;
            goto label_31e048;
        }
    }
    ctx->pc = 0x31E03Cu;
label_31e03c:
    // 0x31e03c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31e03cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e040:
    // 0x31e040: 0x10000007  b           . + 4 + (0x7 << 2)
label_31e044:
    if (ctx->pc == 0x31E044u) {
        ctx->pc = 0x31E044u;
            // 0x31e044: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E048u;
        goto label_31e048;
    }
    ctx->pc = 0x31E040u;
    {
        const bool branch_taken_0x31e040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E040u;
            // 0x31e044: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e040) {
            ctx->pc = 0x31E060u;
            goto label_31e060;
        }
    }
    ctx->pc = 0x31E048u;
label_31e048:
    // 0x31e048: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x31e048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_31e04c:
    // 0x31e04c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e050:
    // 0x31e050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e054:
    // 0x31e054: 0x0  nop
    ctx->pc = 0x31e054u;
    // NOP
label_31e058:
    // 0x31e058: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x31e058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_31e05c:
    // 0x31e05c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x31e05cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_31e060:
    // 0x31e060: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31e060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_31e064:
    // 0x31e064: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31e064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e068:
    // 0x31e068: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x31e068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_31e06c:
    // 0x31e06c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31e06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31e070:
    // 0x31e070: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x31e070u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_31e074:
    // 0x31e074: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31e074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31e078:
    // 0x31e078: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x31e078u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_31e07c:
    // 0x31e07c: 0xc0bc284  jal         func_2F0A10
label_31e080:
    if (ctx->pc == 0x31E080u) {
        ctx->pc = 0x31E080u;
            // 0x31e080: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E084u;
        goto label_31e084;
    }
    ctx->pc = 0x31E07Cu;
    SET_GPR_U32(ctx, 31, 0x31E084u);
    ctx->pc = 0x31E080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E07Cu;
            // 0x31e080: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E084u; }
        if (ctx->pc != 0x31E084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E084u; }
        if (ctx->pc != 0x31E084u) { return; }
    }
    ctx->pc = 0x31E084u;
label_31e084:
    // 0x31e084: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x31e084u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e088:
    // 0x31e088: 0x0  nop
    ctx->pc = 0x31e088u;
    // NOP
label_31e08c:
    // 0x31e08c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x31e08cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_31e090:
    // 0x31e090: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x31e090u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e094:
    // 0x31e094: 0x0  nop
    ctx->pc = 0x31e094u;
    // NOP
label_31e098:
    // 0x31e098: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x31e098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_31e09c:
    // 0x31e09c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_31e0a0:
    if (ctx->pc == 0x31E0A0u) {
        ctx->pc = 0x31E0A0u;
            // 0x31e0a0: 0x46156d41  sub.s       $f21, $f13, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[21]);
        ctx->pc = 0x31E0A4u;
        goto label_31e0a4;
    }
    ctx->pc = 0x31E09Cu;
    {
        const bool branch_taken_0x31e09c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x31E0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E09Cu;
            // 0x31e0a0: 0x46156d41  sub.s       $f21, $f13, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e09c) {
            ctx->pc = 0x31E0B0u;
            goto label_31e0b0;
        }
    }
    ctx->pc = 0x31E0A4u;
label_31e0a4:
    // 0x31e0a4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31e0a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e0a8:
    // 0x31e0a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_31e0ac:
    if (ctx->pc == 0x31E0ACu) {
        ctx->pc = 0x31E0ACu;
            // 0x31e0ac: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E0B0u;
        goto label_31e0b0;
    }
    ctx->pc = 0x31E0A8u;
    {
        const bool branch_taken_0x31e0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E0A8u;
            // 0x31e0ac: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0a8) {
            ctx->pc = 0x31E0CCu;
            goto label_31e0cc;
        }
    }
    ctx->pc = 0x31E0B0u;
label_31e0b0:
    // 0x31e0b0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x31e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_31e0b4:
    // 0x31e0b4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31e0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_31e0b8:
    // 0x31e0b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e0bc:
    // 0x31e0bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e0bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e0c0:
    // 0x31e0c0: 0x0  nop
    ctx->pc = 0x31e0c0u;
    // NOP
label_31e0c4:
    // 0x31e0c4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x31e0c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_31e0c8:
    // 0x31e0c8: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x31e0c8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_31e0cc:
    // 0x31e0cc: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_31e0d0:
    if (ctx->pc == 0x31E0D0u) {
        ctx->pc = 0x31E0D0u;
            // 0x31e0d0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x31E0D4u;
        goto label_31e0d4;
    }
    ctx->pc = 0x31E0CCu;
    {
        const bool branch_taken_0x31e0cc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31e0cc) {
            ctx->pc = 0x31E0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E0CCu;
            // 0x31e0d0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E0E0u;
            goto label_31e0e0;
        }
    }
    ctx->pc = 0x31E0D4u;
label_31e0d4:
    // 0x31e0d4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31e0d4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e0d8:
    // 0x31e0d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_31e0dc:
    if (ctx->pc == 0x31E0DCu) {
        ctx->pc = 0x31E0DCu;
            // 0x31e0dc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E0E0u;
        goto label_31e0e0;
    }
    ctx->pc = 0x31E0D8u;
    {
        const bool branch_taken_0x31e0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E0D8u;
            // 0x31e0dc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0d8) {
            ctx->pc = 0x31E0F8u;
            goto label_31e0f8;
        }
    }
    ctx->pc = 0x31E0E0u;
label_31e0e0:
    // 0x31e0e0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x31e0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_31e0e4:
    // 0x31e0e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e0e8:
    // 0x31e0e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e0e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e0ec:
    // 0x31e0ec: 0x0  nop
    ctx->pc = 0x31e0ecu;
    // NOP
label_31e0f0:
    // 0x31e0f0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x31e0f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_31e0f4:
    // 0x31e0f4: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x31e0f4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_31e0f8:
    // 0x31e0f8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_31e0fc:
    // 0x31e0fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e100:
    // 0x31e100: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x31e100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_31e104:
    // 0x31e104: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31e104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31e108:
    // 0x31e108: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x31e108u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_31e10c:
    // 0x31e10c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31e10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31e110:
    // 0x31e110: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x31e110u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_31e114:
    // 0x31e114: 0xc0bc284  jal         func_2F0A10
label_31e118:
    if (ctx->pc == 0x31E118u) {
        ctx->pc = 0x31E118u;
            // 0x31e118: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E11Cu;
        goto label_31e11c;
    }
    ctx->pc = 0x31E114u;
    SET_GPR_U32(ctx, 31, 0x31E11Cu);
    ctx->pc = 0x31E118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E114u;
            // 0x31e118: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E11Cu; }
        if (ctx->pc != 0x31E11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E11Cu; }
        if (ctx->pc != 0x31E11Cu) { return; }
    }
    ctx->pc = 0x31E11Cu;
label_31e11c:
    // 0x31e11c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x31e11cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e120:
    // 0x31e120: 0x0  nop
    ctx->pc = 0x31e120u;
    // NOP
label_31e124:
    // 0x31e124: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x31e124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_31e128:
    // 0x31e128: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x31e128u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e12c:
    // 0x31e12c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_31e130:
    if (ctx->pc == 0x31E130u) {
        ctx->pc = 0x31E130u;
            // 0x31e130: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E134u;
        goto label_31e134;
    }
    ctx->pc = 0x31E12Cu;
    {
        const bool branch_taken_0x31e12c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x31E130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E12Cu;
            // 0x31e130: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e12c) {
            ctx->pc = 0x31E140u;
            goto label_31e140;
        }
    }
    ctx->pc = 0x31E134u;
label_31e134:
    // 0x31e134: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31e134u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e138:
    // 0x31e138: 0x10000008  b           . + 4 + (0x8 << 2)
label_31e13c:
    if (ctx->pc == 0x31E13Cu) {
        ctx->pc = 0x31E13Cu;
            // 0x31e13c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E140u;
        goto label_31e140;
    }
    ctx->pc = 0x31E138u;
    {
        const bool branch_taken_0x31e138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E138u;
            // 0x31e13c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e138) {
            ctx->pc = 0x31E15Cu;
            goto label_31e15c;
        }
    }
    ctx->pc = 0x31E140u;
label_31e140:
    // 0x31e140: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x31e140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_31e144:
    // 0x31e144: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31e144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_31e148:
    // 0x31e148: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e14c:
    // 0x31e14c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e150:
    // 0x31e150: 0x0  nop
    ctx->pc = 0x31e150u;
    // NOP
label_31e154:
    // 0x31e154: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x31e154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_31e158:
    // 0x31e158: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x31e158u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_31e15c:
    // 0x31e15c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_31e160:
    if (ctx->pc == 0x31E160u) {
        ctx->pc = 0x31E160u;
            // 0x31e160: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x31E164u;
        goto label_31e164;
    }
    ctx->pc = 0x31E15Cu;
    {
        const bool branch_taken_0x31e15c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31e15c) {
            ctx->pc = 0x31E160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E15Cu;
            // 0x31e160: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E170u;
            goto label_31e170;
        }
    }
    ctx->pc = 0x31E164u;
label_31e164:
    // 0x31e164: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31e164u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e168:
    // 0x31e168: 0x10000007  b           . + 4 + (0x7 << 2)
label_31e16c:
    if (ctx->pc == 0x31E16Cu) {
        ctx->pc = 0x31E16Cu;
            // 0x31e16c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E170u;
        goto label_31e170;
    }
    ctx->pc = 0x31E168u;
    {
        const bool branch_taken_0x31e168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E168u;
            // 0x31e16c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e168) {
            ctx->pc = 0x31E188u;
            goto label_31e188;
        }
    }
    ctx->pc = 0x31E170u;
label_31e170:
    // 0x31e170: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x31e170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_31e174:
    // 0x31e174: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e178:
    // 0x31e178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e17c:
    // 0x31e17c: 0x0  nop
    ctx->pc = 0x31e17cu;
    // NOP
label_31e180:
    // 0x31e180: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x31e180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_31e184:
    // 0x31e184: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x31e184u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_31e188:
    // 0x31e188: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31e188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_31e18c:
    // 0x31e18c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31e18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31e190:
    // 0x31e190: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x31e190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_31e194:
    // 0x31e194: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31e194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e198:
    // 0x31e198: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x31e198u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_31e19c:
    // 0x31e19c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31e19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31e1a0:
    // 0x31e1a0: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x31e1a0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_31e1a4:
    // 0x31e1a4: 0xc0bc284  jal         func_2F0A10
label_31e1a8:
    if (ctx->pc == 0x31E1A8u) {
        ctx->pc = 0x31E1A8u;
            // 0x31e1a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E1ACu;
        goto label_31e1ac;
    }
    ctx->pc = 0x31E1A4u;
    SET_GPR_U32(ctx, 31, 0x31E1ACu);
    ctx->pc = 0x31E1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E1A4u;
            // 0x31e1a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E1ACu; }
        if (ctx->pc != 0x31E1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E1ACu; }
        if (ctx->pc != 0x31E1ACu) { return; }
    }
    ctx->pc = 0x31E1ACu;
label_31e1ac:
    // 0x31e1ac: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x31e1acu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e1b0:
    // 0x31e1b0: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x31e1b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_31e1b4:
    // 0x31e1b4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x31e1b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_31e1b8:
    // 0x31e1b8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_31e1bc:
    if (ctx->pc == 0x31E1BCu) {
        ctx->pc = 0x31E1BCu;
            // 0x31e1bc: 0x2652e3f0  addiu       $s2, $s2, -0x1C10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960112));
        ctx->pc = 0x31E1C0u;
        goto label_31e1c0;
    }
    ctx->pc = 0x31E1B8u;
    {
        const bool branch_taken_0x31e1b8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x31E1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E1B8u;
            // 0x31e1bc: 0x2652e3f0  addiu       $s2, $s2, -0x1C10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1b8) {
            ctx->pc = 0x31E1CCu;
            goto label_31e1cc;
        }
    }
    ctx->pc = 0x31E1C0u;
label_31e1c0:
    // 0x31e1c0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31e1c0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e1c4:
    // 0x31e1c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_31e1c8:
    if (ctx->pc == 0x31E1C8u) {
        ctx->pc = 0x31E1C8u;
            // 0x31e1c8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E1CCu;
        goto label_31e1cc;
    }
    ctx->pc = 0x31E1C4u;
    {
        const bool branch_taken_0x31e1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E1C4u;
            // 0x31e1c8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1c4) {
            ctx->pc = 0x31E1E8u;
            goto label_31e1e8;
        }
    }
    ctx->pc = 0x31E1CCu;
label_31e1cc:
    // 0x31e1cc: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x31e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_31e1d0:
    // 0x31e1d0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31e1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_31e1d4:
    // 0x31e1d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e1d8:
    // 0x31e1d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e1d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e1dc:
    // 0x31e1dc: 0x0  nop
    ctx->pc = 0x31e1dcu;
    // NOP
label_31e1e0:
    // 0x31e1e0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x31e1e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_31e1e4:
    // 0x31e1e4: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x31e1e4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_31e1e8:
    // 0x31e1e8: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_31e1ec:
    if (ctx->pc == 0x31E1ECu) {
        ctx->pc = 0x31E1ECu;
            // 0x31e1ec: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x31E1F0u;
        goto label_31e1f0;
    }
    ctx->pc = 0x31E1E8u;
    {
        const bool branch_taken_0x31e1e8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31e1e8) {
            ctx->pc = 0x31E1ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E1E8u;
            // 0x31e1ec: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E1FCu;
            goto label_31e1fc;
        }
    }
    ctx->pc = 0x31E1F0u;
label_31e1f0:
    // 0x31e1f0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31e1f0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e1f4:
    // 0x31e1f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_31e1f8:
    if (ctx->pc == 0x31E1F8u) {
        ctx->pc = 0x31E1F8u;
            // 0x31e1f8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E1FCu;
        goto label_31e1fc;
    }
    ctx->pc = 0x31E1F4u;
    {
        const bool branch_taken_0x31e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E1F4u;
            // 0x31e1f8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1f4) {
            ctx->pc = 0x31E214u;
            goto label_31e214;
        }
    }
    ctx->pc = 0x31E1FCu;
label_31e1fc:
    // 0x31e1fc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x31e1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_31e200:
    // 0x31e200: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e204:
    // 0x31e204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e208:
    // 0x31e208: 0x0  nop
    ctx->pc = 0x31e208u;
    // NOP
label_31e20c:
    // 0x31e20c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x31e20cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_31e210:
    // 0x31e210: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x31e210u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_31e214:
    // 0x31e214: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31e214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_31e218:
    // 0x31e218: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31e218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e21c:
    // 0x31e21c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x31e21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_31e220:
    // 0x31e220: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31e220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31e224:
    // 0x31e224: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x31e224u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_31e228:
    // 0x31e228: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31e228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31e22c:
    // 0x31e22c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x31e22cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_31e230:
    // 0x31e230: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31e230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e234:
    // 0x31e234: 0xc0bc284  jal         func_2F0A10
label_31e238:
    if (ctx->pc == 0x31E238u) {
        ctx->pc = 0x31E238u;
            // 0x31e238: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x31E23Cu;
        goto label_31e23c;
    }
    ctx->pc = 0x31E234u;
    SET_GPR_U32(ctx, 31, 0x31E23Cu);
    ctx->pc = 0x31E238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E234u;
            // 0x31e238: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E23Cu; }
        if (ctx->pc != 0x31E23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E23Cu; }
        if (ctx->pc != 0x31E23Cu) { return; }
    }
    ctx->pc = 0x31E23Cu;
label_31e23c:
    // 0x31e23c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x31e23cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e240:
    // 0x31e240: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_31e244:
    if (ctx->pc == 0x31E244u) {
        ctx->pc = 0x31E244u;
            // 0x31e244: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E248u;
        goto label_31e248;
    }
    ctx->pc = 0x31E240u;
    {
        const bool branch_taken_0x31e240 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x31E244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E240u;
            // 0x31e244: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e240) {
            ctx->pc = 0x31E254u;
            goto label_31e254;
        }
    }
    ctx->pc = 0x31E248u;
label_31e248:
    // 0x31e248: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31e248u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e24c:
    // 0x31e24c: 0x10000008  b           . + 4 + (0x8 << 2)
label_31e250:
    if (ctx->pc == 0x31E250u) {
        ctx->pc = 0x31E250u;
            // 0x31e250: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E254u;
        goto label_31e254;
    }
    ctx->pc = 0x31E24Cu;
    {
        const bool branch_taken_0x31e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E24Cu;
            // 0x31e250: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e24c) {
            ctx->pc = 0x31E270u;
            goto label_31e270;
        }
    }
    ctx->pc = 0x31E254u;
label_31e254:
    // 0x31e254: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x31e254u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_31e258:
    // 0x31e258: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31e258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_31e25c:
    // 0x31e25c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e260:
    // 0x31e260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e264:
    // 0x31e264: 0x0  nop
    ctx->pc = 0x31e264u;
    // NOP
label_31e268:
    // 0x31e268: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x31e268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_31e26c:
    // 0x31e26c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x31e26cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_31e270:
    // 0x31e270: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_31e274:
    if (ctx->pc == 0x31E274u) {
        ctx->pc = 0x31E274u;
            // 0x31e274: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x31E278u;
        goto label_31e278;
    }
    ctx->pc = 0x31E270u;
    {
        const bool branch_taken_0x31e270 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31e270) {
            ctx->pc = 0x31E274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E270u;
            // 0x31e274: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E284u;
            goto label_31e284;
        }
    }
    ctx->pc = 0x31E278u;
label_31e278:
    // 0x31e278: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31e278u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e27c:
    // 0x31e27c: 0x10000007  b           . + 4 + (0x7 << 2)
label_31e280:
    if (ctx->pc == 0x31E280u) {
        ctx->pc = 0x31E280u;
            // 0x31e280: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E284u;
        goto label_31e284;
    }
    ctx->pc = 0x31E27Cu;
    {
        const bool branch_taken_0x31e27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E27Cu;
            // 0x31e280: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e27c) {
            ctx->pc = 0x31E29Cu;
            goto label_31e29c;
        }
    }
    ctx->pc = 0x31E284u;
label_31e284:
    // 0x31e284: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x31e284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_31e288:
    // 0x31e288: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e28c:
    // 0x31e28c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e290:
    // 0x31e290: 0x0  nop
    ctx->pc = 0x31e290u;
    // NOP
label_31e294:
    // 0x31e294: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x31e294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_31e298:
    // 0x31e298: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x31e298u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_31e29c:
    // 0x31e29c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_31e2a0:
    // 0x31e2a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31e2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31e2a4:
    // 0x31e2a4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x31e2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_31e2a8:
    // 0x31e2a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e2ac:
    // 0x31e2ac: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x31e2acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_31e2b0:
    // 0x31e2b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31e2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31e2b4:
    // 0x31e2b4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x31e2b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_31e2b8:
    // 0x31e2b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31e2b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e2bc:
    // 0x31e2bc: 0xc0bc284  jal         func_2F0A10
label_31e2c0:
    if (ctx->pc == 0x31E2C0u) {
        ctx->pc = 0x31E2C0u;
            // 0x31e2c0: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x31E2C4u;
        goto label_31e2c4;
    }
    ctx->pc = 0x31E2BCu;
    SET_GPR_U32(ctx, 31, 0x31E2C4u);
    ctx->pc = 0x31E2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E2BCu;
            // 0x31e2c0: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E2C4u; }
        if (ctx->pc != 0x31E2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E2C4u; }
        if (ctx->pc != 0x31E2C4u) { return; }
    }
    ctx->pc = 0x31E2C4u;
label_31e2c4:
    // 0x31e2c4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x31e2c4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e2c8:
    // 0x31e2c8: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x31e2c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_31e2cc:
    // 0x31e2cc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x31e2ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_31e2d0:
    // 0x31e2d0: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_31e2d4:
    if (ctx->pc == 0x31E2D4u) {
        ctx->pc = 0x31E2D4u;
            // 0x31e2d4: 0x2652e3e0  addiu       $s2, $s2, -0x1C20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960096));
        ctx->pc = 0x31E2D8u;
        goto label_31e2d8;
    }
    ctx->pc = 0x31E2D0u;
    {
        const bool branch_taken_0x31e2d0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x31E2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E2D0u;
            // 0x31e2d4: 0x2652e3e0  addiu       $s2, $s2, -0x1C20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2d0) {
            ctx->pc = 0x31E2E4u;
            goto label_31e2e4;
        }
    }
    ctx->pc = 0x31E2D8u;
label_31e2d8:
    // 0x31e2d8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31e2d8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e2dc:
    // 0x31e2dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_31e2e0:
    if (ctx->pc == 0x31E2E0u) {
        ctx->pc = 0x31E2E0u;
            // 0x31e2e0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E2E4u;
        goto label_31e2e4;
    }
    ctx->pc = 0x31E2DCu;
    {
        const bool branch_taken_0x31e2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E2DCu;
            // 0x31e2e0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2dc) {
            ctx->pc = 0x31E300u;
            goto label_31e300;
        }
    }
    ctx->pc = 0x31E2E4u;
label_31e2e4:
    // 0x31e2e4: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x31e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_31e2e8:
    // 0x31e2e8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31e2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_31e2ec:
    // 0x31e2ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e2f0:
    // 0x31e2f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e2f4:
    // 0x31e2f4: 0x0  nop
    ctx->pc = 0x31e2f4u;
    // NOP
label_31e2f8:
    // 0x31e2f8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x31e2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_31e2fc:
    // 0x31e2fc: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x31e2fcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_31e300:
    // 0x31e300: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_31e304:
    if (ctx->pc == 0x31E304u) {
        ctx->pc = 0x31E304u;
            // 0x31e304: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x31E308u;
        goto label_31e308;
    }
    ctx->pc = 0x31E300u;
    {
        const bool branch_taken_0x31e300 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31e300) {
            ctx->pc = 0x31E304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E300u;
            // 0x31e304: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E314u;
            goto label_31e314;
        }
    }
    ctx->pc = 0x31E308u;
label_31e308:
    // 0x31e308: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31e308u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e30c:
    // 0x31e30c: 0x10000007  b           . + 4 + (0x7 << 2)
label_31e310:
    if (ctx->pc == 0x31E310u) {
        ctx->pc = 0x31E310u;
            // 0x31e310: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E314u;
        goto label_31e314;
    }
    ctx->pc = 0x31E30Cu;
    {
        const bool branch_taken_0x31e30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E30Cu;
            // 0x31e310: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e30c) {
            ctx->pc = 0x31E32Cu;
            goto label_31e32c;
        }
    }
    ctx->pc = 0x31E314u;
label_31e314:
    // 0x31e314: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x31e314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_31e318:
    // 0x31e318: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e31c:
    // 0x31e31c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e31cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e320:
    // 0x31e320: 0x0  nop
    ctx->pc = 0x31e320u;
    // NOP
label_31e324:
    // 0x31e324: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x31e324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_31e328:
    // 0x31e328: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x31e328u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_31e32c:
    // 0x31e32c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_31e330:
    // 0x31e330: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31e330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e334:
    // 0x31e334: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x31e334u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_31e338:
    // 0x31e338: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31e338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31e33c:
    // 0x31e33c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x31e33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_31e340:
    // 0x31e340: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31e340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31e344:
    // 0x31e344: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x31e344u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_31e348:
    // 0x31e348: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31e348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e34c:
    // 0x31e34c: 0xc0bc284  jal         func_2F0A10
label_31e350:
    if (ctx->pc == 0x31E350u) {
        ctx->pc = 0x31E350u;
            // 0x31e350: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x31E354u;
        goto label_31e354;
    }
    ctx->pc = 0x31E34Cu;
    SET_GPR_U32(ctx, 31, 0x31E354u);
    ctx->pc = 0x31E350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E34Cu;
            // 0x31e350: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E354u; }
        if (ctx->pc != 0x31E354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E354u; }
        if (ctx->pc != 0x31E354u) { return; }
    }
    ctx->pc = 0x31E354u;
label_31e354:
    // 0x31e354: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x31e354u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e358:
    // 0x31e358: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_31e35c:
    if (ctx->pc == 0x31E35Cu) {
        ctx->pc = 0x31E35Cu;
            // 0x31e35c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E360u;
        goto label_31e360;
    }
    ctx->pc = 0x31E358u;
    {
        const bool branch_taken_0x31e358 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x31E35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E358u;
            // 0x31e35c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e358) {
            ctx->pc = 0x31E36Cu;
            goto label_31e36c;
        }
    }
    ctx->pc = 0x31E360u;
label_31e360:
    // 0x31e360: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31e360u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e364:
    // 0x31e364: 0x10000008  b           . + 4 + (0x8 << 2)
label_31e368:
    if (ctx->pc == 0x31E368u) {
        ctx->pc = 0x31E368u;
            // 0x31e368: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E36Cu;
        goto label_31e36c;
    }
    ctx->pc = 0x31E364u;
    {
        const bool branch_taken_0x31e364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E364u;
            // 0x31e368: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e364) {
            ctx->pc = 0x31E388u;
            goto label_31e388;
        }
    }
    ctx->pc = 0x31E36Cu;
label_31e36c:
    // 0x31e36c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x31e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_31e370:
    // 0x31e370: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31e370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_31e374:
    // 0x31e374: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e378:
    // 0x31e378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e37c:
    // 0x31e37c: 0x0  nop
    ctx->pc = 0x31e37cu;
    // NOP
label_31e380:
    // 0x31e380: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x31e380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_31e384:
    // 0x31e384: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x31e384u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_31e388:
    // 0x31e388: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_31e38c:
    if (ctx->pc == 0x31E38Cu) {
        ctx->pc = 0x31E38Cu;
            // 0x31e38c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x31E390u;
        goto label_31e390;
    }
    ctx->pc = 0x31E388u;
    {
        const bool branch_taken_0x31e388 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31e388) {
            ctx->pc = 0x31E38Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E388u;
            // 0x31e38c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E39Cu;
            goto label_31e39c;
        }
    }
    ctx->pc = 0x31E390u;
label_31e390:
    // 0x31e390: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31e390u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e394:
    // 0x31e394: 0x10000007  b           . + 4 + (0x7 << 2)
label_31e398:
    if (ctx->pc == 0x31E398u) {
        ctx->pc = 0x31E398u;
            // 0x31e398: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E39Cu;
        goto label_31e39c;
    }
    ctx->pc = 0x31E394u;
    {
        const bool branch_taken_0x31e394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E394u;
            // 0x31e398: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e394) {
            ctx->pc = 0x31E3B4u;
            goto label_31e3b4;
        }
    }
    ctx->pc = 0x31E39Cu;
label_31e39c:
    // 0x31e39c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x31e39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_31e3a0:
    // 0x31e3a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e3a4:
    // 0x31e3a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e3a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e3a8:
    // 0x31e3a8: 0x0  nop
    ctx->pc = 0x31e3a8u;
    // NOP
label_31e3ac:
    // 0x31e3ac: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x31e3acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_31e3b0:
    // 0x31e3b0: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x31e3b0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_31e3b4:
    // 0x31e3b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_31e3b8:
    // 0x31e3b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31e3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31e3bc:
    // 0x31e3bc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x31e3bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_31e3c0:
    // 0x31e3c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e3c4:
    // 0x31e3c4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x31e3c4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_31e3c8:
    // 0x31e3c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31e3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31e3cc:
    // 0x31e3cc: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x31e3ccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_31e3d0:
    // 0x31e3d0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x31e3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_31e3d4:
    // 0x31e3d4: 0xc0bc284  jal         func_2F0A10
label_31e3d8:
    if (ctx->pc == 0x31E3D8u) {
        ctx->pc = 0x31E3D8u;
            // 0x31e3d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E3DCu;
        goto label_31e3dc;
    }
    ctx->pc = 0x31E3D4u;
    SET_GPR_U32(ctx, 31, 0x31E3DCu);
    ctx->pc = 0x31E3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E3D4u;
            // 0x31e3d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E3DCu; }
        if (ctx->pc != 0x31E3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E3DCu; }
        if (ctx->pc != 0x31E3DCu) { return; }
    }
    ctx->pc = 0x31E3DCu;
label_31e3dc:
    // 0x31e3dc: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x31e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_31e3e0:
    // 0x31e3e0: 0x1e1843  sra         $v1, $fp, 1
    ctx->pc = 0x31e3e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 30), 1));
label_31e3e4:
    // 0x31e3e4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x31e3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_31e3e8:
    // 0x31e3e8: 0x2a39021  addu        $s2, $s5, $v1
    ctx->pc = 0x31e3e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_31e3ec:
    // 0x31e3ec: 0x24a5e3c0  addiu       $a1, $a1, -0x1C40
    ctx->pc = 0x31e3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960064));
label_31e3f0:
    // 0x31e3f0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x31e3f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_31e3f4:
    // 0x31e3f4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x31e3f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_31e3f8:
    // 0x31e3f8: 0x2642005c  addiu       $v0, $s2, 0x5C
    ctx->pc = 0x31e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
label_31e3fc:
    // 0x31e3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e400:
    // 0x31e400: 0x0  nop
    ctx->pc = 0x31e400u;
    // NOP
label_31e404:
    // 0x31e404: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x31e404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_31e408:
    // 0x31e408: 0x26820035  addiu       $v0, $s4, 0x35
    ctx->pc = 0x31e408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 53));
label_31e40c:
    // 0x31e40c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e410:
    // 0x31e410: 0x0  nop
    ctx->pc = 0x31e410u;
    // NOP
label_31e414:
    // 0x31e414: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x31e414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_31e418:
    // 0x31e418: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x31e418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31e41c:
    // 0x31e41c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x31e41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e420:
    // 0x31e420: 0x460c0b80  add.s       $f14, $f1, $f12
    ctx->pc = 0x31e420u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
label_31e424:
    // 0x31e424: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_31e428:
    if (ctx->pc == 0x31E428u) {
        ctx->pc = 0x31E428u;
            // 0x31e428: 0x460d03c0  add.s       $f15, $f0, $f13 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
        ctx->pc = 0x31E42Cu;
        goto label_31e42c;
    }
    ctx->pc = 0x31E424u;
    {
        const bool branch_taken_0x31e424 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x31E428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E424u;
            // 0x31e428: 0x460d03c0  add.s       $f15, $f0, $f13 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e424) {
            ctx->pc = 0x31E438u;
            goto label_31e438;
        }
    }
    ctx->pc = 0x31E42Cu;
label_31e42c:
    // 0x31e42c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31e42cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e430:
    // 0x31e430: 0x10000008  b           . + 4 + (0x8 << 2)
label_31e434:
    if (ctx->pc == 0x31E434u) {
        ctx->pc = 0x31E434u;
            // 0x31e434: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E438u;
        goto label_31e438;
    }
    ctx->pc = 0x31E430u;
    {
        const bool branch_taken_0x31e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E430u;
            // 0x31e434: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e430) {
            ctx->pc = 0x31E454u;
            goto label_31e454;
        }
    }
    ctx->pc = 0x31E438u;
label_31e438:
    // 0x31e438: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x31e438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_31e43c:
    // 0x31e43c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31e43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_31e440:
    // 0x31e440: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e444:
    // 0x31e444: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e448:
    // 0x31e448: 0x0  nop
    ctx->pc = 0x31e448u;
    // NOP
label_31e44c:
    // 0x31e44c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x31e44cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_31e450:
    // 0x31e450: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x31e450u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_31e454:
    // 0x31e454: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_31e458:
    if (ctx->pc == 0x31E458u) {
        ctx->pc = 0x31E458u;
            // 0x31e458: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x31E45Cu;
        goto label_31e45c;
    }
    ctx->pc = 0x31E454u;
    {
        const bool branch_taken_0x31e454 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31e454) {
            ctx->pc = 0x31E458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E454u;
            // 0x31e458: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E468u;
            goto label_31e468;
        }
    }
    ctx->pc = 0x31E45Cu;
label_31e45c:
    // 0x31e45c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31e45cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e460:
    // 0x31e460: 0x10000007  b           . + 4 + (0x7 << 2)
label_31e464:
    if (ctx->pc == 0x31E464u) {
        ctx->pc = 0x31E464u;
            // 0x31e464: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31E468u;
        goto label_31e468;
    }
    ctx->pc = 0x31E460u;
    {
        const bool branch_taken_0x31e460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E460u;
            // 0x31e464: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e460) {
            ctx->pc = 0x31E480u;
            goto label_31e480;
        }
    }
    ctx->pc = 0x31E468u;
label_31e468:
    // 0x31e468: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x31e468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_31e46c:
    // 0x31e46c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e470:
    // 0x31e470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e474:
    // 0x31e474: 0x0  nop
    ctx->pc = 0x31e474u;
    // NOP
label_31e478:
    // 0x31e478: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x31e478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_31e47c:
    // 0x31e47c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x31e47cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_31e480:
    // 0x31e480: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31e480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_31e484:
    // 0x31e484: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31e484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31e488:
    // 0x31e488: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x31e488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_31e48c:
    // 0x31e48c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e490:
    // 0x31e490: 0xc0bc284  jal         func_2F0A10
label_31e494:
    if (ctx->pc == 0x31E494u) {
        ctx->pc = 0x31E494u;
            // 0x31e494: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E498u;
        goto label_31e498;
    }
    ctx->pc = 0x31E490u;
    SET_GPR_U32(ctx, 31, 0x31E498u);
    ctx->pc = 0x31E494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E490u;
            // 0x31e494: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E498u; }
        if (ctx->pc != 0x31E498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E498u; }
        if (ctx->pc != 0x31E498u) { return; }
    }
    ctx->pc = 0x31E498u;
label_31e498:
    // 0x31e498: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31e498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31e49c:
    // 0x31e49c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x31e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_31e4a0:
    // 0x31e4a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31e4a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31e4a4:
    // 0x31e4a4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x31e4a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_31e4a8:
    // 0x31e4a8: 0x320f809  jalr        $t9
label_31e4ac:
    if (ctx->pc == 0x31E4ACu) {
        ctx->pc = 0x31E4B0u;
        goto label_31e4b0;
    }
    ctx->pc = 0x31E4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31E4B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31E4B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31E4B0u; }
            if (ctx->pc != 0x31E4B0u) { return; }
        }
        }
    }
    ctx->pc = 0x31E4B0u;
label_31e4b0:
    // 0x31e4b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_31e4b4:
    // 0x31e4b4: 0x8c440eb8  lw          $a0, 0xEB8($v0)
    ctx->pc = 0x31e4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3768)));
label_31e4b8:
    // 0x31e4b8: 0xc0506ac  jal         func_141AB0
label_31e4bc:
    if (ctx->pc == 0x31E4BCu) {
        ctx->pc = 0x31E4BCu;
            // 0x31e4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E4C0u;
        goto label_31e4c0;
    }
    ctx->pc = 0x31E4B8u;
    SET_GPR_U32(ctx, 31, 0x31E4C0u);
    ctx->pc = 0x31E4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E4B8u;
            // 0x31e4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E4C0u; }
        if (ctx->pc != 0x31E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E4C0u; }
        if (ctx->pc != 0x31E4C0u) { return; }
    }
    ctx->pc = 0x31E4C0u;
label_31e4c0:
    // 0x31e4c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31e4c4:
    // 0x31e4c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31e4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e4c8:
    // 0x31e4c8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x31e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_31e4cc:
    // 0x31e4cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31e4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31e4d0:
    // 0x31e4d0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x31e4d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_31e4d4:
    // 0x31e4d4: 0x320f809  jalr        $t9
label_31e4d8:
    if (ctx->pc == 0x31E4D8u) {
        ctx->pc = 0x31E4D8u;
            // 0x31e4d8: 0x26900031  addiu       $s0, $s4, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 49));
        ctx->pc = 0x31E4DCu;
        goto label_31e4dc;
    }
    ctx->pc = 0x31E4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31E4DCu);
        ctx->pc = 0x31E4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E4D4u;
            // 0x31e4d8: 0x26900031  addiu       $s0, $s4, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 49));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31E4DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31E4DCu; }
            if (ctx->pc != 0x31E4DCu) { return; }
        }
        }
    }
    ctx->pc = 0x31E4DCu;
label_31e4dc:
    // 0x31e4dc: 0x264200c6  addiu       $v0, $s2, 0xC6
    ctx->pc = 0x31e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 198));
label_31e4e0:
    // 0x31e4e0: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x31e4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
label_31e4e4:
    // 0x31e4e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e4e8:
    // 0x31e4e8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x31e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_31e4ec:
    // 0x31e4ec: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x31e4ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_31e4f0:
    // 0x31e4f0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x31e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_31e4f4:
    // 0x31e4f4: 0x844af670  lh          $t2, -0x990($v0)
    ctx->pc = 0x31e4f4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964848)));
label_31e4f8:
    // 0x31e4f8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x31e4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_31e4fc:
    // 0x31e4fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e500:
    // 0x31e500: 0x24a5f680  addiu       $a1, $a1, -0x980
    ctx->pc = 0x31e500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964864));
label_31e504:
    // 0x31e504: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x31e504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31e508:
    // 0x31e508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31e508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e50c:
    // 0x31e50c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x31e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_31e510:
    // 0x31e510: 0x8449f672  lh          $t1, -0x98E($v0)
    ctx->pc = 0x31e510u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964850)));
label_31e514:
    // 0x31e514: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31e514u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e518:
    // 0x31e518: 0x0  nop
    ctx->pc = 0x31e518u;
    // NOP
label_31e51c:
    // 0x31e51c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x31e51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_31e520:
    // 0x31e520: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31e520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_31e524:
    // 0x31e524: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x31e524u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e528:
    // 0x31e528: 0x0  nop
    ctx->pc = 0x31e528u;
    // NOP
label_31e52c:
    // 0x31e52c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x31e52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_31e530:
    // 0x31e530: 0xc502f688  lwc1        $f2, -0x978($t0)
    ctx->pc = 0x31e530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294964872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31e534:
    // 0x31e534: 0xc461f68c  lwc1        $f1, -0x974($v1)
    ctx->pc = 0x31e534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31e538:
    // 0x31e538: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x31e538u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e53c:
    // 0x31e53c: 0x0  nop
    ctx->pc = 0x31e53cu;
    // NOP
label_31e540:
    // 0x31e540: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x31e540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_31e544:
    // 0x31e544: 0x46026380  add.s       $f14, $f12, $f2
    ctx->pc = 0x31e544u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_31e548:
    // 0x31e548: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x31e548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_31e54c:
    // 0x31e54c: 0xc0bc284  jal         func_2F0A10
label_31e550:
    if (ctx->pc == 0x31E550u) {
        ctx->pc = 0x31E550u;
            // 0x31e550: 0x46016bc0  add.s       $f15, $f13, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
        ctx->pc = 0x31E554u;
        goto label_31e554;
    }
    ctx->pc = 0x31E54Cu;
    SET_GPR_U32(ctx, 31, 0x31E554u);
    ctx->pc = 0x31E550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E54Cu;
            // 0x31e550: 0x46016bc0  add.s       $f15, $f13, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E554u; }
        if (ctx->pc != 0x31E554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E554u; }
        if (ctx->pc != 0x31E554u) { return; }
    }
    ctx->pc = 0x31E554u;
label_31e554:
    // 0x31e554: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31e554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31e558:
    // 0x31e558: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x31e558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_31e55c:
    // 0x31e55c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31e55cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31e560:
    // 0x31e560: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x31e560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_31e564:
    // 0x31e564: 0x320f809  jalr        $t9
label_31e568:
    if (ctx->pc == 0x31E568u) {
        ctx->pc = 0x31E56Cu;
        goto label_31e56c;
    }
    ctx->pc = 0x31E564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31E56Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31E56Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31E56Cu; }
            if (ctx->pc != 0x31E56Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31E56Cu;
label_31e56c:
    // 0x31e56c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x31e56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_31e570:
    // 0x31e570: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x31e570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_31e574:
    // 0x31e574: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x31e574u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31e578:
    // 0x31e578: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x31e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_31e57c:
    // 0x31e57c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x31e57cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31e580:
    // 0x31e580: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x31e580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_31e584:
    // 0x31e584: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x31e584u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31e588:
    // 0x31e588: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31e588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31e58c:
    // 0x31e58c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x31e58cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31e590:
    // 0x31e590: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31e590u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31e594:
    // 0x31e594: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31e594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31e598:
    // 0x31e598: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31e598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31e59c:
    // 0x31e59c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31e59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31e5a0:
    // 0x31e5a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31e5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31e5a4:
    // 0x31e5a4: 0x3e00008  jr          $ra
label_31e5a8:
    if (ctx->pc == 0x31E5A8u) {
        ctx->pc = 0x31E5A8u;
            // 0x31e5a8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x31E5ACu;
        goto label_31e5ac;
    }
    ctx->pc = 0x31E5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E5A4u;
            // 0x31e5a8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31E5ACu;
label_31e5ac:
    // 0x31e5ac: 0x0  nop
    ctx->pc = 0x31e5acu;
    // NOP
}
