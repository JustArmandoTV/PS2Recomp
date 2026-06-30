#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029DFE0
// Address: 0x29dfe0 - 0x29e6b0
void sub_0029DFE0_0x29dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DFE0_0x29dfe0");
#endif

    switch (ctx->pc) {
        case 0x29dfe0u: goto label_29dfe0;
        case 0x29dfe4u: goto label_29dfe4;
        case 0x29dfe8u: goto label_29dfe8;
        case 0x29dfecu: goto label_29dfec;
        case 0x29dff0u: goto label_29dff0;
        case 0x29dff4u: goto label_29dff4;
        case 0x29dff8u: goto label_29dff8;
        case 0x29dffcu: goto label_29dffc;
        case 0x29e000u: goto label_29e000;
        case 0x29e004u: goto label_29e004;
        case 0x29e008u: goto label_29e008;
        case 0x29e00cu: goto label_29e00c;
        case 0x29e010u: goto label_29e010;
        case 0x29e014u: goto label_29e014;
        case 0x29e018u: goto label_29e018;
        case 0x29e01cu: goto label_29e01c;
        case 0x29e020u: goto label_29e020;
        case 0x29e024u: goto label_29e024;
        case 0x29e028u: goto label_29e028;
        case 0x29e02cu: goto label_29e02c;
        case 0x29e030u: goto label_29e030;
        case 0x29e034u: goto label_29e034;
        case 0x29e038u: goto label_29e038;
        case 0x29e03cu: goto label_29e03c;
        case 0x29e040u: goto label_29e040;
        case 0x29e044u: goto label_29e044;
        case 0x29e048u: goto label_29e048;
        case 0x29e04cu: goto label_29e04c;
        case 0x29e050u: goto label_29e050;
        case 0x29e054u: goto label_29e054;
        case 0x29e058u: goto label_29e058;
        case 0x29e05cu: goto label_29e05c;
        case 0x29e060u: goto label_29e060;
        case 0x29e064u: goto label_29e064;
        case 0x29e068u: goto label_29e068;
        case 0x29e06cu: goto label_29e06c;
        case 0x29e070u: goto label_29e070;
        case 0x29e074u: goto label_29e074;
        case 0x29e078u: goto label_29e078;
        case 0x29e07cu: goto label_29e07c;
        case 0x29e080u: goto label_29e080;
        case 0x29e084u: goto label_29e084;
        case 0x29e088u: goto label_29e088;
        case 0x29e08cu: goto label_29e08c;
        case 0x29e090u: goto label_29e090;
        case 0x29e094u: goto label_29e094;
        case 0x29e098u: goto label_29e098;
        case 0x29e09cu: goto label_29e09c;
        case 0x29e0a0u: goto label_29e0a0;
        case 0x29e0a4u: goto label_29e0a4;
        case 0x29e0a8u: goto label_29e0a8;
        case 0x29e0acu: goto label_29e0ac;
        case 0x29e0b0u: goto label_29e0b0;
        case 0x29e0b4u: goto label_29e0b4;
        case 0x29e0b8u: goto label_29e0b8;
        case 0x29e0bcu: goto label_29e0bc;
        case 0x29e0c0u: goto label_29e0c0;
        case 0x29e0c4u: goto label_29e0c4;
        case 0x29e0c8u: goto label_29e0c8;
        case 0x29e0ccu: goto label_29e0cc;
        case 0x29e0d0u: goto label_29e0d0;
        case 0x29e0d4u: goto label_29e0d4;
        case 0x29e0d8u: goto label_29e0d8;
        case 0x29e0dcu: goto label_29e0dc;
        case 0x29e0e0u: goto label_29e0e0;
        case 0x29e0e4u: goto label_29e0e4;
        case 0x29e0e8u: goto label_29e0e8;
        case 0x29e0ecu: goto label_29e0ec;
        case 0x29e0f0u: goto label_29e0f0;
        case 0x29e0f4u: goto label_29e0f4;
        case 0x29e0f8u: goto label_29e0f8;
        case 0x29e0fcu: goto label_29e0fc;
        case 0x29e100u: goto label_29e100;
        case 0x29e104u: goto label_29e104;
        case 0x29e108u: goto label_29e108;
        case 0x29e10cu: goto label_29e10c;
        case 0x29e110u: goto label_29e110;
        case 0x29e114u: goto label_29e114;
        case 0x29e118u: goto label_29e118;
        case 0x29e11cu: goto label_29e11c;
        case 0x29e120u: goto label_29e120;
        case 0x29e124u: goto label_29e124;
        case 0x29e128u: goto label_29e128;
        case 0x29e12cu: goto label_29e12c;
        case 0x29e130u: goto label_29e130;
        case 0x29e134u: goto label_29e134;
        case 0x29e138u: goto label_29e138;
        case 0x29e13cu: goto label_29e13c;
        case 0x29e140u: goto label_29e140;
        case 0x29e144u: goto label_29e144;
        case 0x29e148u: goto label_29e148;
        case 0x29e14cu: goto label_29e14c;
        case 0x29e150u: goto label_29e150;
        case 0x29e154u: goto label_29e154;
        case 0x29e158u: goto label_29e158;
        case 0x29e15cu: goto label_29e15c;
        case 0x29e160u: goto label_29e160;
        case 0x29e164u: goto label_29e164;
        case 0x29e168u: goto label_29e168;
        case 0x29e16cu: goto label_29e16c;
        case 0x29e170u: goto label_29e170;
        case 0x29e174u: goto label_29e174;
        case 0x29e178u: goto label_29e178;
        case 0x29e17cu: goto label_29e17c;
        case 0x29e180u: goto label_29e180;
        case 0x29e184u: goto label_29e184;
        case 0x29e188u: goto label_29e188;
        case 0x29e18cu: goto label_29e18c;
        case 0x29e190u: goto label_29e190;
        case 0x29e194u: goto label_29e194;
        case 0x29e198u: goto label_29e198;
        case 0x29e19cu: goto label_29e19c;
        case 0x29e1a0u: goto label_29e1a0;
        case 0x29e1a4u: goto label_29e1a4;
        case 0x29e1a8u: goto label_29e1a8;
        case 0x29e1acu: goto label_29e1ac;
        case 0x29e1b0u: goto label_29e1b0;
        case 0x29e1b4u: goto label_29e1b4;
        case 0x29e1b8u: goto label_29e1b8;
        case 0x29e1bcu: goto label_29e1bc;
        case 0x29e1c0u: goto label_29e1c0;
        case 0x29e1c4u: goto label_29e1c4;
        case 0x29e1c8u: goto label_29e1c8;
        case 0x29e1ccu: goto label_29e1cc;
        case 0x29e1d0u: goto label_29e1d0;
        case 0x29e1d4u: goto label_29e1d4;
        case 0x29e1d8u: goto label_29e1d8;
        case 0x29e1dcu: goto label_29e1dc;
        case 0x29e1e0u: goto label_29e1e0;
        case 0x29e1e4u: goto label_29e1e4;
        case 0x29e1e8u: goto label_29e1e8;
        case 0x29e1ecu: goto label_29e1ec;
        case 0x29e1f0u: goto label_29e1f0;
        case 0x29e1f4u: goto label_29e1f4;
        case 0x29e1f8u: goto label_29e1f8;
        case 0x29e1fcu: goto label_29e1fc;
        case 0x29e200u: goto label_29e200;
        case 0x29e204u: goto label_29e204;
        case 0x29e208u: goto label_29e208;
        case 0x29e20cu: goto label_29e20c;
        case 0x29e210u: goto label_29e210;
        case 0x29e214u: goto label_29e214;
        case 0x29e218u: goto label_29e218;
        case 0x29e21cu: goto label_29e21c;
        case 0x29e220u: goto label_29e220;
        case 0x29e224u: goto label_29e224;
        case 0x29e228u: goto label_29e228;
        case 0x29e22cu: goto label_29e22c;
        case 0x29e230u: goto label_29e230;
        case 0x29e234u: goto label_29e234;
        case 0x29e238u: goto label_29e238;
        case 0x29e23cu: goto label_29e23c;
        case 0x29e240u: goto label_29e240;
        case 0x29e244u: goto label_29e244;
        case 0x29e248u: goto label_29e248;
        case 0x29e24cu: goto label_29e24c;
        case 0x29e250u: goto label_29e250;
        case 0x29e254u: goto label_29e254;
        case 0x29e258u: goto label_29e258;
        case 0x29e25cu: goto label_29e25c;
        case 0x29e260u: goto label_29e260;
        case 0x29e264u: goto label_29e264;
        case 0x29e268u: goto label_29e268;
        case 0x29e26cu: goto label_29e26c;
        case 0x29e270u: goto label_29e270;
        case 0x29e274u: goto label_29e274;
        case 0x29e278u: goto label_29e278;
        case 0x29e27cu: goto label_29e27c;
        case 0x29e280u: goto label_29e280;
        case 0x29e284u: goto label_29e284;
        case 0x29e288u: goto label_29e288;
        case 0x29e28cu: goto label_29e28c;
        case 0x29e290u: goto label_29e290;
        case 0x29e294u: goto label_29e294;
        case 0x29e298u: goto label_29e298;
        case 0x29e29cu: goto label_29e29c;
        case 0x29e2a0u: goto label_29e2a0;
        case 0x29e2a4u: goto label_29e2a4;
        case 0x29e2a8u: goto label_29e2a8;
        case 0x29e2acu: goto label_29e2ac;
        case 0x29e2b0u: goto label_29e2b0;
        case 0x29e2b4u: goto label_29e2b4;
        case 0x29e2b8u: goto label_29e2b8;
        case 0x29e2bcu: goto label_29e2bc;
        case 0x29e2c0u: goto label_29e2c0;
        case 0x29e2c4u: goto label_29e2c4;
        case 0x29e2c8u: goto label_29e2c8;
        case 0x29e2ccu: goto label_29e2cc;
        case 0x29e2d0u: goto label_29e2d0;
        case 0x29e2d4u: goto label_29e2d4;
        case 0x29e2d8u: goto label_29e2d8;
        case 0x29e2dcu: goto label_29e2dc;
        case 0x29e2e0u: goto label_29e2e0;
        case 0x29e2e4u: goto label_29e2e4;
        case 0x29e2e8u: goto label_29e2e8;
        case 0x29e2ecu: goto label_29e2ec;
        case 0x29e2f0u: goto label_29e2f0;
        case 0x29e2f4u: goto label_29e2f4;
        case 0x29e2f8u: goto label_29e2f8;
        case 0x29e2fcu: goto label_29e2fc;
        case 0x29e300u: goto label_29e300;
        case 0x29e304u: goto label_29e304;
        case 0x29e308u: goto label_29e308;
        case 0x29e30cu: goto label_29e30c;
        case 0x29e310u: goto label_29e310;
        case 0x29e314u: goto label_29e314;
        case 0x29e318u: goto label_29e318;
        case 0x29e31cu: goto label_29e31c;
        case 0x29e320u: goto label_29e320;
        case 0x29e324u: goto label_29e324;
        case 0x29e328u: goto label_29e328;
        case 0x29e32cu: goto label_29e32c;
        case 0x29e330u: goto label_29e330;
        case 0x29e334u: goto label_29e334;
        case 0x29e338u: goto label_29e338;
        case 0x29e33cu: goto label_29e33c;
        case 0x29e340u: goto label_29e340;
        case 0x29e344u: goto label_29e344;
        case 0x29e348u: goto label_29e348;
        case 0x29e34cu: goto label_29e34c;
        case 0x29e350u: goto label_29e350;
        case 0x29e354u: goto label_29e354;
        case 0x29e358u: goto label_29e358;
        case 0x29e35cu: goto label_29e35c;
        case 0x29e360u: goto label_29e360;
        case 0x29e364u: goto label_29e364;
        case 0x29e368u: goto label_29e368;
        case 0x29e36cu: goto label_29e36c;
        case 0x29e370u: goto label_29e370;
        case 0x29e374u: goto label_29e374;
        case 0x29e378u: goto label_29e378;
        case 0x29e37cu: goto label_29e37c;
        case 0x29e380u: goto label_29e380;
        case 0x29e384u: goto label_29e384;
        case 0x29e388u: goto label_29e388;
        case 0x29e38cu: goto label_29e38c;
        case 0x29e390u: goto label_29e390;
        case 0x29e394u: goto label_29e394;
        case 0x29e398u: goto label_29e398;
        case 0x29e39cu: goto label_29e39c;
        case 0x29e3a0u: goto label_29e3a0;
        case 0x29e3a4u: goto label_29e3a4;
        case 0x29e3a8u: goto label_29e3a8;
        case 0x29e3acu: goto label_29e3ac;
        case 0x29e3b0u: goto label_29e3b0;
        case 0x29e3b4u: goto label_29e3b4;
        case 0x29e3b8u: goto label_29e3b8;
        case 0x29e3bcu: goto label_29e3bc;
        case 0x29e3c0u: goto label_29e3c0;
        case 0x29e3c4u: goto label_29e3c4;
        case 0x29e3c8u: goto label_29e3c8;
        case 0x29e3ccu: goto label_29e3cc;
        case 0x29e3d0u: goto label_29e3d0;
        case 0x29e3d4u: goto label_29e3d4;
        case 0x29e3d8u: goto label_29e3d8;
        case 0x29e3dcu: goto label_29e3dc;
        case 0x29e3e0u: goto label_29e3e0;
        case 0x29e3e4u: goto label_29e3e4;
        case 0x29e3e8u: goto label_29e3e8;
        case 0x29e3ecu: goto label_29e3ec;
        case 0x29e3f0u: goto label_29e3f0;
        case 0x29e3f4u: goto label_29e3f4;
        case 0x29e3f8u: goto label_29e3f8;
        case 0x29e3fcu: goto label_29e3fc;
        case 0x29e400u: goto label_29e400;
        case 0x29e404u: goto label_29e404;
        case 0x29e408u: goto label_29e408;
        case 0x29e40cu: goto label_29e40c;
        case 0x29e410u: goto label_29e410;
        case 0x29e414u: goto label_29e414;
        case 0x29e418u: goto label_29e418;
        case 0x29e41cu: goto label_29e41c;
        case 0x29e420u: goto label_29e420;
        case 0x29e424u: goto label_29e424;
        case 0x29e428u: goto label_29e428;
        case 0x29e42cu: goto label_29e42c;
        case 0x29e430u: goto label_29e430;
        case 0x29e434u: goto label_29e434;
        case 0x29e438u: goto label_29e438;
        case 0x29e43cu: goto label_29e43c;
        case 0x29e440u: goto label_29e440;
        case 0x29e444u: goto label_29e444;
        case 0x29e448u: goto label_29e448;
        case 0x29e44cu: goto label_29e44c;
        case 0x29e450u: goto label_29e450;
        case 0x29e454u: goto label_29e454;
        case 0x29e458u: goto label_29e458;
        case 0x29e45cu: goto label_29e45c;
        case 0x29e460u: goto label_29e460;
        case 0x29e464u: goto label_29e464;
        case 0x29e468u: goto label_29e468;
        case 0x29e46cu: goto label_29e46c;
        case 0x29e470u: goto label_29e470;
        case 0x29e474u: goto label_29e474;
        case 0x29e478u: goto label_29e478;
        case 0x29e47cu: goto label_29e47c;
        case 0x29e480u: goto label_29e480;
        case 0x29e484u: goto label_29e484;
        case 0x29e488u: goto label_29e488;
        case 0x29e48cu: goto label_29e48c;
        case 0x29e490u: goto label_29e490;
        case 0x29e494u: goto label_29e494;
        case 0x29e498u: goto label_29e498;
        case 0x29e49cu: goto label_29e49c;
        case 0x29e4a0u: goto label_29e4a0;
        case 0x29e4a4u: goto label_29e4a4;
        case 0x29e4a8u: goto label_29e4a8;
        case 0x29e4acu: goto label_29e4ac;
        case 0x29e4b0u: goto label_29e4b0;
        case 0x29e4b4u: goto label_29e4b4;
        case 0x29e4b8u: goto label_29e4b8;
        case 0x29e4bcu: goto label_29e4bc;
        case 0x29e4c0u: goto label_29e4c0;
        case 0x29e4c4u: goto label_29e4c4;
        case 0x29e4c8u: goto label_29e4c8;
        case 0x29e4ccu: goto label_29e4cc;
        case 0x29e4d0u: goto label_29e4d0;
        case 0x29e4d4u: goto label_29e4d4;
        case 0x29e4d8u: goto label_29e4d8;
        case 0x29e4dcu: goto label_29e4dc;
        case 0x29e4e0u: goto label_29e4e0;
        case 0x29e4e4u: goto label_29e4e4;
        case 0x29e4e8u: goto label_29e4e8;
        case 0x29e4ecu: goto label_29e4ec;
        case 0x29e4f0u: goto label_29e4f0;
        case 0x29e4f4u: goto label_29e4f4;
        case 0x29e4f8u: goto label_29e4f8;
        case 0x29e4fcu: goto label_29e4fc;
        case 0x29e500u: goto label_29e500;
        case 0x29e504u: goto label_29e504;
        case 0x29e508u: goto label_29e508;
        case 0x29e50cu: goto label_29e50c;
        case 0x29e510u: goto label_29e510;
        case 0x29e514u: goto label_29e514;
        case 0x29e518u: goto label_29e518;
        case 0x29e51cu: goto label_29e51c;
        case 0x29e520u: goto label_29e520;
        case 0x29e524u: goto label_29e524;
        case 0x29e528u: goto label_29e528;
        case 0x29e52cu: goto label_29e52c;
        case 0x29e530u: goto label_29e530;
        case 0x29e534u: goto label_29e534;
        case 0x29e538u: goto label_29e538;
        case 0x29e53cu: goto label_29e53c;
        case 0x29e540u: goto label_29e540;
        case 0x29e544u: goto label_29e544;
        case 0x29e548u: goto label_29e548;
        case 0x29e54cu: goto label_29e54c;
        case 0x29e550u: goto label_29e550;
        case 0x29e554u: goto label_29e554;
        case 0x29e558u: goto label_29e558;
        case 0x29e55cu: goto label_29e55c;
        case 0x29e560u: goto label_29e560;
        case 0x29e564u: goto label_29e564;
        case 0x29e568u: goto label_29e568;
        case 0x29e56cu: goto label_29e56c;
        case 0x29e570u: goto label_29e570;
        case 0x29e574u: goto label_29e574;
        case 0x29e578u: goto label_29e578;
        case 0x29e57cu: goto label_29e57c;
        case 0x29e580u: goto label_29e580;
        case 0x29e584u: goto label_29e584;
        case 0x29e588u: goto label_29e588;
        case 0x29e58cu: goto label_29e58c;
        case 0x29e590u: goto label_29e590;
        case 0x29e594u: goto label_29e594;
        case 0x29e598u: goto label_29e598;
        case 0x29e59cu: goto label_29e59c;
        case 0x29e5a0u: goto label_29e5a0;
        case 0x29e5a4u: goto label_29e5a4;
        case 0x29e5a8u: goto label_29e5a8;
        case 0x29e5acu: goto label_29e5ac;
        case 0x29e5b0u: goto label_29e5b0;
        case 0x29e5b4u: goto label_29e5b4;
        case 0x29e5b8u: goto label_29e5b8;
        case 0x29e5bcu: goto label_29e5bc;
        case 0x29e5c0u: goto label_29e5c0;
        case 0x29e5c4u: goto label_29e5c4;
        case 0x29e5c8u: goto label_29e5c8;
        case 0x29e5ccu: goto label_29e5cc;
        case 0x29e5d0u: goto label_29e5d0;
        case 0x29e5d4u: goto label_29e5d4;
        case 0x29e5d8u: goto label_29e5d8;
        case 0x29e5dcu: goto label_29e5dc;
        case 0x29e5e0u: goto label_29e5e0;
        case 0x29e5e4u: goto label_29e5e4;
        case 0x29e5e8u: goto label_29e5e8;
        case 0x29e5ecu: goto label_29e5ec;
        case 0x29e5f0u: goto label_29e5f0;
        case 0x29e5f4u: goto label_29e5f4;
        case 0x29e5f8u: goto label_29e5f8;
        case 0x29e5fcu: goto label_29e5fc;
        case 0x29e600u: goto label_29e600;
        case 0x29e604u: goto label_29e604;
        case 0x29e608u: goto label_29e608;
        case 0x29e60cu: goto label_29e60c;
        case 0x29e610u: goto label_29e610;
        case 0x29e614u: goto label_29e614;
        case 0x29e618u: goto label_29e618;
        case 0x29e61cu: goto label_29e61c;
        case 0x29e620u: goto label_29e620;
        case 0x29e624u: goto label_29e624;
        case 0x29e628u: goto label_29e628;
        case 0x29e62cu: goto label_29e62c;
        case 0x29e630u: goto label_29e630;
        case 0x29e634u: goto label_29e634;
        case 0x29e638u: goto label_29e638;
        case 0x29e63cu: goto label_29e63c;
        case 0x29e640u: goto label_29e640;
        case 0x29e644u: goto label_29e644;
        case 0x29e648u: goto label_29e648;
        case 0x29e64cu: goto label_29e64c;
        case 0x29e650u: goto label_29e650;
        case 0x29e654u: goto label_29e654;
        case 0x29e658u: goto label_29e658;
        case 0x29e65cu: goto label_29e65c;
        case 0x29e660u: goto label_29e660;
        case 0x29e664u: goto label_29e664;
        case 0x29e668u: goto label_29e668;
        case 0x29e66cu: goto label_29e66c;
        case 0x29e670u: goto label_29e670;
        case 0x29e674u: goto label_29e674;
        case 0x29e678u: goto label_29e678;
        case 0x29e67cu: goto label_29e67c;
        case 0x29e680u: goto label_29e680;
        case 0x29e684u: goto label_29e684;
        case 0x29e688u: goto label_29e688;
        case 0x29e68cu: goto label_29e68c;
        case 0x29e690u: goto label_29e690;
        case 0x29e694u: goto label_29e694;
        case 0x29e698u: goto label_29e698;
        case 0x29e69cu: goto label_29e69c;
        case 0x29e6a0u: goto label_29e6a0;
        case 0x29e6a4u: goto label_29e6a4;
        case 0x29e6a8u: goto label_29e6a8;
        case 0x29e6acu: goto label_29e6ac;
        default: break;
    }

    ctx->pc = 0x29dfe0u;

