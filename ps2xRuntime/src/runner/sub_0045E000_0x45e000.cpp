#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045E000
// Address: 0x45e000 - 0x45e800
void sub_0045E000_0x45e000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E000_0x45e000");
#endif

    switch (ctx->pc) {
        case 0x45e000u: goto label_45e000;
        case 0x45e004u: goto label_45e004;
        case 0x45e008u: goto label_45e008;
        case 0x45e00cu: goto label_45e00c;
        case 0x45e010u: goto label_45e010;
        case 0x45e014u: goto label_45e014;
        case 0x45e018u: goto label_45e018;
        case 0x45e01cu: goto label_45e01c;
        case 0x45e020u: goto label_45e020;
        case 0x45e024u: goto label_45e024;
        case 0x45e028u: goto label_45e028;
        case 0x45e02cu: goto label_45e02c;
        case 0x45e030u: goto label_45e030;
        case 0x45e034u: goto label_45e034;
        case 0x45e038u: goto label_45e038;
        case 0x45e03cu: goto label_45e03c;
        case 0x45e040u: goto label_45e040;
        case 0x45e044u: goto label_45e044;
        case 0x45e048u: goto label_45e048;
        case 0x45e04cu: goto label_45e04c;
        case 0x45e050u: goto label_45e050;
        case 0x45e054u: goto label_45e054;
        case 0x45e058u: goto label_45e058;
        case 0x45e05cu: goto label_45e05c;
        case 0x45e060u: goto label_45e060;
        case 0x45e064u: goto label_45e064;
        case 0x45e068u: goto label_45e068;
        case 0x45e06cu: goto label_45e06c;
        case 0x45e070u: goto label_45e070;
        case 0x45e074u: goto label_45e074;
        case 0x45e078u: goto label_45e078;
        case 0x45e07cu: goto label_45e07c;
        case 0x45e080u: goto label_45e080;
        case 0x45e084u: goto label_45e084;
        case 0x45e088u: goto label_45e088;
        case 0x45e08cu: goto label_45e08c;
        case 0x45e090u: goto label_45e090;
        case 0x45e094u: goto label_45e094;
        case 0x45e098u: goto label_45e098;
        case 0x45e09cu: goto label_45e09c;
        case 0x45e0a0u: goto label_45e0a0;
        case 0x45e0a4u: goto label_45e0a4;
        case 0x45e0a8u: goto label_45e0a8;
        case 0x45e0acu: goto label_45e0ac;
        case 0x45e0b0u: goto label_45e0b0;
        case 0x45e0b4u: goto label_45e0b4;
        case 0x45e0b8u: goto label_45e0b8;
        case 0x45e0bcu: goto label_45e0bc;
        case 0x45e0c0u: goto label_45e0c0;
        case 0x45e0c4u: goto label_45e0c4;
        case 0x45e0c8u: goto label_45e0c8;
        case 0x45e0ccu: goto label_45e0cc;
        case 0x45e0d0u: goto label_45e0d0;
        case 0x45e0d4u: goto label_45e0d4;
        case 0x45e0d8u: goto label_45e0d8;
        case 0x45e0dcu: goto label_45e0dc;
        case 0x45e0e0u: goto label_45e0e0;
        case 0x45e0e4u: goto label_45e0e4;
        case 0x45e0e8u: goto label_45e0e8;
        case 0x45e0ecu: goto label_45e0ec;
        case 0x45e0f0u: goto label_45e0f0;
        case 0x45e0f4u: goto label_45e0f4;
        case 0x45e0f8u: goto label_45e0f8;
        case 0x45e0fcu: goto label_45e0fc;
        case 0x45e100u: goto label_45e100;
        case 0x45e104u: goto label_45e104;
        case 0x45e108u: goto label_45e108;
        case 0x45e10cu: goto label_45e10c;
        case 0x45e110u: goto label_45e110;
        case 0x45e114u: goto label_45e114;
        case 0x45e118u: goto label_45e118;
        case 0x45e11cu: goto label_45e11c;
        case 0x45e120u: goto label_45e120;
        case 0x45e124u: goto label_45e124;
        case 0x45e128u: goto label_45e128;
        case 0x45e12cu: goto label_45e12c;
        case 0x45e130u: goto label_45e130;
        case 0x45e134u: goto label_45e134;
        case 0x45e138u: goto label_45e138;
        case 0x45e13cu: goto label_45e13c;
        case 0x45e140u: goto label_45e140;
        case 0x45e144u: goto label_45e144;
        case 0x45e148u: goto label_45e148;
        case 0x45e14cu: goto label_45e14c;
        case 0x45e150u: goto label_45e150;
        case 0x45e154u: goto label_45e154;
        case 0x45e158u: goto label_45e158;
        case 0x45e15cu: goto label_45e15c;
        case 0x45e160u: goto label_45e160;
        case 0x45e164u: goto label_45e164;
        case 0x45e168u: goto label_45e168;
        case 0x45e16cu: goto label_45e16c;
        case 0x45e170u: goto label_45e170;
        case 0x45e174u: goto label_45e174;
        case 0x45e178u: goto label_45e178;
        case 0x45e17cu: goto label_45e17c;
        case 0x45e180u: goto label_45e180;
        case 0x45e184u: goto label_45e184;
        case 0x45e188u: goto label_45e188;
        case 0x45e18cu: goto label_45e18c;
        case 0x45e190u: goto label_45e190;
        case 0x45e194u: goto label_45e194;
        case 0x45e198u: goto label_45e198;
        case 0x45e19cu: goto label_45e19c;
        case 0x45e1a0u: goto label_45e1a0;
        case 0x45e1a4u: goto label_45e1a4;
        case 0x45e1a8u: goto label_45e1a8;
        case 0x45e1acu: goto label_45e1ac;
        case 0x45e1b0u: goto label_45e1b0;
        case 0x45e1b4u: goto label_45e1b4;
        case 0x45e1b8u: goto label_45e1b8;
        case 0x45e1bcu: goto label_45e1bc;
        case 0x45e1c0u: goto label_45e1c0;
        case 0x45e1c4u: goto label_45e1c4;
        case 0x45e1c8u: goto label_45e1c8;
        case 0x45e1ccu: goto label_45e1cc;
        case 0x45e1d0u: goto label_45e1d0;
        case 0x45e1d4u: goto label_45e1d4;
        case 0x45e1d8u: goto label_45e1d8;
        case 0x45e1dcu: goto label_45e1dc;
        case 0x45e1e0u: goto label_45e1e0;
        case 0x45e1e4u: goto label_45e1e4;
        case 0x45e1e8u: goto label_45e1e8;
        case 0x45e1ecu: goto label_45e1ec;
        case 0x45e1f0u: goto label_45e1f0;
        case 0x45e1f4u: goto label_45e1f4;
        case 0x45e1f8u: goto label_45e1f8;
        case 0x45e1fcu: goto label_45e1fc;
        case 0x45e200u: goto label_45e200;
        case 0x45e204u: goto label_45e204;
        case 0x45e208u: goto label_45e208;
        case 0x45e20cu: goto label_45e20c;
        case 0x45e210u: goto label_45e210;
        case 0x45e214u: goto label_45e214;
        case 0x45e218u: goto label_45e218;
        case 0x45e21cu: goto label_45e21c;
        case 0x45e220u: goto label_45e220;
        case 0x45e224u: goto label_45e224;
        case 0x45e228u: goto label_45e228;
        case 0x45e22cu: goto label_45e22c;
        case 0x45e230u: goto label_45e230;
        case 0x45e234u: goto label_45e234;
        case 0x45e238u: goto label_45e238;
        case 0x45e23cu: goto label_45e23c;
        case 0x45e240u: goto label_45e240;
        case 0x45e244u: goto label_45e244;
        case 0x45e248u: goto label_45e248;
        case 0x45e24cu: goto label_45e24c;
        case 0x45e250u: goto label_45e250;
        case 0x45e254u: goto label_45e254;
        case 0x45e258u: goto label_45e258;
        case 0x45e25cu: goto label_45e25c;
        case 0x45e260u: goto label_45e260;
        case 0x45e264u: goto label_45e264;
        case 0x45e268u: goto label_45e268;
        case 0x45e26cu: goto label_45e26c;
        case 0x45e270u: goto label_45e270;
        case 0x45e274u: goto label_45e274;
        case 0x45e278u: goto label_45e278;
        case 0x45e27cu: goto label_45e27c;
        case 0x45e280u: goto label_45e280;
        case 0x45e284u: goto label_45e284;
        case 0x45e288u: goto label_45e288;
        case 0x45e28cu: goto label_45e28c;
        case 0x45e290u: goto label_45e290;
        case 0x45e294u: goto label_45e294;
        case 0x45e298u: goto label_45e298;
        case 0x45e29cu: goto label_45e29c;
        case 0x45e2a0u: goto label_45e2a0;
        case 0x45e2a4u: goto label_45e2a4;
        case 0x45e2a8u: goto label_45e2a8;
        case 0x45e2acu: goto label_45e2ac;
        case 0x45e2b0u: goto label_45e2b0;
        case 0x45e2b4u: goto label_45e2b4;
        case 0x45e2b8u: goto label_45e2b8;
        case 0x45e2bcu: goto label_45e2bc;
        case 0x45e2c0u: goto label_45e2c0;
        case 0x45e2c4u: goto label_45e2c4;
        case 0x45e2c8u: goto label_45e2c8;
        case 0x45e2ccu: goto label_45e2cc;
        case 0x45e2d0u: goto label_45e2d0;
        case 0x45e2d4u: goto label_45e2d4;
        case 0x45e2d8u: goto label_45e2d8;
        case 0x45e2dcu: goto label_45e2dc;
        case 0x45e2e0u: goto label_45e2e0;
        case 0x45e2e4u: goto label_45e2e4;
        case 0x45e2e8u: goto label_45e2e8;
        case 0x45e2ecu: goto label_45e2ec;
        case 0x45e2f0u: goto label_45e2f0;
        case 0x45e2f4u: goto label_45e2f4;
        case 0x45e2f8u: goto label_45e2f8;
        case 0x45e2fcu: goto label_45e2fc;
        case 0x45e300u: goto label_45e300;
        case 0x45e304u: goto label_45e304;
        case 0x45e308u: goto label_45e308;
        case 0x45e30cu: goto label_45e30c;
        case 0x45e310u: goto label_45e310;
        case 0x45e314u: goto label_45e314;
        case 0x45e318u: goto label_45e318;
        case 0x45e31cu: goto label_45e31c;
        case 0x45e320u: goto label_45e320;
        case 0x45e324u: goto label_45e324;
        case 0x45e328u: goto label_45e328;
        case 0x45e32cu: goto label_45e32c;
        case 0x45e330u: goto label_45e330;
        case 0x45e334u: goto label_45e334;
        case 0x45e338u: goto label_45e338;
        case 0x45e33cu: goto label_45e33c;
        case 0x45e340u: goto label_45e340;
        case 0x45e344u: goto label_45e344;
        case 0x45e348u: goto label_45e348;
        case 0x45e34cu: goto label_45e34c;
        case 0x45e350u: goto label_45e350;
        case 0x45e354u: goto label_45e354;
        case 0x45e358u: goto label_45e358;
        case 0x45e35cu: goto label_45e35c;
        case 0x45e360u: goto label_45e360;
        case 0x45e364u: goto label_45e364;
        case 0x45e368u: goto label_45e368;
        case 0x45e36cu: goto label_45e36c;
        case 0x45e370u: goto label_45e370;
        case 0x45e374u: goto label_45e374;
        case 0x45e378u: goto label_45e378;
        case 0x45e37cu: goto label_45e37c;
        case 0x45e380u: goto label_45e380;
        case 0x45e384u: goto label_45e384;
        case 0x45e388u: goto label_45e388;
        case 0x45e38cu: goto label_45e38c;
        case 0x45e390u: goto label_45e390;
        case 0x45e394u: goto label_45e394;
        case 0x45e398u: goto label_45e398;
        case 0x45e39cu: goto label_45e39c;
        case 0x45e3a0u: goto label_45e3a0;
        case 0x45e3a4u: goto label_45e3a4;
        case 0x45e3a8u: goto label_45e3a8;
        case 0x45e3acu: goto label_45e3ac;
        case 0x45e3b0u: goto label_45e3b0;
        case 0x45e3b4u: goto label_45e3b4;
        case 0x45e3b8u: goto label_45e3b8;
        case 0x45e3bcu: goto label_45e3bc;
        case 0x45e3c0u: goto label_45e3c0;
        case 0x45e3c4u: goto label_45e3c4;
        case 0x45e3c8u: goto label_45e3c8;
        case 0x45e3ccu: goto label_45e3cc;
        case 0x45e3d0u: goto label_45e3d0;
        case 0x45e3d4u: goto label_45e3d4;
        case 0x45e3d8u: goto label_45e3d8;
        case 0x45e3dcu: goto label_45e3dc;
        case 0x45e3e0u: goto label_45e3e0;
        case 0x45e3e4u: goto label_45e3e4;
        case 0x45e3e8u: goto label_45e3e8;
        case 0x45e3ecu: goto label_45e3ec;
        case 0x45e3f0u: goto label_45e3f0;
        case 0x45e3f4u: goto label_45e3f4;
        case 0x45e3f8u: goto label_45e3f8;
        case 0x45e3fcu: goto label_45e3fc;
        case 0x45e400u: goto label_45e400;
        case 0x45e404u: goto label_45e404;
        case 0x45e408u: goto label_45e408;
        case 0x45e40cu: goto label_45e40c;
        case 0x45e410u: goto label_45e410;
        case 0x45e414u: goto label_45e414;
        case 0x45e418u: goto label_45e418;
        case 0x45e41cu: goto label_45e41c;
        case 0x45e420u: goto label_45e420;
        case 0x45e424u: goto label_45e424;
        case 0x45e428u: goto label_45e428;
        case 0x45e42cu: goto label_45e42c;
        case 0x45e430u: goto label_45e430;
        case 0x45e434u: goto label_45e434;
        case 0x45e438u: goto label_45e438;
        case 0x45e43cu: goto label_45e43c;
        case 0x45e440u: goto label_45e440;
        case 0x45e444u: goto label_45e444;
        case 0x45e448u: goto label_45e448;
        case 0x45e44cu: goto label_45e44c;
        case 0x45e450u: goto label_45e450;
        case 0x45e454u: goto label_45e454;
        case 0x45e458u: goto label_45e458;
        case 0x45e45cu: goto label_45e45c;
        case 0x45e460u: goto label_45e460;
        case 0x45e464u: goto label_45e464;
        case 0x45e468u: goto label_45e468;
        case 0x45e46cu: goto label_45e46c;
        case 0x45e470u: goto label_45e470;
        case 0x45e474u: goto label_45e474;
        case 0x45e478u: goto label_45e478;
        case 0x45e47cu: goto label_45e47c;
        case 0x45e480u: goto label_45e480;
        case 0x45e484u: goto label_45e484;
        case 0x45e488u: goto label_45e488;
        case 0x45e48cu: goto label_45e48c;
        case 0x45e490u: goto label_45e490;
        case 0x45e494u: goto label_45e494;
        case 0x45e498u: goto label_45e498;
        case 0x45e49cu: goto label_45e49c;
        case 0x45e4a0u: goto label_45e4a0;
        case 0x45e4a4u: goto label_45e4a4;
        case 0x45e4a8u: goto label_45e4a8;
        case 0x45e4acu: goto label_45e4ac;
        case 0x45e4b0u: goto label_45e4b0;
        case 0x45e4b4u: goto label_45e4b4;
        case 0x45e4b8u: goto label_45e4b8;
        case 0x45e4bcu: goto label_45e4bc;
        case 0x45e4c0u: goto label_45e4c0;
        case 0x45e4c4u: goto label_45e4c4;
        case 0x45e4c8u: goto label_45e4c8;
        case 0x45e4ccu: goto label_45e4cc;
        case 0x45e4d0u: goto label_45e4d0;
        case 0x45e4d4u: goto label_45e4d4;
        case 0x45e4d8u: goto label_45e4d8;
        case 0x45e4dcu: goto label_45e4dc;
        case 0x45e4e0u: goto label_45e4e0;
        case 0x45e4e4u: goto label_45e4e4;
        case 0x45e4e8u: goto label_45e4e8;
        case 0x45e4ecu: goto label_45e4ec;
        case 0x45e4f0u: goto label_45e4f0;
        case 0x45e4f4u: goto label_45e4f4;
        case 0x45e4f8u: goto label_45e4f8;
        case 0x45e4fcu: goto label_45e4fc;
        case 0x45e500u: goto label_45e500;
        case 0x45e504u: goto label_45e504;
        case 0x45e508u: goto label_45e508;
        case 0x45e50cu: goto label_45e50c;
        case 0x45e510u: goto label_45e510;
        case 0x45e514u: goto label_45e514;
        case 0x45e518u: goto label_45e518;
        case 0x45e51cu: goto label_45e51c;
        case 0x45e520u: goto label_45e520;
        case 0x45e524u: goto label_45e524;
        case 0x45e528u: goto label_45e528;
        case 0x45e52cu: goto label_45e52c;
        case 0x45e530u: goto label_45e530;
        case 0x45e534u: goto label_45e534;
        case 0x45e538u: goto label_45e538;
        case 0x45e53cu: goto label_45e53c;
        case 0x45e540u: goto label_45e540;
        case 0x45e544u: goto label_45e544;
        case 0x45e548u: goto label_45e548;
        case 0x45e54cu: goto label_45e54c;
        case 0x45e550u: goto label_45e550;
        case 0x45e554u: goto label_45e554;
        case 0x45e558u: goto label_45e558;
        case 0x45e55cu: goto label_45e55c;
        case 0x45e560u: goto label_45e560;
        case 0x45e564u: goto label_45e564;
        case 0x45e568u: goto label_45e568;
        case 0x45e56cu: goto label_45e56c;
        case 0x45e570u: goto label_45e570;
        case 0x45e574u: goto label_45e574;
        case 0x45e578u: goto label_45e578;
        case 0x45e57cu: goto label_45e57c;
        case 0x45e580u: goto label_45e580;
        case 0x45e584u: goto label_45e584;
        case 0x45e588u: goto label_45e588;
        case 0x45e58cu: goto label_45e58c;
        case 0x45e590u: goto label_45e590;
        case 0x45e594u: goto label_45e594;
        case 0x45e598u: goto label_45e598;
        case 0x45e59cu: goto label_45e59c;
        case 0x45e5a0u: goto label_45e5a0;
        case 0x45e5a4u: goto label_45e5a4;
        case 0x45e5a8u: goto label_45e5a8;
        case 0x45e5acu: goto label_45e5ac;
        case 0x45e5b0u: goto label_45e5b0;
        case 0x45e5b4u: goto label_45e5b4;
        case 0x45e5b8u: goto label_45e5b8;
        case 0x45e5bcu: goto label_45e5bc;
        case 0x45e5c0u: goto label_45e5c0;
        case 0x45e5c4u: goto label_45e5c4;
        case 0x45e5c8u: goto label_45e5c8;
        case 0x45e5ccu: goto label_45e5cc;
        case 0x45e5d0u: goto label_45e5d0;
        case 0x45e5d4u: goto label_45e5d4;
        case 0x45e5d8u: goto label_45e5d8;
        case 0x45e5dcu: goto label_45e5dc;
        case 0x45e5e0u: goto label_45e5e0;
        case 0x45e5e4u: goto label_45e5e4;
        case 0x45e5e8u: goto label_45e5e8;
        case 0x45e5ecu: goto label_45e5ec;
        case 0x45e5f0u: goto label_45e5f0;
        case 0x45e5f4u: goto label_45e5f4;
        case 0x45e5f8u: goto label_45e5f8;
        case 0x45e5fcu: goto label_45e5fc;
        case 0x45e600u: goto label_45e600;
        case 0x45e604u: goto label_45e604;
        case 0x45e608u: goto label_45e608;
        case 0x45e60cu: goto label_45e60c;
        case 0x45e610u: goto label_45e610;
        case 0x45e614u: goto label_45e614;
        case 0x45e618u: goto label_45e618;
        case 0x45e61cu: goto label_45e61c;
        case 0x45e620u: goto label_45e620;
        case 0x45e624u: goto label_45e624;
        case 0x45e628u: goto label_45e628;
        case 0x45e62cu: goto label_45e62c;
        case 0x45e630u: goto label_45e630;
        case 0x45e634u: goto label_45e634;
        case 0x45e638u: goto label_45e638;
        case 0x45e63cu: goto label_45e63c;
        case 0x45e640u: goto label_45e640;
        case 0x45e644u: goto label_45e644;
        case 0x45e648u: goto label_45e648;
        case 0x45e64cu: goto label_45e64c;
        case 0x45e650u: goto label_45e650;
        case 0x45e654u: goto label_45e654;
        case 0x45e658u: goto label_45e658;
        case 0x45e65cu: goto label_45e65c;
        case 0x45e660u: goto label_45e660;
        case 0x45e664u: goto label_45e664;
        case 0x45e668u: goto label_45e668;
        case 0x45e66cu: goto label_45e66c;
        case 0x45e670u: goto label_45e670;
        case 0x45e674u: goto label_45e674;
        case 0x45e678u: goto label_45e678;
        case 0x45e67cu: goto label_45e67c;
        case 0x45e680u: goto label_45e680;
        case 0x45e684u: goto label_45e684;
        case 0x45e688u: goto label_45e688;
        case 0x45e68cu: goto label_45e68c;
        case 0x45e690u: goto label_45e690;
        case 0x45e694u: goto label_45e694;
        case 0x45e698u: goto label_45e698;
        case 0x45e69cu: goto label_45e69c;
        case 0x45e6a0u: goto label_45e6a0;
        case 0x45e6a4u: goto label_45e6a4;
        case 0x45e6a8u: goto label_45e6a8;
        case 0x45e6acu: goto label_45e6ac;
        case 0x45e6b0u: goto label_45e6b0;
        case 0x45e6b4u: goto label_45e6b4;
        case 0x45e6b8u: goto label_45e6b8;
        case 0x45e6bcu: goto label_45e6bc;
        case 0x45e6c0u: goto label_45e6c0;
        case 0x45e6c4u: goto label_45e6c4;
        case 0x45e6c8u: goto label_45e6c8;
        case 0x45e6ccu: goto label_45e6cc;
        case 0x45e6d0u: goto label_45e6d0;
        case 0x45e6d4u: goto label_45e6d4;
        case 0x45e6d8u: goto label_45e6d8;
        case 0x45e6dcu: goto label_45e6dc;
        case 0x45e6e0u: goto label_45e6e0;
        case 0x45e6e4u: goto label_45e6e4;
        case 0x45e6e8u: goto label_45e6e8;
        case 0x45e6ecu: goto label_45e6ec;
        case 0x45e6f0u: goto label_45e6f0;
        case 0x45e6f4u: goto label_45e6f4;
        case 0x45e6f8u: goto label_45e6f8;
        case 0x45e6fcu: goto label_45e6fc;
        case 0x45e700u: goto label_45e700;
        case 0x45e704u: goto label_45e704;
        case 0x45e708u: goto label_45e708;
        case 0x45e70cu: goto label_45e70c;
        case 0x45e710u: goto label_45e710;
        case 0x45e714u: goto label_45e714;
        case 0x45e718u: goto label_45e718;
        case 0x45e71cu: goto label_45e71c;
        case 0x45e720u: goto label_45e720;
        case 0x45e724u: goto label_45e724;
        case 0x45e728u: goto label_45e728;
        case 0x45e72cu: goto label_45e72c;
        case 0x45e730u: goto label_45e730;
        case 0x45e734u: goto label_45e734;
        case 0x45e738u: goto label_45e738;
        case 0x45e73cu: goto label_45e73c;
        case 0x45e740u: goto label_45e740;
        case 0x45e744u: goto label_45e744;
        case 0x45e748u: goto label_45e748;
        case 0x45e74cu: goto label_45e74c;
        case 0x45e750u: goto label_45e750;
        case 0x45e754u: goto label_45e754;
        case 0x45e758u: goto label_45e758;
        case 0x45e75cu: goto label_45e75c;
        case 0x45e760u: goto label_45e760;
        case 0x45e764u: goto label_45e764;
        case 0x45e768u: goto label_45e768;
        case 0x45e76cu: goto label_45e76c;
        case 0x45e770u: goto label_45e770;
        case 0x45e774u: goto label_45e774;
        case 0x45e778u: goto label_45e778;
        case 0x45e77cu: goto label_45e77c;
        case 0x45e780u: goto label_45e780;
        case 0x45e784u: goto label_45e784;
        case 0x45e788u: goto label_45e788;
        case 0x45e78cu: goto label_45e78c;
        case 0x45e790u: goto label_45e790;
        case 0x45e794u: goto label_45e794;
        case 0x45e798u: goto label_45e798;
        case 0x45e79cu: goto label_45e79c;
        case 0x45e7a0u: goto label_45e7a0;
        case 0x45e7a4u: goto label_45e7a4;
        case 0x45e7a8u: goto label_45e7a8;
        case 0x45e7acu: goto label_45e7ac;
        case 0x45e7b0u: goto label_45e7b0;
        case 0x45e7b4u: goto label_45e7b4;
        case 0x45e7b8u: goto label_45e7b8;
        case 0x45e7bcu: goto label_45e7bc;
        case 0x45e7c0u: goto label_45e7c0;
        case 0x45e7c4u: goto label_45e7c4;
        case 0x45e7c8u: goto label_45e7c8;
        case 0x45e7ccu: goto label_45e7cc;
        case 0x45e7d0u: goto label_45e7d0;
        case 0x45e7d4u: goto label_45e7d4;
        case 0x45e7d8u: goto label_45e7d8;
        case 0x45e7dcu: goto label_45e7dc;
        case 0x45e7e0u: goto label_45e7e0;
        case 0x45e7e4u: goto label_45e7e4;
        case 0x45e7e8u: goto label_45e7e8;
        case 0x45e7ecu: goto label_45e7ec;
        case 0x45e7f0u: goto label_45e7f0;
        case 0x45e7f4u: goto label_45e7f4;
        case 0x45e7f8u: goto label_45e7f8;
        case 0x45e7fcu: goto label_45e7fc;
        default: break;
    }

    ctx->pc = 0x45e000u;

