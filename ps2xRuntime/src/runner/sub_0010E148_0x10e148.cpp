#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010E148
// Address: 0x10e148 - 0x10ef08
void sub_0010E148_0x10e148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E148_0x10e148");
#endif

    switch (ctx->pc) {
        case 0x10e148u: goto label_10e148;
        case 0x10e14cu: goto label_10e14c;
        case 0x10e150u: goto label_10e150;
        case 0x10e154u: goto label_10e154;
        case 0x10e158u: goto label_10e158;
        case 0x10e15cu: goto label_10e15c;
        case 0x10e160u: goto label_10e160;
        case 0x10e164u: goto label_10e164;
        case 0x10e168u: goto label_10e168;
        case 0x10e16cu: goto label_10e16c;
        case 0x10e170u: goto label_10e170;
        case 0x10e174u: goto label_10e174;
        case 0x10e178u: goto label_10e178;
        case 0x10e17cu: goto label_10e17c;
        case 0x10e180u: goto label_10e180;
        case 0x10e184u: goto label_10e184;
        case 0x10e188u: goto label_10e188;
        case 0x10e18cu: goto label_10e18c;
        case 0x10e190u: goto label_10e190;
        case 0x10e194u: goto label_10e194;
        case 0x10e198u: goto label_10e198;
        case 0x10e19cu: goto label_10e19c;
        case 0x10e1a0u: goto label_10e1a0;
        case 0x10e1a4u: goto label_10e1a4;
        case 0x10e1a8u: goto label_10e1a8;
        case 0x10e1acu: goto label_10e1ac;
        case 0x10e1b0u: goto label_10e1b0;
        case 0x10e1b4u: goto label_10e1b4;
        case 0x10e1b8u: goto label_10e1b8;
        case 0x10e1bcu: goto label_10e1bc;
        case 0x10e1c0u: goto label_10e1c0;
        case 0x10e1c4u: goto label_10e1c4;
        case 0x10e1c8u: goto label_10e1c8;
        case 0x10e1ccu: goto label_10e1cc;
        case 0x10e1d0u: goto label_10e1d0;
        case 0x10e1d4u: goto label_10e1d4;
        case 0x10e1d8u: goto label_10e1d8;
        case 0x10e1dcu: goto label_10e1dc;
        case 0x10e1e0u: goto label_10e1e0;
        case 0x10e1e4u: goto label_10e1e4;
        case 0x10e1e8u: goto label_10e1e8;
        case 0x10e1ecu: goto label_10e1ec;
        case 0x10e1f0u: goto label_10e1f0;
        case 0x10e1f4u: goto label_10e1f4;
        case 0x10e1f8u: goto label_10e1f8;
        case 0x10e1fcu: goto label_10e1fc;
        case 0x10e200u: goto label_10e200;
        case 0x10e204u: goto label_10e204;
        case 0x10e208u: goto label_10e208;
        case 0x10e20cu: goto label_10e20c;
        case 0x10e210u: goto label_10e210;
        case 0x10e214u: goto label_10e214;
        case 0x10e218u: goto label_10e218;
        case 0x10e21cu: goto label_10e21c;
        case 0x10e220u: goto label_10e220;
        case 0x10e224u: goto label_10e224;
        case 0x10e228u: goto label_10e228;
        case 0x10e22cu: goto label_10e22c;
        case 0x10e230u: goto label_10e230;
        case 0x10e234u: goto label_10e234;
        case 0x10e238u: goto label_10e238;
        case 0x10e23cu: goto label_10e23c;
        case 0x10e240u: goto label_10e240;
        case 0x10e244u: goto label_10e244;
        case 0x10e248u: goto label_10e248;
        case 0x10e24cu: goto label_10e24c;
        case 0x10e250u: goto label_10e250;
        case 0x10e254u: goto label_10e254;
        case 0x10e258u: goto label_10e258;
        case 0x10e25cu: goto label_10e25c;
        case 0x10e260u: goto label_10e260;
        case 0x10e264u: goto label_10e264;
        case 0x10e268u: goto label_10e268;
        case 0x10e26cu: goto label_10e26c;
        case 0x10e270u: goto label_10e270;
        case 0x10e274u: goto label_10e274;
        case 0x10e278u: goto label_10e278;
        case 0x10e27cu: goto label_10e27c;
        case 0x10e280u: goto label_10e280;
        case 0x10e284u: goto label_10e284;
        case 0x10e288u: goto label_10e288;
        case 0x10e28cu: goto label_10e28c;
        case 0x10e290u: goto label_10e290;
        case 0x10e294u: goto label_10e294;
        case 0x10e298u: goto label_10e298;
        case 0x10e29cu: goto label_10e29c;
        case 0x10e2a0u: goto label_10e2a0;
        case 0x10e2a4u: goto label_10e2a4;
        case 0x10e2a8u: goto label_10e2a8;
        case 0x10e2acu: goto label_10e2ac;
        case 0x10e2b0u: goto label_10e2b0;
        case 0x10e2b4u: goto label_10e2b4;
        case 0x10e2b8u: goto label_10e2b8;
        case 0x10e2bcu: goto label_10e2bc;
        case 0x10e2c0u: goto label_10e2c0;
        case 0x10e2c4u: goto label_10e2c4;
        case 0x10e2c8u: goto label_10e2c8;
        case 0x10e2ccu: goto label_10e2cc;
        case 0x10e2d0u: goto label_10e2d0;
        case 0x10e2d4u: goto label_10e2d4;
        case 0x10e2d8u: goto label_10e2d8;
        case 0x10e2dcu: goto label_10e2dc;
        case 0x10e2e0u: goto label_10e2e0;
        case 0x10e2e4u: goto label_10e2e4;
        case 0x10e2e8u: goto label_10e2e8;
        case 0x10e2ecu: goto label_10e2ec;
        case 0x10e2f0u: goto label_10e2f0;
        case 0x10e2f4u: goto label_10e2f4;
        case 0x10e2f8u: goto label_10e2f8;
        case 0x10e2fcu: goto label_10e2fc;
        case 0x10e300u: goto label_10e300;
        case 0x10e304u: goto label_10e304;
        case 0x10e308u: goto label_10e308;
        case 0x10e30cu: goto label_10e30c;
        case 0x10e310u: goto label_10e310;
        case 0x10e314u: goto label_10e314;
        case 0x10e318u: goto label_10e318;
        case 0x10e31cu: goto label_10e31c;
        case 0x10e320u: goto label_10e320;
        case 0x10e324u: goto label_10e324;
        case 0x10e328u: goto label_10e328;
        case 0x10e32cu: goto label_10e32c;
        case 0x10e330u: goto label_10e330;
        case 0x10e334u: goto label_10e334;
        case 0x10e338u: goto label_10e338;
        case 0x10e33cu: goto label_10e33c;
        case 0x10e340u: goto label_10e340;
        case 0x10e344u: goto label_10e344;
        case 0x10e348u: goto label_10e348;
        case 0x10e34cu: goto label_10e34c;
        case 0x10e350u: goto label_10e350;
        case 0x10e354u: goto label_10e354;
        case 0x10e358u: goto label_10e358;
        case 0x10e35cu: goto label_10e35c;
        case 0x10e360u: goto label_10e360;
        case 0x10e364u: goto label_10e364;
        case 0x10e368u: goto label_10e368;
        case 0x10e36cu: goto label_10e36c;
        case 0x10e370u: goto label_10e370;
        case 0x10e374u: goto label_10e374;
        case 0x10e378u: goto label_10e378;
        case 0x10e37cu: goto label_10e37c;
        case 0x10e380u: goto label_10e380;
        case 0x10e384u: goto label_10e384;
        case 0x10e388u: goto label_10e388;
        case 0x10e38cu: goto label_10e38c;
        case 0x10e390u: goto label_10e390;
        case 0x10e394u: goto label_10e394;
        case 0x10e398u: goto label_10e398;
        case 0x10e39cu: goto label_10e39c;
        case 0x10e3a0u: goto label_10e3a0;
        case 0x10e3a4u: goto label_10e3a4;
        case 0x10e3a8u: goto label_10e3a8;
        case 0x10e3acu: goto label_10e3ac;
        case 0x10e3b0u: goto label_10e3b0;
        case 0x10e3b4u: goto label_10e3b4;
        case 0x10e3b8u: goto label_10e3b8;
        case 0x10e3bcu: goto label_10e3bc;
        case 0x10e3c0u: goto label_10e3c0;
        case 0x10e3c4u: goto label_10e3c4;
        case 0x10e3c8u: goto label_10e3c8;
        case 0x10e3ccu: goto label_10e3cc;
        case 0x10e3d0u: goto label_10e3d0;
        case 0x10e3d4u: goto label_10e3d4;
        case 0x10e3d8u: goto label_10e3d8;
        case 0x10e3dcu: goto label_10e3dc;
        case 0x10e3e0u: goto label_10e3e0;
        case 0x10e3e4u: goto label_10e3e4;
        case 0x10e3e8u: goto label_10e3e8;
        case 0x10e3ecu: goto label_10e3ec;
        case 0x10e3f0u: goto label_10e3f0;
        case 0x10e3f4u: goto label_10e3f4;
        case 0x10e3f8u: goto label_10e3f8;
        case 0x10e3fcu: goto label_10e3fc;
        case 0x10e400u: goto label_10e400;
        case 0x10e404u: goto label_10e404;
        case 0x10e408u: goto label_10e408;
        case 0x10e40cu: goto label_10e40c;
        case 0x10e410u: goto label_10e410;
        case 0x10e414u: goto label_10e414;
        case 0x10e418u: goto label_10e418;
        case 0x10e41cu: goto label_10e41c;
        case 0x10e420u: goto label_10e420;
        case 0x10e424u: goto label_10e424;
        case 0x10e428u: goto label_10e428;
        case 0x10e42cu: goto label_10e42c;
        case 0x10e430u: goto label_10e430;
        case 0x10e434u: goto label_10e434;
        case 0x10e438u: goto label_10e438;
        case 0x10e43cu: goto label_10e43c;
        case 0x10e440u: goto label_10e440;
        case 0x10e444u: goto label_10e444;
        case 0x10e448u: goto label_10e448;
        case 0x10e44cu: goto label_10e44c;
        case 0x10e450u: goto label_10e450;
        case 0x10e454u: goto label_10e454;
        case 0x10e458u: goto label_10e458;
        case 0x10e45cu: goto label_10e45c;
        case 0x10e460u: goto label_10e460;
        case 0x10e464u: goto label_10e464;
        case 0x10e468u: goto label_10e468;
        case 0x10e46cu: goto label_10e46c;
        case 0x10e470u: goto label_10e470;
        case 0x10e474u: goto label_10e474;
        case 0x10e478u: goto label_10e478;
        case 0x10e47cu: goto label_10e47c;
        case 0x10e480u: goto label_10e480;
        case 0x10e484u: goto label_10e484;
        case 0x10e488u: goto label_10e488;
        case 0x10e48cu: goto label_10e48c;
        case 0x10e490u: goto label_10e490;
        case 0x10e494u: goto label_10e494;
        case 0x10e498u: goto label_10e498;
        case 0x10e49cu: goto label_10e49c;
        case 0x10e4a0u: goto label_10e4a0;
        case 0x10e4a4u: goto label_10e4a4;
        case 0x10e4a8u: goto label_10e4a8;
        case 0x10e4acu: goto label_10e4ac;
        case 0x10e4b0u: goto label_10e4b0;
        case 0x10e4b4u: goto label_10e4b4;
        case 0x10e4b8u: goto label_10e4b8;
        case 0x10e4bcu: goto label_10e4bc;
        case 0x10e4c0u: goto label_10e4c0;
        case 0x10e4c4u: goto label_10e4c4;
        case 0x10e4c8u: goto label_10e4c8;
        case 0x10e4ccu: goto label_10e4cc;
        case 0x10e4d0u: goto label_10e4d0;
        case 0x10e4d4u: goto label_10e4d4;
        case 0x10e4d8u: goto label_10e4d8;
        case 0x10e4dcu: goto label_10e4dc;
        case 0x10e4e0u: goto label_10e4e0;
        case 0x10e4e4u: goto label_10e4e4;
        case 0x10e4e8u: goto label_10e4e8;
        case 0x10e4ecu: goto label_10e4ec;
        case 0x10e4f0u: goto label_10e4f0;
        case 0x10e4f4u: goto label_10e4f4;
        case 0x10e4f8u: goto label_10e4f8;
        case 0x10e4fcu: goto label_10e4fc;
        case 0x10e500u: goto label_10e500;
        case 0x10e504u: goto label_10e504;
        case 0x10e508u: goto label_10e508;
        case 0x10e50cu: goto label_10e50c;
        case 0x10e510u: goto label_10e510;
        case 0x10e514u: goto label_10e514;
        case 0x10e518u: goto label_10e518;
        case 0x10e51cu: goto label_10e51c;
        case 0x10e520u: goto label_10e520;
        case 0x10e524u: goto label_10e524;
        case 0x10e528u: goto label_10e528;
        case 0x10e52cu: goto label_10e52c;
        case 0x10e530u: goto label_10e530;
        case 0x10e534u: goto label_10e534;
        case 0x10e538u: goto label_10e538;
        case 0x10e53cu: goto label_10e53c;
        case 0x10e540u: goto label_10e540;
        case 0x10e544u: goto label_10e544;
        case 0x10e548u: goto label_10e548;
        case 0x10e54cu: goto label_10e54c;
        case 0x10e550u: goto label_10e550;
        case 0x10e554u: goto label_10e554;
        case 0x10e558u: goto label_10e558;
        case 0x10e55cu: goto label_10e55c;
        case 0x10e560u: goto label_10e560;
        case 0x10e564u: goto label_10e564;
        case 0x10e568u: goto label_10e568;
        case 0x10e56cu: goto label_10e56c;
        case 0x10e570u: goto label_10e570;
        case 0x10e574u: goto label_10e574;
        case 0x10e578u: goto label_10e578;
        case 0x10e57cu: goto label_10e57c;
        case 0x10e580u: goto label_10e580;
        case 0x10e584u: goto label_10e584;
        case 0x10e588u: goto label_10e588;
        case 0x10e58cu: goto label_10e58c;
        case 0x10e590u: goto label_10e590;
        case 0x10e594u: goto label_10e594;
        case 0x10e598u: goto label_10e598;
        case 0x10e59cu: goto label_10e59c;
        case 0x10e5a0u: goto label_10e5a0;
        case 0x10e5a4u: goto label_10e5a4;
        case 0x10e5a8u: goto label_10e5a8;
        case 0x10e5acu: goto label_10e5ac;
        case 0x10e5b0u: goto label_10e5b0;
        case 0x10e5b4u: goto label_10e5b4;
        case 0x10e5b8u: goto label_10e5b8;
        case 0x10e5bcu: goto label_10e5bc;
        case 0x10e5c0u: goto label_10e5c0;
        case 0x10e5c4u: goto label_10e5c4;
        case 0x10e5c8u: goto label_10e5c8;
        case 0x10e5ccu: goto label_10e5cc;
        case 0x10e5d0u: goto label_10e5d0;
        case 0x10e5d4u: goto label_10e5d4;
        case 0x10e5d8u: goto label_10e5d8;
        case 0x10e5dcu: goto label_10e5dc;
        case 0x10e5e0u: goto label_10e5e0;
        case 0x10e5e4u: goto label_10e5e4;
        case 0x10e5e8u: goto label_10e5e8;
        case 0x10e5ecu: goto label_10e5ec;
        case 0x10e5f0u: goto label_10e5f0;
        case 0x10e5f4u: goto label_10e5f4;
        case 0x10e5f8u: goto label_10e5f8;
        case 0x10e5fcu: goto label_10e5fc;
        case 0x10e600u: goto label_10e600;
        case 0x10e604u: goto label_10e604;
        case 0x10e608u: goto label_10e608;
        case 0x10e60cu: goto label_10e60c;
        case 0x10e610u: goto label_10e610;
        case 0x10e614u: goto label_10e614;
        case 0x10e618u: goto label_10e618;
        case 0x10e61cu: goto label_10e61c;
        case 0x10e620u: goto label_10e620;
        case 0x10e624u: goto label_10e624;
        case 0x10e628u: goto label_10e628;
        case 0x10e62cu: goto label_10e62c;
        case 0x10e630u: goto label_10e630;
        case 0x10e634u: goto label_10e634;
        case 0x10e638u: goto label_10e638;
        case 0x10e63cu: goto label_10e63c;
        case 0x10e640u: goto label_10e640;
        case 0x10e644u: goto label_10e644;
        case 0x10e648u: goto label_10e648;
        case 0x10e64cu: goto label_10e64c;
        case 0x10e650u: goto label_10e650;
        case 0x10e654u: goto label_10e654;
        case 0x10e658u: goto label_10e658;
        case 0x10e65cu: goto label_10e65c;
        case 0x10e660u: goto label_10e660;
        case 0x10e664u: goto label_10e664;
        case 0x10e668u: goto label_10e668;
        case 0x10e66cu: goto label_10e66c;
        case 0x10e670u: goto label_10e670;
        case 0x10e674u: goto label_10e674;
        case 0x10e678u: goto label_10e678;
        case 0x10e67cu: goto label_10e67c;
        case 0x10e680u: goto label_10e680;
        case 0x10e684u: goto label_10e684;
        case 0x10e688u: goto label_10e688;
        case 0x10e68cu: goto label_10e68c;
        case 0x10e690u: goto label_10e690;
        case 0x10e694u: goto label_10e694;
        case 0x10e698u: goto label_10e698;
        case 0x10e69cu: goto label_10e69c;
        case 0x10e6a0u: goto label_10e6a0;
        case 0x10e6a4u: goto label_10e6a4;
        case 0x10e6a8u: goto label_10e6a8;
        case 0x10e6acu: goto label_10e6ac;
        case 0x10e6b0u: goto label_10e6b0;
        case 0x10e6b4u: goto label_10e6b4;
        case 0x10e6b8u: goto label_10e6b8;
        case 0x10e6bcu: goto label_10e6bc;
        case 0x10e6c0u: goto label_10e6c0;
        case 0x10e6c4u: goto label_10e6c4;
        case 0x10e6c8u: goto label_10e6c8;
        case 0x10e6ccu: goto label_10e6cc;
        case 0x10e6d0u: goto label_10e6d0;
        case 0x10e6d4u: goto label_10e6d4;
        case 0x10e6d8u: goto label_10e6d8;
        case 0x10e6dcu: goto label_10e6dc;
        case 0x10e6e0u: goto label_10e6e0;
        case 0x10e6e4u: goto label_10e6e4;
        case 0x10e6e8u: goto label_10e6e8;
        case 0x10e6ecu: goto label_10e6ec;
        case 0x10e6f0u: goto label_10e6f0;
        case 0x10e6f4u: goto label_10e6f4;
        case 0x10e6f8u: goto label_10e6f8;
        case 0x10e6fcu: goto label_10e6fc;
        case 0x10e700u: goto label_10e700;
        case 0x10e704u: goto label_10e704;
        case 0x10e708u: goto label_10e708;
        case 0x10e70cu: goto label_10e70c;
        case 0x10e710u: goto label_10e710;
        case 0x10e714u: goto label_10e714;
        case 0x10e718u: goto label_10e718;
        case 0x10e71cu: goto label_10e71c;
        case 0x10e720u: goto label_10e720;
        case 0x10e724u: goto label_10e724;
        case 0x10e728u: goto label_10e728;
        case 0x10e72cu: goto label_10e72c;
        case 0x10e730u: goto label_10e730;
        case 0x10e734u: goto label_10e734;
        case 0x10e738u: goto label_10e738;
        case 0x10e73cu: goto label_10e73c;
        case 0x10e740u: goto label_10e740;
        case 0x10e744u: goto label_10e744;
        case 0x10e748u: goto label_10e748;
        case 0x10e74cu: goto label_10e74c;
        case 0x10e750u: goto label_10e750;
        case 0x10e754u: goto label_10e754;
        case 0x10e758u: goto label_10e758;
        case 0x10e75cu: goto label_10e75c;
        case 0x10e760u: goto label_10e760;
        case 0x10e764u: goto label_10e764;
        case 0x10e768u: goto label_10e768;
        case 0x10e76cu: goto label_10e76c;
        case 0x10e770u: goto label_10e770;
        case 0x10e774u: goto label_10e774;
        case 0x10e778u: goto label_10e778;
        case 0x10e77cu: goto label_10e77c;
        case 0x10e780u: goto label_10e780;
        case 0x10e784u: goto label_10e784;
        case 0x10e788u: goto label_10e788;
        case 0x10e78cu: goto label_10e78c;
        case 0x10e790u: goto label_10e790;
        case 0x10e794u: goto label_10e794;
        case 0x10e798u: goto label_10e798;
        case 0x10e79cu: goto label_10e79c;
        case 0x10e7a0u: goto label_10e7a0;
        case 0x10e7a4u: goto label_10e7a4;
        case 0x10e7a8u: goto label_10e7a8;
        case 0x10e7acu: goto label_10e7ac;
        case 0x10e7b0u: goto label_10e7b0;
        case 0x10e7b4u: goto label_10e7b4;
        case 0x10e7b8u: goto label_10e7b8;
        case 0x10e7bcu: goto label_10e7bc;
        case 0x10e7c0u: goto label_10e7c0;
        case 0x10e7c4u: goto label_10e7c4;
        case 0x10e7c8u: goto label_10e7c8;
        case 0x10e7ccu: goto label_10e7cc;
        case 0x10e7d0u: goto label_10e7d0;
        case 0x10e7d4u: goto label_10e7d4;
        case 0x10e7d8u: goto label_10e7d8;
        case 0x10e7dcu: goto label_10e7dc;
        case 0x10e7e0u: goto label_10e7e0;
        case 0x10e7e4u: goto label_10e7e4;
        case 0x10e7e8u: goto label_10e7e8;
        case 0x10e7ecu: goto label_10e7ec;
        case 0x10e7f0u: goto label_10e7f0;
        case 0x10e7f4u: goto label_10e7f4;
        case 0x10e7f8u: goto label_10e7f8;
        case 0x10e7fcu: goto label_10e7fc;
        case 0x10e800u: goto label_10e800;
        case 0x10e804u: goto label_10e804;
        case 0x10e808u: goto label_10e808;
        case 0x10e80cu: goto label_10e80c;
        case 0x10e810u: goto label_10e810;
        case 0x10e814u: goto label_10e814;
        case 0x10e818u: goto label_10e818;
        case 0x10e81cu: goto label_10e81c;
        case 0x10e820u: goto label_10e820;
        case 0x10e824u: goto label_10e824;
        case 0x10e828u: goto label_10e828;
        case 0x10e82cu: goto label_10e82c;
        case 0x10e830u: goto label_10e830;
        case 0x10e834u: goto label_10e834;
        case 0x10e838u: goto label_10e838;
        case 0x10e83cu: goto label_10e83c;
        case 0x10e840u: goto label_10e840;
        case 0x10e844u: goto label_10e844;
        case 0x10e848u: goto label_10e848;
        case 0x10e84cu: goto label_10e84c;
        case 0x10e850u: goto label_10e850;
        case 0x10e854u: goto label_10e854;
        case 0x10e858u: goto label_10e858;
        case 0x10e85cu: goto label_10e85c;
        case 0x10e860u: goto label_10e860;
        case 0x10e864u: goto label_10e864;
        case 0x10e868u: goto label_10e868;
        case 0x10e86cu: goto label_10e86c;
        case 0x10e870u: goto label_10e870;
        case 0x10e874u: goto label_10e874;
        case 0x10e878u: goto label_10e878;
        case 0x10e87cu: goto label_10e87c;
        case 0x10e880u: goto label_10e880;
        case 0x10e884u: goto label_10e884;
        case 0x10e888u: goto label_10e888;
        case 0x10e88cu: goto label_10e88c;
        case 0x10e890u: goto label_10e890;
        case 0x10e894u: goto label_10e894;
        case 0x10e898u: goto label_10e898;
        case 0x10e89cu: goto label_10e89c;
        case 0x10e8a0u: goto label_10e8a0;
        case 0x10e8a4u: goto label_10e8a4;
        case 0x10e8a8u: goto label_10e8a8;
        case 0x10e8acu: goto label_10e8ac;
        case 0x10e8b0u: goto label_10e8b0;
        case 0x10e8b4u: goto label_10e8b4;
        case 0x10e8b8u: goto label_10e8b8;
        case 0x10e8bcu: goto label_10e8bc;
        case 0x10e8c0u: goto label_10e8c0;
        case 0x10e8c4u: goto label_10e8c4;
        case 0x10e8c8u: goto label_10e8c8;
        case 0x10e8ccu: goto label_10e8cc;
        case 0x10e8d0u: goto label_10e8d0;
        case 0x10e8d4u: goto label_10e8d4;
        case 0x10e8d8u: goto label_10e8d8;
        case 0x10e8dcu: goto label_10e8dc;
        case 0x10e8e0u: goto label_10e8e0;
        case 0x10e8e4u: goto label_10e8e4;
        case 0x10e8e8u: goto label_10e8e8;
        case 0x10e8ecu: goto label_10e8ec;
        case 0x10e8f0u: goto label_10e8f0;
        case 0x10e8f4u: goto label_10e8f4;
        case 0x10e8f8u: goto label_10e8f8;
        case 0x10e8fcu: goto label_10e8fc;
        case 0x10e900u: goto label_10e900;
        case 0x10e904u: goto label_10e904;
        case 0x10e908u: goto label_10e908;
        case 0x10e90cu: goto label_10e90c;
        case 0x10e910u: goto label_10e910;
        case 0x10e914u: goto label_10e914;
        case 0x10e918u: goto label_10e918;
        case 0x10e91cu: goto label_10e91c;
        case 0x10e920u: goto label_10e920;
        case 0x10e924u: goto label_10e924;
        case 0x10e928u: goto label_10e928;
        case 0x10e92cu: goto label_10e92c;
        case 0x10e930u: goto label_10e930;
        case 0x10e934u: goto label_10e934;
        case 0x10e938u: goto label_10e938;
        case 0x10e93cu: goto label_10e93c;
        case 0x10e940u: goto label_10e940;
        case 0x10e944u: goto label_10e944;
        case 0x10e948u: goto label_10e948;
        case 0x10e94cu: goto label_10e94c;
        case 0x10e950u: goto label_10e950;
        case 0x10e954u: goto label_10e954;
        case 0x10e958u: goto label_10e958;
        case 0x10e95cu: goto label_10e95c;
        case 0x10e960u: goto label_10e960;
        case 0x10e964u: goto label_10e964;
        case 0x10e968u: goto label_10e968;
        case 0x10e96cu: goto label_10e96c;
        case 0x10e970u: goto label_10e970;
        case 0x10e974u: goto label_10e974;
        case 0x10e978u: goto label_10e978;
        case 0x10e97cu: goto label_10e97c;
        case 0x10e980u: goto label_10e980;
        case 0x10e984u: goto label_10e984;
        case 0x10e988u: goto label_10e988;
        case 0x10e98cu: goto label_10e98c;
        case 0x10e990u: goto label_10e990;
        case 0x10e994u: goto label_10e994;
        case 0x10e998u: goto label_10e998;
        case 0x10e99cu: goto label_10e99c;
        case 0x10e9a0u: goto label_10e9a0;
        case 0x10e9a4u: goto label_10e9a4;
        case 0x10e9a8u: goto label_10e9a8;
        case 0x10e9acu: goto label_10e9ac;
        case 0x10e9b0u: goto label_10e9b0;
        case 0x10e9b4u: goto label_10e9b4;
        case 0x10e9b8u: goto label_10e9b8;
        case 0x10e9bcu: goto label_10e9bc;
        case 0x10e9c0u: goto label_10e9c0;
        case 0x10e9c4u: goto label_10e9c4;
        case 0x10e9c8u: goto label_10e9c8;
        case 0x10e9ccu: goto label_10e9cc;
        case 0x10e9d0u: goto label_10e9d0;
        case 0x10e9d4u: goto label_10e9d4;
        case 0x10e9d8u: goto label_10e9d8;
        case 0x10e9dcu: goto label_10e9dc;
        case 0x10e9e0u: goto label_10e9e0;
        case 0x10e9e4u: goto label_10e9e4;
        case 0x10e9e8u: goto label_10e9e8;
        case 0x10e9ecu: goto label_10e9ec;
        case 0x10e9f0u: goto label_10e9f0;
        case 0x10e9f4u: goto label_10e9f4;
        case 0x10e9f8u: goto label_10e9f8;
        case 0x10e9fcu: goto label_10e9fc;
        case 0x10ea00u: goto label_10ea00;
        case 0x10ea04u: goto label_10ea04;
        case 0x10ea08u: goto label_10ea08;
        case 0x10ea0cu: goto label_10ea0c;
        case 0x10ea10u: goto label_10ea10;
        case 0x10ea14u: goto label_10ea14;
        case 0x10ea18u: goto label_10ea18;
        case 0x10ea1cu: goto label_10ea1c;
        case 0x10ea20u: goto label_10ea20;
        case 0x10ea24u: goto label_10ea24;
        case 0x10ea28u: goto label_10ea28;
        case 0x10ea2cu: goto label_10ea2c;
        case 0x10ea30u: goto label_10ea30;
        case 0x10ea34u: goto label_10ea34;
        case 0x10ea38u: goto label_10ea38;
        case 0x10ea3cu: goto label_10ea3c;
        case 0x10ea40u: goto label_10ea40;
        case 0x10ea44u: goto label_10ea44;
        case 0x10ea48u: goto label_10ea48;
        case 0x10ea4cu: goto label_10ea4c;
        case 0x10ea50u: goto label_10ea50;
        case 0x10ea54u: goto label_10ea54;
        case 0x10ea58u: goto label_10ea58;
        case 0x10ea5cu: goto label_10ea5c;
        case 0x10ea60u: goto label_10ea60;
        case 0x10ea64u: goto label_10ea64;
        case 0x10ea68u: goto label_10ea68;
        case 0x10ea6cu: goto label_10ea6c;
        case 0x10ea70u: goto label_10ea70;
        case 0x10ea74u: goto label_10ea74;
        case 0x10ea78u: goto label_10ea78;
        case 0x10ea7cu: goto label_10ea7c;
        case 0x10ea80u: goto label_10ea80;
        case 0x10ea84u: goto label_10ea84;
        case 0x10ea88u: goto label_10ea88;
        case 0x10ea8cu: goto label_10ea8c;
        case 0x10ea90u: goto label_10ea90;
        case 0x10ea94u: goto label_10ea94;
        case 0x10ea98u: goto label_10ea98;
        case 0x10ea9cu: goto label_10ea9c;
        case 0x10eaa0u: goto label_10eaa0;
        case 0x10eaa4u: goto label_10eaa4;
        case 0x10eaa8u: goto label_10eaa8;
        case 0x10eaacu: goto label_10eaac;
        case 0x10eab0u: goto label_10eab0;
        case 0x10eab4u: goto label_10eab4;
        case 0x10eab8u: goto label_10eab8;
        case 0x10eabcu: goto label_10eabc;
        case 0x10eac0u: goto label_10eac0;
        case 0x10eac4u: goto label_10eac4;
        case 0x10eac8u: goto label_10eac8;
        case 0x10eaccu: goto label_10eacc;
        case 0x10ead0u: goto label_10ead0;
        case 0x10ead4u: goto label_10ead4;
        case 0x10ead8u: goto label_10ead8;
        case 0x10eadcu: goto label_10eadc;
        case 0x10eae0u: goto label_10eae0;
        case 0x10eae4u: goto label_10eae4;
        case 0x10eae8u: goto label_10eae8;
        case 0x10eaecu: goto label_10eaec;
        case 0x10eaf0u: goto label_10eaf0;
        case 0x10eaf4u: goto label_10eaf4;
        case 0x10eaf8u: goto label_10eaf8;
        case 0x10eafcu: goto label_10eafc;
        case 0x10eb00u: goto label_10eb00;
        case 0x10eb04u: goto label_10eb04;
        case 0x10eb08u: goto label_10eb08;
        case 0x10eb0cu: goto label_10eb0c;
        case 0x10eb10u: goto label_10eb10;
        case 0x10eb14u: goto label_10eb14;
        case 0x10eb18u: goto label_10eb18;
        case 0x10eb1cu: goto label_10eb1c;
        case 0x10eb20u: goto label_10eb20;
        case 0x10eb24u: goto label_10eb24;
        case 0x10eb28u: goto label_10eb28;
        case 0x10eb2cu: goto label_10eb2c;
        case 0x10eb30u: goto label_10eb30;
        case 0x10eb34u: goto label_10eb34;
        case 0x10eb38u: goto label_10eb38;
        case 0x10eb3cu: goto label_10eb3c;
        case 0x10eb40u: goto label_10eb40;
        case 0x10eb44u: goto label_10eb44;
        case 0x10eb48u: goto label_10eb48;
        case 0x10eb4cu: goto label_10eb4c;
        case 0x10eb50u: goto label_10eb50;
        case 0x10eb54u: goto label_10eb54;
        case 0x10eb58u: goto label_10eb58;
        case 0x10eb5cu: goto label_10eb5c;
        case 0x10eb60u: goto label_10eb60;
        case 0x10eb64u: goto label_10eb64;
        case 0x10eb68u: goto label_10eb68;
        case 0x10eb6cu: goto label_10eb6c;
        case 0x10eb70u: goto label_10eb70;
        case 0x10eb74u: goto label_10eb74;
        case 0x10eb78u: goto label_10eb78;
        case 0x10eb7cu: goto label_10eb7c;
        case 0x10eb80u: goto label_10eb80;
        case 0x10eb84u: goto label_10eb84;
        case 0x10eb88u: goto label_10eb88;
        case 0x10eb8cu: goto label_10eb8c;
        case 0x10eb90u: goto label_10eb90;
        case 0x10eb94u: goto label_10eb94;
        case 0x10eb98u: goto label_10eb98;
        case 0x10eb9cu: goto label_10eb9c;
        case 0x10eba0u: goto label_10eba0;
        case 0x10eba4u: goto label_10eba4;
        case 0x10eba8u: goto label_10eba8;
        case 0x10ebacu: goto label_10ebac;
        case 0x10ebb0u: goto label_10ebb0;
        case 0x10ebb4u: goto label_10ebb4;
        case 0x10ebb8u: goto label_10ebb8;
        case 0x10ebbcu: goto label_10ebbc;
        case 0x10ebc0u: goto label_10ebc0;
        case 0x10ebc4u: goto label_10ebc4;
        case 0x10ebc8u: goto label_10ebc8;
        case 0x10ebccu: goto label_10ebcc;
        case 0x10ebd0u: goto label_10ebd0;
        case 0x10ebd4u: goto label_10ebd4;
        case 0x10ebd8u: goto label_10ebd8;
        case 0x10ebdcu: goto label_10ebdc;
        case 0x10ebe0u: goto label_10ebe0;
        case 0x10ebe4u: goto label_10ebe4;
        case 0x10ebe8u: goto label_10ebe8;
        case 0x10ebecu: goto label_10ebec;
        case 0x10ebf0u: goto label_10ebf0;
        case 0x10ebf4u: goto label_10ebf4;
        case 0x10ebf8u: goto label_10ebf8;
        case 0x10ebfcu: goto label_10ebfc;
        case 0x10ec00u: goto label_10ec00;
        case 0x10ec04u: goto label_10ec04;
        case 0x10ec08u: goto label_10ec08;
        case 0x10ec0cu: goto label_10ec0c;
        case 0x10ec10u: goto label_10ec10;
        case 0x10ec14u: goto label_10ec14;
        case 0x10ec18u: goto label_10ec18;
        case 0x10ec1cu: goto label_10ec1c;
        case 0x10ec20u: goto label_10ec20;
        case 0x10ec24u: goto label_10ec24;
        case 0x10ec28u: goto label_10ec28;
        case 0x10ec2cu: goto label_10ec2c;
        case 0x10ec30u: goto label_10ec30;
        case 0x10ec34u: goto label_10ec34;
        case 0x10ec38u: goto label_10ec38;
        case 0x10ec3cu: goto label_10ec3c;
        case 0x10ec40u: goto label_10ec40;
        case 0x10ec44u: goto label_10ec44;
        case 0x10ec48u: goto label_10ec48;
        case 0x10ec4cu: goto label_10ec4c;
        case 0x10ec50u: goto label_10ec50;
        case 0x10ec54u: goto label_10ec54;
        case 0x10ec58u: goto label_10ec58;
        case 0x10ec5cu: goto label_10ec5c;
        case 0x10ec60u: goto label_10ec60;
        case 0x10ec64u: goto label_10ec64;
        case 0x10ec68u: goto label_10ec68;
        case 0x10ec6cu: goto label_10ec6c;
        case 0x10ec70u: goto label_10ec70;
        case 0x10ec74u: goto label_10ec74;
        case 0x10ec78u: goto label_10ec78;
        case 0x10ec7cu: goto label_10ec7c;
        case 0x10ec80u: goto label_10ec80;
        case 0x10ec84u: goto label_10ec84;
        case 0x10ec88u: goto label_10ec88;
        case 0x10ec8cu: goto label_10ec8c;
        case 0x10ec90u: goto label_10ec90;
        case 0x10ec94u: goto label_10ec94;
        case 0x10ec98u: goto label_10ec98;
        case 0x10ec9cu: goto label_10ec9c;
        case 0x10eca0u: goto label_10eca0;
        case 0x10eca4u: goto label_10eca4;
        case 0x10eca8u: goto label_10eca8;
        case 0x10ecacu: goto label_10ecac;
        case 0x10ecb0u: goto label_10ecb0;
        case 0x10ecb4u: goto label_10ecb4;
        case 0x10ecb8u: goto label_10ecb8;
        case 0x10ecbcu: goto label_10ecbc;
        case 0x10ecc0u: goto label_10ecc0;
        case 0x10ecc4u: goto label_10ecc4;
        case 0x10ecc8u: goto label_10ecc8;
        case 0x10ecccu: goto label_10eccc;
        case 0x10ecd0u: goto label_10ecd0;
        case 0x10ecd4u: goto label_10ecd4;
        case 0x10ecd8u: goto label_10ecd8;
        case 0x10ecdcu: goto label_10ecdc;
        case 0x10ece0u: goto label_10ece0;
        case 0x10ece4u: goto label_10ece4;
        case 0x10ece8u: goto label_10ece8;
        case 0x10ececu: goto label_10ecec;
        case 0x10ecf0u: goto label_10ecf0;
        case 0x10ecf4u: goto label_10ecf4;
        case 0x10ecf8u: goto label_10ecf8;
        case 0x10ecfcu: goto label_10ecfc;
        case 0x10ed00u: goto label_10ed00;
        case 0x10ed04u: goto label_10ed04;
        case 0x10ed08u: goto label_10ed08;
        case 0x10ed0cu: goto label_10ed0c;
        case 0x10ed10u: goto label_10ed10;
        case 0x10ed14u: goto label_10ed14;
        case 0x10ed18u: goto label_10ed18;
        case 0x10ed1cu: goto label_10ed1c;
        case 0x10ed20u: goto label_10ed20;
        case 0x10ed24u: goto label_10ed24;
        case 0x10ed28u: goto label_10ed28;
        case 0x10ed2cu: goto label_10ed2c;
        case 0x10ed30u: goto label_10ed30;
        case 0x10ed34u: goto label_10ed34;
        case 0x10ed38u: goto label_10ed38;
        case 0x10ed3cu: goto label_10ed3c;
        case 0x10ed40u: goto label_10ed40;
        case 0x10ed44u: goto label_10ed44;
        case 0x10ed48u: goto label_10ed48;
        case 0x10ed4cu: goto label_10ed4c;
        case 0x10ed50u: goto label_10ed50;
        case 0x10ed54u: goto label_10ed54;
        case 0x10ed58u: goto label_10ed58;
        case 0x10ed5cu: goto label_10ed5c;
        case 0x10ed60u: goto label_10ed60;
        case 0x10ed64u: goto label_10ed64;
        case 0x10ed68u: goto label_10ed68;
        case 0x10ed6cu: goto label_10ed6c;
        case 0x10ed70u: goto label_10ed70;
        case 0x10ed74u: goto label_10ed74;
        case 0x10ed78u: goto label_10ed78;
        case 0x10ed7cu: goto label_10ed7c;
        case 0x10ed80u: goto label_10ed80;
        case 0x10ed84u: goto label_10ed84;
        case 0x10ed88u: goto label_10ed88;
        case 0x10ed8cu: goto label_10ed8c;
        case 0x10ed90u: goto label_10ed90;
        case 0x10ed94u: goto label_10ed94;
        case 0x10ed98u: goto label_10ed98;
        case 0x10ed9cu: goto label_10ed9c;
        case 0x10eda0u: goto label_10eda0;
        case 0x10eda4u: goto label_10eda4;
        case 0x10eda8u: goto label_10eda8;
        case 0x10edacu: goto label_10edac;
        case 0x10edb0u: goto label_10edb0;
        case 0x10edb4u: goto label_10edb4;
        case 0x10edb8u: goto label_10edb8;
        case 0x10edbcu: goto label_10edbc;
        case 0x10edc0u: goto label_10edc0;
        case 0x10edc4u: goto label_10edc4;
        case 0x10edc8u: goto label_10edc8;
        case 0x10edccu: goto label_10edcc;
        case 0x10edd0u: goto label_10edd0;
        case 0x10edd4u: goto label_10edd4;
        case 0x10edd8u: goto label_10edd8;
        case 0x10eddcu: goto label_10eddc;
        case 0x10ede0u: goto label_10ede0;
        case 0x10ede4u: goto label_10ede4;
        case 0x10ede8u: goto label_10ede8;
        case 0x10edecu: goto label_10edec;
        case 0x10edf0u: goto label_10edf0;
        case 0x10edf4u: goto label_10edf4;
        case 0x10edf8u: goto label_10edf8;
        case 0x10edfcu: goto label_10edfc;
        case 0x10ee00u: goto label_10ee00;
        case 0x10ee04u: goto label_10ee04;
        case 0x10ee08u: goto label_10ee08;
        case 0x10ee0cu: goto label_10ee0c;
        case 0x10ee10u: goto label_10ee10;
        case 0x10ee14u: goto label_10ee14;
        case 0x10ee18u: goto label_10ee18;
        case 0x10ee1cu: goto label_10ee1c;
        case 0x10ee20u: goto label_10ee20;
        case 0x10ee24u: goto label_10ee24;
        case 0x10ee28u: goto label_10ee28;
        case 0x10ee2cu: goto label_10ee2c;
        case 0x10ee30u: goto label_10ee30;
        case 0x10ee34u: goto label_10ee34;
        case 0x10ee38u: goto label_10ee38;
        case 0x10ee3cu: goto label_10ee3c;
        case 0x10ee40u: goto label_10ee40;
        case 0x10ee44u: goto label_10ee44;
        case 0x10ee48u: goto label_10ee48;
        case 0x10ee4cu: goto label_10ee4c;
        case 0x10ee50u: goto label_10ee50;
        case 0x10ee54u: goto label_10ee54;
        case 0x10ee58u: goto label_10ee58;
        case 0x10ee5cu: goto label_10ee5c;
        case 0x10ee60u: goto label_10ee60;
        case 0x10ee64u: goto label_10ee64;
        case 0x10ee68u: goto label_10ee68;
        case 0x10ee6cu: goto label_10ee6c;
        case 0x10ee70u: goto label_10ee70;
        case 0x10ee74u: goto label_10ee74;
        case 0x10ee78u: goto label_10ee78;
        case 0x10ee7cu: goto label_10ee7c;
        case 0x10ee80u: goto label_10ee80;
        case 0x10ee84u: goto label_10ee84;
        case 0x10ee88u: goto label_10ee88;
        case 0x10ee8cu: goto label_10ee8c;
        case 0x10ee90u: goto label_10ee90;
        case 0x10ee94u: goto label_10ee94;
        case 0x10ee98u: goto label_10ee98;
        case 0x10ee9cu: goto label_10ee9c;
        case 0x10eea0u: goto label_10eea0;
        case 0x10eea4u: goto label_10eea4;
        case 0x10eea8u: goto label_10eea8;
        case 0x10eeacu: goto label_10eeac;
        case 0x10eeb0u: goto label_10eeb0;
        case 0x10eeb4u: goto label_10eeb4;
        case 0x10eeb8u: goto label_10eeb8;
        case 0x10eebcu: goto label_10eebc;
        case 0x10eec0u: goto label_10eec0;
        case 0x10eec4u: goto label_10eec4;
        case 0x10eec8u: goto label_10eec8;
        case 0x10eeccu: goto label_10eecc;
        case 0x10eed0u: goto label_10eed0;
        case 0x10eed4u: goto label_10eed4;
        case 0x10eed8u: goto label_10eed8;
        case 0x10eedcu: goto label_10eedc;
        case 0x10eee0u: goto label_10eee0;
        case 0x10eee4u: goto label_10eee4;
        case 0x10eee8u: goto label_10eee8;
        case 0x10eeecu: goto label_10eeec;
        case 0x10eef0u: goto label_10eef0;
        case 0x10eef4u: goto label_10eef4;
        case 0x10eef8u: goto label_10eef8;
        case 0x10eefcu: goto label_10eefc;
        case 0x10ef00u: goto label_10ef00;
        case 0x10ef04u: goto label_10ef04;
        default: break;
    }

    ctx->pc = 0x10e148u;

