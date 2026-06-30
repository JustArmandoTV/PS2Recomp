#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032E0D0
// Address: 0x32e0d0 - 0x32ec30
void sub_0032E0D0_0x32e0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E0D0_0x32e0d0");
#endif

    switch (ctx->pc) {
        case 0x32e0d0u: goto label_32e0d0;
        case 0x32e0d4u: goto label_32e0d4;
        case 0x32e0d8u: goto label_32e0d8;
        case 0x32e0dcu: goto label_32e0dc;
        case 0x32e0e0u: goto label_32e0e0;
        case 0x32e0e4u: goto label_32e0e4;
        case 0x32e0e8u: goto label_32e0e8;
        case 0x32e0ecu: goto label_32e0ec;
        case 0x32e0f0u: goto label_32e0f0;
        case 0x32e0f4u: goto label_32e0f4;
        case 0x32e0f8u: goto label_32e0f8;
        case 0x32e0fcu: goto label_32e0fc;
        case 0x32e100u: goto label_32e100;
        case 0x32e104u: goto label_32e104;
        case 0x32e108u: goto label_32e108;
        case 0x32e10cu: goto label_32e10c;
        case 0x32e110u: goto label_32e110;
        case 0x32e114u: goto label_32e114;
        case 0x32e118u: goto label_32e118;
        case 0x32e11cu: goto label_32e11c;
        case 0x32e120u: goto label_32e120;
        case 0x32e124u: goto label_32e124;
        case 0x32e128u: goto label_32e128;
        case 0x32e12cu: goto label_32e12c;
        case 0x32e130u: goto label_32e130;
        case 0x32e134u: goto label_32e134;
        case 0x32e138u: goto label_32e138;
        case 0x32e13cu: goto label_32e13c;
        case 0x32e140u: goto label_32e140;
        case 0x32e144u: goto label_32e144;
        case 0x32e148u: goto label_32e148;
        case 0x32e14cu: goto label_32e14c;
        case 0x32e150u: goto label_32e150;
        case 0x32e154u: goto label_32e154;
        case 0x32e158u: goto label_32e158;
        case 0x32e15cu: goto label_32e15c;
        case 0x32e160u: goto label_32e160;
        case 0x32e164u: goto label_32e164;
        case 0x32e168u: goto label_32e168;
        case 0x32e16cu: goto label_32e16c;
        case 0x32e170u: goto label_32e170;
        case 0x32e174u: goto label_32e174;
        case 0x32e178u: goto label_32e178;
        case 0x32e17cu: goto label_32e17c;
        case 0x32e180u: goto label_32e180;
        case 0x32e184u: goto label_32e184;
        case 0x32e188u: goto label_32e188;
        case 0x32e18cu: goto label_32e18c;
        case 0x32e190u: goto label_32e190;
        case 0x32e194u: goto label_32e194;
        case 0x32e198u: goto label_32e198;
        case 0x32e19cu: goto label_32e19c;
        case 0x32e1a0u: goto label_32e1a0;
        case 0x32e1a4u: goto label_32e1a4;
        case 0x32e1a8u: goto label_32e1a8;
        case 0x32e1acu: goto label_32e1ac;
        case 0x32e1b0u: goto label_32e1b0;
        case 0x32e1b4u: goto label_32e1b4;
        case 0x32e1b8u: goto label_32e1b8;
        case 0x32e1bcu: goto label_32e1bc;
        case 0x32e1c0u: goto label_32e1c0;
        case 0x32e1c4u: goto label_32e1c4;
        case 0x32e1c8u: goto label_32e1c8;
        case 0x32e1ccu: goto label_32e1cc;
        case 0x32e1d0u: goto label_32e1d0;
        case 0x32e1d4u: goto label_32e1d4;
        case 0x32e1d8u: goto label_32e1d8;
        case 0x32e1dcu: goto label_32e1dc;
        case 0x32e1e0u: goto label_32e1e0;
        case 0x32e1e4u: goto label_32e1e4;
        case 0x32e1e8u: goto label_32e1e8;
        case 0x32e1ecu: goto label_32e1ec;
        case 0x32e1f0u: goto label_32e1f0;
        case 0x32e1f4u: goto label_32e1f4;
        case 0x32e1f8u: goto label_32e1f8;
        case 0x32e1fcu: goto label_32e1fc;
        case 0x32e200u: goto label_32e200;
        case 0x32e204u: goto label_32e204;
        case 0x32e208u: goto label_32e208;
        case 0x32e20cu: goto label_32e20c;
        case 0x32e210u: goto label_32e210;
        case 0x32e214u: goto label_32e214;
        case 0x32e218u: goto label_32e218;
        case 0x32e21cu: goto label_32e21c;
        case 0x32e220u: goto label_32e220;
        case 0x32e224u: goto label_32e224;
        case 0x32e228u: goto label_32e228;
        case 0x32e22cu: goto label_32e22c;
        case 0x32e230u: goto label_32e230;
        case 0x32e234u: goto label_32e234;
        case 0x32e238u: goto label_32e238;
        case 0x32e23cu: goto label_32e23c;
        case 0x32e240u: goto label_32e240;
        case 0x32e244u: goto label_32e244;
        case 0x32e248u: goto label_32e248;
        case 0x32e24cu: goto label_32e24c;
        case 0x32e250u: goto label_32e250;
        case 0x32e254u: goto label_32e254;
        case 0x32e258u: goto label_32e258;
        case 0x32e25cu: goto label_32e25c;
        case 0x32e260u: goto label_32e260;
        case 0x32e264u: goto label_32e264;
        case 0x32e268u: goto label_32e268;
        case 0x32e26cu: goto label_32e26c;
        case 0x32e270u: goto label_32e270;
        case 0x32e274u: goto label_32e274;
        case 0x32e278u: goto label_32e278;
        case 0x32e27cu: goto label_32e27c;
        case 0x32e280u: goto label_32e280;
        case 0x32e284u: goto label_32e284;
        case 0x32e288u: goto label_32e288;
        case 0x32e28cu: goto label_32e28c;
        case 0x32e290u: goto label_32e290;
        case 0x32e294u: goto label_32e294;
        case 0x32e298u: goto label_32e298;
        case 0x32e29cu: goto label_32e29c;
        case 0x32e2a0u: goto label_32e2a0;
        case 0x32e2a4u: goto label_32e2a4;
        case 0x32e2a8u: goto label_32e2a8;
        case 0x32e2acu: goto label_32e2ac;
        case 0x32e2b0u: goto label_32e2b0;
        case 0x32e2b4u: goto label_32e2b4;
        case 0x32e2b8u: goto label_32e2b8;
        case 0x32e2bcu: goto label_32e2bc;
        case 0x32e2c0u: goto label_32e2c0;
        case 0x32e2c4u: goto label_32e2c4;
        case 0x32e2c8u: goto label_32e2c8;
        case 0x32e2ccu: goto label_32e2cc;
        case 0x32e2d0u: goto label_32e2d0;
        case 0x32e2d4u: goto label_32e2d4;
        case 0x32e2d8u: goto label_32e2d8;
        case 0x32e2dcu: goto label_32e2dc;
        case 0x32e2e0u: goto label_32e2e0;
        case 0x32e2e4u: goto label_32e2e4;
        case 0x32e2e8u: goto label_32e2e8;
        case 0x32e2ecu: goto label_32e2ec;
        case 0x32e2f0u: goto label_32e2f0;
        case 0x32e2f4u: goto label_32e2f4;
        case 0x32e2f8u: goto label_32e2f8;
        case 0x32e2fcu: goto label_32e2fc;
        case 0x32e300u: goto label_32e300;
        case 0x32e304u: goto label_32e304;
        case 0x32e308u: goto label_32e308;
        case 0x32e30cu: goto label_32e30c;
        case 0x32e310u: goto label_32e310;
        case 0x32e314u: goto label_32e314;
        case 0x32e318u: goto label_32e318;
        case 0x32e31cu: goto label_32e31c;
        case 0x32e320u: goto label_32e320;
        case 0x32e324u: goto label_32e324;
        case 0x32e328u: goto label_32e328;
        case 0x32e32cu: goto label_32e32c;
        case 0x32e330u: goto label_32e330;
        case 0x32e334u: goto label_32e334;
        case 0x32e338u: goto label_32e338;
        case 0x32e33cu: goto label_32e33c;
        case 0x32e340u: goto label_32e340;
        case 0x32e344u: goto label_32e344;
        case 0x32e348u: goto label_32e348;
        case 0x32e34cu: goto label_32e34c;
        case 0x32e350u: goto label_32e350;
        case 0x32e354u: goto label_32e354;
        case 0x32e358u: goto label_32e358;
        case 0x32e35cu: goto label_32e35c;
        case 0x32e360u: goto label_32e360;
        case 0x32e364u: goto label_32e364;
        case 0x32e368u: goto label_32e368;
        case 0x32e36cu: goto label_32e36c;
        case 0x32e370u: goto label_32e370;
        case 0x32e374u: goto label_32e374;
        case 0x32e378u: goto label_32e378;
        case 0x32e37cu: goto label_32e37c;
        case 0x32e380u: goto label_32e380;
        case 0x32e384u: goto label_32e384;
        case 0x32e388u: goto label_32e388;
        case 0x32e38cu: goto label_32e38c;
        case 0x32e390u: goto label_32e390;
        case 0x32e394u: goto label_32e394;
        case 0x32e398u: goto label_32e398;
        case 0x32e39cu: goto label_32e39c;
        case 0x32e3a0u: goto label_32e3a0;
        case 0x32e3a4u: goto label_32e3a4;
        case 0x32e3a8u: goto label_32e3a8;
        case 0x32e3acu: goto label_32e3ac;
        case 0x32e3b0u: goto label_32e3b0;
        case 0x32e3b4u: goto label_32e3b4;
        case 0x32e3b8u: goto label_32e3b8;
        case 0x32e3bcu: goto label_32e3bc;
        case 0x32e3c0u: goto label_32e3c0;
        case 0x32e3c4u: goto label_32e3c4;
        case 0x32e3c8u: goto label_32e3c8;
        case 0x32e3ccu: goto label_32e3cc;
        case 0x32e3d0u: goto label_32e3d0;
        case 0x32e3d4u: goto label_32e3d4;
        case 0x32e3d8u: goto label_32e3d8;
        case 0x32e3dcu: goto label_32e3dc;
        case 0x32e3e0u: goto label_32e3e0;
        case 0x32e3e4u: goto label_32e3e4;
        case 0x32e3e8u: goto label_32e3e8;
        case 0x32e3ecu: goto label_32e3ec;
        case 0x32e3f0u: goto label_32e3f0;
        case 0x32e3f4u: goto label_32e3f4;
        case 0x32e3f8u: goto label_32e3f8;
        case 0x32e3fcu: goto label_32e3fc;
        case 0x32e400u: goto label_32e400;
        case 0x32e404u: goto label_32e404;
        case 0x32e408u: goto label_32e408;
        case 0x32e40cu: goto label_32e40c;
        case 0x32e410u: goto label_32e410;
        case 0x32e414u: goto label_32e414;
        case 0x32e418u: goto label_32e418;
        case 0x32e41cu: goto label_32e41c;
        case 0x32e420u: goto label_32e420;
        case 0x32e424u: goto label_32e424;
        case 0x32e428u: goto label_32e428;
        case 0x32e42cu: goto label_32e42c;
        case 0x32e430u: goto label_32e430;
        case 0x32e434u: goto label_32e434;
        case 0x32e438u: goto label_32e438;
        case 0x32e43cu: goto label_32e43c;
        case 0x32e440u: goto label_32e440;
        case 0x32e444u: goto label_32e444;
        case 0x32e448u: goto label_32e448;
        case 0x32e44cu: goto label_32e44c;
        case 0x32e450u: goto label_32e450;
        case 0x32e454u: goto label_32e454;
        case 0x32e458u: goto label_32e458;
        case 0x32e45cu: goto label_32e45c;
        case 0x32e460u: goto label_32e460;
        case 0x32e464u: goto label_32e464;
        case 0x32e468u: goto label_32e468;
        case 0x32e46cu: goto label_32e46c;
        case 0x32e470u: goto label_32e470;
        case 0x32e474u: goto label_32e474;
        case 0x32e478u: goto label_32e478;
        case 0x32e47cu: goto label_32e47c;
        case 0x32e480u: goto label_32e480;
        case 0x32e484u: goto label_32e484;
        case 0x32e488u: goto label_32e488;
        case 0x32e48cu: goto label_32e48c;
        case 0x32e490u: goto label_32e490;
        case 0x32e494u: goto label_32e494;
        case 0x32e498u: goto label_32e498;
        case 0x32e49cu: goto label_32e49c;
        case 0x32e4a0u: goto label_32e4a0;
        case 0x32e4a4u: goto label_32e4a4;
        case 0x32e4a8u: goto label_32e4a8;
        case 0x32e4acu: goto label_32e4ac;
        case 0x32e4b0u: goto label_32e4b0;
        case 0x32e4b4u: goto label_32e4b4;
        case 0x32e4b8u: goto label_32e4b8;
        case 0x32e4bcu: goto label_32e4bc;
        case 0x32e4c0u: goto label_32e4c0;
        case 0x32e4c4u: goto label_32e4c4;
        case 0x32e4c8u: goto label_32e4c8;
        case 0x32e4ccu: goto label_32e4cc;
        case 0x32e4d0u: goto label_32e4d0;
        case 0x32e4d4u: goto label_32e4d4;
        case 0x32e4d8u: goto label_32e4d8;
        case 0x32e4dcu: goto label_32e4dc;
        case 0x32e4e0u: goto label_32e4e0;
        case 0x32e4e4u: goto label_32e4e4;
        case 0x32e4e8u: goto label_32e4e8;
        case 0x32e4ecu: goto label_32e4ec;
        case 0x32e4f0u: goto label_32e4f0;
        case 0x32e4f4u: goto label_32e4f4;
        case 0x32e4f8u: goto label_32e4f8;
        case 0x32e4fcu: goto label_32e4fc;
        case 0x32e500u: goto label_32e500;
        case 0x32e504u: goto label_32e504;
        case 0x32e508u: goto label_32e508;
        case 0x32e50cu: goto label_32e50c;
        case 0x32e510u: goto label_32e510;
        case 0x32e514u: goto label_32e514;
        case 0x32e518u: goto label_32e518;
        case 0x32e51cu: goto label_32e51c;
        case 0x32e520u: goto label_32e520;
        case 0x32e524u: goto label_32e524;
        case 0x32e528u: goto label_32e528;
        case 0x32e52cu: goto label_32e52c;
        case 0x32e530u: goto label_32e530;
        case 0x32e534u: goto label_32e534;
        case 0x32e538u: goto label_32e538;
        case 0x32e53cu: goto label_32e53c;
        case 0x32e540u: goto label_32e540;
        case 0x32e544u: goto label_32e544;
        case 0x32e548u: goto label_32e548;
        case 0x32e54cu: goto label_32e54c;
        case 0x32e550u: goto label_32e550;
        case 0x32e554u: goto label_32e554;
        case 0x32e558u: goto label_32e558;
        case 0x32e55cu: goto label_32e55c;
        case 0x32e560u: goto label_32e560;
        case 0x32e564u: goto label_32e564;
        case 0x32e568u: goto label_32e568;
        case 0x32e56cu: goto label_32e56c;
        case 0x32e570u: goto label_32e570;
        case 0x32e574u: goto label_32e574;
        case 0x32e578u: goto label_32e578;
        case 0x32e57cu: goto label_32e57c;
        case 0x32e580u: goto label_32e580;
        case 0x32e584u: goto label_32e584;
        case 0x32e588u: goto label_32e588;
        case 0x32e58cu: goto label_32e58c;
        case 0x32e590u: goto label_32e590;
        case 0x32e594u: goto label_32e594;
        case 0x32e598u: goto label_32e598;
        case 0x32e59cu: goto label_32e59c;
        case 0x32e5a0u: goto label_32e5a0;
        case 0x32e5a4u: goto label_32e5a4;
        case 0x32e5a8u: goto label_32e5a8;
        case 0x32e5acu: goto label_32e5ac;
        case 0x32e5b0u: goto label_32e5b0;
        case 0x32e5b4u: goto label_32e5b4;
        case 0x32e5b8u: goto label_32e5b8;
        case 0x32e5bcu: goto label_32e5bc;
        case 0x32e5c0u: goto label_32e5c0;
        case 0x32e5c4u: goto label_32e5c4;
        case 0x32e5c8u: goto label_32e5c8;
        case 0x32e5ccu: goto label_32e5cc;
        case 0x32e5d0u: goto label_32e5d0;
        case 0x32e5d4u: goto label_32e5d4;
        case 0x32e5d8u: goto label_32e5d8;
        case 0x32e5dcu: goto label_32e5dc;
        case 0x32e5e0u: goto label_32e5e0;
        case 0x32e5e4u: goto label_32e5e4;
        case 0x32e5e8u: goto label_32e5e8;
        case 0x32e5ecu: goto label_32e5ec;
        case 0x32e5f0u: goto label_32e5f0;
        case 0x32e5f4u: goto label_32e5f4;
        case 0x32e5f8u: goto label_32e5f8;
        case 0x32e5fcu: goto label_32e5fc;
        case 0x32e600u: goto label_32e600;
        case 0x32e604u: goto label_32e604;
        case 0x32e608u: goto label_32e608;
        case 0x32e60cu: goto label_32e60c;
        case 0x32e610u: goto label_32e610;
        case 0x32e614u: goto label_32e614;
        case 0x32e618u: goto label_32e618;
        case 0x32e61cu: goto label_32e61c;
        case 0x32e620u: goto label_32e620;
        case 0x32e624u: goto label_32e624;
        case 0x32e628u: goto label_32e628;
        case 0x32e62cu: goto label_32e62c;
        case 0x32e630u: goto label_32e630;
        case 0x32e634u: goto label_32e634;
        case 0x32e638u: goto label_32e638;
        case 0x32e63cu: goto label_32e63c;
        case 0x32e640u: goto label_32e640;
        case 0x32e644u: goto label_32e644;
        case 0x32e648u: goto label_32e648;
        case 0x32e64cu: goto label_32e64c;
        case 0x32e650u: goto label_32e650;
        case 0x32e654u: goto label_32e654;
        case 0x32e658u: goto label_32e658;
        case 0x32e65cu: goto label_32e65c;
        case 0x32e660u: goto label_32e660;
        case 0x32e664u: goto label_32e664;
        case 0x32e668u: goto label_32e668;
        case 0x32e66cu: goto label_32e66c;
        case 0x32e670u: goto label_32e670;
        case 0x32e674u: goto label_32e674;
        case 0x32e678u: goto label_32e678;
        case 0x32e67cu: goto label_32e67c;
        case 0x32e680u: goto label_32e680;
        case 0x32e684u: goto label_32e684;
        case 0x32e688u: goto label_32e688;
        case 0x32e68cu: goto label_32e68c;
        case 0x32e690u: goto label_32e690;
        case 0x32e694u: goto label_32e694;
        case 0x32e698u: goto label_32e698;
        case 0x32e69cu: goto label_32e69c;
        case 0x32e6a0u: goto label_32e6a0;
        case 0x32e6a4u: goto label_32e6a4;
        case 0x32e6a8u: goto label_32e6a8;
        case 0x32e6acu: goto label_32e6ac;
        case 0x32e6b0u: goto label_32e6b0;
        case 0x32e6b4u: goto label_32e6b4;
        case 0x32e6b8u: goto label_32e6b8;
        case 0x32e6bcu: goto label_32e6bc;
        case 0x32e6c0u: goto label_32e6c0;
        case 0x32e6c4u: goto label_32e6c4;
        case 0x32e6c8u: goto label_32e6c8;
        case 0x32e6ccu: goto label_32e6cc;
        case 0x32e6d0u: goto label_32e6d0;
        case 0x32e6d4u: goto label_32e6d4;
        case 0x32e6d8u: goto label_32e6d8;
        case 0x32e6dcu: goto label_32e6dc;
        case 0x32e6e0u: goto label_32e6e0;
        case 0x32e6e4u: goto label_32e6e4;
        case 0x32e6e8u: goto label_32e6e8;
        case 0x32e6ecu: goto label_32e6ec;
        case 0x32e6f0u: goto label_32e6f0;
        case 0x32e6f4u: goto label_32e6f4;
        case 0x32e6f8u: goto label_32e6f8;
        case 0x32e6fcu: goto label_32e6fc;
        case 0x32e700u: goto label_32e700;
        case 0x32e704u: goto label_32e704;
        case 0x32e708u: goto label_32e708;
        case 0x32e70cu: goto label_32e70c;
        case 0x32e710u: goto label_32e710;
        case 0x32e714u: goto label_32e714;
        case 0x32e718u: goto label_32e718;
        case 0x32e71cu: goto label_32e71c;
        case 0x32e720u: goto label_32e720;
        case 0x32e724u: goto label_32e724;
        case 0x32e728u: goto label_32e728;
        case 0x32e72cu: goto label_32e72c;
        case 0x32e730u: goto label_32e730;
        case 0x32e734u: goto label_32e734;
        case 0x32e738u: goto label_32e738;
        case 0x32e73cu: goto label_32e73c;
        case 0x32e740u: goto label_32e740;
        case 0x32e744u: goto label_32e744;
        case 0x32e748u: goto label_32e748;
        case 0x32e74cu: goto label_32e74c;
        case 0x32e750u: goto label_32e750;
        case 0x32e754u: goto label_32e754;
        case 0x32e758u: goto label_32e758;
        case 0x32e75cu: goto label_32e75c;
        case 0x32e760u: goto label_32e760;
        case 0x32e764u: goto label_32e764;
        case 0x32e768u: goto label_32e768;
        case 0x32e76cu: goto label_32e76c;
        case 0x32e770u: goto label_32e770;
        case 0x32e774u: goto label_32e774;
        case 0x32e778u: goto label_32e778;
        case 0x32e77cu: goto label_32e77c;
        case 0x32e780u: goto label_32e780;
        case 0x32e784u: goto label_32e784;
        case 0x32e788u: goto label_32e788;
        case 0x32e78cu: goto label_32e78c;
        case 0x32e790u: goto label_32e790;
        case 0x32e794u: goto label_32e794;
        case 0x32e798u: goto label_32e798;
        case 0x32e79cu: goto label_32e79c;
        case 0x32e7a0u: goto label_32e7a0;
        case 0x32e7a4u: goto label_32e7a4;
        case 0x32e7a8u: goto label_32e7a8;
        case 0x32e7acu: goto label_32e7ac;
        case 0x32e7b0u: goto label_32e7b0;
        case 0x32e7b4u: goto label_32e7b4;
        case 0x32e7b8u: goto label_32e7b8;
        case 0x32e7bcu: goto label_32e7bc;
        case 0x32e7c0u: goto label_32e7c0;
        case 0x32e7c4u: goto label_32e7c4;
        case 0x32e7c8u: goto label_32e7c8;
        case 0x32e7ccu: goto label_32e7cc;
        case 0x32e7d0u: goto label_32e7d0;
        case 0x32e7d4u: goto label_32e7d4;
        case 0x32e7d8u: goto label_32e7d8;
        case 0x32e7dcu: goto label_32e7dc;
        case 0x32e7e0u: goto label_32e7e0;
        case 0x32e7e4u: goto label_32e7e4;
        case 0x32e7e8u: goto label_32e7e8;
        case 0x32e7ecu: goto label_32e7ec;
        case 0x32e7f0u: goto label_32e7f0;
        case 0x32e7f4u: goto label_32e7f4;
        case 0x32e7f8u: goto label_32e7f8;
        case 0x32e7fcu: goto label_32e7fc;
        case 0x32e800u: goto label_32e800;
        case 0x32e804u: goto label_32e804;
        case 0x32e808u: goto label_32e808;
        case 0x32e80cu: goto label_32e80c;
        case 0x32e810u: goto label_32e810;
        case 0x32e814u: goto label_32e814;
        case 0x32e818u: goto label_32e818;
        case 0x32e81cu: goto label_32e81c;
        case 0x32e820u: goto label_32e820;
        case 0x32e824u: goto label_32e824;
        case 0x32e828u: goto label_32e828;
        case 0x32e82cu: goto label_32e82c;
        case 0x32e830u: goto label_32e830;
        case 0x32e834u: goto label_32e834;
        case 0x32e838u: goto label_32e838;
        case 0x32e83cu: goto label_32e83c;
        case 0x32e840u: goto label_32e840;
        case 0x32e844u: goto label_32e844;
        case 0x32e848u: goto label_32e848;
        case 0x32e84cu: goto label_32e84c;
        case 0x32e850u: goto label_32e850;
        case 0x32e854u: goto label_32e854;
        case 0x32e858u: goto label_32e858;
        case 0x32e85cu: goto label_32e85c;
        case 0x32e860u: goto label_32e860;
        case 0x32e864u: goto label_32e864;
        case 0x32e868u: goto label_32e868;
        case 0x32e86cu: goto label_32e86c;
        case 0x32e870u: goto label_32e870;
        case 0x32e874u: goto label_32e874;
        case 0x32e878u: goto label_32e878;
        case 0x32e87cu: goto label_32e87c;
        case 0x32e880u: goto label_32e880;
        case 0x32e884u: goto label_32e884;
        case 0x32e888u: goto label_32e888;
        case 0x32e88cu: goto label_32e88c;
        case 0x32e890u: goto label_32e890;
        case 0x32e894u: goto label_32e894;
        case 0x32e898u: goto label_32e898;
        case 0x32e89cu: goto label_32e89c;
        case 0x32e8a0u: goto label_32e8a0;
        case 0x32e8a4u: goto label_32e8a4;
        case 0x32e8a8u: goto label_32e8a8;
        case 0x32e8acu: goto label_32e8ac;
        case 0x32e8b0u: goto label_32e8b0;
        case 0x32e8b4u: goto label_32e8b4;
        case 0x32e8b8u: goto label_32e8b8;
        case 0x32e8bcu: goto label_32e8bc;
        case 0x32e8c0u: goto label_32e8c0;
        case 0x32e8c4u: goto label_32e8c4;
        case 0x32e8c8u: goto label_32e8c8;
        case 0x32e8ccu: goto label_32e8cc;
        case 0x32e8d0u: goto label_32e8d0;
        case 0x32e8d4u: goto label_32e8d4;
        case 0x32e8d8u: goto label_32e8d8;
        case 0x32e8dcu: goto label_32e8dc;
        case 0x32e8e0u: goto label_32e8e0;
        case 0x32e8e4u: goto label_32e8e4;
        case 0x32e8e8u: goto label_32e8e8;
        case 0x32e8ecu: goto label_32e8ec;
        case 0x32e8f0u: goto label_32e8f0;
        case 0x32e8f4u: goto label_32e8f4;
        case 0x32e8f8u: goto label_32e8f8;
        case 0x32e8fcu: goto label_32e8fc;
        case 0x32e900u: goto label_32e900;
        case 0x32e904u: goto label_32e904;
        case 0x32e908u: goto label_32e908;
        case 0x32e90cu: goto label_32e90c;
        case 0x32e910u: goto label_32e910;
        case 0x32e914u: goto label_32e914;
        case 0x32e918u: goto label_32e918;
        case 0x32e91cu: goto label_32e91c;
        case 0x32e920u: goto label_32e920;
        case 0x32e924u: goto label_32e924;
        case 0x32e928u: goto label_32e928;
        case 0x32e92cu: goto label_32e92c;
        case 0x32e930u: goto label_32e930;
        case 0x32e934u: goto label_32e934;
        case 0x32e938u: goto label_32e938;
        case 0x32e93cu: goto label_32e93c;
        case 0x32e940u: goto label_32e940;
        case 0x32e944u: goto label_32e944;
        case 0x32e948u: goto label_32e948;
        case 0x32e94cu: goto label_32e94c;
        case 0x32e950u: goto label_32e950;
        case 0x32e954u: goto label_32e954;
        case 0x32e958u: goto label_32e958;
        case 0x32e95cu: goto label_32e95c;
        case 0x32e960u: goto label_32e960;
        case 0x32e964u: goto label_32e964;
        case 0x32e968u: goto label_32e968;
        case 0x32e96cu: goto label_32e96c;
        case 0x32e970u: goto label_32e970;
        case 0x32e974u: goto label_32e974;
        case 0x32e978u: goto label_32e978;
        case 0x32e97cu: goto label_32e97c;
        case 0x32e980u: goto label_32e980;
        case 0x32e984u: goto label_32e984;
        case 0x32e988u: goto label_32e988;
        case 0x32e98cu: goto label_32e98c;
        case 0x32e990u: goto label_32e990;
        case 0x32e994u: goto label_32e994;
        case 0x32e998u: goto label_32e998;
        case 0x32e99cu: goto label_32e99c;
        case 0x32e9a0u: goto label_32e9a0;
        case 0x32e9a4u: goto label_32e9a4;
        case 0x32e9a8u: goto label_32e9a8;
        case 0x32e9acu: goto label_32e9ac;
        case 0x32e9b0u: goto label_32e9b0;
        case 0x32e9b4u: goto label_32e9b4;
        case 0x32e9b8u: goto label_32e9b8;
        case 0x32e9bcu: goto label_32e9bc;
        case 0x32e9c0u: goto label_32e9c0;
        case 0x32e9c4u: goto label_32e9c4;
        case 0x32e9c8u: goto label_32e9c8;
        case 0x32e9ccu: goto label_32e9cc;
        case 0x32e9d0u: goto label_32e9d0;
        case 0x32e9d4u: goto label_32e9d4;
        case 0x32e9d8u: goto label_32e9d8;
        case 0x32e9dcu: goto label_32e9dc;
        case 0x32e9e0u: goto label_32e9e0;
        case 0x32e9e4u: goto label_32e9e4;
        case 0x32e9e8u: goto label_32e9e8;
        case 0x32e9ecu: goto label_32e9ec;
        case 0x32e9f0u: goto label_32e9f0;
        case 0x32e9f4u: goto label_32e9f4;
        case 0x32e9f8u: goto label_32e9f8;
        case 0x32e9fcu: goto label_32e9fc;
        case 0x32ea00u: goto label_32ea00;
        case 0x32ea04u: goto label_32ea04;
        case 0x32ea08u: goto label_32ea08;
        case 0x32ea0cu: goto label_32ea0c;
        case 0x32ea10u: goto label_32ea10;
        case 0x32ea14u: goto label_32ea14;
        case 0x32ea18u: goto label_32ea18;
        case 0x32ea1cu: goto label_32ea1c;
        case 0x32ea20u: goto label_32ea20;
        case 0x32ea24u: goto label_32ea24;
        case 0x32ea28u: goto label_32ea28;
        case 0x32ea2cu: goto label_32ea2c;
        case 0x32ea30u: goto label_32ea30;
        case 0x32ea34u: goto label_32ea34;
        case 0x32ea38u: goto label_32ea38;
        case 0x32ea3cu: goto label_32ea3c;
        case 0x32ea40u: goto label_32ea40;
        case 0x32ea44u: goto label_32ea44;
        case 0x32ea48u: goto label_32ea48;
        case 0x32ea4cu: goto label_32ea4c;
        case 0x32ea50u: goto label_32ea50;
        case 0x32ea54u: goto label_32ea54;
        case 0x32ea58u: goto label_32ea58;
        case 0x32ea5cu: goto label_32ea5c;
        case 0x32ea60u: goto label_32ea60;
        case 0x32ea64u: goto label_32ea64;
        case 0x32ea68u: goto label_32ea68;
        case 0x32ea6cu: goto label_32ea6c;
        case 0x32ea70u: goto label_32ea70;
        case 0x32ea74u: goto label_32ea74;
        case 0x32ea78u: goto label_32ea78;
        case 0x32ea7cu: goto label_32ea7c;
        case 0x32ea80u: goto label_32ea80;
        case 0x32ea84u: goto label_32ea84;
        case 0x32ea88u: goto label_32ea88;
        case 0x32ea8cu: goto label_32ea8c;
        case 0x32ea90u: goto label_32ea90;
        case 0x32ea94u: goto label_32ea94;
        case 0x32ea98u: goto label_32ea98;
        case 0x32ea9cu: goto label_32ea9c;
        case 0x32eaa0u: goto label_32eaa0;
        case 0x32eaa4u: goto label_32eaa4;
        case 0x32eaa8u: goto label_32eaa8;
        case 0x32eaacu: goto label_32eaac;
        case 0x32eab0u: goto label_32eab0;
        case 0x32eab4u: goto label_32eab4;
        case 0x32eab8u: goto label_32eab8;
        case 0x32eabcu: goto label_32eabc;
        case 0x32eac0u: goto label_32eac0;
        case 0x32eac4u: goto label_32eac4;
        case 0x32eac8u: goto label_32eac8;
        case 0x32eaccu: goto label_32eacc;
        case 0x32ead0u: goto label_32ead0;
        case 0x32ead4u: goto label_32ead4;
        case 0x32ead8u: goto label_32ead8;
        case 0x32eadcu: goto label_32eadc;
        case 0x32eae0u: goto label_32eae0;
        case 0x32eae4u: goto label_32eae4;
        case 0x32eae8u: goto label_32eae8;
        case 0x32eaecu: goto label_32eaec;
        case 0x32eaf0u: goto label_32eaf0;
        case 0x32eaf4u: goto label_32eaf4;
        case 0x32eaf8u: goto label_32eaf8;
        case 0x32eafcu: goto label_32eafc;
        case 0x32eb00u: goto label_32eb00;
        case 0x32eb04u: goto label_32eb04;
        case 0x32eb08u: goto label_32eb08;
        case 0x32eb0cu: goto label_32eb0c;
        case 0x32eb10u: goto label_32eb10;
        case 0x32eb14u: goto label_32eb14;
        case 0x32eb18u: goto label_32eb18;
        case 0x32eb1cu: goto label_32eb1c;
        case 0x32eb20u: goto label_32eb20;
        case 0x32eb24u: goto label_32eb24;
        case 0x32eb28u: goto label_32eb28;
        case 0x32eb2cu: goto label_32eb2c;
        case 0x32eb30u: goto label_32eb30;
        case 0x32eb34u: goto label_32eb34;
        case 0x32eb38u: goto label_32eb38;
        case 0x32eb3cu: goto label_32eb3c;
        case 0x32eb40u: goto label_32eb40;
        case 0x32eb44u: goto label_32eb44;
        case 0x32eb48u: goto label_32eb48;
        case 0x32eb4cu: goto label_32eb4c;
        case 0x32eb50u: goto label_32eb50;
        case 0x32eb54u: goto label_32eb54;
        case 0x32eb58u: goto label_32eb58;
        case 0x32eb5cu: goto label_32eb5c;
        case 0x32eb60u: goto label_32eb60;
        case 0x32eb64u: goto label_32eb64;
        case 0x32eb68u: goto label_32eb68;
        case 0x32eb6cu: goto label_32eb6c;
        case 0x32eb70u: goto label_32eb70;
        case 0x32eb74u: goto label_32eb74;
        case 0x32eb78u: goto label_32eb78;
        case 0x32eb7cu: goto label_32eb7c;
        case 0x32eb80u: goto label_32eb80;
        case 0x32eb84u: goto label_32eb84;
        case 0x32eb88u: goto label_32eb88;
        case 0x32eb8cu: goto label_32eb8c;
        case 0x32eb90u: goto label_32eb90;
        case 0x32eb94u: goto label_32eb94;
        case 0x32eb98u: goto label_32eb98;
        case 0x32eb9cu: goto label_32eb9c;
        case 0x32eba0u: goto label_32eba0;
        case 0x32eba4u: goto label_32eba4;
        case 0x32eba8u: goto label_32eba8;
        case 0x32ebacu: goto label_32ebac;
        case 0x32ebb0u: goto label_32ebb0;
        case 0x32ebb4u: goto label_32ebb4;
        case 0x32ebb8u: goto label_32ebb8;
        case 0x32ebbcu: goto label_32ebbc;
        case 0x32ebc0u: goto label_32ebc0;
        case 0x32ebc4u: goto label_32ebc4;
        case 0x32ebc8u: goto label_32ebc8;
        case 0x32ebccu: goto label_32ebcc;
        case 0x32ebd0u: goto label_32ebd0;
        case 0x32ebd4u: goto label_32ebd4;
        case 0x32ebd8u: goto label_32ebd8;
        case 0x32ebdcu: goto label_32ebdc;
        case 0x32ebe0u: goto label_32ebe0;
        case 0x32ebe4u: goto label_32ebe4;
        case 0x32ebe8u: goto label_32ebe8;
        case 0x32ebecu: goto label_32ebec;
        case 0x32ebf0u: goto label_32ebf0;
        case 0x32ebf4u: goto label_32ebf4;
        case 0x32ebf8u: goto label_32ebf8;
        case 0x32ebfcu: goto label_32ebfc;
        case 0x32ec00u: goto label_32ec00;
        case 0x32ec04u: goto label_32ec04;
        case 0x32ec08u: goto label_32ec08;
        case 0x32ec0cu: goto label_32ec0c;
        case 0x32ec10u: goto label_32ec10;
        case 0x32ec14u: goto label_32ec14;
        case 0x32ec18u: goto label_32ec18;
        case 0x32ec1cu: goto label_32ec1c;
        case 0x32ec20u: goto label_32ec20;
        case 0x32ec24u: goto label_32ec24;
        case 0x32ec28u: goto label_32ec28;
        case 0x32ec2cu: goto label_32ec2c;
        default: break;
    }

    ctx->pc = 0x32e0d0u;