label_45e000:
    // 0x45e000: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x45e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_45e004:
    // 0x45e004: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x45e004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_45e008:
    // 0x45e008: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x45e008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_45e00c:
    // 0x45e00c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45e010:
    // 0x45e010: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x45e010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_45e014:
    // 0x45e014: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x45e014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45e018:
    // 0x45e018: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x45e018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_45e01c:
    // 0x45e01c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x45e01cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45e020:
    // 0x45e020: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x45e020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_45e024:
    // 0x45e024: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x45e024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_45e028:
    // 0x45e028: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x45e028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_45e02c:
    // 0x45e02c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x45e02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_45e030:
    // 0x45e030: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x45e030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_45e034:
    // 0x45e034: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x45e034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_45e038:
    // 0x45e038: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x45e038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_45e03c:
    // 0x45e03c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x45e03cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_45e040:
    // 0x45e040: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x45e040u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_45e044:
    // 0x45e044: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x45e044u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_45e048:
    // 0x45e048: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x45e048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_45e04c:
    // 0x45e04c: 0x8c5389e0  lw          $s3, -0x7620($v0)
    ctx->pc = 0x45e04cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_45e050:
    // 0x45e050: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45e050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_45e054:
    // 0x45e054: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x45e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_45e058:
    // 0x45e058: 0xc0c9a58  jal         func_326960