label_10e148:
    // 0x10e148: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x10e148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_10e14c:
    // 0x10e14c: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x10e14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
label_10e150:
    // 0x10e150: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x10e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_10e154:
    // 0x10e154: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x10e154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
label_10e158:
    // 0x10e158: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x10e158u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10e15c:
    // 0x10e15c: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x10e15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_10e160:
    // 0x10e160: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x10e160u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10e164:
    // 0x10e164: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x10e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
label_10e168:
    // 0x10e168: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x10e168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
label_10e16c:
    // 0x10e16c: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x10e16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_10e170:
    // 0x10e170: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x10e170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
label_10e174:
    // 0x10e174: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x10e174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_10e178:
    // 0x10e178: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x10e178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
label_10e17c:
    // 0x10e17c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x10e17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_10e180:
    // 0x10e180: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x10e180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_10e184:
    // 0x10e184: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x10e184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_10e188:
    // 0x10e188: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x10e188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_10e18c:
    // 0x10e18c: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x10e18cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10e190:
    // 0x10e190: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x10e190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_10e194:
    // 0x10e194: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10e194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10e198:
    // 0x10e198: 0x1040031c  beqz        $v0, . + 4 + (0x31C << 2)
label_10e19c:
    if (ctx->pc == 0x10E19Cu) {
        ctx->pc = 0x10E19Cu;
            // 0x10e19c: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x10E1A0u;
        goto label_10e1a0;
    }
    ctx->pc = 0x10E198u;
    {
        const bool branch_taken_0x10e198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E198u;
            // 0x10e19c: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e198) {
            ctx->pc = 0x10EE0Cu;
            goto label_10ee0c;
        }
    }
    ctx->pc = 0x10E1A0u;