label_32e0d0:
    // 0x32e0d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32e0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_32e0d4:
    // 0x32e0d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32e0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_32e0d8:
    // 0x32e0d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32e0dc:
    // 0x32e0dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32e0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32e0e0:
    // 0x32e0e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32e0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32e0e4:
    // 0x32e0e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32e0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32e0e8:
    // 0x32e0e8: 0x8c830cb4  lw          $v1, 0xCB4($a0)
    ctx->pc = 0x32e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_32e0ec:
    // 0x32e0ec: 0xac830cb8  sw          $v1, 0xCB8($a0)
    ctx->pc = 0x32e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3256), GPR_U32(ctx, 3));
label_32e0f0:
    // 0x32e0f0: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x32e0f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_32e0f4:
    // 0x32e0f4: 0x2c61001b  sltiu       $at, $v1, 0x1B
    ctx->pc = 0x32e0f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
label_32e0f8:
    // 0x32e0f8: 0x102002c6  beqz        $at, . + 4 + (0x2C6 << 2)
label_32e0fc:
    if (ctx->pc == 0x32E0FCu) {
        ctx->pc = 0x32E0FCu;
            // 0x32e0fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E100u;
        goto label_32e100;
    }
    ctx->pc = 0x32E0F8u;
    {
        const bool branch_taken_0x32e0f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E0F8u;
            // 0x32e0fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e0f8) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E100u;
label_32e100:
    // 0x32e100: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x32e100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_32e104:
    // 0x32e104: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32e104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32e108:
    // 0x32e108: 0x24a5d240  addiu       $a1, $a1, -0x2DC0
    ctx->pc = 0x32e108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955584));
label_32e10c:
    // 0x32e10c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_32e110:
    // 0x32e110: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32e110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32e114:
    // 0x32e114: 0x600008  jr          $v1
label_32e118:
    if (ctx->pc == 0x32E118u) {
        ctx->pc = 0x32E11Cu;
        goto label_32e11c;
    }
    ctx->pc = 0x32E114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x32E11Cu: goto label_32e11c;
            case 0x32E144u: goto label_32e144;
            case 0x32E170u: goto label_32e170;
            case 0x32E218u: goto label_32e218;
            case 0x32E298u: goto label_32e298;
            case 0x32E34Cu: goto label_32e34c;
            case 0x32E3B4u: goto label_32e3b4;
            case 0x32E3E0u: goto label_32e3e0;
            case 0x32E408u: goto label_32e408;
            case 0x32E42Cu: goto label_32e42c;
            case 0x32E4CCu: goto label_32e4cc;
            case 0x32E580u: goto label_32e580;
            case 0x32E5C8u: goto label_32e5c8;
            case 0x32E62Cu: goto label_32e62c;
            case 0x32E688u: goto label_32e688;
            case 0x32E7A8u: goto label_32e7a8;
            case 0x32E8F0u: goto label_32e8f0;
            case 0x32E924u: goto label_32e924;
            case 0x32EA88u: goto label_32ea88;
            case 0x32EAA0u: goto label_32eaa0;
            case 0x32EADCu: goto label_32eadc;
            case 0x32EB38u: goto label_32eb38;
            case 0x32EB50u: goto label_32eb50;
            case 0x32EB68u: goto label_32eb68;
            case 0x32EBD0u: goto label_32ebd0;
            case 0x32EBE8u: goto label_32ebe8;
            case 0x32EC00u: goto label_32ec00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x32E11Cu;
label_32e11c:
    // 0x32e11c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32e11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32e120:
    // 0x32e120: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x32e120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_32e124:
    // 0x32e124: 0x320f809  jalr        $t9