label_45e05c:
    if (ctx->pc == 0x45E05Cu) {
        ctx->pc = 0x45E05Cu;
            // 0x45e05c: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->pc = 0x45E060u;
        goto label_45e060;
    }
    ctx->pc = 0x45E058u;
    SET_GPR_U32(ctx, 31, 0x45E060u);
    ctx->pc = 0x45E05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E058u;
            // 0x45e05c: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E060u; }
        if (ctx->pc != 0x45E060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E060u; }
        if (ctx->pc != 0x45E060u) { return; }
    }
    ctx->pc = 0x45E060u;
label_45e060:
    // 0x45e060: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45e060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45e064:
    // 0x45e064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45e064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45e068:
    // 0x45e068: 0xc123328  jal         func_48CCA0
label_45e06c:
    if (ctx->pc == 0x45E06Cu) {
        ctx->pc = 0x45E06Cu;
            // 0x45e06c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x45E070u;
        goto label_45e070;
    }
    ctx->pc = 0x45E068u;
    SET_GPR_U32(ctx, 31, 0x45E070u);
    ctx->pc = 0x45E06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E068u;
            // 0x45e06c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E070u; }
        if (ctx->pc != 0x45E070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E070u; }
        if (ctx->pc != 0x45E070u) { return; }
    }
    ctx->pc = 0x45E070u;
label_45e070:
    // 0x45e070: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45e070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_45e074:
    // 0x45e074: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x45e074u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45e078:
    // 0x45e078: 0xc123328  jal         func_48CCA0
label_45e07c:
    if (ctx->pc == 0x45E07Cu) {
        ctx->pc = 0x45E07Cu;
            // 0x45e07c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x45E080u;
        goto label_45e080;
    }
    ctx->pc = 0x45E078u;
    SET_GPR_U32(ctx, 31, 0x45E080u);
    ctx->pc = 0x45E07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E078u;
            // 0x45e07c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E080u; }
        if (ctx->pc != 0x45E080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E080u; }
        if (ctx->pc != 0x45E080u) { return; }
    }
    ctx->pc = 0x45E080u;
label_45e080:
    // 0x45e080: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45e080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_45e084:
    // 0x45e084: 0xc123328  jal         func_48CCA0
label_45e088:
    if (ctx->pc == 0x45E088u) {
        ctx->pc = 0x45E088u;
            // 0x45e088: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45E08Cu;
        goto label_45e08c;
    }
    ctx->pc = 0x45E084u;
    SET_GPR_U32(ctx, 31, 0x45E08Cu);
    ctx->pc = 0x45E088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E084u;
            // 0x45e088: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E08Cu; }
        if (ctx->pc != 0x45E08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E08Cu; }
        if (ctx->pc != 0x45E08Cu) { return; }
    }
    ctx->pc = 0x45E08Cu;