label_10e1a0:
    // 0x10e1a0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x10e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_10e1a4:
    // 0x10e1a4: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x10e1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_10e1a8:
    // 0x10e1a8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x10e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_10e1ac:
    // 0x10e1ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x10e1acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e1b0:
    // 0x10e1b0: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x10e1b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_10e1b4:
    // 0x10e1b4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x10e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_10e1b8:
    // 0x10e1b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10e1b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e1bc:
    // 0x10e1bc: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x10e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_10e1c0:
    // 0x10e1c0: 0x14c20300  bne         $a2, $v0, . + 4 + (0x300 << 2)
label_10e1c4:
    if (ctx->pc == 0x10E1C4u) {
        ctx->pc = 0x10E1C4u;
            // 0x10e1c4: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x10E1C8u;
        goto label_10e1c8;
    }
    ctx->pc = 0x10E1C0u;
    {
        const bool branch_taken_0x10e1c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x10E1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E1C0u;
            // 0x10e1c4: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1c0) {
            ctx->pc = 0x10EDC4u;
            goto label_10edc4;
        }
    }
    ctx->pc = 0x10E1C8u;
label_10e1c8:
    // 0x10e1c8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x10e1c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e1cc:
    // 0x10e1cc: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x10e1ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10e1d0:
    // 0x10e1d0: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x10e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_10e1d4:
    // 0x10e1d4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x10e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_10e1d8:
    // 0x10e1d8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x10e1d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_10e1dc:
    // 0x10e1dc: 0x2c830059  sltiu       $v1, $a0, 0x59
    ctx->pc = 0x10e1dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_10e1e0:
    // 0x10e1e0: 0x106001cc  beqz        $v1, . + 4 + (0x1CC << 2)
label_10e1e4:
    if (ctx->pc == 0x10E1E4u) {
        ctx->pc = 0x10E1E4u;
            // 0x10e1e4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E1E8u;
        goto label_10e1e8;
    }
    ctx->pc = 0x10E1E0u;
    {
        const bool branch_taken_0x10e1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E1E0u;
            // 0x10e1e4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1e0) {
            ctx->pc = 0x10E914u;
            goto label_10e914;
        }
    }
    ctx->pc = 0x10E1E8u;
label_10e1e8:
    // 0x10e1e8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x10e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_10e1ec:
    // 0x10e1ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10e1f0:
    // 0x10e1f0: 0x2442ed00  addiu       $v0, $v0, -0x1300
    ctx->pc = 0x10e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962432));
label_10e1f4:
    // 0x10e1f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e1f8:
    // 0x10e1f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10e1fc:
    // 0x10e1fc: 0x800008  jr          $a0
label_10e200:
    if (ctx->pc == 0x10E200u) {
        ctx->pc = 0x10E204u;
        goto label_10e204;
    }
    ctx->pc = 0x10E1FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E204u: goto label_10e204;
            case 0x10E20Cu: goto label_10e20c;
            case 0x10E214u: goto label_10e214;
            case 0x10E21Cu: goto label_10e21c;
            case 0x10E264u: goto label_10e264;
            case 0x10E2ECu: goto label_10e2ec;
            case 0x10E2F4u: goto label_10e2f4;
            case 0x10E2FCu: goto label_10e2fc;
            case 0x10E304u: goto label_10e304;
            case 0x10E30Cu: goto label_10e30c;
            case 0x10E3C0u: goto label_10e3c0;
            case 0x10E3ECu: goto label_10e3ec;
            case 0x10E4ACu: goto label_10e4ac;
            case 0x10E5C4u: goto label_10e5c4;
            case 0x10E688u: goto label_10e688;
            case 0x10E6ECu: goto label_10e6ec;
            case 0x10E830u: goto label_10e830;
            case 0x10E868u: goto label_10e868;
            case 0x10E914u: goto label_10e914;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10E204u;
label_10e204:
    // 0x10e204: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_10e208:
    if (ctx->pc == 0x10E208u) {
        ctx->pc = 0x10E208u;
            // 0x10e208: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->pc = 0x10E20Cu;
        goto label_10e20c;
    }
    ctx->pc = 0x10E204u;
    {
        const bool branch_taken_0x10e204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E204u;
            // 0x10e208: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e204) {
            ctx->pc = 0x10E1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e1c8;
        }
    }
    ctx->pc = 0x10E20Cu;
label_10e20c:
    // 0x10e20c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_10e210:
    if (ctx->pc == 0x10E210u) {
        ctx->pc = 0x10E210u;
            // 0x10e210: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->pc = 0x10E214u;
        goto label_10e214;
    }
    ctx->pc = 0x10E20Cu;
    {
        const bool branch_taken_0x10e20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E20Cu;
            // 0x10e210: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e20c) {
            ctx->pc = 0x10E1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e1c8;
        }
    }
    ctx->pc = 0x10E214u;
label_10e214:
    // 0x10e214: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_10e218:
    if (ctx->pc == 0x10E218u) {
        ctx->pc = 0x10E218u;
            // 0x10e218: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x10E21Cu;
        goto label_10e21c;
    }
    ctx->pc = 0x10E214u;
    {
        const bool branch_taken_0x10e214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E214u;
            // 0x10e218: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e214) {
            ctx->pc = 0x10E1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e1c8;
        }
    }
    ctx->pc = 0x10E21Cu;
label_10e21c:
    // 0x10e21c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10e21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e220:
    // 0x10e220: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x10e220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10e224:
    // 0x10e224: 0x0  nop
    ctx->pc = 0x10e224u;
    // NOP
label_10e228:
    // 0x10e228: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x10e228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_10e22c:
    // 0x10e22c: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x10e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_10e230:
    // 0x10e230: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x10e230u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e234:
    // 0x10e234: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x10e234u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_10e238:
    // 0x10e238: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x10e238u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10e23c:
    // 0x10e23c: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x10e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_10e240:
    // 0x10e240: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x10e240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_10e244:
    // 0x10e244: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x10e244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_10e248:
    // 0x10e248: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_10e24c:
    if (ctx->pc == 0x10E24Cu) {
        ctx->pc = 0x10E24Cu;
            // 0x10e24c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x10E250u;
        goto label_10e250;
    }
    ctx->pc = 0x10E248u;
    {
        const bool branch_taken_0x10e248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E248u;
            // 0x10e24c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e248) {
            ctx->pc = 0x10E228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e228;
        }
    }
    ctx->pc = 0x10E250u;
label_10e250:
    // 0x10e250: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x10e250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_10e254:
    // 0x10e254: 0x10a002e7  beqz        $a1, . + 4 + (0x2E7 << 2)
label_10e258:
    if (ctx->pc == 0x10E258u) {
        ctx->pc = 0x10E258u;
            // 0x10e258: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x10E25Cu;
        goto label_10e25c;
    }
    ctx->pc = 0x10E254u;
    {
        const bool branch_taken_0x10e254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E254u;
            // 0x10e258: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e254) {
            ctx->pc = 0x10EDF4u;
            goto label_10edf4;
        }
    }
    ctx->pc = 0x10E25Cu;
label_10e25c:
    // 0x10e25c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_10e260:
    if (ctx->pc == 0x10E260u) {
        ctx->pc = 0x10E260u;
            // 0x10e260: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->pc = 0x10E264u;
        goto label_10e264;
    }
    ctx->pc = 0x10E25Cu;
    {
        const bool branch_taken_0x10e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E25Cu;
            // 0x10e260: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e25c) {
            ctx->pc = 0x10E1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e1c8;
        }
    }
    ctx->pc = 0x10E264u;
label_10e264:
    // 0x10e264: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x10e264u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e268:
    // 0x10e268: 0x36b50020  ori         $s5, $s5, 0x20
    ctx->pc = 0x10e268u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
label_10e26c:
    // 0x10e26c: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x10e26cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10e270:
    // 0x10e270: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x10e270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_10e274:
    // 0x10e274: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_10e278:
    if (ctx->pc == 0x10E278u) {
        ctx->pc = 0x10E278u;
            // 0x10e278: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x10E27Cu;
        goto label_10e27c;
    }
    ctx->pc = 0x10E274u;
    {
        const bool branch_taken_0x10e274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10E278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E274u;
            // 0x10e278: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e274) {
            ctx->pc = 0x10E298u;
            goto label_10e298;
        }
    }
    ctx->pc = 0x10E27Cu;
label_10e27c:
    // 0x10e27c: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10e27cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10e280:
    // 0x10e280: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x10e280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_10e284:
    // 0x10e284: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x10e284u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10e288:
    // 0x10e288: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10e288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10e28c:
    // 0x10e28c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x10e28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_10e290:
    // 0x10e290: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_10e294:
    if (ctx->pc == 0x10E294u) {
        ctx->pc = 0x10E294u;
            // 0x10e294: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->pc = 0x10E298u;
        goto label_10e298;
    }
    ctx->pc = 0x10E290u;
    {
        const bool branch_taken_0x10e290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E290u;
            // 0x10e294: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e290) {
            ctx->pc = 0x10E1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e1c8;
        }
    }
    ctx->pc = 0x10E298u;
label_10e298:
    // 0x10e298: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x10e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_10e29c:
    // 0x10e29c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x10e29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_10e2a0:
    // 0x10e2a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_10e2a4:
    if (ctx->pc == 0x10E2A4u) {
        ctx->pc = 0x10E2A4u;
            // 0x10e2a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E2A8u;
        goto label_10e2a8;
    }
    ctx->pc = 0x10E2A0u;
    {
        const bool branch_taken_0x10e2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E2A0u;
            // 0x10e2a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2a0) {
            ctx->pc = 0x10E2D8u;
            goto label_10e2d8;
        }
    }
    ctx->pc = 0x10E2A8u;
label_10e2a8:
    // 0x10e2a8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x10e2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10e2ac:
    // 0x10e2ac: 0x0  nop
    ctx->pc = 0x10e2acu;
    // NOP
label_10e2b0:
    // 0x10e2b0: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x10e2b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_10e2b4:
    // 0x10e2b4: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x10e2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_10e2b8:
    // 0x10e2b8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x10e2b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e2bc:
    // 0x10e2bc: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x10e2bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_10e2c0:
    // 0x10e2c0: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x10e2c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10e2c4:
    // 0x10e2c4: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x10e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_10e2c8:
    // 0x10e2c8: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x10e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_10e2cc:
    // 0x10e2cc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x10e2ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_10e2d0:
    // 0x10e2d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_10e2d4:
    if (ctx->pc == 0x10E2D4u) {
        ctx->pc = 0x10E2D4u;
            // 0x10e2d4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x10E2D8u;
        goto label_10e2d8;
    }
    ctx->pc = 0x10E2D0u;
    {
        const bool branch_taken_0x10e2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E2D0u;
            // 0x10e2d4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2d0) {
            ctx->pc = 0x10E2B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e2b0;
        }
    }
    ctx->pc = 0x10E2D8u;
label_10e2d8:
    // 0x10e2d8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x10e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_10e2dc:
    // 0x10e2dc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10e2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10e2e0:
    // 0x10e2e0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x10e2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_10e2e4:
    // 0x10e2e4: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_10e2e8:
    if (ctx->pc == 0x10E2E8u) {
        ctx->pc = 0x10E2E8u;
            // 0x10e2e8: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->pc = 0x10E2ECu;
        goto label_10e2ec;
    }
    ctx->pc = 0x10E2E4u;
    {
        const bool branch_taken_0x10e2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E2E4u;
            // 0x10e2e8: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2e4) {
            ctx->pc = 0x10E254u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e254;
        }
    }
    ctx->pc = 0x10E2ECu;
label_10e2ec:
    // 0x10e2ec: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_10e2f0:
    if (ctx->pc == 0x10E2F0u) {
        ctx->pc = 0x10E2F0u;
            // 0x10e2f0: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->pc = 0x10E2F4u;
        goto label_10e2f4;
    }
    ctx->pc = 0x10E2ECu;
    {
        const bool branch_taken_0x10e2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E2ECu;
            // 0x10e2f0: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2ec) {
            ctx->pc = 0x10E1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e1c8;
        }
    }
    ctx->pc = 0x10E2F4u;
label_10e2f4:
    // 0x10e2f4: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_10e2f8:
    if (ctx->pc == 0x10E2F8u) {
        ctx->pc = 0x10E2F8u;
            // 0x10e2f8: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->pc = 0x10E2FCu;
        goto label_10e2fc;
    }
    ctx->pc = 0x10E2F4u;
    {
        const bool branch_taken_0x10e2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E2F4u;
            // 0x10e2f8: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2f4) {
            ctx->pc = 0x10E1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e1c8;
        }
    }
    ctx->pc = 0x10E2FCu;
label_10e2fc:
    // 0x10e2fc: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
label_10e300:
    if (ctx->pc == 0x10E300u) {
        ctx->pc = 0x10E300u;
            // 0x10e300: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->pc = 0x10E304u;
        goto label_10e304;
    }
    ctx->pc = 0x10E2FCu;
    {
        const bool branch_taken_0x10e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E2FCu;
            // 0x10e300: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2fc) {
            ctx->pc = 0x10E1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e1c8;
        }
    }
    ctx->pc = 0x10E304u;
label_10e304:
    // 0x10e304: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
label_10e308:
    if (ctx->pc == 0x10E308u) {
        ctx->pc = 0x10E308u;
            // 0x10e308: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x10E30Cu;
        goto label_10e30c;
    }
    ctx->pc = 0x10E304u;
    {
        const bool branch_taken_0x10e304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E304u;
            // 0x10e308: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e304) {
            ctx->pc = 0x10E1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e1c8;
        }
    }
    ctx->pc = 0x10E30Cu;
label_10e30c:
    // 0x10e30c: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x10e30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_10e310:
    // 0x10e310: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10e314:
    if (ctx->pc == 0x10E314u) {
        ctx->pc = 0x10E314u;
            // 0x10e314: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x10E318u;
        goto label_10e318;
    }
    ctx->pc = 0x10E310u;
    {
        const bool branch_taken_0x10e310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E310u;
            // 0x10e314: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e310) {
            ctx->pc = 0x10E324u;
            goto label_10e324;
        }
    }
    ctx->pc = 0x10E318u;
label_10e318:
    // 0x10e318: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10e318u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10e31c:
    // 0x10e31c: 0x10000006  b           . + 4 + (0x6 << 2)
label_10e320:
    if (ctx->pc == 0x10E320u) {
        ctx->pc = 0x10E320u;
            // 0x10e320: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->pc = 0x10E324u;
        goto label_10e324;
    }
    ctx->pc = 0x10E31Cu;
    {
        const bool branch_taken_0x10e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E31Cu;
            // 0x10e320: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e31c) {
            ctx->pc = 0x10E338u;
            goto label_10e338;
        }
    }
    ctx->pc = 0x10E324u;
label_10e324:
    // 0x10e324: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10e328:
    if (ctx->pc == 0x10E328u) {
        ctx->pc = 0x10E328u;
            // 0x10e328: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->pc = 0x10E32Cu;
        goto label_10e32c;
    }
    ctx->pc = 0x10E324u;
    {
        const bool branch_taken_0x10e324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E324u;
            // 0x10e328: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e324) {
            ctx->pc = 0x10E334u;
            goto label_10e334;
        }
    }
    ctx->pc = 0x10E32Cu;
label_10e32c:
    // 0x10e32c: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e330:
    if (ctx->pc == 0x10E330u) {
        ctx->pc = 0x10E330u;
            // 0x10e330: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->pc = 0x10E334u;
        goto label_10e334;
    }
    ctx->pc = 0x10E32Cu;
    {
        const bool branch_taken_0x10e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E32Cu;
            // 0x10e330: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e32c) {
            ctx->pc = 0x10E338u;
            goto label_10e338;
        }
    }
    ctx->pc = 0x10E334u;
label_10e334:
    // 0x10e334: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x10e334u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10e338:
    // 0x10e338: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_10e33c:
    if (ctx->pc == 0x10E33Cu) {
        ctx->pc = 0x10E33Cu;
            // 0x10e33c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x10E340u;
        goto label_10e340;
    }
    ctx->pc = 0x10E338u;
    {
        const bool branch_taken_0x10e338 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E338u;
            // 0x10e33c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e338) {
            ctx->pc = 0x10E368u;
            goto label_10e368;
        }
    }
    ctx->pc = 0x10E340u;
label_10e340:
    // 0x10e340: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x10e340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_10e344:
    // 0x10e344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10e348:
    if (ctx->pc == 0x10E348u) {
        ctx->pc = 0x10E348u;
            // 0x10e348: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x10E34Cu;
        goto label_10e34c;
    }
    ctx->pc = 0x10E344u;
    {
        const bool branch_taken_0x10e344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E344u;
            // 0x10e348: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e344) {
            ctx->pc = 0x10E354u;
            goto label_10e354;
        }
    }
    ctx->pc = 0x10E34Cu;
label_10e34c:
    // 0x10e34c: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
label_10e350:
    if (ctx->pc == 0x10E350u) {
        ctx->pc = 0x10E350u;
            // 0x10e350: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x10E354u;
        goto label_10e354;
    }
    ctx->pc = 0x10E34Cu;
    {
        const bool branch_taken_0x10e34c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E34Cu;
            // 0x10e350: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e34c) {
            ctx->pc = 0x10E3ACu;
            goto label_10e3ac;
        }
    }
    ctx->pc = 0x10E354u;
label_10e354:
    // 0x10e354: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e354u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e358:
    // 0x10e358: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10e358u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10e35c:
    // 0x10e35c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e35cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e360:
    // 0x10e360: 0x10000013  b           . + 4 + (0x13 << 2)
label_10e364:
    if (ctx->pc == 0x10E364u) {
        ctx->pc = 0x10E364u;
            // 0x10e364: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x10E368u;
        goto label_10e368;
    }
    ctx->pc = 0x10E360u;
    {
        const bool branch_taken_0x10e360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E360u;
            // 0x10e364: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e360) {
            ctx->pc = 0x10E3B0u;
            goto label_10e3b0;
        }
    }
    ctx->pc = 0x10E368u;