label_32e128:
    if (ctx->pc == 0x32E128u) {
        ctx->pc = 0x32E12Cu;
        goto label_32e12c;
    }
    ctx->pc = 0x32E124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E12Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E12Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E12Cu; }
            if (ctx->pc != 0x32E12Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32E12Cu;
label_32e12c:
    // 0x32e12c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e130:
    // 0x32e130: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32e130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32e134:
    // 0x32e134: 0x320f809  jalr        $t9
label_32e138:
    if (ctx->pc == 0x32E138u) {
        ctx->pc = 0x32E138u;
            // 0x32e138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E13Cu;
        goto label_32e13c;
    }
    ctx->pc = 0x32E134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E13Cu);
        ctx->pc = 0x32E138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E134u;
            // 0x32e138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E13Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E13Cu; }
            if (ctx->pc != 0x32E13Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32E13Cu;
label_32e13c:
    // 0x32e13c: 0x100002b6  b           . + 4 + (0x2B6 << 2)
label_32e140:
    if (ctx->pc == 0x32E140u) {
        ctx->pc = 0x32E140u;
            // 0x32e140: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x32E144u;
        goto label_32e144;
    }
    ctx->pc = 0x32E13Cu;
    {
        const bool branch_taken_0x32e13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E13Cu;
            // 0x32e140: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e13c) {
            ctx->pc = 0x32EC18u;
            goto label_32ec18;
        }
    }
    ctx->pc = 0x32E144u;
label_32e144:
    // 0x32e144: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32e144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32e148:
    // 0x32e148: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x32e148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_32e14c:
    // 0x32e14c: 0x320f809  jalr        $t9
label_32e150:
    if (ctx->pc == 0x32E150u) {
        ctx->pc = 0x32E154u;
        goto label_32e154;
    }
    ctx->pc = 0x32E14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E154u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E154u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E154u; }
            if (ctx->pc != 0x32E154u) { return; }
        }
        }
    }
    ctx->pc = 0x32E154u;
label_32e154:
    // 0x32e154: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e158:
    // 0x32e158: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x32e158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32e15c:
    // 0x32e15c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x32e15cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_32e160:
    // 0x32e160: 0x320f809  jalr        $t9
label_32e164:
    if (ctx->pc == 0x32E164u) {
        ctx->pc = 0x32E164u;
            // 0x32e164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E168u;
        goto label_32e168;
    }
    ctx->pc = 0x32E160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E168u);
        ctx->pc = 0x32E164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E160u;
            // 0x32e164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E168u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E168u; }
            if (ctx->pc != 0x32E168u) { return; }
        }
        }
    }
    ctx->pc = 0x32E168u;
label_32e168:
    // 0x32e168: 0x100002aa  b           . + 4 + (0x2AA << 2)
label_32e16c:
    if (ctx->pc == 0x32E16Cu) {
        ctx->pc = 0x32E170u;
        goto label_32e170;
    }
    ctx->pc = 0x32E168u;
    {
        const bool branch_taken_0x32e168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e168) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E170u;
label_32e170:
    // 0x32e170: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x32e170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_32e174:
    // 0x32e174: 0x8e0507bc  lw          $a1, 0x7BC($s0)
    ctx->pc = 0x32e174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1980)));
label_32e178:
    // 0x32e178: 0x8c640ed0  lw          $a0, 0xED0($v1)
    ctx->pc = 0x32e178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3792)));
label_32e17c:
    // 0x32e17c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32e180:
    // 0x32e180: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x32e180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_32e184:
    // 0x32e184: 0x8c650790  lw          $a1, 0x790($v1)
    ctx->pc = 0x32e184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1936)));
label_32e188:
    // 0x32e188: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
label_32e18c:
    if (ctx->pc == 0x32E18Cu) {
        ctx->pc = 0x32E18Cu;
            // 0x32e18c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E190u;
        goto label_32e190;
    }
    ctx->pc = 0x32E188u;
    {
        const bool branch_taken_0x32e188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e188) {
            ctx->pc = 0x32E18Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E188u;
            // 0x32e18c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E1C8u;
            goto label_32e1c8;
        }
    }
    ctx->pc = 0x32E190u;
label_32e190:
    // 0x32e190: 0x8c6607c8  lw          $a2, 0x7C8($v1)
    ctx->pc = 0x32e190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1992)));
label_32e194:
    // 0x32e194: 0xc0ab89c  jal         func_2AE270
label_32e198:
    if (ctx->pc == 0x32E198u) {
        ctx->pc = 0x32E198u;
            // 0x32e198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E19Cu;
        goto label_32e19c;
    }
    ctx->pc = 0x32E194u;
    SET_GPR_U32(ctx, 31, 0x32E19Cu);
    ctx->pc = 0x32E198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E194u;
            // 0x32e198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E19Cu; }
        if (ctx->pc != 0x32E19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E19Cu; }
        if (ctx->pc != 0x32E19Cu) { return; }
    }
    ctx->pc = 0x32E19Cu;
label_32e19c:
    // 0x32e19c: 0x8e0307bc  lw          $v1, 0x7BC($s0)
    ctx->pc = 0x32e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1980)));
label_32e1a0:
    // 0x32e1a0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x32e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32e1a4:
    // 0x32e1a4: 0xae0407bc  sw          $a0, 0x7BC($s0)
    ctx->pc = 0x32e1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1980), GPR_U32(ctx, 4));
label_32e1a8:
    // 0x32e1a8: 0x8e0307c4  lw          $v1, 0x7C4($s0)
    ctx->pc = 0x32e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1988)));
label_32e1ac:
    // 0x32e1ac: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x32e1acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32e1b0:
    // 0x32e1b0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_32e1b4:
    if (ctx->pc == 0x32E1B4u) {
        ctx->pc = 0x32E1B8u;
        goto label_32e1b8;
    }
    ctx->pc = 0x32E1B0u;
    {
        const bool branch_taken_0x32e1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e1b0) {
            ctx->pc = 0x32E1C4u;
            goto label_32e1c4;
        }
    }
    ctx->pc = 0x32E1B8u;
label_32e1b8:
    // 0x32e1b8: 0xae0007bc  sw          $zero, 0x7BC($s0)
    ctx->pc = 0x32e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1980), GPR_U32(ctx, 0));
label_32e1bc:
    // 0x32e1bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_32e1c0:
    if (ctx->pc == 0x32E1C0u) {
        ctx->pc = 0x32E1C0u;
            // 0x32e1c0: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x32E1C4u;
        goto label_32e1c4;
    }
    ctx->pc = 0x32E1BCu;
    {
        const bool branch_taken_0x32e1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E1BCu;
            // 0x32e1c0: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1bc) {
            ctx->pc = 0x32E1C8u;
            goto label_32e1c8;
        }
    }
    ctx->pc = 0x32E1C4u;
label_32e1c4:
    // 0x32e1c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x32e1c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e1c8:
    // 0x32e1c8: 0x10600292  beqz        $v1, . + 4 + (0x292 << 2)
label_32e1cc:
    if (ctx->pc == 0x32E1CCu) {
        ctx->pc = 0x32E1D0u;
        goto label_32e1d0;
    }
    ctx->pc = 0x32E1C8u;
    {
        const bool branch_taken_0x32e1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e1c8) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E1D0u;
label_32e1d0:
    // 0x32e1d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32e1d4:
    // 0x32e1d4: 0x8e0307c0  lw          $v1, 0x7C0($s0)
    ctx->pc = 0x32e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
label_32e1d8:
    // 0x32e1d8: 0x8c42f550  lw          $v0, -0xAB0($v0)
    ctx->pc = 0x32e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964560)));
label_32e1dc:
    // 0x32e1dc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x32e1dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32e1e0:
    // 0x32e1e0: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_32e1e4:
    if (ctx->pc == 0x32E1E4u) {
        ctx->pc = 0x32E1E4u;
            // 0x32e1e4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x32E1E8u;
        goto label_32e1e8;
    }
    ctx->pc = 0x32E1E0u;
    {
        const bool branch_taken_0x32e1e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e1e0) {
            ctx->pc = 0x32E1E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E1E0u;
            // 0x32e1e4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E200u;
            goto label_32e200;
        }
    }
    ctx->pc = 0x32E1E8u;
label_32e1e8:
    // 0x32e1e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e1e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e1ec:
    // 0x32e1ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32e1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32e1f0:
    // 0x32e1f0: 0x320f809  jalr        $t9
label_32e1f4:
    if (ctx->pc == 0x32E1F4u) {
        ctx->pc = 0x32E1F4u;
            // 0x32e1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E1F8u;
        goto label_32e1f8;
    }
    ctx->pc = 0x32E1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E1F8u);
        ctx->pc = 0x32E1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E1F0u;
            // 0x32e1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E1F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E1F8u; }
            if (ctx->pc != 0x32E1F8u) { return; }
        }
        }
    }
    ctx->pc = 0x32E1F8u;
label_32e1f8:
    // 0x32e1f8: 0x10000286  b           . + 4 + (0x286 << 2)
label_32e1fc:
    if (ctx->pc == 0x32E1FCu) {
        ctx->pc = 0x32E200u;
        goto label_32e200;
    }
    ctx->pc = 0x32E1F8u;
    {
        const bool branch_taken_0x32e1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e1f8) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E200u;
label_32e200:
    // 0x32e200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32e204:
    // 0x32e204: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x32e204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_32e208:
    // 0x32e208: 0x320f809  jalr        $t9
label_32e20c:
    if (ctx->pc == 0x32E20Cu) {
        ctx->pc = 0x32E20Cu;
            // 0x32e20c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x32E210u;
        goto label_32e210;
    }
    ctx->pc = 0x32E208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E210u);
        ctx->pc = 0x32E20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E208u;
            // 0x32e20c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E210u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E210u; }
            if (ctx->pc != 0x32E210u) { return; }
        }
        }
    }
    ctx->pc = 0x32E210u;
label_32e210:
    // 0x32e210: 0x10000280  b           . + 4 + (0x280 << 2)
label_32e214:
    if (ctx->pc == 0x32E214u) {
        ctx->pc = 0x32E218u;
        goto label_32e218;
    }
    ctx->pc = 0x32E210u;
    {
        const bool branch_taken_0x32e210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e210) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E218u;
label_32e218:
    // 0x32e218: 0x8e0607c0  lw          $a2, 0x7C0($s0)
    ctx->pc = 0x32e218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
label_32e21c:
    // 0x32e21c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32e220:
    // 0x32e220: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x32e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_32e224:
    // 0x32e224: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x32e224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_32e228:
    // 0x32e228: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x32e228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_32e22c:
    // 0x32e22c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x32e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_32e230:
    // 0x32e230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32e234:
    // 0x32e234: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x32e234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_32e238:
    // 0x32e238: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
label_32e23c:
    if (ctx->pc == 0x32E23Cu) {
        ctx->pc = 0x32E23Cu;
            // 0x32e23c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E240u;
        goto label_32e240;
    }
    ctx->pc = 0x32E238u;
    {
        const bool branch_taken_0x32e238 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e238) {
            ctx->pc = 0x32E23Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E238u;
            // 0x32e23c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E27Cu;
            goto label_32e27c;
        }
    }
    ctx->pc = 0x32E240u;
label_32e240:
    // 0x32e240: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32e240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32e244:
    // 0x32e244: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x32e244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_32e248:
    // 0x32e248: 0xc0ab89c  jal         func_2AE270
label_32e24c:
    if (ctx->pc == 0x32E24Cu) {
        ctx->pc = 0x32E24Cu;
            // 0x32e24c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E250u;
        goto label_32e250;
    }
    ctx->pc = 0x32E248u;
    SET_GPR_U32(ctx, 31, 0x32E250u);
    ctx->pc = 0x32E24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E248u;
            // 0x32e24c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E250u; }
        if (ctx->pc != 0x32E250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E250u; }
        if (ctx->pc != 0x32E250u) { return; }
    }
    ctx->pc = 0x32E250u;
label_32e250:
    // 0x32e250: 0x8e0307c0  lw          $v1, 0x7C0($s0)
    ctx->pc = 0x32e250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
label_32e254:
    // 0x32e254: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32e254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32e258:
    // 0x32e258: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32e258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32e25c:
    // 0x32e25c: 0xae0307c0  sw          $v1, 0x7C0($s0)
    ctx->pc = 0x32e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 3));
label_32e260:
    // 0x32e260: 0x8c42f550  lw          $v0, -0xAB0($v0)
    ctx->pc = 0x32e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964560)));
label_32e264:
    // 0x32e264: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x32e264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32e268:
    // 0x32e268: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_32e26c:
    if (ctx->pc == 0x32E26Cu) {
        ctx->pc = 0x32E270u;
        goto label_32e270;
    }
    ctx->pc = 0x32E268u;
    {
        const bool branch_taken_0x32e268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e268) {
            ctx->pc = 0x32E278u;
            goto label_32e278;
        }
    }
    ctx->pc = 0x32E270u;
label_32e270:
    // 0x32e270: 0x10000002  b           . + 4 + (0x2 << 2)
label_32e274:
    if (ctx->pc == 0x32E274u) {
        ctx->pc = 0x32E274u;
            // 0x32e274: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x32E278u;
        goto label_32e278;
    }
    ctx->pc = 0x32E270u;
    {
        const bool branch_taken_0x32e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E270u;
            // 0x32e274: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e270) {
            ctx->pc = 0x32E27Cu;
            goto label_32e27c;
        }
    }
    ctx->pc = 0x32E278u;
label_32e278:
    // 0x32e278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32e278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e27c:
    // 0x32e27c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e27cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e280:
    // 0x32e280: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x32e280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32e284:
    // 0x32e284: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x32e284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_32e288:
    // 0x32e288: 0x320f809  jalr        $t9
label_32e28c:
    if (ctx->pc == 0x32E28Cu) {
        ctx->pc = 0x32E28Cu;
            // 0x32e28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E290u;
        goto label_32e290;
    }
    ctx->pc = 0x32E288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E290u);
        ctx->pc = 0x32E28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E288u;
            // 0x32e28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E290u; }
            if (ctx->pc != 0x32E290u) { return; }
        }
        }
    }
    ctx->pc = 0x32E290u;
label_32e290:
    // 0x32e290: 0x10000260  b           . + 4 + (0x260 << 2)
label_32e294:
    if (ctx->pc == 0x32E294u) {
        ctx->pc = 0x32E298u;
        goto label_32e298;
    }
    ctx->pc = 0x32E290u;
    {
        const bool branch_taken_0x32e290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e290) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E298u;
label_32e298:
    // 0x32e298: 0x92030c69  lbu         $v1, 0xC69($s0)
    ctx->pc = 0x32e298u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3177)));
label_32e29c:
    // 0x32e29c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32e2a0:
    // 0x32e2a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x32e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_32e2a4:
    // 0x32e2a4: 0x8c420858  lw          $v0, 0x858($v0)
    ctx->pc = 0x32e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2136)));
label_32e2a8:
    // 0x32e2a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32e2ac:
    // 0x32e2ac: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_32e2b0:
    if (ctx->pc == 0x32E2B0u) {
        ctx->pc = 0x32E2B0u;
            // 0x32e2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E2B4u;
        goto label_32e2b4;
    }
    ctx->pc = 0x32E2ACu;
    {
        const bool branch_taken_0x32e2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e2ac) {
            ctx->pc = 0x32E2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E2ACu;
            // 0x32e2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E330u;
            goto label_32e330;
        }
    }
    ctx->pc = 0x32E2B4u;
label_32e2b4:
    // 0x32e2b4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x32e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32e2b8:
    // 0x32e2b8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x32e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32e2bc:
    // 0x32e2bc: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
label_32e2c0:
    if (ctx->pc == 0x32E2C0u) {
        ctx->pc = 0x32E2C4u;
        goto label_32e2c4;
    }
    ctx->pc = 0x32E2BCu;
    {
        const bool branch_taken_0x32e2bc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x32e2bc) {
            ctx->pc = 0x32E2E8u;
            goto label_32e2e8;
        }
    }
    ctx->pc = 0x32E2C4u;
label_32e2c4:
    // 0x32e2c4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_32e2c8:
    // 0x32e2c8: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x32e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_32e2cc:
    // 0x32e2cc: 0x8c62085c  lw          $v0, 0x85C($v1)
    ctx->pc = 0x32e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2140)));
label_32e2d0:
    // 0x32e2d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32e2d4:
    // 0x32e2d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32e2d8:
    if (ctx->pc == 0x32E2D8u) {
        ctx->pc = 0x32E2DCu;
        goto label_32e2dc;
    }
    ctx->pc = 0x32E2D4u;
    {
        const bool branch_taken_0x32e2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e2d4) {
            ctx->pc = 0x32E2E8u;
            goto label_32e2e8;
        }
    }
    ctx->pc = 0x32E2DCu;
label_32e2dc:
    // 0x32e2dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x32e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_32e2e0:
    // 0x32e2e0: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_32e2e4:
    if (ctx->pc == 0x32E2E4u) {
        ctx->pc = 0x32E2E4u;
            // 0x32e2e4: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->pc = 0x32E2E8u;
        goto label_32e2e8;
    }
    ctx->pc = 0x32E2E0u;
    {
        const bool branch_taken_0x32e2e0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x32E2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E2E0u;
            // 0x32e2e4: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e2e0) {
            ctx->pc = 0x32E2CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32e2cc;
        }
    }
    ctx->pc = 0x32E2E8u;
label_32e2e8:
    // 0x32e2e8: 0x4810010  bgez        $a0, . + 4 + (0x10 << 2)
label_32e2ec:
    if (ctx->pc == 0x32E2ECu) {
        ctx->pc = 0x32E2F0u;
        goto label_32e2f0;
    }
    ctx->pc = 0x32E2E8u;
    {
        const bool branch_taken_0x32e2e8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x32e2e8) {
            ctx->pc = 0x32E32Cu;
            goto label_32e32c;
        }
    }
    ctx->pc = 0x32E2F0u;
label_32e2f0:
    // 0x32e2f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32e2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e2f4:
    // 0x32e2f4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x32e2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32e2f8:
    // 0x32e2f8: 0x8e42085c  lw          $v0, 0x85C($s2)
    ctx->pc = 0x32e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2140)));
label_32e2fc:
    // 0x32e2fc: 0xc0a8c48  jal         func_2A3120
label_32e300:
    if (ctx->pc == 0x32E300u) {
        ctx->pc = 0x32E300u;
            // 0x32e300: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x32E304u;
        goto label_32e304;
    }
    ctx->pc = 0x32E2FCu;
    SET_GPR_U32(ctx, 31, 0x32E304u);
    ctx->pc = 0x32E300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E2FCu;
            // 0x32e300: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3120u;
    if (runtime->hasFunction(0x2A3120u)) {
        auto targetFn = runtime->lookupFunction(0x2A3120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E304u; }
        if (ctx->pc != 0x32E304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3120_0x2a3120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E304u; }
        if (ctx->pc != 0x32E304u) { return; }
    }
    ctx->pc = 0x32E304u;
label_32e304:
    // 0x32e304: 0x92020c69  lbu         $v0, 0xC69($s0)
    ctx->pc = 0x32e304u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3177)));
label_32e308:
    // 0x32e308: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32e308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32e30c:
    // 0x32e30c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x32e30cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32e310:
    // 0x32e310: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_32e314:
    if (ctx->pc == 0x32E314u) {
        ctx->pc = 0x32E314u;
            // 0x32e314: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x32E318u;
        goto label_32e318;
    }
    ctx->pc = 0x32E310u;
    {
        const bool branch_taken_0x32e310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E310u;
            // 0x32e314: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e310) {
            ctx->pc = 0x32E2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32e2f8;
        }
    }
    ctx->pc = 0x32E318u;
label_32e318:
    // 0x32e318: 0x260409dc  addiu       $a0, $s0, 0x9DC
    ctx->pc = 0x32e318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2524));
label_32e31c:
    // 0x32e31c: 0xc0a8bd8  jal         func_2A2F60
label_32e320:
    if (ctx->pc == 0x32E320u) {
        ctx->pc = 0x32E320u;
            // 0x32e320: 0x260509fc  addiu       $a1, $s0, 0x9FC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2556));
        ctx->pc = 0x32E324u;
        goto label_32e324;
    }
    ctx->pc = 0x32E31Cu;
    SET_GPR_U32(ctx, 31, 0x32E324u);
    ctx->pc = 0x32E320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E31Cu;
            // 0x32e320: 0x260509fc  addiu       $a1, $s0, 0x9FC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2556));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2F60u;
    if (runtime->hasFunction(0x2A2F60u)) {
        auto targetFn = runtime->lookupFunction(0x2A2F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E324u; }
        if (ctx->pc != 0x32E324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2F60_0x2a2f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E324u; }
        if (ctx->pc != 0x32E324u) { return; }
    }
    ctx->pc = 0x32E324u;
label_32e324:
    // 0x32e324: 0x10000002  b           . + 4 + (0x2 << 2)
label_32e328:
    if (ctx->pc == 0x32E328u) {
        ctx->pc = 0x32E328u;
            // 0x32e328: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x32E32Cu;
        goto label_32e32c;
    }
    ctx->pc = 0x32E324u;
    {
        const bool branch_taken_0x32e324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E324u;
            // 0x32e328: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e324) {
            ctx->pc = 0x32E330u;
            goto label_32e330;
        }
    }
    ctx->pc = 0x32E32Cu;