label_45e08c:
    // 0x45e08c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x45e08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_45e090:
    // 0x45e090: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_45e094:
    if (ctx->pc == 0x45E094u) {
        ctx->pc = 0x45E098u;
        goto label_45e098;
    }
    ctx->pc = 0x45E090u;
    {
        const bool branch_taken_0x45e090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e090) {
            ctx->pc = 0x45E0A8u;
            goto label_45e0a8;
        }
    }
    ctx->pc = 0x45E098u;
label_45e098:
    // 0x45e098: 0x2ea10009  sltiu       $at, $s5, 0x9
    ctx->pc = 0x45e098u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_45e09c:
    // 0x45e09c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_45e0a0:
    if (ctx->pc == 0x45E0A0u) {
        ctx->pc = 0x45E0A4u;
        goto label_45e0a4;
    }
    ctx->pc = 0x45E09Cu;
    {
        const bool branch_taken_0x45e09c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e09c) {
            ctx->pc = 0x45E0A8u;
            goto label_45e0a8;
        }
    }
    ctx->pc = 0x45E0A4u;
label_45e0a4:
    // 0x45e0a4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x45e0a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_45e0a8:
    // 0x45e0a8: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_45e0ac:
    if (ctx->pc == 0x45E0ACu) {
        ctx->pc = 0x45E0B0u;
        goto label_45e0b0;
    }
    ctx->pc = 0x45E0A8u;
    {
        const bool branch_taken_0x45e0a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e0a8) {
            ctx->pc = 0x45E0B4u;
            goto label_45e0b4;
        }
    }
    ctx->pc = 0x45E0B0u;
label_45e0b0:
    // 0x45e0b0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x45e0b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_45e0b4:
    // 0x45e0b4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_45e0b8:
    // 0x45e0b8: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x45e0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_45e0bc:
    // 0x45e0bc: 0x845104c8  lh          $s1, 0x4C8($v0)
    ctx->pc = 0x45e0bcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1224)));
label_45e0c0:
    // 0x45e0c0: 0x3c170067  lui         $s7, 0x67
    ctx->pc = 0x45e0c0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)103 << 16));
label_45e0c4:
    // 0x45e0c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_45e0c8:
    // 0x45e0c8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45e0cc:
    // 0x45e0cc: 0x3c160067  lui         $s6, 0x67
    ctx->pc = 0x45e0ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)103 << 16));
label_45e0d0:
    // 0x45e0d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45e0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e0d4:
    // 0x45e0d4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_45e0d8:
    // 0x45e0d8: 0x2652c150  addiu       $s2, $s2, -0x3EB0
    ctx->pc = 0x45e0d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951248));
label_45e0dc:
    // 0x45e0dc: 0x847004ca  lh          $s0, 0x4CA($v1)
    ctx->pc = 0x45e0dcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1226)));
label_45e0e0:
    // 0x45e0e0: 0x26f7c230  addiu       $s7, $s7, -0x3DD0
    ctx->pc = 0x45e0e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951472));
label_45e0e4:
    // 0x45e0e4: 0x844204d0  lh          $v0, 0x4D0($v0)
    ctx->pc = 0x45e0e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1232)));
label_45e0e8:
    // 0x45e0e8: 0x26d6c270  addiu       $s6, $s6, -0x3D90
    ctx->pc = 0x45e0e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951536));
label_45e0ec:
    // 0x45e0ec: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45e0f0:
    // 0x45e0f0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x45e0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_45e0f4:
    // 0x45e0f4: 0x846204d2  lh          $v0, 0x4D2($v1)
    ctx->pc = 0x45e0f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1234)));
label_45e0f8:
    // 0x45e0f8: 0xc123328  jal         func_48CCA0
label_45e0fc:
    if (ctx->pc == 0x45E0FCu) {
        ctx->pc = 0x45E0FCu;
            // 0x45e0fc: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->pc = 0x45E100u;
        goto label_45e100;
    }
    ctx->pc = 0x45E0F8u;
    SET_GPR_U32(ctx, 31, 0x45E100u);
    ctx->pc = 0x45E0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E0F8u;
            // 0x45e0fc: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E100u; }
        if (ctx->pc != 0x45E100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E100u; }
        if (ctx->pc != 0x45E100u) { return; }
    }
    ctx->pc = 0x45E100u;
label_45e100:
    // 0x45e100: 0x2442ffc3  addiu       $v0, $v0, -0x3D
    ctx->pc = 0x45e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967235));
label_45e104:
    // 0x45e104: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x45e104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_45e108:
    // 0x45e108: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x45e108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
label_45e10c:
    // 0x45e10c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x45e10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_45e110:
    // 0x45e110: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45e110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45e114:
    // 0x45e114: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x45e114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_45e118:
    // 0x45e118: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x45e118u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_45e11c:
    // 0x45e11c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_45e120:
    if (ctx->pc == 0x45E120u) {
        ctx->pc = 0x45E120u;
            // 0x45e120: 0x8fc20054  lw          $v0, 0x54($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
        ctx->pc = 0x45E124u;
        goto label_45e124;
    }
    ctx->pc = 0x45E11Cu;
    {
        const bool branch_taken_0x45e11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e11c) {
            ctx->pc = 0x45E120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45E11Cu;
            // 0x45e120: 0x8fc20054  lw          $v0, 0x54($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45E138u;
            goto label_45e138;
        }
    }
    ctx->pc = 0x45E124u;
label_45e124:
    // 0x45e124: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x45e124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_45e128:
    // 0x45e128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45e128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e12c:
    // 0x45e12c: 0x0  nop
    ctx->pc = 0x45e12cu;
    // NOP
label_45e130:
    // 0x45e130: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x45e130u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_45e134:
    // 0x45e134: 0x8fc20054  lw          $v0, 0x54($fp)
    ctx->pc = 0x45e134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
label_45e138:
    // 0x45e138: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x45e138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_45e13c:
    // 0x45e13c: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x45e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_45e140:
    // 0x45e140: 0xc0506ac  jal         func_141AB0
label_45e144:
    if (ctx->pc == 0x45E144u) {
        ctx->pc = 0x45E144u;
            // 0x45e144: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45E148u;
        goto label_45e148;
    }
    ctx->pc = 0x45E140u;
    SET_GPR_U32(ctx, 31, 0x45E148u);
    ctx->pc = 0x45E144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E140u;
            // 0x45e144: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E148u; }
        if (ctx->pc != 0x45E148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E148u; }
        if (ctx->pc != 0x45E148u) { return; }
    }
    ctx->pc = 0x45E148u;
label_45e148:
    // 0x45e148: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x45e148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_45e14c:
    // 0x45e14c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45e14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45e150:
    // 0x45e150: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45e150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45e154:
    // 0x45e154: 0x320f809  jalr        $t9
label_45e158:
    if (ctx->pc == 0x45E158u) {
        ctx->pc = 0x45E158u;
            // 0x45e158: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45E15Cu;
        goto label_45e15c;
    }
    ctx->pc = 0x45E154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45E15Cu);
        ctx->pc = 0x45E158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E154u;
            // 0x45e158: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45E15Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45E15Cu; }
            if (ctx->pc != 0x45E15Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45E15Cu;
label_45e15c:
    // 0x45e15c: 0x3c02438e  lui         $v0, 0x438E
    ctx->pc = 0x45e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17294 << 16));
label_45e160:
    // 0x45e160: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x45e160u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
label_45e164:
    // 0x45e164: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x45e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_45e168:
    // 0x45e168: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x45e168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
label_45e16c:
    // 0x45e16c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45e16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e170:
    // 0x45e170: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45e170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45e174:
    // 0x45e174: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x45e174u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45e178:
    // 0x45e178: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45e178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45e17c:
    // 0x45e17c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x45e17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_45e180:
    // 0x45e180: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45e180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45e184:
    // 0x45e184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45e184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e188:
    // 0x45e188: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45e188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45e18c:
    // 0x45e18c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45e18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e190:
    // 0x45e190: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x45e190u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_45e194:
    // 0x45e194: 0x46140818  adda.s      $f1, $f20
    ctx->pc = 0x45e194u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_45e198:
    // 0x45e198: 0xc6e30008  lwc1        $f3, 0x8($s7)
    ctx->pc = 0x45e198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45e19c:
    // 0x45e19c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45e19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e1a0:
    // 0x45e1a0: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x45e1a0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_45e1a4:
    // 0x45e1a4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x45e1a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_45e1a8:
    // 0x45e1a8: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x45e1a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45e1ac:
    // 0x45e1ac: 0xc6e2000c  lwc1        $f2, 0xC($s7)
    ctx->pc = 0x45e1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45e1b0:
    // 0x45e1b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45e1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e1b4:
    // 0x45e1b4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x45e1b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_45e1b8:
    // 0x45e1b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45e1b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e1bc:
    // 0x45e1bc: 0x0  nop
    ctx->pc = 0x45e1bcu;
    // NOP
label_45e1c0:
    // 0x45e1c0: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x45e1c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45e1c4:
    // 0x45e1c4: 0x4602a3c0  add.s       $f15, $f20, $f2
    ctx->pc = 0x45e1c4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_45e1c8:
    // 0x45e1c8: 0x46030301  sub.s       $f12, $f0, $f3
    ctx->pc = 0x45e1c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_45e1cc:
    // 0x45e1cc: 0x46030380  add.s       $f14, $f0, $f3
    ctx->pc = 0x45e1ccu;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_45e1d0:
    // 0x45e1d0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x45e1d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_45e1d4:
    // 0x45e1d4: 0xc0bc284  jal         func_2F0A10
label_45e1d8:
    if (ctx->pc == 0x45E1D8u) {
        ctx->pc = 0x45E1D8u;
            // 0x45e1d8: 0x4602255c  madd.s      $f21, $f4, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
        ctx->pc = 0x45E1DCu;
        goto label_45e1dc;
    }
    ctx->pc = 0x45E1D4u;
    SET_GPR_U32(ctx, 31, 0x45E1DCu);
    ctx->pc = 0x45E1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E1D4u;
            // 0x45e1d8: 0x4602255c  madd.s      $f21, $f4, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E1DCu; }
        if (ctx->pc != 0x45E1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E1DCu; }
        if (ctx->pc != 0x45E1DCu) { return; }
    }
    ctx->pc = 0x45E1DCu;