label_29dfe0:
    // 0x29dfe0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29dfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_29dfe4:
    // 0x29dfe4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29dfe8:
    // 0x29dfe8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29dfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_29dfec:
    // 0x29dfec: 0x2463f7b0  addiu       $v1, $v1, -0x850
    ctx->pc = 0x29dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965168));
label_29dff0:
    // 0x29dff0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29dff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_29dff4:
    // 0x29dff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29dff8:
    // 0x29dff8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_29dffc:
    // 0x29dffc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29dffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29e000:
    // 0x29e000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29e000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29e004:
    // 0x29e004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29e008:
    // 0x29e008: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29e008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e00c:
    // 0x29e00c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29e010:
    // 0x29e010: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29e010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e014:
    // 0x29e014: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x29e014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_29e018:
    // 0x29e018: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29e018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29e01c:
    // 0x29e01c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x29e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_29e020:
    // 0x29e020: 0x264300ac  addiu       $v1, $s2, 0xAC
    ctx->pc = 0x29e020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
label_29e024:
    // 0x29e024: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x29e024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_29e028:
    // 0x29e028: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x29e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_29e02c:
    // 0x29e02c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x29e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_29e030:
    // 0x29e030: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x29e030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_29e034:
    // 0x29e034: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x29e034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
label_29e038:
    // 0x29e038: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x29e038u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29e03c:
    // 0x29e03c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x29e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_29e040:
    // 0x29e040: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x29e040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e044:
    // 0x29e044: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x29e044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_29e048:
    // 0x29e048: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