label_32e32c:
    // 0x32e32c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32e32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e330:
    // 0x32e330: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e334:
    // 0x32e334: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x32e334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32e338:
    // 0x32e338: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x32e338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_32e33c:
    // 0x32e33c: 0x320f809  jalr        $t9
label_32e340:
    if (ctx->pc == 0x32E340u) {
        ctx->pc = 0x32E340u;
            // 0x32e340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E344u;
        goto label_32e344;
    }
    ctx->pc = 0x32E33Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E344u);
        ctx->pc = 0x32E340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E33Cu;
            // 0x32e340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E344u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E344u; }
            if (ctx->pc != 0x32E344u) { return; }
        }
        }
    }
    ctx->pc = 0x32E344u;
label_32e344:
    // 0x32e344: 0x10000233  b           . + 4 + (0x233 << 2)
label_32e348:
    if (ctx->pc == 0x32E348u) {
        ctx->pc = 0x32E34Cu;
        goto label_32e34c;
    }
    ctx->pc = 0x32E344u;
    {
        const bool branch_taken_0x32e344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e344) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E34Cu;
label_32e34c:
    // 0x32e34c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32e350:
    // 0x32e350: 0x8e0507b0  lw          $a1, 0x7B0($s0)
    ctx->pc = 0x32e350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1968)));
label_32e354:
    // 0x32e354: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_32e358:
    if (ctx->pc == 0x32E358u) {
        ctx->pc = 0x32E358u;
            // 0x32e358: 0x8c510ed0  lw          $s1, 0xED0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
        ctx->pc = 0x32E35Cu;
        goto label_32e35c;
    }
    ctx->pc = 0x32E354u;
    {
        const bool branch_taken_0x32e354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E354u;
            // 0x32e358: 0x8c510ed0  lw          $s1, 0xED0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e354) {
            ctx->pc = 0x32E394u;
            goto label_32e394;
        }
    }
    ctx->pc = 0x32E35Cu;
label_32e35c:
    // 0x32e35c: 0x8e0207b4  lw          $v0, 0x7B4($s0)
    ctx->pc = 0x32e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1972)));
label_32e360:
    // 0x32e360: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_32e364:
    if (ctx->pc == 0x32E364u) {
        ctx->pc = 0x32E364u;
            // 0x32e364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E368u;
        goto label_32e368;
    }
    ctx->pc = 0x32E360u;
    {
        const bool branch_taken_0x32e360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e360) {
            ctx->pc = 0x32E364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E360u;
            // 0x32e364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E398u;
            goto label_32e398;
        }
    }
    ctx->pc = 0x32E368u;
label_32e368:
    // 0x32e368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32e368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32e36c:
    // 0x32e36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32e36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e370:
    // 0x32e370: 0xc0ab89c  jal         func_2AE270
label_32e374:
    if (ctx->pc == 0x32E374u) {
        ctx->pc = 0x32E374u;
            // 0x32e374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E378u;
        goto label_32e378;
    }
    ctx->pc = 0x32E370u;
    SET_GPR_U32(ctx, 31, 0x32E378u);
    ctx->pc = 0x32E374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E370u;
            // 0x32e374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E378u; }
        if (ctx->pc != 0x32E378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E378u; }
        if (ctx->pc != 0x32E378u) { return; }
    }
    ctx->pc = 0x32E378u;
label_32e378:
    // 0x32e378: 0x8e0507b4  lw          $a1, 0x7B4($s0)
    ctx->pc = 0x32e378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1972)));
label_32e37c:
    // 0x32e37c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32e37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32e380:
    // 0x32e380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32e380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e384:
    // 0x32e384: 0xc0ab89c  jal         func_2AE270
label_32e388:
    if (ctx->pc == 0x32E388u) {
        ctx->pc = 0x32E388u;
            // 0x32e388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E38Cu;
        goto label_32e38c;
    }
    ctx->pc = 0x32E384u;
    SET_GPR_U32(ctx, 31, 0x32E38Cu);
    ctx->pc = 0x32E388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E384u;
            // 0x32e388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E38Cu; }
        if (ctx->pc != 0x32E38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E38Cu; }
        if (ctx->pc != 0x32E38Cu) { return; }
    }
    ctx->pc = 0x32E38Cu;
label_32e38c:
    // 0x32e38c: 0x10000002  b           . + 4 + (0x2 << 2)
label_32e390:
    if (ctx->pc == 0x32E390u) {
        ctx->pc = 0x32E390u;
            // 0x32e390: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x32E394u;
        goto label_32e394;
    }
    ctx->pc = 0x32E38Cu;
    {
        const bool branch_taken_0x32e38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E38Cu;
            // 0x32e390: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e38c) {
            ctx->pc = 0x32E398u;
            goto label_32e398;
        }
    }
    ctx->pc = 0x32E394u;
label_32e394:
    // 0x32e394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32e394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e398:
    // 0x32e398: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e39c:
    // 0x32e39c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x32e39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32e3a0:
    // 0x32e3a0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x32e3a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_32e3a4:
    // 0x32e3a4: 0x320f809  jalr        $t9
label_32e3a8:
    if (ctx->pc == 0x32E3A8u) {
        ctx->pc = 0x32E3A8u;
            // 0x32e3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E3ACu;
        goto label_32e3ac;
    }
    ctx->pc = 0x32E3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E3ACu);
        ctx->pc = 0x32E3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E3A4u;
            // 0x32e3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E3ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E3ACu; }
            if (ctx->pc != 0x32E3ACu) { return; }
        }
        }
    }
    ctx->pc = 0x32E3ACu;
label_32e3ac:
    // 0x32e3ac: 0x10000219  b           . + 4 + (0x219 << 2)
label_32e3b0:
    if (ctx->pc == 0x32E3B0u) {
        ctx->pc = 0x32E3B4u;
        goto label_32e3b4;
    }
    ctx->pc = 0x32E3ACu;
    {
        const bool branch_taken_0x32e3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e3ac) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E3B4u;
label_32e3b4:
    // 0x32e3b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32e3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32e3b8:
    // 0x32e3b8: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x32e3b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_32e3bc:
    // 0x32e3bc: 0x320f809  jalr        $t9
label_32e3c0:
    if (ctx->pc == 0x32E3C0u) {
        ctx->pc = 0x32E3C4u;
        goto label_32e3c4;
    }
    ctx->pc = 0x32E3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E3C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E3C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E3C4u; }
            if (ctx->pc != 0x32E3C4u) { return; }
        }
        }
    }
    ctx->pc = 0x32E3C4u;
label_32e3c4:
    // 0x32e3c4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e3c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e3c8:
    // 0x32e3c8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x32e3c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32e3cc:
    // 0x32e3cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x32e3ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_32e3d0:
    // 0x32e3d0: 0x320f809  jalr        $t9
label_32e3d4:
    if (ctx->pc == 0x32E3D4u) {
        ctx->pc = 0x32E3D4u;
            // 0x32e3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E3D8u;
        goto label_32e3d8;
    }
    ctx->pc = 0x32E3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E3D8u);
        ctx->pc = 0x32E3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E3D0u;
            // 0x32e3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E3D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E3D8u; }
            if (ctx->pc != 0x32E3D8u) { return; }
        }
        }
    }
    ctx->pc = 0x32E3D8u;
label_32e3d8:
    // 0x32e3d8: 0x1000020e  b           . + 4 + (0x20E << 2)
label_32e3dc:
    if (ctx->pc == 0x32E3DCu) {
        ctx->pc = 0x32E3E0u;
        goto label_32e3e0;
    }
    ctx->pc = 0x32E3D8u;
    {
        const bool branch_taken_0x32e3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e3d8) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E3E0u;
label_32e3e0:
    // 0x32e3e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32e3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32e3e4:
    // 0x32e3e4: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x32e3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_32e3e8:
    // 0x32e3e8: 0x320f809  jalr        $t9
label_32e3ec:
    if (ctx->pc == 0x32E3ECu) {
        ctx->pc = 0x32E3F0u;
        goto label_32e3f0;
    }
    ctx->pc = 0x32E3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E3F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E3F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E3F0u; }
            if (ctx->pc != 0x32E3F0u) { return; }
        }
        }
    }
    ctx->pc = 0x32E3F0u;
label_32e3f0:
    // 0x32e3f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e3f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e3f4:
    // 0x32e3f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32e3f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32e3f8:
    // 0x32e3f8: 0x320f809  jalr        $t9
label_32e3fc:
    if (ctx->pc == 0x32E3FCu) {
        ctx->pc = 0x32E3FCu;
            // 0x32e3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E400u;
        goto label_32e400;
    }
    ctx->pc = 0x32E3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E400u);
        ctx->pc = 0x32E3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E3F8u;
            // 0x32e3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E400u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E400u; }
            if (ctx->pc != 0x32E400u) { return; }
        }
        }
    }
    ctx->pc = 0x32E400u;
label_32e400:
    // 0x32e400: 0x10000204  b           . + 4 + (0x204 << 2)
label_32e404:
    if (ctx->pc == 0x32E404u) {
        ctx->pc = 0x32E408u;
        goto label_32e408;
    }
    ctx->pc = 0x32E400u;
    {
        const bool branch_taken_0x32e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e400) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E408u;
label_32e408:
    // 0x32e408: 0xc0ccb34  jal         func_332CD0
label_32e40c:
    if (ctx->pc == 0x32E40Cu) {
        ctx->pc = 0x32E410u;
        goto label_32e410;
    }
    ctx->pc = 0x32E408u;
    SET_GPR_U32(ctx, 31, 0x32E410u);
    ctx->pc = 0x332CD0u;
    if (runtime->hasFunction(0x332CD0u)) {
        auto targetFn = runtime->lookupFunction(0x332CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E410u; }
        if (ctx->pc != 0x32E410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00332CD0_0x332cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E410u; }
        if (ctx->pc != 0x32E410u) { return; }
    }
    ctx->pc = 0x32E410u;
label_32e410:
    // 0x32e410: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e414:
    // 0x32e414: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x32e414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32e418:
    // 0x32e418: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x32e418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_32e41c:
    // 0x32e41c: 0x320f809  jalr        $t9
label_32e420:
    if (ctx->pc == 0x32E420u) {
        ctx->pc = 0x32E420u;
            // 0x32e420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E424u;
        goto label_32e424;
    }
    ctx->pc = 0x32E41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E424u);
        ctx->pc = 0x32E420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E41Cu;
            // 0x32e420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E424u; }
            if (ctx->pc != 0x32E424u) { return; }
        }
        }
    }
    ctx->pc = 0x32E424u;
label_32e424:
    // 0x32e424: 0x100001fb  b           . + 4 + (0x1FB << 2)
label_32e428:
    if (ctx->pc == 0x32E428u) {
        ctx->pc = 0x32E42Cu;
        goto label_32e42c;
    }
    ctx->pc = 0x32E424u;
    {
        const bool branch_taken_0x32e424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e424) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E42Cu;
label_32e42c:
    // 0x32e42c: 0xc040180  jal         func_100600
label_32e430:
    if (ctx->pc == 0x32E430u) {
        ctx->pc = 0x32E430u;
            // 0x32e430: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x32E434u;
        goto label_32e434;
    }
    ctx->pc = 0x32E42Cu;
    SET_GPR_U32(ctx, 31, 0x32E434u);
    ctx->pc = 0x32E430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E42Cu;
            // 0x32e430: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E434u; }
        if (ctx->pc != 0x32E434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E434u; }
        if (ctx->pc != 0x32E434u) { return; }
    }
    ctx->pc = 0x32E434u;
label_32e434:
    // 0x32e434: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_32e438:
    if (ctx->pc == 0x32E438u) {
        ctx->pc = 0x32E438u;
            // 0x32e438: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E43Cu;
        goto label_32e43c;
    }
    ctx->pc = 0x32E434u;
    {
        const bool branch_taken_0x32e434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E434u;
            // 0x32e438: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e434) {
            ctx->pc = 0x32E4A4u;
            goto label_32e4a4;
        }
    }
    ctx->pc = 0x32E43Cu;
label_32e43c:
    // 0x32e43c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x32e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_32e440:
    // 0x32e440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32e440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32e444:
    // 0x32e444: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x32e444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_32e448:
    // 0x32e448: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x32e448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32e44c:
    // 0x32e44c: 0xc10ca68  jal         func_4329A0
label_32e450:
    if (ctx->pc == 0x32E450u) {
        ctx->pc = 0x32E450u;
            // 0x32e450: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x32E454u;
        goto label_32e454;
    }
    ctx->pc = 0x32E44Cu;
    SET_GPR_U32(ctx, 31, 0x32E454u);
    ctx->pc = 0x32E450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E44Cu;
            // 0x32e450: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E454u; }
        if (ctx->pc != 0x32E454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E454u; }
        if (ctx->pc != 0x32E454u) { return; }
    }
    ctx->pc = 0x32E454u;
label_32e454:
    // 0x32e454: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32e454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32e458:
    // 0x32e458: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32e458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32e45c:
    // 0x32e45c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x32e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_32e460:
    // 0x32e460: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x32e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_32e464:
    // 0x32e464: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x32e464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_32e468:
    // 0x32e468: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x32e468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_32e46c:
    // 0x32e46c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_32e470:
    // 0x32e470: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32e470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_32e474:
    // 0x32e474: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x32e474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_32e478:
    // 0x32e478: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x32e478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_32e47c:
    // 0x32e47c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x32e47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_32e480:
    // 0x32e480: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32e480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e484:
    // 0x32e484: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x32e484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_32e488:
    // 0x32e488: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x32e488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_32e48c:
    // 0x32e48c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32e490:
    // 0x32e490: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x32e490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_32e494:
    // 0x32e494: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x32e494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_32e498:
    // 0x32e498: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x32e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_32e49c:
    // 0x32e49c: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x32e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_32e4a0:
    // 0x32e4a0: 0xa220006c  sb          $zero, 0x6C($s1)
    ctx->pc = 0x32e4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 0));
label_32e4a4:
    // 0x32e4a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e4a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e4a8:
    // 0x32e4a8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x32e4a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_32e4ac:
    // 0x32e4ac: 0x320f809  jalr        $t9
label_32e4b0:
    if (ctx->pc == 0x32E4B0u) {
        ctx->pc = 0x32E4B0u;
            // 0x32e4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E4B4u;
        goto label_32e4b4;
    }
    ctx->pc = 0x32E4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E4B4u);
        ctx->pc = 0x32E4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E4ACu;
            // 0x32e4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E4B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E4B4u; }
            if (ctx->pc != 0x32E4B4u) { return; }
        }
        }
    }
    ctx->pc = 0x32E4B4u;
label_32e4b4:
    // 0x32e4b4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e4b8:
    // 0x32e4b8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32e4b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32e4bc:
    // 0x32e4bc: 0x320f809  jalr        $t9
label_32e4c0:
    if (ctx->pc == 0x32E4C0u) {
        ctx->pc = 0x32E4C0u;
            // 0x32e4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E4C4u;
        goto label_32e4c4;
    }
    ctx->pc = 0x32E4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E4C4u);
        ctx->pc = 0x32E4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E4BCu;
            // 0x32e4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E4C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E4C4u; }
            if (ctx->pc != 0x32E4C4u) { return; }
        }
        }
    }
    ctx->pc = 0x32E4C4u;
label_32e4c4:
    // 0x32e4c4: 0x100001d3  b           . + 4 + (0x1D3 << 2)
label_32e4c8:
    if (ctx->pc == 0x32E4C8u) {
        ctx->pc = 0x32E4CCu;
        goto label_32e4cc;
    }
    ctx->pc = 0x32E4C4u;
    {
        const bool branch_taken_0x32e4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e4c4) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E4CCu;
label_32e4cc:
    // 0x32e4cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32e4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32e4d0:
    // 0x32e4d0: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x32e4d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_32e4d4:
    // 0x32e4d4: 0x320f809  jalr        $t9
label_32e4d8:
    if (ctx->pc == 0x32E4D8u) {
        ctx->pc = 0x32E4DCu;
        goto label_32e4dc;
    }
    ctx->pc = 0x32E4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E4DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E4DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E4DCu; }
            if (ctx->pc != 0x32E4DCu) { return; }
        }
        }
    }
    ctx->pc = 0x32E4DCu;
label_32e4dc:
    // 0x32e4dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e4e0:
    // 0x32e4e0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x32e4e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_32e4e4:
    // 0x32e4e4: 0x320f809  jalr        $t9
label_32e4e8:
    if (ctx->pc == 0x32E4E8u) {
        ctx->pc = 0x32E4E8u;
            // 0x32e4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E4ECu;
        goto label_32e4ec;
    }
    ctx->pc = 0x32E4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E4ECu);
        ctx->pc = 0x32E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E4E4u;
            // 0x32e4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E4ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E4ECu; }
            if (ctx->pc != 0x32E4ECu) { return; }
        }
        }
    }
    ctx->pc = 0x32E4ECu;
label_32e4ec:
    // 0x32e4ec: 0x8e020978  lw          $v0, 0x978($s0)
    ctx->pc = 0x32e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2424)));
label_32e4f0:
    // 0x32e4f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x32e4f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32e4f4:
    // 0x32e4f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_32e4f8:
    if (ctx->pc == 0x32E4F8u) {
        ctx->pc = 0x32E4F8u;
            // 0x32e4f8: 0xa2020c74  sb          $v0, 0xC74($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3188), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x32E4FCu;
        goto label_32e4fc;
    }
    ctx->pc = 0x32E4F4u;
    {
        const bool branch_taken_0x32e4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e4f4) {
            ctx->pc = 0x32E4F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E4F4u;
            // 0x32e4f8: 0xa2020c74  sb          $v0, 0xC74($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3188), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E508u;
            goto label_32e508;
        }
    }
    ctx->pc = 0x32E4FCu;
label_32e4fc:
    // 0x32e4fc: 0x8e020988  lw          $v0, 0x988($s0)
    ctx->pc = 0x32e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2440)));
label_32e500:
    // 0x32e500: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x32e500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32e504:
    // 0x32e504: 0xa2020c74  sb          $v0, 0xC74($s0)
    ctx->pc = 0x32e504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3188), (uint8_t)GPR_U32(ctx, 2));
label_32e508:
    // 0x32e508: 0x92020c74  lbu         $v0, 0xC74($s0)
    ctx->pc = 0x32e508u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3188)));
label_32e50c:
    // 0x32e50c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_32e510:
    if (ctx->pc == 0x32E510u) {
        ctx->pc = 0x32E510u;
            // 0x32e510: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x32E514u;
        goto label_32e514;
    }
    ctx->pc = 0x32E50Cu;
    {
        const bool branch_taken_0x32e50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e50c) {
            ctx->pc = 0x32E510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E50Cu;
            // 0x32e510: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E53Cu;
            goto label_32e53c;
        }
    }
    ctx->pc = 0x32E514u;
label_32e514:
    // 0x32e514: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e518:
    // 0x32e518: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x32e518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_32e51c:
    // 0x32e51c: 0x320f809  jalr        $t9
label_32e520:
    if (ctx->pc == 0x32E520u) {
        ctx->pc = 0x32E520u;
            // 0x32e520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E524u;
        goto label_32e524;
    }
    ctx->pc = 0x32E51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E524u);
        ctx->pc = 0x32E520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E51Cu;
            // 0x32e520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E524u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E524u; }
            if (ctx->pc != 0x32E524u) { return; }
        }
        }
    }
    ctx->pc = 0x32E524u;
label_32e524:
    // 0x32e524: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e528:
    // 0x32e528: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32e528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32e52c:
    // 0x32e52c: 0x320f809  jalr        $t9
label_32e530:
    if (ctx->pc == 0x32E530u) {
        ctx->pc = 0x32E530u;
            // 0x32e530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E534u;
        goto label_32e534;
    }
    ctx->pc = 0x32E52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E534u);
        ctx->pc = 0x32E530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E52Cu;
            // 0x32e530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E534u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E534u; }
            if (ctx->pc != 0x32E534u) { return; }
        }
        }
    }
    ctx->pc = 0x32E534u;
label_32e534:
    // 0x32e534: 0x100001b7  b           . + 4 + (0x1B7 << 2)
label_32e538:
    if (ctx->pc == 0x32E538u) {
        ctx->pc = 0x32E53Cu;
        goto label_32e53c;
    }
    ctx->pc = 0x32E534u;
    {
        const bool branch_taken_0x32e534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e534) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E53Cu;
label_32e53c:
    // 0x32e53c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x32e53cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_32e540:
    // 0x32e540: 0x320f809  jalr        $t9