label_45e1dc:
    // 0x45e1dc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x45e1dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_45e1e0:
    // 0x45e1e0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x45e1e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_45e1e4:
    // 0x45e1e4: 0x320f809  jalr        $t9
label_45e1e8:
    if (ctx->pc == 0x45E1E8u) {
        ctx->pc = 0x45E1E8u;
            // 0x45e1e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45E1ECu;
        goto label_45e1ec;
    }
    ctx->pc = 0x45E1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45E1ECu);
        ctx->pc = 0x45E1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E1E4u;
            // 0x45e1e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45E1ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45E1ECu; }
            if (ctx->pc != 0x45E1ECu) { return; }
        }
        }
    }
    ctx->pc = 0x45E1ECu;
label_45e1ec:
    // 0x45e1ec: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x45e1ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_45e1f0:
    // 0x45e1f0: 0x15b8c0  sll         $s7, $s5, 3
    ctx->pc = 0x45e1f0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_45e1f4:
    // 0x45e1f4: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x45e1f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45e1f8:
    // 0x45e1f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x45e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45e1fc:
    // 0x45e1fc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x45e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_45e200:
    // 0x45e200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45e204:
    // 0x45e204: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x45e204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_45e208:
    // 0x45e208: 0x90430448  lbu         $v1, 0x448($v0)
    ctx->pc = 0x45e208u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1096)));
label_45e20c:
    // 0x45e20c: 0x5075000f  beql        $v1, $s5, . + 4 + (0xF << 2)
label_45e210:
    if (ctx->pc == 0x45E210u) {
        ctx->pc = 0x45E210u;
            // 0x45e210: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x45E214u;
        goto label_45e214;
    }
    ctx->pc = 0x45E20Cu;
    {
        const bool branch_taken_0x45e20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x45e20c) {
            ctx->pc = 0x45E210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45E20Cu;
            // 0x45e210: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45E24Cu;
            goto label_45e24c;
        }
    }
    ctx->pc = 0x45E214u;
label_45e214:
    // 0x45e214: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45e218:
    // 0x45e218: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_45e21c:
    if (ctx->pc == 0x45E21Cu) {
        ctx->pc = 0x45E21Cu;
            // 0x45e21c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45E220u;
        goto label_45e220;
    }
    ctx->pc = 0x45E218u;
    {
        const bool branch_taken_0x45e218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45e218) {
            ctx->pc = 0x45E21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45E218u;
            // 0x45e21c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45E24Cu;
            goto label_45e24c;
        }
    }
    ctx->pc = 0x45E220u;
label_45e220:
    // 0x45e220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45e224:
    // 0x45e224: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_45e228:
    if (ctx->pc == 0x45E228u) {
        ctx->pc = 0x45E22Cu;
        goto label_45e22c;
    }
    ctx->pc = 0x45E224u;
    {
        const bool branch_taken_0x45e224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45e224) {
            ctx->pc = 0x45E24Cu;
            goto label_45e24c;
        }
    }
    ctx->pc = 0x45E22Cu;
label_45e22c:
    // 0x45e22c: 0x5060004b  beql        $v1, $zero, . + 4 + (0x4B << 2)
label_45e230:
    if (ctx->pc == 0x45E230u) {
        ctx->pc = 0x45E230u;
            // 0x45e230: 0x8fc20054  lw          $v0, 0x54($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
        ctx->pc = 0x45E234u;
        goto label_45e234;
    }
    ctx->pc = 0x45E22Cu;
    {
        const bool branch_taken_0x45e22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e22c) {
            ctx->pc = 0x45E230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45E22Cu;
            // 0x45e230: 0x8fc20054  lw          $v0, 0x54($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45E35Cu;
            goto label_45e35c;
        }
    }
    ctx->pc = 0x45E234u;
label_45e234:
    // 0x45e234: 0x10000005  b           . + 4 + (0x5 << 2)
label_45e238:
    if (ctx->pc == 0x45E238u) {
        ctx->pc = 0x45E23Cu;
        goto label_45e23c;
    }
    ctx->pc = 0x45E234u;
    {
        const bool branch_taken_0x45e234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e234) {
            ctx->pc = 0x45E24Cu;
            goto label_45e24c;
        }
    }
    ctx->pc = 0x45E23Cu;
label_45e23c:
    // 0x45e23c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x45e23cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45e240:
    // 0x45e240: 0x10000002  b           . + 4 + (0x2 << 2)
label_45e244:
    if (ctx->pc == 0x45E244u) {
        ctx->pc = 0x45E248u;
        goto label_45e248;
    }
    ctx->pc = 0x45E240u;
    {
        const bool branch_taken_0x45e240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e240) {
            ctx->pc = 0x45E24Cu;
            goto label_45e24c;
        }
    }
    ctx->pc = 0x45E248u;
label_45e248:
    // 0x45e248: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x45e248u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45e24c:
    // 0x45e24c: 0x8fc20054  lw          $v0, 0x54($fp)
    ctx->pc = 0x45e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
label_45e250:
    // 0x45e250: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x45e250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_45e254:
    // 0x45e254: 0xc0506ac  jal         func_141AB0
label_45e258:
    if (ctx->pc == 0x45E258u) {
        ctx->pc = 0x45E258u;
            // 0x45e258: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x45E25Cu;
        goto label_45e25c;
    }
    ctx->pc = 0x45E254u;
    SET_GPR_U32(ctx, 31, 0x45E25Cu);
    ctx->pc = 0x45E258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E254u;
            // 0x45e258: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E25Cu; }
        if (ctx->pc != 0x45E25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E25Cu; }
        if (ctx->pc != 0x45E25Cu) { return; }
    }
    ctx->pc = 0x45E25Cu;
label_45e25c:
    // 0x45e25c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x45e25cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_45e260:
    // 0x45e260: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45e260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45e264:
    // 0x45e264: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45e264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45e268:
    // 0x45e268: 0x320f809  jalr        $t9
label_45e26c:
    if (ctx->pc == 0x45E26Cu) {
        ctx->pc = 0x45E26Cu;
            // 0x45e26c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45E270u;
        goto label_45e270;
    }
    ctx->pc = 0x45E268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45E270u);
        ctx->pc = 0x45E26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E268u;
            // 0x45e26c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45E270u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45E270u; }
            if (ctx->pc != 0x45E270u) { return; }
        }
        }
    }
    ctx->pc = 0x45E270u;
label_45e270:
    // 0x45e270: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x45e270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_45e274:
    // 0x45e274: 0x3c0343be  lui         $v1, 0x43BE
    ctx->pc = 0x45e274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17342 << 16));
label_45e278:
    // 0x45e278: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x45e278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_45e27c:
    // 0x45e27c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45e27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45e280:
    // 0x45e280: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45e280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45e284:
    // 0x45e284: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x45e284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_45e288:
    // 0x45e288: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45e288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45e28c:
    // 0x45e28c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45e28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45e290:
    // 0x45e290: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x45e290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_45e294:
    // 0x45e294: 0xc6c30008  lwc1        $f3, 0x8($s6)
    ctx->pc = 0x45e294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45e298:
    // 0x45e298: 0xc6c2000c  lwc1        $f2, 0xC($s6)
    ctx->pc = 0x45e298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45e29c:
    // 0x45e29c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45e29cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e2a0:
    // 0x45e2a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45e2a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e2a4:
    // 0x45e2a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45e2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e2a8:
    // 0x45e2a8: 0x0  nop
    ctx->pc = 0x45e2a8u;
    // NOP
label_45e2ac:
    // 0x45e2ac: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x45e2acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45e2b0:
    // 0x45e2b0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x45e2b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_45e2b4:
    // 0x45e2b4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x45e2b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_45e2b8:
    // 0x45e2b8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x45e2b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_45e2bc:
    // 0x45e2bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45e2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e2c0:
    // 0x45e2c0: 0x0  nop
    ctx->pc = 0x45e2c0u;
    // NOP
label_45e2c4:
    // 0x45e2c4: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x45e2c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45e2c8:
    // 0x45e2c8: 0x46030301  sub.s       $f12, $f0, $f3
    ctx->pc = 0x45e2c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_45e2cc:
    // 0x45e2cc: 0x46030380  add.s       $f14, $f0, $f3
    ctx->pc = 0x45e2ccu;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_45e2d0:
    // 0x45e2d0: 0x4602ab41  sub.s       $f13, $f21, $f2
    ctx->pc = 0x45e2d0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_45e2d4:
    // 0x45e2d4: 0xc0bc284  jal         func_2F0A10
label_45e2d8:
    if (ctx->pc == 0x45E2D8u) {
        ctx->pc = 0x45E2D8u;
            // 0x45e2d8: 0x4602abc0  add.s       $f15, $f21, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
        ctx->pc = 0x45E2DCu;
        goto label_45e2dc;
    }
    ctx->pc = 0x45E2D4u;
    SET_GPR_U32(ctx, 31, 0x45E2DCu);
    ctx->pc = 0x45E2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E2D4u;
            // 0x45e2d8: 0x4602abc0  add.s       $f15, $f21, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E2DCu; }
        if (ctx->pc != 0x45E2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E2DCu; }
        if (ctx->pc != 0x45E2DCu) { return; }
    }
    ctx->pc = 0x45E2DCu;
label_45e2dc:
    // 0x45e2dc: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x45e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_45e2e0:
    // 0x45e2e0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x45e2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_45e2e4:
    // 0x45e2e4: 0x2c22821  addu        $a1, $s6, $v0
    ctx->pc = 0x45e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_45e2e8:
    // 0x45e2e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45e2ec:
    // 0x45e2ec: 0x3c0243cf  lui         $v0, 0x43CF
    ctx->pc = 0x45e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17359 << 16));