label_29e04c:
    if (ctx->pc == 0x29E04Cu) {
        ctx->pc = 0x29E04Cu;
            // 0x29e04c: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x29E050u;
        goto label_29e050;
    }
    ctx->pc = 0x29E048u;
    {
        const bool branch_taken_0x29e048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E048u;
            // 0x29e04c: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e048) {
            ctx->pc = 0x29E178u;
            goto label_29e178;
        }
    }
    ctx->pc = 0x29E050u;
label_29e050:
    // 0x29e050: 0x2644002c  addiu       $a0, $s2, 0x2C
    ctx->pc = 0x29e050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_29e054:
    // 0x29e054: 0x644823  subu        $t1, $v1, $a0
    ctx->pc = 0x29e054u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29e058:
    // 0x29e058: 0x25280007  addiu       $t0, $t1, 0x7
    ctx->pc = 0x29e058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_29e05c:
    // 0x29e05c: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_29e060:
    if (ctx->pc == 0x29E060u) {
        ctx->pc = 0x29E060u;
            // 0x29e060: 0x838c3  sra         $a3, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 3));
        ctx->pc = 0x29E064u;
        goto label_29e064;
    }
    ctx->pc = 0x29E05Cu;
    {
        const bool branch_taken_0x29e05c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x29E060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E05Cu;
            // 0x29e060: 0x838c3  sra         $a3, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e05c) {
            ctx->pc = 0x29E06Cu;
            goto label_29e06c;
        }
    }
    ctx->pc = 0x29E064u;
label_29e064:
    // 0x29e064: 0x25030007  addiu       $v1, $t0, 0x7
    ctx->pc = 0x29e064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
label_29e068:
    // 0x29e068: 0x338c3  sra         $a3, $v1, 3
    ctx->pc = 0x29e068u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 3));
label_29e06c:
    // 0x29e06c: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x29e06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_29e070:
    // 0x29e070: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x29e070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
label_29e074:
    // 0x29e074: 0x14200034  bnez        $at, . + 4 + (0x34 << 2)
label_29e078:
    if (ctx->pc == 0x29E078u) {
        ctx->pc = 0x29E078u;
            // 0x29e078: 0x2645006c  addiu       $a1, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->pc = 0x29E07Cu;
        goto label_29e07c;
    }
    ctx->pc = 0x29E074u;
    {
        const bool branch_taken_0x29e074 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E074u;
            // 0x29e078: 0x2645006c  addiu       $a1, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e074) {
            ctx->pc = 0x29E148u;
            goto label_29e148;
        }
    }
    ctx->pc = 0x29E07Cu;
label_29e07c:
    // 0x29e07c: 0x264300ac  addiu       $v1, $s2, 0xAC
    ctx->pc = 0x29e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
label_29e080:
    // 0x29e080: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x29e080u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e084:
    // 0x29e084: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x29e084u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_29e088:
    // 0x29e088: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_29e08c:
    if (ctx->pc == 0x29E08Cu) {
        ctx->pc = 0x29E08Cu;
            // 0x29e08c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E090u;
        goto label_29e090;
    }
    ctx->pc = 0x29E088u;
    {
        const bool branch_taken_0x29e088 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E088u;
            // 0x29e08c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e088) {
            ctx->pc = 0x29E0BCu;
            goto label_29e0bc;
        }
    }
    ctx->pc = 0x29E090u;
label_29e090:
    // 0x29e090: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x29e090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_29e094:
    // 0x29e094: 0x1241824  and         $v1, $t1, $a0
    ctx->pc = 0x29e094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
label_29e098:
    // 0x29e098: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_29e09c:
    if (ctx->pc == 0x29E09Cu) {
        ctx->pc = 0x29E09Cu;
            // 0x29e09c: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x29E0A0u;
        goto label_29e0a0;
    }
    ctx->pc = 0x29E098u;
    {
        const bool branch_taken_0x29e098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E098u;
            // 0x29e09c: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e098) {
            ctx->pc = 0x29E0B0u;
            goto label_29e0b0;
        }
    }
    ctx->pc = 0x29E0A0u;
label_29e0a0:
    // 0x29e0a0: 0x1041824  and         $v1, $t0, $a0
    ctx->pc = 0x29e0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_29e0a4:
    // 0x29e0a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_29e0a8:
    if (ctx->pc == 0x29E0A8u) {
        ctx->pc = 0x29E0ACu;
        goto label_29e0ac;
    }
    ctx->pc = 0x29E0A4u;
    {
        const bool branch_taken_0x29e0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e0a4) {
            ctx->pc = 0x29E0B0u;
            goto label_29e0b0;
        }
    }
    ctx->pc = 0x29E0ACu;
label_29e0ac:
    // 0x29e0ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29e0acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e0b0:
    // 0x29e0b0: 0x11400002  beqz        $t2, . + 4 + (0x2 << 2)
label_29e0b4:
    if (ctx->pc == 0x29E0B4u) {
        ctx->pc = 0x29E0B8u;
        goto label_29e0b8;
    }
    ctx->pc = 0x29E0B0u;
    {
        const bool branch_taken_0x29e0b0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e0b0) {
            ctx->pc = 0x29E0BCu;
            goto label_29e0bc;
        }
    }
    ctx->pc = 0x29E0B8u;
label_29e0b8:
    // 0x29e0b8: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x29e0b8u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_29e0bc:
    // 0x29e0bc: 0x1160000c  beqz        $t3, . + 4 + (0xC << 2)
label_29e0c0:
    if (ctx->pc == 0x29E0C0u) {
        ctx->pc = 0x29E0C4u;
        goto label_29e0c4;
    }
    ctx->pc = 0x29E0BCu;
    {
        const bool branch_taken_0x29e0bc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e0bc) {
            ctx->pc = 0x29E0F0u;
            goto label_29e0f0;
        }
    }
    ctx->pc = 0x29E0C4u;
label_29e0c4:
    // 0x29e0c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_29e0c8:
    // 0x29e0c8: 0xe32024  and         $a0, $a3, $v1
    ctx->pc = 0x29e0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_29e0cc:
    // 0x29e0cc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_29e0d0:
    if (ctx->pc == 0x29E0D0u) {
        ctx->pc = 0x29E0D0u;
            // 0x29e0d0: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x29E0D4u;
        goto label_29e0d4;
    }
    ctx->pc = 0x29E0CCu;
    {
        const bool branch_taken_0x29e0cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E0CCu;
            // 0x29e0d0: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0cc) {
            ctx->pc = 0x29E0E4u;
            goto label_29e0e4;
        }
    }
    ctx->pc = 0x29E0D4u;
label_29e0d4:
    // 0x29e0d4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x29e0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_29e0d8:
    // 0x29e0d8: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_29e0dc:
    if (ctx->pc == 0x29E0DCu) {
        ctx->pc = 0x29E0E0u;
        goto label_29e0e0;
    }
    ctx->pc = 0x29E0D8u;
    {
        const bool branch_taken_0x29e0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29e0d8) {
            ctx->pc = 0x29E0E4u;
            goto label_29e0e4;
        }
    }
    ctx->pc = 0x29E0E0u;
label_29e0e0:
    // 0x29e0e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29e0e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e0e4:
    // 0x29e0e4: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_29e0e8:
    if (ctx->pc == 0x29E0E8u) {
        ctx->pc = 0x29E0ECu;
        goto label_29e0ec;
    }
    ctx->pc = 0x29E0E4u;
    {
        const bool branch_taken_0x29e0e4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e0e4) {
            ctx->pc = 0x29E0F0u;
            goto label_29e0f0;
        }
    }
    ctx->pc = 0x29E0ECu;
label_29e0ec:
    // 0x29e0ec: 0x640c0001  daddiu      $t4, $zero, 0x1
    ctx->pc = 0x29e0ecu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_29e0f0:
    // 0x29e0f0: 0x11800015  beqz        $t4, . + 4 + (0x15 << 2)
label_29e0f4:
    if (ctx->pc == 0x29E0F4u) {
        ctx->pc = 0x29E0F8u;
        goto label_29e0f8;
    }
    ctx->pc = 0x29E0F0u;
    {
        const bool branch_taken_0x29e0f0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e0f0) {
            ctx->pc = 0x29E148u;
            goto label_29e148;
        }
    }
    ctx->pc = 0x29E0F8u;
label_29e0f8:
    // 0x29e0f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_29e0fc:
    // 0x29e0fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_29e100:
    // 0x29e100: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x29e100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_29e104:
    // 0x29e104: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x29e104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_29e108:
    // 0x29e108: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x29e108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_29e10c:
    // 0x29e10c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x29e10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_29e110:
    // 0x29e110: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x29e110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_29e114:
    // 0x29e114: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x29e114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_29e118:
    // 0x29e118: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x29e118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_29e11c:
    // 0x29e11c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x29e11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_29e120:
    // 0x29e120: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x29e120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_29e124:
    // 0x29e124: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x29e124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_29e128:
    // 0x29e128: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x29e128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_29e12c:
    // 0x29e12c: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x29e12cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_29e130:
    // 0x29e130: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x29e130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_29e134:
    // 0x29e134: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x29e134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_29e138:
    // 0x29e138: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x29e138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_29e13c:
    // 0x29e13c: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x29e13cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_29e140:
    // 0x29e140: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
label_29e144:
    if (ctx->pc == 0x29E144u) {
        ctx->pc = 0x29E144u;
            // 0x29e144: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x29E148u;
        goto label_29e148;
    }
    ctx->pc = 0x29E140u;
    {
        const bool branch_taken_0x29e140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e140) {
            ctx->pc = 0x29E144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29E140u;
            // 0x29e144: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29E0FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e0fc;
        }
    }
    ctx->pc = 0x29E148u;