label_10e368:
    // 0x10e368: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e368u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e36c:
    // 0x10e36c: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x10e36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_10e370:
    // 0x10e370: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e370u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e374:
    // 0x10e374: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e374u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e378:
    // 0x10e378: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x10e378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_10e37c:
    // 0x10e37c: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x10e37cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_10e380:
    // 0x10e380: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x10e380u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_10e384:
    // 0x10e384: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x10e384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10e388:
    // 0x10e388: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10e388u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10e38c:
    // 0x10e38c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x10e38cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_10e390:
    // 0x10e390: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_10e394:
    if (ctx->pc == 0x10E394u) {
        ctx->pc = 0x10E398u;
        goto label_10e398;
    }
    ctx->pc = 0x10E390u;
    {
        const bool branch_taken_0x10e390 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e390) {
            ctx->pc = 0x10E378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e378;
        }
    }
    ctx->pc = 0x10E398u;
label_10e398:
    // 0x10e398: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_10e39c:
    if (ctx->pc == 0x10E39Cu) {
        ctx->pc = 0x10E39Cu;
            // 0x10e39c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x10E3A0u;
        goto label_10e3a0;
    }
    ctx->pc = 0x10E398u;
    {
        const bool branch_taken_0x10e398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E398u;
            // 0x10e39c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e398) {
            ctx->pc = 0x10E3B4u;
            goto label_10e3b4;
        }
    }
    ctx->pc = 0x10E3A0u;
label_10e3a0:
    // 0x10e3a0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10e3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10e3a4:
    // 0x10e3a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_10e3a8:
    if (ctx->pc == 0x10E3A8u) {
        ctx->pc = 0x10E3A8u;
            // 0x10e3a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x10E3ACu;
        goto label_10e3ac;
    }
    ctx->pc = 0x10E3A4u;
    {
        const bool branch_taken_0x10e3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E3A4u;
            // 0x10e3a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3a4) {
            ctx->pc = 0x10E3B4u;
            goto label_10e3b4;
        }
    }
    ctx->pc = 0x10E3ACu;
label_10e3ac:
    // 0x10e3ac: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e3acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e3b0:
    // 0x10e3b0: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e3b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e3b4:
    // 0x10e3b4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x10e3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10e3b8:
    // 0x10e3b8: 0x10000162  b           . + 4 + (0x162 << 2)
label_10e3bc:
    if (ctx->pc == 0x10E3BCu) {
        ctx->pc = 0x10E3BCu;
            // 0x10e3bc: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x10E3C0u;
        goto label_10e3c0;
    }
    ctx->pc = 0x10E3B8u;
    {
        const bool branch_taken_0x10e3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E3B8u;
            // 0x10e3bc: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3b8) {
            ctx->pc = 0x10E944u;
            goto label_10e944;
        }
    }
    ctx->pc = 0x10E3C0u;
label_10e3c0:
    // 0x10e3c0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x10e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_10e3c4:
    // 0x10e3c4: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x10e3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_10e3c8:
    // 0x10e3c8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_10e3cc:
    if (ctx->pc == 0x10E3CCu) {
        ctx->pc = 0x10E3CCu;
            // 0x10e3cc: 0x2444ecd0  addiu       $a0, $v0, -0x1330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
        ctx->pc = 0x10E3D0u;
        goto label_10e3d0;
    }
    ctx->pc = 0x10E3C8u;
    {
        const bool branch_taken_0x10e3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E3C8u;
            // 0x10e3cc: 0x2444ecd0  addiu       $a0, $v0, -0x1330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3c8) {
            ctx->pc = 0x10E414u;
            goto label_10e414;
        }
    }
    ctx->pc = 0x10E3D0u;
label_10e3d0:
    // 0x10e3d0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10e3d4:
    // 0x10e3d4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x10e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_10e3d8:
    // 0x10e3d8: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x10e3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_10e3dc:
    // 0x10e3dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10e3e0:
    // 0x10e3e0: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x10e3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_10e3e4:
    // 0x10e3e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_10e3e8:
    if (ctx->pc == 0x10E3E8u) {
        ctx->pc = 0x10E3E8u;
            // 0x10e3e8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x10E3ECu;
        goto label_10e3ec;
    }
    ctx->pc = 0x10E3E4u;
    {
        const bool branch_taken_0x10e3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E3E4u;
            // 0x10e3e8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3e4) {
            ctx->pc = 0x10E414u;
            goto label_10e414;
        }
    }
    ctx->pc = 0x10E3ECu;
label_10e3ec:
    // 0x10e3ec: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x10e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_10e3f0:
    // 0x10e3f0: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x10e3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_10e3f4:
    // 0x10e3f4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_10e3f8:
    if (ctx->pc == 0x10E3F8u) {
        ctx->pc = 0x10E3F8u;
            // 0x10e3f8: 0x2444ece8  addiu       $a0, $v0, -0x1318 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962408));
        ctx->pc = 0x10E3FCu;
        goto label_10e3fc;
    }
    ctx->pc = 0x10E3F4u;
    {
        const bool branch_taken_0x10e3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E3F4u;
            // 0x10e3f8: 0x2444ece8  addiu       $a0, $v0, -0x1318 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3f4) {
            ctx->pc = 0x10E414u;
            goto label_10e414;
        }
    }
    ctx->pc = 0x10E3FCu;
label_10e3fc:
    // 0x10e3fc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10e400:
    // 0x10e400: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x10e400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_10e404:
    // 0x10e404: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10e404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10e408:
    // 0x10e408: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x10e408u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_10e40c:
    // 0x10e40c: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x10e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_10e410:
    // 0x10e410: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x10e410u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_10e414:
    // 0x10e414: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x10e414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_10e418:
    // 0x10e418: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10e41c:
    if (ctx->pc == 0x10E41Cu) {
        ctx->pc = 0x10E41Cu;
            // 0x10e41c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x10E420u;
        goto label_10e420;
    }
    ctx->pc = 0x10E418u;
    {
        const bool branch_taken_0x10e418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E418u;
            // 0x10e41c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e418) {
            ctx->pc = 0x10E42Cu;
            goto label_10e42c;
        }
    }
    ctx->pc = 0x10E420u;
label_10e420:
    // 0x10e420: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10e420u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10e424:
    // 0x10e424: 0x10000006  b           . + 4 + (0x6 << 2)
label_10e428:
    if (ctx->pc == 0x10E428u) {
        ctx->pc = 0x10E428u;
            // 0x10e428: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->pc = 0x10E42Cu;
        goto label_10e42c;
    }
    ctx->pc = 0x10E424u;
    {
        const bool branch_taken_0x10e424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E424u;
            // 0x10e428: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e424) {
            ctx->pc = 0x10E440u;
            goto label_10e440;
        }
    }
    ctx->pc = 0x10E42Cu;
label_10e42c:
    // 0x10e42c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10e430:
    if (ctx->pc == 0x10E430u) {
        ctx->pc = 0x10E430u;
            // 0x10e430: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->pc = 0x10E434u;
        goto label_10e434;
    }
    ctx->pc = 0x10E42Cu;
    {
        const bool branch_taken_0x10e42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E42Cu;
            // 0x10e430: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e42c) {
            ctx->pc = 0x10E43Cu;
            goto label_10e43c;
        }
    }
    ctx->pc = 0x10E434u;
label_10e434:
    // 0x10e434: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e438:
    if (ctx->pc == 0x10E438u) {
        ctx->pc = 0x10E438u;
            // 0x10e438: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->pc = 0x10E43Cu;
        goto label_10e43c;
    }
    ctx->pc = 0x10E434u;
    {
        const bool branch_taken_0x10e434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E434u;
            // 0x10e438: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e434) {
            ctx->pc = 0x10E440u;
            goto label_10e440;
        }
    }
    ctx->pc = 0x10E43Cu;
label_10e43c:
    // 0x10e43c: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x10e43cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10e440:
    // 0x10e440: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_10e444:
    if (ctx->pc == 0x10E444u) {
        ctx->pc = 0x10E444u;
            // 0x10e444: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x10E448u;
        goto label_10e448;
    }
    ctx->pc = 0x10E440u;
    {
        const bool branch_taken_0x10e440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E440u;
            // 0x10e444: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e440) {
            ctx->pc = 0x10E474u;
            goto label_10e474;
        }
    }
    ctx->pc = 0x10E448u;
label_10e448:
    // 0x10e448: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x10e448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_10e44c:
    // 0x10e44c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10e450:
    if (ctx->pc == 0x10E450u) {
        ctx->pc = 0x10E450u;
            // 0x10e450: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x10E454u;
        goto label_10e454;
    }
    ctx->pc = 0x10E44Cu;
    {
        const bool branch_taken_0x10e44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E44Cu;
            // 0x10e450: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e44c) {
            ctx->pc = 0x10E45Cu;
            goto label_10e45c;
        }
    }
    ctx->pc = 0x10E454u;
label_10e454:
    // 0x10e454: 0x11000086  beqz        $t0, . + 4 + (0x86 << 2)
label_10e458:
    if (ctx->pc == 0x10E458u) {
        ctx->pc = 0x10E458u;
            // 0x10e458: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x10E45Cu;
        goto label_10e45c;
    }
    ctx->pc = 0x10E454u;
    {
        const bool branch_taken_0x10e454 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E454u;
            // 0x10e458: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e454) {
            ctx->pc = 0x10E670u;
            goto label_10e670;
        }
    }
    ctx->pc = 0x10E45Cu;
label_10e45c:
    // 0x10e45c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10e460:
    // 0x10e460: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e460u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e464:
    // 0x10e464: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10e464u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10e468:
    // 0x10e468: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e468u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e46c:
    // 0x10e46c: 0x10000081  b           . + 4 + (0x81 << 2)
label_10e470:
    if (ctx->pc == 0x10E470u) {
        ctx->pc = 0x10E470u;
            // 0x10e470: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x10E474u;
        goto label_10e474;
    }
    ctx->pc = 0x10E46Cu;
    {
        const bool branch_taken_0x10e46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E46Cu;
            // 0x10e470: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e46c) {
            ctx->pc = 0x10E674u;
            goto label_10e674;
        }
    }
    ctx->pc = 0x10E474u;
label_10e474:
    // 0x10e474: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e474u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e478:
    // 0x10e478: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e478u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e47c:
    // 0x10e47c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e47cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e480:
    // 0x10e480: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x10e480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_10e484:
    // 0x10e484: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10e484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_10e488:
    // 0x10e488: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10e488u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_10e48c:
    // 0x10e48c: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x10e48cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_10e490:
    // 0x10e490: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10e494:
    // 0x10e494: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10e494u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10e498:
    // 0x10e498: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x10e498u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_10e49c:
    // 0x10e49c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_10e4a0:
    if (ctx->pc == 0x10E4A0u) {
        ctx->pc = 0x10E4A0u;
            // 0x10e4a0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x10E4A4u;
        goto label_10e4a4;
    }
    ctx->pc = 0x10E49Cu;
    {
        const bool branch_taken_0x10e49c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E49Cu;
            // 0x10e4a0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e49c) {
            ctx->pc = 0x10E480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e480;
        }
    }
    ctx->pc = 0x10E4A4u;
label_10e4a4:
    // 0x10e4a4: 0x10000075  b           . + 4 + (0x75 << 2)
label_10e4a8:
    if (ctx->pc == 0x10E4A8u) {
        ctx->pc = 0x10E4A8u;
            // 0x10e4a8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x10E4ACu;
        goto label_10e4ac;
    }
    ctx->pc = 0x10E4A4u;
    {
        const bool branch_taken_0x10e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E4A4u;
            // 0x10e4a8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4a4) {
            ctx->pc = 0x10E67Cu;
            goto label_10e67c;
        }
    }
    ctx->pc = 0x10E4ACu;
label_10e4ac:
    // 0x10e4ac: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x10e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_10e4b0:
    // 0x10e4b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10e4b4:
    if (ctx->pc == 0x10E4B4u) {
        ctx->pc = 0x10E4B4u;
            // 0x10e4b4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x10E4B8u;
        goto label_10e4b8;
    }
    ctx->pc = 0x10E4B0u;
    {
        const bool branch_taken_0x10e4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E4B0u;
            // 0x10e4b4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4b0) {
            ctx->pc = 0x10E4C4u;
            goto label_10e4c4;
        }
    }
    ctx->pc = 0x10E4B8u;
label_10e4b8:
    // 0x10e4b8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10e4b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10e4bc:
    // 0x10e4bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_10e4c0:
    if (ctx->pc == 0x10E4C0u) {
        ctx->pc = 0x10E4C0u;
            // 0x10e4c0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->pc = 0x10E4C4u;
        goto label_10e4c4;
    }
    ctx->pc = 0x10E4BCu;
    {
        const bool branch_taken_0x10e4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E4BCu;
            // 0x10e4c0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4bc) {
            ctx->pc = 0x10E4D8u;
            goto label_10e4d8;
        }
    }
    ctx->pc = 0x10E4C4u;
label_10e4c4:
    // 0x10e4c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10e4c8:
    if (ctx->pc == 0x10E4C8u) {
        ctx->pc = 0x10E4C8u;
            // 0x10e4c8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->pc = 0x10E4CCu;
        goto label_10e4cc;
    }
    ctx->pc = 0x10E4C4u;
    {
        const bool branch_taken_0x10e4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E4C4u;
            // 0x10e4c8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4c4) {
            ctx->pc = 0x10E4D4u;
            goto label_10e4d4;
        }
    }
    ctx->pc = 0x10E4CCu;
label_10e4cc:
    // 0x10e4cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e4d0:
    if (ctx->pc == 0x10E4D0u) {
        ctx->pc = 0x10E4D0u;
            // 0x10e4d0: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->pc = 0x10E4D4u;
        goto label_10e4d4;
    }
    ctx->pc = 0x10E4CCu;
    {
        const bool branch_taken_0x10e4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E4CCu;
            // 0x10e4d0: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4cc) {
            ctx->pc = 0x10E4D8u;
            goto label_10e4d8;
        }
    }
    ctx->pc = 0x10E4D4u;
label_10e4d4:
    // 0x10e4d4: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x10e4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10e4d8:
    // 0x10e4d8: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
label_10e4dc:
    if (ctx->pc == 0x10E4DCu) {
        ctx->pc = 0x10E4DCu;
            // 0x10e4dc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x10E4E0u;
        goto label_10e4e0;
    }
    ctx->pc = 0x10E4D8u;
    {
        const bool branch_taken_0x10e4d8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x10E4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E4D8u;
            // 0x10e4dc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4d8) {
            ctx->pc = 0x10E510u;
            goto label_10e510;
        }
    }
    ctx->pc = 0x10E4E0u;
label_10e4e0:
    // 0x10e4e0: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x10e4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_10e4e4:
    // 0x10e4e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10e4e8:
    if (ctx->pc == 0x10E4E8u) {
        ctx->pc = 0x10E4E8u;
            // 0x10e4e8: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x10E4ECu;
        goto label_10e4ec;
    }
    ctx->pc = 0x10E4E4u;
    {
        const bool branch_taken_0x10e4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E4E4u;
            // 0x10e4e8: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4e4) {
            ctx->pc = 0x10E4F8u;
            goto label_10e4f8;
        }
    }
    ctx->pc = 0x10E4ECu;
label_10e4ec:
    // 0x10e4ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e4f0:
    // 0x10e4f0: 0x1000000a  b           . + 4 + (0xA << 2)
label_10e4f4:
    if (ctx->pc == 0x10E4F4u) {
        ctx->pc = 0x10E4F4u;
            // 0x10e4f4: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x10E4F8u;
        goto label_10e4f8;
    }
    ctx->pc = 0x10E4F0u;
    {
        const bool branch_taken_0x10e4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E4F0u;
            // 0x10e4f4: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4f0) {
            ctx->pc = 0x10E51Cu;
            goto label_10e51c;
        }
    }
    ctx->pc = 0x10E4F8u;
label_10e4f8:
    // 0x10e4f8: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x10e4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_10e4fc:
    // 0x10e4fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10e500:
    if (ctx->pc == 0x10E500u) {
        ctx->pc = 0x10E500u;
            // 0x10e500: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x10E504u;
        goto label_10e504;
    }
    ctx->pc = 0x10E4FCu;
    {
        const bool branch_taken_0x10e4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E4FCu;
            // 0x10e500: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4fc) {
            ctx->pc = 0x10E520u;
            goto label_10e520;
        }
    }
    ctx->pc = 0x10E504u;
label_10e504:
    // 0x10e504: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10e504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e508:
    // 0x10e508: 0x10000004  b           . + 4 + (0x4 << 2)
label_10e50c:
    if (ctx->pc == 0x10E50Cu) {
        ctx->pc = 0x10E50Cu;
            // 0x10e50c: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->pc = 0x10E510u;
        goto label_10e510;
    }
    ctx->pc = 0x10E508u;
    {
        const bool branch_taken_0x10e508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E508u;
            // 0x10e50c: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e508) {
            ctx->pc = 0x10E51Cu;
            goto label_10e51c;
        }
    }
    ctx->pc = 0x10E510u;
label_10e510:
    // 0x10e510: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x10e510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_10e514:
    // 0x10e514: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e518:
    // 0x10e518: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x10e518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_10e51c:
    // 0x10e51c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x10e51cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_10e520:
    // 0x10e520: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_10e524:
    if (ctx->pc == 0x10E524u) {
        ctx->pc = 0x10E524u;
            // 0x10e524: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x10E528u;
        goto label_10e528;
    }
    ctx->pc = 0x10E520u;
    {
        const bool branch_taken_0x10e520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E520u;
            // 0x10e524: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e520) {
            ctx->pc = 0x10E554u;
            goto label_10e554;
        }
    }
    ctx->pc = 0x10E528u;
label_10e528:
    // 0x10e528: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x10e528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_10e52c:
    // 0x10e52c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10e530:
    if (ctx->pc == 0x10E530u) {
        ctx->pc = 0x10E530u;
            // 0x10e530: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x10E534u;
        goto label_10e534;
    }
    ctx->pc = 0x10E52Cu;
    {
        const bool branch_taken_0x10e52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E52Cu;
            // 0x10e530: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e52c) {
            ctx->pc = 0x10E53Cu;
            goto label_10e53c;
        }
    }
    ctx->pc = 0x10E534u;
label_10e534:
    // 0x10e534: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
label_10e538:
    if (ctx->pc == 0x10E538u) {
        ctx->pc = 0x10E538u;
            // 0x10e538: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x10E53Cu;
        goto label_10e53c;
    }
    ctx->pc = 0x10E534u;
    {
        const bool branch_taken_0x10e534 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E534u;
            // 0x10e538: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e534) {
            ctx->pc = 0x10E5B0u;
            goto label_10e5b0;
        }
    }
    ctx->pc = 0x10E53Cu;
label_10e53c:
    // 0x10e53c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10e540:
    // 0x10e540: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e540u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e544:
    // 0x10e544: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e544u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e548:
    // 0x10e548: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x10e548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10e54c:
    // 0x10e54c: 0x10000019  b           . + 4 + (0x19 << 2)
label_10e550:
    if (ctx->pc == 0x10E550u) {
        ctx->pc = 0x10E550u;
            // 0x10e550: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x10E554u;
        goto label_10e554;
    }
    ctx->pc = 0x10E54Cu;
    {
        const bool branch_taken_0x10e54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E54Cu;
            // 0x10e550: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e54c) {
            ctx->pc = 0x10E5B4u;
            goto label_10e5b4;
        }
    }
    ctx->pc = 0x10E554u;
label_10e554:
    // 0x10e554: 0x10182f  dsubu       $v1, $zero, $s0
    ctx->pc = 0x10e554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_10e558:
    // 0x10e558: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x10e558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_10e55c:
    // 0x10e55c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x10e55cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_10e560:
    // 0x10e560: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_10e564:
    if (ctx->pc == 0x10E564u) {
        ctx->pc = 0x10E564u;
            // 0x10e564: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x10E568u;
        goto label_10e568;
    }
    ctx->pc = 0x10E560u;
    {
        const bool branch_taken_0x10e560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E560u;
            // 0x10e564: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e560) {
            ctx->pc = 0x10E5B0u;
            goto label_10e5b0;
        }
    }
    ctx->pc = 0x10E568u;
label_10e568:
    // 0x10e568: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e568u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e56c:
    // 0x10e56c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e56cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e570:
    // 0x10e570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e574:
    // 0x10e574: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10e574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10e578:
    // 0x10e578: 0xc048fbc  jal         func_123EF0
label_10e57c:
    if (ctx->pc == 0x10E57Cu) {
        ctx->pc = 0x10E57Cu;
            // 0x10e57c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->pc = 0x10E580u;
        goto label_10e580;
    }
    ctx->pc = 0x10E578u;
    SET_GPR_U32(ctx, 31, 0x10E580u);
    ctx->pc = 0x10E57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E578u;
            // 0x10e57c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EF0u;
    if (runtime->hasFunction(0x123EF0u)) {
        auto targetFn = runtime->lookupFunction(0x123EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E580u; }
        if (ctx->pc != 0x10E580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123EF0_0x123ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E580u; }
        if (ctx->pc != 0x10E580u) { return; }
    }
    ctx->pc = 0x10E580u;
label_10e580:
    // 0x10e580: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x10e580u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_10e584:
    // 0x10e584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e588:
    // 0x10e588: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x10e588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10e58c:
    // 0x10e58c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10e58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10e590:
    // 0x10e590: 0xc048dee  jal         func_1237B8
label_10e594:
    if (ctx->pc == 0x10E594u) {
        ctx->pc = 0x10E594u;
            // 0x10e594: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x10E598u;
        goto label_10e598;
    }
    ctx->pc = 0x10E590u;
    SET_GPR_U32(ctx, 31, 0x10E598u);
    ctx->pc = 0x10E594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E590u;
            // 0x10e594: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E598u; }
        if (ctx->pc != 0x10E598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E598u; }
        if (ctx->pc != 0x10E598u) { return; }
    }
    ctx->pc = 0x10E598u;