label_45e2f0:
    // 0x45e2f0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45e2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45e2f4:
    // 0x45e2f4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x45e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_45e2f8:
    // 0x45e2f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45e2f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e2fc:
    // 0x45e2fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45e2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45e300:
    // 0x45e300: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x45e300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_45e304:
    // 0x45e304: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45e304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e308:
    // 0x45e308: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x45e308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45e30c:
    // 0x45e30c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x45e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_45e310:
    // 0x45e310: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x45e310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45e314:
    // 0x45e314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45e314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e318:
    // 0x45e318: 0x0  nop
    ctx->pc = 0x45e318u;
    // NOP
label_45e31c:
    // 0x45e31c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45e31cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45e320:
    // 0x45e320: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x45e320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_45e324:
    // 0x45e324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45e324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e328:
    // 0x45e328: 0x0  nop
    ctx->pc = 0x45e328u;
    // NOP
label_45e32c:
    // 0x45e32c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45e32cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45e330:
    // 0x45e330: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x45e330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45e334:
    // 0x45e334: 0x46026380  add.s       $f14, $f12, $f2
    ctx->pc = 0x45e334u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_45e338:
    // 0x45e338: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x45e338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_45e33c:
    // 0x45e33c: 0x4600ab41  sub.s       $f13, $f21, $f0
    ctx->pc = 0x45e33cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_45e340:
    // 0x45e340: 0xc0bc284  jal         func_2F0A10
label_45e344:
    if (ctx->pc == 0x45E344u) {
        ctx->pc = 0x45E344u;
            // 0x45e344: 0x4600abc0  add.s       $f15, $f21, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x45E348u;
        goto label_45e348;
    }
    ctx->pc = 0x45E340u;
    SET_GPR_U32(ctx, 31, 0x45E348u);
    ctx->pc = 0x45E344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E340u;
            // 0x45e344: 0x4600abc0  add.s       $f15, $f21, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E348u; }
        if (ctx->pc != 0x45E348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E348u; }
        if (ctx->pc != 0x45E348u) { return; }
    }
    ctx->pc = 0x45E348u;
label_45e348:
    // 0x45e348: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x45e348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_45e34c:
    // 0x45e34c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x45e34cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_45e350:
    // 0x45e350: 0x320f809  jalr        $t9
label_45e354:
    if (ctx->pc == 0x45E354u) {
        ctx->pc = 0x45E354u;
            // 0x45e354: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45E358u;
        goto label_45e358;
    }
    ctx->pc = 0x45E350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45E358u);
        ctx->pc = 0x45E354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E350u;
            // 0x45e354: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45E358u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45E358u; }
            if (ctx->pc != 0x45E358u) { return; }
        }
        }
    }
    ctx->pc = 0x45E358u;
label_45e358:
    // 0x45e358: 0x8fc20054  lw          $v0, 0x54($fp)
    ctx->pc = 0x45e358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
label_45e35c:
    // 0x45e35c: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x45e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_45e360:
    // 0x45e360: 0xc0506ac  jal         func_141AB0
label_45e364:
    if (ctx->pc == 0x45E364u) {
        ctx->pc = 0x45E364u;
            // 0x45e364: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45E368u;
        goto label_45e368;
    }
    ctx->pc = 0x45E360u;
    SET_GPR_U32(ctx, 31, 0x45E368u);
    ctx->pc = 0x45E364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E360u;
            // 0x45e364: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E368u; }
        if (ctx->pc != 0x45E368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E368u; }
        if (ctx->pc != 0x45E368u) { return; }
    }
    ctx->pc = 0x45E368u;
label_45e368:
    // 0x45e368: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x45e368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_45e36c:
    // 0x45e36c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45e36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45e370:
    // 0x45e370: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45e370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45e374:
    // 0x45e374: 0x320f809  jalr        $t9
label_45e378:
    if (ctx->pc == 0x45E378u) {
        ctx->pc = 0x45E378u;
            // 0x45e378: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45E37Cu;
        goto label_45e37c;
    }
    ctx->pc = 0x45E374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45E37Cu);
        ctx->pc = 0x45E378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E374u;
            // 0x45e378: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45E37Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45E37Cu; }
            if (ctx->pc != 0x45E37Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45E37Cu;
label_45e37c:
    // 0x45e37c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x45e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_45e380:
    // 0x45e380: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x45e380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_45e384:
    // 0x45e384: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x45e384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_45e388:
    // 0x45e388: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45e388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45e38c:
    // 0x45e38c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45e390:
    // 0x45e390: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x45e390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_45e394:
    // 0x45e394: 0x8c450208  lw          $a1, 0x208($v0)
    ctx->pc = 0x45e394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 520)));
label_45e398:
    // 0x45e398: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_45e39c:
    if (ctx->pc == 0x45E39Cu) {
        ctx->pc = 0x45E39Cu;
            // 0x45e39c: 0x3c031062  lui         $v1, 0x1062 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
        ctx->pc = 0x45E3A0u;
        goto label_45e3a0;
    }
    ctx->pc = 0x45E398u;
    {
        const bool branch_taken_0x45e398 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e398) {
            ctx->pc = 0x45E39Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45E398u;
            // 0x45e39c: 0x3c031062  lui         $v1, 0x1062 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45E3A8u;
            goto label_45e3a8;
        }
    }
    ctx->pc = 0x45E3A0u;
label_45e3a0:
    // 0x45e3a0: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x45e3a0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_45e3a4:
    // 0x45e3a4: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x45e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_45e3a8:
    // 0x45e3a8: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x45e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_45e3ac:
    // 0x45e3ac: 0x34644dd3  ori         $a0, $v1, 0x4DD3
    ctx->pc = 0x45e3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_45e3b0:
    // 0x45e3b0: 0x850019  multu       $a0, $a1
    ctx->pc = 0x45e3b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45e3b4:
    // 0x45e3b4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x45e3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_45e3b8:
    // 0x45e3b8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x45e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_45e3bc:
    // 0x45e3bc: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x45e3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_45e3c0:
    // 0x45e3c0: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45e3c4:
    // 0x45e3c4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x45e3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45e3c8:
    // 0x45e3c8: 0x2010  mfhi        $a0
    ctx->pc = 0x45e3c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_45e3cc:
    // 0x45e3cc: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x45e3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_45e3d0:
    // 0x45e3d0: 0x640019  multu       $v1, $a0
    ctx->pc = 0x45e3d0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45e3d4:
    // 0x45e3d4: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x45e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_45e3d8:
    // 0x45e3d8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x45e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45e3dc:
    // 0x45e3dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45e3e0:
    // 0x45e3e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45e3e4:
    // 0x45e3e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x45e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_45e3e8:
    // 0x45e3e8: 0xa3a823  subu        $s5, $a1, $v1
    ctx->pc = 0x45e3e8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_45e3ec:
    // 0x45e3ec: 0x1810  mfhi        $v1
    ctx->pc = 0x45e3ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_45e3f0:
    // 0x45e3f0: 0x33142  srl         $a2, $v1, 5
    ctx->pc = 0x45e3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_45e3f4:
    // 0x45e3f4: 0x460019  multu       $v0, $a2
    ctx->pc = 0x45e3f4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45e3f8:
    // 0x45e3f8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x45e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_45e3fc:
    // 0x45e3fc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x45e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_45e400:
    // 0x45e400: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45e400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45e404:
    // 0x45e404: 0x82b023  subu        $s6, $a0, $v0
    ctx->pc = 0x45e404u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_45e408:
    // 0x45e408: 0x1010  mfhi        $v0
    ctx->pc = 0x45e408u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45e40c:
    // 0x45e40c: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x45e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45e410:
    // 0x45e410: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45e410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45e414:
    // 0x45e414: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45e414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45e418:
    // 0x45e418: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45e418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45e41c:
    // 0x45e41c: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45e41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45e420:
    // 0x45e420: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x45e420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_45e424:
    // 0x45e424: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45e428:
    if (ctx->pc == 0x45E428u) {
        ctx->pc = 0x45E428u;
            // 0x45e428: 0xc2b823  subu        $s7, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x45E42Cu;
        goto label_45e42c;
    }
    ctx->pc = 0x45E424u;
    {
        const bool branch_taken_0x45e424 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E424u;
            // 0x45e428: 0xc2b823  subu        $s7, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e424) {
            ctx->pc = 0x45E430u;
            goto label_45e430;
        }
    }
    ctx->pc = 0x45E42Cu;
label_45e42c:
    // 0x45e42c: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45e42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45e430:
    // 0x45e430: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45e430u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e434:
    // 0x45e434: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x45e434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_45e438:
    // 0x45e438: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45e438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45e43c:
    // 0x45e43c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45e440:
    // 0x45e440: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45e440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45e444:
    // 0x45e444: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45e444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e448:
    // 0x45e448: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45e448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45e44c:
    // 0x45e44c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45e44cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e450:
    // 0x45e450: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45e450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45e454:
    // 0x45e454: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45e454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45e458:
    // 0x45e458: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45e458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45e45c:
    // 0x45e45c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45e45cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45e460:
    // 0x45e460: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x45e460u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_45e464:
    // 0x45e464: 0x46166380  add.s       $f14, $f12, $f22
    ctx->pc = 0x45e464u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
label_45e468:
    // 0x45e468: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45e468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45e46c:
    // 0x45e46c: 0xc0bc284  jal         func_2F0A10
label_45e470:
    if (ctx->pc == 0x45E470u) {
        ctx->pc = 0x45E470u;
            // 0x45e470: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45E474u;
        goto label_45e474;
    }
    ctx->pc = 0x45E46Cu;
    SET_GPR_U32(ctx, 31, 0x45E474u);
    ctx->pc = 0x45E470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E46Cu;
            // 0x45e470: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E474u; }
        if (ctx->pc != 0x45E474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E474u; }
        if (ctx->pc != 0x45E474u) { return; }
    }
    ctx->pc = 0x45E474u;
label_45e474:
    // 0x45e474: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45e474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45e478:
    // 0x45e478: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x45e478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_45e47c:
    // 0x45e47c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45e47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e480:
    // 0x45e480: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45e480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45e484:
    // 0x45e484: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45e484u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e488:
    // 0x45e488: 0x0  nop
    ctx->pc = 0x45e488u;
    // NOP