label_29e148:
    // 0x29e148: 0x264400ac  addiu       $a0, $s2, 0xAC
    ctx->pc = 0x29e148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
label_29e14c:
    // 0x29e14c: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x29e14cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_29e150:
    // 0x29e150: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_29e154:
    if (ctx->pc == 0x29E154u) {
        ctx->pc = 0x29E158u;
        goto label_29e158;
    }
    ctx->pc = 0x29E150u;
    {
        const bool branch_taken_0x29e150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e150) {
            ctx->pc = 0x29E178u;
            goto label_29e178;
        }
    }
    ctx->pc = 0x29E158u;
label_29e158:
    // 0x29e158: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_29e15c:
    // 0x29e15c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_29e160:
    // 0x29e160: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x29e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_29e164:
    // 0x29e164: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x29e164u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_29e168:
    // 0x29e168: 0x0  nop
    ctx->pc = 0x29e168u;
    // NOP
label_29e16c:
    // 0x29e16c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_29e170:
    if (ctx->pc == 0x29E170u) {
        ctx->pc = 0x29E174u;
        goto label_29e174;
    }
    ctx->pc = 0x29E16Cu;
    {
        const bool branch_taken_0x29e16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e16c) {
            ctx->pc = 0x29E158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e158;
        }
    }
    ctx->pc = 0x29E174u;
label_29e174:
    // 0x29e174: 0x0  nop
    ctx->pc = 0x29e174u;
    // NOP
label_29e178:
    // 0x29e178: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x29e178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29e17c:
    // 0x29e17c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x29e17cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_29e180:
    // 0x29e180: 0x320f809  jalr        $t9
label_29e184:
    if (ctx->pc == 0x29E184u) {
        ctx->pc = 0x29E184u;
            // 0x29e184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E188u;
        goto label_29e188;
    }
    ctx->pc = 0x29E180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29E188u);
        ctx->pc = 0x29E184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E180u;
            // 0x29e184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29E188u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29E188u; }
            if (ctx->pc != 0x29E188u) { return; }
        }
        }
    }
    ctx->pc = 0x29E188u;
label_29e188:
    // 0x29e188: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_29e18c:
    if (ctx->pc == 0x29E18Cu) {
        ctx->pc = 0x29E18Cu;
            // 0x29e18c: 0x3c010fff  lui         $at, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
        ctx->pc = 0x29E190u;
        goto label_29e190;
    }
    ctx->pc = 0x29E188u;
    {
        const bool branch_taken_0x29e188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e188) {
            ctx->pc = 0x29E18Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29E188u;
            // 0x29e18c: 0x3c010fff  lui         $at, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29E198u;
            goto label_29e198;
        }
    }
    ctx->pc = 0x29E190u;
label_29e190:
    // 0x29e190: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29e190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e194:
    // 0x29e194: 0x3c010fff  lui         $at, 0xFFF
    ctx->pc = 0x29e194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
label_29e198:
    // 0x29e198: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x29e198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_29e19c:
    // 0x29e19c: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x29e19cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_29e1a0:
    // 0x29e1a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_29e1a4:
    if (ctx->pc == 0x29E1A4u) {
        ctx->pc = 0x29E1A4u;
            // 0x29e1a4: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->pc = 0x29E1A8u;
        goto label_29e1a8;
    }
    ctx->pc = 0x29E1A0u;
    {
        const bool branch_taken_0x29e1a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E1A0u;
            // 0x29e1a4: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1a0) {
            ctx->pc = 0x29E1B0u;
            goto label_29e1b0;
        }
    }
    ctx->pc = 0x29E1A8u;
label_29e1a8:
    // 0x29e1a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_29e1ac:
    if (ctx->pc == 0x29E1ACu) {
        ctx->pc = 0x29E1ACu;
            // 0x29e1ac: 0xae500020  sw          $s0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
        ctx->pc = 0x29E1B0u;
        goto label_29e1b0;
    }
    ctx->pc = 0x29E1A8u;
    {
        const bool branch_taken_0x29e1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E1A8u;
            // 0x29e1ac: 0xae500020  sw          $s0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1a8) {
            ctx->pc = 0x29E1BCu;
            goto label_29e1bc;
        }
    }
    ctx->pc = 0x29E1B0u;
label_29e1b0:
    // 0x29e1b0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x29e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_29e1b4:
    // 0x29e1b4: 0x3450ffff  ori         $s0, $v0, 0xFFFF
    ctx->pc = 0x29e1b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_29e1b8:
    // 0x29e1b8: 0xae500020  sw          $s0, 0x20($s2)
    ctx->pc = 0x29e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
label_29e1bc:
    // 0x29e1bc: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x29e1bcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e1c0:
    // 0x29e1c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29e1c4:
    // 0x29e1c4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x29e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29e1c8:
    // 0x29e1c8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x29e1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_29e1cc:
    // 0x29e1cc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x29e1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_29e1d0:
    // 0x29e1d0: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x29e1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_29e1d4:
    // 0x29e1d4: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x29e1d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_29e1d8:
    // 0x29e1d8: 0x2409000b  addiu       $t1, $zero, 0xB
    ctx->pc = 0x29e1d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_29e1dc:
    // 0x29e1dc: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x29e1dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_29e1e0:
    // 0x29e1e0: 0x240b0009  addiu       $t3, $zero, 0x9
    ctx->pc = 0x29e1e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_29e1e4:
    // 0x29e1e4: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x29e1e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29e1e8:
    // 0x29e1e8: 0x240d0007  addiu       $t5, $zero, 0x7
    ctx->pc = 0x29e1e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_29e1ec:
    // 0x29e1ec: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x29e1ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_29e1f0:
    // 0x29e1f0: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x29e1f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_29e1f4:
    // 0x29e1f4: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x29e1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_29e1f8:
    // 0x29e1f8: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x29e1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29e1fc:
    // 0x29e1fc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x29e1fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29e200:
    // 0x29e200: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x29e200u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e204:
    // 0x29e204: 0x2b010009  slti        $at, $t8, 0x9
    ctx->pc = 0x29e204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)9) ? 1 : 0);
label_29e208:
    // 0x29e208: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_29e20c:
    if (ctx->pc == 0x29E20Cu) {
        ctx->pc = 0x29E210u;
        goto label_29e210;
    }
    ctx->pc = 0x29E208u;
    {
        const bool branch_taken_0x29e208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e208) {
            ctx->pc = 0x29E218u;
            goto label_29e218;
        }
    }
    ctx->pc = 0x29E210u;
label_29e210:
    // 0x29e210: 0x1000005d  b           . + 4 + (0x5D << 2)
label_29e214:
    if (ctx->pc == 0x29E214u) {
        ctx->pc = 0x29E214u;
            // 0x29e214: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E218u;
        goto label_29e218;
    }
    ctx->pc = 0x29E210u;
    {
        const bool branch_taken_0x29e210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E210u;
            // 0x29e214: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e210) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E218u;
label_29e218:
    // 0x29e218: 0x2b010011  slti        $at, $t8, 0x11
    ctx->pc = 0x29e218u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)17) ? 1 : 0);
label_29e21c:
    // 0x29e21c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e220:
    if (ctx->pc == 0x29E220u) {
        ctx->pc = 0x29E224u;
        goto label_29e224;
    }
    ctx->pc = 0x29E21Cu;
    {
        const bool branch_taken_0x29e21c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e21c) {
            ctx->pc = 0x29E230u;
            goto label_29e230;
        }
    }
    ctx->pc = 0x29E224u;
label_29e224:
    // 0x29e224: 0x10000058  b           . + 4 + (0x58 << 2)
label_29e228:
    if (ctx->pc == 0x29E228u) {
        ctx->pc = 0x29E228u;
            // 0x29e228: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E22Cu;
        goto label_29e22c;
    }
    ctx->pc = 0x29E224u;
    {
        const bool branch_taken_0x29e224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E224u;
            // 0x29e228: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e224) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E22Cu;
label_29e22c:
    // 0x29e22c: 0x0  nop
    ctx->pc = 0x29e22cu;
    // NOP
label_29e230:
    // 0x29e230: 0x2b010021  slti        $at, $t8, 0x21
    ctx->pc = 0x29e230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)33) ? 1 : 0);
label_29e234:
    // 0x29e234: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e238:
    if (ctx->pc == 0x29E238u) {
        ctx->pc = 0x29E23Cu;
        goto label_29e23c;
    }
    ctx->pc = 0x29E234u;
    {
        const bool branch_taken_0x29e234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e234) {
            ctx->pc = 0x29E248u;
            goto label_29e248;
        }
    }
    ctx->pc = 0x29E23Cu;
label_29e23c:
    // 0x29e23c: 0x10000052  b           . + 4 + (0x52 << 2)
label_29e240:
    if (ctx->pc == 0x29E240u) {
        ctx->pc = 0x29E240u;
            // 0x29e240: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E244u;
        goto label_29e244;
    }
    ctx->pc = 0x29E23Cu;
    {
        const bool branch_taken_0x29e23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E23Cu;
            // 0x29e240: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e23c) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E244u;
label_29e244:
    // 0x29e244: 0x0  nop
    ctx->pc = 0x29e244u;
    // NOP
label_29e248:
    // 0x29e248: 0x2b010031  slti        $at, $t8, 0x31
    ctx->pc = 0x29e248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)49) ? 1 : 0);
label_29e24c:
    // 0x29e24c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e250:
    if (ctx->pc == 0x29E250u) {
        ctx->pc = 0x29E254u;
        goto label_29e254;
    }
    ctx->pc = 0x29E24Cu;
    {
        const bool branch_taken_0x29e24c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e24c) {
            ctx->pc = 0x29E260u;
            goto label_29e260;
        }
    }
    ctx->pc = 0x29E254u;
label_29e254:
    // 0x29e254: 0x1000004c  b           . + 4 + (0x4C << 2)
label_29e258:
    if (ctx->pc == 0x29E258u) {
        ctx->pc = 0x29E258u;
            // 0x29e258: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E25Cu;
        goto label_29e25c;
    }
    ctx->pc = 0x29E254u;
    {
        const bool branch_taken_0x29e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E254u;
            // 0x29e258: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e254) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E25Cu;
label_29e25c:
    // 0x29e25c: 0x0  nop
    ctx->pc = 0x29e25cu;
    // NOP
label_29e260:
    // 0x29e260: 0x2b010041  slti        $at, $t8, 0x41
    ctx->pc = 0x29e260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)65) ? 1 : 0);
label_29e264:
    // 0x29e264: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e268:
    if (ctx->pc == 0x29E268u) {
        ctx->pc = 0x29E26Cu;
        goto label_29e26c;
    }
    ctx->pc = 0x29E264u;
    {
        const bool branch_taken_0x29e264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e264) {
            ctx->pc = 0x29E278u;
            goto label_29e278;
        }
    }
    ctx->pc = 0x29E26Cu;
label_29e26c:
    // 0x29e26c: 0x10000046  b           . + 4 + (0x46 << 2)