label_10e598:
    // 0x10e598: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x10e598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_10e59c:
    // 0x10e59c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e5a0:
    // 0x10e5a0: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_10e5a4:
    if (ctx->pc == 0x10E5A4u) {
        ctx->pc = 0x10E5A4u;
            // 0x10e5a4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x10E5A8u;
        goto label_10e5a8;
    }
    ctx->pc = 0x10E5A0u;
    {
        const bool branch_taken_0x10e5a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E5A0u;
            // 0x10e5a4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5a0) {
            ctx->pc = 0x10E570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e570;
        }
    }
    ctx->pc = 0x10E5A8u;
label_10e5a8:
    // 0x10e5a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_10e5ac:
    if (ctx->pc == 0x10E5ACu) {
        ctx->pc = 0x10E5ACu;
            // 0x10e5ac: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x10E5B0u;
        goto label_10e5b0;
    }
    ctx->pc = 0x10E5A8u;
    {
        const bool branch_taken_0x10e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E5A8u;
            // 0x10e5ac: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5a8) {
            ctx->pc = 0x10E5BCu;
            goto label_10e5bc;
        }
    }
    ctx->pc = 0x10E5B0u;
label_10e5b0:
    // 0x10e5b0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e5b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e5b4:
    // 0x10e5b4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e5b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e5b8:
    // 0x10e5b8: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x10e5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10e5bc:
    // 0x10e5bc: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_10e5c0:
    if (ctx->pc == 0x10E5C0u) {
        ctx->pc = 0x10E5C0u;
            // 0x10e5c0: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x10E5C4u;
        goto label_10e5c4;
    }
    ctx->pc = 0x10E5BCu;
    {
        const bool branch_taken_0x10e5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E5BCu;
            // 0x10e5c0: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5bc) {
            ctx->pc = 0x10E944u;
            goto label_10e944;
        }
    }
    ctx->pc = 0x10E5C4u;
label_10e5c4:
    // 0x10e5c4: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x10e5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_10e5c8:
    // 0x10e5c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10e5cc:
    if (ctx->pc == 0x10E5CCu) {
        ctx->pc = 0x10E5CCu;
            // 0x10e5cc: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x10E5D0u;
        goto label_10e5d0;
    }
    ctx->pc = 0x10E5C8u;
    {
        const bool branch_taken_0x10e5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E5C8u;
            // 0x10e5cc: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5c8) {
            ctx->pc = 0x10E5DCu;
            goto label_10e5dc;
        }
    }
    ctx->pc = 0x10E5D0u;
label_10e5d0:
    // 0x10e5d0: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10e5d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10e5d4:
    // 0x10e5d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_10e5d8:
    if (ctx->pc == 0x10E5D8u) {
        ctx->pc = 0x10E5D8u;
            // 0x10e5d8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->pc = 0x10E5DCu;
        goto label_10e5dc;
    }
    ctx->pc = 0x10E5D4u;
    {
        const bool branch_taken_0x10e5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E5D4u;
            // 0x10e5d8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5d4) {
            ctx->pc = 0x10E5F0u;
            goto label_10e5f0;
        }
    }
    ctx->pc = 0x10E5DCu;
label_10e5dc:
    // 0x10e5dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10e5e0:
    if (ctx->pc == 0x10E5E0u) {
        ctx->pc = 0x10E5E0u;
            // 0x10e5e0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->pc = 0x10E5E4u;
        goto label_10e5e4;
    }
    ctx->pc = 0x10E5DCu;
    {
        const bool branch_taken_0x10e5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E5DCu;
            // 0x10e5e0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5dc) {
            ctx->pc = 0x10E5ECu;
            goto label_10e5ec;
        }
    }
    ctx->pc = 0x10E5E4u;
label_10e5e4:
    // 0x10e5e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e5e8:
    if (ctx->pc == 0x10E5E8u) {
        ctx->pc = 0x10E5E8u;
            // 0x10e5e8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->pc = 0x10E5ECu;
        goto label_10e5ec;
    }
    ctx->pc = 0x10E5E4u;
    {
        const bool branch_taken_0x10e5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E5E4u;
            // 0x10e5e8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5e4) {
            ctx->pc = 0x10E5F0u;
            goto label_10e5f0;
        }
    }
    ctx->pc = 0x10E5ECu;
label_10e5ec:
    // 0x10e5ec: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x10e5ecu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10e5f0:
    // 0x10e5f0: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_10e5f4:
    if (ctx->pc == 0x10E5F4u) {
        ctx->pc = 0x10E5F4u;
            // 0x10e5f4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x10E5F8u;
        goto label_10e5f8;
    }
    ctx->pc = 0x10E5F0u;
    {
        const bool branch_taken_0x10e5f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E5F0u;
            // 0x10e5f4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5f0) {
            ctx->pc = 0x10E620u;
            goto label_10e620;
        }
    }
    ctx->pc = 0x10E5F8u;
label_10e5f8:
    // 0x10e5f8: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x10e5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_10e5fc:
    // 0x10e5fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10e600:
    if (ctx->pc == 0x10E600u) {
        ctx->pc = 0x10E600u;
            // 0x10e600: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x10E604u;
        goto label_10e604;
    }
    ctx->pc = 0x10E5FCu;
    {
        const bool branch_taken_0x10e5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E5FCu;
            // 0x10e600: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5fc) {
            ctx->pc = 0x10E60Cu;
            goto label_10e60c;
        }
    }
    ctx->pc = 0x10E604u;
label_10e604:
    // 0x10e604: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
label_10e608:
    if (ctx->pc == 0x10E608u) {
        ctx->pc = 0x10E608u;
            // 0x10e608: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x10E60Cu;
        goto label_10e60c;
    }
    ctx->pc = 0x10E604u;
    {
        const bool branch_taken_0x10e604 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E604u;
            // 0x10e608: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e604) {
            ctx->pc = 0x10E670u;
            goto label_10e670;
        }
    }
    ctx->pc = 0x10E60Cu;
label_10e60c:
    // 0x10e60c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e60cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e610:
    // 0x10e610: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10e610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10e614:
    // 0x10e614: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e614u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e618:
    // 0x10e618: 0x10000016  b           . + 4 + (0x16 << 2)
label_10e61c:
    if (ctx->pc == 0x10E61Cu) {
        ctx->pc = 0x10E61Cu;
            // 0x10e61c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x10E620u;
        goto label_10e620;
    }
    ctx->pc = 0x10E618u;
    {
        const bool branch_taken_0x10e618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E618u;
            // 0x10e61c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e618) {
            ctx->pc = 0x10E674u;
            goto label_10e674;
        }
    }
    ctx->pc = 0x10E620u;
label_10e620:
    // 0x10e620: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e620u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e624:
    // 0x10e624: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e624u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e628:
    // 0x10e628: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e628u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e62c:
    // 0x10e62c: 0x0  nop
    ctx->pc = 0x10e62cu;
    // NOP
label_10e630:
    // 0x10e630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e634:
    // 0x10e634: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10e634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10e638:
    // 0x10e638: 0xc049328  jal         func_124CA0
label_10e63c:
    if (ctx->pc == 0x10E63Cu) {
        ctx->pc = 0x10E63Cu;
            // 0x10e63c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->pc = 0x10E640u;
        goto label_10e640;
    }
    ctx->pc = 0x10E638u;
    SET_GPR_U32(ctx, 31, 0x10E640u);
    ctx->pc = 0x10E63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E638u;
            // 0x10e63c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124CA0u;
    if (runtime->hasFunction(0x124CA0u)) {
        auto targetFn = runtime->lookupFunction(0x124CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E640u; }
        if (ctx->pc != 0x10E640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124CA0_0x124ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E640u; }
        if (ctx->pc != 0x10E640u) { return; }
    }
    ctx->pc = 0x10E640u;
label_10e640:
    // 0x10e640: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x10e640u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_10e644:
    // 0x10e644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e648:
    // 0x10e648: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x10e648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10e64c:
    // 0x10e64c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10e64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10e650:
    // 0x10e650: 0xc04916a  jal         func_1245A8
label_10e654:
    if (ctx->pc == 0x10E654u) {
        ctx->pc = 0x10E654u;
            // 0x10e654: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x10E658u;
        goto label_10e658;
    }
    ctx->pc = 0x10E650u;
    SET_GPR_U32(ctx, 31, 0x10E658u);
    ctx->pc = 0x10E654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E650u;
            // 0x10e654: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E658u; }
        if (ctx->pc != 0x10E658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E658u; }
        if (ctx->pc != 0x10E658u) { return; }
    }
    ctx->pc = 0x10E658u;
label_10e658:
    // 0x10e658: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x10e658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_10e65c:
    // 0x10e65c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e660:
    // 0x10e660: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_10e664:
    if (ctx->pc == 0x10E664u) {
        ctx->pc = 0x10E664u;
            // 0x10e664: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x10E668u;
        goto label_10e668;
    }
    ctx->pc = 0x10E660u;
    {
        const bool branch_taken_0x10e660 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E660u;
            // 0x10e664: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e660) {
            ctx->pc = 0x10E630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e630;
        }
    }
    ctx->pc = 0x10E668u;
label_10e668:
    // 0x10e668: 0x10000004  b           . + 4 + (0x4 << 2)
label_10e66c:
    if (ctx->pc == 0x10E66Cu) {
        ctx->pc = 0x10E66Cu;
            // 0x10e66c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x10E670u;
        goto label_10e670;
    }
    ctx->pc = 0x10E668u;
    {
        const bool branch_taken_0x10e668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E668u;
            // 0x10e66c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e668) {
            ctx->pc = 0x10E67Cu;
            goto label_10e67c;
        }
    }
    ctx->pc = 0x10E670u;
label_10e670:
    // 0x10e670: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e670u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e674:
    // 0x10e674: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e674u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e678:
    // 0x10e678: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x10e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10e67c:
    // 0x10e67c: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x10e67cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10e680:
    // 0x10e680: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_10e684:
    if (ctx->pc == 0x10E684u) {
        ctx->pc = 0x10E684u;
            // 0x10e684: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x10E688u;
        goto label_10e688;
    }
    ctx->pc = 0x10E680u;
    {
        const bool branch_taken_0x10e680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E680u;
            // 0x10e684: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e680) {
            ctx->pc = 0x10E948u;
            goto label_10e948;
        }
    }
    ctx->pc = 0x10E688u;
label_10e688:
    // 0x10e688: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10e688u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10e68c:
    // 0x10e68c: 0xc0497dc  jal         func_125F70
label_10e690:
    if (ctx->pc == 0x10E690u) {
        ctx->pc = 0x10E690u;
            // 0x10e690: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->pc = 0x10E694u;
        goto label_10e694;
    }
    ctx->pc = 0x10E68Cu;
    SET_GPR_U32(ctx, 31, 0x10E694u);
    ctx->pc = 0x10E690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E68Cu;
            // 0x10e690: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E694u; }
        if (ctx->pc != 0x10E694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E694u; }
        if (ctx->pc != 0x10E694u) { return; }
    }
    ctx->pc = 0x10E694u;
label_10e694:
    // 0x10e694: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10e694u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_10e698:
    // 0x10e698: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10e698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e69c:
    // 0x10e69c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x10e69cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e6a0:
    // 0x10e6a0: 0x0  nop
    ctx->pc = 0x10e6a0u;
    // NOP
label_10e6a4:
    // 0x10e6a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_10e6a8:
    if (ctx->pc == 0x10E6A8u) {
        ctx->pc = 0x10E6A8u;
            // 0x10e6a8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x10E6ACu;
        goto label_10e6ac;
    }
    ctx->pc = 0x10E6A4u;
    {
        const bool branch_taken_0x10e6a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10E6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E6A4u;
            // 0x10e6a8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6a4) {
            ctx->pc = 0x10E6BCu;
            goto label_10e6bc;
        }
    }
    ctx->pc = 0x10E6ACu;
label_10e6ac:
    // 0x10e6ac: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10e6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10e6b0:
    // 0x10e6b0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10e6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10e6b4:
    // 0x10e6b4: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_10e6b8:
    if (ctx->pc == 0x10E6B8u) {
        ctx->pc = 0x10E6B8u;
            // 0x10e6b8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x10E6BCu;
        goto label_10e6bc;
    }
    ctx->pc = 0x10E6B4u;
    {
        const bool branch_taken_0x10e6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E6B4u;
            // 0x10e6b8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6b4) {
            ctx->pc = 0x10EDD4u;
            goto label_10edd4;
        }
    }
    ctx->pc = 0x10E6BCu;
label_10e6bc:
    // 0x10e6bc: 0xc049514  jal         func_125450
label_10e6c0:
    if (ctx->pc == 0x10E6C0u) {
        ctx->pc = 0x10E6C0u;
            // 0x10e6c0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x10E6C4u;
        goto label_10e6c4;
    }
    ctx->pc = 0x10E6BCu;
    SET_GPR_U32(ctx, 31, 0x10E6C4u);
    ctx->pc = 0x10E6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E6BCu;
            // 0x10e6c0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E6C4u; }
        if (ctx->pc != 0x10E6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E6C4u; }
        if (ctx->pc != 0x10E6C4u) { return; }
    }
    ctx->pc = 0x10E6C4u;
label_10e6c4:
    // 0x10e6c4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x10e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10e6c8:
    // 0x10e6c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10e6c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e6cc:
    // 0x10e6cc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x10e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10e6d0:
    // 0x10e6d0: 0xc0437dc  jal         func_10DF70
label_10e6d4:
    if (ctx->pc == 0x10E6D4u) {
        ctx->pc = 0x10E6D4u;
            // 0x10e6d4: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x10E6D8u;
        goto label_10e6d8;
    }
    ctx->pc = 0x10E6D0u;
    SET_GPR_U32(ctx, 31, 0x10E6D8u);
    ctx->pc = 0x10E6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E6D0u;
            // 0x10e6d4: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DF70u;
    if (runtime->hasFunction(0x10DF70u)) {
        auto targetFn = runtime->lookupFunction(0x10DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E6D8u; }
        if (ctx->pc != 0x10E6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010DF70_0x10df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E6D8u; }
        if (ctx->pc != 0x10E6D8u) { return; }
    }
    ctx->pc = 0x10E6D8u;
label_10e6d8:
    // 0x10e6d8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x10e6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10e6dc:
    // 0x10e6dc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10e6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10e6e0:
    // 0x10e6e0: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x10e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_10e6e4:
    // 0x10e6e4: 0x100001c3  b           . + 4 + (0x1C3 << 2)
label_10e6e8:
    if (ctx->pc == 0x10E6E8u) {
        ctx->pc = 0x10E6E8u;
            // 0x10e6e8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x10E6ECu;
        goto label_10e6ec;
    }
    ctx->pc = 0x10E6E4u;
    {
        const bool branch_taken_0x10e6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E6E4u;
            // 0x10e6e8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6e4) {
            ctx->pc = 0x10EDF4u;
            goto label_10edf4;
        }
    }
    ctx->pc = 0x10E6ECu;
label_10e6ec:
    // 0x10e6ec: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10e6ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10e6f0:
    // 0x10e6f0: 0x8fc3fff8  lw          $v1, -0x8($fp)
    ctx->pc = 0x10e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10e6f4:
    // 0x10e6f4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_10e6f8:
    if (ctx->pc == 0x10E6F8u) {
        ctx->pc = 0x10E6F8u;
            // 0x10e6f8: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x10E6FCu;
        goto label_10e6fc;
    }
    ctx->pc = 0x10E6F4u;
    {
        const bool branch_taken_0x10e6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E6F4u;
            // 0x10e6f8: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6f4) {
            ctx->pc = 0x10E780u;
            goto label_10e780;
        }
    }
    ctx->pc = 0x10E6FCu;
label_10e6fc:
    // 0x10e6fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10e700:
    // 0x10e700: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x10e700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_10e704:
    // 0x10e704: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10e704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10e708:
    // 0x10e708: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10e708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10e70c:
    // 0x10e70c: 0x60f809  jalr        $v1
label_10e710:
    if (ctx->pc == 0x10E710u) {
        ctx->pc = 0x10E710u;
            // 0x10e710: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x10E714u;
        goto label_10e714;
    }
    ctx->pc = 0x10E70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E714u);
        ctx->pc = 0x10E710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E70Cu;
            // 0x10e710: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10E714u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10E714u; }
            if (ctx->pc != 0x10E714u) { return; }
        }
        }
    }
    ctx->pc = 0x10E714u;
label_10e714:
    // 0x10e714: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10e714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10e718:
    // 0x10e718: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x10e718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_10e71c:
    // 0x10e71c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10e720:
    // 0x10e720: 0x60f809  jalr        $v1
label_10e724:
    if (ctx->pc == 0x10E724u) {
        ctx->pc = 0x10E724u;
            // 0x10e724: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x10E728u;
        goto label_10e728;
    }
    ctx->pc = 0x10E720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E728u);
        ctx->pc = 0x10E724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E720u;
            // 0x10e724: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10E728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10E728u; }
            if (ctx->pc != 0x10E728u) { return; }
        }
        }
    }
    ctx->pc = 0x10E728u;
label_10e728:
    // 0x10e728: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10e728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10e72c:
    // 0x10e72c: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x10e72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_10e730:
    // 0x10e730: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10e734:
    // 0x10e734: 0x60f809  jalr        $v1
label_10e738:
    if (ctx->pc == 0x10E738u) {
        ctx->pc = 0x10E738u;
            // 0x10e738: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x10E73Cu;
        goto label_10e73c;
    }
    ctx->pc = 0x10E734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E73Cu);
        ctx->pc = 0x10E738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E734u;
            // 0x10e738: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10E73Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10E73Cu; }
            if (ctx->pc != 0x10E73Cu) { return; }
        }
        }
    }
    ctx->pc = 0x10E73Cu;
label_10e73c:
    // 0x10e73c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10e740:
    // 0x10e740: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x10e740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_10e744:
    // 0x10e744: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10e744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10e748:
    // 0x10e748: 0x60f809  jalr        $v1
label_10e74c:
    if (ctx->pc == 0x10E74Cu) {
        ctx->pc = 0x10E74Cu;
            // 0x10e74c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x10E750u;
        goto label_10e750;
    }
    ctx->pc = 0x10E748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E750u);
        ctx->pc = 0x10E74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E748u;
            // 0x10e74c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10E750u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10E750u; }
            if (ctx->pc != 0x10E750u) { return; }
        }
        }
    }
    ctx->pc = 0x10E750u;
label_10e750:
    // 0x10e750: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10e750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10e754:
    // 0x10e754: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x10e754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_10e758:
    // 0x10e758: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10e758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10e75c:
    // 0x10e75c: 0x60f809  jalr        $v1
label_10e760:
    if (ctx->pc == 0x10E760u) {
        ctx->pc = 0x10E760u;
            // 0x10e760: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x10E764u;
        goto label_10e764;
    }
    ctx->pc = 0x10E75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E764u);
        ctx->pc = 0x10E760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E75Cu;
            // 0x10e760: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10E764u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10E764u; }
            if (ctx->pc != 0x10E764u) { return; }
        }
        }
    }
    ctx->pc = 0x10E764u;
label_10e764:
    // 0x10e764: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10e764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10e768:
    // 0x10e768: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x10e768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_10e76c:
    // 0x10e76c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10e770:
    // 0x10e770: 0x60f809  jalr        $v1
label_10e774:
    if (ctx->pc == 0x10E774u) {
        ctx->pc = 0x10E774u;
            // 0x10e774: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x10E778u;
        goto label_10e778;
    }
    ctx->pc = 0x10E770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E778u);
        ctx->pc = 0x10E774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E770u;
            // 0x10e774: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10E778u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10E778u; }
            if (ctx->pc != 0x10E778u) { return; }
        }
        }
    }
    ctx->pc = 0x10E778u;
label_10e778:
    // 0x10e778: 0x1000019e  b           . + 4 + (0x19E << 2)
label_10e77c:
    if (ctx->pc == 0x10E77Cu) {
        ctx->pc = 0x10E77Cu;
            // 0x10e77c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x10E780u;
        goto label_10e780;
    }
    ctx->pc = 0x10E778u;
    {
        const bool branch_taken_0x10e778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E778u;
            // 0x10e77c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e778) {
            ctx->pc = 0x10EDF4u;
            goto label_10edf4;
        }
    }
    ctx->pc = 0x10E780u;
label_10e780:
    // 0x10e780: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_10e784:
    if (ctx->pc == 0x10E784u) {
        ctx->pc = 0x10E784u;
            // 0x10e784: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E788u;
        goto label_10e788;
    }
    ctx->pc = 0x10E780u;
    {
        const bool branch_taken_0x10e780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E780u;
            // 0x10e784: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e780) {
            ctx->pc = 0x10E7E0u;
            goto label_10e7e0;
        }
    }
    ctx->pc = 0x10E788u;
label_10e788:
    // 0x10e788: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
label_10e78c:
    if (ctx->pc == 0x10E78Cu) {
        ctx->pc = 0x10E78Cu;
            // 0x10e78c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E790u;
        goto label_10e790;
    }
    ctx->pc = 0x10E788u;
    {
        const bool branch_taken_0x10e788 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x10E78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E788u;
            // 0x10e78c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e788) {
            ctx->pc = 0x10E7CCu;
            goto label_10e7cc;
        }
    }
    ctx->pc = 0x10E790u;
label_10e790:
    // 0x10e790: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x10e790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_10e794:
    // 0x10e794: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_10e798:
    if (ctx->pc == 0x10E798u) {
        ctx->pc = 0x10E798u;
            // 0x10e798: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x10E79Cu;
        goto label_10e79c;
    }
    ctx->pc = 0x10E794u;
    {
        const bool branch_taken_0x10e794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E794u;
            // 0x10e798: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e794) {
            ctx->pc = 0x10E7CCu;
            goto label_10e7cc;
        }
    }
    ctx->pc = 0x10E79Cu;