label_32e544:
    if (ctx->pc == 0x32E544u) {
        ctx->pc = 0x32E544u;
            // 0x32e544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E548u;
        goto label_32e548;
    }
    ctx->pc = 0x32E540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E548u);
        ctx->pc = 0x32E544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E540u;
            // 0x32e544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E548u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E548u; }
            if (ctx->pc != 0x32E548u) { return; }
        }
        }
    }
    ctx->pc = 0x32E548u;
label_32e548:
    // 0x32e548: 0xc040180  jal         func_100600
label_32e54c:
    if (ctx->pc == 0x32E54Cu) {
        ctx->pc = 0x32E54Cu;
            // 0x32e54c: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->pc = 0x32E550u;
        goto label_32e550;
    }
    ctx->pc = 0x32E548u;
    SET_GPR_U32(ctx, 31, 0x32E550u);
    ctx->pc = 0x32E54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E548u;
            // 0x32e54c: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E550u; }
        if (ctx->pc != 0x32E550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E550u; }
        if (ctx->pc != 0x32E550u) { return; }
    }
    ctx->pc = 0x32E550u;
label_32e550:
    // 0x32e550: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_32e554:
    if (ctx->pc == 0x32E554u) {
        ctx->pc = 0x32E554u;
            // 0x32e554: 0xae020cac  sw          $v0, 0xCAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3244), GPR_U32(ctx, 2));
        ctx->pc = 0x32E558u;
        goto label_32e558;
    }
    ctx->pc = 0x32E550u;
    {
        const bool branch_taken_0x32e550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e550) {
            ctx->pc = 0x32E554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E550u;
            // 0x32e554: 0xae020cac  sw          $v0, 0xCAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E564u;
            goto label_32e564;
        }
    }
    ctx->pc = 0x32E558u;
label_32e558:
    // 0x32e558: 0xc126fc0  jal         func_49BF00
label_32e55c:
    if (ctx->pc == 0x32E55Cu) {
        ctx->pc = 0x32E55Cu;
            // 0x32e55c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E560u;
        goto label_32e560;
    }
    ctx->pc = 0x32E558u;
    SET_GPR_U32(ctx, 31, 0x32E560u);
    ctx->pc = 0x32E55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E558u;
            // 0x32e55c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49BF00u;
    if (runtime->hasFunction(0x49BF00u)) {
        auto targetFn = runtime->lookupFunction(0x49BF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E560u; }
        if (ctx->pc != 0x32E560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049BF00_0x49bf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E560u; }
        if (ctx->pc != 0x32E560u) { return; }
    }
    ctx->pc = 0x32E560u;
label_32e560:
    // 0x32e560: 0xae020cac  sw          $v0, 0xCAC($s0)
    ctx->pc = 0x32e560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3244), GPR_U32(ctx, 2));
label_32e564:
    // 0x32e564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32e568:
    // 0x32e568: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e56c:
    // 0x32e56c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32e56cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32e570:
    // 0x32e570: 0x320f809  jalr        $t9
label_32e574:
    if (ctx->pc == 0x32E574u) {
        ctx->pc = 0x32E574u;
            // 0x32e574: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x32E578u;
        goto label_32e578;
    }
    ctx->pc = 0x32E570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E578u);
        ctx->pc = 0x32E574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E570u;
            // 0x32e574: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E578u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E578u; }
            if (ctx->pc != 0x32E578u) { return; }
        }
        }
    }
    ctx->pc = 0x32E578u;
label_32e578:
    // 0x32e578: 0x100001a6  b           . + 4 + (0x1A6 << 2)
label_32e57c:
    if (ctx->pc == 0x32E57Cu) {
        ctx->pc = 0x32E580u;
        goto label_32e580;
    }
    ctx->pc = 0x32E578u;
    {
        const bool branch_taken_0x32e578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e578) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E580u;
label_32e580:
    // 0x32e580: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32e580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32e584:
    // 0x32e584: 0xc0cbc04  jal         func_32F010
label_32e588:
    if (ctx->pc == 0x32E588u) {
        ctx->pc = 0x32E588u;
            // 0x32e588: 0xae020cb4  sw          $v0, 0xCB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3252), GPR_U32(ctx, 2));
        ctx->pc = 0x32E58Cu;
        goto label_32e58c;
    }
    ctx->pc = 0x32E584u;
    SET_GPR_U32(ctx, 31, 0x32E58Cu);
    ctx->pc = 0x32E588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E584u;
            // 0x32e588: 0xae020cb4  sw          $v0, 0xCB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32F010u;
    if (runtime->hasFunction(0x32F010u)) {
        auto targetFn = runtime->lookupFunction(0x32F010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E58Cu; }
        if (ctx->pc != 0x32E58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032F010_0x32f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E58Cu; }
        if (ctx->pc != 0x32E58Cu) { return; }
    }
    ctx->pc = 0x32E58Cu;
label_32e58c:
    // 0x32e58c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e58cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e590:
    // 0x32e590: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x32e590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32e594:
    // 0x32e594: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x32e594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_32e598:
    // 0x32e598: 0x320f809  jalr        $t9
label_32e59c:
    if (ctx->pc == 0x32E59Cu) {
        ctx->pc = 0x32E59Cu;
            // 0x32e59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E5A0u;
        goto label_32e5a0;
    }
    ctx->pc = 0x32E598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E5A0u);
        ctx->pc = 0x32E59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E598u;
            // 0x32e59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E5A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E5A0u; }
            if (ctx->pc != 0x32E5A0u) { return; }
        }
        }
    }
    ctx->pc = 0x32E5A0u;
label_32e5a0:
    // 0x32e5a0: 0x92030c77  lbu         $v1, 0xC77($s0)
    ctx->pc = 0x32e5a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3191)));
label_32e5a4:
    // 0x32e5a4: 0x1060019b  beqz        $v1, . + 4 + (0x19B << 2)
label_32e5a8:
    if (ctx->pc == 0x32E5A8u) {
        ctx->pc = 0x32E5ACu;
        goto label_32e5ac;
    }
    ctx->pc = 0x32E5A4u;
    {
        const bool branch_taken_0x32e5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e5a4) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E5ACu;
label_32e5ac:
    // 0x32e5ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e5b0:
    // 0x32e5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32e5b4:
    // 0x32e5b4: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x32e5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_32e5b8:
    // 0x32e5b8: 0x320f809  jalr        $t9
label_32e5bc:
    if (ctx->pc == 0x32E5BCu) {
        ctx->pc = 0x32E5BCu;
            // 0x32e5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E5C0u;
        goto label_32e5c0;
    }
    ctx->pc = 0x32E5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E5C0u);
        ctx->pc = 0x32E5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E5B8u;
            // 0x32e5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E5C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E5C0u; }
            if (ctx->pc != 0x32E5C0u) { return; }
        }
        }
    }
    ctx->pc = 0x32E5C0u;
label_32e5c0:
    // 0x32e5c0: 0x10000194  b           . + 4 + (0x194 << 2)
label_32e5c4:
    if (ctx->pc == 0x32E5C4u) {
        ctx->pc = 0x32E5C8u;
        goto label_32e5c8;
    }
    ctx->pc = 0x32E5C0u;
    {
        const bool branch_taken_0x32e5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e5c0) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E5C8u;
label_32e5c8:
    // 0x32e5c8: 0x92020c77  lbu         $v0, 0xC77($s0)
    ctx->pc = 0x32e5c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3191)));
label_32e5cc:
    // 0x32e5cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_32e5d0:
    if (ctx->pc == 0x32E5D0u) {
        ctx->pc = 0x32E5D0u;
            // 0x32e5d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x32E5D4u;
        goto label_32e5d4;
    }
    ctx->pc = 0x32E5CCu;
    {
        const bool branch_taken_0x32e5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e5cc) {
            ctx->pc = 0x32E5D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E5CCu;
            // 0x32e5d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E5E4u;
            goto label_32e5e4;
        }
    }
    ctx->pc = 0x32E5D4u;
label_32e5d4:
    // 0x32e5d4: 0xc0cbc04  jal         func_32F010
label_32e5d8:
    if (ctx->pc == 0x32E5D8u) {
        ctx->pc = 0x32E5DCu;
        goto label_32e5dc;
    }
    ctx->pc = 0x32E5D4u;
    SET_GPR_U32(ctx, 31, 0x32E5DCu);
    ctx->pc = 0x32F010u;
    if (runtime->hasFunction(0x32F010u)) {
        auto targetFn = runtime->lookupFunction(0x32F010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E5DCu; }
        if (ctx->pc != 0x32E5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032F010_0x32f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E5DCu; }
        if (ctx->pc != 0x32E5DCu) { return; }
    }
    ctx->pc = 0x32E5DCu;
label_32e5dc:
    // 0x32e5dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_32e5e0:
    if (ctx->pc == 0x32E5E0u) {
        ctx->pc = 0x32E5E0u;
            // 0x32e5e0: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x32E5E4u;
        goto label_32e5e4;
    }
    ctx->pc = 0x32E5DCu;
    {
        const bool branch_taken_0x32e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E5DCu;
            // 0x32e5e0: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e5dc) {
            ctx->pc = 0x32E5F4u;
            goto label_32e5f4;
        }
    }
    ctx->pc = 0x32E5E4u;
label_32e5e4:
    // 0x32e5e4: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x32e5e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_32e5e8:
    // 0x32e5e8: 0x320f809  jalr        $t9
label_32e5ec:
    if (ctx->pc == 0x32E5ECu) {
        ctx->pc = 0x32E5F0u;
        goto label_32e5f0;
    }
    ctx->pc = 0x32E5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E5F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E5F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E5F0u; }
            if (ctx->pc != 0x32E5F0u) { return; }
        }
        }
    }
    ctx->pc = 0x32E5F0u;
label_32e5f0:
    // 0x32e5f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e5f4:
    // 0x32e5f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32e5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32e5f8:
    // 0x32e5f8: 0x320f809  jalr        $t9
label_32e5fc:
    if (ctx->pc == 0x32E5FCu) {
        ctx->pc = 0x32E5FCu;
            // 0x32e5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E600u;
        goto label_32e600;
    }
    ctx->pc = 0x32E5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E600u);
        ctx->pc = 0x32E5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E5F8u;
            // 0x32e5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E600u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E600u; }
            if (ctx->pc != 0x32E600u) { return; }
        }
        }
    }
    ctx->pc = 0x32E600u;
label_32e600:
    // 0x32e600: 0xc040180  jal         func_100600
label_32e604:
    if (ctx->pc == 0x32E604u) {
        ctx->pc = 0x32E604u;
            // 0x32e604: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->pc = 0x32E608u;
        goto label_32e608;
    }
    ctx->pc = 0x32E600u;
    SET_GPR_U32(ctx, 31, 0x32E608u);
    ctx->pc = 0x32E604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E600u;
            // 0x32e604: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E608u; }
        if (ctx->pc != 0x32E608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E608u; }
        if (ctx->pc != 0x32E608u) { return; }
    }
    ctx->pc = 0x32E608u;
label_32e608:
    // 0x32e608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32e608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32e60c:
    // 0x32e60c: 0x50800181  beql        $a0, $zero, . + 4 + (0x181 << 2)
label_32e610:
    if (ctx->pc == 0x32E610u) {
        ctx->pc = 0x32E610u;
            // 0x32e610: 0xae040cac  sw          $a0, 0xCAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3244), GPR_U32(ctx, 4));
        ctx->pc = 0x32E614u;
        goto label_32e614;
    }
    ctx->pc = 0x32E60Cu;
    {
        const bool branch_taken_0x32e60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e60c) {
            ctx->pc = 0x32E610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E60Cu;
            // 0x32e610: 0xae040cac  sw          $a0, 0xCAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3244), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E614u;
label_32e614:
    // 0x32e614: 0xc126fc0  jal         func_49BF00
label_32e618:
    if (ctx->pc == 0x32E618u) {
        ctx->pc = 0x32E61Cu;
        goto label_32e61c;
    }
    ctx->pc = 0x32E614u;
    SET_GPR_U32(ctx, 31, 0x32E61Cu);
    ctx->pc = 0x49BF00u;
    if (runtime->hasFunction(0x49BF00u)) {
        auto targetFn = runtime->lookupFunction(0x49BF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E61Cu; }
        if (ctx->pc != 0x32E61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049BF00_0x49bf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E61Cu; }
        if (ctx->pc != 0x32E61Cu) { return; }
    }
    ctx->pc = 0x32E61Cu;
label_32e61c:
    // 0x32e61c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32e61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32e620:
    // 0x32e620: 0xae040cac  sw          $a0, 0xCAC($s0)
    ctx->pc = 0x32e620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3244), GPR_U32(ctx, 4));
label_32e624:
    // 0x32e624: 0x1000017b  b           . + 4 + (0x17B << 2)
label_32e628:
    if (ctx->pc == 0x32E628u) {
        ctx->pc = 0x32E62Cu;
        goto label_32e62c;
    }
    ctx->pc = 0x32E624u;
    {
        const bool branch_taken_0x32e624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e624) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E62Cu;
label_32e62c:
    // 0x32e62c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x32e62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32e630:
    // 0x32e630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32e630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e634:
    // 0x32e634: 0xae040cb4  sw          $a0, 0xCB4($s0)
    ctx->pc = 0x32e634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3252), GPR_U32(ctx, 4));
label_32e638:
    // 0x32e638: 0x8e050cac  lw          $a1, 0xCAC($s0)
    ctx->pc = 0x32e638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3244)));
label_32e63c:
    // 0x32e63c: 0x90a40010  lbu         $a0, 0x10($a1)
    ctx->pc = 0x32e63cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_32e640:
    // 0x32e640: 0x5483000b  bnel        $a0, $v1, . + 4 + (0xB << 2)
label_32e644:
    if (ctx->pc == 0x32E644u) {
        ctx->pc = 0x32E644u;
            // 0x32e644: 0x92030c77  lbu         $v1, 0xC77($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3191)));
        ctx->pc = 0x32E648u;
        goto label_32e648;
    }
    ctx->pc = 0x32E640u;
    {
        const bool branch_taken_0x32e640 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32e640) {
            ctx->pc = 0x32E644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E640u;
            // 0x32e644: 0x92030c77  lbu         $v1, 0xC77($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3191)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E670u;
            goto label_32e670;
        }
    }
    ctx->pc = 0x32E648u;
label_32e648:
    // 0x32e648: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32e648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32e64c:
    // 0x32e64c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x32e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_32e650:
    // 0x32e650: 0xc057b7c  jal         func_15EDF0
label_32e654:
    if (ctx->pc == 0x32E654u) {
        ctx->pc = 0x32E654u;
            // 0x32e654: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x32E658u;
        goto label_32e658;
    }
    ctx->pc = 0x32E650u;
    SET_GPR_U32(ctx, 31, 0x32E658u);
    ctx->pc = 0x32E654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E650u;
            // 0x32e654: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E658u; }
        if (ctx->pc != 0x32E658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E658u; }
        if (ctx->pc != 0x32E658u) { return; }
    }
    ctx->pc = 0x32E658u;
label_32e658:
    // 0x32e658: 0xae000cac  sw          $zero, 0xCAC($s0)
    ctx->pc = 0x32e658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3244), GPR_U32(ctx, 0));
label_32e65c:
    // 0x32e65c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e65cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e660:
    // 0x32e660: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32e660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32e664:
    // 0x32e664: 0x320f809  jalr        $t9
label_32e668:
    if (ctx->pc == 0x32E668u) {
        ctx->pc = 0x32E668u;
            // 0x32e668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E66Cu;
        goto label_32e66c;
    }
    ctx->pc = 0x32E664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E66Cu);
        ctx->pc = 0x32E668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E664u;
            // 0x32e668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E66Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E66Cu; }
            if (ctx->pc != 0x32E66Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32E66Cu;
label_32e66c:
    // 0x32e66c: 0x92030c77  lbu         $v1, 0xC77($s0)
    ctx->pc = 0x32e66cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3191)));
label_32e670:
    // 0x32e670: 0x10600168  beqz        $v1, . + 4 + (0x168 << 2)
label_32e674:
    if (ctx->pc == 0x32E674u) {
        ctx->pc = 0x32E678u;
        goto label_32e678;
    }
    ctx->pc = 0x32E670u;
    {
        const bool branch_taken_0x32e670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e670) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E678u;
label_32e678:
    // 0x32e678: 0xc0cbc04  jal         func_32F010
label_32e67c:
    if (ctx->pc == 0x32E67Cu) {
        ctx->pc = 0x32E67Cu;
            // 0x32e67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E680u;
        goto label_32e680;
    }
    ctx->pc = 0x32E678u;
    SET_GPR_U32(ctx, 31, 0x32E680u);
    ctx->pc = 0x32E67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E678u;
            // 0x32e67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32F010u;
    if (runtime->hasFunction(0x32F010u)) {
        auto targetFn = runtime->lookupFunction(0x32F010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E680u; }
        if (ctx->pc != 0x32E680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032F010_0x32f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E680u; }
        if (ctx->pc != 0x32E680u) { return; }
    }
    ctx->pc = 0x32E680u;
label_32e680:
    // 0x32e680: 0x10000164  b           . + 4 + (0x164 << 2)
label_32e684:
    if (ctx->pc == 0x32E684u) {
        ctx->pc = 0x32E688u;
        goto label_32e688;
    }
    ctx->pc = 0x32E680u;
    {
        const bool branch_taken_0x32e680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e680) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E688u;
label_32e688:
    // 0x32e688: 0x92020c77  lbu         $v0, 0xC77($s0)
    ctx->pc = 0x32e688u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3191)));
label_32e68c:
    // 0x32e68c: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
label_32e690:
    if (ctx->pc == 0x32E690u) {
        ctx->pc = 0x32E690u;
            // 0x32e690: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x32E694u;
        goto label_32e694;
    }
    ctx->pc = 0x32E68Cu;
    {
        const bool branch_taken_0x32e68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e68c) {
            ctx->pc = 0x32E690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E68Cu;
            // 0x32e690: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E74Cu;
            goto label_32e74c;
        }
    }
    ctx->pc = 0x32E694u;
label_32e694:
    // 0x32e694: 0xc0cbc04  jal         func_32F010
label_32e698:
    if (ctx->pc == 0x32E698u) {
        ctx->pc = 0x32E69Cu;
        goto label_32e69c;
    }
    ctx->pc = 0x32E694u;
    SET_GPR_U32(ctx, 31, 0x32E69Cu);
    ctx->pc = 0x32F010u;
    if (runtime->hasFunction(0x32F010u)) {
        auto targetFn = runtime->lookupFunction(0x32F010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E69Cu; }
        if (ctx->pc != 0x32E69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032F010_0x32f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E69Cu; }
        if (ctx->pc != 0x32E69Cu) { return; }
    }
    ctx->pc = 0x32E69Cu;
label_32e69c:
    // 0x32e69c: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x32e69cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_32e6a0:
    // 0x32e6a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32e6a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e6a4:
    // 0x32e6a4: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x32e6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_32e6a8:
    // 0x32e6a8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32e6ac:
    // 0x32e6ac: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x32e6acu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_32e6b0:
    // 0x32e6b0: 0x8c820e34  lw          $v0, 0xE34($a0)
    ctx->pc = 0x32e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_32e6b4:
    // 0x32e6b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_32e6b8:
    if (ctx->pc == 0x32E6B8u) {
        ctx->pc = 0x32E6B8u;
            // 0x32e6b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E6BCu;
        goto label_32e6bc;
    }
    ctx->pc = 0x32E6B4u;
    {
        const bool branch_taken_0x32e6b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32E6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E6B4u;
            // 0x32e6b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e6b4) {
            ctx->pc = 0x32E6D0u;
            goto label_32e6d0;
        }
    }
    ctx->pc = 0x32E6BCu;
label_32e6bc:
    // 0x32e6bc: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x32e6bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_32e6c0:
    // 0x32e6c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_32e6c4:
    if (ctx->pc == 0x32E6C4u) {
        ctx->pc = 0x32E6C8u;
        goto label_32e6c8;
    }
    ctx->pc = 0x32E6C0u;
    {
        const bool branch_taken_0x32e6c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e6c0) {
            ctx->pc = 0x32E6D0u;
            goto label_32e6d0;
        }
    }
    ctx->pc = 0x32E6C8u;
label_32e6c8:
    // 0x32e6c8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x32e6c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32e6cc:
    // 0x32e6cc: 0x0  nop
    ctx->pc = 0x32e6ccu;
    // NOP
label_32e6d0:
    // 0x32e6d0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_32e6d4:
    if (ctx->pc == 0x32E6D4u) {
        ctx->pc = 0x32E6D8u;
        goto label_32e6d8;
    }
    ctx->pc = 0x32E6D0u;
    {
        const bool branch_taken_0x32e6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e6d0) {
            ctx->pc = 0x32E6F0u;
            goto label_32e6f0;
        }
    }
    ctx->pc = 0x32E6D8u;
label_32e6d8:
    // 0x32e6d8: 0xc075eb4  jal         func_1D7AD0