label_29e270:
    if (ctx->pc == 0x29E270u) {
        ctx->pc = 0x29E270u;
            // 0x29e270: 0x1e0a82d  daddu       $s5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E274u;
        goto label_29e274;
    }
    ctx->pc = 0x29E26Cu;
    {
        const bool branch_taken_0x29e26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E26Cu;
            // 0x29e270: 0x1e0a82d  daddu       $s5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e26c) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E274u;
label_29e274:
    // 0x29e274: 0x0  nop
    ctx->pc = 0x29e274u;
    // NOP
label_29e278:
    // 0x29e278: 0x2b010061  slti        $at, $t8, 0x61
    ctx->pc = 0x29e278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)97) ? 1 : 0);
label_29e27c:
    // 0x29e27c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e280:
    if (ctx->pc == 0x29E280u) {
        ctx->pc = 0x29E284u;
        goto label_29e284;
    }
    ctx->pc = 0x29E27Cu;
    {
        const bool branch_taken_0x29e27c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e27c) {
            ctx->pc = 0x29E290u;
            goto label_29e290;
        }
    }
    ctx->pc = 0x29E284u;
label_29e284:
    // 0x29e284: 0x10000040  b           . + 4 + (0x40 << 2)
label_29e288:
    if (ctx->pc == 0x29E288u) {
        ctx->pc = 0x29E288u;
            // 0x29e288: 0x1c0a82d  daddu       $s5, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E28Cu;
        goto label_29e28c;
    }
    ctx->pc = 0x29E284u;
    {
        const bool branch_taken_0x29e284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E284u;
            // 0x29e288: 0x1c0a82d  daddu       $s5, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e284) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E28Cu;
label_29e28c:
    // 0x29e28c: 0x0  nop
    ctx->pc = 0x29e28cu;
    // NOP
label_29e290:
    // 0x29e290: 0x2b010081  slti        $at, $t8, 0x81
    ctx->pc = 0x29e290u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)129) ? 1 : 0);
label_29e294:
    // 0x29e294: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e298:
    if (ctx->pc == 0x29E298u) {
        ctx->pc = 0x29E29Cu;
        goto label_29e29c;
    }
    ctx->pc = 0x29E294u;
    {
        const bool branch_taken_0x29e294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e294) {
            ctx->pc = 0x29E2A8u;
            goto label_29e2a8;
        }
    }
    ctx->pc = 0x29E29Cu;
label_29e29c:
    // 0x29e29c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_29e2a0:
    if (ctx->pc == 0x29E2A0u) {
        ctx->pc = 0x29E2A0u;
            // 0x29e2a0: 0x1a0a82d  daddu       $s5, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E2A4u;
        goto label_29e2a4;
    }
    ctx->pc = 0x29E29Cu;
    {
        const bool branch_taken_0x29e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E29Cu;
            // 0x29e2a0: 0x1a0a82d  daddu       $s5, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e29c) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E2A4u;
label_29e2a4:
    // 0x29e2a4: 0x0  nop
    ctx->pc = 0x29e2a4u;
    // NOP
label_29e2a8:
    // 0x29e2a8: 0x2b0100a1  slti        $at, $t8, 0xA1
    ctx->pc = 0x29e2a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)161) ? 1 : 0);
label_29e2ac:
    // 0x29e2ac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e2b0:
    if (ctx->pc == 0x29E2B0u) {
        ctx->pc = 0x29E2B4u;
        goto label_29e2b4;
    }
    ctx->pc = 0x29E2ACu;
    {
        const bool branch_taken_0x29e2ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e2ac) {
            ctx->pc = 0x29E2C0u;
            goto label_29e2c0;
        }
    }
    ctx->pc = 0x29E2B4u;
label_29e2b4:
    // 0x29e2b4: 0x10000034  b           . + 4 + (0x34 << 2)
label_29e2b8:
    if (ctx->pc == 0x29E2B8u) {
        ctx->pc = 0x29E2B8u;
            // 0x29e2b8: 0x180a82d  daddu       $s5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E2BCu;
        goto label_29e2bc;
    }
    ctx->pc = 0x29E2B4u;
    {
        const bool branch_taken_0x29e2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E2B4u;
            // 0x29e2b8: 0x180a82d  daddu       $s5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e2b4) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E2BCu;
label_29e2bc:
    // 0x29e2bc: 0x0  nop
    ctx->pc = 0x29e2bcu;
    // NOP
label_29e2c0:
    // 0x29e2c0: 0x2b0100c1  slti        $at, $t8, 0xC1
    ctx->pc = 0x29e2c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)193) ? 1 : 0);
label_29e2c4:
    // 0x29e2c4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e2c8:
    if (ctx->pc == 0x29E2C8u) {
        ctx->pc = 0x29E2CCu;
        goto label_29e2cc;
    }
    ctx->pc = 0x29E2C4u;
    {
        const bool branch_taken_0x29e2c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e2c4) {
            ctx->pc = 0x29E2D8u;
            goto label_29e2d8;
        }
    }
    ctx->pc = 0x29E2CCu;
label_29e2cc:
    // 0x29e2cc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_29e2d0:
    if (ctx->pc == 0x29E2D0u) {
        ctx->pc = 0x29E2D0u;
            // 0x29e2d0: 0x160a82d  daddu       $s5, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E2D4u;
        goto label_29e2d4;
    }
    ctx->pc = 0x29E2CCu;
    {
        const bool branch_taken_0x29e2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E2CCu;
            // 0x29e2d0: 0x160a82d  daddu       $s5, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e2cc) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E2D4u;
label_29e2d4:
    // 0x29e2d4: 0x0  nop
    ctx->pc = 0x29e2d4u;
    // NOP
label_29e2d8:
    // 0x29e2d8: 0x2b010101  slti        $at, $t8, 0x101
    ctx->pc = 0x29e2d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)257) ? 1 : 0);
label_29e2dc:
    // 0x29e2dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e2e0:
    if (ctx->pc == 0x29E2E0u) {
        ctx->pc = 0x29E2E4u;
        goto label_29e2e4;
    }
    ctx->pc = 0x29E2DCu;
    {
        const bool branch_taken_0x29e2dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e2dc) {
            ctx->pc = 0x29E2F0u;
            goto label_29e2f0;
        }
    }
    ctx->pc = 0x29E2E4u;
label_29e2e4:
    // 0x29e2e4: 0x10000028  b           . + 4 + (0x28 << 2)
label_29e2e8:
    if (ctx->pc == 0x29E2E8u) {
        ctx->pc = 0x29E2E8u;
            // 0x29e2e8: 0x140a82d  daddu       $s5, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E2ECu;
        goto label_29e2ec;
    }
    ctx->pc = 0x29E2E4u;
    {
        const bool branch_taken_0x29e2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E2E4u;
            // 0x29e2e8: 0x140a82d  daddu       $s5, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e2e4) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E2ECu;
label_29e2ec:
    // 0x29e2ec: 0x0  nop
    ctx->pc = 0x29e2ecu;
    // NOP
label_29e2f0:
    // 0x29e2f0: 0x2b010141  slti        $at, $t8, 0x141
    ctx->pc = 0x29e2f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)321) ? 1 : 0);
label_29e2f4:
    // 0x29e2f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e2f8:
    if (ctx->pc == 0x29E2F8u) {
        ctx->pc = 0x29E2FCu;
        goto label_29e2fc;
    }
    ctx->pc = 0x29E2F4u;
    {
        const bool branch_taken_0x29e2f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e2f4) {
            ctx->pc = 0x29E308u;
            goto label_29e308;
        }
    }
    ctx->pc = 0x29E2FCu;
label_29e2fc:
    // 0x29e2fc: 0x10000022  b           . + 4 + (0x22 << 2)
label_29e300:
    if (ctx->pc == 0x29E300u) {
        ctx->pc = 0x29E300u;
            // 0x29e300: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E304u;
        goto label_29e304;
    }
    ctx->pc = 0x29E2FCu;
    {
        const bool branch_taken_0x29e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E2FCu;
            // 0x29e300: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e2fc) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E304u;
label_29e304:
    // 0x29e304: 0x0  nop
    ctx->pc = 0x29e304u;
    // NOP
label_29e308:
    // 0x29e308: 0x2b010201  slti        $at, $t8, 0x201
    ctx->pc = 0x29e308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)513) ? 1 : 0);
label_29e30c:
    // 0x29e30c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e310:
    if (ctx->pc == 0x29E310u) {
        ctx->pc = 0x29E314u;
        goto label_29e314;
    }
    ctx->pc = 0x29E30Cu;
    {
        const bool branch_taken_0x29e30c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e30c) {
            ctx->pc = 0x29E320u;
            goto label_29e320;
        }
    }
    ctx->pc = 0x29E314u;
label_29e314:
    // 0x29e314: 0x1000001c  b           . + 4 + (0x1C << 2)
label_29e318:
    if (ctx->pc == 0x29E318u) {
        ctx->pc = 0x29E318u;
            // 0x29e318: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E31Cu;
        goto label_29e31c;
    }
    ctx->pc = 0x29E314u;
    {
        const bool branch_taken_0x29e314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E314u;
            // 0x29e318: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e314) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E31Cu;
label_29e31c:
    // 0x29e31c: 0x0  nop
    ctx->pc = 0x29e31cu;
    // NOP
label_29e320:
    // 0x29e320: 0x2b010401  slti        $at, $t8, 0x401
    ctx->pc = 0x29e320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)1025) ? 1 : 0);
label_29e324:
    // 0x29e324: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e328:
    if (ctx->pc == 0x29E328u) {
        ctx->pc = 0x29E32Cu;
        goto label_29e32c;
    }
    ctx->pc = 0x29E324u;
    {
        const bool branch_taken_0x29e324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e324) {
            ctx->pc = 0x29E338u;
            goto label_29e338;
        }
    }
    ctx->pc = 0x29E32Cu;
label_29e32c:
    // 0x29e32c: 0x10000016  b           . + 4 + (0x16 << 2)
label_29e330:
    if (ctx->pc == 0x29E330u) {
        ctx->pc = 0x29E330u;
            // 0x29e330: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E334u;
        goto label_29e334;
    }
    ctx->pc = 0x29E32Cu;
    {
        const bool branch_taken_0x29e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E32Cu;
            // 0x29e330: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e32c) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E334u;
label_29e334:
    // 0x29e334: 0x0  nop
    ctx->pc = 0x29e334u;
    // NOP
label_29e338:
    // 0x29e338: 0x2b010801  slti        $at, $t8, 0x801
    ctx->pc = 0x29e338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)2049) ? 1 : 0);
label_29e33c:
    // 0x29e33c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e340:
    if (ctx->pc == 0x29E340u) {
        ctx->pc = 0x29E344u;
        goto label_29e344;
    }
    ctx->pc = 0x29E33Cu;
    {
        const bool branch_taken_0x29e33c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e33c) {
            ctx->pc = 0x29E350u;
            goto label_29e350;
        }
    }
    ctx->pc = 0x29E344u;
label_29e344:
    // 0x29e344: 0x10000010  b           . + 4 + (0x10 << 2)