label_45e48c:
    // 0x45e48c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x45e48cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_45e490:
    // 0x45e490: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45e494:
    if (ctx->pc == 0x45E494u) {
        ctx->pc = 0x45E494u;
            // 0x45e494: 0x4601b55c  madd.s      $f21, $f22, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->pc = 0x45E498u;
        goto label_45e498;
    }
    ctx->pc = 0x45E490u;
    {
        const bool branch_taken_0x45e490 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E490u;
            // 0x45e494: 0x4601b55c  madd.s      $f21, $f22, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e490) {
            ctx->pc = 0x45E49Cu;
            goto label_45e49c;
        }
    }
    ctx->pc = 0x45E498u;
label_45e498:
    // 0x45e498: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45e498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45e49c:
    // 0x45e49c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45e49cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e4a0:
    // 0x45e4a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45e4a4:
    // 0x45e4a4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45e4a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45e4a8:
    // 0x45e4a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45e4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45e4ac:
    // 0x45e4ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45e4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45e4b0:
    // 0x45e4b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45e4b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e4b4:
    // 0x45e4b4: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45e4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45e4b8:
    // 0x45e4b8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45e4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45e4bc:
    // 0x45e4bc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45e4bcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e4c0:
    // 0x45e4c0: 0x0  nop
    ctx->pc = 0x45e4c0u;
    // NOP
label_45e4c4:
    // 0x45e4c4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45e4c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45e4c8:
    // 0x45e4c8: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x45e4c8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_45e4cc:
    // 0x45e4cc: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x45e4ccu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_45e4d0:
    // 0x45e4d0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45e4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45e4d4:
    // 0x45e4d4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x45e4d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_45e4d8:
    // 0x45e4d8: 0xc0bc284  jal         func_2F0A10
label_45e4dc:
    if (ctx->pc == 0x45E4DCu) {
        ctx->pc = 0x45E4DCu;
            // 0x45e4dc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45E4E0u;
        goto label_45e4e0;
    }
    ctx->pc = 0x45E4D8u;
    SET_GPR_U32(ctx, 31, 0x45E4E0u);
    ctx->pc = 0x45E4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E4D8u;
            // 0x45e4dc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E4E0u; }
        if (ctx->pc != 0x45E4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E4E0u; }
        if (ctx->pc != 0x45E4E0u) { return; }
    }
    ctx->pc = 0x45E4E0u;
label_45e4e0:
    // 0x45e4e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45e4e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e4e4:
    // 0x45e4e4: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x45e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_45e4e8:
    // 0x45e4e8: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x45e4e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_45e4ec:
    // 0x45e4ec: 0x264500a0  addiu       $a1, $s2, 0xA0
    ctx->pc = 0x45e4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_45e4f0:
    // 0x45e4f0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45e4f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e4f4:
    // 0x45e4f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45e4f8:
    // 0x45e4f8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45e4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45e4fc:
    // 0x45e4fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45e4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45e500:
    // 0x45e500: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45e500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e504:
    // 0x45e504: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45e504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e508:
    // 0x45e508: 0x0  nop
    ctx->pc = 0x45e508u;
    // NOP
label_45e50c:
    // 0x45e50c: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x45e50cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45e510:
    // 0x45e510: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45e510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45e514:
    // 0x45e514: 0xc65600a8  lwc1        $f22, 0xA8($s2)
    ctx->pc = 0x45e514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45e518:
    // 0x45e518: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x45e518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45e51c:
    // 0x45e51c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45e51cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e520:
    // 0x45e520: 0x0  nop
    ctx->pc = 0x45e520u;
    // NOP
label_45e524:
    // 0x45e524: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45e524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45e528:
    // 0x45e528: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x45e528u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_45e52c:
    // 0x45e52c: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x45e52cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_45e530:
    // 0x45e530: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45e530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45e534:
    // 0x45e534: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x45e534u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_45e538:
    // 0x45e538: 0xc0bc284  jal         func_2F0A10
label_45e53c:
    if (ctx->pc == 0x45E53Cu) {
        ctx->pc = 0x45E53Cu;
            // 0x45e53c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45E540u;
        goto label_45e540;
    }
    ctx->pc = 0x45E538u;
    SET_GPR_U32(ctx, 31, 0x45E540u);
    ctx->pc = 0x45E53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E538u;
            // 0x45e53c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E540u; }
        if (ctx->pc != 0x45E540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E540u; }
        if (ctx->pc != 0x45E540u) { return; }
    }
    ctx->pc = 0x45E540u;
label_45e540:
    // 0x45e540: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45e540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45e544:
    // 0x45e544: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45e544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45e548:
    // 0x45e548: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x45e548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45e54c:
    // 0x45e54c: 0x560019  multu       $v0, $s6
    ctx->pc = 0x45e54cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45e550:
    // 0x45e550: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45e550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e554:
    // 0x45e554: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45e554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e558:
    // 0x45e558: 0x0  nop
    ctx->pc = 0x45e558u;
    // NOP
label_45e55c:
    // 0x45e55c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x45e55cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_45e560:
    // 0x45e560: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x45e560u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45e564:
    // 0x45e564: 0x1010  mfhi        $v0
    ctx->pc = 0x45e564u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45e568:
    // 0x45e568: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x45e568u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45e56c:
    // 0x45e56c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45e570:
    // 0x45e570: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45e570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45e574:
    // 0x45e574: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45e574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45e578:
    // 0x45e578: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45e578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45e57c:
    // 0x45e57c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x45e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_45e580:
    // 0x45e580: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45e584:
    if (ctx->pc == 0x45E584u) {
        ctx->pc = 0x45E584u;
            // 0x45e584: 0x2c2b023  subu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->pc = 0x45E588u;
        goto label_45e588;
    }
    ctx->pc = 0x45E580u;
    {
        const bool branch_taken_0x45e580 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E580u;
            // 0x45e584: 0x2c2b023  subu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e580) {
            ctx->pc = 0x45E58Cu;
            goto label_45e58c;
        }
    }
    ctx->pc = 0x45E588u;
label_45e588:
    // 0x45e588: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45e588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45e58c:
    // 0x45e58c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45e58cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e590:
    // 0x45e590: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45e590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45e594:
    // 0x45e594: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45e594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45e598:
    // 0x45e598: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45e598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45e59c:
    // 0x45e59c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45e59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45e5a0:
    // 0x45e5a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45e5a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e5a4:
    // 0x45e5a4: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45e5a8:
    // 0x45e5a8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45e5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45e5ac:
    // 0x45e5ac: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45e5acu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e5b0:
    // 0x45e5b0: 0x0  nop
    ctx->pc = 0x45e5b0u;
    // NOP
label_45e5b4:
    // 0x45e5b4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45e5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45e5b8:
    // 0x45e5b8: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x45e5b8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_45e5bc:
    // 0x45e5bc: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x45e5bcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_45e5c0:
    // 0x45e5c0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45e5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45e5c4:
    // 0x45e5c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x45e5c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_45e5c8:
    // 0x45e5c8: 0xc0bc284  jal         func_2F0A10
label_45e5cc:
    if (ctx->pc == 0x45E5CCu) {
        ctx->pc = 0x45E5CCu;
            // 0x45e5cc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45E5D0u;
        goto label_45e5d0;
    }
    ctx->pc = 0x45E5C8u;
    SET_GPR_U32(ctx, 31, 0x45E5D0u);
    ctx->pc = 0x45E5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E5C8u;
            // 0x45e5cc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E5D0u; }
        if (ctx->pc != 0x45E5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E5D0u; }
        if (ctx->pc != 0x45E5D0u) { return; }
    }
    ctx->pc = 0x45E5D0u;
label_45e5d0:
    // 0x45e5d0: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45e5d4:
    // 0x45e5d4: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x45e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_45e5d8:
    // 0x45e5d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45e5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e5dc:
    // 0x45e5dc: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45e5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45e5e0:
    // 0x45e5e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45e5e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e5e4:
    // 0x45e5e4: 0x0  nop
    ctx->pc = 0x45e5e4u;
    // NOP
label_45e5e8:
    // 0x45e5e8: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x45e5e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_45e5ec:
    // 0x45e5ec: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45e5f0:
    if (ctx->pc == 0x45E5F0u) {
        ctx->pc = 0x45E5F0u;
            // 0x45e5f0: 0x4601b55c  madd.s      $f21, $f22, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->pc = 0x45E5F4u;
        goto label_45e5f4;
    }
    ctx->pc = 0x45E5ECu;
    {
        const bool branch_taken_0x45e5ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E5ECu;
            // 0x45e5f0: 0x4601b55c  madd.s      $f21, $f22, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e5ec) {
            ctx->pc = 0x45E5F8u;
            goto label_45e5f8;
        }
    }
    ctx->pc = 0x45E5F4u;
label_45e5f4:
    // 0x45e5f4: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45e5f8:
    // 0x45e5f8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45e5f8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e5fc:
    // 0x45e5fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45e600:
    // 0x45e600: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45e600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45e604:
    // 0x45e604: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45e604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45e608:
    // 0x45e608: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45e608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45e60c:
    // 0x45e60c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45e60cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e610:
    // 0x45e610: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45e610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45e614:
    // 0x45e614: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45e614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45e618:
    // 0x45e618: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45e618u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e61c:
    // 0x45e61c: 0x0  nop
    ctx->pc = 0x45e61cu;
    // NOP
label_45e620:
    // 0x45e620: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45e620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45e624:
    // 0x45e624: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x45e624u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_45e628:
    // 0x45e628: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x45e628u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_45e62c:
    // 0x45e62c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45e62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45e630:
    // 0x45e630: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x45e630u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_45e634:
    // 0x45e634: 0xc0bc284  jal         func_2F0A10
label_45e638:
    if (ctx->pc == 0x45E638u) {
        ctx->pc = 0x45E638u;
            // 0x45e638: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45E63Cu;
        goto label_45e63c;
    }
    ctx->pc = 0x45E634u;
    SET_GPR_U32(ctx, 31, 0x45E63Cu);
    ctx->pc = 0x45E638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E634u;
            // 0x45e638: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E63Cu; }
        if (ctx->pc != 0x45E63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E63Cu; }
        if (ctx->pc != 0x45E63Cu) { return; }
    }
    ctx->pc = 0x45E63Cu;