label_32e6dc:
    if (ctx->pc == 0x32E6DCu) {
        ctx->pc = 0x32E6E0u;
        goto label_32e6e0;
    }
    ctx->pc = 0x32E6D8u;
    SET_GPR_U32(ctx, 31, 0x32E6E0u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E6E0u; }
        if (ctx->pc != 0x32E6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E6E0u; }
        if (ctx->pc != 0x32E6E0u) { return; }
    }
    ctx->pc = 0x32E6E0u;
label_32e6e0:
    // 0x32e6e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_32e6e4:
    if (ctx->pc == 0x32E6E4u) {
        ctx->pc = 0x32E6E8u;
        goto label_32e6e8;
    }
    ctx->pc = 0x32E6E0u;
    {
        const bool branch_taken_0x32e6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e6e0) {
            ctx->pc = 0x32E6F0u;
            goto label_32e6f0;
        }
    }
    ctx->pc = 0x32E6E8u;
label_32e6e8:
    // 0x32e6e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32e6e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e6ec:
    // 0x32e6ec: 0x0  nop
    ctx->pc = 0x32e6ecu;
    // NOP
label_32e6f0:
    // 0x32e6f0: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
label_32e6f4:
    if (ctx->pc == 0x32E6F4u) {
        ctx->pc = 0x32E6F8u;
        goto label_32e6f8;
    }
    ctx->pc = 0x32E6F0u;
    {
        const bool branch_taken_0x32e6f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e6f0) {
            ctx->pc = 0x32E730u;
            goto label_32e730;
        }
    }
    ctx->pc = 0x32E6F8u;
label_32e6f8:
    // 0x32e6f8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32e6fc:
    // 0x32e6fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32e700:
    // 0x32e700: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x32e700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_32e704:
    // 0x32e704: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_32e708:
    if (ctx->pc == 0x32E708u) {
        ctx->pc = 0x32E70Cu;
        goto label_32e70c;
    }
    ctx->pc = 0x32E704u;
    {
        const bool branch_taken_0x32e704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32e704) {
            ctx->pc = 0x32E730u;
            goto label_32e730;
        }
    }
    ctx->pc = 0x32E70Cu;
label_32e70c:
    // 0x32e70c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32e70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32e710:
    // 0x32e710: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x32e710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_32e714:
    // 0x32e714: 0x320f809  jalr        $t9
label_32e718:
    if (ctx->pc == 0x32E718u) {
        ctx->pc = 0x32E718u;
            // 0x32e718: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x32E71Cu;
        goto label_32e71c;
    }
    ctx->pc = 0x32E714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E71Cu);
        ctx->pc = 0x32E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E714u;
            // 0x32e718: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E71Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E71Cu; }
            if (ctx->pc != 0x32E71Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32E71Cu;
label_32e71c:
    // 0x32e71c: 0xc0761d4  jal         func_1D8750
label_32e720:
    if (ctx->pc == 0x32E720u) {
        ctx->pc = 0x32E720u;
            // 0x32e720: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x32E724u;
        goto label_32e724;
    }
    ctx->pc = 0x32E71Cu;
    SET_GPR_U32(ctx, 31, 0x32E724u);
    ctx->pc = 0x32E720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E71Cu;
            // 0x32e720: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8750u;
    if (runtime->hasFunction(0x1D8750u)) {
        auto targetFn = runtime->lookupFunction(0x1D8750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E724u; }
        if (ctx->pc != 0x32E724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8750_0x1d8750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E724u; }
        if (ctx->pc != 0x32E724u) { return; }
    }
    ctx->pc = 0x32E724u;
label_32e724:
    // 0x32e724: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32e724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32e728:
    // 0x32e728: 0xc07626c  jal         func_1D89B0
label_32e72c:
    if (ctx->pc == 0x32E72Cu) {
        ctx->pc = 0x32E72Cu;
            // 0x32e72c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x32E730u;
        goto label_32e730;
    }
    ctx->pc = 0x32E728u;
    SET_GPR_U32(ctx, 31, 0x32E730u);
    ctx->pc = 0x32E72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E728u;
            // 0x32e72c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E730u; }
        if (ctx->pc != 0x32E730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E730u; }
        if (ctx->pc != 0x32E730u) { return; }
    }
    ctx->pc = 0x32E730u;
label_32e730:
    // 0x32e730: 0x8e02077c  lw          $v0, 0x77C($s0)
    ctx->pc = 0x32e730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
label_32e734:
    // 0x32e734: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32e734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_32e738:
    // 0x32e738: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x32e738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32e73c:
    // 0x32e73c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_32e740:
    if (ctx->pc == 0x32E740u) {
        ctx->pc = 0x32E740u;
            // 0x32e740: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x32E744u;
        goto label_32e744;
    }
    ctx->pc = 0x32E73Cu;
    {
        const bool branch_taken_0x32e73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E73Cu;
            // 0x32e740: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e73c) {
            ctx->pc = 0x32E6A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32e6a8;
        }
    }
    ctx->pc = 0x32E744u;
label_32e744:
    // 0x32e744: 0x10000005  b           . + 4 + (0x5 << 2)
label_32e748:
    if (ctx->pc == 0x32E748u) {
        ctx->pc = 0x32E748u;
            // 0x32e748: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->pc = 0x32E74Cu;
        goto label_32e74c;
    }
    ctx->pc = 0x32E744u;
    {
        const bool branch_taken_0x32e744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E744u;
            // 0x32e748: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e744) {
            ctx->pc = 0x32E75Cu;
            goto label_32e75c;
        }
    }
    ctx->pc = 0x32E74Cu;
label_32e74c:
    // 0x32e74c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x32e74cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_32e750:
    // 0x32e750: 0x320f809  jalr        $t9
label_32e754:
    if (ctx->pc == 0x32E754u) {
        ctx->pc = 0x32E758u;
        goto label_32e758;
    }
    ctx->pc = 0x32E750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E758u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E758u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E758u; }
            if (ctx->pc != 0x32E758u) { return; }
        }
        }
    }
    ctx->pc = 0x32E758u;
label_32e758:
    // 0x32e758: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x32e758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_32e75c:
    // 0x32e75c: 0xc040180  jal         func_100600
label_32e760:
    if (ctx->pc == 0x32E760u) {
        ctx->pc = 0x32E764u;
        goto label_32e764;
    }
    ctx->pc = 0x32E75Cu;
    SET_GPR_U32(ctx, 31, 0x32E764u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E764u; }
        if (ctx->pc != 0x32E764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E764u; }
        if (ctx->pc != 0x32E764u) { return; }
    }
    ctx->pc = 0x32E764u;
label_32e764:
    // 0x32e764: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_32e768:
    if (ctx->pc == 0x32E768u) {
        ctx->pc = 0x32E768u;
            // 0x32e768: 0x92020c77  lbu         $v0, 0xC77($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3191)));
        ctx->pc = 0x32E76Cu;
        goto label_32e76c;
    }
    ctx->pc = 0x32E764u;
    {
        const bool branch_taken_0x32e764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e764) {
            ctx->pc = 0x32E768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E764u;
            // 0x32e768: 0x92020c77  lbu         $v0, 0xC77($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3191)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E778u;
            goto label_32e778;
        }
    }
    ctx->pc = 0x32E76Cu;
label_32e76c:
    // 0x32e76c: 0xc0f1f64  jal         func_3C7D90
label_32e770:
    if (ctx->pc == 0x32E770u) {
        ctx->pc = 0x32E770u;
            // 0x32e770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E774u;
        goto label_32e774;
    }
    ctx->pc = 0x32E76Cu;
    SET_GPR_U32(ctx, 31, 0x32E774u);
    ctx->pc = 0x32E770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E76Cu;
            // 0x32e770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C7D90u;
    if (runtime->hasFunction(0x3C7D90u)) {
        auto targetFn = runtime->lookupFunction(0x3C7D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E774u; }
        if (ctx->pc != 0x32E774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C7D90_0x3c7d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E774u; }
        if (ctx->pc != 0x32E774u) { return; }
    }
    ctx->pc = 0x32E774u;
label_32e774:
    // 0x32e774: 0x92020c77  lbu         $v0, 0xC77($s0)
    ctx->pc = 0x32e774u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3191)));
label_32e778:
    // 0x32e778: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_32e77c:
    if (ctx->pc == 0x32E77Cu) {
        ctx->pc = 0x32E77Cu;
            // 0x32e77c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x32E780u;
        goto label_32e780;
    }
    ctx->pc = 0x32E778u;
    {
        const bool branch_taken_0x32e778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e778) {
            ctx->pc = 0x32E77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E778u;
            // 0x32e77c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E794u;
            goto label_32e794;
        }
    }
    ctx->pc = 0x32E780u;
label_32e780:
    // 0x32e780: 0x8e030960  lw          $v1, 0x960($s0)
    ctx->pc = 0x32e780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2400)));
label_32e784:
    // 0x32e784: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x32e784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_32e788:
    // 0x32e788: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32e788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_32e78c:
    // 0x32e78c: 0xae020960  sw          $v0, 0x960($s0)
    ctx->pc = 0x32e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2400), GPR_U32(ctx, 2));
label_32e790:
    // 0x32e790: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e794:
    // 0x32e794: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32e794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32e798:
    // 0x32e798: 0x320f809  jalr        $t9
label_32e79c:
    if (ctx->pc == 0x32E79Cu) {
        ctx->pc = 0x32E79Cu;
            // 0x32e79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E7A0u;
        goto label_32e7a0;
    }
    ctx->pc = 0x32E798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E7A0u);
        ctx->pc = 0x32E79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E798u;
            // 0x32e79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E7A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E7A0u; }
            if (ctx->pc != 0x32E7A0u) { return; }
        }
        }
    }
    ctx->pc = 0x32E7A0u;
label_32e7a0:
    // 0x32e7a0: 0x1000011c  b           . + 4 + (0x11C << 2)
label_32e7a4:
    if (ctx->pc == 0x32E7A4u) {
        ctx->pc = 0x32E7A8u;
        goto label_32e7a8;
    }
    ctx->pc = 0x32E7A0u;
    {
        const bool branch_taken_0x32e7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e7a0) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E7A8u;
label_32e7a8:
    // 0x32e7a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32e7ac:
    // 0x32e7ac: 0xae020cb4  sw          $v0, 0xCB4($s0)
    ctx->pc = 0x32e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3252), GPR_U32(ctx, 2));
label_32e7b0:
    // 0x32e7b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32e7b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32e7b4:
    // 0x32e7b4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x32e7b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_32e7b8:
    // 0x32e7b8: 0x320f809  jalr        $t9
label_32e7bc:
    if (ctx->pc == 0x32E7BCu) {
        ctx->pc = 0x32E7C0u;
        goto label_32e7c0;
    }
    ctx->pc = 0x32E7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E7C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E7C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E7C0u; }
            if (ctx->pc != 0x32E7C0u) { return; }
        }
        }
    }
    ctx->pc = 0x32E7C0u;
label_32e7c0:
    // 0x32e7c0: 0x92020c77  lbu         $v0, 0xC77($s0)
    ctx->pc = 0x32e7c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3191)));
label_32e7c4:
    // 0x32e7c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_32e7c8:
    if (ctx->pc == 0x32E7C8u) {
        ctx->pc = 0x32E7C8u;
            // 0x32e7c8: 0x26040814  addiu       $a0, $s0, 0x814 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2068));
        ctx->pc = 0x32E7CCu;
        goto label_32e7cc;
    }
    ctx->pc = 0x32E7C4u;
    {
        const bool branch_taken_0x32e7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e7c4) {
            ctx->pc = 0x32E7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E7C4u;
            // 0x32e7c8: 0x26040814  addiu       $a0, $s0, 0x814 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2068));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E7D8u;
            goto label_32e7d8;
        }
    }
    ctx->pc = 0x32E7CCu;
label_32e7cc:
    // 0x32e7cc: 0xc0cbc04  jal         func_32F010
label_32e7d0:
    if (ctx->pc == 0x32E7D0u) {
        ctx->pc = 0x32E7D0u;
            // 0x32e7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E7D4u;
        goto label_32e7d4;
    }
    ctx->pc = 0x32E7CCu;
    SET_GPR_U32(ctx, 31, 0x32E7D4u);
    ctx->pc = 0x32E7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E7CCu;
            // 0x32e7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32F010u;
    if (runtime->hasFunction(0x32F010u)) {
        auto targetFn = runtime->lookupFunction(0x32F010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E7D4u; }
        if (ctx->pc != 0x32E7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032F010_0x32f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E7D4u; }
        if (ctx->pc != 0x32E7D4u) { return; }
    }
    ctx->pc = 0x32E7D4u;
label_32e7d4:
    // 0x32e7d4: 0x26040814  addiu       $a0, $s0, 0x814
    ctx->pc = 0x32e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2068));
label_32e7d8:
    // 0x32e7d8: 0xc0bc6ec  jal         func_2F1BB0
label_32e7dc:
    if (ctx->pc == 0x32E7DCu) {
        ctx->pc = 0x32E7E0u;
        goto label_32e7e0;
    }
    ctx->pc = 0x32E7D8u;
    SET_GPR_U32(ctx, 31, 0x32E7E0u);
    ctx->pc = 0x2F1BB0u;
    if (runtime->hasFunction(0x2F1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E7E0u; }
        if (ctx->pc != 0x32E7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BB0_0x2f1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E7E0u; }
        if (ctx->pc != 0x32E7E0u) { return; }
    }
    ctx->pc = 0x32E7E0u;
label_32e7e0:
    // 0x32e7e0: 0x92020c77  lbu         $v0, 0xC77($s0)
    ctx->pc = 0x32e7e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3191)));
label_32e7e4:
    // 0x32e7e4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_32e7e8:
    if (ctx->pc == 0x32E7E8u) {
        ctx->pc = 0x32E7E8u;
            // 0x32e7e8: 0x92120835  lbu         $s2, 0x835($s0) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2101)));
        ctx->pc = 0x32E7ECu;
        goto label_32e7ec;
    }
    ctx->pc = 0x32E7E4u;
    {
        const bool branch_taken_0x32e7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E7E4u;
            // 0x32e7e8: 0x92120835  lbu         $s2, 0x835($s0) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2101)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e7e4) {
            ctx->pc = 0x32E8C0u;
            goto label_32e8c0;
        }
    }
    ctx->pc = 0x32E7ECu;
label_32e7ec:
    // 0x32e7ec: 0x52400035  beql        $s2, $zero, . + 4 + (0x35 << 2)
label_32e7f0:
    if (ctx->pc == 0x32E7F0u) {
        ctx->pc = 0x32E7F0u;
            // 0x32e7f0: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x32E7F4u;
        goto label_32e7f4;
    }
    ctx->pc = 0x32E7ECu;
    {
        const bool branch_taken_0x32e7ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e7ec) {
            ctx->pc = 0x32E7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E7ECu;
            // 0x32e7f0: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E8C4u;
            goto label_32e8c4;
        }
    }
    ctx->pc = 0x32E7F4u;
label_32e7f4:
    // 0x32e7f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e7f8:
    // 0x32e7f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x32e7f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_32e7fc:
    // 0x32e7fc: 0x320f809  jalr        $t9
label_32e800:
    if (ctx->pc == 0x32E800u) {
        ctx->pc = 0x32E800u;
            // 0x32e800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E804u;
        goto label_32e804;
    }
    ctx->pc = 0x32E7FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E804u);
        ctx->pc = 0x32E800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E7FCu;
            // 0x32e800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E804u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E804u; }
            if (ctx->pc != 0x32E804u) { return; }
        }
        }
    }
    ctx->pc = 0x32E804u;
label_32e804:
    // 0x32e804: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e808:
    // 0x32e808: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x32e808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_32e80c:
    // 0x32e80c: 0x320f809  jalr        $t9
label_32e810:
    if (ctx->pc == 0x32E810u) {
        ctx->pc = 0x32E810u;
            // 0x32e810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E814u;
        goto label_32e814;
    }
    ctx->pc = 0x32E80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E814u);
        ctx->pc = 0x32E810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E80Cu;
            // 0x32e810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E814u; }
            if (ctx->pc != 0x32E814u) { return; }
        }
        }
    }
    ctx->pc = 0x32E814u;
label_32e814:
    // 0x32e814: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32e814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32e818:
    // 0x32e818: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x32e818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32e81c:
    // 0x32e81c: 0x8c510e84  lw          $s1, 0xE84($v0)
    ctx->pc = 0x32e81cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_32e820:
    // 0x32e820: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x32e820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32e824:
    // 0x32e824: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x32e824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_32e828:
    // 0x32e828: 0x320f809  jalr        $t9
label_32e82c:
    if (ctx->pc == 0x32E82Cu) {
        ctx->pc = 0x32E82Cu;
            // 0x32e82c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E830u;
        goto label_32e830;
    }
    ctx->pc = 0x32E828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E830u);
        ctx->pc = 0x32E82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E828u;
            // 0x32e82c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E830u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E830u; }
            if (ctx->pc != 0x32E830u) { return; }
        }
        }
    }
    ctx->pc = 0x32E830u;
label_32e830:
    // 0x32e830: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x32e830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_32e834:
    // 0x32e834: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32e834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32e838:
    // 0x32e838: 0xc4600730  lwc1        $f0, 0x730($v1)
    ctx->pc = 0x32e838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32e83c:
    // 0x32e83c: 0x262402d0  addiu       $a0, $s1, 0x2D0
    ctx->pc = 0x32e83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
label_32e840:
    // 0x32e840: 0xc4420734  lwc1        $f2, 0x734($v0)
    ctx->pc = 0x32e840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32e844:
    // 0x32e844: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x32e844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_32e848:
    // 0x32e848: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x32e848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_32e84c:
    // 0x32e84c: 0xc4610738  lwc1        $f1, 0x738($v1)
    ctx->pc = 0x32e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32e850:
    // 0x32e850: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32e850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32e854:
    // 0x32e854: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x32e854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_32e858:
    // 0x32e858: 0xc440073c  lwc1        $f0, 0x73C($v0)
    ctx->pc = 0x32e858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32e85c:
    // 0x32e85c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x32e85cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_32e860:
    // 0x32e860: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x32e860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_32e864:
    // 0x32e864: 0xc04cc04  jal         func_133010
label_32e868:
    if (ctx->pc == 0x32E868u) {
        ctx->pc = 0x32E868u;
            // 0x32e868: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x32E86Cu;
        goto label_32e86c;
    }
    ctx->pc = 0x32E864u;
    SET_GPR_U32(ctx, 31, 0x32E86Cu);
    ctx->pc = 0x32E868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E864u;
            // 0x32e868: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E86Cu; }
        if (ctx->pc != 0x32E86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E86Cu; }
        if (ctx->pc != 0x32E86Cu) { return; }
    }
    ctx->pc = 0x32E86Cu;
label_32e86c:
    // 0x32e86c: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x32e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_32e870:
    // 0x32e870: 0xc04cc04  jal         func_133010
label_32e874:
    if (ctx->pc == 0x32E874u) {
        ctx->pc = 0x32E874u;
            // 0x32e874: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x32E878u;
        goto label_32e878;
    }
    ctx->pc = 0x32E870u;
    SET_GPR_U32(ctx, 31, 0x32E878u);
    ctx->pc = 0x32E874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E870u;
            // 0x32e874: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E878u; }
        if (ctx->pc != 0x32E878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E878u; }
        if (ctx->pc != 0x32E878u) { return; }
    }
    ctx->pc = 0x32E878u;
label_32e878:
    // 0x32e878: 0x8e330d74  lw          $s3, 0xD74($s1)
    ctx->pc = 0x32e878u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_32e87c:
    // 0x32e87c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x32e87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32e880:
    // 0x32e880: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x32e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32e884:
    // 0x32e884: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x32e884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_32e888:
    // 0x32e888: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x32e888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_32e88c:
    // 0x32e88c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x32e88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32e890:
    // 0x32e890: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x32e890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_32e894:
    // 0x32e894: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x32e894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_32e898:
    // 0x32e898: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x32e898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_32e89c:
    // 0x32e89c: 0xc0a5444  jal         func_295110
label_32e8a0:
    if (ctx->pc == 0x32E8A0u) {
        ctx->pc = 0x32E8A0u;
            // 0x32e8a0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x32E8A4u;
        goto label_32e8a4;
    }
    ctx->pc = 0x32E89Cu;
    SET_GPR_U32(ctx, 31, 0x32E8A4u);
    ctx->pc = 0x32E8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E89Cu;
            // 0x32e8a0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E8A4u; }
        if (ctx->pc != 0x32E8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E8A4u; }
        if (ctx->pc != 0x32E8A4u) { return; }
    }
    ctx->pc = 0x32E8A4u;
label_32e8a4:
    // 0x32e8a4: 0xae6002d0  sw          $zero, 0x2D0($s3)
    ctx->pc = 0x32e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 720), GPR_U32(ctx, 0));