label_29e348:
    if (ctx->pc == 0x29E348u) {
        ctx->pc = 0x29E348u;
            // 0x29e348: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E34Cu;
        goto label_29e34c;
    }
    ctx->pc = 0x29E344u;
    {
        const bool branch_taken_0x29e344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E344u;
            // 0x29e348: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e344) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E34Cu;
label_29e34c:
    // 0x29e34c: 0x0  nop
    ctx->pc = 0x29e34cu;
    // NOP
label_29e350:
    // 0x29e350: 0x2b011001  slti        $at, $t8, 0x1001
    ctx->pc = 0x29e350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)4097) ? 1 : 0);
label_29e354:
    // 0x29e354: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e358:
    if (ctx->pc == 0x29E358u) {
        ctx->pc = 0x29E35Cu;
        goto label_29e35c;
    }
    ctx->pc = 0x29E354u;
    {
        const bool branch_taken_0x29e354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e354) {
            ctx->pc = 0x29E368u;
            goto label_29e368;
        }
    }
    ctx->pc = 0x29E35Cu;
label_29e35c:
    // 0x29e35c: 0x1000000a  b           . + 4 + (0xA << 2)
label_29e360:
    if (ctx->pc == 0x29E360u) {
        ctx->pc = 0x29E360u;
            // 0x29e360: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E364u;
        goto label_29e364;
    }
    ctx->pc = 0x29E35Cu;
    {
        const bool branch_taken_0x29e35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E35Cu;
            // 0x29e360: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e35c) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E364u;
label_29e364:
    // 0x29e364: 0x0  nop
    ctx->pc = 0x29e364u;
    // NOP
label_29e368:
    // 0x29e368: 0x2b012001  slti        $at, $t8, 0x2001
    ctx->pc = 0x29e368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)8193) ? 1 : 0);
label_29e36c:
    // 0x29e36c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e370:
    if (ctx->pc == 0x29E370u) {
        ctx->pc = 0x29E374u;
        goto label_29e374;
    }
    ctx->pc = 0x29E36Cu;
    {
        const bool branch_taken_0x29e36c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e36c) {
            ctx->pc = 0x29E380u;
            goto label_29e380;
        }
    }
    ctx->pc = 0x29E374u;
label_29e374:
    // 0x29e374: 0x10000004  b           . + 4 + (0x4 << 2)
label_29e378:
    if (ctx->pc == 0x29E378u) {
        ctx->pc = 0x29E378u;
            // 0x29e378: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E37Cu;
        goto label_29e37c;
    }
    ctx->pc = 0x29E374u;
    {
        const bool branch_taken_0x29e374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E374u;
            // 0x29e378: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e374) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E37Cu;
label_29e37c:
    // 0x29e37c: 0x0  nop
    ctx->pc = 0x29e37cu;
    // NOP
label_29e380:
    // 0x29e380: 0xac000000  sw          $zero, 0x0($zero)
    ctx->pc = 0x29e380u;
    WRITE32(ADD32(GPR_U32(ctx, 0), 0), GPR_U32(ctx, 0));
label_29e384:
    // 0x29e384: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x29e384u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_29e388:
    // 0x29e388: 0x2581021  addu        $v0, $s2, $t8
    ctx->pc = 0x29e388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 24)));
label_29e38c:
    // 0x29e38c: 0xa05500f0  sb          $s5, 0xF0($v0)
    ctx->pc = 0x29e38cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 240), (uint8_t)GPR_U32(ctx, 21));
label_29e390:
    // 0x29e390: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x29e390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_29e394:
    // 0x29e394: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x29e394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_29e398:
    // 0x29e398: 0xac5800ac  sw          $t8, 0xAC($v0)
    ctx->pc = 0x29e398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 24));
label_29e39c:
    // 0x29e39c: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x29e39cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
label_29e3a0:
    // 0x29e3a0: 0x2b010201  slti        $at, $t8, 0x201
    ctx->pc = 0x29e3a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)513) ? 1 : 0);
label_29e3a4:
    // 0x29e3a4: 0x5420ff98  bnel        $at, $zero, . + 4 + (-0x68 << 2)
label_29e3a8:
    if (ctx->pc == 0x29E3A8u) {
        ctx->pc = 0x29E3A8u;
            // 0x29e3a8: 0x2b010009  slti        $at, $t8, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->pc = 0x29E3ACu;
        goto label_29e3ac;
    }
    ctx->pc = 0x29E3A4u;
    {
        const bool branch_taken_0x29e3a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e3a4) {
            ctx->pc = 0x29E3A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29E3A4u;
            // 0x29e3a8: 0x2b010009  slti        $at, $t8, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29E208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e208;
        }
    }
    ctx->pc = 0x29E3ACu;
label_29e3ac:
    // 0x29e3ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e3b0:
    // 0x29e3b0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x29e3b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e3b4:
    // 0x29e3b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29e3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29e3b8:
    // 0x29e3b8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x29e3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29e3bc:
    // 0x29e3bc: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x29e3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_29e3c0:
    // 0x29e3c0: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x29e3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_29e3c4:
    // 0x29e3c4: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x29e3c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_29e3c8:
    // 0x29e3c8: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x29e3c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_29e3cc:
    // 0x29e3cc: 0x240b000b  addiu       $t3, $zero, 0xB
    ctx->pc = 0x29e3ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_29e3d0:
    // 0x29e3d0: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x29e3d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_29e3d4:
    // 0x29e3d4: 0x240d0009  addiu       $t5, $zero, 0x9
    ctx->pc = 0x29e3d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_29e3d8:
    // 0x29e3d8: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x29e3d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29e3dc:
    // 0x29e3dc: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x29e3dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_29e3e0:
    // 0x29e3e0: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x29e3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_29e3e4:
    // 0x29e3e4: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x29e3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_29e3e8:
    // 0x29e3e8: 0x24180004  addiu       $t8, $zero, 0x4
    ctx->pc = 0x29e3e8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_29e3ec:
    // 0x29e3ec: 0x24190003  addiu       $t9, $zero, 0x3
    ctx->pc = 0x29e3ecu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29e3f0:
    // 0x29e3f0: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x29e3f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29e3f4:
    // 0x29e3f4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x29e3f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e3f8:
    // 0x29e3f8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x29e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29e3fc:
    // 0x29e3fc: 0x4aa80  sll         $s5, $a0, 10
    ctx->pc = 0x29e3fcu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
label_29e400:
    // 0x29e400: 0x2aa10009  slti        $at, $s5, 0x9
    ctx->pc = 0x29e400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)9) ? 1 : 0);
label_29e404:
    // 0x29e404: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e408:
    if (ctx->pc == 0x29E408u) {
        ctx->pc = 0x29E40Cu;
        goto label_29e40c;
    }
    ctx->pc = 0x29E404u;
    {
        const bool branch_taken_0x29e404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e404) {
            ctx->pc = 0x29E418u;
            goto label_29e418;
        }
    }
    ctx->pc = 0x29E40Cu;
label_29e40c:
    // 0x29e40c: 0x1000005e  b           . + 4 + (0x5E << 2)
label_29e410:
    if (ctx->pc == 0x29E410u) {
        ctx->pc = 0x29E410u;
            // 0x29e410: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E414u;
        goto label_29e414;
    }
    ctx->pc = 0x29E40Cu;
    {
        const bool branch_taken_0x29e40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E40Cu;
            // 0x29e410: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e40c) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E414u;
label_29e414:
    // 0x29e414: 0x0  nop
    ctx->pc = 0x29e414u;
    // NOP
label_29e418:
    // 0x29e418: 0x2aa10011  slti        $at, $s5, 0x11
    ctx->pc = 0x29e418u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)17) ? 1 : 0);
label_29e41c:
    // 0x29e41c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e420:
    if (ctx->pc == 0x29E420u) {
        ctx->pc = 0x29E424u;
        goto label_29e424;
    }
    ctx->pc = 0x29E41Cu;
    {
        const bool branch_taken_0x29e41c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e41c) {
            ctx->pc = 0x29E430u;
            goto label_29e430;
        }
    }
    ctx->pc = 0x29E424u;
label_29e424:
    // 0x29e424: 0x10000058  b           . + 4 + (0x58 << 2)
label_29e428:
    if (ctx->pc == 0x29E428u) {
        ctx->pc = 0x29E428u;
            // 0x29e428: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E42Cu;
        goto label_29e42c;
    }
    ctx->pc = 0x29E424u;
    {
        const bool branch_taken_0x29e424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E424u;
            // 0x29e428: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e424) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E42Cu;
label_29e42c:
    // 0x29e42c: 0x0  nop
    ctx->pc = 0x29e42cu;
    // NOP
label_29e430:
    // 0x29e430: 0x2aa10021  slti        $at, $s5, 0x21
    ctx->pc = 0x29e430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)33) ? 1 : 0);
label_29e434:
    // 0x29e434: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e438:
    if (ctx->pc == 0x29E438u) {
        ctx->pc = 0x29E43Cu;
        goto label_29e43c;
    }
    ctx->pc = 0x29E434u;
    {
        const bool branch_taken_0x29e434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e434) {
            ctx->pc = 0x29E448u;
            goto label_29e448;
        }
    }
    ctx->pc = 0x29E43Cu;
label_29e43c:
    // 0x29e43c: 0x10000052  b           . + 4 + (0x52 << 2)
label_29e440:
    if (ctx->pc == 0x29E440u) {
        ctx->pc = 0x29E440u;
            // 0x29e440: 0x320202d  daddu       $a0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E444u;
        goto label_29e444;
    }
    ctx->pc = 0x29E43Cu;
    {
        const bool branch_taken_0x29e43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E43Cu;
            // 0x29e440: 0x320202d  daddu       $a0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e43c) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E444u;
label_29e444:
    // 0x29e444: 0x0  nop
    ctx->pc = 0x29e444u;
    // NOP
label_29e448:
    // 0x29e448: 0x2aa10031  slti        $at, $s5, 0x31
    ctx->pc = 0x29e448u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)49) ? 1 : 0);
label_29e44c:
    // 0x29e44c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e450:
    if (ctx->pc == 0x29E450u) {
        ctx->pc = 0x29E454u;
        goto label_29e454;
    }
    ctx->pc = 0x29E44Cu;
    {
        const bool branch_taken_0x29e44c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e44c) {
            ctx->pc = 0x29E460u;
            goto label_29e460;
        }
    }
    ctx->pc = 0x29E454u;
label_29e454:
    // 0x29e454: 0x1000004c  b           . + 4 + (0x4C << 2)
label_29e458:
    if (ctx->pc == 0x29E458u) {
        ctx->pc = 0x29E458u;
            // 0x29e458: 0x300202d  daddu       $a0, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E45Cu;
        goto label_29e45c;
    }
    ctx->pc = 0x29E454u;
    {
        const bool branch_taken_0x29e454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E454u;
            // 0x29e458: 0x300202d  daddu       $a0, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e454) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E45Cu;
label_29e45c:
    // 0x29e45c: 0x0  nop
    ctx->pc = 0x29e45cu;
    // NOP
label_29e460:
    // 0x29e460: 0x2aa10041  slti        $at, $s5, 0x41
    ctx->pc = 0x29e460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)65) ? 1 : 0);
label_29e464:
    // 0x29e464: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e468:
    if (ctx->pc == 0x29E468u) {
        ctx->pc = 0x29E46Cu;
        goto label_29e46c;
    }
    ctx->pc = 0x29E464u;
    {
        const bool branch_taken_0x29e464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e464) {
            ctx->pc = 0x29E478u;
            goto label_29e478;
        }
    }
    ctx->pc = 0x29E46Cu;