label_10e79c:
    // 0x10e79c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e79cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e7a0:
    // 0x10e7a0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e7a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e7a4:
    // 0x10e7a4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e7a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e7a8:
    // 0x10e7a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10e7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10e7ac:
    // 0x10e7ac: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x10e7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_10e7b0:
    // 0x10e7b0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_10e7b4:
    if (ctx->pc == 0x10E7B4u) {
        ctx->pc = 0x10E7B4u;
            // 0x10e7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E7B8u;
        goto label_10e7b8;
    }
    ctx->pc = 0x10E7B0u;
    {
        const bool branch_taken_0x10e7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E7B0u;
            // 0x10e7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7b0) {
            ctx->pc = 0x10E828u;
            goto label_10e828;
        }
    }
    ctx->pc = 0x10E7B8u;
label_10e7b8:
    // 0x10e7b8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x10e7b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_10e7bc:
    // 0x10e7bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_10e7c0:
    if (ctx->pc == 0x10E7C0u) {
        ctx->pc = 0x10E7C0u;
            // 0x10e7c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x10E7C4u;
        goto label_10e7c4;
    }
    ctx->pc = 0x10E7BCu;
    {
        const bool branch_taken_0x10e7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E7BCu;
            // 0x10e7c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7bc) {
            ctx->pc = 0x10E7A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e7a8;
        }
    }
    ctx->pc = 0x10E7C4u;
label_10e7c4:
    // 0x10e7c4: 0x10000060  b           . + 4 + (0x60 << 2)
label_10e7c8:
    if (ctx->pc == 0x10E7C8u) {
        ctx->pc = 0x10E7C8u;
            // 0x10e7c8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E7CCu;
        goto label_10e7cc;
    }
    ctx->pc = 0x10E7C4u;
    {
        const bool branch_taken_0x10e7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E7C4u;
            // 0x10e7c8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7c4) {
            ctx->pc = 0x10E948u;
            goto label_10e948;
        }
    }
    ctx->pc = 0x10E7CCu;
label_10e7cc:
    // 0x10e7cc: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e7ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e7d0:
    // 0x10e7d0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e7d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e7d4:
    // 0x10e7d4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e7d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e7d8:
    // 0x10e7d8: 0x10000013  b           . + 4 + (0x13 << 2)
label_10e7dc:
    if (ctx->pc == 0x10E7DCu) {
        ctx->pc = 0x10E7DCu;
            // 0x10e7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E7E0u;
        goto label_10e7e0;
    }
    ctx->pc = 0x10E7D8u;
    {
        const bool branch_taken_0x10e7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E7D8u;
            // 0x10e7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7d8) {
            ctx->pc = 0x10E828u;
            goto label_10e828;
        }
    }
    ctx->pc = 0x10E7E0u;
label_10e7e0:
    // 0x10e7e0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x10e7e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_10e7e4:
    // 0x10e7e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_10e7e8:
    if (ctx->pc == 0x10E7E8u) {
        ctx->pc = 0x10E7E8u;
            // 0x10e7e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E7ECu;
        goto label_10e7ec;
    }
    ctx->pc = 0x10E7E4u;
    {
        const bool branch_taken_0x10e7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E7E4u;
            // 0x10e7e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7e4) {
            ctx->pc = 0x10E81Cu;
            goto label_10e81c;
        }
    }
    ctx->pc = 0x10E7ECu;
label_10e7ec:
    // 0x10e7ec: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e7ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e7f0:
    // 0x10e7f0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e7f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e7f4:
    // 0x10e7f4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e7f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e7f8:
    // 0x10e7f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10e7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10e7fc:
    // 0x10e7fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10e7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_10e800:
    // 0x10e800: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x10e800u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_10e804:
    // 0x10e804: 0x0  nop
    ctx->pc = 0x10e804u;
    // NOP
label_10e808:
    // 0x10e808: 0x0  nop
    ctx->pc = 0x10e808u;
    // NOP
label_10e80c:
    // 0x10e80c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_10e810:
    if (ctx->pc == 0x10E810u) {
        ctx->pc = 0x10E814u;
        goto label_10e814;
    }
    ctx->pc = 0x10E80Cu;
    {
        const bool branch_taken_0x10e80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e80c) {
            ctx->pc = 0x10E7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e7f8;
        }
    }
    ctx->pc = 0x10E814u;
label_10e814:
    // 0x10e814: 0x1000004c  b           . + 4 + (0x4C << 2)
label_10e818:
    if (ctx->pc == 0x10E818u) {
        ctx->pc = 0x10E818u;
            // 0x10e818: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E81Cu;
        goto label_10e81c;
    }
    ctx->pc = 0x10E814u;
    {
        const bool branch_taken_0x10e814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E814u;
            // 0x10e818: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e814) {
            ctx->pc = 0x10E948u;
            goto label_10e948;
        }
    }
    ctx->pc = 0x10E81Cu;
label_10e81c:
    // 0x10e81c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e81cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e820:
    // 0x10e820: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e820u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e824:
    // 0x10e824: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e824u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e828:
    // 0x10e828: 0x10000047  b           . + 4 + (0x47 << 2)
label_10e82c:
    if (ctx->pc == 0x10E82Cu) {
        ctx->pc = 0x10E82Cu;
            // 0x10e82c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E830u;
        goto label_10e830;
    }
    ctx->pc = 0x10E828u;
    {
        const bool branch_taken_0x10e828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E828u;
            // 0x10e82c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e828) {
            ctx->pc = 0x10E948u;
            goto label_10e948;
        }
    }
    ctx->pc = 0x10E830u;
label_10e830:
    // 0x10e830: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10e830u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10e834:
    // 0x10e834: 0x8fb1004c  lw          $s1, 0x4C($sp)
    ctx->pc = 0x10e834u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10e838:
    // 0x10e838: 0x83d0fff8  lb          $s0, -0x8($fp)
    ctx->pc = 0x10e838u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10e83c:
    // 0x10e83c: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x10e83cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_10e840:
    // 0x10e840: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x10e840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e844:
    // 0x10e844: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e844u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e848:
    // 0x10e848: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10e848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10e84c:
    // 0x10e84c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e84cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e850:
    // 0x10e850: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10e850u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10e854:
    // 0x10e854: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e854u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e858:
    // 0x10e858: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x10e858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_10e85c:
    // 0x10e85c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x10e85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10e860:
    // 0x10e860: 0x10000038  b           . + 4 + (0x38 << 2)
label_10e864:
    if (ctx->pc == 0x10E864u) {
        ctx->pc = 0x10E864u;
            // 0x10e864: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x10E868u;
        goto label_10e868;
    }
    ctx->pc = 0x10E860u;
    {
        const bool branch_taken_0x10e860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E860u;
            // 0x10e864: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e860) {
            ctx->pc = 0x10E944u;
            goto label_10e944;
        }
    }
    ctx->pc = 0x10E868u;
label_10e868:
    // 0x10e868: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10e868u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10e86c:
    // 0x10e86c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x10e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_10e870:
    // 0x10e870: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x10e870u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10e874:
    // 0x10e874: 0x2444ecd0  addiu       $a0, $v0, -0x1330
    ctx->pc = 0x10e874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
label_10e878:
    // 0x10e878: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_10e87c:
    if (ctx->pc == 0x10E87Cu) {
        ctx->pc = 0x10E87Cu;
            // 0x10e87c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x10E880u;
        goto label_10e880;
    }
    ctx->pc = 0x10E878u;
    {
        const bool branch_taken_0x10e878 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E878u;
            // 0x10e87c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e878) {
            ctx->pc = 0x10E8A8u;
            goto label_10e8a8;
        }
    }
    ctx->pc = 0x10E880u;
label_10e880:
    // 0x10e880: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x10e880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_10e884:
    // 0x10e884: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10e888:
    if (ctx->pc == 0x10E888u) {
        ctx->pc = 0x10E888u;
            // 0x10e888: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x10E88Cu;
        goto label_10e88c;
    }
    ctx->pc = 0x10E884u;
    {
        const bool branch_taken_0x10e884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E884u;
            // 0x10e888: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e884) {
            ctx->pc = 0x10E894u;
            goto label_10e894;
        }
    }
    ctx->pc = 0x10E88Cu;
label_10e88c:
    // 0x10e88c: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_10e890:
    if (ctx->pc == 0x10E890u) {
        ctx->pc = 0x10E890u;
            // 0x10e890: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x10E894u;
        goto label_10e894;
    }
    ctx->pc = 0x10E88Cu;
    {
        const bool branch_taken_0x10e88c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E88Cu;
            // 0x10e890: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e88c) {
            ctx->pc = 0x10E8E4u;
            goto label_10e8e4;
        }
    }
    ctx->pc = 0x10E894u;
label_10e894:
    // 0x10e894: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e894u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e898:
    // 0x10e898: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10e898u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10e89c:
    // 0x10e89c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e89cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e8a0:
    // 0x10e8a0: 0x10000011  b           . + 4 + (0x11 << 2)
label_10e8a4:
    if (ctx->pc == 0x10E8A4u) {
        ctx->pc = 0x10E8A4u;
            // 0x10e8a4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x10E8A8u;
        goto label_10e8a8;
    }
    ctx->pc = 0x10E8A0u;
    {
        const bool branch_taken_0x10e8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8A0u;
            // 0x10e8a4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8a0) {
            ctx->pc = 0x10E8E8u;
            goto label_10e8e8;
        }
    }
    ctx->pc = 0x10E8A8u;
label_10e8a8:
    // 0x10e8a8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e8a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e8ac:
    // 0x10e8ac: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e8acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e8b0:
    // 0x10e8b0: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e8b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e8b4:
    // 0x10e8b4: 0x0  nop
    ctx->pc = 0x10e8b4u;
    // NOP
label_10e8b8:
    // 0x10e8b8: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x10e8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_10e8bc:
    // 0x10e8bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10e8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_10e8c0:
    // 0x10e8c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10e8c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_10e8c4:
    // 0x10e8c4: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x10e8c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_10e8c8:
    // 0x10e8c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10e8cc:
    // 0x10e8cc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10e8ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10e8d0:
    // 0x10e8d0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x10e8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_10e8d4:
    // 0x10e8d4: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_10e8d8:
    if (ctx->pc == 0x10E8D8u) {
        ctx->pc = 0x10E8D8u;
            // 0x10e8d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x10E8DCu;
        goto label_10e8dc;
    }
    ctx->pc = 0x10E8D4u;
    {
        const bool branch_taken_0x10e8d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8D4u;
            // 0x10e8d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8d4) {
            ctx->pc = 0x10E8B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e8b8;
        }
    }
    ctx->pc = 0x10E8DCu;
label_10e8dc:
    // 0x10e8dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_10e8e0:
    if (ctx->pc == 0x10E8E0u) {
        ctx->pc = 0x10E8E0u;
            // 0x10e8e0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x10E8E4u;
        goto label_10e8e4;
    }
    ctx->pc = 0x10E8DCu;
    {
        const bool branch_taken_0x10e8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8DCu;
            // 0x10e8e0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8dc) {
            ctx->pc = 0x10E8F0u;
            goto label_10e8f0;
        }
    }
    ctx->pc = 0x10E8E4u;
label_10e8e4:
    // 0x10e8e4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e8e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e8e8:
    // 0x10e8e8: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e8e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e8ec:
    // 0x10e8ec: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10e8f0:
    // 0x10e8f0: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x10e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_10e8f4:
    // 0x10e8f4: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x10e8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_10e8f8:
    // 0x10e8f8: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x10e8f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10e8fc:
    // 0x10e8fc: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x10e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10e900:
    // 0x10e900: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x10e900u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_10e904:
    // 0x10e904: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10e904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10e908:
    // 0x10e908: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x10e908u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10e90c:
    // 0x10e90c: 0x1000000e  b           . + 4 + (0xE << 2)
label_10e910:
    if (ctx->pc == 0x10E910u) {
        ctx->pc = 0x10E910u;
            // 0x10e910: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x10E914u;
        goto label_10e914;
    }
    ctx->pc = 0x10E90Cu;
    {
        const bool branch_taken_0x10e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E90Cu;
            // 0x10e910: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e90c) {
            ctx->pc = 0x10E948u;
            goto label_10e948;
        }
    }
    ctx->pc = 0x10E914u;
label_10e914:
    // 0x10e914: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x10e914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_10e918:
    // 0x10e918: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
label_10e91c:
    if (ctx->pc == 0x10E91Cu) {
        ctx->pc = 0x10E91Cu;
            // 0x10e91c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x10E920u;
        goto label_10e920;
    }
    ctx->pc = 0x10E918u;
    {
        const bool branch_taken_0x10e918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E918u;
            // 0x10e91c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e918) {
            ctx->pc = 0x10EDF0u;
            goto label_10edf0;
        }
    }
    ctx->pc = 0x10E920u;
label_10e920:
    // 0x10e920: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x10e920u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_10e924:
    // 0x10e924: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x10e924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e928:
    // 0x10e928: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10e928u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10e92c:
    // 0x10e92c: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x10e92cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
label_10e930:
    // 0x10e930: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10e930u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10e934:
    // 0x10e934: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x10e934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10e938:
    // 0x10e938: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x10e938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_10e93c:
    // 0x10e93c: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x10e93cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10e940:
    // 0x10e940: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10e940u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10e944:
    // 0x10e944: 0xb12023  subu        $a0, $a1, $s1
    ctx->pc = 0x10e944u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_10e948:
    // 0x10e948: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x10e948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10e94c:
    // 0x10e94c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10e950:
    // 0x10e950: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x10e950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_10e954:
    // 0x10e954: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x10e954u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_10e958:
    // 0x10e958: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x10e958u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_10e95c:
    // 0x10e95c: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x10e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_10e960:
    // 0x10e960: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x10e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10e964:
    // 0x10e964: 0x2448821  addu        $s1, $s2, $a0
    ctx->pc = 0x10e964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_10e968:
    // 0x10e968: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10e968u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e96c:
    // 0x10e96c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x10e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_10e970:
    // 0x10e970: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_10e974:
    if (ctx->pc == 0x10E974u) {
        ctx->pc = 0x10E974u;
            // 0x10e974: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x10E978u;
        goto label_10e978;
    }
    ctx->pc = 0x10E970u;
    {
        const bool branch_taken_0x10e970 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E970u;
            // 0x10e974: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e970) {
            ctx->pc = 0x10E994u;
            goto label_10e994;
        }
    }
    ctx->pc = 0x10E978u;
label_10e978:
    // 0x10e978: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x10e978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_10e97c:
    // 0x10e97c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_10e980:
    if (ctx->pc == 0x10E980u) {
        ctx->pc = 0x10E980u;
            // 0x10e980: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x10E984u;
        goto label_10e984;
    }
    ctx->pc = 0x10E97Cu;
    {
        const bool branch_taken_0x10e97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E97Cu;
            // 0x10e980: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e97c) {
            ctx->pc = 0x10E9B4u;
            goto label_10e9b4;
        }
    }
    ctx->pc = 0x10E984u;
label_10e984:
    // 0x10e984: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x10e984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10e988:
    // 0x10e988: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x10e988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10e98c:
    // 0x10e98c: 0x10000008  b           . + 4 + (0x8 << 2)
label_10e990:
    if (ctx->pc == 0x10E990u) {
        ctx->pc = 0x10E990u;
            // 0x10e990: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x10E994u;
        goto label_10e994;
    }
    ctx->pc = 0x10E98Cu;
    {
        const bool branch_taken_0x10e98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E98Cu;
            // 0x10e990: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e98c) {
            ctx->pc = 0x10E9B0u;
            goto label_10e9b0;
        }
    }
    ctx->pc = 0x10E994u;
label_10e994:
    // 0x10e994: 0x32a30024  andi        $v1, $s5, 0x24
    ctx->pc = 0x10e994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)36);
label_10e998:
    // 0x10e998: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10e99c:
    // 0x10e99c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_10e9a0:
    if (ctx->pc == 0x10E9A0u) {
        ctx->pc = 0x10E9A0u;
            // 0x10e9a0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x10E9A4u;
        goto label_10e9a4;
    }
    ctx->pc = 0x10E99Cu;
    {
        const bool branch_taken_0x10e99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10E9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E99Cu;
            // 0x10e9a0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e99c) {
            ctx->pc = 0x10E9B4u;
            goto label_10e9b4;
        }
    }
    ctx->pc = 0x10E9A4u;
label_10e9a4:
    // 0x10e9a4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10e9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10e9a8:
    // 0x10e9a8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x10e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10e9ac:
    // 0x10e9ac: 0x28a20001  slti        $v0, $a1, 0x1
    ctx->pc = 0x10e9acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
label_10e9b0:
    // 0x10e9b0: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x10e9b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_10e9b4:
    // 0x10e9b4: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
label_10e9b8:
    if (ctx->pc == 0x10E9B8u) {
        ctx->pc = 0x10E9B8u;
            // 0x10e9b8: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x10E9BCu;
        goto label_10e9bc;
    }
    ctx->pc = 0x10E9B4u;
    {
        const bool branch_taken_0x10e9b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9B4u;
            // 0x10e9b8: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9b4) {
            ctx->pc = 0x10EAC0u;
            goto label_10eac0;
        }
    }
    ctx->pc = 0x10E9BCu;
label_10e9bc:
    // 0x10e9bc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_10e9c0:
    if (ctx->pc == 0x10E9C0u) {
        ctx->pc = 0x10E9C0u;
            // 0x10e9c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E9C4u;
        goto label_10e9c4;
    }
    ctx->pc = 0x10E9BCu;
    {
        const bool branch_taken_0x10e9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9BCu;
            // 0x10e9c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9bc) {
            ctx->pc = 0x10EA14u;
            goto label_10ea14;
        }
    }
    ctx->pc = 0x10E9C4u;
label_10e9c4:
    // 0x10e9c4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x10e9c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10e9c8:
    // 0x10e9c8: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10e9c8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10e9cc:
    // 0x10e9cc: 0x0  nop
    ctx->pc = 0x10e9ccu;
    // NOP
label_10e9d0:
    // 0x10e9d0: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x10e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_10e9d4:
    // 0x10e9d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10e9d8:
    // 0x10e9d8: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x10e9d8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10e9dc:
    // 0x10e9dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10e9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10e9e0:
    // 0x10e9e0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10e9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10e9e4:
    // 0x10e9e4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10e9e8:
    // 0x10e9e8: 0x60f809  jalr        $v1
label_10e9ec:
    if (ctx->pc == 0x10E9ECu) {
        ctx->pc = 0x10E9ECu;
            // 0x10e9ec: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->pc = 0x10E9F0u;
        goto label_10e9f0;
    }
    ctx->pc = 0x10E9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E9F0u);
        ctx->pc = 0x10E9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9E8u;
            // 0x10e9ec: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10E9F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10E9F0u; }
            if (ctx->pc != 0x10E9F0u) { return; }
        }
        }
    }
    ctx->pc = 0x10E9F0u;
label_10e9f0:
    // 0x10e9f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10e9f4:
    // 0x10e9f4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x10e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10e9f8:
    // 0x10e9f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10e9fc:
    // 0x10e9fc: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x10e9fcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10ea00:
    // 0x10ea00: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x10ea00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10ea04:
    // 0x10ea04: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_10ea08:
    if (ctx->pc == 0x10EA08u) {
        ctx->pc = 0x10EA08u;
            // 0x10ea08: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x10EA0Cu;
        goto label_10ea0c;
    }
    ctx->pc = 0x10EA04u;
    {
        const bool branch_taken_0x10ea04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA04u;
            // 0x10ea08: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea04) {
            ctx->pc = 0x10E9D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e9d0;
        }
    }
    ctx->pc = 0x10EA0Cu;
label_10ea0c:
    // 0x10ea0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_10ea10:
    if (ctx->pc == 0x10EA10u) {
        ctx->pc = 0x10EA14u;
        goto label_10ea14;
    }
    ctx->pc = 0x10EA0Cu;
    {
        const bool branch_taken_0x10ea0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ea0c) {
            ctx->pc = 0x10EA18u;
            goto label_10ea18;
        }
    }
    ctx->pc = 0x10EA14u;
label_10ea14:
    // 0x10ea14: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10ea14u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10ea18:
    // 0x10ea18: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
label_10ea1c:
    if (ctx->pc == 0x10EA1Cu) {
        ctx->pc = 0x10EA20u;
        goto label_10ea20;
    }
    ctx->pc = 0x10EA18u;
    {
        const bool branch_taken_0x10ea18 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x10ea18) {
            ctx->pc = 0x10EA50u;
            goto label_10ea50;
        }
    }
    ctx->pc = 0x10EA20u;
label_10ea20:
    // 0x10ea20: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x10ea20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10ea24:
    // 0x10ea24: 0x0  nop
    ctx->pc = 0x10ea24u;
    // NOP
label_10ea28:
    // 0x10ea28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10ea2c:
    // 0x10ea2c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10ea2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10ea30:
    // 0x10ea30: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10ea30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10ea34:
    // 0x10ea34: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10ea38:
    // 0x10ea38: 0x60f809  jalr        $v1
label_10ea3c:
    if (ctx->pc == 0x10EA3Cu) {
        ctx->pc = 0x10EA3Cu;
            // 0x10ea3c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x10EA40u;
        goto label_10ea40;
    }
    ctx->pc = 0x10EA38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EA40u);
        ctx->pc = 0x10EA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA38u;
            // 0x10ea3c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10EA40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10EA40u; }
            if (ctx->pc != 0x10EA40u) { return; }
        }
        }
    }
    ctx->pc = 0x10EA40u;