label_32e8a8:
    // 0x32e8a8: 0x3c023f3d  lui         $v0, 0x3F3D
    ctx->pc = 0x32e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16189 << 16));
label_32e8ac:
    // 0x32e8ac: 0xae6002d4  sw          $zero, 0x2D4($s3)
    ctx->pc = 0x32e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 724), GPR_U32(ctx, 0));
label_32e8b0:
    // 0x32e8b0: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x32e8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_32e8b4:
    // 0x32e8b4: 0xae6002d8  sw          $zero, 0x2D8($s3)
    ctx->pc = 0x32e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 728), GPR_U32(ctx, 0));
label_32e8b8:
    // 0x32e8b8: 0xae6002dc  sw          $zero, 0x2DC($s3)
    ctx->pc = 0x32e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 732), GPR_U32(ctx, 0));
label_32e8bc:
    // 0x32e8bc: 0xae220de4  sw          $v0, 0xDE4($s1)
    ctx->pc = 0x32e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 2));
label_32e8c0:
    // 0x32e8c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e8c4:
    // 0x32e8c4: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x32e8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_32e8c8:
    // 0x32e8c8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x32e8c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_32e8cc:
    // 0x32e8cc: 0x320f809  jalr        $t9
label_32e8d0:
    if (ctx->pc == 0x32E8D0u) {
        ctx->pc = 0x32E8D0u;
            // 0x32e8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E8D4u;
        goto label_32e8d4;
    }
    ctx->pc = 0x32E8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E8D4u);
        ctx->pc = 0x32E8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E8CCu;
            // 0x32e8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E8D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E8D4u; }
            if (ctx->pc != 0x32E8D4u) { return; }
        }
        }
    }
    ctx->pc = 0x32E8D4u;
label_32e8d4:
    // 0x32e8d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e8d8:
    // 0x32e8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32e8dc:
    // 0x32e8dc: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x32e8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_32e8e0:
    // 0x32e8e0: 0x320f809  jalr        $t9
label_32e8e4:
    if (ctx->pc == 0x32E8E4u) {
        ctx->pc = 0x32E8E4u;
            // 0x32e8e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E8E8u;
        goto label_32e8e8;
    }
    ctx->pc = 0x32E8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E8E8u);
        ctx->pc = 0x32E8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E8E0u;
            // 0x32e8e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E8E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E8E8u; }
            if (ctx->pc != 0x32E8E8u) { return; }
        }
        }
    }
    ctx->pc = 0x32E8E8u;
label_32e8e8:
    // 0x32e8e8: 0x100000ca  b           . + 4 + (0xCA << 2)
label_32e8ec:
    if (ctx->pc == 0x32E8ECu) {
        ctx->pc = 0x32E8F0u;
        goto label_32e8f0;
    }
    ctx->pc = 0x32E8E8u;
    {
        const bool branch_taken_0x32e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e8e8) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E8F0u;
label_32e8f0:
    // 0x32e8f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x32e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_32e8f4:
    // 0x32e8f4: 0xae020cb4  sw          $v0, 0xCB4($s0)
    ctx->pc = 0x32e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3252), GPR_U32(ctx, 2));
label_32e8f8:
    // 0x32e8f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32e8f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32e8fc:
    // 0x32e8fc: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x32e8fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_32e900:
    // 0x32e900: 0x320f809  jalr        $t9
label_32e904:
    if (ctx->pc == 0x32E904u) {
        ctx->pc = 0x32E908u;
        goto label_32e908;
    }
    ctx->pc = 0x32E900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E908u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E908u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E908u; }
            if (ctx->pc != 0x32E908u) { return; }
        }
        }
    }
    ctx->pc = 0x32E908u;
label_32e908:
    // 0x32e908: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e90c:
    // 0x32e90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32e910:
    // 0x32e910: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x32e910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_32e914:
    // 0x32e914: 0x320f809  jalr        $t9
label_32e918:
    if (ctx->pc == 0x32E918u) {
        ctx->pc = 0x32E918u;
            // 0x32e918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E91Cu;
        goto label_32e91c;
    }
    ctx->pc = 0x32E914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E91Cu);
        ctx->pc = 0x32E918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E914u;
            // 0x32e918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E91Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E91Cu; }
            if (ctx->pc != 0x32E91Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32E91Cu;
label_32e91c:
    // 0x32e91c: 0x100000bd  b           . + 4 + (0xBD << 2)
label_32e920:
    if (ctx->pc == 0x32E920u) {
        ctx->pc = 0x32E924u;
        goto label_32e924;
    }
    ctx->pc = 0x32E91Cu;
    {
        const bool branch_taken_0x32e91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e91c) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32E924u;
label_32e924:
    // 0x32e924: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32e924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32e928:
    // 0x32e928: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x32e928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_32e92c:
    // 0x32e92c: 0x8c5189d0  lw          $s1, -0x7630($v0)
    ctx->pc = 0x32e92cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_32e930:
    // 0x32e930: 0xae030cb4  sw          $v1, 0xCB4($s0)
    ctx->pc = 0x32e930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3252), GPR_U32(ctx, 3));
label_32e934:
    // 0x32e934: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32e934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32e938:
    // 0x32e938: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x32e938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_32e93c:
    // 0x32e93c: 0x320f809  jalr        $t9
label_32e940:
    if (ctx->pc == 0x32E940u) {
        ctx->pc = 0x32E944u;
        goto label_32e944;
    }
    ctx->pc = 0x32E93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E944u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E944u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E944u; }
            if (ctx->pc != 0x32E944u) { return; }
        }
        }
    }
    ctx->pc = 0x32E944u;
label_32e944:
    // 0x32e944: 0xae000c5c  sw          $zero, 0xC5C($s0)
    ctx->pc = 0x32e944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3164), GPR_U32(ctx, 0));
label_32e948:
    // 0x32e948: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e94c:
    // 0x32e94c: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x32e94cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_32e950:
    // 0x32e950: 0x320f809  jalr        $t9
label_32e954:
    if (ctx->pc == 0x32E954u) {
        ctx->pc = 0x32E954u;
            // 0x32e954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E958u;
        goto label_32e958;
    }
    ctx->pc = 0x32E950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E958u);
        ctx->pc = 0x32E954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E950u;
            // 0x32e954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E958u; }
            if (ctx->pc != 0x32E958u) { return; }
        }
        }
    }
    ctx->pc = 0x32E958u;
label_32e958:
    // 0x32e958: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x32e958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_32e95c:
    // 0x32e95c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32e960:
    // 0x32e960: 0x50620032  beql        $v1, $v0, . + 4 + (0x32 << 2)
label_32e964:
    if (ctx->pc == 0x32E964u) {
        ctx->pc = 0x32E964u;
            // 0x32e964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E968u;
        goto label_32e968;
    }
    ctx->pc = 0x32E960u;
    {
        const bool branch_taken_0x32e960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32e960) {
            ctx->pc = 0x32E964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E960u;
            // 0x32e964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32EA2Cu;
            goto label_32ea2c;
        }
    }
    ctx->pc = 0x32E968u;
label_32e968:
    // 0x32e968: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32e96c:
    // 0x32e96c: 0x5062001d  beql        $v1, $v0, . + 4 + (0x1D << 2)
label_32e970:
    if (ctx->pc == 0x32E970u) {
        ctx->pc = 0x32E970u;
            // 0x32e970: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x32E974u;
        goto label_32e974;
    }
    ctx->pc = 0x32E96Cu;
    {
        const bool branch_taken_0x32e96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32e96c) {
            ctx->pc = 0x32E970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E96Cu;
            // 0x32e970: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E9E4u;
            goto label_32e9e4;
        }
    }
    ctx->pc = 0x32E974u;
label_32e974:
    // 0x32e974: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32e974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32e978:
    // 0x32e978: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_32e97c:
    if (ctx->pc == 0x32E97Cu) {
        ctx->pc = 0x32E97Cu;
            // 0x32e97c: 0x240402a4  addiu       $a0, $zero, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
        ctx->pc = 0x32E980u;
        goto label_32e980;
    }
    ctx->pc = 0x32E978u;
    {
        const bool branch_taken_0x32e978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32e978) {
            ctx->pc = 0x32E97Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E978u;
            // 0x32e97c: 0x240402a4  addiu       $a0, $zero, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E9A4u;
            goto label_32e9a4;
        }
    }
    ctx->pc = 0x32E980u;
label_32e980:
    // 0x32e980: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32e980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32e984:
    // 0x32e984: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_32e988:
    if (ctx->pc == 0x32E988u) {
        ctx->pc = 0x32E988u;
            // 0x32e988: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x32E98Cu;
        goto label_32e98c;
    }
    ctx->pc = 0x32E984u;
    {
        const bool branch_taken_0x32e984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32e984) {
            ctx->pc = 0x32E988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E984u;
            // 0x32e988: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E994u;
            goto label_32e994;
        }
    }
    ctx->pc = 0x32E98Cu;
label_32e98c:
    // 0x32e98c: 0x10000038  b           . + 4 + (0x38 << 2)
label_32e990:
    if (ctx->pc == 0x32E990u) {
        ctx->pc = 0x32E990u;
            // 0x32e990: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x32E994u;
        goto label_32e994;
    }
    ctx->pc = 0x32E98Cu;
    {
        const bool branch_taken_0x32e98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E98Cu;
            // 0x32e990: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e98c) {
            ctx->pc = 0x32EA70u;
            goto label_32ea70;
        }
    }
    ctx->pc = 0x32E994u;
label_32e994:
    // 0x32e994: 0x8f3900a8  lw          $t9, 0xA8($t9)
    ctx->pc = 0x32e994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 168)));
label_32e998:
    // 0x32e998: 0x320f809  jalr        $t9
label_32e99c:
    if (ctx->pc == 0x32E99Cu) {
        ctx->pc = 0x32E99Cu;
            // 0x32e99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E9A0u;
        goto label_32e9a0;
    }
    ctx->pc = 0x32E998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E9A0u);
        ctx->pc = 0x32E99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E998u;
            // 0x32e99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E9A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E9A0u; }
            if (ctx->pc != 0x32E9A0u) { return; }
        }
        }
    }
    ctx->pc = 0x32E9A0u;
label_32e9a0:
    // 0x32e9a0: 0x240402a4  addiu       $a0, $zero, 0x2A4
    ctx->pc = 0x32e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
label_32e9a4:
    // 0x32e9a4: 0xc040180  jal         func_100600
label_32e9a8:
    if (ctx->pc == 0x32E9A8u) {
        ctx->pc = 0x32E9ACu;
        goto label_32e9ac;
    }
    ctx->pc = 0x32E9A4u;
    SET_GPR_U32(ctx, 31, 0x32E9ACu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E9ACu; }
        if (ctx->pc != 0x32E9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E9ACu; }
        if (ctx->pc != 0x32E9ACu) { return; }
    }
    ctx->pc = 0x32E9ACu;
label_32e9ac:
    // 0x32e9ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_32e9b0:
    if (ctx->pc == 0x32E9B0u) {
        ctx->pc = 0x32E9B0u;
            // 0x32e9b0: 0xae020cb0  sw          $v0, 0xCB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
        ctx->pc = 0x32E9B4u;
        goto label_32e9b4;
    }
    ctx->pc = 0x32E9ACu;
    {
        const bool branch_taken_0x32e9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e9ac) {
            ctx->pc = 0x32E9B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E9ACu;
            // 0x32e9b0: 0xae020cb0  sw          $v0, 0xCB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E9C8u;
            goto label_32e9c8;
        }
    }
    ctx->pc = 0x32E9B4u;
label_32e9b4:
    // 0x32e9b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32e9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32e9b8:
    // 0x32e9b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32e9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e9bc:
    // 0x32e9bc: 0xc11e7b0  jal         func_479EC0
label_32e9c0:
    if (ctx->pc == 0x32E9C0u) {
        ctx->pc = 0x32E9C0u;
            // 0x32e9c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32E9C4u;
        goto label_32e9c4;
    }
    ctx->pc = 0x32E9BCu;
    SET_GPR_U32(ctx, 31, 0x32E9C4u);
    ctx->pc = 0x32E9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E9BCu;
            // 0x32e9c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x479EC0u;
    if (runtime->hasFunction(0x479EC0u)) {
        auto targetFn = runtime->lookupFunction(0x479EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E9C4u; }
        if (ctx->pc != 0x32E9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00479EC0_0x479ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E9C4u; }
        if (ctx->pc != 0x32E9C4u) { return; }
    }
    ctx->pc = 0x32E9C4u;
label_32e9c4:
    // 0x32e9c4: 0xae020cb0  sw          $v0, 0xCB0($s0)
    ctx->pc = 0x32e9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
label_32e9c8:
    // 0x32e9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32e9cc:
    // 0x32e9cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32e9ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e9d0:
    // 0x32e9d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32e9d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32e9d4:
    // 0x32e9d4: 0x320f809  jalr        $t9
label_32e9d8:
    if (ctx->pc == 0x32E9D8u) {
        ctx->pc = 0x32E9D8u;
            // 0x32e9d8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x32E9DCu;
        goto label_32e9dc;
    }
    ctx->pc = 0x32E9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32E9DCu);
        ctx->pc = 0x32E9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E9D4u;
            // 0x32e9d8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32E9DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32E9DCu; }
            if (ctx->pc != 0x32E9DCu) { return; }
        }
        }
    }
    ctx->pc = 0x32E9DCu;
label_32e9dc:
    // 0x32e9dc: 0x10000023  b           . + 4 + (0x23 << 2)
label_32e9e0:
    if (ctx->pc == 0x32E9E0u) {
        ctx->pc = 0x32E9E4u;
        goto label_32e9e4;
    }
    ctx->pc = 0x32E9DCu;
    {
        const bool branch_taken_0x32e9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e9dc) {
            ctx->pc = 0x32EA6Cu;
            goto label_32ea6c;
        }
    }
    ctx->pc = 0x32E9E4u;
label_32e9e4:
    // 0x32e9e4: 0xc13d7ac  jal         func_4F5EB0
label_32e9e8:
    if (ctx->pc == 0x32E9E8u) {
        ctx->pc = 0x32E9ECu;
        goto label_32e9ec;
    }
    ctx->pc = 0x32E9E4u;
    SET_GPR_U32(ctx, 31, 0x32E9ECu);
    ctx->pc = 0x4F5EB0u;
    if (runtime->hasFunction(0x4F5EB0u)) {
        auto targetFn = runtime->lookupFunction(0x4F5EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E9ECu; }
        if (ctx->pc != 0x32E9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5EB0_0x4f5eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E9ECu; }
        if (ctx->pc != 0x32E9ECu) { return; }
    }
    ctx->pc = 0x32E9ECu;
label_32e9ec:
    // 0x32e9ec: 0xc040180  jal         func_100600
label_32e9f0:
    if (ctx->pc == 0x32E9F0u) {
        ctx->pc = 0x32E9F0u;
            // 0x32e9f0: 0x240402a4  addiu       $a0, $zero, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
        ctx->pc = 0x32E9F4u;
        goto label_32e9f4;
    }
    ctx->pc = 0x32E9ECu;
    SET_GPR_U32(ctx, 31, 0x32E9F4u);
    ctx->pc = 0x32E9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E9ECu;
            // 0x32e9f0: 0x240402a4  addiu       $a0, $zero, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E9F4u; }
        if (ctx->pc != 0x32E9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E9F4u; }
        if (ctx->pc != 0x32E9F4u) { return; }
    }
    ctx->pc = 0x32E9F4u;
label_32e9f4:
    // 0x32e9f4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_32e9f8:
    if (ctx->pc == 0x32E9F8u) {
        ctx->pc = 0x32E9F8u;
            // 0x32e9f8: 0xae020cb0  sw          $v0, 0xCB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
        ctx->pc = 0x32E9FCu;
        goto label_32e9fc;
    }
    ctx->pc = 0x32E9F4u;
    {
        const bool branch_taken_0x32e9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e9f4) {
            ctx->pc = 0x32E9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E9F4u;
            // 0x32e9f8: 0xae020cb0  sw          $v0, 0xCB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32EA10u;
            goto label_32ea10;
        }
    }
    ctx->pc = 0x32E9FCu;
label_32e9fc:
    // 0x32e9fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32e9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ea00:
    // 0x32ea00: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x32ea00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32ea04:
    // 0x32ea04: 0xc11e7b0  jal         func_479EC0
label_32ea08:
    if (ctx->pc == 0x32EA08u) {
        ctx->pc = 0x32EA08u;
            // 0x32ea08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32EA0Cu;
        goto label_32ea0c;
    }
    ctx->pc = 0x32EA04u;
    SET_GPR_U32(ctx, 31, 0x32EA0Cu);
    ctx->pc = 0x32EA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EA04u;
            // 0x32ea08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x479EC0u;
    if (runtime->hasFunction(0x479EC0u)) {
        auto targetFn = runtime->lookupFunction(0x479EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EA0Cu; }
        if (ctx->pc != 0x32EA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00479EC0_0x479ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EA0Cu; }
        if (ctx->pc != 0x32EA0Cu) { return; }
    }
    ctx->pc = 0x32EA0Cu;
label_32ea0c:
    // 0x32ea0c: 0xae020cb0  sw          $v0, 0xCB0($s0)
    ctx->pc = 0x32ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
label_32ea10:
    // 0x32ea10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ea10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ea14:
    // 0x32ea14: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32ea14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32ea18:
    // 0x32ea18: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32ea18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32ea1c:
    // 0x32ea1c: 0x320f809  jalr        $t9
label_32ea20:
    if (ctx->pc == 0x32EA20u) {
        ctx->pc = 0x32EA20u;
            // 0x32ea20: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x32EA24u;
        goto label_32ea24;
    }
    ctx->pc = 0x32EA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EA24u);
        ctx->pc = 0x32EA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EA1Cu;
            // 0x32ea20: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EA24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EA24u; }
            if (ctx->pc != 0x32EA24u) { return; }
        }
        }
    }
    ctx->pc = 0x32EA24u;
label_32ea24:
    // 0x32ea24: 0x10000011  b           . + 4 + (0x11 << 2)
label_32ea28:
    if (ctx->pc == 0x32EA28u) {
        ctx->pc = 0x32EA2Cu;
        goto label_32ea2c;
    }
    ctx->pc = 0x32EA24u;
    {
        const bool branch_taken_0x32ea24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ea24) {
            ctx->pc = 0x32EA6Cu;
            goto label_32ea6c;
        }
    }
    ctx->pc = 0x32EA2Cu;
label_32ea2c:
    // 0x32ea2c: 0xc0cbb0c  jal         func_32EC30
label_32ea30:
    if (ctx->pc == 0x32EA30u) {
        ctx->pc = 0x32EA34u;
        goto label_32ea34;
    }
    ctx->pc = 0x32EA2Cu;
    SET_GPR_U32(ctx, 31, 0x32EA34u);
    ctx->pc = 0x32EC30u;
    if (runtime->hasFunction(0x32EC30u)) {
        auto targetFn = runtime->lookupFunction(0x32EC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EA34u; }
        if (ctx->pc != 0x32EA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032EC30_0x32ec30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EA34u; }
        if (ctx->pc != 0x32EA34u) { return; }
    }
    ctx->pc = 0x32EA34u;
label_32ea34:
    // 0x32ea34: 0xc040180  jal         func_100600
label_32ea38:
    if (ctx->pc == 0x32EA38u) {
        ctx->pc = 0x32EA38u;
            // 0x32ea38: 0x240402a4  addiu       $a0, $zero, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
        ctx->pc = 0x32EA3Cu;
        goto label_32ea3c;
    }
    ctx->pc = 0x32EA34u;
    SET_GPR_U32(ctx, 31, 0x32EA3Cu);
    ctx->pc = 0x32EA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EA34u;
            // 0x32ea38: 0x240402a4  addiu       $a0, $zero, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EA3Cu; }
        if (ctx->pc != 0x32EA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EA3Cu; }
        if (ctx->pc != 0x32EA3Cu) { return; }
    }
    ctx->pc = 0x32EA3Cu;
label_32ea3c:
    // 0x32ea3c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_32ea40:
    if (ctx->pc == 0x32EA40u) {
        ctx->pc = 0x32EA40u;
            // 0x32ea40: 0xae020cb0  sw          $v0, 0xCB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
        ctx->pc = 0x32EA44u;
        goto label_32ea44;
    }
    ctx->pc = 0x32EA3Cu;
    {
        const bool branch_taken_0x32ea3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ea3c) {
            ctx->pc = 0x32EA40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32EA3Cu;
            // 0x32ea40: 0xae020cb0  sw          $v0, 0xCB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32EA58u;
            goto label_32ea58;
        }
    }
    ctx->pc = 0x32EA44u;