label_29e46c:
    // 0x29e46c: 0x10000046  b           . + 4 + (0x46 << 2)
label_29e470:
    if (ctx->pc == 0x29E470u) {
        ctx->pc = 0x29E470u;
            // 0x29e470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E474u;
        goto label_29e474;
    }
    ctx->pc = 0x29E46Cu;
    {
        const bool branch_taken_0x29e46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E46Cu;
            // 0x29e470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e46c) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E474u;
label_29e474:
    // 0x29e474: 0x0  nop
    ctx->pc = 0x29e474u;
    // NOP
label_29e478:
    // 0x29e478: 0x2aa10061  slti        $at, $s5, 0x61
    ctx->pc = 0x29e478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)97) ? 1 : 0);
label_29e47c:
    // 0x29e47c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e480:
    if (ctx->pc == 0x29E480u) {
        ctx->pc = 0x29E484u;
        goto label_29e484;
    }
    ctx->pc = 0x29E47Cu;
    {
        const bool branch_taken_0x29e47c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e47c) {
            ctx->pc = 0x29E490u;
            goto label_29e490;
        }
    }
    ctx->pc = 0x29E484u;
label_29e484:
    // 0x29e484: 0x10000040  b           . + 4 + (0x40 << 2)
label_29e488:
    if (ctx->pc == 0x29E488u) {
        ctx->pc = 0x29E488u;
            // 0x29e488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E48Cu;
        goto label_29e48c;
    }
    ctx->pc = 0x29E484u;
    {
        const bool branch_taken_0x29e484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E484u;
            // 0x29e488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e484) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E48Cu;
label_29e48c:
    // 0x29e48c: 0x0  nop
    ctx->pc = 0x29e48cu;
    // NOP
label_29e490:
    // 0x29e490: 0x2aa10081  slti        $at, $s5, 0x81
    ctx->pc = 0x29e490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)129) ? 1 : 0);
label_29e494:
    // 0x29e494: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e498:
    if (ctx->pc == 0x29E498u) {
        ctx->pc = 0x29E49Cu;
        goto label_29e49c;
    }
    ctx->pc = 0x29E494u;
    {
        const bool branch_taken_0x29e494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e494) {
            ctx->pc = 0x29E4A8u;
            goto label_29e4a8;
        }
    }
    ctx->pc = 0x29E49Cu;
label_29e49c:
    // 0x29e49c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_29e4a0:
    if (ctx->pc == 0x29E4A0u) {
        ctx->pc = 0x29E4A0u;
            // 0x29e4a0: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E4A4u;
        goto label_29e4a4;
    }
    ctx->pc = 0x29E49Cu;
    {
        const bool branch_taken_0x29e49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E49Cu;
            // 0x29e4a0: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e49c) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E4A4u;
label_29e4a4:
    // 0x29e4a4: 0x0  nop
    ctx->pc = 0x29e4a4u;
    // NOP
label_29e4a8:
    // 0x29e4a8: 0x2aa100a1  slti        $at, $s5, 0xA1
    ctx->pc = 0x29e4a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)161) ? 1 : 0);
label_29e4ac:
    // 0x29e4ac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e4b0:
    if (ctx->pc == 0x29E4B0u) {
        ctx->pc = 0x29E4B4u;
        goto label_29e4b4;
    }
    ctx->pc = 0x29E4ACu;
    {
        const bool branch_taken_0x29e4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e4ac) {
            ctx->pc = 0x29E4C0u;
            goto label_29e4c0;
        }
    }
    ctx->pc = 0x29E4B4u;
label_29e4b4:
    // 0x29e4b4: 0x10000034  b           . + 4 + (0x34 << 2)
label_29e4b8:
    if (ctx->pc == 0x29E4B8u) {
        ctx->pc = 0x29E4B8u;
            // 0x29e4b8: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E4BCu;
        goto label_29e4bc;
    }
    ctx->pc = 0x29E4B4u;
    {
        const bool branch_taken_0x29e4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E4B4u;
            // 0x29e4b8: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4b4) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E4BCu;
label_29e4bc:
    // 0x29e4bc: 0x0  nop
    ctx->pc = 0x29e4bcu;
    // NOP
label_29e4c0:
    // 0x29e4c0: 0x2aa100c1  slti        $at, $s5, 0xC1
    ctx->pc = 0x29e4c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)193) ? 1 : 0);
label_29e4c4:
    // 0x29e4c4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e4c8:
    if (ctx->pc == 0x29E4C8u) {
        ctx->pc = 0x29E4CCu;
        goto label_29e4cc;
    }
    ctx->pc = 0x29E4C4u;
    {
        const bool branch_taken_0x29e4c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e4c4) {
            ctx->pc = 0x29E4D8u;
            goto label_29e4d8;
        }
    }
    ctx->pc = 0x29E4CCu;
label_29e4cc:
    // 0x29e4cc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_29e4d0:
    if (ctx->pc == 0x29E4D0u) {
        ctx->pc = 0x29E4D0u;
            // 0x29e4d0: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E4D4u;
        goto label_29e4d4;
    }
    ctx->pc = 0x29E4CCu;
    {
        const bool branch_taken_0x29e4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E4CCu;
            // 0x29e4d0: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4cc) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E4D4u;
label_29e4d4:
    // 0x29e4d4: 0x0  nop
    ctx->pc = 0x29e4d4u;
    // NOP
label_29e4d8:
    // 0x29e4d8: 0x2aa10101  slti        $at, $s5, 0x101
    ctx->pc = 0x29e4d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)257) ? 1 : 0);
label_29e4dc:
    // 0x29e4dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e4e0:
    if (ctx->pc == 0x29E4E0u) {
        ctx->pc = 0x29E4E4u;
        goto label_29e4e4;
    }
    ctx->pc = 0x29E4DCu;
    {
        const bool branch_taken_0x29e4dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e4dc) {
            ctx->pc = 0x29E4F0u;
            goto label_29e4f0;
        }
    }
    ctx->pc = 0x29E4E4u;
label_29e4e4:
    // 0x29e4e4: 0x10000028  b           . + 4 + (0x28 << 2)
label_29e4e8:
    if (ctx->pc == 0x29E4E8u) {
        ctx->pc = 0x29E4E8u;
            // 0x29e4e8: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E4ECu;
        goto label_29e4ec;
    }
    ctx->pc = 0x29E4E4u;
    {
        const bool branch_taken_0x29e4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E4E4u;
            // 0x29e4e8: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4e4) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E4ECu;
label_29e4ec:
    // 0x29e4ec: 0x0  nop
    ctx->pc = 0x29e4ecu;
    // NOP
label_29e4f0:
    // 0x29e4f0: 0x2aa10141  slti        $at, $s5, 0x141
    ctx->pc = 0x29e4f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)321) ? 1 : 0);
label_29e4f4:
    // 0x29e4f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e4f8:
    if (ctx->pc == 0x29E4F8u) {
        ctx->pc = 0x29E4FCu;
        goto label_29e4fc;
    }
    ctx->pc = 0x29E4F4u;
    {
        const bool branch_taken_0x29e4f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e4f4) {
            ctx->pc = 0x29E508u;
            goto label_29e508;
        }
    }
    ctx->pc = 0x29E4FCu;
label_29e4fc:
    // 0x29e4fc: 0x10000022  b           . + 4 + (0x22 << 2)
label_29e500:
    if (ctx->pc == 0x29E500u) {
        ctx->pc = 0x29E500u;
            // 0x29e500: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E504u;
        goto label_29e504;
    }
    ctx->pc = 0x29E4FCu;
    {
        const bool branch_taken_0x29e4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E4FCu;
            // 0x29e500: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4fc) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E504u;
label_29e504:
    // 0x29e504: 0x0  nop
    ctx->pc = 0x29e504u;
    // NOP
label_29e508:
    // 0x29e508: 0x2aa10201  slti        $at, $s5, 0x201
    ctx->pc = 0x29e508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)513) ? 1 : 0);
label_29e50c:
    // 0x29e50c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e510:
    if (ctx->pc == 0x29E510u) {
        ctx->pc = 0x29E514u;
        goto label_29e514;
    }
    ctx->pc = 0x29E50Cu;
    {
        const bool branch_taken_0x29e50c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e50c) {
            ctx->pc = 0x29E520u;
            goto label_29e520;
        }
    }
    ctx->pc = 0x29E514u;
label_29e514:
    // 0x29e514: 0x1000001c  b           . + 4 + (0x1C << 2)
label_29e518:
    if (ctx->pc == 0x29E518u) {
        ctx->pc = 0x29E518u;
            // 0x29e518: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E51Cu;
        goto label_29e51c;
    }
    ctx->pc = 0x29E514u;
    {
        const bool branch_taken_0x29e514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E514u;
            // 0x29e518: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e514) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E51Cu;
label_29e51c:
    // 0x29e51c: 0x0  nop
    ctx->pc = 0x29e51cu;
    // NOP
label_29e520:
    // 0x29e520: 0x2aa10401  slti        $at, $s5, 0x401
    ctx->pc = 0x29e520u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)1025) ? 1 : 0);
label_29e524:
    // 0x29e524: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e528:
    if (ctx->pc == 0x29E528u) {
        ctx->pc = 0x29E52Cu;
        goto label_29e52c;
    }
    ctx->pc = 0x29E524u;
    {
        const bool branch_taken_0x29e524 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e524) {
            ctx->pc = 0x29E538u;
            goto label_29e538;
        }
    }
    ctx->pc = 0x29E52Cu;
label_29e52c:
    // 0x29e52c: 0x10000016  b           . + 4 + (0x16 << 2)
label_29e530:
    if (ctx->pc == 0x29E530u) {
        ctx->pc = 0x29E530u;
            // 0x29e530: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E534u;
        goto label_29e534;
    }
    ctx->pc = 0x29E52Cu;
    {
        const bool branch_taken_0x29e52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E52Cu;
            // 0x29e530: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e52c) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E534u;
label_29e534:
    // 0x29e534: 0x0  nop
    ctx->pc = 0x29e534u;
    // NOP
label_29e538:
    // 0x29e538: 0x2aa10801  slti        $at, $s5, 0x801
    ctx->pc = 0x29e538u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2049) ? 1 : 0);
label_29e53c:
    // 0x29e53c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e540:
    if (ctx->pc == 0x29E540u) {
        ctx->pc = 0x29E544u;
        goto label_29e544;
    }
    ctx->pc = 0x29E53Cu;
    {
        const bool branch_taken_0x29e53c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e53c) {
            ctx->pc = 0x29E550u;
            goto label_29e550;
        }
    }
    ctx->pc = 0x29E544u;
label_29e544:
    // 0x29e544: 0x10000010  b           . + 4 + (0x10 << 2)
label_29e548:
    if (ctx->pc == 0x29E548u) {
        ctx->pc = 0x29E548u;
            // 0x29e548: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E54Cu;
        goto label_29e54c;
    }
    ctx->pc = 0x29E544u;
    {
        const bool branch_taken_0x29e544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E544u;
            // 0x29e548: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e544) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E54Cu;
label_29e54c:
    // 0x29e54c: 0x0  nop
    ctx->pc = 0x29e54cu;
    // NOP
label_29e550:
    // 0x29e550: 0x2aa11001  slti        $at, $s5, 0x1001
    ctx->pc = 0x29e550u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4097) ? 1 : 0);