label_10ea40:
    // 0x10ea40: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10ea44:
    // 0x10ea44: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10ea48:
    // 0x10ea48: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_10ea4c:
    if (ctx->pc == 0x10EA4Cu) {
        ctx->pc = 0x10EA4Cu;
            // 0x10ea4c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x10EA50u;
        goto label_10ea50;
    }
    ctx->pc = 0x10EA48u;
    {
        const bool branch_taken_0x10ea48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA48u;
            // 0x10ea4c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea48) {
            ctx->pc = 0x10EA28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ea28;
        }
    }
    ctx->pc = 0x10EA50u;
label_10ea50:
    // 0x10ea50: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_10ea54:
    if (ctx->pc == 0x10EA54u) {
        ctx->pc = 0x10EA54u;
            // 0x10ea54: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x10EA58u;
        goto label_10ea58;
    }
    ctx->pc = 0x10EA50u;
    {
        const bool branch_taken_0x10ea50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA50u;
            // 0x10ea54: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea50) {
            ctx->pc = 0x10EA88u;
            goto label_10ea88;
        }
    }
    ctx->pc = 0x10EA58u;
label_10ea58:
    // 0x10ea58: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x10ea58u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_10ea5c:
    // 0x10ea5c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10ea60:
    // 0x10ea60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10ea60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10ea64:
    // 0x10ea64: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10ea68:
    // 0x10ea68: 0x60f809  jalr        $v1
label_10ea6c:
    if (ctx->pc == 0x10EA6Cu) {
        ctx->pc = 0x10EA6Cu;
            // 0x10ea6c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x10EA70u;
        goto label_10ea70;
    }
    ctx->pc = 0x10EA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EA70u);
        ctx->pc = 0x10EA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA68u;
            // 0x10ea6c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10EA70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10EA70u; }
            if (ctx->pc != 0x10EA70u) { return; }
        }
        }
    }
    ctx->pc = 0x10EA70u;
label_10ea70:
    // 0x10ea70: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10ea74:
    // 0x10ea74: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10ea78:
    // 0x10ea78: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x10ea78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10ea7c:
    // 0x10ea7c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_10ea80:
    if (ctx->pc == 0x10EA80u) {
        ctx->pc = 0x10EA80u;
            // 0x10ea80: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x10EA84u;
        goto label_10ea84;
    }
    ctx->pc = 0x10EA7Cu;
    {
        const bool branch_taken_0x10ea7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA7Cu;
            // 0x10ea80: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea7c) {
            ctx->pc = 0x10EA58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ea58;
        }
    }
    ctx->pc = 0x10EA84u;
label_10ea84:
    // 0x10ea84: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10ea84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10ea88:
    // 0x10ea88: 0x18a0ff16  blez        $a1, . + 4 + (-0xEA << 2)
label_10ea8c:
    if (ctx->pc == 0x10EA8Cu) {
        ctx->pc = 0x10EA8Cu;
            // 0x10ea8c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10EA90u;
        goto label_10ea90;
    }
    ctx->pc = 0x10EA88u;
    {
        const bool branch_taken_0x10ea88 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x10EA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA88u;
            // 0x10ea8c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea88) {
            ctx->pc = 0x10E6E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e6e4;
        }
    }
    ctx->pc = 0x10EA90u;
label_10ea90:
    // 0x10ea90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10ea94:
    // 0x10ea94: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x10ea94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10ea98:
    // 0x10ea98: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10ea98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10ea9c:
    // 0x10ea9c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10eaa0:
    // 0x10eaa0: 0x60f809  jalr        $v1
label_10eaa4:
    if (ctx->pc == 0x10EAA4u) {
        ctx->pc = 0x10EAA4u;
            // 0x10eaa4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x10EAA8u;
        goto label_10eaa8;
    }
    ctx->pc = 0x10EAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EAA8u);
        ctx->pc = 0x10EAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAA0u;
            // 0x10eaa4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10EAA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10EAA8u; }
            if (ctx->pc != 0x10EAA8u) { return; }
        }
        }
    }
    ctx->pc = 0x10EAA8u;
label_10eaa8:
    // 0x10eaa8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10eaac:
    // 0x10eaac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10eab0:
    // 0x10eab0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_10eab4:
    if (ctx->pc == 0x10EAB4u) {
        ctx->pc = 0x10EAB4u;
            // 0x10eab4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x10EAB8u;
        goto label_10eab8;
    }
    ctx->pc = 0x10EAB0u;
    {
        const bool branch_taken_0x10eab0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAB0u;
            // 0x10eab4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eab0) {
            ctx->pc = 0x10EA90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ea90;
        }
    }
    ctx->pc = 0x10EAB8u;
label_10eab8:
    // 0x10eab8: 0x100000ce  b           . + 4 + (0xCE << 2)
label_10eabc:
    if (ctx->pc == 0x10EABCu) {
        ctx->pc = 0x10EABCu;
            // 0x10eabc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x10EAC0u;
        goto label_10eac0;
    }
    ctx->pc = 0x10EAB8u;
    {
        const bool branch_taken_0x10eab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAB8u;
            // 0x10eabc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eab8) {
            ctx->pc = 0x10EDF4u;
            goto label_10edf4;
        }
    }
    ctx->pc = 0x10EAC0u;
label_10eac0:
    // 0x10eac0: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x10eac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_10eac4:
    // 0x10eac4: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_10eac8:
    if (ctx->pc == 0x10EAC8u) {
        ctx->pc = 0x10EAC8u;
            // 0x10eac8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x10EACCu;
        goto label_10eacc;
    }
    ctx->pc = 0x10EAC4u;
    {
        const bool branch_taken_0x10eac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAC4u;
            // 0x10eac8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eac4) {
            ctx->pc = 0x10ECA4u;
            goto label_10eca4;
        }
    }
    ctx->pc = 0x10EACCu;
label_10eacc:
    // 0x10eacc: 0x14e2002e  bne         $a3, $v0, . + 4 + (0x2E << 2)
label_10ead0:
    if (ctx->pc == 0x10EAD0u) {
        ctx->pc = 0x10EAD0u;
            // 0x10ead0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x10EAD4u;
        goto label_10ead4;
    }
    ctx->pc = 0x10EACCu;
    {
        const bool branch_taken_0x10eacc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x10EAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EACCu;
            // 0x10ead0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eacc) {
            ctx->pc = 0x10EB88u;
            goto label_10eb88;
        }
    }
    ctx->pc = 0x10EAD4u;
label_10ead4:
    // 0x10ead4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x10ead4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10ead8:
    // 0x10ead8: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_10eadc:
    if (ctx->pc == 0x10EADCu) {
        ctx->pc = 0x10EADCu;
            // 0x10eadc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10EAE0u;
        goto label_10eae0;
    }
    ctx->pc = 0x10EAD8u;
    {
        const bool branch_taken_0x10ead8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAD8u;
            // 0x10eadc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ead8) {
            ctx->pc = 0x10EB34u;
            goto label_10eb34;
        }
    }
    ctx->pc = 0x10EAE0u;
label_10eae0:
    // 0x10eae0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x10eae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10eae4:
    // 0x10eae4: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10eae4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10eae8:
    // 0x10eae8: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x10eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_10eaec:
    // 0x10eaec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10eaf0:
    // 0x10eaf0: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x10eaf0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10eaf4:
    // 0x10eaf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10eaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10eaf8:
    // 0x10eaf8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10eaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10eafc:
    // 0x10eafc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10eb00:
    // 0x10eb00: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x10eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_10eb04:
    // 0x10eb04: 0x60f809  jalr        $v1
label_10eb08:
    if (ctx->pc == 0x10EB08u) {
        ctx->pc = 0x10EB08u;
            // 0x10eb08: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->pc = 0x10EB0Cu;
        goto label_10eb0c;
    }
    ctx->pc = 0x10EB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EB0Cu);
        ctx->pc = 0x10EB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB04u;
            // 0x10eb08: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10EB0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10EB0Cu; }
            if (ctx->pc != 0x10EB0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x10EB0Cu;
label_10eb0c:
    // 0x10eb0c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10eb10:
    // 0x10eb10: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x10eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10eb14:
    // 0x10eb14: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10eb18:
    // 0x10eb18: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x10eb18u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10eb1c:
    // 0x10eb1c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x10eb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_10eb20:
    // 0x10eb20: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x10eb20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10eb24:
    // 0x10eb24: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_10eb28:
    if (ctx->pc == 0x10EB28u) {
        ctx->pc = 0x10EB28u;
            // 0x10eb28: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x10EB2Cu;
        goto label_10eb2c;
    }
    ctx->pc = 0x10EB24u;
    {
        const bool branch_taken_0x10eb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB24u;
            // 0x10eb28: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb24) {
            ctx->pc = 0x10EAE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eae8;
        }
    }
    ctx->pc = 0x10EB2Cu;
label_10eb2c:
    // 0x10eb2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_10eb30:
    if (ctx->pc == 0x10EB30u) {
        ctx->pc = 0x10EB30u;
            // 0x10eb30: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x10EB34u;
        goto label_10eb34;
    }
    ctx->pc = 0x10EB2Cu;
    {
        const bool branch_taken_0x10eb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB2Cu;
            // 0x10eb30: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb2c) {
            ctx->pc = 0x10EB3Cu;
            goto label_10eb3c;
        }
    }
    ctx->pc = 0x10EB34u;
label_10eb34:
    // 0x10eb34: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10eb34u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10eb38:
    // 0x10eb38: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10eb3c:
    // 0x10eb3c: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
label_10eb40:
    if (ctx->pc == 0x10EB40u) {
        ctx->pc = 0x10EB44u;
        goto label_10eb44;
    }
    ctx->pc = 0x10EB3Cu;
    {
        const bool branch_taken_0x10eb3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10eb3c) {
            ctx->pc = 0x10EC34u;
            goto label_10ec34;
        }
    }
    ctx->pc = 0x10EB44u;
label_10eb44:
    // 0x10eb44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10eb44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10eb48:
    // 0x10eb48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10eb4c:
    // 0x10eb4c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x10eb4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10eb50:
    // 0x10eb50: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10eb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10eb54:
    // 0x10eb54: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x10eb54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_10eb58:
    // 0x10eb58: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10eb5c:
    // 0x10eb5c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x10eb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_10eb60:
    // 0x10eb60: 0x60f809  jalr        $v1
label_10eb64:
    if (ctx->pc == 0x10EB64u) {
        ctx->pc = 0x10EB64u;
            // 0x10eb64: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->pc = 0x10EB68u;
        goto label_10eb68;
    }
    ctx->pc = 0x10EB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EB68u);
        ctx->pc = 0x10EB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB60u;
            // 0x10eb64: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10EB68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10EB68u; }
            if (ctx->pc != 0x10EB68u) { return; }
        }
        }
    }
    ctx->pc = 0x10EB68u;
label_10eb68:
    // 0x10eb68: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10eb6c:
    // 0x10eb6c: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x10eb6cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10eb70:
    // 0x10eb70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10eb74:
    // 0x10eb74: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x10eb74u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10eb78:
    // 0x10eb78: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_10eb7c:
    if (ctx->pc == 0x10EB7Cu) {
        ctx->pc = 0x10EB7Cu;
            // 0x10eb7c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x10EB80u;
        goto label_10eb80;
    }
    ctx->pc = 0x10EB78u;
    {
        const bool branch_taken_0x10eb78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB78u;
            // 0x10eb7c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb78) {
            ctx->pc = 0x10EB48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eb48;
        }
    }
    ctx->pc = 0x10EB80u;
label_10eb80:
    // 0x10eb80: 0x1000002c  b           . + 4 + (0x2C << 2)
label_10eb84:
    if (ctx->pc == 0x10EB84u) {
        ctx->pc = 0x10EB88u;
        goto label_10eb88;
    }
    ctx->pc = 0x10EB80u;
    {
        const bool branch_taken_0x10eb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10eb80) {
            ctx->pc = 0x10EC34u;
            goto label_10ec34;
        }
    }
    ctx->pc = 0x10EB88u;
label_10eb88:
    // 0x10eb88: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_10eb8c:
    if (ctx->pc == 0x10EB8Cu) {
        ctx->pc = 0x10EB8Cu;
            // 0x10eb8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10EB90u;
        goto label_10eb90;
    }
    ctx->pc = 0x10EB88u;
    {
        const bool branch_taken_0x10eb88 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x10EB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB88u;
            // 0x10eb8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb88) {
            ctx->pc = 0x10EBE0u;
            goto label_10ebe0;
        }
    }
    ctx->pc = 0x10EB90u;
label_10eb90:
    // 0x10eb90: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10eb90u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10eb94:
    // 0x10eb94: 0x0  nop
    ctx->pc = 0x10eb94u;
    // NOP
label_10eb98:
    // 0x10eb98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10eb9c:
    // 0x10eb9c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x10eb9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10eba0:
    // 0x10eba0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10eba4:
    // 0x10eba4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10eba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10eba8:
    // 0x10eba8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10ebac:
    // 0x10ebac: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x10ebacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_10ebb0:
    // 0x10ebb0: 0x60f809  jalr        $v1
label_10ebb4:
    if (ctx->pc == 0x10EBB4u) {
        ctx->pc = 0x10EBB4u;
            // 0x10ebb4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->pc = 0x10EBB8u;
        goto label_10ebb8;
    }
    ctx->pc = 0x10EBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EBB8u);
        ctx->pc = 0x10EBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBB0u;
            // 0x10ebb4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10EBB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10EBB8u; }
            if (ctx->pc != 0x10EBB8u) { return; }
        }
        }
    }
    ctx->pc = 0x10EBB8u;
label_10ebb8:
    // 0x10ebb8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10ebbc:
    // 0x10ebbc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10ebc0:
    // 0x10ebc0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10ebc4:
    // 0x10ebc4: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x10ebc4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10ebc8:
    // 0x10ebc8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x10ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_10ebcc:
    // 0x10ebcc: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x10ebccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10ebd0:
    // 0x10ebd0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_10ebd4:
    if (ctx->pc == 0x10EBD4u) {
        ctx->pc = 0x10EBD4u;
            // 0x10ebd4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x10EBD8u;
        goto label_10ebd8;
    }
    ctx->pc = 0x10EBD0u;
    {
        const bool branch_taken_0x10ebd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBD0u;
            // 0x10ebd4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebd0) {
            ctx->pc = 0x10EB98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eb98;
        }
    }
    ctx->pc = 0x10EBD8u;
label_10ebd8:
    // 0x10ebd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_10ebdc:
    if (ctx->pc == 0x10EBDCu) {
        ctx->pc = 0x10EBDCu;
            // 0x10ebdc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x10EBE0u;
        goto label_10ebe0;
    }
    ctx->pc = 0x10EBD8u;
    {
        const bool branch_taken_0x10ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBD8u;
            // 0x10ebdc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebd8) {
            ctx->pc = 0x10EBE8u;
            goto label_10ebe8;
        }
    }
    ctx->pc = 0x10EBE0u;
label_10ebe0:
    // 0x10ebe0: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10ebe0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10ebe4:
    // 0x10ebe4: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x10ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10ebe8:
    // 0x10ebe8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_10ebec:
    if (ctx->pc == 0x10EBECu) {
        ctx->pc = 0x10EBECu;
            // 0x10ebec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10EBF0u;
        goto label_10ebf0;
    }
    ctx->pc = 0x10EBE8u;
    {
        const bool branch_taken_0x10ebe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBE8u;
            // 0x10ebec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebe8) {
            ctx->pc = 0x10EC34u;
            goto label_10ec34;
        }
    }
    ctx->pc = 0x10EBF0u;
label_10ebf0:
    // 0x10ebf0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x10ebf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10ebf4:
    // 0x10ebf4: 0x0  nop
    ctx->pc = 0x10ebf4u;
    // NOP
label_10ebf8:
    // 0x10ebf8: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x10ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_10ebfc:
    // 0x10ebfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10ec00:
    // 0x10ec00: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x10ec00u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10ec04:
    // 0x10ec04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10ec04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10ec08:
    // 0x10ec08: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10ec0c:
    // 0x10ec0c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10ec10:
    // 0x10ec10: 0x60f809  jalr        $v1
label_10ec14:
    if (ctx->pc == 0x10EC14u) {
        ctx->pc = 0x10EC14u;
            // 0x10ec14: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->pc = 0x10EC18u;
        goto label_10ec18;
    }
    ctx->pc = 0x10EC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EC18u);
        ctx->pc = 0x10EC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC10u;
            // 0x10ec14: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10EC18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10EC18u; }
            if (ctx->pc != 0x10EC18u) { return; }
        }
        }
    }
    ctx->pc = 0x10EC18u;
label_10ec18:
    // 0x10ec18: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10ec1c:
    // 0x10ec1c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x10ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10ec20:
    // 0x10ec20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10ec24:
    // 0x10ec24: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x10ec24u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10ec28:
    // 0x10ec28: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x10ec28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10ec2c:
    // 0x10ec2c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_10ec30:
    if (ctx->pc == 0x10EC30u) {
        ctx->pc = 0x10EC30u;
            // 0x10ec30: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x10EC34u;
        goto label_10ec34;
    }
    ctx->pc = 0x10EC2Cu;
    {
        const bool branch_taken_0x10ec2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC2Cu;
            // 0x10ec30: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec2c) {
            ctx->pc = 0x10EBF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ebf8;
        }
    }
    ctx->pc = 0x10EC34u;
label_10ec34:
    // 0x10ec34: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_10ec38:
    if (ctx->pc == 0x10EC38u) {
        ctx->pc = 0x10EC3Cu;
        goto label_10ec3c;
    }
    ctx->pc = 0x10EC34u;
    {
        const bool branch_taken_0x10ec34 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x10ec34) {
            ctx->pc = 0x10EC68u;
            goto label_10ec68;
        }
    }
    ctx->pc = 0x10EC3Cu;
label_10ec3c:
    // 0x10ec3c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x10ec3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10ec40:
    // 0x10ec40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10ec40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10ec44:
    // 0x10ec44: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10ec44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10ec48:
    // 0x10ec48: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10ec48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10ec4c:
    // 0x10ec4c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10ec50:
    // 0x10ec50: 0x60f809  jalr        $v1
label_10ec54:
    if (ctx->pc == 0x10EC54u) {
        ctx->pc = 0x10EC54u;
            // 0x10ec54: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x10EC58u;
        goto label_10ec58;
    }
    ctx->pc = 0x10EC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EC58u);
        ctx->pc = 0x10EC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC50u;
            // 0x10ec54: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10EC58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10EC58u; }
            if (ctx->pc != 0x10EC58u) { return; }
        }
        }
    }
    ctx->pc = 0x10EC58u;
label_10ec58:
    // 0x10ec58: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10ec58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10ec5c:
    // 0x10ec5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10ec60:
    // 0x10ec60: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_10ec64:
    if (ctx->pc == 0x10EC64u) {
        ctx->pc = 0x10EC64u;
            // 0x10ec64: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x10EC68u;
        goto label_10ec68;
    }
    ctx->pc = 0x10EC60u;
    {
        const bool branch_taken_0x10ec60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC60u;
            // 0x10ec64: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec60) {
            ctx->pc = 0x10EC40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ec40;
        }
    }
    ctx->pc = 0x10EC68u;
label_10ec68:
    // 0x10ec68: 0x52800062  beql        $s4, $zero, . + 4 + (0x62 << 2)
label_10ec6c:
    if (ctx->pc == 0x10EC6Cu) {
        ctx->pc = 0x10EC6Cu;
            // 0x10ec6c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x10EC70u;
        goto label_10ec70;
    }
    ctx->pc = 0x10EC68u;
    {
        const bool branch_taken_0x10ec68 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ec68) {
            ctx->pc = 0x10EC6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC68u;
            // 0x10ec6c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10EDF4u;
            goto label_10edf4;
        }
    }
    ctx->pc = 0x10EC70u;
label_10ec70:
    // 0x10ec70: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x10ec70u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_10ec74:
    // 0x10ec74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10ec78:
    // 0x10ec78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10ec78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10ec7c:
    // 0x10ec7c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10ec80:
    // 0x10ec80: 0x60f809  jalr        $v1
label_10ec84:
    if (ctx->pc == 0x10EC84u) {
        ctx->pc = 0x10EC84u;
            // 0x10ec84: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x10EC88u;
        goto label_10ec88;
    }
    ctx->pc = 0x10EC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EC88u);
        ctx->pc = 0x10EC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC80u;
            // 0x10ec84: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10EC88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10EC88u; }
            if (ctx->pc != 0x10EC88u) { return; }
        }
        }
    }
    ctx->pc = 0x10EC88u;
label_10ec88:
    // 0x10ec88: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10ec8c:
    // 0x10ec8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10ec90:
    // 0x10ec90: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x10ec90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10ec94:
    // 0x10ec94: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_10ec98:
    if (ctx->pc == 0x10EC98u) {
        ctx->pc = 0x10EC98u;
            // 0x10ec98: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x10EC9Cu;
        goto label_10ec9c;
    }
    ctx->pc = 0x10EC94u;
    {
        const bool branch_taken_0x10ec94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC94u;
            // 0x10ec98: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec94) {
            ctx->pc = 0x10EC70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ec70;
        }
    }
    ctx->pc = 0x10EC9Cu;
label_10ec9c:
    // 0x10ec9c: 0x10000055  b           . + 4 + (0x55 << 2)
label_10eca0:
    if (ctx->pc == 0x10ECA0u) {
        ctx->pc = 0x10ECA0u;
            // 0x10eca0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x10ECA4u;
        goto label_10eca4;
    }
    ctx->pc = 0x10EC9Cu;
    {
        const bool branch_taken_0x10ec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ECA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC9Cu;
            // 0x10eca0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec9c) {
            ctx->pc = 0x10EDF4u;
            goto label_10edf4;
        }
    }
    ctx->pc = 0x10ECA4u;