label_32ea44:
    // 0x32ea44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32ea44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ea48:
    // 0x32ea48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32ea48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ea4c:
    // 0x32ea4c: 0xc11e7b0  jal         func_479EC0
label_32ea50:
    if (ctx->pc == 0x32EA50u) {
        ctx->pc = 0x32EA50u;
            // 0x32ea50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32EA54u;
        goto label_32ea54;
    }
    ctx->pc = 0x32EA4Cu;
    SET_GPR_U32(ctx, 31, 0x32EA54u);
    ctx->pc = 0x32EA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EA4Cu;
            // 0x32ea50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x479EC0u;
    if (runtime->hasFunction(0x479EC0u)) {
        auto targetFn = runtime->lookupFunction(0x479EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EA54u; }
        if (ctx->pc != 0x32EA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00479EC0_0x479ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EA54u; }
        if (ctx->pc != 0x32EA54u) { return; }
    }
    ctx->pc = 0x32EA54u;
label_32ea54:
    // 0x32ea54: 0xae020cb0  sw          $v0, 0xCB0($s0)
    ctx->pc = 0x32ea54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
label_32ea58:
    // 0x32ea58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ea58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ea5c:
    // 0x32ea5c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32ea5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32ea60:
    // 0x32ea60: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32ea60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32ea64:
    // 0x32ea64: 0x320f809  jalr        $t9
label_32ea68:
    if (ctx->pc == 0x32EA68u) {
        ctx->pc = 0x32EA68u;
            // 0x32ea68: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x32EA6Cu;
        goto label_32ea6c;
    }
    ctx->pc = 0x32EA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EA6Cu);
        ctx->pc = 0x32EA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EA64u;
            // 0x32ea68: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EA6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EA6Cu; }
            if (ctx->pc != 0x32EA6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32EA6Cu;
label_32ea6c:
    // 0x32ea6c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32ea6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32ea70:
    // 0x32ea70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ea70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ea74:
    // 0x32ea74: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x32ea74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_32ea78:
    // 0x32ea78: 0x320f809  jalr        $t9
label_32ea7c:
    if (ctx->pc == 0x32EA7Cu) {
        ctx->pc = 0x32EA7Cu;
            // 0x32ea7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32EA80u;
        goto label_32ea80;
    }
    ctx->pc = 0x32EA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EA80u);
        ctx->pc = 0x32EA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EA78u;
            // 0x32ea7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EA80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EA80u; }
            if (ctx->pc != 0x32EA80u) { return; }
        }
        }
    }
    ctx->pc = 0x32EA80u;
label_32ea80:
    // 0x32ea80: 0x10000064  b           . + 4 + (0x64 << 2)
label_32ea84:
    if (ctx->pc == 0x32EA84u) {
        ctx->pc = 0x32EA88u;
        goto label_32ea88;
    }
    ctx->pc = 0x32EA80u;
    {
        const bool branch_taken_0x32ea80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ea80) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32EA88u;
label_32ea88:
    // 0x32ea88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32ea88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32ea8c:
    // 0x32ea8c: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x32ea8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_32ea90:
    // 0x32ea90: 0x320f809  jalr        $t9
label_32ea94:
    if (ctx->pc == 0x32EA94u) {
        ctx->pc = 0x32EA98u;
        goto label_32ea98;
    }
    ctx->pc = 0x32EA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EA98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EA98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EA98u; }
            if (ctx->pc != 0x32EA98u) { return; }
        }
        }
    }
    ctx->pc = 0x32EA98u;
label_32ea98:
    // 0x32ea98: 0x1000005e  b           . + 4 + (0x5E << 2)
label_32ea9c:
    if (ctx->pc == 0x32EA9Cu) {
        ctx->pc = 0x32EAA0u;
        goto label_32eaa0;
    }
    ctx->pc = 0x32EA98u;
    {
        const bool branch_taken_0x32ea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ea98) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32EAA0u;
label_32eaa0:
    // 0x32eaa0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32eaa4:
    // 0x32eaa4: 0x8c63a140  lw          $v1, -0x5EC0($v1)
    ctx->pc = 0x32eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943040)));
label_32eaa8:
    // 0x32eaa8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x32eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_32eaac:
    // 0x32eaac: 0x30630402  andi        $v1, $v1, 0x402
    ctx->pc = 0x32eaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1026);
label_32eab0:
    // 0x32eab0: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
label_32eab4:
    if (ctx->pc == 0x32EAB4u) {
        ctx->pc = 0x32EAB8u;
        goto label_32eab8;
    }
    ctx->pc = 0x32EAB0u;
    {
        const bool branch_taken_0x32eab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eab0) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32EAB8u;
label_32eab8:
    // 0x32eab8: 0xc11e4f0  jal         func_4793C0
label_32eabc:
    if (ctx->pc == 0x32EABCu) {
        ctx->pc = 0x32EABCu;
            // 0x32eabc: 0x8e040cb0  lw          $a0, 0xCB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3248)));
        ctx->pc = 0x32EAC0u;
        goto label_32eac0;
    }
    ctx->pc = 0x32EAB8u;
    SET_GPR_U32(ctx, 31, 0x32EAC0u);
    ctx->pc = 0x32EABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EAB8u;
            // 0x32eabc: 0x8e040cb0  lw          $a0, 0xCB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3248)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4793C0u;
    if (runtime->hasFunction(0x4793C0u)) {
        auto targetFn = runtime->lookupFunction(0x4793C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EAC0u; }
        if (ctx->pc != 0x32EAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004793C0_0x4793c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EAC0u; }
        if (ctx->pc != 0x32EAC0u) { return; }
    }
    ctx->pc = 0x32EAC0u;
label_32eac0:
    // 0x32eac0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32eac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32eac4:
    // 0x32eac4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x32eac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32eac8:
    // 0x32eac8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x32eac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_32eacc:
    // 0x32eacc: 0x320f809  jalr        $t9
label_32ead0:
    if (ctx->pc == 0x32EAD0u) {
        ctx->pc = 0x32EAD0u;
            // 0x32ead0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32EAD4u;
        goto label_32ead4;
    }
    ctx->pc = 0x32EACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EAD4u);
        ctx->pc = 0x32EAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EACCu;
            // 0x32ead0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EAD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EAD4u; }
            if (ctx->pc != 0x32EAD4u) { return; }
        }
        }
    }
    ctx->pc = 0x32EAD4u;
label_32ead4:
    // 0x32ead4: 0x1000004f  b           . + 4 + (0x4F << 2)
label_32ead8:
    if (ctx->pc == 0x32EAD8u) {
        ctx->pc = 0x32EADCu;
        goto label_32eadc;
    }
    ctx->pc = 0x32EAD4u;
    {
        const bool branch_taken_0x32ead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ead4) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32EADCu;
label_32eadc:
    // 0x32eadc: 0x8e030cb0  lw          $v1, 0xCB0($s0)
    ctx->pc = 0x32eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3248)));
label_32eae0:
    // 0x32eae0: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x32eae0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_32eae4:
    // 0x32eae4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x32eae4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_32eae8:
    // 0x32eae8: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
label_32eaec:
    if (ctx->pc == 0x32EAECu) {
        ctx->pc = 0x32EAF0u;
        goto label_32eaf0;
    }
    ctx->pc = 0x32EAE8u;
    {
        const bool branch_taken_0x32eae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eae8) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32EAF0u;
label_32eaf0:
    // 0x32eaf0: 0xc040180  jal         func_100600
label_32eaf4:
    if (ctx->pc == 0x32EAF4u) {
        ctx->pc = 0x32EAF4u;
            // 0x32eaf4: 0x240402a4  addiu       $a0, $zero, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
        ctx->pc = 0x32EAF8u;
        goto label_32eaf8;
    }
    ctx->pc = 0x32EAF0u;
    SET_GPR_U32(ctx, 31, 0x32EAF8u);
    ctx->pc = 0x32EAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EAF0u;
            // 0x32eaf4: 0x240402a4  addiu       $a0, $zero, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EAF8u; }
        if (ctx->pc != 0x32EAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EAF8u; }
        if (ctx->pc != 0x32EAF8u) { return; }
    }
    ctx->pc = 0x32EAF8u;
label_32eaf8:
    // 0x32eaf8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_32eafc:
    if (ctx->pc == 0x32EAFCu) {
        ctx->pc = 0x32EAFCu;
            // 0x32eafc: 0xae020cb0  sw          $v0, 0xCB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
        ctx->pc = 0x32EB00u;
        goto label_32eb00;
    }
    ctx->pc = 0x32EAF8u;
    {
        const bool branch_taken_0x32eaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eaf8) {
            ctx->pc = 0x32EAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32EAF8u;
            // 0x32eafc: 0xae020cb0  sw          $v0, 0xCB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32EB14u;
            goto label_32eb14;
        }
    }
    ctx->pc = 0x32EB00u;
label_32eb00:
    // 0x32eb00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32eb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32eb04:
    // 0x32eb04: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x32eb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_32eb08:
    // 0x32eb08: 0xc11e7b0  jal         func_479EC0
label_32eb0c:
    if (ctx->pc == 0x32EB0Cu) {
        ctx->pc = 0x32EB0Cu;
            // 0x32eb0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32EB10u;
        goto label_32eb10;
    }
    ctx->pc = 0x32EB08u;
    SET_GPR_U32(ctx, 31, 0x32EB10u);
    ctx->pc = 0x32EB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EB08u;
            // 0x32eb0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x479EC0u;
    if (runtime->hasFunction(0x479EC0u)) {
        auto targetFn = runtime->lookupFunction(0x479EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EB10u; }
        if (ctx->pc != 0x32EB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00479EC0_0x479ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EB10u; }
        if (ctx->pc != 0x32EB10u) { return; }
    }
    ctx->pc = 0x32EB10u;
label_32eb10:
    // 0x32eb10: 0xae020cb0  sw          $v0, 0xCB0($s0)
    ctx->pc = 0x32eb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
label_32eb14:
    // 0x32eb14: 0x8e020c5c  lw          $v0, 0xC5C($s0)
    ctx->pc = 0x32eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3164)));
label_32eb18:
    // 0x32eb18: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x32eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_32eb1c:
    // 0x32eb1c: 0xae020c5c  sw          $v0, 0xC5C($s0)
    ctx->pc = 0x32eb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3164), GPR_U32(ctx, 2));
label_32eb20:
    // 0x32eb20: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32eb20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32eb24:
    // 0x32eb24: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32eb24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32eb28:
    // 0x32eb28: 0x320f809  jalr        $t9
label_32eb2c:
    if (ctx->pc == 0x32EB2Cu) {
        ctx->pc = 0x32EB2Cu;
            // 0x32eb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32EB30u;
        goto label_32eb30;
    }
    ctx->pc = 0x32EB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EB30u);
        ctx->pc = 0x32EB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EB28u;
            // 0x32eb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EB30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EB30u; }
            if (ctx->pc != 0x32EB30u) { return; }
        }
        }
    }
    ctx->pc = 0x32EB30u;
label_32eb30:
    // 0x32eb30: 0x10000038  b           . + 4 + (0x38 << 2)
label_32eb34:
    if (ctx->pc == 0x32EB34u) {
        ctx->pc = 0x32EB38u;
        goto label_32eb38;
    }
    ctx->pc = 0x32EB30u;
    {
        const bool branch_taken_0x32eb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb30) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32EB38u;
label_32eb38:
    // 0x32eb38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32eb38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32eb3c:
    // 0x32eb3c: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x32eb3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_32eb40:
    // 0x32eb40: 0x320f809  jalr        $t9
label_32eb44:
    if (ctx->pc == 0x32EB44u) {
        ctx->pc = 0x32EB48u;
        goto label_32eb48;
    }
    ctx->pc = 0x32EB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EB48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EB48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EB48u; }
            if (ctx->pc != 0x32EB48u) { return; }
        }
        }
    }
    ctx->pc = 0x32EB48u;
label_32eb48:
    // 0x32eb48: 0x10000032  b           . + 4 + (0x32 << 2)
label_32eb4c:
    if (ctx->pc == 0x32EB4Cu) {
        ctx->pc = 0x32EB50u;
        goto label_32eb50;
    }
    ctx->pc = 0x32EB48u;
    {
        const bool branch_taken_0x32eb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb48) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32EB50u;
label_32eb50:
    // 0x32eb50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32eb50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32eb54:
    // 0x32eb54: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x32eb54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_32eb58:
    // 0x32eb58: 0x320f809  jalr        $t9
label_32eb5c:
    if (ctx->pc == 0x32EB5Cu) {
        ctx->pc = 0x32EB60u;
        goto label_32eb60;
    }
    ctx->pc = 0x32EB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EB60u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EB60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EB60u; }
            if (ctx->pc != 0x32EB60u) { return; }
        }
        }
    }
    ctx->pc = 0x32EB60u;
label_32eb60:
    // 0x32eb60: 0x1000002c  b           . + 4 + (0x2C << 2)
label_32eb64:
    if (ctx->pc == 0x32EB64u) {
        ctx->pc = 0x32EB68u;
        goto label_32eb68;
    }
    ctx->pc = 0x32EB60u;
    {
        const bool branch_taken_0x32eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb60) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32EB68u;
label_32eb68:
    // 0x32eb68: 0xc0bc6ec  jal         func_2F1BB0
label_32eb6c:
    if (ctx->pc == 0x32EB6Cu) {
        ctx->pc = 0x32EB6Cu;
            // 0x32eb6c: 0x26040838  addiu       $a0, $s0, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2104));
        ctx->pc = 0x32EB70u;
        goto label_32eb70;
    }
    ctx->pc = 0x32EB68u;
    SET_GPR_U32(ctx, 31, 0x32EB70u);
    ctx->pc = 0x32EB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EB68u;
            // 0x32eb6c: 0x26040838  addiu       $a0, $s0, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BB0u;
    if (runtime->hasFunction(0x2F1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EB70u; }
        if (ctx->pc != 0x32EB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BB0_0x2f1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EB70u; }
        if (ctx->pc != 0x32EB70u) { return; }
    }
    ctx->pc = 0x32EB70u;
label_32eb70:
    // 0x32eb70: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x32eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_32eb74:
    // 0x32eb74: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x32eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_32eb78:
    // 0x32eb78: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x32eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_32eb7c:
    // 0x32eb7c: 0xc6010c60  lwc1        $f1, 0xC60($s0)
    ctx->pc = 0x32eb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32eb80:
    // 0x32eb80: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32eb80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32eb84:
    // 0x32eb84: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x32eb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32eb88:
    // 0x32eb88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x32eb88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_32eb8c:
    // 0x32eb8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32eb8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32eb90:
    // 0x32eb90: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_32eb94:
    if (ctx->pc == 0x32EB94u) {
        ctx->pc = 0x32EB94u;
            // 0x32eb94: 0xe6010c60  swc1        $f1, 0xC60($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3168), bits); }
        ctx->pc = 0x32EB98u;
        goto label_32eb98;
    }
    ctx->pc = 0x32EB90u;
    {
        const bool branch_taken_0x32eb90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32EB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EB90u;
            // 0x32eb94: 0xe6010c60  swc1        $f1, 0xC60($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eb90) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32EB98u;
label_32eb98:
    // 0x32eb98: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x32eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_32eb9c:
    // 0x32eb9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32eb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32eba0:
    // 0x32eba0: 0xae020cb4  sw          $v0, 0xCB4($s0)
    ctx->pc = 0x32eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3252), GPR_U32(ctx, 2));
label_32eba4:
    // 0x32eba4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32eba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32eba8:
    // 0x32eba8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32eba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32ebac:
    // 0x32ebac: 0x320f809  jalr        $t9
label_32ebb0:
    if (ctx->pc == 0x32EBB0u) {
        ctx->pc = 0x32EBB0u;
            // 0x32ebb0: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x32EBB4u;
        goto label_32ebb4;
    }
    ctx->pc = 0x32EBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EBB4u);
        ctx->pc = 0x32EBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EBACu;
            // 0x32ebb0: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EBB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EBB4u; }
            if (ctx->pc != 0x32EBB4u) { return; }
        }
        }
    }
    ctx->pc = 0x32EBB4u;
label_32ebb4:
    // 0x32ebb4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32ebb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32ebb8:
    // 0x32ebb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ebb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ebbc:
    // 0x32ebbc: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x32ebbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_32ebc0:
    // 0x32ebc0: 0x320f809  jalr        $t9
label_32ebc4:
    if (ctx->pc == 0x32EBC4u) {
        ctx->pc = 0x32EBC4u;
            // 0x32ebc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32EBC8u;
        goto label_32ebc8;
    }
    ctx->pc = 0x32EBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EBC8u);
        ctx->pc = 0x32EBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EBC0u;
            // 0x32ebc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EBC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EBC8u; }
            if (ctx->pc != 0x32EBC8u) { return; }
        }
        }
    }
    ctx->pc = 0x32EBC8u;
label_32ebc8:
    // 0x32ebc8: 0x10000012  b           . + 4 + (0x12 << 2)
label_32ebcc:
    if (ctx->pc == 0x32EBCCu) {
        ctx->pc = 0x32EBD0u;
        goto label_32ebd0;
    }
    ctx->pc = 0x32EBC8u;
    {
        const bool branch_taken_0x32ebc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ebc8) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32EBD0u;
label_32ebd0:
    // 0x32ebd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32ebd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32ebd4:
    // 0x32ebd4: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x32ebd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_32ebd8:
    // 0x32ebd8: 0x320f809  jalr        $t9
label_32ebdc:
    if (ctx->pc == 0x32EBDCu) {
        ctx->pc = 0x32EBDCu;
            // 0x32ebdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32EBE0u;
        goto label_32ebe0;
    }
    ctx->pc = 0x32EBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EBE0u);
        ctx->pc = 0x32EBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EBD8u;
            // 0x32ebdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EBE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EBE0u; }
            if (ctx->pc != 0x32EBE0u) { return; }
        }
        }
    }
    ctx->pc = 0x32EBE0u;
label_32ebe0:
    // 0x32ebe0: 0x1000000c  b           . + 4 + (0xC << 2)
label_32ebe4:
    if (ctx->pc == 0x32EBE4u) {
        ctx->pc = 0x32EBE8u;
        goto label_32ebe8;
    }
    ctx->pc = 0x32EBE0u;
    {
        const bool branch_taken_0x32ebe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ebe0) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32EBE8u;
label_32ebe8:
    // 0x32ebe8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32ebe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32ebec:
    // 0x32ebec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32ebecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32ebf0:
    // 0x32ebf0: 0x320f809  jalr        $t9
label_32ebf4:
    if (ctx->pc == 0x32EBF4u) {
        ctx->pc = 0x32EBF8u;
        goto label_32ebf8;
    }
    ctx->pc = 0x32EBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EBF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EBF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EBF8u; }
            if (ctx->pc != 0x32EBF8u) { return; }
        }
        }
    }
    ctx->pc = 0x32EBF8u;
label_32ebf8:
    // 0x32ebf8: 0x10000006  b           . + 4 + (0x6 << 2)
label_32ebfc:
    if (ctx->pc == 0x32EBFCu) {
        ctx->pc = 0x32EC00u;
        goto label_32ec00;
    }
    ctx->pc = 0x32EBF8u;
    {
        const bool branch_taken_0x32ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ebf8) {
            ctx->pc = 0x32EC14u;
            goto label_32ec14;
        }
    }
    ctx->pc = 0x32EC00u;
label_32ec00:
    // 0x32ec00: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32ec04:
    // 0x32ec04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32ec04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ec08:
    // 0x32ec08: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x32ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_32ec0c:
    // 0x32ec0c: 0xc057b7c  jal         func_15EDF0
label_32ec10:
    if (ctx->pc == 0x32EC10u) {
        ctx->pc = 0x32EC10u;
            // 0x32ec10: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x32EC14u;
        goto label_32ec14;
    }
    ctx->pc = 0x32EC0Cu;
    SET_GPR_U32(ctx, 31, 0x32EC14u);
    ctx->pc = 0x32EC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EC0Cu;
            // 0x32ec10: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EC14u; }
        if (ctx->pc != 0x32EC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EC14u; }
        if (ctx->pc != 0x32EC14u) { return; }
    }
    ctx->pc = 0x32EC14u;
label_32ec14:
    // 0x32ec14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32ec14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32ec18:
    // 0x32ec18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32ec18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32ec1c:
    // 0x32ec1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32ec1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32ec20:
    // 0x32ec20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32ec20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32ec24:
    // 0x32ec24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32ec24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32ec28:
    // 0x32ec28: 0x3e00008  jr          $ra
label_32ec2c:
    if (ctx->pc == 0x32EC2Cu) {
        ctx->pc = 0x32EC2Cu;
            // 0x32ec2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x32EC30u;
        goto label_fallthrough_0x32ec28;
    }
    ctx->pc = 0x32EC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EC28u;
            // 0x32ec2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x32ec28:
    ctx->pc = 0x32EC30u;
}