label_29e554:
    // 0x29e554: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e558:
    if (ctx->pc == 0x29E558u) {
        ctx->pc = 0x29E55Cu;
        goto label_29e55c;
    }
    ctx->pc = 0x29E554u;
    {
        const bool branch_taken_0x29e554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e554) {
            ctx->pc = 0x29E568u;
            goto label_29e568;
        }
    }
    ctx->pc = 0x29E55Cu;
label_29e55c:
    // 0x29e55c: 0x1000000a  b           . + 4 + (0xA << 2)
label_29e560:
    if (ctx->pc == 0x29E560u) {
        ctx->pc = 0x29E560u;
            // 0x29e560: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E564u;
        goto label_29e564;
    }
    ctx->pc = 0x29E55Cu;
    {
        const bool branch_taken_0x29e55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E55Cu;
            // 0x29e560: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e55c) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E564u;
label_29e564:
    // 0x29e564: 0x0  nop
    ctx->pc = 0x29e564u;
    // NOP
label_29e568:
    // 0x29e568: 0x2aa12001  slti        $at, $s5, 0x2001
    ctx->pc = 0x29e568u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8193) ? 1 : 0);
label_29e56c:
    // 0x29e56c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_29e570:
    if (ctx->pc == 0x29E570u) {
        ctx->pc = 0x29E574u;
        goto label_29e574;
    }
    ctx->pc = 0x29E56Cu;
    {
        const bool branch_taken_0x29e56c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e56c) {
            ctx->pc = 0x29E580u;
            goto label_29e580;
        }
    }
    ctx->pc = 0x29E574u;
label_29e574:
    // 0x29e574: 0x10000004  b           . + 4 + (0x4 << 2)
label_29e578:
    if (ctx->pc == 0x29E578u) {
        ctx->pc = 0x29E578u;
            // 0x29e578: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E57Cu;
        goto label_29e57c;
    }
    ctx->pc = 0x29E574u;
    {
        const bool branch_taken_0x29e574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E574u;
            // 0x29e578: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e574) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E57Cu;
label_29e57c:
    // 0x29e57c: 0x0  nop
    ctx->pc = 0x29e57cu;
    // NOP
label_29e580:
    // 0x29e580: 0xac000000  sw          $zero, 0x0($zero)
    ctx->pc = 0x29e580u;
    WRITE32(ADD32(GPR_U32(ctx, 0), 0), GPR_U32(ctx, 0));
label_29e584:
    // 0x29e584: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x29e584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e588:
    // 0x29e588: 0xac6402f4  sw          $a0, 0x2F4($v1)
    ctx->pc = 0x29e588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 756), GPR_U32(ctx, 4));
label_29e58c:
    // 0x29e58c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_29e590:
    // 0x29e590: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29e594:
    // 0x29e594: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x29e594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_29e598:
    // 0x29e598: 0xac9500ac  sw          $s5, 0xAC($a0)
    ctx->pc = 0x29e598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 21));
label_29e59c:
    // 0x29e59c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x29e59cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_29e5a0:
    // 0x29e5a0: 0x1480ff95  bnez        $a0, . + 4 + (-0x6B << 2)
label_29e5a4:
    if (ctx->pc == 0x29E5A4u) {
        ctx->pc = 0x29E5A4u;
            // 0x29e5a4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x29E5A8u;
        goto label_29e5a8;
    }
    ctx->pc = 0x29E5A0u;
    {
        const bool branch_taken_0x29e5a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E5A0u;
            // 0x29e5a4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e5a0) {
            ctx->pc = 0x29E3F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e3f8;
        }
    }
    ctx->pc = 0x29E5A8u;
label_29e5a8:
    // 0x29e5a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29e5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e5ac:
    // 0x29e5ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29e5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29e5b0:
    // 0x29e5b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29e5b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29e5b4:
    // 0x29e5b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29e5b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29e5b8:
    // 0x29e5b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29e5b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29e5bc:
    // 0x29e5bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29e5bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29e5c0:
    // 0x29e5c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29e5c4:
    // 0x29e5c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29e5c8:
    // 0x29e5c8: 0x3e00008  jr          $ra
label_29e5cc:
    if (ctx->pc == 0x29E5CCu) {
        ctx->pc = 0x29E5CCu;
            // 0x29e5cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x29E5D0u;
        goto label_29e5d0;
    }
    ctx->pc = 0x29E5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E5C8u;
            // 0x29e5cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E5D0u;
label_29e5d0:
    // 0x29e5d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29e5d4:
    // 0x29e5d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29e5d8:
    // 0x29e5d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29e5dc:
    // 0x29e5dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29e5e0:
    // 0x29e5e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29e5e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e5e4:
    // 0x29e5e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29e5e8:
    // 0x29e5e8: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x29e5e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29e5ec:
    // 0x29e5ec: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x29e5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_29e5f0:
    // 0x29e5f0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x29e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_29e5f4:
    // 0x29e5f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_29e5f8:
    if (ctx->pc == 0x29E5F8u) {
        ctx->pc = 0x29E5FCu;
        goto label_29e5fc;
    }
    ctx->pc = 0x29E5F4u;
    {
        const bool branch_taken_0x29e5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e5f4) {
            ctx->pc = 0x29E610u;
            goto label_29e610;
        }
    }
    ctx->pc = 0x29E5FCu;
label_29e5fc:
    // 0x29e5fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e600:
    // 0x29e600: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29e600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29e604:
    // 0x29e604: 0xc0a79ec  jal         func_29E7B0
label_29e608:
    if (ctx->pc == 0x29E608u) {
        ctx->pc = 0x29E608u;
            // 0x29e608: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29E60Cu;
        goto label_29e60c;
    }
    ctx->pc = 0x29E604u;
    SET_GPR_U32(ctx, 31, 0x29E60Cu);
    ctx->pc = 0x29E608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E604u;
            // 0x29e608: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E60Cu; }
        if (ctx->pc != 0x29E60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E60Cu; }
        if (ctx->pc != 0x29E60Cu) { return; }
    }
    ctx->pc = 0x29E60Cu;
label_29e60c:
    // 0x29e60c: 0x0  nop
    ctx->pc = 0x29e60cu;
    // NOP
label_29e610:
    // 0x29e610: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x29e610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_29e614:
    // 0x29e614: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
label_29e618:
    if (ctx->pc == 0x29E618u) {
        ctx->pc = 0x29E618u;
            // 0x29e618: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->pc = 0x29E61Cu;
        goto label_29e61c;
    }
    ctx->pc = 0x29E614u;
    {
        const bool branch_taken_0x29e614 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x29E618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E614u;
            // 0x29e618: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e614) {
            ctx->pc = 0x29E5F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e5f0;
        }
    }
    ctx->pc = 0x29E61Cu;
label_29e61c:
    // 0x29e61c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29e61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e620:
    // 0x29e620: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29e620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29e624:
    // 0x29e624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29e628:
    // 0x29e628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29e62c:
    // 0x29e62c: 0x3e00008  jr          $ra
label_29e630:
    if (ctx->pc == 0x29E630u) {
        ctx->pc = 0x29E630u;
            // 0x29e630: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x29E634u;
        goto label_29e634;
    }
    ctx->pc = 0x29E62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E62Cu;
            // 0x29e630: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E634u;
label_29e634:
    // 0x29e634: 0x0  nop
    ctx->pc = 0x29e634u;
    // NOP
label_29e638:
    // 0x29e638: 0x0  nop
    ctx->pc = 0x29e638u;
    // NOP
label_29e63c:
    // 0x29e63c: 0x0  nop
    ctx->pc = 0x29e63cu;
    // NOP
label_29e640:
    // 0x29e640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29e640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29e644:
    // 0x29e644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29e644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29e648:
    // 0x29e648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29e64c:
    // 0x29e64c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29e650:
    // 0x29e650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29e650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e654:
    // 0x29e654: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_29e658:
    if (ctx->pc == 0x29E658u) {
        ctx->pc = 0x29E658u;
            // 0x29e658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E65Cu;
        goto label_29e65c;
    }
    ctx->pc = 0x29E654u;
    {
        const bool branch_taken_0x29e654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E654u;
            // 0x29e658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e654) {
            ctx->pc = 0x29E698u;
            goto label_29e698;
        }
    }
    ctx->pc = 0x29E65Cu;
label_29e65c:
    // 0x29e65c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29e660:
    // 0x29e660: 0x2442f7b0  addiu       $v0, $v0, -0x850
    ctx->pc = 0x29e660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965168));
label_29e664:
    // 0x29e664: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29e664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29e668:
    // 0x29e668: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29e668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29e66c:
    // 0x29e66c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x29e66cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_29e670:
    // 0x29e670: 0x320f809  jalr        $t9
label_29e674:
    if (ctx->pc == 0x29E674u) {
        ctx->pc = 0x29E678u;
        goto label_29e678;
    }
    ctx->pc = 0x29E670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29E678u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29E678u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29E678u; }
            if (ctx->pc != 0x29E678u) { return; }
        }
        }
    }
    ctx->pc = 0x29E678u;
label_29e678:
    // 0x29e678: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x29e678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_29e67c:
    // 0x29e67c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29e67cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29e680:
    // 0x29e680: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
label_29e684:
    if (ctx->pc == 0x29E684u) {
        ctx->pc = 0x29E684u;
            // 0x29e684: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E688u;
        goto label_29e688;
    }
    ctx->pc = 0x29E680u;
    {
        const bool branch_taken_0x29e680 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29e680) {
            ctx->pc = 0x29E684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29E680u;
            // 0x29e684: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29E69Cu;
            goto label_29e69c;
        }
    }
    ctx->pc = 0x29E688u;
label_29e688:
    // 0x29e688: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x29e688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_29e68c:
    // 0x29e68c: 0x8c42da00  lw          $v0, -0x2600($v0)
    ctx->pc = 0x29e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957568)));
label_29e690:
    // 0x29e690: 0x40f809  jalr        $v0
label_29e694:
    if (ctx->pc == 0x29E694u) {
        ctx->pc = 0x29E694u;
            // 0x29e694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E698u;
        goto label_29e698;
    }
    ctx->pc = 0x29E690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29E698u);
        ctx->pc = 0x29E694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E690u;
            // 0x29e694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29E698u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29E698u; }
            if (ctx->pc != 0x29E698u) { return; }
        }
        }
    }
    ctx->pc = 0x29E698u;
label_29e698:
    // 0x29e698: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29e698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29e69c:
    // 0x29e69c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29e69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e6a0:
    // 0x29e6a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29e6a4:
    // 0x29e6a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29e6a8:
    // 0x29e6a8: 0x3e00008  jr          $ra
label_29e6ac:
    if (ctx->pc == 0x29E6ACu) {
        ctx->pc = 0x29E6ACu;
            // 0x29e6ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29E6B0u;
        goto label_fallthrough_0x29e6a8;
    }
    ctx->pc = 0x29E6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E6A8u;
            // 0x29e6ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29e6a8:
    ctx->pc = 0x29E6B0u;
}