label_10eca4:
    // 0x10eca4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10eca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10eca8:
    // 0x10eca8: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_10ecac:
    if (ctx->pc == 0x10ECACu) {
        ctx->pc = 0x10ECACu;
            // 0x10ecac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10ECB0u;
        goto label_10ecb0;
    }
    ctx->pc = 0x10ECA8u;
    {
        const bool branch_taken_0x10eca8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x10ECACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ECA8u;
            // 0x10ecac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eca8) {
            ctx->pc = 0x10ED00u;
            goto label_10ed00;
        }
    }
    ctx->pc = 0x10ECB0u;
label_10ecb0:
    // 0x10ecb0: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10ecb0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10ecb4:
    // 0x10ecb4: 0x0  nop
    ctx->pc = 0x10ecb4u;
    // NOP
label_10ecb8:
    // 0x10ecb8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10ecbc:
    // 0x10ecbc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x10ecbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10ecc0:
    // 0x10ecc0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10ecc4:
    // 0x10ecc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10ecc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10ecc8:
    // 0x10ecc8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10eccc:
    // 0x10eccc: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x10ecccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_10ecd0:
    // 0x10ecd0: 0x60f809  jalr        $v1
label_10ecd4:
    if (ctx->pc == 0x10ECD4u) {
        ctx->pc = 0x10ECD4u;
            // 0x10ecd4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->pc = 0x10ECD8u;
        goto label_10ecd8;
    }
    ctx->pc = 0x10ECD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10ECD8u);
        ctx->pc = 0x10ECD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ECD0u;
            // 0x10ecd4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10ECD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10ECD8u; }
            if (ctx->pc != 0x10ECD8u) { return; }
        }
        }
    }
    ctx->pc = 0x10ECD8u;
label_10ecd8:
    // 0x10ecd8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10ecdc:
    // 0x10ecdc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10ecdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10ece0:
    // 0x10ece0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10ece4:
    // 0x10ece4: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x10ece4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10ece8:
    // 0x10ece8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x10ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_10ecec:
    // 0x10ecec: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x10ececu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10ecf0:
    // 0x10ecf0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_10ecf4:
    if (ctx->pc == 0x10ECF4u) {
        ctx->pc = 0x10ECF4u;
            // 0x10ecf4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x10ECF8u;
        goto label_10ecf8;
    }
    ctx->pc = 0x10ECF0u;
    {
        const bool branch_taken_0x10ecf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ECF0u;
            // 0x10ecf4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ecf0) {
            ctx->pc = 0x10ECB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ecb8;
        }
    }
    ctx->pc = 0x10ECF8u;
label_10ecf8:
    // 0x10ecf8: 0x10000003  b           . + 4 + (0x3 << 2)
label_10ecfc:
    if (ctx->pc == 0x10ECFCu) {
        ctx->pc = 0x10ECFCu;
            // 0x10ecfc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x10ED00u;
        goto label_10ed00;
    }
    ctx->pc = 0x10ECF8u;
    {
        const bool branch_taken_0x10ecf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ECFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ECF8u;
            // 0x10ecfc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ecf8) {
            ctx->pc = 0x10ED08u;
            goto label_10ed08;
        }
    }
    ctx->pc = 0x10ED00u;
label_10ed00:
    // 0x10ed00: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10ed00u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10ed04:
    // 0x10ed04: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x10ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10ed08:
    // 0x10ed08: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_10ed0c:
    if (ctx->pc == 0x10ED0Cu) {
        ctx->pc = 0x10ED0Cu;
            // 0x10ed0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10ED10u;
        goto label_10ed10;
    }
    ctx->pc = 0x10ED08u;
    {
        const bool branch_taken_0x10ed08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED08u;
            // 0x10ed0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed08) {
            ctx->pc = 0x10ED54u;
            goto label_10ed54;
        }
    }
    ctx->pc = 0x10ED10u;
label_10ed10:
    // 0x10ed10: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x10ed10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10ed14:
    // 0x10ed14: 0x0  nop
    ctx->pc = 0x10ed14u;
    // NOP
label_10ed18:
    // 0x10ed18: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x10ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_10ed1c:
    // 0x10ed1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10ed20:
    // 0x10ed20: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x10ed20u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10ed24:
    // 0x10ed24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10ed24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10ed28:
    // 0x10ed28: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10ed2c:
    // 0x10ed2c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10ed30:
    // 0x10ed30: 0x60f809  jalr        $v1
label_10ed34:
    if (ctx->pc == 0x10ED34u) {
        ctx->pc = 0x10ED34u;
            // 0x10ed34: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->pc = 0x10ED38u;
        goto label_10ed38;
    }
    ctx->pc = 0x10ED30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10ED38u);
        ctx->pc = 0x10ED34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED30u;
            // 0x10ed34: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10ED38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10ED38u; }
            if (ctx->pc != 0x10ED38u) { return; }
        }
        }
    }
    ctx->pc = 0x10ED38u;
label_10ed38:
    // 0x10ed38: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10ed38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10ed3c:
    // 0x10ed3c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x10ed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10ed40:
    // 0x10ed40: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10ed44:
    // 0x10ed44: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x10ed44u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10ed48:
    // 0x10ed48: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x10ed48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10ed4c:
    // 0x10ed4c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_10ed50:
    if (ctx->pc == 0x10ED50u) {
        ctx->pc = 0x10ED50u;
            // 0x10ed50: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x10ED54u;
        goto label_10ed54;
    }
    ctx->pc = 0x10ED4Cu;
    {
        const bool branch_taken_0x10ed4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ED50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED4Cu;
            // 0x10ed50: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed4c) {
            ctx->pc = 0x10ED18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ed18;
        }
    }
    ctx->pc = 0x10ED54u;
label_10ed54:
    // 0x10ed54: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_10ed58:
    if (ctx->pc == 0x10ED58u) {
        ctx->pc = 0x10ED5Cu;
        goto label_10ed5c;
    }
    ctx->pc = 0x10ED54u;
    {
        const bool branch_taken_0x10ed54 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x10ed54) {
            ctx->pc = 0x10ED88u;
            goto label_10ed88;
        }
    }
    ctx->pc = 0x10ED5Cu;
label_10ed5c:
    // 0x10ed5c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x10ed5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10ed60:
    // 0x10ed60: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10ed64:
    // 0x10ed64: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10ed64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10ed68:
    // 0x10ed68: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10ed68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10ed6c:
    // 0x10ed6c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10ed70:
    // 0x10ed70: 0x60f809  jalr        $v1
label_10ed74:
    if (ctx->pc == 0x10ED74u) {
        ctx->pc = 0x10ED74u;
            // 0x10ed74: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x10ED78u;
        goto label_10ed78;
    }
    ctx->pc = 0x10ED70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10ED78u);
        ctx->pc = 0x10ED74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED70u;
            // 0x10ed74: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10ED78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10ED78u; }
            if (ctx->pc != 0x10ED78u) { return; }
        }
        }
    }
    ctx->pc = 0x10ED78u;
label_10ed78:
    // 0x10ed78: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10ed7c:
    // 0x10ed7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10ed80:
    // 0x10ed80: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_10ed84:
    if (ctx->pc == 0x10ED84u) {
        ctx->pc = 0x10ED84u;
            // 0x10ed84: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x10ED88u;
        goto label_10ed88;
    }
    ctx->pc = 0x10ED80u;
    {
        const bool branch_taken_0x10ed80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ED84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED80u;
            // 0x10ed84: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed80) {
            ctx->pc = 0x10ED60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ed60;
        }
    }
    ctx->pc = 0x10ED88u;
label_10ed88:
    // 0x10ed88: 0x5280001a  beql        $s4, $zero, . + 4 + (0x1A << 2)
label_10ed8c:
    if (ctx->pc == 0x10ED8Cu) {
        ctx->pc = 0x10ED8Cu;
            // 0x10ed8c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x10ED90u;
        goto label_10ed90;
    }
    ctx->pc = 0x10ED88u;
    {
        const bool branch_taken_0x10ed88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ed88) {
            ctx->pc = 0x10ED8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED88u;
            // 0x10ed8c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10EDF4u;
            goto label_10edf4;
        }
    }
    ctx->pc = 0x10ED90u;
label_10ed90:
    // 0x10ed90: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x10ed90u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_10ed94:
    // 0x10ed94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10ed98:
    // 0x10ed98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10ed98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10ed9c:
    // 0x10ed9c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10ed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10eda0:
    // 0x10eda0: 0x60f809  jalr        $v1
label_10eda4:
    if (ctx->pc == 0x10EDA4u) {
        ctx->pc = 0x10EDA4u;
            // 0x10eda4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x10EDA8u;
        goto label_10eda8;
    }
    ctx->pc = 0x10EDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EDA8u);
        ctx->pc = 0x10EDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EDA0u;
            // 0x10eda4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10EDA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10EDA8u; }
            if (ctx->pc != 0x10EDA8u) { return; }
        }
        }
    }
    ctx->pc = 0x10EDA8u;
label_10eda8:
    // 0x10eda8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10edac:
    // 0x10edac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10edacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10edb0:
    // 0x10edb0: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x10edb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10edb4:
    // 0x10edb4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_10edb8:
    if (ctx->pc == 0x10EDB8u) {
        ctx->pc = 0x10EDB8u;
            // 0x10edb8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x10EDBCu;
        goto label_10edbc;
    }
    ctx->pc = 0x10EDB4u;
    {
        const bool branch_taken_0x10edb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EDB4u;
            // 0x10edb8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edb4) {
            ctx->pc = 0x10ED90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ed90;
        }
    }
    ctx->pc = 0x10EDBCu;
label_10edbc:
    // 0x10edbc: 0x1000000d  b           . + 4 + (0xD << 2)
label_10edc0:
    if (ctx->pc == 0x10EDC0u) {
        ctx->pc = 0x10EDC0u;
            // 0x10edc0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x10EDC4u;
        goto label_10edc4;
    }
    ctx->pc = 0x10EDBCu;
    {
        const bool branch_taken_0x10edbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EDBCu;
            // 0x10edc0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edbc) {
            ctx->pc = 0x10EDF4u;
            goto label_10edf4;
        }
    }
    ctx->pc = 0x10EDC4u;
label_10edc4:
    // 0x10edc4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_10edc8:
    if (ctx->pc == 0x10EDC8u) {
        ctx->pc = 0x10EDC8u;
            // 0x10edc8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x10EDCCu;
        goto label_10edcc;
    }
    ctx->pc = 0x10EDC4u;
    {
        const bool branch_taken_0x10edc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EDC4u;
            // 0x10edc8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edc4) {
            ctx->pc = 0x10EDF0u;
            goto label_10edf0;
        }
    }
    ctx->pc = 0x10EDCCu;
label_10edcc:
    // 0x10edcc: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10edccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10edd0:
    // 0x10edd0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10edd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10edd4:
    // 0x10edd4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10edd8:
    // 0x10edd8: 0x60f809  jalr        $v1
label_10eddc:
    if (ctx->pc == 0x10EDDCu) {
        ctx->pc = 0x10EDE0u;
        goto label_10ede0;
    }
    ctx->pc = 0x10EDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EDE0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x10EDE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10EDE0u; }
            if (ctx->pc != 0x10EDE0u) { return; }
        }
        }
    }
    ctx->pc = 0x10EDE0u;
label_10ede0:
    // 0x10ede0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10ede4:
    // 0x10ede4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10ede8:
    // 0x10ede8: 0x1000fe3e  b           . + 4 + (-0x1C2 << 2)
label_10edec:
    if (ctx->pc == 0x10EDECu) {
        ctx->pc = 0x10EDECu;
            // 0x10edec: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x10EDF0u;
        goto label_10edf0;
    }
    ctx->pc = 0x10EDE8u;
    {
        const bool branch_taken_0x10ede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EDE8u;
            // 0x10edec: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ede8) {
            ctx->pc = 0x10E6E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e6e4;
        }
    }
    ctx->pc = 0x10EDF0u;
label_10edf0:
    // 0x10edf0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10edf0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10edf4:
    // 0x10edf4: 0x2e5b00b  movn        $s6, $s7, $a1
    ctx->pc = 0x10edf4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 23));
label_10edf8:
    // 0x10edf8: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x10edf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10edfc:
    // 0x10edfc: 0x1440fcea  bnez        $v0, . + 4 + (-0x316 << 2)
label_10ee00:
    if (ctx->pc == 0x10EE00u) {
        ctx->pc = 0x10EE00u;
            // 0x10ee00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10EE04u;
        goto label_10ee04;
    }
    ctx->pc = 0x10EDFCu;
    {
        const bool branch_taken_0x10edfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EDFCu;
            // 0x10ee00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edfc) {
            ctx->pc = 0x10E1A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e1a8;
        }
    }
    ctx->pc = 0x10EE04u;
label_10ee04:
    // 0x10ee04: 0x10000004  b           . + 4 + (0x4 << 2)
label_10ee08:
    if (ctx->pc == 0x10EE08u) {
        ctx->pc = 0x10EE08u;
            // 0x10ee08: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x10EE0Cu;
        goto label_10ee0c;
    }
    ctx->pc = 0x10EE04u;
    {
        const bool branch_taken_0x10ee04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EE04u;
            // 0x10ee08: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee04) {
            ctx->pc = 0x10EE18u;
            goto label_10ee18;
        }
    }
    ctx->pc = 0x10EE0Cu;
label_10ee0c:
    // 0x10ee0c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x10ee0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_10ee10:
    // 0x10ee10: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x10ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_10ee14:
    // 0x10ee14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10ee18:
    // 0x10ee18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ee18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ee1c:
    // 0x10ee1c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10ee20:
    // 0x10ee20: 0x60f809  jalr        $v1
label_10ee24:
    if (ctx->pc == 0x10EE24u) {
        ctx->pc = 0x10EE24u;
            // 0x10ee24: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x10EE28u;
        goto label_10ee28;
    }
    ctx->pc = 0x10EE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EE28u);
        ctx->pc = 0x10EE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EE20u;
            // 0x10ee24: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10EE28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10EE28u; }
            if (ctx->pc != 0x10EE28u) { return; }
        }
        }
    }
    ctx->pc = 0x10EE28u;
label_10ee28:
    // 0x10ee28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x10ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10ee2c:
    // 0x10ee2c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x10ee2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_10ee30:
    // 0x10ee30: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x10ee30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_10ee34:
    // 0x10ee34: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x10ee34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_10ee38:
    // 0x10ee38: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x10ee38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_10ee3c:
    // 0x10ee3c: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x10ee3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_10ee40:
    // 0x10ee40: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x10ee40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_10ee44:
    // 0x10ee44: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x10ee44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_10ee48:
    // 0x10ee48: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x10ee48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_10ee4c:
    // 0x10ee4c: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x10ee4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_10ee50:
    // 0x10ee50: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x10ee50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_10ee54:
    // 0x10ee54: 0x3e00008  jr          $ra
label_10ee58:
    if (ctx->pc == 0x10EE58u) {
        ctx->pc = 0x10EE58u;
            // 0x10ee58: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x10EE5Cu;
        goto label_10ee5c;
    }
    ctx->pc = 0x10EE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EE54u;
            // 0x10ee58: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EE5Cu;
label_10ee5c:
    // 0x10ee5c: 0x0  nop
    ctx->pc = 0x10ee5cu;
    // NOP
label_10ee60:
    // 0x10ee60: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10ee64:
    // 0x10ee64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_10ee68:
    if (ctx->pc == 0x10EE68u) {
        ctx->pc = 0x10EE68u;
            // 0x10ee68: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10EE6Cu;
        goto label_10ee6c;
    }
    ctx->pc = 0x10EE64u;
    {
        const bool branch_taken_0x10ee64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EE64u;
            // 0x10ee68: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee64) {
            ctx->pc = 0x10EE74u;
            goto label_10ee74;
        }
    }
    ctx->pc = 0x10EE6Cu;
label_10ee6c:
    // 0x10ee6c: 0x3e00008  jr          $ra
label_10ee70:
    if (ctx->pc == 0x10EE70u) {
        ctx->pc = 0x10EE70u;
            // 0x10ee70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x10EE74u;
        goto label_10ee74;
    }
    ctx->pc = 0x10EE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EE6Cu;
            // 0x10ee70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EE74u;
label_10ee74:
    // 0x10ee74: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x10ee74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
label_10ee78:
    // 0x10ee78: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_10ee7c:
    if (ctx->pc == 0x10EE7Cu) {
        ctx->pc = 0x10EE7Cu;
            // 0x10ee7c: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->pc = 0x10EE80u;
        goto label_10ee80;
    }
    ctx->pc = 0x10EE78u;
    {
        const bool branch_taken_0x10ee78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ee78) {
            ctx->pc = 0x10EE7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10EE78u;
            // 0x10ee7c: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10EEACu;
            goto label_10eeac;
        }
    }
    ctx->pc = 0x10EE80u;
label_10ee80:
    // 0x10ee80: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x10ee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_10ee84:
    // 0x10ee84: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x10ee84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_10ee88:
    // 0x10ee88: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x10ee88u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_10ee8c:
    // 0x10ee8c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x10ee8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_10ee90:
    // 0x10ee90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ee94:
    // 0x10ee94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_10ee98:
    // 0x10ee98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10ee9c:
    // 0x10ee9c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x10ee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_10eea0:
    // 0x10eea0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10eea4:
    // 0x10eea4: 0x3e00008  jr          $ra
label_10eea8:
    if (ctx->pc == 0x10EEA8u) {
        ctx->pc = 0x10EEA8u;
            // 0x10eea8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x10EEACu;
        goto label_10eeac;
    }
    ctx->pc = 0x10EEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EEA4u;
            // 0x10eea8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EEACu;
label_10eeac:
    // 0x10eeac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10eeacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10eeb0:
    // 0x10eeb0: 0x3e00008  jr          $ra
label_10eeb4:
    if (ctx->pc == 0x10EEB4u) {
        ctx->pc = 0x10EEB4u;
            // 0x10eeb4: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x10EEB8u;
        goto label_10eeb8;
    }
    ctx->pc = 0x10EEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EEB0u;
            // 0x10eeb4: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EEB8u;
label_10eeb8:
    // 0x10eeb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10eeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10eebc:
    // 0x10eebc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10eebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10eec0:
    // 0x10eec0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_10eec4:
    if (ctx->pc == 0x10EEC4u) {
        ctx->pc = 0x10EEC4u;
            // 0x10eec4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x10EEC8u;
        goto label_10eec8;
    }
    ctx->pc = 0x10EEC0u;
    {
        const bool branch_taken_0x10eec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EEC0u;
            // 0x10eec4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eec0) {
            ctx->pc = 0x10EED0u;
            goto label_10eed0;
        }
    }
    ctx->pc = 0x10EEC8u;
label_10eec8:
    // 0x10eec8: 0xc04377e  jal         func_10DDF8
label_10eecc:
    if (ctx->pc == 0x10EECCu) {
        ctx->pc = 0x10EED0u;
        goto label_10eed0;
    }
    ctx->pc = 0x10EEC8u;
    SET_GPR_U32(ctx, 31, 0x10EED0u);
    ctx->pc = 0x10DDF8u;
    if (runtime->hasFunction(0x10DDF8u)) {
        auto targetFn = runtime->lookupFunction(0x10DDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EED0u; }
        if (ctx->pc != 0x10EED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010DDF8_0x10ddf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EED0u; }
        if (ctx->pc != 0x10EED0u) { return; }
    }
    ctx->pc = 0x10EED0u;
label_10eed0:
    // 0x10eed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10eed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10eed4:
    // 0x10eed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10eed8:
    // 0x10eed8: 0x3e00008  jr          $ra
label_10eedc:
    if (ctx->pc == 0x10EEDCu) {
        ctx->pc = 0x10EEDCu;
            // 0x10eedc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x10EEE0u;
        goto label_10eee0;
    }
    ctx->pc = 0x10EED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EED8u;
            // 0x10eedc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EEE0u;
label_10eee0:
    // 0x10eee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10eee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10eee4:
    // 0x10eee4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10eee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10eee8:
    // 0x10eee8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_10eeec:
    if (ctx->pc == 0x10EEECu) {
        ctx->pc = 0x10EEECu;
            // 0x10eeec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x10EEF0u;
        goto label_10eef0;
    }
    ctx->pc = 0x10EEE8u;
    {
        const bool branch_taken_0x10eee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EEE8u;
            // 0x10eeec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eee8) {
            ctx->pc = 0x10EEF8u;
            goto label_10eef8;
        }
    }
    ctx->pc = 0x10EEF0u;
label_10eef0:
    // 0x10eef0: 0xc0437aa  jal         func_10DEA8
label_10eef4:
    if (ctx->pc == 0x10EEF4u) {
        ctx->pc = 0x10EEF8u;
        goto label_10eef8;
    }
    ctx->pc = 0x10EEF0u;
    SET_GPR_U32(ctx, 31, 0x10EEF8u);
    ctx->pc = 0x10DEA8u;
    if (runtime->hasFunction(0x10DEA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EEF8u; }
        if (ctx->pc != 0x10EEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010DEA8_0x10dea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EEF8u; }
        if (ctx->pc != 0x10EEF8u) { return; }
    }
    ctx->pc = 0x10EEF8u;
label_10eef8:
    // 0x10eef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10eef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10eefc:
    // 0x10eefc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ef00:
    // 0x10ef00: 0x3e00008  jr          $ra
label_10ef04:
    if (ctx->pc == 0x10EF04u) {
        ctx->pc = 0x10EF04u;
            // 0x10ef04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x10EF08u;
        goto label_fallthrough_0x10ef00;
    }
    ctx->pc = 0x10EF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF00u;
            // 0x10ef04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x10ef00:
    ctx->pc = 0x10EF08u;
}