label_45e63c:
    // 0x45e63c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45e63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e640:
    // 0x45e640: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x45e640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_45e644:
    // 0x45e644: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x45e644u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_45e648:
    // 0x45e648: 0x264500b0  addiu       $a1, $s2, 0xB0
    ctx->pc = 0x45e648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_45e64c:
    // 0x45e64c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45e64cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e650:
    // 0x45e650: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45e650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45e654:
    // 0x45e654: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45e654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45e658:
    // 0x45e658: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45e658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45e65c:
    // 0x45e65c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45e65cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e660:
    // 0x45e660: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45e660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e664:
    // 0x45e664: 0x0  nop
    ctx->pc = 0x45e664u;
    // NOP
label_45e668:
    // 0x45e668: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x45e668u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45e66c:
    // 0x45e66c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45e670:
    // 0x45e670: 0xc65600b8  lwc1        $f22, 0xB8($s2)
    ctx->pc = 0x45e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45e674:
    // 0x45e674: 0xc64100bc  lwc1        $f1, 0xBC($s2)
    ctx->pc = 0x45e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45e678:
    // 0x45e678: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45e678u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e67c:
    // 0x45e67c: 0x0  nop
    ctx->pc = 0x45e67cu;
    // NOP
label_45e680:
    // 0x45e680: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45e680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45e684:
    // 0x45e684: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x45e684u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_45e688:
    // 0x45e688: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x45e688u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_45e68c:
    // 0x45e68c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45e68cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45e690:
    // 0x45e690: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x45e690u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_45e694:
    // 0x45e694: 0xc0bc284  jal         func_2F0A10
label_45e698:
    if (ctx->pc == 0x45E698u) {
        ctx->pc = 0x45E698u;
            // 0x45e698: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45E69Cu;
        goto label_45e69c;
    }
    ctx->pc = 0x45E694u;
    SET_GPR_U32(ctx, 31, 0x45E69Cu);
    ctx->pc = 0x45E698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E694u;
            // 0x45e698: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E69Cu; }
        if (ctx->pc != 0x45E69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E69Cu; }
        if (ctx->pc != 0x45E69Cu) { return; }
    }
    ctx->pc = 0x45E69Cu;
label_45e69c:
    // 0x45e69c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x45e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_45e6a0:
    // 0x45e6a0: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45e6a4:
    // 0x45e6a4: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x45e6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_45e6a8:
    // 0x45e6a8: 0x550019  multu       $v0, $s5
    ctx->pc = 0x45e6a8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45e6ac:
    // 0x45e6ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45e6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e6b0:
    // 0x45e6b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45e6b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e6b4:
    // 0x45e6b4: 0x0  nop
    ctx->pc = 0x45e6b4u;
    // NOP
label_45e6b8:
    // 0x45e6b8: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x45e6b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_45e6bc:
    // 0x45e6bc: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x45e6bcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45e6c0:
    // 0x45e6c0: 0x1010  mfhi        $v0
    ctx->pc = 0x45e6c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45e6c4:
    // 0x45e6c4: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x45e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_45e6c8:
    // 0x45e6c8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45e6cc:
    // 0x45e6cc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45e6d0:
    // 0x45e6d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45e6d4:
    // 0x45e6d4: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45e6d8:
    // 0x45e6d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45e6dc:
    // 0x45e6dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45e6e0:
    // 0x45e6e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45e6e4:
    // 0x45e6e4: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45e6e8:
    if (ctx->pc == 0x45E6E8u) {
        ctx->pc = 0x45E6E8u;
            // 0x45e6e8: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x45E6ECu;
        goto label_45e6ec;
    }
    ctx->pc = 0x45E6E4u;
    {
        const bool branch_taken_0x45e6e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E6E4u;
            // 0x45e6e8: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e6e4) {
            ctx->pc = 0x45E6F0u;
            goto label_45e6f0;
        }
    }
    ctx->pc = 0x45E6ECu;
label_45e6ec:
    // 0x45e6ec: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45e6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45e6f0:
    // 0x45e6f0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45e6f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e6f4:
    // 0x45e6f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45e6f8:
    // 0x45e6f8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45e6f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45e6fc:
    // 0x45e6fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45e700:
    // 0x45e700: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45e700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45e704:
    // 0x45e704: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45e704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e708:
    // 0x45e708: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45e708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45e70c:
    // 0x45e70c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45e710:
    // 0x45e710: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45e710u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e714:
    // 0x45e714: 0x0  nop
    ctx->pc = 0x45e714u;
    // NOP
label_45e718:
    // 0x45e718: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45e718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45e71c:
    // 0x45e71c: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x45e71cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_45e720:
    // 0x45e720: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x45e720u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_45e724:
    // 0x45e724: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45e724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45e728:
    // 0x45e728: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x45e728u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_45e72c:
    // 0x45e72c: 0xc0bc284  jal         func_2F0A10
label_45e730:
    if (ctx->pc == 0x45E730u) {
        ctx->pc = 0x45E730u;
            // 0x45e730: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45E734u;
        goto label_45e734;
    }
    ctx->pc = 0x45E72Cu;
    SET_GPR_U32(ctx, 31, 0x45E734u);
    ctx->pc = 0x45E730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E72Cu;
            // 0x45e730: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E734u; }
        if (ctx->pc != 0x45E734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E734u; }
        if (ctx->pc != 0x45E734u) { return; }
    }
    ctx->pc = 0x45E734u;
label_45e734:
    // 0x45e734: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45e734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45e738:
    // 0x45e738: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45e738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45e73c:
    // 0x45e73c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x45e73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45e740:
    // 0x45e740: 0x550019  multu       $v0, $s5
    ctx->pc = 0x45e740u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45e744:
    // 0x45e744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45e744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e748:
    // 0x45e748: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45e748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45e74c:
    // 0x45e74c: 0x0  nop
    ctx->pc = 0x45e74cu;
    // NOP
label_45e750:
    // 0x45e750: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x45e750u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_45e754:
    // 0x45e754: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x45e754u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45e758:
    // 0x45e758: 0x1010  mfhi        $v0
    ctx->pc = 0x45e758u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45e75c:
    // 0x45e75c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x45e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45e760:
    // 0x45e760: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45e760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45e764:
    // 0x45e764: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45e768:
    if (ctx->pc == 0x45E768u) {
        ctx->pc = 0x45E768u;
            // 0x45e768: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x45E76Cu;
        goto label_45e76c;
    }
    ctx->pc = 0x45E764u;
    {
        const bool branch_taken_0x45e764 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E764u;
            // 0x45e768: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e764) {
            ctx->pc = 0x45E770u;
            goto label_45e770;
        }
    }
    ctx->pc = 0x45E76Cu;
label_45e76c:
    // 0x45e76c: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45e76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45e770:
    // 0x45e770: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45e770u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e774:
    // 0x45e774: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45e774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45e778:
    // 0x45e778: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45e778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45e77c:
    // 0x45e77c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45e77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45e780:
    // 0x45e780: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45e780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45e784:
    // 0x45e784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45e784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e788:
    // 0x45e788: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45e788u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45e78c:
    // 0x45e78c: 0x0  nop
    ctx->pc = 0x45e78cu;
    // NOP
label_45e790:
    // 0x45e790: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45e790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45e794:
    // 0x45e794: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x45e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45e798:
    // 0x45e798: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x45e798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45e79c:
    // 0x45e79c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x45e79cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_45e7a0:
    // 0x45e7a0: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x45e7a0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45e7a4:
    // 0x45e7a4: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x45e7a4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_45e7a8:
    // 0x45e7a8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45e7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45e7ac:
    // 0x45e7ac: 0xc0bc284  jal         func_2F0A10
label_45e7b0:
    if (ctx->pc == 0x45E7B0u) {
        ctx->pc = 0x45E7B0u;
            // 0x45e7b0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45E7B4u;
        goto label_45e7b4;
    }
    ctx->pc = 0x45E7ACu;
    SET_GPR_U32(ctx, 31, 0x45E7B4u);
    ctx->pc = 0x45E7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45E7ACu;
            // 0x45e7b0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E7B4u; }
        if (ctx->pc != 0x45E7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45E7B4u; }
        if (ctx->pc != 0x45E7B4u) { return; }
    }
    ctx->pc = 0x45E7B4u;
label_45e7b4:
    // 0x45e7b4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x45e7b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_45e7b8:
    // 0x45e7b8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x45e7b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_45e7bc:
    // 0x45e7bc: 0x320f809  jalr        $t9
label_45e7c0:
    if (ctx->pc == 0x45E7C0u) {
        ctx->pc = 0x45E7C0u;
            // 0x45e7c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45E7C4u;
        goto label_45e7c4;
    }
    ctx->pc = 0x45E7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45E7C4u);
        ctx->pc = 0x45E7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E7BCu;
            // 0x45e7c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45E7C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45E7C4u; }
            if (ctx->pc != 0x45E7C4u) { return; }
        }
        }
    }
    ctx->pc = 0x45E7C4u;
label_45e7c4:
    // 0x45e7c4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x45e7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_45e7c8:
    // 0x45e7c8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x45e7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45e7cc:
    // 0x45e7cc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x45e7ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_45e7d0:
    // 0x45e7d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x45e7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_45e7d4:
    // 0x45e7d4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x45e7d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_45e7d8:
    // 0x45e7d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x45e7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_45e7dc:
    // 0x45e7dc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x45e7dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_45e7e0:
    // 0x45e7e0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x45e7e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_45e7e4:
    // 0x45e7e4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x45e7e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45e7e8:
    // 0x45e7e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x45e7e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45e7ec:
    // 0x45e7ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x45e7ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45e7f0:
    // 0x45e7f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x45e7f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45e7f4:
    // 0x45e7f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x45e7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45e7f8:
    // 0x45e7f8: 0x3e00008  jr          $ra
label_45e7fc:
    if (ctx->pc == 0x45E7FCu) {
        ctx->pc = 0x45E7FCu;
            // 0x45e7fc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x45E800u;
        goto label_fallthrough_0x45e7f8;
    }
    ctx->pc = 0x45E7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45E7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45E7F8u;
            // 0x45e7fc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x45e7f8:
    ctx->pc = 0x45E800u;
}
